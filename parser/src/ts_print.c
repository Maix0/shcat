/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ts_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:51:50 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/05 18:53:18 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include "me/vec/vec_token.h"
#include "parser/token.h"
#include <stdio.h>
#include "app/colors.h"

t_str token_name(t_token *out);
static void	_print_ts_inner(t_usize i, t_token *token, void *vdepth)
{
	t_usize		depth;
	t_string	sdepth;

	depth = 0;
	if (vdepth != NULL)
		depth = *(t_usize *)vdepth;
	sdepth = string_new(16);
	i = 0;
	while (i++ < depth)
		string_push_char(&sdepth, '\t');
	
	if (token->subtokens.buffer != NULL)
	{
		depth++;
		printf("%s[" COL_GREEN "%10s"RESET"]\n", sdepth.buf ,token_name(token));
		vec_token_iter(&token->subtokens, _print_ts_inner, &depth);
	}
	else
		printf("%s[" COL_GREEN "%10s"RESET"] '"COL_YELLOW"%s"RESET"'\n",\
			sdepth.buf ,token_name(token), token->string.buf);
	string_free(sdepth);
}

void ts_print(t_vec_token *ts)
{
	vec_token_iter(ts, _print_ts_inner, NULL);
}
