
#ifndef ODE_CONFIG_H
#define ODE_CONFIG_H

#define HAVE_ALLOCA 1
#define HAVE_ATAN2F 1
#define HAVE_COPYSIGN 1
#define HAVE_COPYSIGNF 1
#define HAVE_COSF 1
#define HAVE_FABSF 1
#define HAVE_FLOOR 1
#define HAVE_FMODF 1
#define HAVE_GETTIMEOFDAY 1
#define HAVE_ISNAN 1
#define HAVE_ISNANF 1
#define HAVE_MALLOC 1
#define HAVE_MEMMOVE 1
#define HAVE_MEMSET 1
#define HAVE_REALLOC 1
#define HAVE_SELECT 1
#define HAVE_SINF 1
#define HAVE_SPRINTF 1
#define HAVE_SQRT 1
#define HAVE_SQRTF 1
#define HAVE_VPRINTF 1
#define HAVE_VSNPRINTF 1
#define HAVE_SNPRINTF 1

#define HAVE_ALLOCA_H 1
#define HAVE_BOOST_SHARED_ARRAY_HPP 1
#define HAVE_FLOAT_H 1
#define HAVE_DLFCN_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_MALLOC_H 1
#define HAVE_MATH_H 1
#define HAVE_MEMORY_H 1
#define HAVE_STDARG_H 1
#define HAVE_STDBOOL_H 1
#define HAVE_STDINT_H 1
#define HAVE_STDIO_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRINGS_H 1
#define HAVE_STRING_H 1
#define HAVE_SYS_SELECT_H 1
#define HAVE_SYS_SOCKET_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TIME_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_TIME_H 1
#define HAVE_UNISTD_H 1
#define HAVE_LIMITS 1

#define HAVE_LIBM 1
#define HAVE_OBSTACK 1


#ifdef HAVE_ALLOCA_H
#include <alloca.h>
#endif
#ifdef HAVE_MALLOC_H
#include <malloc.h>
#endif
#ifdef HAVE_STDINT_H
#include <stdint.h>
#endif
#ifdef HAVE_INTTYPES_H
#include <inttypes.h>
#endif

/* an integer type that we can safely cast a pointer to and
 * from without loss of bits.
 */
typedef uintptr_t intP;

/* Define to the type of arg 1 for `select'. */
#define SELECT_TYPE_ARG1 int

/* Define to the type of args 2, 3 and 4 for `select'. */
#define SELECT_TYPE_ARG234 (fd_set *)

/* Define to the type of arg 5 for `select'. */
#define SELECT_TYPE_ARG5 (struct timeval *)


/* compiling for a X86_64 system on a gcc-based platform? */
#define X86_64_SYSTEM 1

/* libou namespace for ODE */
#define _OU_NAMESPACE gazebo_odeou

/* Atomic API of OU is enabled */
#define dATOMICS_ENABLED 1

/* Generic OU features are enabled */
#define dOU_ENABLED 1

/* Thread Local Storage API of OU is enabled */
#define dTLS_ENABLED 1

#define dDOUBLE 1
#define dTRIMESH_ENABLED 1
#define dTRIMESH_GIMPACT 0
#define dTRIMESH_OPCODE 1
#define __ODE__ 1
#define STD_HEADERS 1

#ifdef dSINGLE
       #define dEpsilon  FLT_EPSILON
#else
       #define dEpsilon  DBL_EPSILON
#endif

#endif
