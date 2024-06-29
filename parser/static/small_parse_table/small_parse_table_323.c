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
	v->a[32300] = state(390);
	v->a[32301] = 1;
	v->a[32302] = aux_sym_command_repeat2;
	v->a[32303] = state(712);
	v->a[32304] = 1;
	v->a[32305] = sym_concatenation;
	v->a[32306] = actions(1230);
	v->a[32307] = 3;
	v->a[32308] = sym_raw_string;
	v->a[32309] = sym_number;
	v->a[32310] = sym_word;
	v->a[32311] = state(796);
	v->a[32312] = 5;
	v->a[32313] = sym_arithmetic_expansion;
	v->a[32314] = sym_string;
	v->a[32315] = sym_simple_expansion;
	v->a[32316] = sym_expansion;
	v->a[32317] = sym_command_substitution;
	v->a[32318] = actions(557);
	v->a[32319] = 16;
	small_parse_table_1616(v);
}

void	small_parse_table_1616(t_small_parse_table_array *v)
{
	v->a[32320] = anon_sym_PIPE;
	v->a[32321] = anon_sym_AMP_AMP;
	v->a[32322] = anon_sym_PIPE_PIPE;
	v->a[32323] = anon_sym_LT;
	v->a[32324] = anon_sym_GT;
	v->a[32325] = anon_sym_GT_GT;
	v->a[32326] = anon_sym_AMP_GT;
	v->a[32327] = anon_sym_AMP_GT_GT;
	v->a[32328] = anon_sym_LT_AMP;
	v->a[32329] = anon_sym_GT_AMP;
	v->a[32330] = anon_sym_GT_PIPE;
	v->a[32331] = anon_sym_LT_AMP_DASH;
	v->a[32332] = anon_sym_GT_AMP_DASH;
	v->a[32333] = anon_sym_LT_LT;
	v->a[32334] = anon_sym_LT_LT_DASH;
	v->a[32335] = aux_sym_heredoc_redirect_token1;
	v->a[32336] = 14;
	v->a[32337] = actions(3);
	v->a[32338] = 1;
	v->a[32339] = sym_comment;
	small_parse_table_1617(v);
}

void	small_parse_table_1617(t_small_parse_table_array *v)
{
	v->a[32340] = actions(477);
	v->a[32341] = 1;
	v->a[32342] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32343] = actions(479);
	v->a[32344] = 1;
	v->a[32345] = anon_sym_DOLLAR;
	v->a[32346] = actions(481);
	v->a[32347] = 1;
	v->a[32348] = anon_sym_DQUOTE;
	v->a[32349] = actions(483);
	v->a[32350] = 1;
	v->a[32351] = anon_sym_DOLLAR_LBRACE;
	v->a[32352] = actions(485);
	v->a[32353] = 1;
	v->a[32354] = anon_sym_DOLLAR_LPAREN;
	v->a[32355] = actions(487);
	v->a[32356] = 1;
	v->a[32357] = anon_sym_BQUOTE;
	v->a[32358] = actions(489);
	v->a[32359] = 1;
	small_parse_table_1618(v);
}

void	small_parse_table_1618(t_small_parse_table_array *v)
{
	v->a[32360] = sym__bare_dollar;
	v->a[32361] = actions(542);
	v->a[32362] = 1;
	v->a[32363] = sym_file_descriptor;
	v->a[32364] = state(390);
	v->a[32365] = 1;
	v->a[32366] = aux_sym_command_repeat2;
	v->a[32367] = state(712);
	v->a[32368] = 1;
	v->a[32369] = sym_concatenation;
	v->a[32370] = actions(891);
	v->a[32371] = 3;
	v->a[32372] = sym_raw_string;
	v->a[32373] = sym_number;
	v->a[32374] = sym_word;
	v->a[32375] = state(796);
	v->a[32376] = 5;
	v->a[32377] = sym_arithmetic_expansion;
	v->a[32378] = sym_string;
	v->a[32379] = sym_simple_expansion;
	small_parse_table_1619(v);
}

void	small_parse_table_1619(t_small_parse_table_array *v)
{
	v->a[32380] = sym_expansion;
	v->a[32381] = sym_command_substitution;
	v->a[32382] = actions(544);
	v->a[32383] = 16;
	v->a[32384] = anon_sym_PIPE;
	v->a[32385] = anon_sym_AMP_AMP;
	v->a[32386] = anon_sym_PIPE_PIPE;
	v->a[32387] = anon_sym_LT;
	v->a[32388] = anon_sym_GT;
	v->a[32389] = anon_sym_GT_GT;
	v->a[32390] = anon_sym_AMP_GT;
	v->a[32391] = anon_sym_AMP_GT_GT;
	v->a[32392] = anon_sym_LT_AMP;
	v->a[32393] = anon_sym_GT_AMP;
	v->a[32394] = anon_sym_GT_PIPE;
	v->a[32395] = anon_sym_LT_AMP_DASH;
	v->a[32396] = anon_sym_GT_AMP_DASH;
	v->a[32397] = anon_sym_LT_LT;
	v->a[32398] = anon_sym_LT_LT_DASH;
	v->a[32399] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1620(v);
}

/* EOF small_parse_table_323.c */
