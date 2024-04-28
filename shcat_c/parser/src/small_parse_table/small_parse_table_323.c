/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_323.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1615(t_small_parse_table_array *v)
{
	v->a[32300] = sym_string;
	v->a[32301] = sym_translated_string;
	v->a[32302] = sym_number;
	v->a[32303] = sym_simple_expansion;
	v->a[32304] = sym_expansion;
	v->a[32305] = sym_command_substitution;
	v->a[32306] = sym_process_substitution;
	v->a[32307] = actions(2216);
	v->a[32308] = 12;
	v->a[32309] = sym_file_descriptor;
	v->a[32310] = anon_sym_PIPE_PIPE;
	v->a[32311] = anon_sym_AMP_AMP;
	v->a[32312] = anon_sym_GT_GT;
	v->a[32313] = anon_sym_PIPE_AMP;
	v->a[32314] = anon_sym_RBRACK;
	v->a[32315] = anon_sym_AMP_GT_GT;
	v->a[32316] = anon_sym_GT_PIPE;
	v->a[32317] = anon_sym_LT_AMP_DASH;
	v->a[32318] = anon_sym_GT_AMP_DASH;
	v->a[32319] = anon_sym_LT_LT_DASH;
	small_parse_table_1616(v);
}

void	small_parse_table_1616(t_small_parse_table_array *v)
{
	v->a[32320] = anon_sym_LT_LT_LT;
	v->a[32321] = 8;
	v->a[32322] = actions(3);
	v->a[32323] = 1;
	v->a[32324] = sym_comment;
	v->a[32325] = actions(2267);
	v->a[32326] = 1;
	v->a[32327] = anon_sym_DQUOTE;
	v->a[32328] = actions(3829);
	v->a[32329] = 1;
	v->a[32330] = sym_variable_name;
	v->a[32331] = state(1595);
	v->a[32332] = 1;
	v->a[32333] = sym_string;
	v->a[32334] = actions(3827);
	v->a[32335] = 2;
	v->a[32336] = aux_sym__simple_variable_name_token1;
	v->a[32337] = aux_sym__multiline_variable_name_token1;
	v->a[32338] = actions(1235);
	v->a[32339] = 3;
	small_parse_table_1617(v);
}

void	small_parse_table_1617(t_small_parse_table_array *v)
{
	v->a[32340] = sym_file_descriptor;
	v->a[32341] = sym_test_operator;
	v->a[32342] = sym__brace_start;
	v->a[32343] = actions(3825);
	v->a[32344] = 9;
	v->a[32345] = anon_sym_DASH;
	v->a[32346] = anon_sym_STAR;
	v->a[32347] = anon_sym_BANG;
	v->a[32348] = anon_sym_QMARK;
	v->a[32349] = anon_sym_DOLLAR;
	v->a[32350] = anon_sym_POUND;
	v->a[32351] = anon_sym_AT2;
	v->a[32352] = anon_sym_0;
	v->a[32353] = anon_sym__;
	v->a[32354] = actions(1227);
	v->a[32355] = 32;
	v->a[32356] = anon_sym_LPAREN_LPAREN;
	v->a[32357] = anon_sym_PIPE_PIPE;
	v->a[32358] = anon_sym_AMP_AMP;
	v->a[32359] = anon_sym_PIPE;
	small_parse_table_1618(v);
}

void	small_parse_table_1618(t_small_parse_table_array *v)
{
	v->a[32360] = anon_sym_LT;
	v->a[32361] = anon_sym_GT;
	v->a[32362] = anon_sym_LT_LT;
	v->a[32363] = anon_sym_GT_GT;
	v->a[32364] = anon_sym_PIPE_AMP;
	v->a[32365] = anon_sym_AMP_GT;
	v->a[32366] = anon_sym_AMP_GT_GT;
	v->a[32367] = anon_sym_LT_AMP;
	v->a[32368] = anon_sym_GT_AMP;
	v->a[32369] = anon_sym_GT_PIPE;
	v->a[32370] = anon_sym_LT_AMP_DASH;
	v->a[32371] = anon_sym_GT_AMP_DASH;
	v->a[32372] = anon_sym_LT_LT_DASH;
	v->a[32373] = aux_sym_heredoc_redirect_token1;
	v->a[32374] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32375] = anon_sym_DOLLAR_LBRACK;
	v->a[32376] = sym__special_character;
	v->a[32377] = sym_raw_string;
	v->a[32378] = sym_ansi_c_string;
	v->a[32379] = aux_sym_number_token1;
	small_parse_table_1619(v);
}

void	small_parse_table_1619(t_small_parse_table_array *v)
{
	v->a[32380] = aux_sym_number_token2;
	v->a[32381] = anon_sym_DOLLAR_LBRACE;
	v->a[32382] = anon_sym_DOLLAR_LPAREN;
	v->a[32383] = anon_sym_BQUOTE;
	v->a[32384] = anon_sym_DOLLAR_BQUOTE;
	v->a[32385] = anon_sym_LT_LPAREN;
	v->a[32386] = anon_sym_GT_LPAREN;
	v->a[32387] = sym_word;
	v->a[32388] = 22;
	v->a[32389] = actions(71);
	v->a[32390] = 1;
	v->a[32391] = sym_comment;
	v->a[32392] = actions(4629);
	v->a[32393] = 1;
	v->a[32394] = sym_word;
	v->a[32395] = actions(4633);
	v->a[32396] = 1;
	v->a[32397] = anon_sym_DOLLAR_LBRACK;
	v->a[32398] = actions(4635);
	v->a[32399] = 1;
	small_parse_table_1620(v);
}

/* EOF small_parse_table_323.c */
