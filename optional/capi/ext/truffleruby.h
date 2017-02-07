#ifndef RUBYSPEC_CAPI_TRUFFLERUBY_H
#undef RUBYSPEC_CAPI_TRUFFLERUBY_H

/* Class */
#undef HAVE_RB_CALL_SUPER
#undef HAVE_RB_CLASS_NAME
#undef HAVE_RB_CLASS_NEW
#undef HAVE_RB_CLASS_NEW_INSTANCE
#undef HAVE_RB_CLASS_PATH
#undef HAVE_RB_CLASS_REAL
#undef HAVE_RB_CVAR_DEFINED
#undef HAVE_RB_CVAR_GET
#undef HAVE_RB_CVAR_SET
#undef HAVE_RB_CV_GET
#undef HAVE_RB_CV_SET
#undef HAVE_RB_DEFINE_ATTR
#undef HAVE_RB_DEFINE_CLASS_VARIABLE
#undef HAVE_RB_INCLUDE_MODULE
#undef HAVE_RB_PATH2CLASS
#undef HAVE_RB_PATH_TO_CLASS
#undef HAVE_RB_CLASS_SUPERCLASS

/* Data */
#undef HAVE_DATA_WRAP_STRUCT
#undef HAVE_RDATA

#undef HAVE_TYPEDDATA_WRAP_STRUCT
#undef HAVE_RTYPEDDATA

/* Encoding */
#undef HAVE_RB_ENCDB_ALIAS
#undef HAVE_RB_ENC_ASSOCIATE
#undef HAVE_RB_ENC_ASSOCIATE_INDEX
#undef HAVE_RB_ENC_COMPATIBLE
#undef HAVE_RB_ENC_COPY
#undef HAVE_RB_ENC_FIND
#undef HAVE_RB_ENC_FIND_INDEX
#undef HAVE_RB_ENC_FROM_ENCODING
#undef HAVE_RB_ENC_FROM_INDEX
#undef HAVE_RB_ENC_STR_CODERANGE
#undef HAVE_RB_ENC_STR_NEW
#undef HAVE_RB_ENC_TO_INDEX
#undef HAVE_RB_OBJ_ENCODING

#undef HAVE_RB_STR_ENCODE
#undef HAVE_RB_USASCII_STR_NEW
#undef HAVE_RB_USASCII_STR_NEW_CSTR
#undef HAVE_RB_EXTERNAL_STR_NEW
#undef HAVE_RB_EXTERNAL_STR_NEW_CSTR
#undef HAVE_RB_EXTERNAL_STR_NEW_WITH_ENC

#undef HAVE_RB_TO_ENCODING
#undef HAVE_RB_TO_ENCODING_INDEX
#undef HAVE_RB_ENC_NTH

#undef HAVE_RSTRING_LENINT
#undef HAVE_TIMET2NUM

#undef HAVE_RB_LONG2INT

#undef HAVE_RB_ITER_BREAK
#undef HAVE_RB_SOURCEFILE
#undef HAVE_RB_SOURCELINE
#undef HAVE_RB_METHOD_BOUNDP

/* Enumerable */
#undef HAVE_RB_ENUMERATORIZE

/* Exception */
#undef HAVE_RB_EXC_NEW
#undef HAVE_RB_EXC_NEW2
#undef HAVE_RB_EXC_NEW3
#undef HAVE_RB_EXC_RAISE
#undef HAVE_RB_SET_ERRINFO

/* File */
#undef HAVE_RB_FILE_OPEN
#undef HAVE_RB_FILE_OPEN_STR
#undef HAVE_FILEPATHVALUE

/* Globals */
#undef HAVE_RB_DEFAULT_RS
#undef HAVE_RB_DEFINE_HOOKED_VARIABLE
#undef HAVE_RB_DEFINE_READONLY_VARIABLE
#undef HAVE_RB_DEFINE_VARIABLE
#undef HAVE_RB_F_GLOBAL_VARIABLES
#undef HAVE_RB_GV_GET
#undef HAVE_RB_GV_SET
#undef HAVE_RB_RS
#undef HAVE_RB_OUTPUT_RS
#undef HAVE_RB_OUTPUT_FS
#undef HAVE_RB_STDERR
#undef HAVE_RB_STDIN
#undef HAVE_RB_STDOUT
#undef HAVE_RB_DEFOUT

#undef HAVE_RB_LASTLINE_SET
#undef HAVE_RB_LASTLINE_GET

/* Integer */
#undef HAVE_RB_INTEGER_PACK

/* IO */
#undef HAVE_GET_OPEN_FILE
#undef HAVE_RB_IO_ADDSTR
#undef HAVE_RB_IO_CHECK_IO
#undef HAVE_RB_IO_CHECK_CLOSED
#undef HAVE_RB_IO_TAINT_CHECK
#undef HAVE_RB_IO_CHECK_READABLE
#undef HAVE_RB_IO_CHECK_WRITABLE
#undef HAVE_RB_IO_CLOSE
#undef HAVE_RB_IO_PRINT
#undef HAVE_RB_IO_PRINTF
#undef HAVE_RB_IO_PUTS
#undef HAVE_RB_IO_WAIT_READABLE
#undef HAVE_RB_IO_WAIT_WRITABLE
#undef HAVE_RB_IO_WRITE
#undef HAVE_RB_IO_BINMODE

#undef HAVE_RB_THREAD_FD_WRITABLE
#undef HAVE_RB_THREAD_WAIT_FD

#undef HAVE_RB_FD_FIX_CLOEXEC
#undef HAVE_RB_CLOEXEC_OPEN

/* Kernel */
#undef HAVE_RB_EVAL_STRING
#undef HAVE_RB_EXEC_RECURSIVE
#undef HAVE_RB_F_SPRINTF
#undef HAVE_RB_NEED_BLOCK
#undef HAVE_RB_SET_END_PROC
#undef HAVE_RB_WARN

/* Marshal */
#undef HAVE_RB_MARSHAL_DUMP
#undef HAVE_RB_MARSHAL_LOAD

/* Numeric */
#undef HAVE_NUM2CHR
#undef HAVE_RB_CMPINT
#undef HAVE_RB_INT2INUM
#undef HAVE_RB_INTEGER
#undef HAVE_RB_LL2INUM
#undef HAVE_RB_NUM2DBL
#undef HAVE_RB_NUM2INT
#undef HAVE_RB_NUM2UINT
#undef HAVE_RB_NUM2LONG
#undef HAVE_RB_INT2NUM
#undef HAVE_RB_NUM2ULONG
#undef HAVE_RB_NUM_COERCE_BIN
#undef HAVE_RB_NUM_COERCE_CMP
#undef HAVE_RB_NUM_COERCE_RELOP
#undef HAVE_RB_NUM_ZERODIV

/* Range */
#undef HAVE_RB_RANGE_NEW
#undef HAVE_RB_RANGE_VALUES

/* Regexp */
#undef HAVE_RB_BACKREF_GET
#undef HAVE_RB_REG_MATCH
#undef HAVE_RB_REG_NEW
#undef HAVE_RB_REG_NTH_MATCH
#undef HAVE_RB_REG_OPTIONS
#undef HAVE_RB_REG_REGCOMP

/* Time */
#undef HAVE_RB_TIME_NEW
#undef HAVE_RB_TIME_NANO_NEW
#undef HAVE_RB_TIME_NUM_NEW
#undef HAVE_RB_TIME_INTERVAL
#undef HAVE_RB_TIME_TIMEVAL
#undef HAVE_RB_TIME_TIMESPEC
#undef HAVE_RB_TIME_TIMESPEC_NEW

#endif
