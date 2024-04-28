#ifndef TREE_SITTER_ALLOC_H_
#define TREE_SITTER_ALLOC_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// Allow clients to override allocation functions
#ifdef TREE_SITTER_REUSE_ALLOCATOR

extern void *(*ts_current_malloc)(size_t);
extern void *(*ts_current_calloc)(size_t, size_t);
extern void *(*ts_current_realloc)(void *, size_t);
extern void (*ts_current_free)(void *);

#ifndef malloc
#define malloc  ts_current_malloc
#endif
#ifndef calloc
#define calloc  ts_current_calloc
#endif
#ifndef realloc
#define realloc ts_current_realloc
#endif
#ifndef free
#define free    ts_current_free
#endif

#else

#ifndef malloc
#define malloc  malloc
#endif
#ifndef calloc
#define calloc  calloc
#endif
#ifndef realloc
#define realloc realloc
#endif
#ifndef free
#define free    free
#endif

#endif

#ifdef __cplusplus
}
#endif

#endif // TREE_SITTER_ALLOC_H_
