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
	v->a[32300] = actions(1122);
	v->a[32301] = 13;
	v->a[32302] = anon_sym_PIPE;
	v->a[32303] = anon_sym_EQ;
	v->a[32304] = anon_sym_LT;
	v->a[32305] = anon_sym_GT;
	v->a[32306] = anon_sym_GT_GT;
	v->a[32307] = anon_sym_LT_LT;
	v->a[32308] = anon_sym_CARET;
	v->a[32309] = anon_sym_AMP;
	v->a[32310] = anon_sym_PLUS;
	v->a[32311] = anon_sym_DASH;
	v->a[32312] = anon_sym_STAR;
	v->a[32313] = anon_sym_SLASH;
	v->a[32314] = anon_sym_PERCENT;
	v->a[32315] = actions(1124);
	v->a[32316] = 21;
	v->a[32317] = anon_sym_AMP_AMP;
	v->a[32318] = anon_sym_PIPE_PIPE;
	v->a[32319] = anon_sym_RPAREN_RPAREN;
	small_parse_table_1616(v);
}

void	small_parse_table_1616(t_small_parse_table_array *v)
{
	v->a[32320] = anon_sym_PLUS_EQ;
	v->a[32321] = anon_sym_DASH_EQ;
	v->a[32322] = anon_sym_STAR_EQ;
	v->a[32323] = anon_sym_SLASH_EQ;
	v->a[32324] = anon_sym_PERCENT_EQ;
	v->a[32325] = anon_sym_LT_LT_EQ;
	v->a[32326] = anon_sym_GT_GT_EQ;
	v->a[32327] = anon_sym_AMP_EQ;
	v->a[32328] = anon_sym_CARET_EQ;
	v->a[32329] = anon_sym_PIPE_EQ;
	v->a[32330] = anon_sym_EQ_EQ;
	v->a[32331] = anon_sym_BANG_EQ;
	v->a[32332] = anon_sym_LT_EQ;
	v->a[32333] = anon_sym_GT_EQ;
	v->a[32334] = anon_sym_QMARK;
	v->a[32335] = anon_sym_COLON;
	v->a[32336] = anon_sym_PLUS_PLUS2;
	v->a[32337] = anon_sym_DASH_DASH2;
	v->a[32338] = 14;
	v->a[32339] = actions(3);
	small_parse_table_1617(v);
}

void	small_parse_table_1617(t_small_parse_table_array *v)
{
	v->a[32340] = 1;
	v->a[32341] = sym_comment;
	v->a[32342] = actions(536);
	v->a[32343] = 1;
	v->a[32344] = sym_file_descriptor;
	v->a[32345] = actions(587);
	v->a[32346] = 1;
	v->a[32347] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32348] = actions(590);
	v->a[32349] = 1;
	v->a[32350] = anon_sym_DOLLAR;
	v->a[32351] = actions(593);
	v->a[32352] = 1;
	v->a[32353] = anon_sym_DQUOTE;
	v->a[32354] = actions(596);
	v->a[32355] = 1;
	v->a[32356] = anon_sym_DOLLAR_LBRACE;
	v->a[32357] = actions(599);
	v->a[32358] = 1;
	v->a[32359] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1618(v);
}

void	small_parse_table_1618(t_small_parse_table_array *v)
{
	v->a[32360] = actions(602);
	v->a[32361] = 1;
	v->a[32362] = anon_sym_BQUOTE;
	v->a[32363] = actions(605);
	v->a[32364] = 1;
	v->a[32365] = sym__bare_dollar;
	v->a[32366] = state(392);
	v->a[32367] = 1;
	v->a[32368] = aux_sym_command_repeat2;
	v->a[32369] = state(729);
	v->a[32370] = 1;
	v->a[32371] = sym_concatenation;
	v->a[32372] = actions(1254);
	v->a[32373] = 3;
	v->a[32374] = sym_raw_string;
	v->a[32375] = sym_number;
	v->a[32376] = sym_word;
	v->a[32377] = state(910);
	v->a[32378] = 5;
	v->a[32379] = sym_arithmetic_expansion;
	small_parse_table_1619(v);
}

void	small_parse_table_1619(t_small_parse_table_array *v)
{
	v->a[32380] = sym_string;
	v->a[32381] = sym_simple_expansion;
	v->a[32382] = sym_expansion;
	v->a[32383] = sym_command_substitution;
	v->a[32384] = actions(516);
	v->a[32385] = 16;
	v->a[32386] = anon_sym_PIPE;
	v->a[32387] = anon_sym_AMP_AMP;
	v->a[32388] = anon_sym_PIPE_PIPE;
	v->a[32389] = anon_sym_LT;
	v->a[32390] = anon_sym_GT;
	v->a[32391] = anon_sym_GT_GT;
	v->a[32392] = anon_sym_AMP_GT;
	v->a[32393] = anon_sym_AMP_GT_GT;
	v->a[32394] = anon_sym_LT_AMP;
	v->a[32395] = anon_sym_GT_AMP;
	v->a[32396] = anon_sym_GT_PIPE;
	v->a[32397] = anon_sym_LT_AMP_DASH;
	v->a[32398] = anon_sym_GT_AMP_DASH;
	v->a[32399] = anon_sym_LT_LT;
	small_parse_table_1620(v);
}

/* EOF small_parse_table_323.c */
