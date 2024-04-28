/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2323.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11615(t_small_parse_table_array *v)
{
	v->a[232300] = anon_sym_GT_LPAREN;
	v->a[232301] = actions(10192);
	v->a[232302] = 2;
	v->a[232303] = sym_test_operator;
	v->a[232304] = sym__special_character;
	v->a[232305] = actions(10194);
	v->a[232306] = 3;
	v->a[232307] = sym__bare_dollar;
	v->a[232308] = sym_raw_string;
	v->a[232309] = sym_ansi_c_string;
	v->a[232310] = state(2392);
	v->a[232311] = 9;
	v->a[232312] = sym_arithmetic_expansion;
	v->a[232313] = sym_brace_expression;
	v->a[232314] = sym_string;
	v->a[232315] = sym_translated_string;
	v->a[232316] = sym_number;
	v->a[232317] = sym_simple_expansion;
	v->a[232318] = sym_expansion;
	v->a[232319] = sym_command_substitution;
	small_parse_table_11616(v);
}

void	small_parse_table_11616(t_small_parse_table_array *v)
{
	v->a[232320] = sym_process_substitution;
	v->a[232321] = 18;
	v->a[232322] = actions(3);
	v->a[232323] = 1;
	v->a[232324] = sym_comment;
	v->a[232325] = actions(4502);
	v->a[232326] = 1;
	v->a[232327] = anon_sym_DOLLAR_LBRACK;
	v->a[232328] = actions(4508);
	v->a[232329] = 1;
	v->a[232330] = anon_sym_DQUOTE;
	v->a[232331] = actions(4512);
	v->a[232332] = 1;
	v->a[232333] = aux_sym_number_token1;
	v->a[232334] = actions(4514);
	v->a[232335] = 1;
	v->a[232336] = aux_sym_number_token2;
	v->a[232337] = actions(4516);
	v->a[232338] = 1;
	v->a[232339] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_11617(v);
}

void	small_parse_table_11617(t_small_parse_table_array *v)
{
	v->a[232340] = actions(4518);
	v->a[232341] = 1;
	v->a[232342] = anon_sym_DOLLAR_LPAREN;
	v->a[232343] = actions(4520);
	v->a[232344] = 1;
	v->a[232345] = anon_sym_BQUOTE;
	v->a[232346] = actions(4522);
	v->a[232347] = 1;
	v->a[232348] = anon_sym_DOLLAR_BQUOTE;
	v->a[232349] = actions(4528);
	v->a[232350] = 1;
	v->a[232351] = sym__brace_start;
	v->a[232352] = actions(10256);
	v->a[232353] = 1;
	v->a[232354] = sym_word;
	v->a[232355] = actions(10262);
	v->a[232356] = 1;
	v->a[232357] = sym__comment_word;
	v->a[232358] = actions(10988);
	v->a[232359] = 1;
	small_parse_table_11618(v);
}

void	small_parse_table_11618(t_small_parse_table_array *v)
{
	v->a[232360] = anon_sym_DOLLAR;
	v->a[232361] = actions(4500);
	v->a[232362] = 2;
	v->a[232363] = anon_sym_LPAREN_LPAREN;
	v->a[232364] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[232365] = actions(4524);
	v->a[232366] = 2;
	v->a[232367] = anon_sym_LT_LPAREN;
	v->a[232368] = anon_sym_GT_LPAREN;
	v->a[232369] = actions(10258);
	v->a[232370] = 2;
	v->a[232371] = sym_test_operator;
	v->a[232372] = sym__special_character;
	v->a[232373] = actions(10260);
	v->a[232374] = 3;
	v->a[232375] = sym__bare_dollar;
	v->a[232376] = sym_raw_string;
	v->a[232377] = sym_ansi_c_string;
	v->a[232378] = state(2450);
	v->a[232379] = 9;
	small_parse_table_11619(v);
}

void	small_parse_table_11619(t_small_parse_table_array *v)
{
	v->a[232380] = sym_arithmetic_expansion;
	v->a[232381] = sym_brace_expression;
	v->a[232382] = sym_string;
	v->a[232383] = sym_translated_string;
	v->a[232384] = sym_number;
	v->a[232385] = sym_simple_expansion;
	v->a[232386] = sym_expansion;
	v->a[232387] = sym_command_substitution;
	v->a[232388] = sym_process_substitution;
	v->a[232389] = 20;
	v->a[232390] = actions(71);
	v->a[232391] = 1;
	v->a[232392] = sym_comment;
	v->a[232393] = actions(4080);
	v->a[232394] = 1;
	v->a[232395] = anon_sym_DOLLAR;
	v->a[232396] = actions(4086);
	v->a[232397] = 1;
	v->a[232398] = aux_sym_number_token1;
	v->a[232399] = actions(4088);
	small_parse_table_11620(v);
}

/* EOF small_parse_table_2323.c */
