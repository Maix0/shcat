/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2223.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11115(t_small_parse_table_array *v)
{
	v->a[222300] = 1;
	v->a[222301] = anon_sym_DOLLAR_LBRACE;
	v->a[222302] = actions(8936);
	v->a[222303] = 1;
	v->a[222304] = anon_sym_BQUOTE;
	v->a[222305] = actions(8938);
	v->a[222306] = 1;
	v->a[222307] = anon_sym_DOLLAR_BQUOTE;
	v->a[222308] = actions(9696);
	v->a[222309] = 1;
	v->a[222310] = sym_word;
	v->a[222311] = actions(9704);
	v->a[222312] = 1;
	v->a[222313] = sym__comment_word;
	v->a[222314] = actions(10624);
	v->a[222315] = 1;
	v->a[222316] = anon_sym_DOLLAR;
	v->a[222317] = actions(8924);
	v->a[222318] = 2;
	v->a[222319] = anon_sym_LPAREN_LPAREN;
	small_parse_table_11116(v);
}

void	small_parse_table_11116(t_small_parse_table_array *v)
{
	v->a[222320] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[222321] = actions(8940);
	v->a[222322] = 2;
	v->a[222323] = anon_sym_LT_LPAREN;
	v->a[222324] = anon_sym_GT_LPAREN;
	v->a[222325] = actions(9700);
	v->a[222326] = 2;
	v->a[222327] = sym_test_operator;
	v->a[222328] = sym__special_character;
	v->a[222329] = actions(9702);
	v->a[222330] = 3;
	v->a[222331] = sym__bare_dollar;
	v->a[222332] = sym_raw_string;
	v->a[222333] = sym_ansi_c_string;
	v->a[222334] = state(1851);
	v->a[222335] = 9;
	v->a[222336] = sym_arithmetic_expansion;
	v->a[222337] = sym_brace_expression;
	v->a[222338] = sym_string;
	v->a[222339] = sym_translated_string;
	small_parse_table_11117(v);
}

void	small_parse_table_11117(t_small_parse_table_array *v)
{
	v->a[222340] = sym_number;
	v->a[222341] = sym_simple_expansion;
	v->a[222342] = sym_expansion;
	v->a[222343] = sym_command_substitution;
	v->a[222344] = sym_process_substitution;
	v->a[222345] = 21;
	v->a[222346] = actions(71);
	v->a[222347] = 1;
	v->a[222348] = sym_comment;
	v->a[222349] = actions(9364);
	v->a[222350] = 1;
	v->a[222351] = anon_sym_LPAREN;
	v->a[222352] = actions(9366);
	v->a[222353] = 1;
	v->a[222354] = anon_sym_BANG;
	v->a[222355] = actions(9372);
	v->a[222356] = 1;
	v->a[222357] = anon_sym_TILDE;
	v->a[222358] = actions(9374);
	v->a[222359] = 1;
	small_parse_table_11118(v);
}

void	small_parse_table_11118(t_small_parse_table_array *v)
{
	v->a[222360] = anon_sym_DOLLAR;
	v->a[222361] = actions(9376);
	v->a[222362] = 1;
	v->a[222363] = anon_sym_DQUOTE;
	v->a[222364] = actions(9378);
	v->a[222365] = 1;
	v->a[222366] = aux_sym_number_token1;
	v->a[222367] = actions(9380);
	v->a[222368] = 1;
	v->a[222369] = aux_sym_number_token2;
	v->a[222370] = actions(9382);
	v->a[222371] = 1;
	v->a[222372] = anon_sym_DOLLAR_LBRACE;
	v->a[222373] = actions(9384);
	v->a[222374] = 1;
	v->a[222375] = anon_sym_DOLLAR_LPAREN;
	v->a[222376] = actions(9386);
	v->a[222377] = 1;
	v->a[222378] = anon_sym_BQUOTE;
	v->a[222379] = actions(9388);
	small_parse_table_11119(v);
}

void	small_parse_table_11119(t_small_parse_table_array *v)
{
	v->a[222380] = 1;
	v->a[222381] = anon_sym_DOLLAR_BQUOTE;
	v->a[222382] = actions(9392);
	v->a[222383] = 1;
	v->a[222384] = sym_variable_name;
	v->a[222385] = actions(10626);
	v->a[222386] = 1;
	v->a[222387] = aux_sym__simple_variable_name_token1;
	v->a[222388] = state(3391);
	v->a[222389] = 1;
	v->a[222390] = sym__arithmetic_binary_expression;
	v->a[222391] = state(3396);
	v->a[222392] = 1;
	v->a[222393] = sym__arithmetic_ternary_expression;
	v->a[222394] = state(3398);
	v->a[222395] = 1;
	v->a[222396] = sym__arithmetic_unary_expression;
	v->a[222397] = state(3400);
	v->a[222398] = 1;
	v->a[222399] = sym__arithmetic_postfix_expression;
	small_parse_table_11120(v);
}

/* EOF small_parse_table_2223.c */
