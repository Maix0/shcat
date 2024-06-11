/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_244.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1220(t_small_parse_table_array *v)
{
	v->a[24400] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24401] = actions(826);
	v->a[24402] = 1;
	v->a[24403] = anon_sym_DOLLAR;
	v->a[24404] = actions(828);
	v->a[24405] = 1;
	v->a[24406] = anon_sym_DQUOTE;
	v->a[24407] = actions(830);
	v->a[24408] = 1;
	v->a[24409] = anon_sym_DOLLAR_LBRACE;
	v->a[24410] = actions(832);
	v->a[24411] = 1;
	v->a[24412] = anon_sym_DOLLAR_LPAREN;
	v->a[24413] = actions(834);
	v->a[24414] = 1;
	v->a[24415] = anon_sym_BQUOTE;
	v->a[24416] = state(1410);
	v->a[24417] = 1;
	v->a[24418] = sym_concatenation;
	v->a[24419] = actions(713);
	small_parse_table_1221(v);
}

void	small_parse_table_1221(t_small_parse_table_array *v)
{
	v->a[24420] = 2;
	v->a[24421] = sym_file_descriptor;
	v->a[24422] = ts_builtin_sym_end;
	v->a[24423] = actions(822);
	v->a[24424] = 3;
	v->a[24425] = sym_raw_string;
	v->a[24426] = sym_number;
	v->a[24427] = sym_word;
	v->a[24428] = state(1228);
	v->a[24429] = 5;
	v->a[24430] = sym_arithmetic_expansion;
	v->a[24431] = sym_string;
	v->a[24432] = sym_simple_expansion;
	v->a[24433] = sym_expansion;
	v->a[24434] = sym_command_substitution;
	v->a[24435] = actions(715);
	v->a[24436] = 19;
	v->a[24437] = anon_sym_PIPE;
	v->a[24438] = anon_sym_SEMI_SEMI;
	v->a[24439] = anon_sym_AMP_AMP;
	small_parse_table_1222(v);
}

void	small_parse_table_1222(t_small_parse_table_array *v)
{
	v->a[24440] = anon_sym_PIPE_PIPE;
	v->a[24441] = anon_sym_LT;
	v->a[24442] = anon_sym_GT;
	v->a[24443] = anon_sym_GT_GT;
	v->a[24444] = anon_sym_AMP_GT;
	v->a[24445] = anon_sym_AMP_GT_GT;
	v->a[24446] = anon_sym_LT_AMP;
	v->a[24447] = anon_sym_GT_AMP;
	v->a[24448] = anon_sym_GT_PIPE;
	v->a[24449] = anon_sym_LT_AMP_DASH;
	v->a[24450] = anon_sym_GT_AMP_DASH;
	v->a[24451] = anon_sym_LT_LT;
	v->a[24452] = anon_sym_LT_LT_DASH;
	v->a[24453] = aux_sym_heredoc_redirect_token1;
	v->a[24454] = anon_sym_AMP;
	v->a[24455] = anon_sym_SEMI;
	v->a[24456] = 12;
	v->a[24457] = actions(3);
	v->a[24458] = 1;
	v->a[24459] = sym_comment;
	small_parse_table_1223(v);
}

void	small_parse_table_1223(t_small_parse_table_array *v)
{
	v->a[24460] = actions(713);
	v->a[24461] = 1;
	v->a[24462] = sym_file_descriptor;
	v->a[24463] = actions(824);
	v->a[24464] = 1;
	v->a[24465] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24466] = actions(826);
	v->a[24467] = 1;
	v->a[24468] = anon_sym_DOLLAR;
	v->a[24469] = actions(828);
	v->a[24470] = 1;
	v->a[24471] = anon_sym_DQUOTE;
	v->a[24472] = actions(830);
	v->a[24473] = 1;
	v->a[24474] = anon_sym_DOLLAR_LBRACE;
	v->a[24475] = actions(832);
	v->a[24476] = 1;
	v->a[24477] = anon_sym_DOLLAR_LPAREN;
	v->a[24478] = actions(834);
	v->a[24479] = 1;
	small_parse_table_1224(v);
}

void	small_parse_table_1224(t_small_parse_table_array *v)
{
	v->a[24480] = anon_sym_BQUOTE;
	v->a[24481] = state(1410);
	v->a[24482] = 1;
	v->a[24483] = sym_concatenation;
	v->a[24484] = actions(836);
	v->a[24485] = 3;
	v->a[24486] = sym_raw_string;
	v->a[24487] = sym_number;
	v->a[24488] = sym_word;
	v->a[24489] = state(1270);
	v->a[24490] = 5;
	v->a[24491] = sym_arithmetic_expansion;
	v->a[24492] = sym_string;
	v->a[24493] = sym_simple_expansion;
	v->a[24494] = sym_expansion;
	v->a[24495] = sym_command_substitution;
	v->a[24496] = actions(715);
	v->a[24497] = 20;
	v->a[24498] = anon_sym_PIPE;
	v->a[24499] = anon_sym_RPAREN;
	small_parse_table_1225(v);
}

/* EOF small_parse_table_244.c */
