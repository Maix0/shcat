/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1973.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9865(t_small_parse_table_array *v)
{
	v->a[197300] = actions(8108);
	v->a[197301] = 1;
	v->a[197302] = anon_sym_DQUOTE;
	v->a[197303] = actions(8112);
	v->a[197304] = 1;
	v->a[197305] = aux_sym_number_token1;
	v->a[197306] = actions(8114);
	v->a[197307] = 1;
	v->a[197308] = aux_sym_number_token2;
	v->a[197309] = actions(8116);
	v->a[197310] = 1;
	v->a[197311] = anon_sym_DOLLAR_LBRACE;
	v->a[197312] = actions(8118);
	v->a[197313] = 1;
	v->a[197314] = anon_sym_DOLLAR_LPAREN;
	v->a[197315] = actions(8120);
	v->a[197316] = 1;
	v->a[197317] = anon_sym_BQUOTE;
	v->a[197318] = actions(8122);
	v->a[197319] = 1;
	small_parse_table_9866(v);
}

void	small_parse_table_9866(t_small_parse_table_array *v)
{
	v->a[197320] = anon_sym_DOLLAR_BQUOTE;
	v->a[197321] = actions(8132);
	v->a[197322] = 1;
	v->a[197323] = sym__brace_start;
	v->a[197324] = actions(8898);
	v->a[197325] = 1;
	v->a[197326] = sym_word;
	v->a[197327] = actions(8902);
	v->a[197328] = 1;
	v->a[197329] = sym_test_operator;
	v->a[197330] = state(1474);
	v->a[197331] = 1;
	v->a[197332] = aux_sym__literal_repeat1;
	v->a[197333] = actions(8098);
	v->a[197334] = 2;
	v->a[197335] = anon_sym_LPAREN_LPAREN;
	v->a[197336] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[197337] = actions(8124);
	v->a[197338] = 2;
	v->a[197339] = anon_sym_LT_LPAREN;
	small_parse_table_9867(v);
}

void	small_parse_table_9867(t_small_parse_table_array *v)
{
	v->a[197340] = anon_sym_GT_LPAREN;
	v->a[197341] = actions(8900);
	v->a[197342] = 2;
	v->a[197343] = sym_raw_string;
	v->a[197344] = sym_ansi_c_string;
	v->a[197345] = state(575);
	v->a[197346] = 2;
	v->a[197347] = sym_concatenation;
	v->a[197348] = aux_sym_for_statement_repeat1;
	v->a[197349] = state(1158);
	v->a[197350] = 9;
	v->a[197351] = sym_arithmetic_expansion;
	v->a[197352] = sym_brace_expression;
	v->a[197353] = sym_string;
	v->a[197354] = sym_translated_string;
	v->a[197355] = sym_number;
	v->a[197356] = sym_simple_expansion;
	v->a[197357] = sym_expansion;
	v->a[197358] = sym_command_substitution;
	v->a[197359] = sym_process_substitution;
	small_parse_table_9868(v);
}

void	small_parse_table_9868(t_small_parse_table_array *v)
{
	v->a[197360] = 20;
	v->a[197361] = actions(71);
	v->a[197362] = 1;
	v->a[197363] = sym_comment;
	v->a[197364] = actions(4629);
	v->a[197365] = 1;
	v->a[197366] = sym_word;
	v->a[197367] = actions(4633);
	v->a[197368] = 1;
	v->a[197369] = anon_sym_DOLLAR_LBRACK;
	v->a[197370] = actions(4635);
	v->a[197371] = 1;
	v->a[197372] = anon_sym_DOLLAR;
	v->a[197373] = actions(4637);
	v->a[197374] = 1;
	v->a[197375] = sym__special_character;
	v->a[197376] = actions(4639);
	v->a[197377] = 1;
	v->a[197378] = anon_sym_DQUOTE;
	v->a[197379] = actions(4643);
	small_parse_table_9869(v);
}

void	small_parse_table_9869(t_small_parse_table_array *v)
{
	v->a[197380] = 1;
	v->a[197381] = aux_sym_number_token1;
	v->a[197382] = actions(4645);
	v->a[197383] = 1;
	v->a[197384] = aux_sym_number_token2;
	v->a[197385] = actions(4647);
	v->a[197386] = 1;
	v->a[197387] = anon_sym_DOLLAR_LBRACE;
	v->a[197388] = actions(4649);
	v->a[197389] = 1;
	v->a[197390] = anon_sym_DOLLAR_LPAREN;
	v->a[197391] = actions(4651);
	v->a[197392] = 1;
	v->a[197393] = anon_sym_BQUOTE;
	v->a[197394] = actions(4653);
	v->a[197395] = 1;
	v->a[197396] = anon_sym_DOLLAR_BQUOTE;
	v->a[197397] = actions(4657);
	v->a[197398] = 1;
	v->a[197399] = sym_test_operator;
	small_parse_table_9870(v);
}

/* EOF small_parse_table_1973.c */
