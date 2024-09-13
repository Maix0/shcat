/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_parse_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:49:37 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/13 13:49:45 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/parser_inner.h"

const t_u8	*ts_string_input_read(void *_self, t_u32 byte, TSPoint point,
		t_u32 *length)
{
	t_string_input	*self;

	(void)point;
	self = (t_string_input *)_self;
	if (byte >= self->length)
	{
		*length = 0;
		return ((const t_u8 *)"");
	}
	else
	{
		*length = self->length - byte;
		return (self->string + byte);
	}
}

TSTree	*ts_parser_parse_string(TSParser *self, t_const_str string,
		t_u32 length)
{
	t_string_input	input;

	input = (t_string_input){(const t_u8 *)string, length};
	return (ts_parser_parse(self,
							(TSInput){
								&input,
								ts_string_input_read,
							}));
}
