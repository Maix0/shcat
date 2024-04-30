#ifndef TREE_SITTER_LENGTH_H_
#define TREE_SITTER_LENGTH_H_

#include "parser/point.h"
#include "parser/api.h"
#include <stdbool.h>
#include <stdlib.h>

typedef struct s_parse_length
{
	t_u32	bytes;
	t_point extent;
} t_parse_length;

static const t_parse_length LENGTH_UNDEFINED = {0, {0, 1}};
static const t_parse_length LENGTH_MAX = {UINT32_MAX, {UINT32_MAX, UINT32_MAX}};

static inline bool length_is_undefined(t_parse_length length)
{
	return (length.bytes == 0 && length.extent.column != 0);
}

static inline t_parse_length length_min(t_parse_length len1,
										t_parse_length len2)
{
	if (len1.bytes < len2.bytes)
		return (len1);
	else
		return (len2);
}

static inline t_parse_length length_add(t_parse_length len1,
										t_parse_length len2)
{
	t_parse_length result;
	result.bytes = len1.bytes + len2.bytes;
	result.extent = point_add(len1.extent, len2.extent);
	return (result);
}

static inline t_parse_length length_sub(t_parse_length len1,
										t_parse_length len2)
{
	t_parse_length result;
	result.bytes = len1.bytes - len2.bytes;
	result.extent = point_sub(len1.extent, len2.extent);
	return (result);
}

static inline t_parse_length length_zero(void)
{
	return ((t_parse_length){0, {0, 0}});
}

static inline t_parse_length length_saturating_sub(t_parse_length len1,
												   t_parse_length len2)
{
	if (len1.bytes > len2.bytes)
		return (length_sub(len1, len2));
	else
		return (length_zero());
}

#endif
