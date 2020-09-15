
%{
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <unistd.h>
#include "hashtbl.h"

HASHTBL *hashtbl;

int MAX_ERRORS = 5; //declare the maximum number of error we can encounter
int scope = 0; // variable to keep track of current scope
int error_count = 0; // variable to keep track of errors encountered, used in yyeror()

extern char *yytext;
extern int yylineno;
extern FILE *yyin;
extern char *buf;

void yyerror(char *message);

extern int yylex();

extern void yyterminate();


%}

/* here we declare the possible value types that lexer returns e.g ICONST returns a value of type int intvalue through yylval*/
%union{

    int intvalue;
    double doublevalue;
    char *stringvalue;

    }

%start program // declare starting rule


//----Here we Declare the tokens that the Syntax Analyzer expects from the lexical analyzer and uses them to create the pasc600.tab.h---------------------

%token<stringvalue> T_PROGRAM T_CONST T_TYPE T_ARRAY T_OF T_VAR T_FORWARD T_FUNCTION T_PROCEDURE T_INTEGER T_REAL T_BOOLEAN T_CHAR T_STRING T_BEGIN
%token<stringvalue> T_END T_IF T_THEN T_ELSE T_CASE T_OTHERWISE T_WHILE T_DO T_FOR T_DOWNTO T_TO T_READ T_WRITE T_LENGTH
%token<stringvalue> T_RELOP T_ADDOP T_OROP T_MULDIVANDOP T_NOTOP
%token<stringvalue> T_ID
%token<intvalue> T_ICONST
%token<doublevalue> T_RCONST
%token<stringvalue> T_BCONST T_CCONST T_SCONST
%token<stringvalue> T_LPAREN T_RPAREN T_SEMI T_DOT T_COMMA T_EQU T_COLON T_LBRACK T_RBRACK T_ASSIGN T_DOTDOT T_EOF

//--------------------------------------------------------------------------------------------------------------------------------------------------------

%type<stringvalue> program header declarations subprograms comp_statement constdefs typedefs vardefs constant_defs expression variable expressions constant
%type<stringvalue> type_def type_defs  dims limit limits typename standard_type
%type<stringvalue> identifiers  variable_defs subprogram sub_header formal_parameters
%type<stringvalue> parameter_list pass statements statement if_statement if_tail while_statement
%type<stringvalue> for_statement iter_space io_statement read_list write_list write_item
%type<stringvalue> expression1 expression2 expression3

//--------------------------------------------------------------------------------------------------------------------------------------------------------

%nonassoc IFX
%nonassoc T_ELSE
%nonassoc EXP1
%nonassoc EXP2
%nonassoc EXP3

%left T_OROP T_ADDOP
%left T_MULDIVANDOP
%left T_RELOP T_EQU


%%

program:header declarations subprograms {scope++;}
	comp_statement {hashtbl_get(hashtbl, scope); scope--;}
	T_DOT {hashtbl_get(hashtbl, scope); printf("\t\t\t\t\tprogram -> header declarations subprograms comp_statement T_DOT\n"); printf("--- NUMBER OF ERRORS = %d ---\n", error_count);}
  ;

header:T_PROGRAM T_ID T_SEMI {hashtbl_insert(hashtbl,$2, NULL ,scope); printf("\t\t\t\t\theader -> T_PROGRAM T_ID T_SEMI\n");}
  |     T_PROGRAM T_ID {hashtbl_insert(hashtbl,$2, NULL ,scope); printf("\t\t\t\t\theader -> T_PROGRAM T_ID\n"); }
	error {printf("\t\t\t\t\tT_SEMI missing\n");}
  ;

declarations:constdefs typedefs vardefs {printf("\t\t\t\t\tdeclarations -> constdefs typedefs vardefs\n");}
  ;

constdefs:T_CONST constant_defs T_SEMI {printf("\t\t\t\t\tconstdefs -> T_CONST constant_defs T_SEMI\n");}
  |	T_CONST constant_defs error {printf("\t\t\t\t\tconstdefs -> T_CONST constant_defs\n"); printf("\t\t\t\t\tT_SEMI missing\n");}
  |	/* ε */ {printf("\t\t\t\t\tconstdefs -> ε\n");}
  ;

constant_defs:constant_defs T_SEMI T_ID	{hashtbl_insert(hashtbl,$3,NULL ,scope);} T_EQU expression {printf("\t\t\t\t\tconstant_defs -> constant_defs T_SEMI T_ID T_EQU expression\n");}
  |	constant_defs error {printf("\t\t\t\t\tT_SEMI missing\n");} T_ID {hashtbl_insert(hashtbl,$4,NULL ,scope);} T_EQU expression {printf("\t\t\t\t\tconstant_defs -> constant_defs T_ID T_EQU expression\n");}
  |	T_ID {hashtbl_insert(hashtbl,$1,NULL ,scope);} T_EQU expression {printf("\t\t\t\t\tconstant_defs -> T_ID T_EQU expression\n");}
  ;

expression:expression T_RELOP expression1 %prec EXP1 {printf("\t\t\t\t\texpression -> expression T_RELOP expression\n");}
  |	expression T_EQU expression1 %prec EXP1 {printf("\t\t\t\t\texpression -> expression T_EQU expression\n");}
  |	expression1 %prec EXP1 {printf("\t\t\t\t\texpression -> expression1\n");}
  ;

expression1:expression1 T_ADDOP expression2 %prec EXP2 {printf("\t\t\t\t\texpression1 -> expression T_ADDOP expression\n");}
  |	expression1 T_OROP expression2 %prec EXP2 {printf("\t\t\t\t\texpression1 -> expression T_OROP expression\n");}
  |	expression2 %prec EXP2 {printf("\t\t\t\t\texpression1 -> expression2\n");}
  ;

expression2:expression2 T_MULDIVANDOP expression3 {printf("\t\t\t\t\texpression2 -> expression T_MULDIVANDOP expression\n");}
  |	expression3 {printf("\t\t\t\t\texpression2 -> expression3\n");}
  ;

expression3:T_ADDOP expression %prec EXP3 {printf("\t\t\t\t\texpression3 -> T_ADDOP expression\n");}
  |	T_NOTOP expression %prec EXP3 {printf("\t\t\t\t\texpression3 -> T_NOTOP expression\n");}
  |	variable {printf("\t\t\t\t\texpression3 -> variable\n");}
  |	T_ID {hashtbl_insert(hashtbl,$1,NULL ,scope);}
	T_LPAREN expressions T_RPAREN {printf("\t\t\t\t\texpression3 -> T_LPAREN expressions T_RPAREN\n");}
  |	constant {printf("\t\t\t\t\texpression3 -> constant\n");}
  |	T_LPAREN expression T_RPAREN {printf("\t\t\t\t\texpression3 -> T_LPAREN expression T_RPAREN\n");}
  ;

variable:T_ID {hashtbl_insert(hashtbl,$1,NULL ,scope); printf("\t\t\t\t\tvariable -> T_ID\n");}
  |	variable T_LBRACK expressions T_RBRACK {printf("\t\t\t\t\tvariable -> variable T_LBRACK expressions T_RBRACK\n");}
  ;

expressions: expressions T_COMMA expression {printf("\t\t\t\t\texpressions -> expressions T_COMMA expression\n");}
  |	expression {printf("\t\t\t\t\texpressions -> expression\n");}
  ;

constant:T_ICONST {printf("\t\t\t\t\tconstant -> T_ICONST\n");}
  |	T_RCONST {printf("\t\t\t\t\tconstant -> T_RCONST\n");}
  |	T_BCONST {printf("\t\t\t\t\tconstant -> T_BCONST\n");}
  |	T_CCONST {printf("\t\t\t\t\tconstant -> T_CCONST\n");}
  |	T_SCONST {printf("\t\t\t\t\tconstant -> T_SCONST\n");}
  ;

typedefs:T_TYPE type_defs T_SEMI {printf("\t\t\t\t\ttypedefs -> T_TYPE type_defs T_SEMI\n");}
  |	T_TYPE type_defs error {printf("\t\t\t\t\tT_SEMI missing\n"); printf("\t\t\t\t\ttypedefs -> T_TYPE type_defs\n");}
  |	/* ε */ {printf("\t\t\t\t\ttypedefs -> ε\n");}
  ;

type_defs:type_defs T_SEMI T_ID	{hashtbl_insert(hashtbl,$3,NULL ,scope);}
	T_EQU type_def {printf("\t\t\t\t\ttype_defs -> type_defs T_SEMI T_ID T_EQU type_def\n");}
  |	type_defs error {printf("\t\t\t\t\tT_SEMI missing\n");}
	T_ID {hashtbl_insert(hashtbl,$4,NULL ,scope);}
	T_EQU type_def {printf("\t\t\t\t\ttype_defs -> type_defs T_ID T_EQU type_def\n");}
  |	T_ID {hashtbl_insert(hashtbl,$1,NULL ,scope);}
	T_EQU type_def {printf("\t\t\t\t\ttype_defs -> T_ID T_EQU type_def\n");}
  ;

type_def:T_ARRAY T_LBRACK dims T_RBRACK T_OF typename {printf("\t\t\t\t\ttype_def -> T_ARRAY T_LBRACK dims T_RBRACK T_OF typename\n");}
  |	T_ARRAY T_LBRACK dims error {printf("\t\t\t\t\tT_RBRACK missing\n");}
	T_OF typename {printf("\t\t\t\t\ttype_def -> T_ARRAY T_LBRACK dims T_OF typename\n");}
  |	T_LPAREN identifiers T_RPAREN {printf("\t\t\t\t\ttype_def -> T_LPAREN identifiers T_RPAREN\n");}
  |	limit T_DOTDOT limit {printf("\t\t\t\t\ttype_def -> limit T_DOTDOT limit\n");}
  ;

dims:dims T_COMMA limits {printf("\t\t\t\t\tdims -> dims T_COMMA limits\n");}
  |	limits {printf("\t\t\t\t\tdims -> limits\n");}
  ;

limits:limit T_DOTDOT limit {printf("\t\t\t\t\tlimits -> limit T_DOTDOT limit\n");}
  |	T_ID {hashtbl_insert(hashtbl,$1,NULL ,scope); printf("\t\t\t\t\tlimits -> T_ID\n");}
  ;

limit:T_ADDOP T_ICONST {printf("\t\t\t\t\tlimit -> T_ADDOP T_ICONST\n");}
  |	T_ADDOP T_ID {hashtbl_insert(hashtbl,$2,NULL ,scope); printf("\t\t\t\t\tlimit -> T_ADDOP T_ID\n");}
  |	T_ICONST {printf("\t\t\t\t\tlimit -> T_ICONST\n");}
  |	T_CCONST {printf("\t\t\t\t\tlimit -> T_CCONST\n");}
  |	T_BCONST {printf("\t\t\t\t\tlimit -> T_BCONST\n");}
  |	T_ID {hashtbl_insert(hashtbl,$1,NULL ,scope); printf("\t\t\t\t\tlimit -> T_ID\n");}
  ;

typename:standard_type {printf("\t\t\t\t\ttypename -> standard_type\n");}
  |	T_ID {hashtbl_insert(hashtbl,$1,NULL ,scope); printf("\t\t\t\t\ttypename -> T_ID\n");} ;

standard_type:T_INTEGER {printf("\t\t\t\t\tstandard_type -> T_INTEGER\n");}
  |	T_REAL {printf("\t\t\t\t\tstandard_type -> T_REAL\n");}
  |	T_BOOLEAN {printf("\t\t\t\t\tstandard_type -> T_BOOLEAN\n");}
  |	T_CHAR {printf("\t\t\t\t\tstandard_type -> T_CHAR\n");}
  |	T_STRING {printf("\t\t\t\t\tstandard_type -> T_STRING\n");}
  ;

vardefs:T_VAR variable_defs T_SEMI {printf("\t\t\t\t\tvardefs -> T_VAR variable_defs T_SEMI\n");}
  |	T_VAR variable_defs error {printf("\t\t\t\t\tT_SEMI missing\n"); printf("\t\t\t\t\tvardefs -> T_VAR variable_defs\n");}
  |	/* ε */ {printf("\t\t\t\t\tvardefs -> ε\n");}
  ;

variable_defs:variable_defs T_SEMI identifiers T_COLON typename	{printf("\t\t\t\t\tvariable_defs -> variable_defs T_SEMI identifiers T_COLON typename\n");}
  |	variable_defs error {printf("\t\t\t\t\tT_SEMI missing\n");}
	identifiers T_COLON typename {printf("\t\t\t\t\tvariable_defs -> variable_defs identifiers T_COLON typename\n");}
  |	identifiers T_COLON typename {printf("\t\t\t\t\tvariable_defs -> identifiers T_COLON typename\n");}
  ;

identifiers:identifiers T_COMMA T_ID {hashtbl_insert(hashtbl,$3,NULL ,scope); printf("\t\t\t\t\tidentifiers -> identifiers T_COMMA T_ID\n");}
  |	T_ID {hashtbl_insert(hashtbl,$1,NULL ,scope); printf("\t\t\t\t\tidentifiers ->T_ID\n");}
  ;

subprograms:subprograms subprogram T_SEMI {printf("\t\t\t\t\tsubprograms -> subprograms subprogram T_SEMI\n");}
  |	subprograms subprogram error {printf("\t\t\t\t\tT_SEMI missing\n"); printf("\t\t\t\t\tsubprograms -> subprograms subprogram\n");}
  |	/* ε */ {printf("\t\t\t\t\tsubprograms -> ε\n");}
  ;

subprogram:sub_header T_SEMI T_FORWARD {printf("\t\t\t\t\tsubprogram -> sub_header T_SEMI T_FORWARD\n");}
  |	sub_header error T_FORWARD {printf("\t\t\t\t\tT_SEMI missing\n"); printf("\t\t\t\t\tsubprogram -> sub_header T_FORWARD\n");}
  |	sub_header T_SEMI declarations subprograms comp_statement {hashtbl_get(hashtbl, scope); printf("\t\t\t\t\tsubprogram -> sub_header T_SEMI declarations subprograms comp_statement\n"); scope--;}
  |	sub_header error declarations subprograms comp_statement {printf("\t\t\t\t\tT_SEMI missing\n"); hashtbl_get(hashtbl, scope); printf("\t\t\t\t\tsubprogram -> sub_header T_SEMI declarations subprograms comp_statement\n"); scope--;}
  ;

sub_header:T_FUNCTION T_ID {scope++; hashtbl_insert(hashtbl,$2,NULL ,scope);}
	formal_parameters T_COLON typename {printf("\t\t\t\t\tsub_header -> T_FUNCTION T_ID formal_parameters T_COLON typename\n");}
  |	T_PROCEDURE T_ID {scope++; hashtbl_insert(hashtbl,$2,NULL ,scope);}
	formal_parameters {printf("\t\t\t\t\tsub_header -> T_PROCEDURE T_ID formal_parameters\n");}
  |	T_FUNCTION T_ID {hashtbl_insert(hashtbl,$2,NULL ,scope); printf("\t\t\t\t\tsub_header -> T_FUNCTION T_ID\n");}
  ;

formal_parameters:T_LPAREN parameter_list T_RPAREN {printf("\t\t\t\t\tformal_parameters -> T_LPAREN parameter_list T_RPAREN\n");}
  |	/* ε */ {printf("\t\t\t\t\tformal_parameters -> ε\n");}
  ;

parameter_list:parameter_list T_SEMI pass identifiers T_COLON typename {printf("\t\t\t\t\tparameter_list -> parameter_list T_SEMI pass identifiers T_COLON typename\n");}
  |	parameter_list error {printf("\t\t\t\t\tT_SEMI missing\n");}
	pass identifiers T_COLON typename {printf("\t\t\t\t\tparameter_list -> parameter_list pass identifiers T_COLON typename\n");}
  |	pass identifiers T_COLON typename {printf("\t\t\t\t\tparameter_list -> pass identifiers T_COLON typename\n");}
  ;

pass:T_VAR {printf("\t\t\t\t\tpass -> T_VAR\n");}
  |	/* ε */ {printf("\t\t\t\t\tpass -> ε\n");}
  ;

comp_statement:T_BEGIN statements T_END {printf("\t\t\t\t\tcomp_statement -> T_BEGIN statements T_END\n");}
  ;

statements:statements T_SEMI statement {printf("\t\t\t\t\tstatements -> statements T_SEMI statement\n");}
  |	statement {printf("\t\t\t\t\tstatements -> statement\n");}
  ;

statement:assignment {printf("\t\t\t\t\tstatement -> assignment\n");}
  |	if_statement {printf("\t\t\t\t\tstatement -> if_statement\n");}
  |	while_statement {printf("\t\t\t\t\tstatement -> while_statement\n");}
  |	for_statement {printf("\t\t\t\t\tstatement -> for_statement\n");}
  |	subprogram_call {printf("\t\t\t\t\tstatement -> subprogram_call\n");}
  |	io_statement {printf("\t\t\t\t\tstatement -> io_statement\n");}
  |	comp_statement {printf("\t\t\t\t\tstatement -> comp_statement\n");}
  |	/* ε */ {printf("\t\t\t\t\tstatement -> ε\n");}
  ;

assignment:variable T_ASSIGN expression {printf("\t\t\t\t\tassignment -> variable T_ASSIGN expression\n");}
  ;

if_statement:T_IF expression T_THEN statement if_tail {printf("\t\t\t\t\tif_statement -> T_IF expression T_THEN statement if_tail\n");}
  ;

if_tail:T_ELSE statement {printf("\t\t\t\t\tif_tail -> T_ELSE statement\n");}
  |	/* ε */ %prec IFX {printf("\t\t\t\t\tif_tail -> ε\n");}
  ;

while_statement:T_WHILE expression T_DO statement {printf("\t\t\t\t\twhile_statement -> T_WHILE expression T_DO statement\n");}
  ;

for_statement:T_FOR T_ID {hashtbl_insert(hashtbl,$2,NULL ,scope);}
	T_ASSIGN iter_space T_DO statement {printf("\t\t\t\t\tfor_statement -> T_FOR T_ID T_ASSIGN iter_space T_DO statement\n");}
  ;

iter_space:expression T_TO expression {printf("\t\t\t\t\titer_space -> expression T_TO expression\n");}
  |	expression T_DOWNTO expression {printf("\t\t\t\t\titer_space -> expression T_DOWNTO expression\n");}
  ;

subprogram_call:T_ID {printf("\t\t\t\t\tsubprogram_call -> T_ID\n"); hashtbl_insert(hashtbl,$1,NULL ,scope);}
  |	T_ID {hashtbl_insert(hashtbl,$1,NULL ,scope);}
	T_LPAREN expressions T_RPAREN {printf("\t\t\t\t\tsubprogram_call -> T_ID T_LPAREN expressions T_RPAREN\n");}
  ;

io_statement:T_READ T_LPAREN read_list T_RPAREN {printf("\t\t\t\t\tio_statement -> T_READ T_LPAREN read_list T_RPAREN\n");}
  |	T_WRITE T_LPAREN write_list T_RPAREN {printf("\t\t\t\t\tio_statement -> T_READ T_LPAREN write_list T_RPAREN\n");}
  |	T_WRITE T_LPAREN error T_RPAREN {yyclearin; printf("\t\t\t\t\tio_statement -> T_WRITE T_LPAREN T_RPAREN\n");}
  ;

read_list:read_list T_COMMA read_item {printf("\t\t\t\t\tread_list-> read_list T_COMMA read_item\n");}
  |	read_item {printf("\t\t\t\t\tread_list-> read_item\n");}
  ;

read_item:variable {printf("\t\t\t\t\tread_item-> variable\n");}
  ;

write_list:write_list T_COMMA write_item {printf("\t\t\t\t\twrite_list-> write_list T_COMMA write_item\n");}
  |	write_item {printf("\t\t\t\t\twrite_list-> write_item\n");}
  ;

write_item:expression {printf("\t\t\t\t\twrite_item-> expression\n");}
  ;

%%

int main(int argc, char* argv[]){

    if(!(hashtbl = hashtbl_create(10, NULL))) {
		fprintf(stderr, "ERROR: hashtbl_create() failed\n");
		exit(0);
    }
    yyin = fopen(argv[1], "r"); //read only

    yyparse();   // parsing procedure

    hashtbl_destroy(hashtbl);

    fclose(yyin);// close file when we are done

    return(0);


}


void yyerror(char *message){
	error_count++; // each time we face an error increment number of errors by 1 to keep track until we reach MAX_ERROR
	printf("(%d)ERROR: \"%s\" | TOKEN: %s | LINE: %d \n", error_count, message, yytext, yylineno);
	if(error_count == MAX_ERRORS){
 		printf("ERRORS DETECTED IN PROGRAM: %d\nERRORS ACCEPTED: %d\nTermination...\n", error_count, MAX_ERRORS);
 		exit(-1);
	}
}
