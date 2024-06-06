/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1103.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5515(t_small_parse_table_array *v)
{
	v->a[110300] = 1;
	v->a[110301] = anon_sym_DQUOTE;
	v->a[110302] = actions(6312);
	v->a[110303] = 1;
	v->a[110304] = anon_sym_DOLLAR_LBRACE;
	v->a[110305] = actions(6314);
	v->a[110306] = 1;
	v->a[110307] = anon_sym_BQUOTE;
	v->a[110308] = actions(6316);
	v->a[110309] = 1;
	v->a[110310] = anon_sym_DOLLAR_BQUOTE;
	v->a[110311] = actions(6318);
	v->a[110312] = 1;
	v->a[110313] = sym__comment_word;
	v->a[110314] = actions(6310);
	v->a[110315] = 3;
	v->a[110316] = sym_test_operator;
	v->a[110317] = sym__bare_dollar;
	v->a[110318] = sym_raw_string;
	v->a[110319] = state(729);
	small_parse_table_5516(v);
}

void	small_parse_table_5516(t_small_parse_table_array *v)
{
	v->a[110320] = 7;
	v->a[110321] = sym_arithmetic_expansion;
	v->a[110322] = sym_brace_expression;
	v->a[110323] = sym_string;
	v->a[110324] = sym_number;
	v->a[110325] = sym_simple_expansion;
	v->a[110326] = sym_expansion;
	v->a[110327] = sym_command_substitution;
	v->a[110328] = 16;
	v->a[110329] = actions(3);
	v->a[110330] = 1;
	v->a[110331] = sym_comment;
	v->a[110332] = actions(1079);
	v->a[110333] = 1;
	v->a[110334] = aux_sym_number_token1;
	v->a[110335] = actions(1081);
	v->a[110336] = 1;
	v->a[110337] = aux_sym_number_token2;
	v->a[110338] = actions(1085);
	v->a[110339] = 1;
	small_parse_table_5517(v);
}

void	small_parse_table_5517(t_small_parse_table_array *v)
{
	v->a[110340] = anon_sym_DOLLAR_LPAREN;
	v->a[110341] = actions(1097);
	v->a[110342] = 1;
	v->a[110343] = sym__brace_start;
	v->a[110344] = actions(5897);
	v->a[110345] = 1;
	v->a[110346] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[110347] = actions(5901);
	v->a[110348] = 1;
	v->a[110349] = anon_sym_DQUOTE;
	v->a[110350] = actions(5905);
	v->a[110351] = 1;
	v->a[110352] = anon_sym_DOLLAR_LBRACE;
	v->a[110353] = actions(5907);
	v->a[110354] = 1;
	v->a[110355] = anon_sym_BQUOTE;
	v->a[110356] = actions(5909);
	v->a[110357] = 1;
	v->a[110358] = anon_sym_DOLLAR_BQUOTE;
	v->a[110359] = actions(6320);
	small_parse_table_5518(v);
}

void	small_parse_table_5518(t_small_parse_table_array *v)
{
	v->a[110360] = 1;
	v->a[110361] = sym_word;
	v->a[110362] = actions(6322);
	v->a[110363] = 1;
	v->a[110364] = anon_sym_DOLLAR;
	v->a[110365] = actions(6324);
	v->a[110366] = 1;
	v->a[110367] = sym__special_character;
	v->a[110368] = actions(6328);
	v->a[110369] = 1;
	v->a[110370] = sym__comment_word;
	v->a[110371] = actions(6326);
	v->a[110372] = 3;
	v->a[110373] = sym_test_operator;
	v->a[110374] = sym__bare_dollar;
	v->a[110375] = sym_raw_string;
	v->a[110376] = state(917);
	v->a[110377] = 7;
	v->a[110378] = sym_arithmetic_expansion;
	v->a[110379] = sym_brace_expression;
	small_parse_table_5519(v);
}

void	small_parse_table_5519(t_small_parse_table_array *v)
{
	v->a[110380] = sym_string;
	v->a[110381] = sym_number;
	v->a[110382] = sym_simple_expansion;
	v->a[110383] = sym_expansion;
	v->a[110384] = sym_command_substitution;
	v->a[110385] = 16;
	v->a[110386] = actions(3);
	v->a[110387] = 1;
	v->a[110388] = sym_comment;
	v->a[110389] = actions(1051);
	v->a[110390] = 1;
	v->a[110391] = aux_sym_number_token1;
	v->a[110392] = actions(1053);
	v->a[110393] = 1;
	v->a[110394] = aux_sym_number_token2;
	v->a[110395] = actions(1057);
	v->a[110396] = 1;
	v->a[110397] = anon_sym_DOLLAR_LPAREN;
	v->a[110398] = actions(1067);
	v->a[110399] = 1;
	small_parse_table_5520(v);
}

/* EOF small_parse_table_1103.c */
