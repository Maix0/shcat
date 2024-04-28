/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2103.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10515(t_small_parse_table_array *v)
{
	v->a[210300] = actions(9392);
	v->a[210301] = 1;
	v->a[210302] = sym_variable_name;
	v->a[210303] = actions(9934);
	v->a[210304] = 1;
	v->a[210305] = aux_sym__simple_variable_name_token1;
	v->a[210306] = state(3391);
	v->a[210307] = 1;
	v->a[210308] = sym__arithmetic_binary_expression;
	v->a[210309] = state(3396);
	v->a[210310] = 1;
	v->a[210311] = sym__arithmetic_ternary_expression;
	v->a[210312] = state(3398);
	v->a[210313] = 1;
	v->a[210314] = sym__arithmetic_unary_expression;
	v->a[210315] = state(3400);
	v->a[210316] = 1;
	v->a[210317] = sym__arithmetic_postfix_expression;
	v->a[210318] = actions(9368);
	v->a[210319] = 2;
	small_parse_table_10516(v);
}

void	small_parse_table_10516(t_small_parse_table_array *v)
{
	v->a[210320] = anon_sym_PLUS_PLUS2;
	v->a[210321] = anon_sym_DASH_DASH2;
	v->a[210322] = actions(9370);
	v->a[210323] = 2;
	v->a[210324] = anon_sym_DASH2;
	v->a[210325] = anon_sym_PLUS2;
	v->a[210326] = state(3337);
	v->a[210327] = 9;
	v->a[210328] = sym_subscript;
	v->a[210329] = sym__arithmetic_expression;
	v->a[210330] = sym__arithmetic_literal;
	v->a[210331] = sym__arithmetic_parenthesized_expression;
	v->a[210332] = sym_string;
	v->a[210333] = sym_number;
	v->a[210334] = sym_simple_expansion;
	v->a[210335] = sym_expansion;
	v->a[210336] = sym_command_substitution;
	v->a[210337] = 20;
	v->a[210338] = actions(71);
	v->a[210339] = 1;
	small_parse_table_10517(v);
}

void	small_parse_table_10517(t_small_parse_table_array *v)
{
	v->a[210340] = sym_comment;
	v->a[210341] = actions(2863);
	v->a[210342] = 1;
	v->a[210343] = anon_sym_DOLLAR;
	v->a[210344] = actions(2869);
	v->a[210345] = 1;
	v->a[210346] = aux_sym_number_token1;
	v->a[210347] = actions(2871);
	v->a[210348] = 1;
	v->a[210349] = aux_sym_number_token2;
	v->a[210350] = actions(2875);
	v->a[210351] = 1;
	v->a[210352] = anon_sym_DOLLAR_LPAREN;
	v->a[210353] = actions(2885);
	v->a[210354] = 1;
	v->a[210355] = sym__brace_start;
	v->a[210356] = actions(9936);
	v->a[210357] = 1;
	v->a[210358] = sym_word;
	v->a[210359] = actions(9940);
	small_parse_table_10518(v);
}

void	small_parse_table_10518(t_small_parse_table_array *v)
{
	v->a[210360] = 1;
	v->a[210361] = anon_sym_DOLLAR_LBRACK;
	v->a[210362] = actions(9942);
	v->a[210363] = 1;
	v->a[210364] = sym__special_character;
	v->a[210365] = actions(9944);
	v->a[210366] = 1;
	v->a[210367] = anon_sym_DQUOTE;
	v->a[210368] = actions(9948);
	v->a[210369] = 1;
	v->a[210370] = anon_sym_DOLLAR_LBRACE;
	v->a[210371] = actions(9950);
	v->a[210372] = 1;
	v->a[210373] = anon_sym_BQUOTE;
	v->a[210374] = actions(9952);
	v->a[210375] = 1;
	v->a[210376] = anon_sym_DOLLAR_BQUOTE;
	v->a[210377] = actions(9956);
	v->a[210378] = 1;
	v->a[210379] = sym_test_operator;
	small_parse_table_10519(v);
}

void	small_parse_table_10519(t_small_parse_table_array *v)
{
	v->a[210380] = state(4382);
	v->a[210381] = 1;
	v->a[210382] = aux_sym__literal_repeat1;
	v->a[210383] = state(4827);
	v->a[210384] = 1;
	v->a[210385] = sym_concatenation;
	v->a[210386] = actions(9938);
	v->a[210387] = 2;
	v->a[210388] = anon_sym_LPAREN_LPAREN;
	v->a[210389] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[210390] = actions(9946);
	v->a[210391] = 2;
	v->a[210392] = sym_raw_string;
	v->a[210393] = sym_ansi_c_string;
	v->a[210394] = actions(9954);
	v->a[210395] = 2;
	v->a[210396] = anon_sym_LT_LPAREN;
	v->a[210397] = anon_sym_GT_LPAREN;
	v->a[210398] = state(4242);
	v->a[210399] = 9;
	small_parse_table_10520(v);
}

/* EOF small_parse_table_2103.c */
