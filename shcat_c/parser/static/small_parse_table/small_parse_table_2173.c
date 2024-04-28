/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2173.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10865(t_small_parse_table_array *v)
{
	v->a[217300] = anon_sym_DOLLAR_LPAREN;
	v->a[217301] = actions(7976);
	v->a[217302] = 1;
	v->a[217303] = anon_sym_BQUOTE;
	v->a[217304] = actions(7978);
	v->a[217305] = 1;
	v->a[217306] = anon_sym_DOLLAR_BQUOTE;
	v->a[217307] = actions(7988);
	v->a[217308] = 1;
	v->a[217309] = sym__brace_start;
	v->a[217310] = actions(9860);
	v->a[217311] = 1;
	v->a[217312] = sym_word;
	v->a[217313] = actions(9868);
	v->a[217314] = 1;
	v->a[217315] = sym__comment_word;
	v->a[217316] = actions(10356);
	v->a[217317] = 1;
	v->a[217318] = anon_sym_DOLLAR;
	v->a[217319] = actions(7954);
	small_parse_table_10866(v);
}

void	small_parse_table_10866(t_small_parse_table_array *v)
{
	v->a[217320] = 2;
	v->a[217321] = anon_sym_LPAREN_LPAREN;
	v->a[217322] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[217323] = actions(7980);
	v->a[217324] = 2;
	v->a[217325] = anon_sym_LT_LPAREN;
	v->a[217326] = anon_sym_GT_LPAREN;
	v->a[217327] = actions(9864);
	v->a[217328] = 2;
	v->a[217329] = sym_test_operator;
	v->a[217330] = sym__special_character;
	v->a[217331] = actions(9866);
	v->a[217332] = 3;
	v->a[217333] = sym__bare_dollar;
	v->a[217334] = sym_raw_string;
	v->a[217335] = sym_ansi_c_string;
	v->a[217336] = state(4357);
	v->a[217337] = 9;
	v->a[217338] = sym_arithmetic_expansion;
	v->a[217339] = sym_brace_expression;
	small_parse_table_10867(v);
}

void	small_parse_table_10867(t_small_parse_table_array *v)
{
	v->a[217340] = sym_string;
	v->a[217341] = sym_translated_string;
	v->a[217342] = sym_number;
	v->a[217343] = sym_simple_expansion;
	v->a[217344] = sym_expansion;
	v->a[217345] = sym_command_substitution;
	v->a[217346] = sym_process_substitution;
	v->a[217347] = 18;
	v->a[217348] = actions(3);
	v->a[217349] = 1;
	v->a[217350] = sym_comment;
	v->a[217351] = actions(2335);
	v->a[217352] = 1;
	v->a[217353] = anon_sym_DOLLAR;
	v->a[217354] = actions(2341);
	v->a[217355] = 1;
	v->a[217356] = aux_sym_number_token1;
	v->a[217357] = actions(2343);
	v->a[217358] = 1;
	v->a[217359] = aux_sym_number_token2;
	small_parse_table_10868(v);
}

void	small_parse_table_10868(t_small_parse_table_array *v)
{
	v->a[217360] = actions(2347);
	v->a[217361] = 1;
	v->a[217362] = anon_sym_DOLLAR_LPAREN;
	v->a[217363] = actions(2357);
	v->a[217364] = 1;
	v->a[217365] = sym__brace_start;
	v->a[217366] = actions(9010);
	v->a[217367] = 1;
	v->a[217368] = anon_sym_DOLLAR_LBRACK;
	v->a[217369] = actions(9014);
	v->a[217370] = 1;
	v->a[217371] = anon_sym_DQUOTE;
	v->a[217372] = actions(9018);
	v->a[217373] = 1;
	v->a[217374] = anon_sym_DOLLAR_LBRACE;
	v->a[217375] = actions(9020);
	v->a[217376] = 1;
	v->a[217377] = anon_sym_BQUOTE;
	v->a[217378] = actions(9022);
	v->a[217379] = 1;
	small_parse_table_10869(v);
}

void	small_parse_table_10869(t_small_parse_table_array *v)
{
	v->a[217380] = anon_sym_DOLLAR_BQUOTE;
	v->a[217381] = actions(10358);
	v->a[217382] = 1;
	v->a[217383] = sym_word;
	v->a[217384] = actions(10364);
	v->a[217385] = 1;
	v->a[217386] = sym__comment_word;
	v->a[217387] = actions(9008);
	v->a[217388] = 2;
	v->a[217389] = anon_sym_LPAREN_LPAREN;
	v->a[217390] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[217391] = actions(9024);
	v->a[217392] = 2;
	v->a[217393] = anon_sym_LT_LPAREN;
	v->a[217394] = anon_sym_GT_LPAREN;
	v->a[217395] = actions(10360);
	v->a[217396] = 2;
	v->a[217397] = sym_test_operator;
	v->a[217398] = sym__special_character;
	v->a[217399] = actions(10362);
	small_parse_table_10870(v);
}

/* EOF small_parse_table_2173.c */
