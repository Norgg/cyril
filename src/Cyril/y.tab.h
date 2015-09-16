/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ENDL = 258,
    COMMA = 259,
    LEFT = 260,
    RIGHT = 261,
    ASSIGN = 262,
    DO = 263,
    TIMES = 264,
    END = 265,
    UNTIL = 266,
    IF = 267,
    WHILE = 268,
    INIT = 269,
    FOR = 270,
    TO = 271,
    STEP = 272,
    PARTICLE = 273,
    PALETTE = 274,
    BLINK = 275,
    ANIM = 276,
    NEXT = 277,
    TILE = 278,
    SHAPE = 279,
    PLUS = 280,
    MINUS = 281,
    MOD = 282,
    MULT = 283,
    DIV = 284,
    EQ = 285,
    LESS = 286,
    LESSEQ = 287,
    GR = 288,
    GREQ = 289,
    NOTEQ = 290,
    NOT = 291,
    AND = 292,
    OR = 293,
    HEX_COLOR = 294,
    LABEL = 295,
    KEYWORD = 296,
    FUNCTION = 297,
    COLOR_VAR = 298,
    PALETTE_NAME = 299,
    COLOR_NAME = 300,
    NUMBER = 301
  };
#endif
/* Tokens.  */
#define ENDL 258
#define COMMA 259
#define LEFT 260
#define RIGHT 261
#define ASSIGN 262
#define DO 263
#define TIMES 264
#define END 265
#define UNTIL 266
#define IF 267
#define WHILE 268
#define INIT 269
#define FOR 270
#define TO 271
#define STEP 272
#define PARTICLE 273
#define PALETTE 274
#define BLINK 275
#define ANIM 276
#define NEXT 277
#define TILE 278
#define SHAPE 279
#define PLUS 280
#define MINUS 281
#define MOD 282
#define MULT 283
#define DIV 284
#define EQ 285
#define LESS 286
#define LESSEQ 287
#define GR 288
#define GREQ 289
#define NOTEQ 290
#define NOT 291
#define AND 292
#define OR 293
#define HEX_COLOR 294
#define LABEL 295
#define KEYWORD 296
#define FUNCTION 297
#define COLOR_VAR 298
#define PALETTE_NAME 299
#define COLOR_NAME 300
#define NUMBER 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 187 "cyril.ypp" /* yacc.c:1909  */

  float fval;
  char *sval;
  class Cyril *ast;

#line 152 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

extern "C" {
  int yyparse (void);
}

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
