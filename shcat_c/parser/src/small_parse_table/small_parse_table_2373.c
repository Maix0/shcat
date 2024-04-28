/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2373.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11865(t_small_parse_table_array *v)
{
	v->a[237300] = actions(9326);
	v->a[237301] = 2;
	v->a[237302] = anon_sym_LT_LPAREN;
	v->a[237303] = anon_sym_GT_LPAREN;
	v->a[237304] = actions(11170);
	v->a[237305] = 2;
	v->a[237306] = sym_raw_string;
	v->a[237307] = sym_ansi_c_string;
	v->a[237308] = state(5286);
	v->a[237309] = 9;
	v->a[237310] = sym_arithmetic_expansion;
	v->a[237311] = sym_brace_expression;
	v->a[237312] = sym_string;
	v->a[237313] = sym_translated_string;
	v->a[237314] = sym_number;
	v->a[237315] = sym_simple_expansion;
	v->a[237316] = sym_expansion;
	v->a[237317] = sym_command_substitution;
	v->a[237318] = sym_process_substitution;
	v->a[237319] = 18;
	small_parse_table_11866(v);
}

void	small_parse_table_11866(t_small_parse_table_array *v)
{
	v->a[237320] = actions(3);
	v->a[237321] = 1;
	v->a[237322] = sym_comment;
	v->a[237323] = actions(3681);
	v->a[237324] = 1;
	v->a[237325] = aux_sym_number_token1;
	v->a[237326] = actions(3683);
	v->a[237327] = 1;
	v->a[237328] = aux_sym_number_token2;
	v->a[237329] = actions(3687);
	v->a[237330] = 1;
	v->a[237331] = anon_sym_DOLLAR_LPAREN;
	v->a[237332] = actions(3697);
	v->a[237333] = 1;
	v->a[237334] = sym__brace_start;
	v->a[237335] = actions(10062);
	v->a[237336] = 1;
	v->a[237337] = anon_sym_DOLLAR_LBRACK;
	v->a[237338] = actions(10066);
	v->a[237339] = 1;
	small_parse_table_11867(v);
}

void	small_parse_table_11867(t_small_parse_table_array *v)
{
	v->a[237340] = anon_sym_DQUOTE;
	v->a[237341] = actions(10070);
	v->a[237342] = 1;
	v->a[237343] = anon_sym_DOLLAR_LBRACE;
	v->a[237344] = actions(10072);
	v->a[237345] = 1;
	v->a[237346] = anon_sym_BQUOTE;
	v->a[237347] = actions(10074);
	v->a[237348] = 1;
	v->a[237349] = anon_sym_DOLLAR_BQUOTE;
	v->a[237350] = actions(10540);
	v->a[237351] = 1;
	v->a[237352] = sym_word;
	v->a[237353] = actions(10546);
	v->a[237354] = 1;
	v->a[237355] = sym__comment_word;
	v->a[237356] = actions(11174);
	v->a[237357] = 1;
	v->a[237358] = anon_sym_DOLLAR;
	v->a[237359] = actions(10060);
	small_parse_table_11868(v);
}

void	small_parse_table_11868(t_small_parse_table_array *v)
{
	v->a[237360] = 2;
	v->a[237361] = anon_sym_LPAREN_LPAREN;
	v->a[237362] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[237363] = actions(10076);
	v->a[237364] = 2;
	v->a[237365] = anon_sym_LT_LPAREN;
	v->a[237366] = anon_sym_GT_LPAREN;
	v->a[237367] = actions(10542);
	v->a[237368] = 2;
	v->a[237369] = sym_test_operator;
	v->a[237370] = sym__special_character;
	v->a[237371] = actions(10544);
	v->a[237372] = 3;
	v->a[237373] = sym__bare_dollar;
	v->a[237374] = sym_raw_string;
	v->a[237375] = sym_ansi_c_string;
	v->a[237376] = state(4831);
	v->a[237377] = 9;
	v->a[237378] = sym_arithmetic_expansion;
	v->a[237379] = sym_brace_expression;
	small_parse_table_11869(v);
}

void	small_parse_table_11869(t_small_parse_table_array *v)
{
	v->a[237380] = sym_string;
	v->a[237381] = sym_translated_string;
	v->a[237382] = sym_number;
	v->a[237383] = sym_simple_expansion;
	v->a[237384] = sym_expansion;
	v->a[237385] = sym_command_substitution;
	v->a[237386] = sym_process_substitution;
	v->a[237387] = 20;
	v->a[237388] = actions(71);
	v->a[237389] = 1;
	v->a[237390] = sym_comment;
	v->a[237391] = actions(3787);
	v->a[237392] = 1;
	v->a[237393] = anon_sym_DOLLAR;
	v->a[237394] = actions(3793);
	v->a[237395] = 1;
	v->a[237396] = aux_sym_number_token1;
	v->a[237397] = actions(3795);
	v->a[237398] = 1;
	v->a[237399] = aux_sym_number_token2;
	small_parse_table_11870(v);
}

/* EOF small_parse_table_2373.c */
