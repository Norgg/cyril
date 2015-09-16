/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "cyril.ypp" /* yacc.c:339  */

#include <cstdio>
#include <iostream>
#include "ofMain.h"
#include "cmds.h"
#include "Cyril.h"
#include "CyrilList.h"
#include "CyrilAssign.h"
#include "CyrilPush.h"
#include "CyrilDo.h"
#include "CyrilFor.h"
#include "CyrilIf.h"
#include "CyrilWhile.h"
#include "CyrilHexColor.h"
#include "CyrilNamedColor.h"
#include "CyrilBinaryOp.h"
#include "CyrilLoad.h"
#include "CyrilColorLoad.h"
#include "CyrilUnaryOp.h"
#include "CyrilParticle.h"
#include "CyrilPalette.h"
#include "CyrilPaletteItem.h"
#include "CyrilBlink.h"
#include "CyrilTile.h"

#include "CyrilOp.h"
#include "CyrilDie.h"
#include "CyrilBoxOp.h"
#include "CyrilMoveOp.h"
#include "CyrilRotateOp.h"
#include "CyrilScaleOp.h"
#include "CyrilPushMatrixOp.h"
#include "CyrilPopMatrixOp.h"
#include "CyrilLineOp.h"
#include "CyrilBackgroundOp.h"
#include "CyrilColorOp.h"
#include "CyrilDebugOp.h"
#include "CyrilBallOp.h"
#include "CyrilSphereOp.h"
#include "CyrilPegOp.h"
#include "CyrilRectOp.h"
#include "CyrilConeOp.h"
#include "CyrilGridOp.h"
#include "CyrilBallDetailOp.h"
#include "CyrilSphereDetailOp.h"
#include "CyrilImgOp.h"
#include "CyrilLightOp.h"
#include "CyrilFillOp.h"
#include "CyrilNoFillOp.h"
#include "CyrilInitOp.h"
#include "CyrilKaleidoscope.h"
#include "CyrilNoiseWarp.h"
#include "CyrilPixelate.h"
#include "CyrilBloom.h"

#include "CyrilAnimation.h"
#include "CyrilAnimStep.h"
#include "CyrilShape.h"
#include "CyrilShapeList.h"

#include "CyrilFun.h"
#include "CyrilWaveFun.h"
#include "CyrilSinFun.h"
#include "CyrilCosFun.h"
#include "CyrilTanFun.h"
#include "CyrilNoiseFun.h"
#include "CyrilRandFun.h"
#include "CyrilHsbFun.h"
#include "CyrilMapFun.h"
#include "CyrilLerpFun.h"
#include "CyrilPaletteFun.h"
#include "CyrilFftFun.h"

using namespace std;

extern "C" int yylex();
extern "C" int yyparse();
extern FILE *yyin;

int line_no = 0;
Cyril * pRoot;

void yyerror(const char *s);
map<string, int> symTab;
map<string, int> paletteTab;

int paletteFind(string _s) {
  if (paletteTab.find(_s) == paletteTab.end()) {
    int loc = paletteTab.size();
    paletteTab[_s] = loc;
    return loc;
  }
  return paletteTab[_s];
}

int regFind(string _s) {
  if ("TIME" == _s) return REG_TIME;
  if ("SECS" == _s) return REG_SECS;
  if ("FAST" == _s) return REG_FAST;
  if ("SLOW" == _s) return REG_SLOW;
  if ("FRAME" == _s) return REG_FRAME;
  if ("PI" == _s) return REG_PI;
  if ("TWO_PI" == _s) return REG_TWO_PI;
  if ("HEALTH" == _s) return REG_PARTICLE_HEALTH;
  if ("DECAY" == _s) return REG_PARTICLE_DECAY;
  if ("SIGNAL" == _s) return REG_MIND_SIGNAL;
  if ("ATTENTION" == _s) return REG_MIND_ATTENTION;
  if ("MEDITATION" == _s) return REG_MIND_MEDITATION;
  if ("DELTA" == _s) return REG_MIND_DELTA;
  if ("THETA" == _s) return REG_MIND_THETA;
  if ("LOWALPHA" == _s) return REG_MIND_LOWALPHA;
  if ("HIGHALPHA" == _s) return REG_MIND_HIGHALPHA;
  if ("LOWBETA" == _s) return REG_MIND_LOWBETA;
  if ("HIGHBETA" == _s) return REG_MIND_HIGHBETA;
  if ("LOWGAMMA" == _s) return REG_MIND_LOWGAMMA;
  if ("MIDGAMMA" == _s) return REG_MIND_MIDGAMMA;
  if ("KICK" == _s) return REG_BEAT_KICK;
  if ("SNARE" == _s) return REG_BEAT_SNARE;
  if ("HIHAT" == _s) return REG_BEAT_HIHAT;
  if ("PADX" == _s) return OSC_X;
  if ("PADY" == _s) return OSC_Y;
  if ("F1" == _s) return OSC_F1;
  if ("F2" == _s) return OSC_F2;
  if ("F3" == _s) return OSC_F3;
  if ("F4" == _s) return OSC_F4;
  
  if (symTab.find(_s) == symTab.end()) {
    int loc = symTab.size() + REG_COUNT;
    symTab[_s] = loc;
    return loc;
  }
  return symTab[_s];
}
 
Cyril * cyrilOpFactory(const char * _s, Cyril * _c) {
  if (strncmp("box", _s, 3) == 0) return new CyrilBoxOp(_c);
  if (strncmp("move", _s, 4) == 0) return new CyrilMoveOp(_c);
  if (strncmp("rotate", _s, 6) == 0) return new CyrilRotateOp(_c);
  if (strncmp("scale", _s, 5) == 0) return new CyrilScaleOp(_c);
  if (strncmp("pushMatrix", _s, 4) == 0) return new CyrilPushMatrixOp(_c);
  if (strncmp("popMatrix", _s, 3) == 0) return new CyrilPopMatrixOp(_c);
  if (strncmp("line", _s, 4) == 0) return new CyrilLineOp(_c);
  if (strncmp("background", _s, 10) == 0) return new CyrilBackgroundOp(_c);
  if (strncmp("color", _s, 5) == 0) return new CyrilColorOp(_c);
  if (strncmp("debug", _s, 5) == 0) return new CyrilDebugOp(_c);
  if (strncmp("peg", _s, 3) == 0) return new CyrilPegOp(_c);
  if (strncmp("rect", _s, 4) == 0) return new CyrilRectOp(_c);
  if (strncmp("cone", _s, 4) == 0) return new CyrilConeOp(_c);
  if (strncmp("grid", _s, 4) == 0) return new CyrilGridOp(_c);
  if (strncmp("ballDetail", _s, 10) == 0) return new CyrilBallDetailOp(_c);
  if (strncmp("sphereDetail", _s, 12) == 0) return new CyrilSphereDetailOp(_c);
  if (strncmp("ball", _s, 4) == 0) return new CyrilBallOp(_c);
  if (strncmp("sphere", _s, 6) == 0) return new CyrilSphereOp(_c);
  if (strncmp("img", _s, 3) == 0) return new CyrilImgOp(_c);
  if (strncmp("light", _s, 5) == 0) return new CyrilLightOp(_c);
  if (strncmp("lightColor", _s, 10) == 0) return new CyrilLightOp(_c);
  if (strncmp("noFill", _s, 6) == 0) return new CyrilNoFillOp(_c);
  if (strncmp("stroke", _s, 6) == 0) return new CyrilNoFillOp(_c);
  if (strncmp("fill", _s, 4) == 0) return new CyrilFillOp(_c);
  if (strncmp("vert", _s, 4) == 0) return new CyrilShapeList(_c);
  if (strncmp("fxK", _s, 3) == 0) return new CyrilKaleidoscope(_c);
  if (strncmp("fxNW", _s, 4) == 0) return new CyrilNoiseWarp(_c);
  if (strncmp("fxP", _s, 3) == 0) return new CyrilPixelate(_c);
  if (strncmp("fxB", _s, 3) == 0) return new CyrilBloom(_c);
  if (strncmp("die", _s, 3) == 0) return new CyrilDie(_c);
  return new CyrilOp(_c);
}

Cyril * cyrilFunFactory(const char * _s, Cyril * _c) {
  if (strncmp("wave", _s, 4) == 0) return new CyrilWaveFun(_c);
  if (strncmp("sin", _s, 3) == 0) return new CyrilSinFun(_c);
  if (strncmp("cos", _s, 3) == 0) return new CyrilCosFun(_c);
  if (strncmp("tan", _s, 3) == 0) return new CyrilTanFun(_c);
  if (strncmp("noise", _s, 5) == 0) return new CyrilNoiseFun(_c);
  if (strncmp("rand", _s, 4) == 0) return new CyrilRandFun(_c);
  if (strncmp("hsb", _s, 3) == 0) return new CyrilHsbFun(_c);
  if (strncmp("hsv", _s, 3) == 0) return new CyrilHsbFun(_c);
  if (strncmp("map", _s, 3) == 0) return new CyrilMapFun(_c);
  if (strncmp("lerp", _s, 4) == 0) return new CyrilLerpFun(_c);
  if (strncmp("pal", _s, 3) == 0) return new CyrilPaletteFun(_c);
  if (strncmp("fft", _s, 3) == 0) return new CyrilFftFun(_c);
  return new CyrilFun(_c);
}


#line 252 "y.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 187 "cyril.ypp" /* yacc.c:355  */

  float fval;
  char *sval;
  class Cyril *ast;

#line 390 "y.tab.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 405 "y.tab.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  45
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   551

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  8
/* YYNRULES -- Number of rules.  */
#define YYNRULES  50
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  144

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   207,   207,   212,   216,   224,   229,   234,   239,   244,
     249,   254,   259,   263,   268,   273,   278,   284,   289,   294,
     299,   304,   313,   318,   326,   331,   339,   343,   350,   354,
     358,   362,   366,   370,   374,   378,   382,   386,   390,   394,
     398,   402,   406,   410,   414,   418,   422,   426,   430,   434,
     438
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENDL", "COMMA", "LEFT", "RIGHT",
  "ASSIGN", "DO", "TIMES", "END", "UNTIL", "IF", "WHILE", "INIT", "FOR",
  "TO", "STEP", "PARTICLE", "PALETTE", "BLINK", "ANIM", "NEXT", "TILE",
  "SHAPE", "PLUS", "MINUS", "MOD", "MULT", "DIV", "EQ", "LESS", "LESSEQ",
  "GR", "GREQ", "NOTEQ", "NOT", "AND", "OR", "HEX_COLOR", "LABEL",
  "KEYWORD", "FUNCTION", "COLOR_VAR", "PALETTE_NAME", "COLOR_NAME",
  "NUMBER", "$accept", "cyril", "statement_list", "statement", "anim_list",
  "palette_list", "expr_list", "expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301
};
# endif

#define YYPACT_NINF -36

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-36)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     431,   -36,    99,    99,    99,   431,   -35,    99,   -21,    99,
     -14,    99,    31,    29,    40,    33,    49,   431,   -36,    99,
      99,   -36,   -36,    59,   -36,   -36,   -36,   -36,   480,   143,
     465,   -36,    58,    11,   513,    63,    13,    65,    -4,    18,
     431,    99,   -36,    22,    99,   -36,   -36,   450,   -10,    82,
      67,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,   431,   -36,   431,    99,   431,    99,
      27,   431,   431,    69,    28,   431,   179,   214,   -36,   282,
     -36,   -36,     5,   431,   -10,   -10,   -10,   -10,   -10,   -10,
     -10,   -10,   -10,   -10,   -10,   513,   513,   213,   247,   384,
     281,   513,    99,    -9,   315,   431,   -36,    72,   349,    74,
     -36,   -36,   -36,   383,    75,    78,    99,    87,    26,    88,
      99,    91,   431,    93,   -36,    94,   -36,   -36,   499,   -36,
     -36,   -36,    43,   -36,   431,   -36,   -36,    99,   -36,   350,
     431,   417,    95,   -36
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     5,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     3,     0,
       0,    29,    35,     0,    33,    34,    28,    32,     0,     0,
       0,    21,     0,     0,    26,     0,     0,     0,     0,     0,
       0,     0,     7,     0,     0,     1,     4,     0,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,    12,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     6,     0,
      50,    31,     0,     0,    37,    36,    40,    38,    39,    41,
      45,    46,    43,    44,    42,    47,    48,     0,     0,     0,
       0,    27,     0,     0,     0,    22,    18,     0,     0,     0,
       8,     9,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,    13,    14,     0,    15,
      24,    16,     0,    17,    23,    19,    10,     0,    25,     0,
       0,     0,     0,    11
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -36,   -36,   -33,    -5,   -36,   -36,    -1,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    16,    17,    18,    38,   103,    33,    34
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      31,   119,    28,    29,    30,    32,    73,    76,    36,    69,
      39,   112,    46,    43,    68,    69,    71,    69,    74,    47,
      48,    75,    69,    35,    65,    78,    69,    62,    63,   130,
      69,    97,    37,    98,    40,   100,    41,   120,   104,   105,
      44,    77,   108,    42,    79,    19,   138,    69,    82,    45,
     113,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    49,    67,    70,    99,    72,   101,
      83,    46,   106,   102,   107,   122,    20,   124,   126,    21,
      22,   127,    23,    24,    25,    26,    27,    19,    81,   134,
     129,   131,    46,    46,   133,    46,   135,   136,   143,    46,
      46,   118,     0,    46,    19,     0,     0,   141,    46,     0,
       0,     0,     0,     0,     0,     0,   128,     0,    20,   132,
       0,    21,    22,     0,    23,    24,    25,    26,    27,    46,
       0,     0,     0,     0,     0,    20,    46,   139,    21,    22,
       0,    23,    24,    25,    26,    27,    64,     0,     0,     0,
       0,     2,     0,     0,     0,     3,     4,     5,     6,     0,
       0,     7,     8,     9,    10,     0,    11,    12,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,     0,
      62,    63,     1,    13,    14,     0,    15,     2,     0,   109,
       0,     3,     4,     5,     6,     0,     0,     7,     8,     9,
      10,     0,    11,    12,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,   110,     0,    13,
      14,     2,    15,   114,     0,     3,     4,     5,     6,     0,
       0,     7,     8,     9,    10,     0,    11,    12,     0,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
       1,    62,    63,    13,    14,     2,    15,   115,     0,     3,
       4,     5,     6,     0,     0,     7,     8,     9,    10,     0,
      11,    12,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,   111,     0,    13,    14,     2,
      15,   117,     0,     3,     4,     5,     6,     0,     0,     7,
       8,     9,    10,     0,    11,    12,     0,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,     1,    62,
      63,    13,    14,     2,    15,   121,     0,     3,     4,     5,
       6,     0,     0,     7,     8,     9,    10,     0,    11,    12,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,   140,     0,    13,    14,     2,    15,   123,
       0,     3,     4,     5,     6,     0,     0,     7,     8,     9,
      10,     0,    11,    12,     0,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,     1,    62,    63,    13,
      14,     2,    15,   125,     0,     3,     4,     5,     6,     0,
     116,     7,     8,     9,    10,     0,    11,    12,     0,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
       1,    62,    63,    13,    14,     2,    15,   142,     0,     3,
       4,     5,     6,     0,     1,     7,     8,     9,    10,     2,
      11,    12,     0,     3,     4,     5,     6,     0,     0,     7,
       8,     9,    10,     0,    11,    12,    80,    13,    14,     0,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    13,    14,    66,    15,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,     0,    62,    63,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,     0,    62,    63,     0,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,   137,    62,    63,     0,
       0,     0,     0,     0,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,     0,    62,    63,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,     0,
      62,    63
};

static const yytype_int16 yycheck[] =
{
       5,    10,     2,     3,     4,    40,    10,    40,     9,     4,
      11,     6,    17,    14,     3,     4,     3,     4,    22,    19,
      20,     3,     4,    44,    29,     3,     4,    37,    38,     3,
       4,    64,    46,    66,     3,    68,     7,    46,    71,    72,
       7,    41,    75,     3,    44,     5,     3,     4,    49,     0,
      83,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,     5,     7,     3,    67,     3,    69,
       3,    76,     3,    46,    46,     3,    36,     3,     3,    39,
      40,     3,    42,    43,    44,    45,    46,     5,     6,   122,
       3,     3,    97,    98,     3,   100,     3,     3,     3,   104,
     105,   102,    -1,   108,     5,    -1,    -1,   140,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    36,   120,
      -1,    39,    40,    -1,    42,    43,    44,    45,    46,   134,
      -1,    -1,    -1,    -1,    -1,    36,   141,   137,    39,    40,
      -1,    42,    43,    44,    45,    46,     3,    -1,    -1,    -1,
      -1,     8,    -1,    -1,    -1,    12,    13,    14,    15,    -1,
      -1,    18,    19,    20,    21,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,     3,    40,    41,    -1,    43,     8,    -1,    10,
      -1,    12,    13,    14,    15,    -1,    -1,    18,    19,    20,
      21,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     3,    -1,    40,
      41,     8,    43,    10,    -1,    12,    13,    14,    15,    -1,
      -1,    18,    19,    20,    21,    -1,    23,    24,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
       3,    37,    38,    40,    41,     8,    43,    10,    -1,    12,
      13,    14,    15,    -1,    -1,    18,    19,    20,    21,    -1,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     3,    -1,    40,    41,     8,
      43,    10,    -1,    12,    13,    14,    15,    -1,    -1,    18,
      19,    20,    21,    -1,    23,    24,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,     3,    37,
      38,    40,    41,     8,    43,    10,    -1,    12,    13,    14,
      15,    -1,    -1,    18,    19,    20,    21,    -1,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     3,    -1,    40,    41,     8,    43,    10,
      -1,    12,    13,    14,    15,    -1,    -1,    18,    19,    20,
      21,    -1,    23,    24,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,     3,    37,    38,    40,
      41,     8,    43,    10,    -1,    12,    13,    14,    15,    -1,
      16,    18,    19,    20,    21,    -1,    23,    24,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
       3,    37,    38,    40,    41,     8,    43,    10,    -1,    12,
      13,    14,    15,    -1,     3,    18,    19,    20,    21,     8,
      23,    24,    -1,    12,    13,    14,    15,    -1,    -1,    18,
      19,    20,    21,    -1,    23,    24,     6,    40,    41,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,     8,    43,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,     9,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    17,    37,    38,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     8,    12,    13,    14,    15,    18,    19,    20,
      21,    23,    24,    40,    41,    43,    48,    49,    50,     5,
      36,    39,    40,    42,    43,    44,    45,    46,    54,    54,
      54,    50,    40,    53,    54,    44,    53,    46,    51,    53,
       3,     7,     3,    53,     7,     0,    50,    54,    54,     5,
       9,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    37,    38,     3,    50,     8,     7,     3,     4,
       3,     3,     3,    10,    22,     3,    49,    54,     3,    54,
       6,     6,    53,     3,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    49,    49,    54,
      49,    54,    46,    52,    49,    49,     3,    46,    49,    10,
       3,     3,     6,    49,    10,    10,    16,    10,    53,    10,
      46,    10,     3,    10,     3,    10,     3,     3,    54,     3,
       3,     3,    53,     3,    49,     3,     3,    17,     3,    54,
       3,    49,    10,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    51,    51,    52,    52,    53,    53,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     3,     2,     4,     4,
       7,    12,     3,     6,     6,     6,     6,     6,     4,     6,
       5,     2,     3,     5,     3,     4,     1,     3,     1,     1,
       4,     3,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 207 "cyril.ypp" /* yacc.c:1646  */
    {
  pRoot = (yyvsp[0].ast);
}
#line 1654 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 213 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = (yyvsp[0].ast);
}
#line 1662 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 217 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilList((yyvsp[-1].ast), (yyvsp[0].ast));
  
}
#line 1671 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 225 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new Cyril();
  line_no++;
}
#line 1680 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 230 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = cyrilOpFactory((yyvsp[-2].sval), (yyvsp[-1].ast));
  line_no++;
}
#line 1689 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 235 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = cyrilOpFactory((yyvsp[-1].sval), new Cyril());
  line_no++;
}
#line 1698 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 240 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilAssign(regFind((yyvsp[-3].sval)), (yyvsp[-1].ast));
  line_no++;
}
#line 1707 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 245 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilAssign(regFind((yyvsp[-3].sval)), (yyvsp[-1].ast));
  line_no++;
}
#line 1716 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 250 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilDo((yyvsp[-5].ast), (yyvsp[-2].ast));
  line_no += 2;
}
#line 1725 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 255 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilFor(regFind((yyvsp[-10].sval)), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast));
  line_no += 2;
}
#line 1734 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 260 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilIf((yyvsp[-1].ast), (yyvsp[0].ast));
}
#line 1742 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 264 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilIf((yyvsp[-4].ast), (yyvsp[-2].ast));
  line_no += 2;
}
#line 1751 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 269 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilWhile((yyvsp[-4].ast), (yyvsp[-2].ast));
  line_no += 2;
}
#line 1760 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 274 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilParticle((yyvsp[-4].ast), (yyvsp[-2].ast));
  line_no += 2;
}
#line 1769 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 279 "cyril.ypp" /* yacc.c:1646  */
    {
  int pNum = paletteFind((yyvsp[-4].sval));
  (yyval.ast) = new CyrilPalette(pNum, (yyvsp[-2].ast));
  line_no += 2;
}
#line 1779 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 285 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilBlink((yyvsp[-4].ast), (yyvsp[-2].ast));
  line_no += 2;
}
#line 1788 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 290 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilAnimation((yyvsp[-2].ast));
  line_no += 2;
}
#line 1797 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 295 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilTile((yyvsp[-4].ast), (yyvsp[-2].ast));
  line_no += 2;
}
#line 1806 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 300 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilShape((yyvsp[-2].ast));
  line_no += 2;
}
#line 1815 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 305 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilInitOp((yyvsp[0].ast));
  line_no += 1;
}
#line 1824 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 314 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilAnimStep((yyvsp[-2].fval), (yyvsp[0].ast), new Cyril());
  line_no++;
}
#line 1833 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 319 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilAnimStep((yyvsp[-2].fval), (yyvsp[0].ast), (yyvsp[-4].ast));
  line_no++;
}
#line 1842 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 327 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilPaletteItem((yyvsp[-2].fval), (yyvsp[-1].ast));
  line_no++;
}
#line 1851 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 332 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilList((yyvsp[-3].ast), new CyrilPaletteItem((yyvsp[-2].fval), (yyvsp[-1].ast)));
  line_no++;
}
#line 1860 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 340 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = (yyvsp[0].ast);
}
#line 1868 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 344 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilList((yyvsp[-2].ast), (yyvsp[0].ast));
}
#line 1876 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 351 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilNamedColor((yyvsp[0].sval));
}
#line 1884 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 355 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilHexColor((yyvsp[0].sval));
}
#line 1892 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 359 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = cyrilFunFactory((yyvsp[-3].sval), (yyvsp[-1].ast));
}
#line 1900 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 363 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = cyrilFunFactory((yyvsp[-2].sval), new Cyril());
}
#line 1908 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 367 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilPush((yyvsp[0].fval));
}
#line 1916 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 371 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilColorLoad(regFind((yyvsp[0].sval)));
}
#line 1924 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 375 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilPush(paletteFind((yyvsp[0].sval)));
}
#line 1932 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 379 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilLoad(regFind((yyvsp[0].sval)));
}
#line 1940 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 383 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilBinaryOp("-", (yyvsp[-2].ast), (yyvsp[0].ast));
}
#line 1948 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 387 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilBinaryOp("+", (yyvsp[-2].ast), (yyvsp[0].ast));
}
#line 1956 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 391 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilBinaryOp("*", (yyvsp[-2].ast), (yyvsp[0].ast));
}
#line 1964 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 395 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilBinaryOp("/", (yyvsp[-2].ast), (yyvsp[0].ast));
}
#line 1972 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 399 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilBinaryOp("%", (yyvsp[-2].ast), (yyvsp[0].ast));
}
#line 1980 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 403 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilBinaryOp("==", (yyvsp[-2].ast), (yyvsp[0].ast));
}
#line 1988 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 407 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilBinaryOp("!=", (yyvsp[-2].ast), (yyvsp[0].ast));
}
#line 1996 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 411 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilBinaryOp(">", (yyvsp[-2].ast), (yyvsp[0].ast));
}
#line 2004 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 415 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilBinaryOp(">=", (yyvsp[-2].ast), (yyvsp[0].ast));
}
#line 2012 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 419 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilBinaryOp("<", (yyvsp[-2].ast), (yyvsp[0].ast));
}
#line 2020 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 423 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilBinaryOp("<=", (yyvsp[-2].ast), (yyvsp[0].ast));
}
#line 2028 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 427 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilBinaryOp("&", (yyvsp[-2].ast), (yyvsp[0].ast));
}
#line 2036 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 431 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilBinaryOp("|", (yyvsp[-2].ast), (yyvsp[0].ast));
}
#line 2044 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 435 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = new CyrilUnaryOp("!", (yyvsp[0].ast));
}
#line 2052 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 439 "cyril.ypp" /* yacc.c:1646  */
    {
  (yyval.ast) = (yyvsp[-1].ast);
}
#line 2060 "y.tab.cpp" /* yacc.c:1646  */
    break;


#line 2064 "y.tab.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 442 "cyril.ypp" /* yacc.c:1906  */


void yyerror(const char *s) {
  cout << s << " at line " << (line_no + 1) << endl;
}
