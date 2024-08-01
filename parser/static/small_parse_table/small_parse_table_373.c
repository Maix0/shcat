/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_373.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1865(t_small_parse_table_array *v)
{
	v->a[37300] = actions(3);
	v->a[37301] = 1;
	v->a[37302] = sym_comment;
	v->a[37303] = actions(1625);
	v->a[37304] = 1;
	v->a[37305] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37306] = actions(1627);
	v->a[37307] = 1;
	v->a[37308] = anon_sym_DOLLAR;
	v->a[37309] = actions(1629);
	v->a[37310] = 1;
	v->a[37311] = anon_sym_DQUOTE;
	v->a[37312] = actions(1631);
	v->a[37313] = 1;
	v->a[37314] = anon_sym_DOLLAR_LBRACE;
	v->a[37315] = actions(1633);
	v->a[37316] = 1;
	v->a[37317] = anon_sym_DOLLAR_LPAREN;
	v->a[37318] = actions(1635);
	v->a[37319] = 1;
	small_parse_table_1866(v);
}

void	small_parse_table_1866(t_small_parse_table_array *v)
{
	v->a[37320] = anon_sym_BQUOTE;
	v->a[37321] = actions(1637);
	v->a[37322] = 1;
	v->a[37323] = sym__comment_word;
	v->a[37324] = actions(1639);
	v->a[37325] = 1;
	v->a[37326] = sym__empty_value;
	v->a[37327] = state(535);
	v->a[37328] = 1;
	v->a[37329] = sym_concatenation;
	v->a[37330] = actions(1623);
	v->a[37331] = 3;
	v->a[37332] = sym_raw_string;
	v->a[37333] = sym_number;
	v->a[37334] = sym_word;
	v->a[37335] = state(275);
	v->a[37336] = 5;
	v->a[37337] = sym_arithmetic_expansion;
	v->a[37338] = sym_string;
	v->a[37339] = sym_simple_expansion;
	small_parse_table_1867(v);
}

void	small_parse_table_1867(t_small_parse_table_array *v)
{
	v->a[37340] = sym_expansion;
	v->a[37341] = sym_command_substitution;
	v->a[37342] = 10;
	v->a[37343] = actions(3);
	v->a[37344] = 1;
	v->a[37345] = sym_comment;
	v->a[37346] = actions(1643);
	v->a[37347] = 1;
	v->a[37348] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37349] = actions(1645);
	v->a[37350] = 1;
	v->a[37351] = anon_sym_DOLLAR;
	v->a[37352] = actions(1647);
	v->a[37353] = 1;
	v->a[37354] = anon_sym_DQUOTE;
	v->a[37355] = actions(1649);
	v->a[37356] = 1;
	v->a[37357] = anon_sym_DOLLAR_LBRACE;
	v->a[37358] = actions(1651);
	v->a[37359] = 1;
	small_parse_table_1868(v);
}

void	small_parse_table_1868(t_small_parse_table_array *v)
{
	v->a[37360] = anon_sym_DOLLAR_LPAREN;
	v->a[37361] = actions(1653);
	v->a[37362] = 1;
	v->a[37363] = anon_sym_BQUOTE;
	v->a[37364] = actions(1655);
	v->a[37365] = 1;
	v->a[37366] = sym__bare_dollar;
	v->a[37367] = actions(1641);
	v->a[37368] = 5;
	v->a[37369] = aux_sym_concatenation_token1;
	v->a[37370] = sym_raw_string;
	v->a[37371] = sym_number;
	v->a[37372] = sym__comment_word;
	v->a[37373] = sym_word;
	v->a[37374] = state(827);
	v->a[37375] = 5;
	v->a[37376] = sym_arithmetic_expansion;
	v->a[37377] = sym_string;
	v->a[37378] = sym_simple_expansion;
	v->a[37379] = sym_expansion;
	small_parse_table_1869(v);
}

void	small_parse_table_1869(t_small_parse_table_array *v)
{
	v->a[37380] = sym_command_substitution;
	v->a[37381] = 12;
	v->a[37382] = actions(3);
	v->a[37383] = 1;
	v->a[37384] = sym_comment;
	v->a[37385] = actions(1553);
	v->a[37386] = 1;
	v->a[37387] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37388] = actions(1555);
	v->a[37389] = 1;
	v->a[37390] = anon_sym_DOLLAR;
	v->a[37391] = actions(1557);
	v->a[37392] = 1;
	v->a[37393] = anon_sym_DQUOTE;
	v->a[37394] = actions(1559);
	v->a[37395] = 1;
	v->a[37396] = anon_sym_DOLLAR_LBRACE;
	v->a[37397] = actions(1561);
	v->a[37398] = 1;
	v->a[37399] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1870(v);
}

/* EOF small_parse_table_373.c */
