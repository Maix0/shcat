/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2363.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11815(t_small_parse_table_array *v)
{
	v->a[236300] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[236301] = actions(7980);
	v->a[236302] = 2;
	v->a[236303] = anon_sym_LT_LPAREN;
	v->a[236304] = anon_sym_GT_LPAREN;
	v->a[236305] = actions(9864);
	v->a[236306] = 2;
	v->a[236307] = sym_test_operator;
	v->a[236308] = sym__special_character;
	v->a[236309] = actions(9866);
	v->a[236310] = 3;
	v->a[236311] = sym__bare_dollar;
	v->a[236312] = sym_raw_string;
	v->a[236313] = sym_ansi_c_string;
	v->a[236314] = state(4357);
	v->a[236315] = 9;
	v->a[236316] = sym_arithmetic_expansion;
	v->a[236317] = sym_brace_expression;
	v->a[236318] = sym_string;
	v->a[236319] = sym_translated_string;
	small_parse_table_11816(v);
}

void	small_parse_table_11816(t_small_parse_table_array *v)
{
	v->a[236320] = sym_number;
	v->a[236321] = sym_simple_expansion;
	v->a[236322] = sym_expansion;
	v->a[236323] = sym_command_substitution;
	v->a[236324] = sym_process_substitution;
	v->a[236325] = 18;
	v->a[236326] = actions(3);
	v->a[236327] = 1;
	v->a[236328] = sym_comment;
	v->a[236329] = actions(7958);
	v->a[236330] = 1;
	v->a[236331] = anon_sym_DOLLAR_LBRACK;
	v->a[236332] = actions(7964);
	v->a[236333] = 1;
	v->a[236334] = anon_sym_DQUOTE;
	v->a[236335] = actions(7968);
	v->a[236336] = 1;
	v->a[236337] = aux_sym_number_token1;
	v->a[236338] = actions(7970);
	v->a[236339] = 1;
	small_parse_table_11817(v);
}

void	small_parse_table_11817(t_small_parse_table_array *v)
{
	v->a[236340] = aux_sym_number_token2;
	v->a[236341] = actions(7972);
	v->a[236342] = 1;
	v->a[236343] = anon_sym_DOLLAR_LBRACE;
	v->a[236344] = actions(7974);
	v->a[236345] = 1;
	v->a[236346] = anon_sym_DOLLAR_LPAREN;
	v->a[236347] = actions(7976);
	v->a[236348] = 1;
	v->a[236349] = anon_sym_BQUOTE;
	v->a[236350] = actions(7978);
	v->a[236351] = 1;
	v->a[236352] = anon_sym_DOLLAR_BQUOTE;
	v->a[236353] = actions(7988);
	v->a[236354] = 1;
	v->a[236355] = sym__brace_start;
	v->a[236356] = actions(9860);
	v->a[236357] = 1;
	v->a[236358] = sym_word;
	v->a[236359] = actions(9868);
	small_parse_table_11818(v);
}

void	small_parse_table_11818(t_small_parse_table_array *v)
{
	v->a[236360] = 1;
	v->a[236361] = sym__comment_word;
	v->a[236362] = actions(11132);
	v->a[236363] = 1;
	v->a[236364] = anon_sym_DOLLAR;
	v->a[236365] = actions(7954);
	v->a[236366] = 2;
	v->a[236367] = anon_sym_LPAREN_LPAREN;
	v->a[236368] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[236369] = actions(7980);
	v->a[236370] = 2;
	v->a[236371] = anon_sym_LT_LPAREN;
	v->a[236372] = anon_sym_GT_LPAREN;
	v->a[236373] = actions(9864);
	v->a[236374] = 2;
	v->a[236375] = sym_test_operator;
	v->a[236376] = sym__special_character;
	v->a[236377] = actions(9866);
	v->a[236378] = 3;
	v->a[236379] = sym__bare_dollar;
	small_parse_table_11819(v);
}

void	small_parse_table_11819(t_small_parse_table_array *v)
{
	v->a[236380] = sym_raw_string;
	v->a[236381] = sym_ansi_c_string;
	v->a[236382] = state(4357);
	v->a[236383] = 9;
	v->a[236384] = sym_arithmetic_expansion;
	v->a[236385] = sym_brace_expression;
	v->a[236386] = sym_string;
	v->a[236387] = sym_translated_string;
	v->a[236388] = sym_number;
	v->a[236389] = sym_simple_expansion;
	v->a[236390] = sym_expansion;
	v->a[236391] = sym_command_substitution;
	v->a[236392] = sym_process_substitution;
	v->a[236393] = 20;
	v->a[236394] = actions(71);
	v->a[236395] = 1;
	v->a[236396] = sym_comment;
	v->a[236397] = actions(3787);
	v->a[236398] = 1;
	v->a[236399] = anon_sym_DOLLAR;
	small_parse_table_11820(v);
}

/* EOF small_parse_table_2363.c */
