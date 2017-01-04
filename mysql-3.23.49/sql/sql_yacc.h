
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     END_OF_INPUT = 258,
     EQ = 259,
     EQUAL_SYM = 260,
     GE = 261,
     GT_SYM = 262,
     LE = 263,
     LT = 264,
     NE = 265,
     IS = 266,
     SHIFT_LEFT = 267,
     SHIFT_RIGHT = 268,
     SET_VAR = 269,
     AVG_SYM = 270,
     COUNT_SYM = 271,
     MAX_SYM = 272,
     MIN_SYM = 273,
     SUM_SYM = 274,
     STD_SYM = 275,
     ADD = 276,
     ALTER = 277,
     AFTER_SYM = 278,
     ANALYZE_SYM = 279,
     BEGIN_SYM = 280,
     CHANGE = 281,
     COMMENT_SYM = 282,
     COMMIT_SYM = 283,
     CREATE = 284,
     CROSS = 285,
     DELETE_SYM = 286,
     DO_SYM = 287,
     DROP = 288,
     INSERT = 289,
     FLUSH_SYM = 290,
     SELECT_SYM = 291,
     MASTER_SYM = 292,
     REPAIR = 293,
     RESET_SYM = 294,
     PURGE = 295,
     SLAVE = 296,
     START_SYM = 297,
     STOP_SYM = 298,
     TRUNCATE_SYM = 299,
     ROLLBACK_SYM = 300,
     OPTIMIZE = 301,
     SHOW = 302,
     UPDATE_SYM = 303,
     KILL_SYM = 304,
     LOAD = 305,
     LOCK_SYM = 306,
     LOCKS_SYM = 307,
     UNLOCK_SYM = 308,
     ACTION = 309,
     AGGREGATE_SYM = 310,
     ALL = 311,
     AND = 312,
     AS = 313,
     ASC = 314,
     AUTO_INC = 315,
     AUTOCOMMIT = 316,
     AVG_ROW_LENGTH = 317,
     BACKUP_SYM = 318,
     BERKELEY_DB_SYM = 319,
     BINARY = 320,
     BIT_SYM = 321,
     BOOL_SYM = 322,
     BOTH = 323,
     BY = 324,
     CASCADE = 325,
     CHECKSUM_SYM = 326,
     CHECK_SYM = 327,
     COMMITTED_SYM = 328,
     COLUMNS = 329,
     COLUMN_SYM = 330,
     CONCURRENT = 331,
     CONSTRAINT = 332,
     DATABASES = 333,
     DATA_SYM = 334,
     DEFAULT = 335,
     DELAYED_SYM = 336,
     DELAY_KEY_WRITE_SYM = 337,
     DESC = 338,
     DESCRIBE = 339,
     DISTINCT = 340,
     DYNAMIC_SYM = 341,
     ENCLOSED = 342,
     ESCAPED = 343,
     ESCAPE_SYM = 344,
     EXISTS = 345,
     EXTENDED_SYM = 346,
     FILE_SYM = 347,
     FIRST_SYM = 348,
     FIXED_SYM = 349,
     FLOAT_NUM = 350,
     FOREIGN = 351,
     FROM = 352,
     FULL = 353,
     FULLTEXT_SYM = 354,
     GEMINI_SYM = 355,
     GEMINI_SPIN_RETRIES = 356,
     GLOBAL_SYM = 357,
     GRANT = 358,
     GRANTS = 359,
     GREATEST_SYM = 360,
     GROUP = 361,
     HAVING = 362,
     HEAP_SYM = 363,
     HEX_NUM = 364,
     HIGH_PRIORITY = 365,
     HOSTS_SYM = 366,
     IDENT = 367,
     IGNORE_SYM = 368,
     INDEX = 369,
     INFILE = 370,
     INNER_SYM = 371,
     INNOBASE_SYM = 372,
     INTO = 373,
     IN_SYM = 374,
     ISOLATION = 375,
     ISAM_SYM = 376,
     JOIN_SYM = 377,
     KEYS = 378,
     KEY_SYM = 379,
     LEADING = 380,
     LEAST_SYM = 381,
     LEVEL_SYM = 382,
     LEX_HOSTNAME = 383,
     LIKE = 384,
     LINES = 385,
     LOCAL_SYM = 386,
     LOGS_SYM = 387,
     LONG_NUM = 388,
     LONG_SYM = 389,
     LOW_PRIORITY = 390,
     MASTER_HOST_SYM = 391,
     MASTER_USER_SYM = 392,
     MASTER_LOG_FILE_SYM = 393,
     MASTER_LOG_POS_SYM = 394,
     MASTER_PASSWORD_SYM = 395,
     MASTER_PORT_SYM = 396,
     MASTER_CONNECT_RETRY_SYM = 397,
     MATCH = 398,
     MAX_ROWS = 399,
     MEDIUM_SYM = 400,
     MERGE_SYM = 401,
     MIN_ROWS = 402,
     MYISAM_SYM = 403,
     NATIONAL_SYM = 404,
     NATURAL = 405,
     NCHAR_SYM = 406,
     NOT = 407,
     NO_SYM = 408,
     NULL_SYM = 409,
     NUM = 410,
     ON = 411,
     OPEN_SYM = 412,
     OPTION = 413,
     OPTIONALLY = 414,
     OR = 415,
     OR_OR_CONCAT = 416,
     ORDER_SYM = 417,
     OUTER = 418,
     OUTFILE = 419,
     DUMPFILE = 420,
     PACK_KEYS_SYM = 421,
     PARTIAL = 422,
     PRIMARY_SYM = 423,
     PRIVILEGES = 424,
     PROCESS = 425,
     PROCESSLIST_SYM = 426,
     RAID_0_SYM = 427,
     RAID_STRIPED_SYM = 428,
     RAID_TYPE = 429,
     RAID_CHUNKS = 430,
     RAID_CHUNKSIZE = 431,
     READ_SYM = 432,
     REAL_NUM = 433,
     REFERENCES = 434,
     REGEXP = 435,
     RELOAD = 436,
     RENAME = 437,
     REPEATABLE_SYM = 438,
     RESTORE_SYM = 439,
     RESTRICT = 440,
     REVOKE = 441,
     ROWS_SYM = 442,
     ROW_FORMAT_SYM = 443,
     ROW_SYM = 444,
     SET = 445,
     SERIALIZABLE_SYM = 446,
     SESSION_SYM = 447,
     SHUTDOWN = 448,
     STARTING = 449,
     STATUS_SYM = 450,
     STRAIGHT_JOIN = 451,
     TABLES = 452,
     TABLE_SYM = 453,
     TEMPORARY = 454,
     TERMINATED = 455,
     TEXT_STRING = 456,
     TO_SYM = 457,
     TRAILING = 458,
     TRANSACTION_SYM = 459,
     TYPE_SYM = 460,
     FUNC_ARG0 = 461,
     FUNC_ARG1 = 462,
     FUNC_ARG2 = 463,
     FUNC_ARG3 = 464,
     UDF_RETURNS_SYM = 465,
     UDF_SONAME_SYM = 466,
     UDF_SYM = 467,
     UNCOMMITTED_SYM = 468,
     UNION_SYM = 469,
     UNIQUE_SYM = 470,
     USAGE = 471,
     USE_SYM = 472,
     USING = 473,
     VALUES = 474,
     VARIABLES = 475,
     WHERE = 476,
     WITH = 477,
     WRITE_SYM = 478,
     COMPRESSED_SYM = 479,
     BIGINT = 480,
     BLOB_SYM = 481,
     CHAR_SYM = 482,
     CHANGED = 483,
     COALESCE = 484,
     DATETIME = 485,
     DATE_SYM = 486,
     DECIMAL_SYM = 487,
     DOUBLE_SYM = 488,
     ENUM = 489,
     FAST_SYM = 490,
     FLOAT_SYM = 491,
     INT_SYM = 492,
     LIMIT = 493,
     LONGBLOB = 494,
     LONGTEXT = 495,
     MEDIUMBLOB = 496,
     MEDIUMINT = 497,
     MEDIUMTEXT = 498,
     NUMERIC_SYM = 499,
     PRECISION = 500,
     QUICK = 501,
     REAL = 502,
     SMALLINT = 503,
     STRING_SYM = 504,
     TEXT_SYM = 505,
     TIMESTAMP = 506,
     TIME_SYM = 507,
     TINYBLOB = 508,
     TINYINT = 509,
     TINYTEXT = 510,
     UNSIGNED = 511,
     VARBINARY = 512,
     VARCHAR = 513,
     VARYING = 514,
     ZEROFILL = 515,
     AGAINST = 516,
     ATAN = 517,
     BETWEEN_SYM = 518,
     BIT_AND = 519,
     BIT_OR = 520,
     CASE_SYM = 521,
     CONCAT = 522,
     CONCAT_WS = 523,
     CURDATE = 524,
     CURTIME = 525,
     DATABASE = 526,
     DATE_ADD_INTERVAL = 527,
     DATE_SUB_INTERVAL = 528,
     DAY_HOUR_SYM = 529,
     DAY_MINUTE_SYM = 530,
     DAY_SECOND_SYM = 531,
     DAY_SYM = 532,
     DECODE_SYM = 533,
     ELSE = 534,
     ELT_FUNC = 535,
     ENCODE_SYM = 536,
     ENCRYPT = 537,
     EXPORT_SET = 538,
     EXTRACT_SYM = 539,
     FIELD_FUNC = 540,
     FORMAT_SYM = 541,
     FOR_SYM = 542,
     FROM_UNIXTIME = 543,
     GROUP_UNIQUE_USERS = 544,
     HOUR_MINUTE_SYM = 545,
     HOUR_SECOND_SYM = 546,
     HOUR_SYM = 547,
     IDENTIFIED_SYM = 548,
     IF = 549,
     INSERT_ID = 550,
     INTERVAL_SYM = 551,
     LAST_INSERT_ID = 552,
     LEFT = 553,
     LOCATE = 554,
     MAKE_SET_SYM = 555,
     MINUTE_SECOND_SYM = 556,
     MINUTE_SYM = 557,
     MODE_SYM = 558,
     MODIFY_SYM = 559,
     MONTH_SYM = 560,
     NOW_SYM = 561,
     PASSWORD = 562,
     POSITION_SYM = 563,
     PROCEDURE = 564,
     RAND = 565,
     REPLACE = 566,
     RIGHT = 567,
     ROUND = 568,
     SECOND_SYM = 569,
     SHARE_SYM = 570,
     SUBSTRING = 571,
     SUBSTRING_INDEX = 572,
     TRIM = 573,
     UDA_CHAR_SUM = 574,
     UDA_FLOAT_SUM = 575,
     UDA_INT_SUM = 576,
     UDF_CHAR_FUNC = 577,
     UDF_FLOAT_FUNC = 578,
     UDF_INT_FUNC = 579,
     UNIQUE_USERS = 580,
     UNIX_TIMESTAMP = 581,
     USER = 582,
     WEEK_SYM = 583,
     WHEN_SYM = 584,
     WORK_SYM = 585,
     YEAR_MONTH_SYM = 586,
     YEAR_SYM = 587,
     YEARWEEK = 588,
     BENCHMARK_SYM = 589,
     END = 590,
     THEN_SYM = 591,
     SQL_BIG_TABLES = 592,
     SQL_BIG_SELECTS = 593,
     SQL_SELECT_LIMIT = 594,
     SQL_MAX_JOIN_SIZE = 595,
     SQL_LOG_BIN = 596,
     SQL_LOG_OFF = 597,
     SQL_LOG_UPDATE = 598,
     SQL_LOW_PRIORITY_UPDATES = 599,
     SQL_SMALL_RESULT = 600,
     SQL_BIG_RESULT = 601,
     SQL_BUFFER_RESULT = 602,
     SQL_WARNINGS = 603,
     SQL_AUTO_IS_NULL = 604,
     SQL_SAFE_UPDATES = 605,
     SQL_QUOTE_SHOW_CREATE = 606,
     SQL_SLAVE_SKIP_COUNTER = 607,
     NEG = 608
   };
#endif
/* Tokens.  */
#define END_OF_INPUT 258
#define EQ 259
#define EQUAL_SYM 260
#define GE 261
#define GT_SYM 262
#define LE 263
#define LT 264
#define NE 265
#define IS 266
#define SHIFT_LEFT 267
#define SHIFT_RIGHT 268
#define SET_VAR 269
#define AVG_SYM 270
#define COUNT_SYM 271
#define MAX_SYM 272
#define MIN_SYM 273
#define SUM_SYM 274
#define STD_SYM 275
#define ADD 276
#define ALTER 277
#define AFTER_SYM 278
#define ANALYZE_SYM 279
#define BEGIN_SYM 280
#define CHANGE 281
#define COMMENT_SYM 282
#define COMMIT_SYM 283
#define CREATE 284
#define CROSS 285
#define DELETE_SYM 286
#define DO_SYM 287
#define DROP 288
#define INSERT 289
#define FLUSH_SYM 290
#define SELECT_SYM 291
#define MASTER_SYM 292
#define REPAIR 293
#define RESET_SYM 294
#define PURGE 295
#define SLAVE 296
#define START_SYM 297
#define STOP_SYM 298
#define TRUNCATE_SYM 299
#define ROLLBACK_SYM 300
#define OPTIMIZE 301
#define SHOW 302
#define UPDATE_SYM 303
#define KILL_SYM 304
#define LOAD 305
#define LOCK_SYM 306
#define LOCKS_SYM 307
#define UNLOCK_SYM 308
#define ACTION 309
#define AGGREGATE_SYM 310
#define ALL 311
#define AND 312
#define AS 313
#define ASC 314
#define AUTO_INC 315
#define AUTOCOMMIT 316
#define AVG_ROW_LENGTH 317
#define BACKUP_SYM 318
#define BERKELEY_DB_SYM 319
#define BINARY 320
#define BIT_SYM 321
#define BOOL_SYM 322
#define BOTH 323
#define BY 324
#define CASCADE 325
#define CHECKSUM_SYM 326
#define CHECK_SYM 327
#define COMMITTED_SYM 328
#define COLUMNS 329
#define COLUMN_SYM 330
#define CONCURRENT 331
#define CONSTRAINT 332
#define DATABASES 333
#define DATA_SYM 334
#define DEFAULT 335
#define DELAYED_SYM 336
#define DELAY_KEY_WRITE_SYM 337
#define DESC 338
#define DESCRIBE 339
#define DISTINCT 340
#define DYNAMIC_SYM 341
#define ENCLOSED 342
#define ESCAPED 343
#define ESCAPE_SYM 344
#define EXISTS 345
#define EXTENDED_SYM 346
#define FILE_SYM 347
#define FIRST_SYM 348
#define FIXED_SYM 349
#define FLOAT_NUM 350
#define FOREIGN 351
#define FROM 352
#define FULL 353
#define FULLTEXT_SYM 354
#define GEMINI_SYM 355
#define GEMINI_SPIN_RETRIES 356
#define GLOBAL_SYM 357
#define GRANT 358
#define GRANTS 359
#define GREATEST_SYM 360
#define GROUP 361
#define HAVING 362
#define HEAP_SYM 363
#define HEX_NUM 364
#define HIGH_PRIORITY 365
#define HOSTS_SYM 366
#define IDENT 367
#define IGNORE_SYM 368
#define INDEX 369
#define INFILE 370
#define INNER_SYM 371
#define INNOBASE_SYM 372
#define INTO 373
#define IN_SYM 374
#define ISOLATION 375
#define ISAM_SYM 376
#define JOIN_SYM 377
#define KEYS 378
#define KEY_SYM 379
#define LEADING 380
#define LEAST_SYM 381
#define LEVEL_SYM 382
#define LEX_HOSTNAME 383
#define LIKE 384
#define LINES 385
#define LOCAL_SYM 386
#define LOGS_SYM 387
#define LONG_NUM 388
#define LONG_SYM 389
#define LOW_PRIORITY 390
#define MASTER_HOST_SYM 391
#define MASTER_USER_SYM 392
#define MASTER_LOG_FILE_SYM 393
#define MASTER_LOG_POS_SYM 394
#define MASTER_PASSWORD_SYM 395
#define MASTER_PORT_SYM 396
#define MASTER_CONNECT_RETRY_SYM 397
#define MATCH 398
#define MAX_ROWS 399
#define MEDIUM_SYM 400
#define MERGE_SYM 401
#define MIN_ROWS 402
#define MYISAM_SYM 403
#define NATIONAL_SYM 404
#define NATURAL 405
#define NCHAR_SYM 406
#define NOT 407
#define NO_SYM 408
#define NULL_SYM 409
#define NUM 410
#define ON 411
#define OPEN_SYM 412
#define OPTION 413
#define OPTIONALLY 414
#define OR 415
#define OR_OR_CONCAT 416
#define ORDER_SYM 417
#define OUTER 418
#define OUTFILE 419
#define DUMPFILE 420
#define PACK_KEYS_SYM 421
#define PARTIAL 422
#define PRIMARY_SYM 423
#define PRIVILEGES 424
#define PROCESS 425
#define PROCESSLIST_SYM 426
#define RAID_0_SYM 427
#define RAID_STRIPED_SYM 428
#define RAID_TYPE 429
#define RAID_CHUNKS 430
#define RAID_CHUNKSIZE 431
#define READ_SYM 432
#define REAL_NUM 433
#define REFERENCES 434
#define REGEXP 435
#define RELOAD 436
#define RENAME 437
#define REPEATABLE_SYM 438
#define RESTORE_SYM 439
#define RESTRICT 440
#define REVOKE 441
#define ROWS_SYM 442
#define ROW_FORMAT_SYM 443
#define ROW_SYM 444
#define SET 445
#define SERIALIZABLE_SYM 446
#define SESSION_SYM 447
#define SHUTDOWN 448
#define STARTING 449
#define STATUS_SYM 450
#define STRAIGHT_JOIN 451
#define TABLES 452
#define TABLE_SYM 453
#define TEMPORARY 454
#define TERMINATED 455
#define TEXT_STRING 456
#define TO_SYM 457
#define TRAILING 458
#define TRANSACTION_SYM 459
#define TYPE_SYM 460
#define FUNC_ARG0 461
#define FUNC_ARG1 462
#define FUNC_ARG2 463
#define FUNC_ARG3 464
#define UDF_RETURNS_SYM 465
#define UDF_SONAME_SYM 466
#define UDF_SYM 467
#define UNCOMMITTED_SYM 468
#define UNION_SYM 469
#define UNIQUE_SYM 470
#define USAGE 471
#define USE_SYM 472
#define USING 473
#define VALUES 474
#define VARIABLES 475
#define WHERE 476
#define WITH 477
#define WRITE_SYM 478
#define COMPRESSED_SYM 479
#define BIGINT 480
#define BLOB_SYM 481
#define CHAR_SYM 482
#define CHANGED 483
#define COALESCE 484
#define DATETIME 485
#define DATE_SYM 486
#define DECIMAL_SYM 487
#define DOUBLE_SYM 488
#define ENUM 489
#define FAST_SYM 490
#define FLOAT_SYM 491
#define INT_SYM 492
#define LIMIT 493
#define LONGBLOB 494
#define LONGTEXT 495
#define MEDIUMBLOB 496
#define MEDIUMINT 497
#define MEDIUMTEXT 498
#define NUMERIC_SYM 499
#define PRECISION 500
#define QUICK 501
#define REAL 502
#define SMALLINT 503
#define STRING_SYM 504
#define TEXT_SYM 505
#define TIMESTAMP 506
#define TIME_SYM 507
#define TINYBLOB 508
#define TINYINT 509
#define TINYTEXT 510
#define UNSIGNED 511
#define VARBINARY 512
#define VARCHAR 513
#define VARYING 514
#define ZEROFILL 515
#define AGAINST 516
#define ATAN 517
#define BETWEEN_SYM 518
#define BIT_AND 519
#define BIT_OR 520
#define CASE_SYM 521
#define CONCAT 522
#define CONCAT_WS 523
#define CURDATE 524
#define CURTIME 525
#define DATABASE 526
#define DATE_ADD_INTERVAL 527
#define DATE_SUB_INTERVAL 528
#define DAY_HOUR_SYM 529
#define DAY_MINUTE_SYM 530
#define DAY_SECOND_SYM 531
#define DAY_SYM 532
#define DECODE_SYM 533
#define ELSE 534
#define ELT_FUNC 535
#define ENCODE_SYM 536
#define ENCRYPT 537
#define EXPORT_SET 538
#define EXTRACT_SYM 539
#define FIELD_FUNC 540
#define FORMAT_SYM 541
#define FOR_SYM 542
#define FROM_UNIXTIME 543
#define GROUP_UNIQUE_USERS 544
#define HOUR_MINUTE_SYM 545
#define HOUR_SECOND_SYM 546
#define HOUR_SYM 547
#define IDENTIFIED_SYM 548
#define IF 549
#define INSERT_ID 550
#define INTERVAL_SYM 551
#define LAST_INSERT_ID 552
#define LEFT 553
#define LOCATE 554
#define MAKE_SET_SYM 555
#define MINUTE_SECOND_SYM 556
#define MINUTE_SYM 557
#define MODE_SYM 558
#define MODIFY_SYM 559
#define MONTH_SYM 560
#define NOW_SYM 561
#define PASSWORD 562
#define POSITION_SYM 563
#define PROCEDURE 564
#define RAND 565
#define REPLACE 566
#define RIGHT 567
#define ROUND 568
#define SECOND_SYM 569
#define SHARE_SYM 570
#define SUBSTRING 571
#define SUBSTRING_INDEX 572
#define TRIM 573
#define UDA_CHAR_SUM 574
#define UDA_FLOAT_SUM 575
#define UDA_INT_SUM 576
#define UDF_CHAR_FUNC 577
#define UDF_FLOAT_FUNC 578
#define UDF_INT_FUNC 579
#define UNIQUE_USERS 580
#define UNIX_TIMESTAMP 581
#define USER 582
#define WEEK_SYM 583
#define WHEN_SYM 584
#define WORK_SYM 585
#define YEAR_MONTH_SYM 586
#define YEAR_SYM 587
#define YEARWEEK 588
#define BENCHMARK_SYM 589
#define END 590
#define THEN_SYM 591
#define SQL_BIG_TABLES 592
#define SQL_BIG_SELECTS 593
#define SQL_SELECT_LIMIT 594
#define SQL_MAX_JOIN_SIZE 595
#define SQL_LOG_BIN 596
#define SQL_LOG_OFF 597
#define SQL_LOG_UPDATE 598
#define SQL_LOW_PRIORITY_UPDATES 599
#define SQL_SMALL_RESULT 600
#define SQL_BIG_RESULT 601
#define SQL_BUFFER_RESULT 602
#define SQL_WARNINGS 603
#define SQL_AUTO_IS_NULL 604
#define SQL_SAFE_UPDATES 605
#define SQL_QUOTE_SHOW_CREATE 606
#define SQL_SLAVE_SKIP_COUNTER 607
#define NEG 608




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 42 "sql_yacc.yy"

  int  num;
  ulong ulong_num;
  ulonglong ulonglong_num;
  LEX_STRING lex_str;
  LEX_STRING *lex_str_ptr;
  LEX_SYMBOL symbol;
  Table_ident *table;
  char *simple_string;
  Item *item;
  List<Item> *item_list;
  List<String> *string_list;
  Key::Keytype key_type;
  enum db_type db_type;
  enum row_type row_type;
  enum enum_tx_isolation tx_isolation;
  String *string;
  key_part_spec *key_part;
  TABLE_LIST *table_list;
  udf_func *udf;
  interval_type interval;
  LEX_USER *lex_user;
  enum Item_udftype udf_type;



/* Line 1676 of yacc.c  */
#line 785 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif




