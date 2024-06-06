/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1203.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6015(t_small_parse_table_array *v)
{
	v->a[120300] = sym_brace_expression;
	v->a[120301] = sym_string;
	v->a[120302] = sym_number;
	v->a[120303] = sym_simple_expansion;
	v->a[120304] = sym_expansion;
	v->a[120305] = sym_command_substitution;
	v->a[120306] = 16;
	v->a[120307] = actions(3);
	v->a[120308] = 1;
	v->a[120309] = sym_comment;
	v->a[120310] = actions(87);
	v->a[120311] = 1;
	v->a[120312] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120313] = actions(93);
	v->a[120314] = 1;
	v->a[120315] = anon_sym_DQUOTE;
	v->a[120316] = actions(97);
	v->a[120317] = 1;
	v->a[120318] = aux_sym_number_token1;
	v->a[120319] = actions(99);
	small_parse_table_6016(v);
}

void	small_parse_table_6016(t_small_parse_table_array *v)
{
	v->a[120320] = 1;
	v->a[120321] = aux_sym_number_token2;
	v->a[120322] = actions(101);
	v->a[120323] = 1;
	v->a[120324] = anon_sym_DOLLAR_LBRACE;
	v->a[120325] = actions(103);
	v->a[120326] = 1;
	v->a[120327] = anon_sym_DOLLAR_LPAREN;
	v->a[120328] = actions(105);
	v->a[120329] = 1;
	v->a[120330] = anon_sym_BQUOTE;
	v->a[120331] = actions(107);
	v->a[120332] = 1;
	v->a[120333] = anon_sym_DOLLAR_BQUOTE;
	v->a[120334] = actions(113);
	v->a[120335] = 1;
	v->a[120336] = sym__brace_start;
	v->a[120337] = actions(6845);
	v->a[120338] = 1;
	v->a[120339] = sym_word;
	small_parse_table_6017(v);
}

void	small_parse_table_6017(t_small_parse_table_array *v)
{
	v->a[120340] = actions(6849);
	v->a[120341] = 1;
	v->a[120342] = sym__special_character;
	v->a[120343] = actions(6853);
	v->a[120344] = 1;
	v->a[120345] = sym__comment_word;
	v->a[120346] = actions(7009);
	v->a[120347] = 1;
	v->a[120348] = anon_sym_DOLLAR;
	v->a[120349] = actions(6851);
	v->a[120350] = 3;
	v->a[120351] = sym_test_operator;
	v->a[120352] = sym__bare_dollar;
	v->a[120353] = sym_raw_string;
	v->a[120354] = state(853);
	v->a[120355] = 7;
	v->a[120356] = sym_arithmetic_expansion;
	v->a[120357] = sym_brace_expression;
	v->a[120358] = sym_string;
	v->a[120359] = sym_number;
	small_parse_table_6018(v);
}

void	small_parse_table_6018(t_small_parse_table_array *v)
{
	v->a[120360] = sym_simple_expansion;
	v->a[120361] = sym_expansion;
	v->a[120362] = sym_command_substitution;
	v->a[120363] = 16;
	v->a[120364] = actions(3);
	v->a[120365] = 1;
	v->a[120366] = sym_comment;
	v->a[120367] = actions(2160);
	v->a[120368] = 1;
	v->a[120369] = aux_sym_number_token1;
	v->a[120370] = actions(2162);
	v->a[120371] = 1;
	v->a[120372] = aux_sym_number_token2;
	v->a[120373] = actions(2166);
	v->a[120374] = 1;
	v->a[120375] = anon_sym_DOLLAR_LPAREN;
	v->a[120376] = actions(2174);
	v->a[120377] = 1;
	v->a[120378] = sym__brace_start;
	v->a[120379] = actions(5989);
	small_parse_table_6019(v);
}

void	small_parse_table_6019(t_small_parse_table_array *v)
{
	v->a[120380] = 1;
	v->a[120381] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120382] = actions(5993);
	v->a[120383] = 1;
	v->a[120384] = anon_sym_DQUOTE;
	v->a[120385] = actions(5995);
	v->a[120386] = 1;
	v->a[120387] = anon_sym_DOLLAR_LBRACE;
	v->a[120388] = actions(5997);
	v->a[120389] = 1;
	v->a[120390] = anon_sym_BQUOTE;
	v->a[120391] = actions(5999);
	v->a[120392] = 1;
	v->a[120393] = anon_sym_DOLLAR_BQUOTE;
	v->a[120394] = actions(6432);
	v->a[120395] = 1;
	v->a[120396] = sym_word;
	v->a[120397] = actions(6436);
	v->a[120398] = 1;
	v->a[120399] = sym__special_character;
	small_parse_table_6020(v);
}

/* EOF small_parse_table_1203.c */
