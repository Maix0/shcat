#include "./point.h"

TSPoint point__new(t_u32 row, t_u32 column)
{
	return ((TSPoint){row, column});
}

TSPoint point_add(TSPoint a, TSPoint b)
{
	if (b.row > 0)
		return (point__new(a.row + b.row, b.column));
	else
		return (point__new(a.row, a.column + b.column));
}

TSPoint point_sub(TSPoint a, TSPoint b)
{
	if (a.row > b.row)
		return (point__new(a.row - b.row, a.column));
	else
		return (point__new(0, a.column - b.column));
}

bool point_lte(TSPoint a, TSPoint b)
{
	return ((a.row < b.row) || (a.row == b.row && a.column <= b.column));
}

bool point_lt(TSPoint a, TSPoint b)
{
	return ((a.row < b.row) || (a.row == b.row && a.column < b.column));
}

bool point_gt(TSPoint a, TSPoint b)
{
	return ((a.row > b.row) || (a.row == b.row && a.column > b.column));
}

bool point_gte(TSPoint a, TSPoint b)
{
	return ((a.row > b.row) || (a.row == b.row && a.column >= b.column));
}

bool point_eq(TSPoint a, TSPoint b)
{
	return (a.row == b.row && a.column == b.column);
}

TSPoint point_min(TSPoint a, TSPoint b)
{
	if (a.row < b.row || (a.row == b.row && a.column < b.column))
		return (a);
	else
		return (b);
}

TSPoint point_max(TSPoint a, TSPoint b)
{
	if (a.row > b.row || (a.row == b.row && a.column > b.column))
		return (a);
	else
		return (b);
}