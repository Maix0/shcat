/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2053.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10265(t_small_parse_table_array *v)
{
	v->a[205300] = sym__special_character;
	v->a[205301] = actions(9274);
	v->a[205302] = 3;
	v->a[205303] = sym__bare_dollar;
	v->a[205304] = sym_raw_string;
	v->a[205305] = sym_ansi_c_string;
	v->a[205306] = state(1189);
	v->a[205307] = 9;
	v->a[205308] = sym_arithmetic_expansion;
	v->a[205309] = sym_brace_expression;
	v->a[205310] = sym_string;
	v->a[205311] = sym_translated_string;
	v->a[205312] = sym_number;
	v->a[205313] = sym_simple_expansion;
	v->a[205314] = sym_expansion;
	v->a[205315] = sym_command_substitution;
	v->a[205316] = sym_process_substitution;
	v->a[205317] = 20;
	v->a[205318] = actions(71);
	v->a[205319] = 1;
	small_parse_table_10266(v);
}

void	small_parse_table_10266(t_small_parse_table_array *v)
{
	v->a[205320] = sym_comment;
	v->a[205321] = actions(8512);
	v->a[205322] = 1;
	v->a[205323] = anon_sym_DOLLAR_LBRACK;
	v->a[205324] = actions(8514);
	v->a[205325] = 1;
	v->a[205326] = anon_sym_DOLLAR;
	v->a[205327] = actions(8516);
	v->a[205328] = 1;
	v->a[205329] = sym__special_character;
	v->a[205330] = actions(8518);
	v->a[205331] = 1;
	v->a[205332] = anon_sym_DQUOTE;
	v->a[205333] = actions(8522);
	v->a[205334] = 1;
	v->a[205335] = aux_sym_number_token1;
	v->a[205336] = actions(8524);
	v->a[205337] = 1;
	v->a[205338] = aux_sym_number_token2;
	v->a[205339] = actions(8526);
	small_parse_table_10267(v);
}

void	small_parse_table_10267(t_small_parse_table_array *v)
{
	v->a[205340] = 1;
	v->a[205341] = anon_sym_DOLLAR_LBRACE;
	v->a[205342] = actions(8528);
	v->a[205343] = 1;
	v->a[205344] = anon_sym_DOLLAR_LPAREN;
	v->a[205345] = actions(8530);
	v->a[205346] = 1;
	v->a[205347] = anon_sym_BQUOTE;
	v->a[205348] = actions(8532);
	v->a[205349] = 1;
	v->a[205350] = anon_sym_DOLLAR_BQUOTE;
	v->a[205351] = actions(8542);
	v->a[205352] = 1;
	v->a[205353] = sym__brace_start;
	v->a[205354] = actions(9510);
	v->a[205355] = 1;
	v->a[205356] = sym_word;
	v->a[205357] = actions(9514);
	v->a[205358] = 1;
	v->a[205359] = sym_test_operator;
	small_parse_table_10268(v);
}

void	small_parse_table_10268(t_small_parse_table_array *v)
{
	v->a[205360] = state(2703);
	v->a[205361] = 1;
	v->a[205362] = aux_sym__literal_repeat1;
	v->a[205363] = state(2905);
	v->a[205364] = 1;
	v->a[205365] = sym_concatenation;
	v->a[205366] = actions(8508);
	v->a[205367] = 2;
	v->a[205368] = anon_sym_LPAREN_LPAREN;
	v->a[205369] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[205370] = actions(8534);
	v->a[205371] = 2;
	v->a[205372] = anon_sym_LT_LPAREN;
	v->a[205373] = anon_sym_GT_LPAREN;
	v->a[205374] = actions(9512);
	v->a[205375] = 2;
	v->a[205376] = sym_raw_string;
	v->a[205377] = sym_ansi_c_string;
	v->a[205378] = state(2436);
	v->a[205379] = 9;
	small_parse_table_10269(v);
}

void	small_parse_table_10269(t_small_parse_table_array *v)
{
	v->a[205380] = sym_arithmetic_expansion;
	v->a[205381] = sym_brace_expression;
	v->a[205382] = sym_string;
	v->a[205383] = sym_translated_string;
	v->a[205384] = sym_number;
	v->a[205385] = sym_simple_expansion;
	v->a[205386] = sym_expansion;
	v->a[205387] = sym_command_substitution;
	v->a[205388] = sym_process_substitution;
	v->a[205389] = 18;
	v->a[205390] = actions(3);
	v->a[205391] = 1;
	v->a[205392] = sym_comment;
	v->a[205393] = actions(3616);
	v->a[205394] = 1;
	v->a[205395] = aux_sym_number_token1;
	v->a[205396] = actions(3618);
	v->a[205397] = 1;
	v->a[205398] = aux_sym_number_token2;
	v->a[205399] = actions(3622);
	small_parse_table_10270(v);
}

/* EOF small_parse_table_2053.c */
