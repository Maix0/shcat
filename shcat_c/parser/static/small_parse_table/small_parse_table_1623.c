/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1623.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8115(t_small_parse_table_array *v)
{
	v->a[162300] = 2;
	v->a[162301] = anon_sym_LPAREN_LPAREN;
	v->a[162302] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[162303] = actions(7232);
	v->a[162304] = 2;
	v->a[162305] = sym_raw_string;
	v->a[162306] = sym_ansi_c_string;
	v->a[162307] = actions(7240);
	v->a[162308] = 2;
	v->a[162309] = anon_sym_LT_LPAREN;
	v->a[162310] = anon_sym_GT_LPAREN;
	v->a[162311] = state(3386);
	v->a[162312] = 2;
	v->a[162313] = sym_case_item;
	v->a[162314] = aux_sym_case_statement_repeat1;
	v->a[162315] = state(6695);
	v->a[162316] = 2;
	v->a[162317] = sym_concatenation;
	v->a[162318] = sym__extglob_blob;
	v->a[162319] = state(6303);
	small_parse_table_8116(v);
}

void	small_parse_table_8116(t_small_parse_table_array *v)
{
	v->a[162320] = 9;
	v->a[162321] = sym_arithmetic_expansion;
	v->a[162322] = sym_brace_expression;
	v->a[162323] = sym_string;
	v->a[162324] = sym_translated_string;
	v->a[162325] = sym_number;
	v->a[162326] = sym_simple_expansion;
	v->a[162327] = sym_expansion;
	v->a[162328] = sym_command_substitution;
	v->a[162329] = sym_process_substitution;
	v->a[162330] = 3;
	v->a[162331] = actions(71);
	v->a[162332] = 1;
	v->a[162333] = sym_comment;
	v->a[162334] = actions(6864);
	v->a[162335] = 14;
	v->a[162336] = anon_sym_EQ;
	v->a[162337] = anon_sym_PIPE;
	v->a[162338] = anon_sym_CARET;
	v->a[162339] = anon_sym_AMP;
	small_parse_table_8117(v);
}

void	small_parse_table_8117(t_small_parse_table_array *v)
{
	v->a[162340] = anon_sym_LT;
	v->a[162341] = anon_sym_GT;
	v->a[162342] = anon_sym_LT_LT;
	v->a[162343] = anon_sym_GT_GT;
	v->a[162344] = anon_sym_PLUS;
	v->a[162345] = anon_sym_DASH;
	v->a[162346] = anon_sym_STAR;
	v->a[162347] = anon_sym_SLASH;
	v->a[162348] = anon_sym_PERCENT;
	v->a[162349] = anon_sym_STAR_STAR;
	v->a[162350] = actions(6862);
	v->a[162351] = 23;
	v->a[162352] = sym_test_operator;
	v->a[162353] = anon_sym_PLUS_PLUS;
	v->a[162354] = anon_sym_DASH_DASH;
	v->a[162355] = anon_sym_PLUS_EQ;
	v->a[162356] = anon_sym_DASH_EQ;
	v->a[162357] = anon_sym_STAR_EQ;
	v->a[162358] = anon_sym_SLASH_EQ;
	v->a[162359] = anon_sym_PERCENT_EQ;
	small_parse_table_8118(v);
}

void	small_parse_table_8118(t_small_parse_table_array *v)
{
	v->a[162360] = anon_sym_STAR_STAR_EQ;
	v->a[162361] = anon_sym_LT_LT_EQ;
	v->a[162362] = anon_sym_GT_GT_EQ;
	v->a[162363] = anon_sym_AMP_EQ;
	v->a[162364] = anon_sym_CARET_EQ;
	v->a[162365] = anon_sym_PIPE_EQ;
	v->a[162366] = anon_sym_PIPE_PIPE;
	v->a[162367] = anon_sym_AMP_AMP;
	v->a[162368] = anon_sym_EQ_EQ;
	v->a[162369] = anon_sym_BANG_EQ;
	v->a[162370] = anon_sym_LT_EQ;
	v->a[162371] = anon_sym_GT_EQ;
	v->a[162372] = anon_sym_RPAREN;
	v->a[162373] = anon_sym_EQ_TILDE;
	v->a[162374] = anon_sym_QMARK;
	v->a[162375] = 13;
	v->a[162376] = actions(71);
	v->a[162377] = 1;
	v->a[162378] = sym_comment;
	v->a[162379] = actions(7220);
	small_parse_table_8119(v);
}

void	small_parse_table_8119(t_small_parse_table_array *v)
{
	v->a[162380] = 1;
	v->a[162381] = anon_sym_STAR_STAR;
	v->a[162382] = actions(7222);
	v->a[162383] = 1;
	v->a[162384] = sym_test_operator;
	v->a[162385] = actions(7388);
	v->a[162386] = 1;
	v->a[162387] = anon_sym_AMP;
	v->a[162388] = actions(6793);
	v->a[162389] = 2;
	v->a[162390] = anon_sym_PLUS_PLUS;
	v->a[162391] = anon_sym_DASH_DASH;
	v->a[162392] = actions(7208);
	v->a[162393] = 2;
	v->a[162394] = anon_sym_EQ_EQ;
	v->a[162395] = anon_sym_BANG_EQ;
	v->a[162396] = actions(7210);
	v->a[162397] = 2;
	v->a[162398] = anon_sym_LT;
	v->a[162399] = anon_sym_GT;
	small_parse_table_8120(v);
}

/* EOF small_parse_table_1623.c */
