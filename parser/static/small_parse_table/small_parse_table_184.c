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
	v->a[18400] = actions(55);
	v->a[18401] = 1;
	v->a[18402] = anon_sym_DOLLAR;
	v->a[18403] = actions(57);
	v->a[18404] = 1;
	v->a[18405] = anon_sym_DQUOTE;
	v->a[18406] = actions(61);
	v->a[18407] = 1;
	v->a[18408] = anon_sym_DOLLAR_LBRACE;
	v->a[18409] = actions(63);
	v->a[18410] = 1;
	v->a[18411] = anon_sym_DOLLAR_LPAREN;
	v->a[18412] = actions(419);
	v->a[18413] = 1;
	v->a[18414] = sym__bare_dollar;
	v->a[18415] = state(180);
	v->a[18416] = 1;
	v->a[18417] = aux_sym_command_repeat2;
	v->a[18418] = state(570);
	v->a[18419] = 1;
	small_parse_table_921(v);
}

void	small_parse_table_921(t_small_parse_table_array *v)
{
	v->a[18420] = sym_concatenation;
	v->a[18421] = actions(602);
	v->a[18422] = 3;
	v->a[18423] = sym_raw_string;
	v->a[18424] = sym_number;
	v->a[18425] = sym_word;
	v->a[18426] = state(431);
	v->a[18427] = 5;
	v->a[18428] = sym_arithmetic_expansion;
	v->a[18429] = sym_string;
	v->a[18430] = sym_simple_expansion;
	v->a[18431] = sym_expansion;
	v->a[18432] = sym_command_substitution;
	v->a[18433] = actions(450);
	v->a[18434] = 11;
	v->a[18435] = anon_sym_PIPE;
	v->a[18436] = anon_sym_SEMI_SEMI;
	v->a[18437] = anon_sym_AMP_AMP;
	v->a[18438] = anon_sym_PIPE_PIPE;
	v->a[18439] = anon_sym_LT;
	small_parse_table_922(v);
}

void	small_parse_table_922(t_small_parse_table_array *v)
{
	v->a[18440] = anon_sym_GT;
	v->a[18441] = anon_sym_GT_GT;
	v->a[18442] = anon_sym_LT_LT;
	v->a[18443] = aux_sym_heredoc_redirect_token1;
	v->a[18444] = anon_sym_BQUOTE;
	v->a[18445] = anon_sym_SEMI;
	v->a[18446] = 12;
	v->a[18447] = actions(3);
	v->a[18448] = 1;
	v->a[18449] = sym_comment;
	v->a[18450] = actions(448);
	v->a[18451] = 1;
	v->a[18452] = sym_variable_name;
	v->a[18453] = actions(558);
	v->a[18454] = 1;
	v->a[18455] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18456] = actions(561);
	v->a[18457] = 1;
	v->a[18458] = anon_sym_DOLLAR;
	v->a[18459] = actions(564);
	small_parse_table_923(v);
}

void	small_parse_table_923(t_small_parse_table_array *v)
{
	v->a[18460] = 1;
	v->a[18461] = anon_sym_DQUOTE;
	v->a[18462] = actions(567);
	v->a[18463] = 1;
	v->a[18464] = anon_sym_DOLLAR_LBRACE;
	v->a[18465] = actions(570);
	v->a[18466] = 1;
	v->a[18467] = anon_sym_DOLLAR_LPAREN;
	v->a[18468] = actions(573);
	v->a[18469] = 1;
	v->a[18470] = anon_sym_BQUOTE;
	v->a[18471] = state(201);
	v->a[18472] = 2;
	v->a[18473] = sym_concatenation;
	v->a[18474] = aux_sym_for_statement_repeat1;
	v->a[18475] = actions(718);
	v->a[18476] = 3;
	v->a[18477] = sym_raw_string;
	v->a[18478] = sym_number;
	v->a[18479] = sym_word;
	small_parse_table_924(v);
}

void	small_parse_table_924(t_small_parse_table_array *v)
{
	v->a[18480] = state(415);
	v->a[18481] = 5;
	v->a[18482] = sym_arithmetic_expansion;
	v->a[18483] = sym_string;
	v->a[18484] = sym_simple_expansion;
	v->a[18485] = sym_expansion;
	v->a[18486] = sym_command_substitution;
	v->a[18487] = actions(428);
	v->a[18488] = 10;
	v->a[18489] = anon_sym_PIPE;
	v->a[18490] = anon_sym_SEMI_SEMI;
	v->a[18491] = anon_sym_AMP_AMP;
	v->a[18492] = anon_sym_PIPE_PIPE;
	v->a[18493] = anon_sym_LT;
	v->a[18494] = anon_sym_GT;
	v->a[18495] = anon_sym_GT_GT;
	v->a[18496] = anon_sym_LT_LT;
	v->a[18497] = aux_sym_heredoc_redirect_token1;
	v->a[18498] = anon_sym_SEMI;
	v->a[18499] = 12;
	small_parse_table_925(v);
}

/* EOF small_parse_table_184.c */
