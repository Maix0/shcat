/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_383.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1915(t_small_parse_table_array *v)
{
	v->a[38300] = 10;
	v->a[38301] = actions(3);
	v->a[38302] = 1;
	v->a[38303] = sym_comment;
	v->a[38304] = actions(1569);
	v->a[38305] = 1;
	v->a[38306] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38307] = actions(1573);
	v->a[38308] = 1;
	v->a[38309] = anon_sym_DQUOTE;
	v->a[38310] = actions(1575);
	v->a[38311] = 1;
	v->a[38312] = anon_sym_DOLLAR_LBRACE;
	v->a[38313] = actions(1577);
	v->a[38314] = 1;
	v->a[38315] = anon_sym_DOLLAR_LPAREN;
	v->a[38316] = actions(1579);
	v->a[38317] = 1;
	v->a[38318] = anon_sym_BQUOTE;
	v->a[38319] = actions(1581);
	small_parse_table_1916(v);
}

void	small_parse_table_1916(t_small_parse_table_array *v)
{
	v->a[38320] = 1;
	v->a[38321] = sym__bare_dollar;
	v->a[38322] = actions(1756);
	v->a[38323] = 1;
	v->a[38324] = anon_sym_DOLLAR;
	v->a[38325] = actions(1567);
	v->a[38326] = 5;
	v->a[38327] = aux_sym_concatenation_token1;
	v->a[38328] = sym_raw_string;
	v->a[38329] = sym_number;
	v->a[38330] = sym__comment_word;
	v->a[38331] = sym_word;
	v->a[38332] = state(1450);
	v->a[38333] = 5;
	v->a[38334] = sym_arithmetic_expansion;
	v->a[38335] = sym_string;
	v->a[38336] = sym_simple_expansion;
	v->a[38337] = sym_expansion;
	v->a[38338] = sym_command_substitution;
	v->a[38339] = 12;
	small_parse_table_1917(v);
}

void	small_parse_table_1917(t_small_parse_table_array *v)
{
	v->a[38340] = actions(3);
	v->a[38341] = 1;
	v->a[38342] = sym_comment;
	v->a[38343] = actions(1535);
	v->a[38344] = 1;
	v->a[38345] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38346] = actions(1539);
	v->a[38347] = 1;
	v->a[38348] = anon_sym_DQUOTE;
	v->a[38349] = actions(1541);
	v->a[38350] = 1;
	v->a[38351] = anon_sym_DOLLAR_LBRACE;
	v->a[38352] = actions(1543);
	v->a[38353] = 1;
	v->a[38354] = anon_sym_DOLLAR_LPAREN;
	v->a[38355] = actions(1545);
	v->a[38356] = 1;
	v->a[38357] = anon_sym_BQUOTE;
	v->a[38358] = actions(1585);
	v->a[38359] = 1;
	small_parse_table_1918(v);
}

void	small_parse_table_1918(t_small_parse_table_array *v)
{
	v->a[38360] = anon_sym_DOLLAR;
	v->a[38361] = actions(1587);
	v->a[38362] = 1;
	v->a[38363] = sym__comment_word;
	v->a[38364] = actions(1589);
	v->a[38365] = 1;
	v->a[38366] = sym__empty_value;
	v->a[38367] = state(950);
	v->a[38368] = 1;
	v->a[38369] = sym_concatenation;
	v->a[38370] = actions(1758);
	v->a[38371] = 3;
	v->a[38372] = sym_raw_string;
	v->a[38373] = sym_number;
	v->a[38374] = sym_word;
	v->a[38375] = state(865);
	v->a[38376] = 5;
	v->a[38377] = sym_arithmetic_expansion;
	v->a[38378] = sym_string;
	v->a[38379] = sym_simple_expansion;
	small_parse_table_1919(v);
}

void	small_parse_table_1919(t_small_parse_table_array *v)
{
	v->a[38380] = sym_expansion;
	v->a[38381] = sym_command_substitution;
	v->a[38382] = 12;
	v->a[38383] = actions(3);
	v->a[38384] = 1;
	v->a[38385] = sym_comment;
	v->a[38386] = actions(1479);
	v->a[38387] = 1;
	v->a[38388] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38389] = actions(1481);
	v->a[38390] = 1;
	v->a[38391] = anon_sym_DOLLAR;
	v->a[38392] = actions(1483);
	v->a[38393] = 1;
	v->a[38394] = anon_sym_DQUOTE;
	v->a[38395] = actions(1485);
	v->a[38396] = 1;
	v->a[38397] = anon_sym_DOLLAR_LBRACE;
	v->a[38398] = actions(1487);
	v->a[38399] = 1;
	small_parse_table_1920(v);
}

/* EOF small_parse_table_383.c */
