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
	v->a[18400] = aux_sym_redirected_statement_repeat1;
	v->a[18401] = actions(2630);
	v->a[18402] = 9;
	v->a[18403] = anon_sym_SEMI_SEMI;
	v->a[18404] = anon_sym_SEMI_AMP;
	v->a[18405] = anon_sym_SEMI_SEMI_AMP;
	v->a[18406] = anon_sym_AMP_AMP;
	v->a[18407] = anon_sym_PIPE_PIPE;
	v->a[18408] = anon_sym_LT_LT;
	v->a[18409] = anon_sym_LT_LT_DASH;
	v->a[18410] = anon_sym_AMP;
	v->a[18411] = anon_sym_SEMI;
	v->a[18412] = actions(2512);
	v->a[18413] = 22;
	v->a[18414] = anon_sym_LT;
	v->a[18415] = anon_sym_GT;
	v->a[18416] = anon_sym_GT_GT;
	v->a[18417] = anon_sym_AMP_GT;
	v->a[18418] = anon_sym_AMP_GT_GT;
	v->a[18419] = anon_sym_LT_AMP;
	small_parse_table_921(v);
}

void	small_parse_table_921(t_small_parse_table_array *v)
{
	v->a[18420] = anon_sym_GT_AMP;
	v->a[18421] = anon_sym_GT_PIPE;
	v->a[18422] = anon_sym_LT_AMP_DASH;
	v->a[18423] = anon_sym_GT_AMP_DASH;
	v->a[18424] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18425] = anon_sym_DOLLAR;
	v->a[18426] = sym__special_character;
	v->a[18427] = anon_sym_DQUOTE;
	v->a[18428] = sym_raw_string;
	v->a[18429] = aux_sym_number_token1;
	v->a[18430] = aux_sym_number_token2;
	v->a[18431] = anon_sym_DOLLAR_LBRACE;
	v->a[18432] = anon_sym_DOLLAR_LPAREN;
	v->a[18433] = anon_sym_BQUOTE;
	v->a[18434] = anon_sym_DOLLAR_BQUOTE;
	v->a[18435] = sym_word;
	v->a[18436] = 8;
	v->a[18437] = actions(3);
	v->a[18438] = 1;
	v->a[18439] = sym_comment;
	small_parse_table_922(v);
}

void	small_parse_table_922(t_small_parse_table_array *v)
{
	v->a[18440] = actions(2714);
	v->a[18441] = 1;
	v->a[18442] = sym_variable_name;
	v->a[18443] = actions(2526);
	v->a[18444] = 2;
	v->a[18445] = sym_test_operator;
	v->a[18446] = sym__brace_start;
	v->a[18447] = actions(2638);
	v->a[18448] = 2;
	v->a[18449] = sym_file_descriptor;
	v->a[18450] = aux_sym_heredoc_redirect_token1;
	v->a[18451] = state(1989);
	v->a[18452] = 2;
	v->a[18453] = sym_variable_assignment;
	v->a[18454] = aux_sym_variable_assignments_repeat1;
	v->a[18455] = state(1983);
	v->a[18456] = 3;
	v->a[18457] = sym_file_redirect;
	v->a[18458] = sym_heredoc_redirect;
	v->a[18459] = aux_sym_redirected_statement_repeat1;
	small_parse_table_923(v);
}

void	small_parse_table_923(t_small_parse_table_array *v)
{
	v->a[18460] = actions(2512);
	v->a[18461] = 12;
	v->a[18462] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18463] = anon_sym_DOLLAR;
	v->a[18464] = sym__special_character;
	v->a[18465] = anon_sym_DQUOTE;
	v->a[18466] = sym_raw_string;
	v->a[18467] = aux_sym_number_token1;
	v->a[18468] = aux_sym_number_token2;
	v->a[18469] = anon_sym_DOLLAR_LBRACE;
	v->a[18470] = anon_sym_DOLLAR_LPAREN;
	v->a[18471] = anon_sym_BQUOTE;
	v->a[18472] = anon_sym_DOLLAR_BQUOTE;
	v->a[18473] = sym_word;
	v->a[18474] = actions(2516);
	v->a[18475] = 21;
	v->a[18476] = anon_sym_PIPE;
	v->a[18477] = anon_sym_SEMI_SEMI;
	v->a[18478] = anon_sym_SEMI_AMP;
	v->a[18479] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_924(v);
}

void	small_parse_table_924(t_small_parse_table_array *v)
{
	v->a[18480] = anon_sym_PIPE_AMP;
	v->a[18481] = anon_sym_AMP_AMP;
	v->a[18482] = anon_sym_PIPE_PIPE;
	v->a[18483] = anon_sym_LT;
	v->a[18484] = anon_sym_GT;
	v->a[18485] = anon_sym_GT_GT;
	v->a[18486] = anon_sym_AMP_GT;
	v->a[18487] = anon_sym_AMP_GT_GT;
	v->a[18488] = anon_sym_LT_AMP;
	v->a[18489] = anon_sym_GT_AMP;
	v->a[18490] = anon_sym_GT_PIPE;
	v->a[18491] = anon_sym_LT_AMP_DASH;
	v->a[18492] = anon_sym_GT_AMP_DASH;
	v->a[18493] = anon_sym_LT_LT;
	v->a[18494] = anon_sym_LT_LT_DASH;
	v->a[18495] = anon_sym_AMP;
	v->a[18496] = anon_sym_SEMI;
	v->a[18497] = 6;
	v->a[18498] = actions(3);
	v->a[18499] = 1;
	small_parse_table_925(v);
}

/* EOF small_parse_table_184.c */
