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
	v->a[24400] = actions(886);
	v->a[24401] = 2;
	v->a[24402] = anon_sym_AMP_AMP;
	v->a[24403] = anon_sym_PIPE_PIPE;
	v->a[24404] = actions(890);
	v->a[24405] = 2;
	v->a[24406] = anon_sym_LT_AMP_DASH;
	v->a[24407] = anon_sym_GT_AMP_DASH;
	v->a[24408] = state(1600);
	v->a[24409] = 2;
	v->a[24410] = sym_file_redirect;
	v->a[24411] = aux_sym_redirected_statement_repeat2;
	v->a[24412] = actions(882);
	v->a[24413] = 3;
	v->a[24414] = sym_raw_string;
	v->a[24415] = sym_number;
	v->a[24416] = sym_word;
	v->a[24417] = state(1774);
	v->a[24418] = 5;
	v->a[24419] = sym_arithmetic_expansion;
	small_parse_table_1221(v);
}

void	small_parse_table_1221(t_small_parse_table_array *v)
{
	v->a[24420] = sym_string;
	v->a[24421] = sym_simple_expansion;
	v->a[24422] = sym_expansion;
	v->a[24423] = sym_command_substitution;
	v->a[24424] = actions(888);
	v->a[24425] = 6;
	v->a[24426] = anon_sym_LT;
	v->a[24427] = anon_sym_GT;
	v->a[24428] = anon_sym_GT_GT;
	v->a[24429] = anon_sym_LT_AMP;
	v->a[24430] = anon_sym_GT_AMP;
	v->a[24431] = anon_sym_GT_PIPE;
	v->a[24432] = 12;
	v->a[24433] = actions(3);
	v->a[24434] = 1;
	v->a[24435] = sym_comment;
	v->a[24436] = actions(790);
	v->a[24437] = 1;
	v->a[24438] = sym_file_descriptor;
	v->a[24439] = actions(910);
	small_parse_table_1222(v);
}

void	small_parse_table_1222(t_small_parse_table_array *v)
{
	v->a[24440] = 1;
	v->a[24441] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24442] = actions(912);
	v->a[24443] = 1;
	v->a[24444] = anon_sym_DOLLAR;
	v->a[24445] = actions(914);
	v->a[24446] = 1;
	v->a[24447] = anon_sym_DQUOTE;
	v->a[24448] = actions(916);
	v->a[24449] = 1;
	v->a[24450] = anon_sym_DOLLAR_LBRACE;
	v->a[24451] = actions(918);
	v->a[24452] = 1;
	v->a[24453] = anon_sym_DOLLAR_LPAREN;
	v->a[24454] = actions(920);
	v->a[24455] = 1;
	v->a[24456] = anon_sym_BQUOTE;
	v->a[24457] = state(1276);
	v->a[24458] = 1;
	v->a[24459] = sym_concatenation;
	small_parse_table_1223(v);
}

void	small_parse_table_1223(t_small_parse_table_array *v)
{
	v->a[24460] = actions(908);
	v->a[24461] = 3;
	v->a[24462] = sym_raw_string;
	v->a[24463] = sym_number;
	v->a[24464] = sym_word;
	v->a[24465] = state(1100);
	v->a[24466] = 5;
	v->a[24467] = sym_arithmetic_expansion;
	v->a[24468] = sym_string;
	v->a[24469] = sym_simple_expansion;
	v->a[24470] = sym_expansion;
	v->a[24471] = sym_command_substitution;
	v->a[24472] = actions(788);
	v->a[24473] = 18;
	v->a[24474] = anon_sym_PIPE;
	v->a[24475] = anon_sym_RPAREN;
	v->a[24476] = anon_sym_SEMI_SEMI;
	v->a[24477] = anon_sym_AMP_AMP;
	v->a[24478] = anon_sym_PIPE_PIPE;
	v->a[24479] = anon_sym_LT;
	small_parse_table_1224(v);
}

void	small_parse_table_1224(t_small_parse_table_array *v)
{
	v->a[24480] = anon_sym_GT;
	v->a[24481] = anon_sym_GT_GT;
	v->a[24482] = anon_sym_LT_AMP;
	v->a[24483] = anon_sym_GT_AMP;
	v->a[24484] = anon_sym_GT_PIPE;
	v->a[24485] = anon_sym_LT_AMP_DASH;
	v->a[24486] = anon_sym_GT_AMP_DASH;
	v->a[24487] = anon_sym_LT_LT;
	v->a[24488] = anon_sym_LT_LT_DASH;
	v->a[24489] = aux_sym_heredoc_redirect_token1;
	v->a[24490] = anon_sym_AMP;
	v->a[24491] = anon_sym_SEMI;
	v->a[24492] = 11;
	v->a[24493] = actions(3);
	v->a[24494] = 1;
	v->a[24495] = sym_comment;
	v->a[24496] = actions(682);
	v->a[24497] = 1;
	v->a[24498] = anon_sym_PIPE;
	v->a[24499] = actions(690);
	small_parse_table_1225(v);
}

/* EOF small_parse_table_244.c */
