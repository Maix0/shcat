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
	v->a[24400] = 1;
	v->a[24401] = sym_concatenation;
	v->a[24402] = actions(511);
	v->a[24403] = 3;
	v->a[24404] = sym_raw_string;
	v->a[24405] = sym_number;
	v->a[24406] = sym_word;
	v->a[24407] = state(479);
	v->a[24408] = 5;
	v->a[24409] = sym_arithmetic_expansion;
	v->a[24410] = sym_string;
	v->a[24411] = sym_simple_expansion;
	v->a[24412] = sym_expansion;
	v->a[24413] = sym_command_substitution;
	v->a[24414] = actions(550);
	v->a[24415] = 20;
	v->a[24416] = anon_sym_PIPE;
	v->a[24417] = anon_sym_SEMI_SEMI;
	v->a[24418] = anon_sym_AMP_AMP;
	v->a[24419] = anon_sym_PIPE_PIPE;
	small_parse_table_1221(v);
}

void	small_parse_table_1221(t_small_parse_table_array *v)
{
	v->a[24420] = anon_sym_LT;
	v->a[24421] = anon_sym_GT;
	v->a[24422] = anon_sym_GT_GT;
	v->a[24423] = anon_sym_AMP_GT;
	v->a[24424] = anon_sym_AMP_GT_GT;
	v->a[24425] = anon_sym_LT_AMP;
	v->a[24426] = anon_sym_GT_AMP;
	v->a[24427] = anon_sym_GT_PIPE;
	v->a[24428] = anon_sym_LT_AMP_DASH;
	v->a[24429] = anon_sym_GT_AMP_DASH;
	v->a[24430] = anon_sym_LT_LT;
	v->a[24431] = anon_sym_LT_LT_DASH;
	v->a[24432] = aux_sym_heredoc_redirect_token1;
	v->a[24433] = anon_sym_AMP;
	v->a[24434] = anon_sym_BQUOTE;
	v->a[24435] = anon_sym_SEMI;
	v->a[24436] = 5;
	v->a[24437] = actions(3);
	v->a[24438] = 1;
	v->a[24439] = sym_comment;
	small_parse_table_1222(v);
}

void	small_parse_table_1222(t_small_parse_table_array *v)
{
	v->a[24440] = state(705);
	v->a[24441] = 1;
	v->a[24442] = sym_concatenation;
	v->a[24443] = actions(760);
	v->a[24444] = 2;
	v->a[24445] = sym_file_descriptor;
	v->a[24446] = sym_variable_name;
	v->a[24447] = state(325);
	v->a[24448] = 5;
	v->a[24449] = sym_arithmetic_expansion;
	v->a[24450] = sym_string;
	v->a[24451] = sym_simple_expansion;
	v->a[24452] = sym_expansion;
	v->a[24453] = sym_command_substitution;
	v->a[24454] = actions(758);
	v->a[24455] = 29;
	v->a[24456] = anon_sym_PIPE;
	v->a[24457] = anon_sym_RPAREN;
	v->a[24458] = anon_sym_SEMI_SEMI;
	v->a[24459] = anon_sym_AMP_AMP;
	small_parse_table_1223(v);
}

void	small_parse_table_1223(t_small_parse_table_array *v)
{
	v->a[24460] = anon_sym_PIPE_PIPE;
	v->a[24461] = anon_sym_LT;
	v->a[24462] = anon_sym_GT;
	v->a[24463] = anon_sym_GT_GT;
	v->a[24464] = anon_sym_AMP_GT;
	v->a[24465] = anon_sym_AMP_GT_GT;
	v->a[24466] = anon_sym_LT_AMP;
	v->a[24467] = anon_sym_GT_AMP;
	v->a[24468] = anon_sym_GT_PIPE;
	v->a[24469] = anon_sym_LT_AMP_DASH;
	v->a[24470] = anon_sym_GT_AMP_DASH;
	v->a[24471] = anon_sym_LT_LT;
	v->a[24472] = anon_sym_LT_LT_DASH;
	v->a[24473] = aux_sym_heredoc_redirect_token1;
	v->a[24474] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24475] = anon_sym_AMP;
	v->a[24476] = anon_sym_DOLLAR;
	v->a[24477] = anon_sym_DQUOTE;
	v->a[24478] = sym_raw_string;
	v->a[24479] = sym_number;
	small_parse_table_1224(v);
}

void	small_parse_table_1224(t_small_parse_table_array *v)
{
	v->a[24480] = anon_sym_DOLLAR_LBRACE;
	v->a[24481] = anon_sym_DOLLAR_LPAREN;
	v->a[24482] = anon_sym_BQUOTE;
	v->a[24483] = sym_word;
	v->a[24484] = anon_sym_SEMI;
	v->a[24485] = 5;
	v->a[24486] = actions(3);
	v->a[24487] = 1;
	v->a[24488] = sym_comment;
	v->a[24489] = state(768);
	v->a[24490] = 1;
	v->a[24491] = sym_concatenation;
	v->a[24492] = actions(754);
	v->a[24493] = 2;
	v->a[24494] = sym_file_descriptor;
	v->a[24495] = sym_variable_name;
	v->a[24496] = state(337);
	v->a[24497] = 5;
	v->a[24498] = sym_arithmetic_expansion;
	v->a[24499] = sym_string;
	small_parse_table_1225(v);
}

/* EOF small_parse_table_244.c */
