#ifndef INPUT_H
#define INPUT_H

#include "me/types.h"

#define TS_DECODE_ERROR -1i

typedef t_u32 (*UnicodeDecodeFunction)(const t_u8 *string, t_u32 length, t_i32 *code_point);

t_u32 ts_decode_ascii(const t_u8 *string, t_u32 length, t_i32 *code_point);

#endif // INPUT_H
