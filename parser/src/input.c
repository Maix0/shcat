#include "./input.h"
#include "me/types.h"

t_u32 ts_decode_ascii(const t_u8 *string, t_u32 length, t_i32 *code_point)
{
	(void)(length);
	*code_point = 0;
	*(t_u8 *)code_point = *string;
	return (1);
}