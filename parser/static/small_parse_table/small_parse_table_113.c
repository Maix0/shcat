/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_113.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_565(t_small_parse_table_array *v)
{
	v->a[11300] = actions(1739);
	v->a[11301] = 1;
	v->a[11302] = anon_sym_DOLLAR;
	v->a[11303] = actions(1743);
	v->a[11304] = 1;
	v->a[11305] = anon_sym_DQUOTE;
	v->a[11306] = actions(1745);
	v->a[11307] = 1;
	v->a[11308] = aux_sym_number_token1;
	v->a[11309] = actions(1747);
	v->a[11310] = 1;
	v->a[11311] = aux_sym_number_token2;
	v->a[11312] = actions(1749);
	v->a[11313] = 1;
	v->a[11314] = anon_sym_DOLLAR_LBRACE;
	v->a[11315] = actions(1751);
	v->a[11316] = 1;
	v->a[11317] = anon_sym_DOLLAR_LPAREN;
	v->a[11318] = actions(1755);
	v->a[11319] = 1;
	small_parse_table_566(v);
}

void	small_parse_table_566(t_small_parse_table_array *v)
{
	v->a[11320] = anon_sym_DOLLAR_BQUOTE;
	v->a[11321] = actions(1761);
	v->a[11322] = 1;
	v->a[11323] = sym__brace_start;
	v->a[11324] = actions(2286);
	v->a[11325] = 1;
	v->a[11326] = sym__special_character;
	v->a[11327] = actions(2290);
	v->a[11328] = 1;
	v->a[11329] = sym_test_operator;
	v->a[11330] = actions(2292);
	v->a[11331] = 1;
	v->a[11332] = aux_sym__simple_variable_name_token1;
	v->a[11333] = state(1219);
	v->a[11334] = 1;
	v->a[11335] = aux_sym__literal_repeat1;
	v->a[11336] = actions(1246);
	v->a[11337] = 2;
	v->a[11338] = sym_file_descriptor;
	v->a[11339] = aux_sym_heredoc_redirect_token1;
	small_parse_table_567(v);
}

void	small_parse_table_567(t_small_parse_table_array *v)
{
	v->a[11340] = actions(2284);
	v->a[11341] = 2;
	v->a[11342] = sym_raw_string;
	v->a[11343] = sym_word;
	v->a[11344] = state(416);
	v->a[11345] = 2;
	v->a[11346] = sym_concatenation;
	v->a[11347] = aux_sym_unset_command_repeat1;
	v->a[11348] = state(1088);
	v->a[11349] = 7;
	v->a[11350] = sym_arithmetic_expansion;
	v->a[11351] = sym_brace_expression;
	v->a[11352] = sym_string;
	v->a[11353] = sym_number;
	v->a[11354] = sym_simple_expansion;
	v->a[11355] = sym_expansion;
	v->a[11356] = sym_command_substitution;
	v->a[11357] = actions(1244);
	v->a[11358] = 20;
	v->a[11359] = anon_sym_PIPE;
	small_parse_table_568(v);
}

void	small_parse_table_568(t_small_parse_table_array *v)
{
	v->a[11360] = anon_sym_SEMI_SEMI;
	v->a[11361] = anon_sym_PIPE_AMP;
	v->a[11362] = anon_sym_AMP_AMP;
	v->a[11363] = anon_sym_PIPE_PIPE;
	v->a[11364] = anon_sym_LT;
	v->a[11365] = anon_sym_GT;
	v->a[11366] = anon_sym_GT_GT;
	v->a[11367] = anon_sym_AMP_GT;
	v->a[11368] = anon_sym_AMP_GT_GT;
	v->a[11369] = anon_sym_LT_AMP;
	v->a[11370] = anon_sym_GT_AMP;
	v->a[11371] = anon_sym_GT_PIPE;
	v->a[11372] = anon_sym_LT_AMP_DASH;
	v->a[11373] = anon_sym_GT_AMP_DASH;
	v->a[11374] = anon_sym_LT_LT;
	v->a[11375] = anon_sym_LT_LT_DASH;
	v->a[11376] = anon_sym_AMP;
	v->a[11377] = anon_sym_BQUOTE;
	v->a[11378] = anon_sym_SEMI;
	v->a[11379] = 21;
	small_parse_table_569(v);
}

void	small_parse_table_569(t_small_parse_table_array *v)
{
	v->a[11380] = actions(3);
	v->a[11381] = 1;
	v->a[11382] = sym_comment;
	v->a[11383] = actions(2111);
	v->a[11384] = 1;
	v->a[11385] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11386] = actions(2114);
	v->a[11387] = 1;
	v->a[11388] = anon_sym_DOLLAR;
	v->a[11389] = actions(2120);
	v->a[11390] = 1;
	v->a[11391] = anon_sym_DQUOTE;
	v->a[11392] = actions(2123);
	v->a[11393] = 1;
	v->a[11394] = aux_sym_number_token1;
	v->a[11395] = actions(2126);
	v->a[11396] = 1;
	v->a[11397] = aux_sym_number_token2;
	v->a[11398] = actions(2129);
	v->a[11399] = 1;
	small_parse_table_570(v);
}

/* EOF small_parse_table_113.c */
