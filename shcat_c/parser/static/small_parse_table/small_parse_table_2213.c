/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2213.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11065(t_small_parse_table_array *v)
{
	v->a[221300] = actions(4959);
	v->a[221301] = 1;
	v->a[221302] = aux_sym_number_token2;
	v->a[221303] = actions(4961);
	v->a[221304] = 1;
	v->a[221305] = anon_sym_DOLLAR_LBRACE;
	v->a[221306] = actions(4963);
	v->a[221307] = 1;
	v->a[221308] = anon_sym_DOLLAR_LPAREN;
	v->a[221309] = actions(4965);
	v->a[221310] = 1;
	v->a[221311] = anon_sym_BQUOTE;
	v->a[221312] = actions(4967);
	v->a[221313] = 1;
	v->a[221314] = anon_sym_DOLLAR_BQUOTE;
	v->a[221315] = actions(4973);
	v->a[221316] = 1;
	v->a[221317] = sym__brace_start;
	v->a[221318] = actions(10228);
	v->a[221319] = 1;
	small_parse_table_11066(v);
}

void	small_parse_table_11066(t_small_parse_table_array *v)
{
	v->a[221320] = sym_word;
	v->a[221321] = actions(10234);
	v->a[221322] = 1;
	v->a[221323] = sym__comment_word;
	v->a[221324] = actions(10588);
	v->a[221325] = 1;
	v->a[221326] = anon_sym_DOLLAR;
	v->a[221327] = actions(4945);
	v->a[221328] = 2;
	v->a[221329] = anon_sym_LPAREN_LPAREN;
	v->a[221330] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[221331] = actions(4969);
	v->a[221332] = 2;
	v->a[221333] = anon_sym_LT_LPAREN;
	v->a[221334] = anon_sym_GT_LPAREN;
	v->a[221335] = actions(10230);
	v->a[221336] = 2;
	v->a[221337] = sym_test_operator;
	v->a[221338] = sym__special_character;
	v->a[221339] = actions(10232);
	small_parse_table_11067(v);
}

void	small_parse_table_11067(t_small_parse_table_array *v)
{
	v->a[221340] = 3;
	v->a[221341] = sym__bare_dollar;
	v->a[221342] = sym_raw_string;
	v->a[221343] = sym_ansi_c_string;
	v->a[221344] = state(2590);
	v->a[221345] = 9;
	v->a[221346] = sym_arithmetic_expansion;
	v->a[221347] = sym_brace_expression;
	v->a[221348] = sym_string;
	v->a[221349] = sym_translated_string;
	v->a[221350] = sym_number;
	v->a[221351] = sym_simple_expansion;
	v->a[221352] = sym_expansion;
	v->a[221353] = sym_command_substitution;
	v->a[221354] = sym_process_substitution;
	v->a[221355] = 20;
	v->a[221356] = actions(71);
	v->a[221357] = 1;
	v->a[221358] = sym_comment;
	v->a[221359] = actions(7996);
	small_parse_table_11068(v);
}

void	small_parse_table_11068(t_small_parse_table_array *v)
{
	v->a[221360] = 1;
	v->a[221361] = anon_sym_DOLLAR_LBRACK;
	v->a[221362] = actions(7998);
	v->a[221363] = 1;
	v->a[221364] = anon_sym_DOLLAR;
	v->a[221365] = actions(8000);
	v->a[221366] = 1;
	v->a[221367] = sym__special_character;
	v->a[221368] = actions(8002);
	v->a[221369] = 1;
	v->a[221370] = anon_sym_DQUOTE;
	v->a[221371] = actions(8006);
	v->a[221372] = 1;
	v->a[221373] = aux_sym_number_token1;
	v->a[221374] = actions(8008);
	v->a[221375] = 1;
	v->a[221376] = aux_sym_number_token2;
	v->a[221377] = actions(8010);
	v->a[221378] = 1;
	v->a[221379] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_11069(v);
}

void	small_parse_table_11069(t_small_parse_table_array *v)
{
	v->a[221380] = actions(8012);
	v->a[221381] = 1;
	v->a[221382] = anon_sym_DOLLAR_LPAREN;
	v->a[221383] = actions(8014);
	v->a[221384] = 1;
	v->a[221385] = anon_sym_BQUOTE;
	v->a[221386] = actions(8016);
	v->a[221387] = 1;
	v->a[221388] = anon_sym_DOLLAR_BQUOTE;
	v->a[221389] = actions(8026);
	v->a[221390] = 1;
	v->a[221391] = sym__brace_start;
	v->a[221392] = actions(10590);
	v->a[221393] = 1;
	v->a[221394] = sym_word;
	v->a[221395] = actions(10594);
	v->a[221396] = 1;
	v->a[221397] = sym_test_operator;
	v->a[221398] = state(3539);
	v->a[221399] = 1;
	small_parse_table_11070(v);
}

/* EOF small_parse_table_2213.c */
