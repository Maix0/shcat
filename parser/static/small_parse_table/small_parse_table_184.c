/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_184.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_920(t_small_parse_table_array *v)
{
	v->a[18400] = state(344);
	v->a[18401] = 5;
	v->a[18402] = sym_arithmetic_expansion;
	v->a[18403] = sym_string;
	v->a[18404] = sym_simple_expansion;
	v->a[18405] = sym_expansion;
	v->a[18406] = sym_command_substitution;
	v->a[18407] = actions(533);
	v->a[18408] = 16;
	v->a[18409] = anon_sym_PIPE;
	v->a[18410] = anon_sym_RPAREN;
	v->a[18411] = anon_sym_SEMI_SEMI;
	v->a[18412] = anon_sym_AMP_AMP;
	v->a[18413] = anon_sym_PIPE_PIPE;
	v->a[18414] = anon_sym_LT;
	v->a[18415] = anon_sym_GT;
	v->a[18416] = anon_sym_GT_GT;
	v->a[18417] = anon_sym_LT_AMP;
	v->a[18418] = anon_sym_GT_AMP;
	v->a[18419] = anon_sym_GT_PIPE;
	small_parse_table_921(v);
}

void	small_parse_table_921(t_small_parse_table_array *v)
{
	v->a[18420] = anon_sym_LT_GT;
	v->a[18421] = anon_sym_LT_LT;
	v->a[18422] = anon_sym_LT_LT_DASH;
	v->a[18423] = aux_sym_heredoc_redirect_token1;
	v->a[18424] = anon_sym_SEMI;
	v->a[18425] = 13;
	v->a[18426] = actions(3);
	v->a[18427] = 1;
	v->a[18428] = sym_comment;
	v->a[18429] = actions(53);
	v->a[18430] = 1;
	v->a[18431] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18432] = actions(55);
	v->a[18433] = 1;
	v->a[18434] = anon_sym_DOLLAR;
	v->a[18435] = actions(57);
	v->a[18436] = 1;
	v->a[18437] = anon_sym_DQUOTE;
	v->a[18438] = actions(61);
	v->a[18439] = 1;
	small_parse_table_922(v);
}

void	small_parse_table_922(t_small_parse_table_array *v)
{
	v->a[18440] = anon_sym_DOLLAR_LBRACE;
	v->a[18441] = actions(63);
	v->a[18442] = 1;
	v->a[18443] = anon_sym_DOLLAR_LPAREN;
	v->a[18444] = actions(65);
	v->a[18445] = 1;
	v->a[18446] = anon_sym_BQUOTE;
	v->a[18447] = actions(535);
	v->a[18448] = 1;
	v->a[18449] = sym__bare_dollar;
	v->a[18450] = state(193);
	v->a[18451] = 1;
	v->a[18452] = aux_sym_command_repeat2;
	v->a[18453] = state(614);
	v->a[18454] = 1;
	v->a[18455] = sym_concatenation;
	v->a[18456] = actions(531);
	v->a[18457] = 3;
	v->a[18458] = sym_raw_string;
	v->a[18459] = sym_number;
	small_parse_table_923(v);
}

void	small_parse_table_923(t_small_parse_table_array *v)
{
	v->a[18460] = sym_word;
	v->a[18461] = state(344);
	v->a[18462] = 5;
	v->a[18463] = sym_arithmetic_expansion;
	v->a[18464] = sym_string;
	v->a[18465] = sym_simple_expansion;
	v->a[18466] = sym_expansion;
	v->a[18467] = sym_command_substitution;
	v->a[18468] = actions(537);
	v->a[18469] = 16;
	v->a[18470] = anon_sym_PIPE;
	v->a[18471] = anon_sym_RPAREN;
	v->a[18472] = anon_sym_SEMI_SEMI;
	v->a[18473] = anon_sym_AMP_AMP;
	v->a[18474] = anon_sym_PIPE_PIPE;
	v->a[18475] = anon_sym_LT;
	v->a[18476] = anon_sym_GT;
	v->a[18477] = anon_sym_GT_GT;
	v->a[18478] = anon_sym_LT_AMP;
	v->a[18479] = anon_sym_GT_AMP;
	small_parse_table_924(v);
}

void	small_parse_table_924(t_small_parse_table_array *v)
{
	v->a[18480] = anon_sym_GT_PIPE;
	v->a[18481] = anon_sym_LT_GT;
	v->a[18482] = anon_sym_LT_LT;
	v->a[18483] = anon_sym_LT_LT_DASH;
	v->a[18484] = aux_sym_heredoc_redirect_token1;
	v->a[18485] = anon_sym_SEMI;
	v->a[18486] = 3;
	v->a[18487] = actions(407);
	v->a[18488] = 1;
	v->a[18489] = sym_comment;
	v->a[18490] = actions(443);
	v->a[18491] = 13;
	v->a[18492] = anon_sym_PIPE;
	v->a[18493] = anon_sym_EQ;
	v->a[18494] = anon_sym_LT;
	v->a[18495] = anon_sym_GT;
	v->a[18496] = anon_sym_GT_GT;
	v->a[18497] = anon_sym_LT_LT;
	v->a[18498] = anon_sym_CARET;
	v->a[18499] = anon_sym_AMP;
	small_parse_table_925(v);
}

/* EOF small_parse_table_184.c */
