#ifndef TREE_SITTER_POINT_H_
#define TREE_SITTER_POINT_H_

#include "./api.h"

#define POINT_ZERO ((t_point) {0, 0})
#define POINT_MAX ((t_point) {UINT32_MAX, UINT32_MAX})

static inline t_point point__new(unsigned row, unsigned column) {
  t_point result = {row, column};
  return result;
}

static inline t_point point_add(t_point a, t_point b) {
  if (b.row > 0)
    return point__new(a.row + b.row, b.column);
  else
    return point__new(a.row, a.column + b.column);
}

static inline t_point point_sub(t_point a, t_point b) {
  if (a.row > b.row)
    return point__new(a.row - b.row, a.column);
  else
    return point__new(0, a.column - b.column);
}

static inline bool point_lte(t_point a, t_point b) {
  return (a.row < b.row) || (a.row == b.row && a.column <= b.column);
}

static inline bool point_lt(t_point a, t_point b) {
  return (a.row < b.row) || (a.row == b.row && a.column < b.column);
}

static inline bool point_gt(t_point a, t_point b) {
  return (a.row > b.row) || (a.row == b.row && a.column > b.column);
}

static inline bool point_gte(t_point a, t_point b) {
  return (a.row > b.row) || (a.row == b.row && a.column >= b.column);
}

static inline bool point_eq(t_point a, t_point b) {
  return a.row == b.row && a.column == b.column;
}

static inline t_point point_min(t_point a, t_point b) {
  if (a.row < b.row || (a.row == b.row && a.column < b.column))
    return a;
  else
    return b;
}

static inline t_point point_max(t_point a, t_point b) {
  if (a.row > b.row || (a.row == b.row && a.column > b.column))
    return a;
  else
    return b;
}

#endif
