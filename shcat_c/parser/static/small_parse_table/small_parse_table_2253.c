/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2253.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11265(t_small_parse_table_array *v)
{
	v->a[225300] = sym_string;
	v->a[225301] = sym_translated_string;
	v->a[225302] = sym_number;
	v->a[225303] = sym_simple_expansion;
	v->a[225304] = sym_expansion;
	v->a[225305] = sym_command_substitution;
	v->a[225306] = sym_process_substitution;
	v->a[225307] = 18;
	v->a[225308] = actions(3);
	v->a[225309] = 1;
	v->a[225310] = sym_comment;
	v->a[225311] = actions(314);
	v->a[225312] = 1;
	v->a[225313] = anon_sym_DOLLAR_LBRACK;
	v->a[225314] = actions(320);
	v->a[225315] = 1;
	v->a[225316] = anon_sym_DQUOTE;
	v->a[225317] = actions(324);
	v->a[225318] = 1;
	v->a[225319] = aux_sym_number_token1;
	small_parse_table_11266(v);
}

void	small_parse_table_11266(t_small_parse_table_array *v)
{
	v->a[225320] = actions(326);
	v->a[225321] = 1;
	v->a[225322] = aux_sym_number_token2;
	v->a[225323] = actions(328);
	v->a[225324] = 1;
	v->a[225325] = anon_sym_DOLLAR_LBRACE;
	v->a[225326] = actions(330);
	v->a[225327] = 1;
	v->a[225328] = anon_sym_DOLLAR_LPAREN;
	v->a[225329] = actions(332);
	v->a[225330] = 1;
	v->a[225331] = anon_sym_BQUOTE;
	v->a[225332] = actions(334);
	v->a[225333] = 1;
	v->a[225334] = anon_sym_DOLLAR_BQUOTE;
	v->a[225335] = actions(344);
	v->a[225336] = 1;
	v->a[225337] = sym__brace_start;
	v->a[225338] = actions(9400);
	v->a[225339] = 1;
	small_parse_table_11267(v);
}

void	small_parse_table_11267(t_small_parse_table_array *v)
{
	v->a[225340] = sym_word;
	v->a[225341] = actions(9406);
	v->a[225342] = 1;
	v->a[225343] = sym__comment_word;
	v->a[225344] = actions(10712);
	v->a[225345] = 1;
	v->a[225346] = anon_sym_DOLLAR;
	v->a[225347] = actions(312);
	v->a[225348] = 2;
	v->a[225349] = anon_sym_LPAREN_LPAREN;
	v->a[225350] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[225351] = actions(336);
	v->a[225352] = 2;
	v->a[225353] = anon_sym_LT_LPAREN;
	v->a[225354] = anon_sym_GT_LPAREN;
	v->a[225355] = actions(9402);
	v->a[225356] = 2;
	v->a[225357] = sym_test_operator;
	v->a[225358] = sym__special_character;
	v->a[225359] = actions(9404);
	small_parse_table_11268(v);
}

void	small_parse_table_11268(t_small_parse_table_array *v)
{
	v->a[225360] = 3;
	v->a[225361] = sym__bare_dollar;
	v->a[225362] = sym_raw_string;
	v->a[225363] = sym_ansi_c_string;
	v->a[225364] = state(1037);
	v->a[225365] = 9;
	v->a[225366] = sym_arithmetic_expansion;
	v->a[225367] = sym_brace_expression;
	v->a[225368] = sym_string;
	v->a[225369] = sym_translated_string;
	v->a[225370] = sym_number;
	v->a[225371] = sym_simple_expansion;
	v->a[225372] = sym_expansion;
	v->a[225373] = sym_command_substitution;
	v->a[225374] = sym_process_substitution;
	v->a[225375] = 18;
	v->a[225376] = actions(3);
	v->a[225377] = 1;
	v->a[225378] = sym_comment;
	v->a[225379] = actions(314);
	small_parse_table_11269(v);
}

void	small_parse_table_11269(t_small_parse_table_array *v)
{
	v->a[225380] = 1;
	v->a[225381] = anon_sym_DOLLAR_LBRACK;
	v->a[225382] = actions(320);
	v->a[225383] = 1;
	v->a[225384] = anon_sym_DQUOTE;
	v->a[225385] = actions(324);
	v->a[225386] = 1;
	v->a[225387] = aux_sym_number_token1;
	v->a[225388] = actions(326);
	v->a[225389] = 1;
	v->a[225390] = aux_sym_number_token2;
	v->a[225391] = actions(328);
	v->a[225392] = 1;
	v->a[225393] = anon_sym_DOLLAR_LBRACE;
	v->a[225394] = actions(330);
	v->a[225395] = 1;
	v->a[225396] = anon_sym_DOLLAR_LPAREN;
	v->a[225397] = actions(332);
	v->a[225398] = 1;
	v->a[225399] = anon_sym_BQUOTE;
	small_parse_table_11270(v);
}

/* EOF small_parse_table_2253.c */
