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
	v->a[32300] = anon_sym_BANG;
	v->a[32301] = anon_sym_LT;
	v->a[32302] = anon_sym_GT;
	v->a[32303] = anon_sym_GT_GT;
	v->a[32304] = anon_sym_LT_AMP;
	v->a[32305] = anon_sym_GT_AMP;
	v->a[32306] = anon_sym_GT_PIPE;
	v->a[32307] = anon_sym_LT_GT;
	v->a[32308] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32309] = anon_sym_DOLLAR;
	v->a[32310] = anon_sym_DQUOTE;
	v->a[32311] = sym_raw_string;
	v->a[32312] = sym_number;
	v->a[32313] = anon_sym_DOLLAR_LBRACE;
	v->a[32314] = anon_sym_DOLLAR_LPAREN;
	v->a[32315] = anon_sym_BQUOTE;
	v->a[32316] = sym_word;
	v->a[32317] = 3;
	v->a[32318] = actions(3);
	v->a[32319] = 1;
	small_parse_table_1616(v);
}

void	small_parse_table_1616(t_small_parse_table_array *v)
{
	v->a[32320] = sym_comment;
	v->a[32321] = actions(1147);
	v->a[32322] = 1;
	v->a[32323] = sym__concat;
	v->a[32324] = actions(1145);
	v->a[32325] = 26;
	v->a[32326] = anon_sym_PIPE;
	v->a[32327] = anon_sym_RPAREN;
	v->a[32328] = anon_sym_SEMI_SEMI;
	v->a[32329] = anon_sym_AMP_AMP;
	v->a[32330] = anon_sym_PIPE_PIPE;
	v->a[32331] = anon_sym_LT;
	v->a[32332] = anon_sym_GT;
	v->a[32333] = anon_sym_GT_GT;
	v->a[32334] = anon_sym_LT_AMP;
	v->a[32335] = anon_sym_GT_AMP;
	v->a[32336] = anon_sym_GT_PIPE;
	v->a[32337] = anon_sym_LT_GT;
	v->a[32338] = anon_sym_LT_LT;
	v->a[32339] = anon_sym_LT_LT_DASH;
	small_parse_table_1617(v);
}

void	small_parse_table_1617(t_small_parse_table_array *v)
{
	v->a[32340] = aux_sym_heredoc_redirect_token1;
	v->a[32341] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32342] = aux_sym_concatenation_token1;
	v->a[32343] = anon_sym_DOLLAR;
	v->a[32344] = anon_sym_DQUOTE;
	v->a[32345] = sym_raw_string;
	v->a[32346] = sym_number;
	v->a[32347] = anon_sym_DOLLAR_LBRACE;
	v->a[32348] = anon_sym_DOLLAR_LPAREN;
	v->a[32349] = anon_sym_BQUOTE;
	v->a[32350] = sym_word;
	v->a[32351] = anon_sym_SEMI;
	v->a[32352] = 15;
	v->a[32353] = actions(3);
	v->a[32354] = 1;
	v->a[32355] = sym_comment;
	v->a[32356] = actions(53);
	v->a[32357] = 1;
	v->a[32358] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32359] = actions(55);
	small_parse_table_1618(v);
}

void	small_parse_table_1618(t_small_parse_table_array *v)
{
	v->a[32360] = 1;
	v->a[32361] = anon_sym_DOLLAR;
	v->a[32362] = actions(57);
	v->a[32363] = 1;
	v->a[32364] = anon_sym_DQUOTE;
	v->a[32365] = actions(61);
	v->a[32366] = 1;
	v->a[32367] = anon_sym_DOLLAR_LBRACE;
	v->a[32368] = actions(63);
	v->a[32369] = 1;
	v->a[32370] = anon_sym_DOLLAR_LPAREN;
	v->a[32371] = actions(65);
	v->a[32372] = 1;
	v->a[32373] = anon_sym_BQUOTE;
	v->a[32374] = actions(341);
	v->a[32375] = 1;
	v->a[32376] = sym_variable_name;
	v->a[32377] = state(275);
	v->a[32378] = 1;
	v->a[32379] = sym_command_name;
	small_parse_table_1619(v);
}

void	small_parse_table_1619(t_small_parse_table_array *v)
{
	v->a[32380] = state(602);
	v->a[32381] = 1;
	v->a[32382] = sym_concatenation;
	v->a[32383] = state(1073);
	v->a[32384] = 1;
	v->a[32385] = sym_file_redirect;
	v->a[32386] = state(823);
	v->a[32387] = 2;
	v->a[32388] = sym_variable_assignment;
	v->a[32389] = aux_sym_command_repeat1;
	v->a[32390] = actions(59);
	v->a[32391] = 3;
	v->a[32392] = sym_raw_string;
	v->a[32393] = sym_number;
	v->a[32394] = sym_word;
	v->a[32395] = state(425);
	v->a[32396] = 5;
	v->a[32397] = sym_arithmetic_expansion;
	v->a[32398] = sym_string;
	v->a[32399] = sym_simple_expansion;
	small_parse_table_1620(v);
}

/* EOF small_parse_table_323.c */
