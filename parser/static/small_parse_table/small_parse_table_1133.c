/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1133.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5665(t_small_parse_table_array *v)
{
	v->a[113300] = 1;
	v->a[113301] = anon_sym_DQUOTE;
	v->a[113302] = actions(671);
	v->a[113303] = 1;
	v->a[113304] = aux_sym_number_token1;
	v->a[113305] = actions(673);
	v->a[113306] = 1;
	v->a[113307] = aux_sym_number_token2;
	v->a[113308] = actions(675);
	v->a[113309] = 1;
	v->a[113310] = anon_sym_DOLLAR_LBRACE;
	v->a[113311] = actions(677);
	v->a[113312] = 1;
	v->a[113313] = anon_sym_DOLLAR_LPAREN;
	v->a[113314] = actions(679);
	v->a[113315] = 1;
	v->a[113316] = anon_sym_BQUOTE;
	v->a[113317] = actions(681);
	v->a[113318] = 1;
	v->a[113319] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_5666(v);
}

void	small_parse_table_5666(t_small_parse_table_array *v)
{
	v->a[113320] = actions(687);
	v->a[113321] = 1;
	v->a[113322] = sym__brace_start;
	v->a[113323] = actions(6541);
	v->a[113324] = 1;
	v->a[113325] = sym_word;
	v->a[113326] = actions(6543);
	v->a[113327] = 1;
	v->a[113328] = sym__special_character;
	v->a[113329] = actions(6547);
	v->a[113330] = 1;
	v->a[113331] = sym__comment_word;
	v->a[113332] = actions(6545);
	v->a[113333] = 3;
	v->a[113334] = sym_test_operator;
	v->a[113335] = sym__bare_dollar;
	v->a[113336] = sym_raw_string;
	v->a[113337] = state(1400);
	v->a[113338] = 7;
	v->a[113339] = sym_arithmetic_expansion;
	small_parse_table_5667(v);
}

void	small_parse_table_5667(t_small_parse_table_array *v)
{
	v->a[113340] = sym_brace_expression;
	v->a[113341] = sym_string;
	v->a[113342] = sym_number;
	v->a[113343] = sym_simple_expansion;
	v->a[113344] = sym_expansion;
	v->a[113345] = sym_command_substitution;
	v->a[113346] = 16;
	v->a[113347] = actions(3);
	v->a[113348] = 1;
	v->a[113349] = sym_comment;
	v->a[113350] = actions(2186);
	v->a[113351] = 1;
	v->a[113352] = aux_sym_number_token1;
	v->a[113353] = actions(2188);
	v->a[113354] = 1;
	v->a[113355] = aux_sym_number_token2;
	v->a[113356] = actions(2192);
	v->a[113357] = 1;
	v->a[113358] = anon_sym_DOLLAR_LPAREN;
	v->a[113359] = actions(2200);
	small_parse_table_5668(v);
}

void	small_parse_table_5668(t_small_parse_table_array *v)
{
	v->a[113360] = 1;
	v->a[113361] = sym__brace_start;
	v->a[113362] = actions(6503);
	v->a[113363] = 1;
	v->a[113364] = sym_word;
	v->a[113365] = actions(6505);
	v->a[113366] = 1;
	v->a[113367] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[113368] = actions(6509);
	v->a[113369] = 1;
	v->a[113370] = sym__special_character;
	v->a[113371] = actions(6511);
	v->a[113372] = 1;
	v->a[113373] = anon_sym_DQUOTE;
	v->a[113374] = actions(6515);
	v->a[113375] = 1;
	v->a[113376] = anon_sym_DOLLAR_LBRACE;
	v->a[113377] = actions(6517);
	v->a[113378] = 1;
	v->a[113379] = anon_sym_BQUOTE;
	small_parse_table_5669(v);
}

void	small_parse_table_5669(t_small_parse_table_array *v)
{
	v->a[113380] = actions(6519);
	v->a[113381] = 1;
	v->a[113382] = anon_sym_DOLLAR_BQUOTE;
	v->a[113383] = actions(6521);
	v->a[113384] = 1;
	v->a[113385] = sym__comment_word;
	v->a[113386] = actions(6549);
	v->a[113387] = 1;
	v->a[113388] = anon_sym_DOLLAR;
	v->a[113389] = actions(6513);
	v->a[113390] = 3;
	v->a[113391] = sym_test_operator;
	v->a[113392] = sym__bare_dollar;
	v->a[113393] = sym_raw_string;
	v->a[113394] = state(2085);
	v->a[113395] = 7;
	v->a[113396] = sym_arithmetic_expansion;
	v->a[113397] = sym_brace_expression;
	v->a[113398] = sym_string;
	v->a[113399] = sym_number;
	small_parse_table_5670(v);
}

/* EOF small_parse_table_1133.c */
