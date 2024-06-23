#ifndef TREE_SITTER_CLOCK_H_
#define TREE_SITTER_CLOCK_H_

#include <stdbool.h>
#include <stdint.h>

typedef uint64_t TSDuration;

#include <time.h>
typedef uint64_t TSClock;

static inline TSDuration duration_from_micros(uint64_t micros) {
  return micros * (uint64_t)CLOCKS_PER_SEC / 1000000;
}

static inline uint64_t duration_to_micros(TSDuration self) {
  return self * 1000000 / (uint64_t)CLOCKS_PER_SEC;
}

static inline TSClock clock_null(void) {
  return 0;
}

static inline TSClock clock_now(void) {
  return (uint64_t)clock();
}

static inline TSClock clock_after(TSClock base, TSDuration duration) {
  return base + duration;
}

static inline bool clock_is_null(TSClock self) {
  return !self;
}

static inline bool clock_is_gt(TSClock self, TSClock other) {
  return self > other;
}


#endif  // TREE_SITTER_CLOCK_H_
