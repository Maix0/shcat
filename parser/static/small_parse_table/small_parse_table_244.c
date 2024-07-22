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
	v->a[24400] = anon_sym_LT_LT;
	v->a[24401] = actions(668);
	v->a[24402] = 2;
	v->a[24403] = anon_sym_EQ_EQ;
	v->a[24404] = anon_sym_BANG_EQ;
	v->a[24405] = actions(670);
	v->a[24406] = 2;
	v->a[24407] = anon_sym_LT_EQ;
	v->a[24408] = anon_sym_GT_EQ;
	v->a[24409] = actions(672);
	v->a[24410] = 2;
	v->a[24411] = anon_sym_PLUS;
	v->a[24412] = anon_sym_DASH;
	v->a[24413] = actions(674);
	v->a[24414] = 3;
	v->a[24415] = anon_sym_STAR;
	v->a[24416] = anon_sym_SLASH;
	v->a[24417] = anon_sym_PERCENT;
	v->a[24418] = actions(802);
	v->a[24419] = 10;
	small_parse_table_1221(v);
}

void	small_parse_table_1221(t_small_parse_table_array *v)
{
	v->a[24420] = anon_sym_PLUS_EQ;
	v->a[24421] = anon_sym_DASH_EQ;
	v->a[24422] = anon_sym_STAR_EQ;
	v->a[24423] = anon_sym_SLASH_EQ;
	v->a[24424] = anon_sym_PERCENT_EQ;
	v->a[24425] = anon_sym_LT_LT_EQ;
	v->a[24426] = anon_sym_GT_GT_EQ;
	v->a[24427] = anon_sym_AMP_EQ;
	v->a[24428] = anon_sym_CARET_EQ;
	v->a[24429] = anon_sym_PIPE_EQ;
	v->a[24430] = 12;
	v->a[24431] = actions(3);
	v->a[24432] = 1;
	v->a[24433] = sym_comment;
	v->a[24434] = actions(529);
	v->a[24435] = 1;
	v->a[24436] = sym_file_descriptor;
	v->a[24437] = actions(903);
	v->a[24438] = 1;
	v->a[24439] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1222(v);
}

void	small_parse_table_1222(t_small_parse_table_array *v)
{
	v->a[24440] = actions(905);
	v->a[24441] = 1;
	v->a[24442] = anon_sym_DOLLAR;
	v->a[24443] = actions(907);
	v->a[24444] = 1;
	v->a[24445] = anon_sym_DQUOTE;
	v->a[24446] = actions(909);
	v->a[24447] = 1;
	v->a[24448] = anon_sym_DOLLAR_LBRACE;
	v->a[24449] = actions(911);
	v->a[24450] = 1;
	v->a[24451] = anon_sym_DOLLAR_LPAREN;
	v->a[24452] = actions(913);
	v->a[24453] = 1;
	v->a[24454] = anon_sym_BQUOTE;
	v->a[24455] = state(282);
	v->a[24456] = 2;
	v->a[24457] = sym_concatenation;
	v->a[24458] = aux_sym_for_statement_repeat1;
	v->a[24459] = actions(901);
	small_parse_table_1223(v);
}

void	small_parse_table_1223(t_small_parse_table_array *v)
{
	v->a[24460] = 3;
	v->a[24461] = sym_raw_string;
	v->a[24462] = sym_number;
	v->a[24463] = sym_word;
	v->a[24464] = state(492);
	v->a[24465] = 5;
	v->a[24466] = sym_arithmetic_expansion;
	v->a[24467] = sym_string;
	v->a[24468] = sym_simple_expansion;
	v->a[24469] = sym_expansion;
	v->a[24470] = sym_command_substitution;
	v->a[24471] = actions(531);
	v->a[24472] = 16;
	v->a[24473] = anon_sym_esac;
	v->a[24474] = anon_sym_PIPE;
	v->a[24475] = anon_sym_SEMI_SEMI;
	v->a[24476] = anon_sym_AMP_AMP;
	v->a[24477] = anon_sym_PIPE_PIPE;
	v->a[24478] = anon_sym_LT;
	v->a[24479] = anon_sym_GT;
	small_parse_table_1224(v);
}

void	small_parse_table_1224(t_small_parse_table_array *v)
{
	v->a[24480] = anon_sym_GT_GT;
	v->a[24481] = anon_sym_LT_AMP;
	v->a[24482] = anon_sym_GT_AMP;
	v->a[24483] = anon_sym_GT_PIPE;
	v->a[24484] = anon_sym_LT_GT;
	v->a[24485] = anon_sym_LT_LT;
	v->a[24486] = anon_sym_LT_LT_DASH;
	v->a[24487] = aux_sym_heredoc_redirect_token1;
	v->a[24488] = anon_sym_SEMI;
	v->a[24489] = 3;
	v->a[24490] = actions(501);
	v->a[24491] = 1;
	v->a[24492] = sym_comment;
	v->a[24493] = actions(729);
	v->a[24494] = 13;
	v->a[24495] = anon_sym_PIPE;
	v->a[24496] = anon_sym_EQ;
	v->a[24497] = anon_sym_LT;
	v->a[24498] = anon_sym_GT;
	v->a[24499] = anon_sym_GT_GT;
	small_parse_table_1225(v);
}

/* EOF small_parse_table_244.c */
