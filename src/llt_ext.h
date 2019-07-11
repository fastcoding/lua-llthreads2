#ifndef LLT_EXT_H
#define LLT_EXT_H
#define flags_t unsigned char
#ifdef USE_PTHREAD
  extern pthread_key_t key2child;
#endif
typedef void (*CLEANUP_PROC)();
typedef struct llthread_child_t {
  lua_State  *L;
  int        status;
  flags_t    flags;
  CLEANUP_PROC cleanup;
} llthread_child_t;

#endif
