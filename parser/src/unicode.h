#ifndef TREE_SITTER_UNICODE_H_
#define TREE_SITTER_UNICODE_H_

#include "me/types.h"

static const t_i32 TS_DECODE_ERROR = -1;

// These functions read one unicode code point from the given string,
// returning the number of bytes consumed.
typedef t_u32 (*UnicodeDecodeFunction)(const t_u8 *string, t_u32 length, t_i32 *code_point);

static inline t_u32 ts_decode_ascii(const t_u8 *string, t_u32 length, t_i32 *code_point)
{
	(void)(length);
	*code_point = 0;
	*(t_u8 *)code_point = *string;
	return (1);
}

static inline t_u32 ts_decode_utf8(const t_u8 *string, t_u32 length, t_i32 *code_point)
{
	return (ts_decode_ascii(string, length, code_point));
	// t_u32 i = 0;
	// U8_NEXT(string, i, length, *code_point);
	// return i;
}

static inline t_u32 ts_decode_utf16(const t_u8 *string, t_u32 length, t_i32 *code_point)
{
	return (ts_decode_ascii(string, length, code_point));
	// t_u32 i = 0;
	// U16_NEXT(((t_u16 *)string), i, length, *code_point);
	// return i * 2;
}

#endif // TREE_SITTER_UNICODE_H_
