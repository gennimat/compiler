
%{

    #include <math.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include "pasc600.tab.h"
    #include <string.h>

    int value ;
    int token_num = 1 ; // holds value of sequence number of token
    int error_num=0;
    char * str ;
    char buf[100];
    char *s ;
    int extline =0; // boolean to see if string extends in another line


%}

%option yylineno
%option nounput
%option noinput
%option noyywrap

/* Don't seperate lower-case from upper-case */
%option case-insensitive

/* Declaration for comments automaton */
%x comment

/* Declaration of sconst automaton */
%x sconst

/* Define */
letter [a-z]
letterdigit [a-z0-9]
digit [0-9]
hexdigit [0123456789abcdef]


/*----------Identifiers ID---------------------*/
ID _?{letter}({letterdigit}|_+{letterdigit})*


/*----------Unsigned whole numbers ICONST---------------------*/
ICONST (0|[1-9]{digit}*)
ICONSTHEX ("0X")[A-F1-9]{hexdigit}*



/*----------Unsigned real numbers RCONST---------------------*/
RCONST1 ([0]|[1-9]{digit}*)?\.(0|({digit}*[1-9]+))("e"[+-]?(0|[1-9]{digit}*))?
RCONST2 ([0]|[1-9]{digit}*)("e"[+-]?(0|[1-9]{digit}*))
RCONSTHEX "0X"(0|[A-F1-9]{hexdigit}*)?(\.)(0|0*[A-F1-9][123456789abcdef]*)


/* CCONST   '[ !"#$%&'()*+,-./0123456789:;=<>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[]^_`abcdefghijklmnopqrstuvwxyz{|}~]' */

/* Only 1 ascii character between''. exception special characters */
CCONST 	 '[[:print:]]'
CCONSTLF '\\n'
CCONSTFF '\\f'
CCONSTHT '\\t'
CCONSTHR '\\r'
CCONSTBS '\\b'
CCONHSVT '\\v'


%%
"PROGRAM" {
    printf("%d. TOKEN FOUND = PROGRAM, LINE = %d \n",token_num++,yylineno);
    yylval.stringvalue = strdup(yytext);
    return T_PROGRAM;
}


"CONST" {
    printf("%d. TOKEN FOUND = CONST, LINE = %d\n",token_num++,yylineno);
    yylval.stringvalue = strdup(yytext);
    return T_CONST;
}

"TYPE" {
    printf("%d. TOKEN FOUND = TYPE, LINE = %d\n",token_num++,yylineno);
    yylval.stringvalue = strdup(yytext);
    return T_TYPE;
}

"ARRAY" {
     printf("%d. TOKEN FOUND = ARRAY, LINE = %d\n",token_num++,yylineno);
     yylval.stringvalue = strdup(yytext);
    return T_ARRAY;
}

"OF" {
    printf("%d. TOKEN FOUND = OF, LINE = %d \n",token_num++,yylineno);
    yylval.stringvalue = strdup(yytext);
    return T_OF;
}

"VAR" {
    printf("%d. TOKEN FOUND = VAR, LINE = %d \n",token_num++,yylineno);
    yylval.stringvalue = strdup(yytext);
    return T_VAR;
}

"FORWARD" {
    printf("%d. TOKEN FOUND = FORWARD, LINE = %d \n",token_num++,yylineno);
    yylval.stringvalue = strdup(yytext);
    return T_FORWARD;
}

"FUNCTION" {
    printf("%d. TOKEN FOUND = FUNCTION, LINE = %d \n",token_num++,yylineno);
    yylval.stringvalue = strdup(yytext);
    return T_FUNCTION;
}

"PROCEDURE" {
    printf("%d. TOKEN FOUND = PROCEDURE, LINE = %d \n",token_num++,yylineno);
    yylval.stringvalue = strdup(yytext);
    return T_PROCEDURE;
}

"INTEGER" {
    printf("%d. TOKEN FOUND = INTEGER, LINE = %d \n",token_num++,yylineno);
    yylval.stringvalue = strdup(yytext);
    return T_INTEGER;
}

"REAL" {
    printf("%d. TOKEN FOUND = REAL, LINE = %d \n",token_num++,yylineno);
    yylval.stringvalue = strdup(yytext);
    return T_REAL;
}

"BOOLEAN" {
    printf("%d. TOKEN FOUND = BOOLEAN, LINE = %d \n",token_num++,yylineno);
    yylval.stringvalue = strdup(yytext);
    return T_BOOLEAN;
}

"CHAR" {
    printf("%d. TOKEN FOUND = CHAR, LINE = %d \n",token_num++,yylineno);
    yylval.stringvalue = strdup(yytext);
    return T_CHAR;
}

"STRING" {
    printf("%d. TOKEN FOUND = STRING, LINE = %d \n",token_num++,yylineno);
    yylval.stringvalue = strdup(yytext);
    return T_STRING;
}

"BEGIN" {
    printf("%d. TOKEN FOUND = BEGIN, LINE = %d \n",token_num++,yylineno);
    yylval.stringvalue = strdup(yytext);
    return T_BEGIN;
}

"END" {
   printf("%d. TOKEN FOUND = END, LINE = %d \n",token_num++,yylineno);
   yylval.stringvalue = strdup(yytext);
   return T_END;
}

"IF" {
    printf("%d. TOKEN FOUND = IF, LINE = %d \n",token_num++,yylineno);
    yylval.stringvalue = strdup(yytext);
    return T_IF;
}

"THEN" {
    printf("%d. TOKEN FOUND = THEN, LINE = %d \n",token_num++,yylineno);
    yylval.stringvalue = strdup(yytext);
    return T_THEN;
}

"ELSE" {
    printf("%d. TOKEN FOUND = ELSE, LINE = %d \n",token_num++,yylineno);
    yylval.stringvalue = strdup(yytext);
    return T_ELSE;
}

"CASE" {
   printf("%d. TOKEN FOUND = CASE, LINE = %d \n",token_num++,yylineno);
   yylval.stringvalue = strdup(yytext);
   return T_CASE;
}

"OTHERWISE" {
    printf("%d. TOKEN FOUND = OTHERWISE, LINE = %d \n",token_num++,yylineno);
    yylval.stringvalue = strdup(yytext);
    return T_OTHERWISE;
}

"WHILE" {
    printf("%d. TOKEN FOUND = WHILE, LINE = %d \n",token_num++,yylineno);
    yylval.stringvalue = strdup(yytext);
    return T_WHILE;
}

"DO" {
    printf("%d. TOKEN FOUND = DO, LINE = %d \n",token_num++,yylineno);
    yylval.stringvalue = strdup(yytext);
    return T_DO;
}

"FOR" {
    printf("%d. TOKEN FOUND = FOR, LINE = %d \n",token_num++,yylineno);
    yylval.stringvalue = strdup(yytext);
    return T_FOR;
}

"DOWNTO" {
    printf("%d. TOKEN FOUND = DOWNTO, LINE = %d \n",token_num++,yylineno);
    yylval.stringvalue = strdup(yytext);
    return T_DOWNTO;
}

"TO" {
    printf("%d. TOKEN FOUND = TO, LINE = %d \n",token_num++,yylineno);
    yylval.stringvalue = strdup(yytext);
    return T_TO;
}

"READ" {
    printf("%d. TOKEN FOUND = READ, LINE = %d \n",token_num++,yylineno);
    yylval.stringvalue = strdup(yytext);
    return T_READ;
}

"WRITE" {
    printf("%d. TOKEN FOUND = WRITE, LINE = %d \n",token_num++,yylineno);
    yylval.stringvalue = strdup(yytext);
    return T_WRITE;
}

"LENGTH" {
    printf("%d. TOKEN FOUND = LENGTH, LINE = %d \n",token_num++,yylineno);
    yylval.stringvalue = strdup(yytext);
    return T_LENGTH;
}


"TRUE" {
  printf("%d. TOKEN FOUND = BCONST: %s, LINE = %d \n",token_num++,yytext,yylineno);
  yylval.stringvalue = strdup(yytext);
  return T_BCONST;
}

"FALSE" {
  printf("%d. TOKEN FOUND = BCONST: %s, LINE = %d \n",token_num++,yytext,yylineno);
  yylval.stringvalue = strdup(yytext);
  return T_BCONST;
}


">" {
  printf("%d. TOKEN FOUND = RELOP: %s, LINE = %d \n",token_num++,yytext,yylineno);
  yylval.stringvalue = strdup(yytext);
  return T_RELOP;
}

">=" {
  printf("%d. TOKEN FOUND = RELOP: %s, LINE = %d \n",token_num++,yytext,yylineno);
  yylval.stringvalue = strdup(yytext);
  return T_RELOP;
}

"<" {
  printf("%d. TOKEN FOUND = RELOP: %s, LINE = %d \n",token_num++,yytext,yylineno);
  yylval.stringvalue = strdup(yytext);
  return T_RELOP;
}

"<=" {
  printf("%d. TOKEN FOUND = RELOP: %s, LINE = %d \n",token_num++,yytext,yylineno);
  yylval.stringvalue = strdup(yytext);
  return T_RELOP;
}

"<>" {
  printf("%d. TOKEN FOUND = RELOP: %s, LINE = %d \n",token_num++,yytext,yylineno);
  yylval.stringvalue = strdup(yytext);
  return T_RELOP;
}

"+" {
  printf("%d. TOKEN FOUND = ADDOP: %s, LINE = %d \n",token_num++,yytext,yylineno);
  yylval.stringvalue = strdup(yytext);
  return T_ADDOP;
}

"-" {
  printf("%d. TOKEN FOUND = ADDOP: %s, LINE = %d \n",token_num++,yytext,yylineno);
  yylval.stringvalue = strdup(yytext);
  return T_ADDOP;
}

"OR" {
  printf("%d. TOKEN FOUND = OR: %s, LINE = %d \n",token_num++,yytext,yylineno);
  yylval.stringvalue = strdup(yytext);
  return T_OROP;
}

"*" {
  printf("%d. TOKEN FOUND = MULDIVANDOP: %s, LINE = %d \n",token_num++,yytext,yylineno);
  yylval.stringvalue = strdup(yytext);
  return T_MULDIVANDOP;
}

"/" {
  printf("%d. TOKEN FOUND = MULDIVANDOP: %s, LINE = %d \n",token_num++,yytext,yylineno);
  yylval.stringvalue = strdup(yytext);
  return T_MULDIVANDOP;
}

"DIV" {
  printf("%d. TOKEN FOUND = MULDIVANDOP: %s, LINE = %d \n",token_num++,yytext,yylineno);
  yylval.stringvalue = strdup(yytext);
  return T_MULDIVANDOP;
}

"AND" {
  printf("%d. TOKEN FOUND = MULDIVANDOP: %s, LINE = %d \n",token_num++,yytext,yylineno);
  yylval.stringvalue = strdup(yytext);
  return T_MULDIVANDOP;
}

"MOD" {
  printf("%d. TOKEN FOUND = MULDIVANDOP: %s, LINE = %d \n",token_num++,yytext,yylineno);
  yylval.stringvalue = strdup(yytext);
  return T_MULDIVANDOP;
}

"NOT" {
  printf("%d. TOKEN FOUND = NOTOP, LINE = %d \n",token_num++,yylineno);
  yylval.stringvalue = strdup(yytext);
  return T_NOTOP;
}

"(" {
  printf("%d. TOKEN FOUND = LPAREN, LINE = %d \n",token_num++,yylineno);
  yylval.stringvalue = strdup(yytext);
  return T_LPAREN;
}

")" {
  printf("%d. TOKEN FOUND = RPAREN, LINE = %d \n",token_num++,yylineno);
  yylval.stringvalue = strdup(yytext);
  return T_RPAREN;
}

";" {
  printf("%d. TOKEN FOUND = SEMI, LINE = %d \n",token_num++,yylineno);
  yylval.stringvalue = strdup(yytext);
  return T_SEMI;
}

"." {
 printf("%d. TOKEN FOUND = DOT, LINE = %d \n",token_num++,yylineno);
 yylval.stringvalue = strdup(yytext);
  return T_DOT;
}

"," {
  printf("%d. TOKEN FOUND = COMMA, LINE = %d \n",token_num++,yylineno);
  yylval.stringvalue = strdup(yytext);
  return T_COMMA;
}


"=" {
  printf("%d. TOKEN FOUND = EQU, LINE = %d \n",token_num++,yylineno);
  yylval.stringvalue = strdup(yytext);
  return T_EQU;
}

":" {
  printf("%d. TOKEN FOUND = COLON, LINE = %d \n",token_num++,yylineno);
  yylval.stringvalue = strdup(yytext);
  return T_COLON;
}

"[" {
  printf("%d. TOKEN FOUND = LBRACK, LINE = %d \n",token_num++,yylineno);
  yylval.stringvalue = strdup(yytext);
  return T_LBRACK;
}

"]" {
  printf("%d. TOKEN FOUND = RBRACK, LINE = %d \n",token_num++,yylineno);
  yylval.stringvalue = strdup(yytext);
  return T_RBRACK;
}

":=" {
  printf("%d. TOKEN FOUND = ASSIGN, LINE = %d \n",token_num++,yylineno);
  yylval.stringvalue = strdup(yytext);
  return T_ASSIGN;
}

".." {
  printf("%d. TOKEN FOUND = DOTDOT, LINE = %d \n",token_num++,yylineno);
  yylval.stringvalue = strdup(yytext);
  return T_DOTDOT;
}

{ID} {
printf("%d. TOKEN FOUND = ID:%s, LINE = %d \n",token_num++,yytext,yylineno);
yylval.stringvalue = strdup(yytext);
return T_ID;
}

{ICONST} {
value = atoi(yytext);
yylval.intvalue = value;
printf("%d. TOKEN FOUND = ICONST:%d, LINE = %d \n",token_num++,value,yylineno);
return T_ICONST;
    }

{ICONSTHEX} {
str = yytext;
value = strtoul(str+2,NULL,16); // str+2 ignore 0x and store int to value. this value is going to be assigned to yylval
printf("%d. TOKEN FOUND = ICONSTHEX: DEC_VAL= %d, HEX_VAL= %s, LINE = %d \n",token_num++,value,yytext,yylineno);
yylval.intvalue = value;
return T_ICONST;
    }

{CCONST} {
char *s = yytext;
s++;
printf("%d. TOKEN FOUND = CCONST: %c, LINE = %d \n",token_num++,*s,yylineno);
yylval.stringvalue = strdup(yytext);
return T_CCONST;
    }

{CCONSTLF} {
char *s = yytext;
s++;
printf("%d. TOKEN FOUND = CCONSTLF: %c%c, LINE = %d \n",token_num++,*s,*(s+1),yylineno);
yylval.stringvalue = strdup(yytext);
return T_CCONST;
    }


{CCONSTFF} {
char *s = yytext;
s++;
printf("%d. TOKEN FOUND = CCONSTFF: %c%c, LINE = %d \n",token_num++,*s,*(s+1),yylineno);
yylval.stringvalue = strdup(yytext);
return T_CCONST;
    }


{CCONSTHT} {
char *s = yytext;
s++;
printf("%d. TOKEN FOUND = CCONSTHT: %c%c, LINE = %d \n",token_num++,*s,*(s+1),yylineno);
yylval.stringvalue = strdup(yytext);
return T_CCONST;
    }

{CCONSTHR} {
char *s = yytext;
s++;
printf("%d. TOKEN FOUND = CCONSTHR: %c%c, LINE = %d \n",token_num++,*s,*(s+1),yylineno);
yylval.stringvalue = strdup(yytext);
return T_CCONST;
    }

{CCONSTBS} {
char *s = yytext;
s++;
printf("%d. TOKEN FOUND = CCONSTBS: %c%c, LINE = %d \n",token_num++,*s,*(s+1),yylineno);
yylval.stringvalue = strdup(yytext);
return T_CCONST;
    }

{CCONHSVT} {
char *s = yytext;
s++;
printf("%d. TOKEN FOUND = CCONSTVT: %c%c, LINE = %d \n",token_num++,*s,*(s+1),yylineno);
yylval.stringvalue = strdup(yytext);
return T_CCONST;
    }

{RCONST1} {
double value = atof(yytext);
printf("%d. TOKEN FOUND = RCONST1: %s, LINE = %d \n",token_num++,yytext,yylineno);
yylval.doublevalue = value;
return T_RCONST;
    }

{RCONST2} {
double value = atof(yytext);
printf("%d. TOKEN FOUND = RCONST2: %s, LINE = %d \n",token_num++,yytext,yylineno);
yylval.doublevalue = value;
return T_RCONST;
    }

{RCONSTHEX} {
char * end;
double value = strtod(yytext,&end); // convert hex to double
printf("%d. TOKEN FOUND = RCONSTHEX: DEC_VAL = %lf HEX_VAL = %s, LINE = %d \n",token_num++,value,yytext,yylineno);
yylval.doublevalue = value;
return T_RCONST;
    }

[\n] { }  //ignore newline
[  \t]* { } //ignore whitespace / tab

<INITIAL><<EOF>> {return T_EOF;}


    /*Start of COMMENTS*/
"{" {BEGIN(comment);}

<comment>([^}\n])* ; // ignore all characters except }
<comment>[\n]
<comment><<EOF>> {printf("Unexpected File End (Unterminated Comment).\n");exit(1);}
<comment>"}" {BEGIN(INITIAL);}
    /*End of  COMMENTS */


    /*start of SCONST*/
\" { BEGIN(sconst); s=buf; } //Start State sconst

<sconst>\"  {
    *s = 0; //reset the sconst
    BEGIN(INITIAL); // Exit sconst
    if (extline == 1){
    printf("%d. TOKEN FOUND = SCONST: %s, EXTENDS IN LINES = %d--%d \n",token_num++,buf,yylineno-1,yylineno);
    extline = 0; //print sconst if it extends in another line
    return T_SCONST;
        }
    else{
    printf("%d. TOKEN FOUND = SCONST: %s, LINE = %d \n",token_num++,buf,yylineno);// print the sconst
    return T_SCONST;
    }
    }

    /*special cases */
<sconst>\\n { *s++ = '\n';}
<sconst>\\f { *s++ = '\f';}
<sconst>\\t { *s++ = '\t';}
<sconst>\\r { *s++ = '\r';}
<sconst>\\b { *s++ = '\b';}
<sconst>\\v { *s++ = '\v';}
<sconst>\\\" {*s++ = '\"';}
<sconst>\\\\ {*s++ = '\\';}
<sconst><<EOF>> {printf("Unexpected File End(Unterminated SCONST).\n");}

<sconst>\\(.|\n) {*s++ = yytext[1]; extline=1;} // allows the sconst to continue on the next line



<sconst>\n  {printf("ERROR: Invalid SCONST\n");}

<sconst>. { *s++ = *yytext; } // for all the other cases save yytext to str_buf
    /* end of SCONST */


    /* All other cases not matching any of the above */
.  {
    error_num++ ;
    printf("ERROR %d: INVALID TOKEN --> %s, AT LINE %d\n",error_num,yytext,yylineno);
    }



%%




/*
int main(int argc, char* argv[]){

    //int token;

    yyin = fopen(argv[1], "r"); //read only
    //token=yylex();  //get first token

    while(yylex() != T_EOF){ //until the file ends continue reading tokens
    yylex();
    }

    fclose(yyin);// close file when we are done
    printf("-----Lexical Analysis Completed-----\n");
    printf("-----Tokens Found: %d--------------\n", token_num-1 );
    exit(1);
    }
*/




