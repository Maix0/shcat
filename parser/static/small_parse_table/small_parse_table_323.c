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
	v->a[32300] = 1;
	v->a[32301] = aux_sym_case_statement_repeat1;
	v->a[32302] = state(1232);
	v->a[32303] = 1;
	v->a[32304] = sym_case_item;
	v->a[32305] = state(1711);
	v->a[32306] = 1;
	v->a[32307] = sym__case_item_last;
	v->a[32308] = state(1538);
	v->a[32309] = 2;
	v->a[32310] = sym_concatenation;
	v->a[32311] = sym__extglob_blob;
	v->a[32312] = actions(774);
	v->a[32313] = 3;
	v->a[32314] = sym_raw_string;
	v->a[32315] = sym_number;
	v->a[32316] = sym_word;
	v->a[32317] = state(1468);
	v->a[32318] = 5;
	v->a[32319] = sym_arithmetic_expansion;
	small_parse_table_1616(v);
}

void	small_parse_table_1616(t_small_parse_table_array *v)
{
	v->a[32320] = sym_string;
	v->a[32321] = sym_simple_expansion;
	v->a[32322] = sym_expansion;
	v->a[32323] = sym_command_substitution;
	v->a[32324] = 4;
	v->a[32325] = actions(3);
	v->a[32326] = 1;
	v->a[32327] = sym_comment;
	v->a[32328] = actions(1042);
	v->a[32329] = 1;
	v->a[32330] = anon_sym_BQUOTE;
	v->a[32331] = actions(1044);
	v->a[32332] = 1;
	v->a[32333] = sym_variable_name;
	v->a[32334] = actions(1040);
	v->a[32335] = 19;
	v->a[32336] = anon_sym_for;
	v->a[32337] = anon_sym_while;
	v->a[32338] = anon_sym_until;
	v->a[32339] = anon_sym_if;
	small_parse_table_1617(v);
}

void	small_parse_table_1617(t_small_parse_table_array *v)
{
	v->a[32340] = anon_sym_case;
	v->a[32341] = anon_sym_LPAREN;
	v->a[32342] = anon_sym_LBRACE;
	v->a[32343] = anon_sym_BANG;
	v->a[32344] = anon_sym_LT;
	v->a[32345] = anon_sym_GT;
	v->a[32346] = anon_sym_GT_GT;
	v->a[32347] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32348] = anon_sym_DOLLAR;
	v->a[32349] = anon_sym_DQUOTE;
	v->a[32350] = sym_raw_string;
	v->a[32351] = sym_number;
	v->a[32352] = anon_sym_DOLLAR_LBRACE;
	v->a[32353] = anon_sym_DOLLAR_LPAREN;
	v->a[32354] = sym_word;
	v->a[32355] = 3;
	v->a[32356] = actions(3);
	v->a[32357] = 1;
	v->a[32358] = sym_comment;
	v->a[32359] = actions(1044);
	small_parse_table_1618(v);
}

void	small_parse_table_1618(t_small_parse_table_array *v)
{
	v->a[32360] = 1;
	v->a[32361] = sym_variable_name;
	v->a[32362] = actions(1040);
	v->a[32363] = 20;
	v->a[32364] = anon_sym_for;
	v->a[32365] = anon_sym_while;
	v->a[32366] = anon_sym_until;
	v->a[32367] = anon_sym_if;
	v->a[32368] = anon_sym_case;
	v->a[32369] = anon_sym_LPAREN;
	v->a[32370] = anon_sym_LBRACE;
	v->a[32371] = anon_sym_BANG;
	v->a[32372] = anon_sym_LT;
	v->a[32373] = anon_sym_GT;
	v->a[32374] = anon_sym_GT_GT;
	v->a[32375] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32376] = anon_sym_DOLLAR;
	v->a[32377] = anon_sym_DQUOTE;
	v->a[32378] = sym_raw_string;
	v->a[32379] = sym_number;
	small_parse_table_1619(v);
}

void	small_parse_table_1619(t_small_parse_table_array *v)
{
	v->a[32380] = anon_sym_DOLLAR_LBRACE;
	v->a[32381] = anon_sym_DOLLAR_LPAREN;
	v->a[32382] = anon_sym_BQUOTE;
	v->a[32383] = sym_word;
	v->a[32384] = 6;
	v->a[32385] = actions(3);
	v->a[32386] = 1;
	v->a[32387] = sym_comment;
	v->a[32388] = actions(857);
	v->a[32389] = 1;
	v->a[32390] = aux_sym_concatenation_token1;
	v->a[32391] = actions(859);
	v->a[32392] = 1;
	v->a[32393] = sym__concat;
	v->a[32394] = actions(911);
	v->a[32395] = 1;
	v->a[32396] = sym__bare_dollar;
	v->a[32397] = state(579);
	v->a[32398] = 1;
	v->a[32399] = aux_sym_concatenation_repeat1;
	small_parse_table_1620(v);
}

/* EOF small_parse_table_323.c */
