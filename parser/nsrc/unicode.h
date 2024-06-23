#ifndef TREE_SITTER_UNICODE_H_
#define TREE_SITTER_UNICODE_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <limits.h>
#include <stdint.h>

#define U_EXPORT
#define U_EXPORT2

	static const int32_t TS_DECODE_ERROR = -1;

	// These functions read one unicode code point from the given string,
	// returning the number of bytes consumed.
	typedef uint32_t (*UnicodeDecodeFunction)(const uint8_t *string, uint32_t length, int32_t *code_point);

	static inline uint32_t ts_decode_ascii(const uint8_t *string, uint32_t length, int32_t *code_point)
	{
		if (length >= 1 && string[0] <= 127)
			return (*code_point = string[0], 1);
		return (0);
	}

#ifdef __cplusplus
}
#endif

#endif // TREE_SITTER_UNICODE_H_
