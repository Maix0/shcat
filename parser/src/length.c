#include "./length.h"
#include "./point.h"

bool length_is_undefined(Length length)
{
	return (length.bytes == 0 && length.extent.column != 0);
}

Length length_min(Length len1, Length len2)
{
	return ((len1.bytes < len2.bytes) ? len1 : len2);
}

Length length_add(Length len1, Length len2)
{
	Length result;

	result.bytes = len1.bytes + len2.bytes;
	result.extent = point_add(len1.extent, len2.extent);
	return (result);
}

Length length_sub(Length len1, Length len2)
{
	Length result;

	result.bytes = len1.bytes - len2.bytes;
	result.extent = point_sub(len1.extent, len2.extent);
	return (result);
}

Length length_zero(void)
{
	return ((Length){0, {0, 0}});
}

Length length_saturating_sub(Length len1, Length len2)
{
	if (len1.bytes > len2.bytes)
		return (length_sub(len1, len2));
	else
		return (length_zero());
}