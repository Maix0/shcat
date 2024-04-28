/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1890.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9450(t_small_parse_table_array *v)
{
	v->a[189000] = 1;
	v->a[189001] = sym_test_operator;
	v->a[189002] = state(4287);
	v->a[189003] = 1;
	v->a[189004] = aux_sym__literal_repeat1;
	v->a[189005] = actions(7954);
	v->a[189006] = 2;
	v->a[189007] = anon_sym_LPAREN_LPAREN;
	v->a[189008] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[189009] = actions(7980);
	v->a[189010] = 2;
	v->a[189011] = anon_sym_LT_LPAREN;
	v->a[189012] = anon_sym_GT_LPAREN;
	v->a[189013] = actions(8056);
	v->a[189014] = 2;
	v->a[189015] = sym_raw_string;
	v->a[189016] = sym_ansi_c_string;
	v->a[189017] = state(4759);
	v->a[189018] = 2;
	v->a[189019] = sym_concatenation;
	small_parse_table_9451(v);
}

void	small_parse_table_9451(t_small_parse_table_array *v)
{
	v->a[189020] = sym_array;
	v->a[189021] = state(4802);
	v->a[189022] = 9;
	v->a[189023] = sym_arithmetic_expansion;
	v->a[189024] = sym_brace_expression;
	v->a[189025] = sym_string;
	v->a[189026] = sym_translated_string;
	v->a[189027] = sym_number;
	v->a[189028] = sym_simple_expansion;
	v->a[189029] = sym_expansion;
	v->a[189030] = sym_command_substitution;
	v->a[189031] = sym_process_substitution;
	v->a[189032] = 3;
	v->a[189033] = actions(71);
	v->a[189034] = 1;
	v->a[189035] = sym_comment;
	v->a[189036] = actions(1344);
	v->a[189037] = 11;
	v->a[189038] = anon_sym_LT;
	v->a[189039] = anon_sym_GT;
	small_parse_table_9452(v);
}

void	small_parse_table_9452(t_small_parse_table_array *v)
{
	v->a[189040] = anon_sym_AMP_GT;
	v->a[189041] = anon_sym_LT_AMP;
	v->a[189042] = anon_sym_GT_AMP;
	v->a[189043] = anon_sym_DOLLAR;
	v->a[189044] = aux_sym_number_token1;
	v->a[189045] = aux_sym_number_token2;
	v->a[189046] = anon_sym_DOLLAR_LPAREN;
	v->a[189047] = anon_sym_BQUOTE;
	v->a[189048] = sym_word;
	v->a[189049] = actions(1346);
	v->a[189050] = 23;
	v->a[189051] = sym_file_descriptor;
	v->a[189052] = sym__concat;
	v->a[189053] = sym_variable_name;
	v->a[189054] = sym_test_operator;
	v->a[189055] = sym__brace_start;
	v->a[189056] = anon_sym_LPAREN_LPAREN;
	v->a[189057] = anon_sym_GT_GT;
	v->a[189058] = anon_sym_AMP_GT_GT;
	v->a[189059] = anon_sym_GT_PIPE;
	small_parse_table_9453(v);
}

void	small_parse_table_9453(t_small_parse_table_array *v)
{
	v->a[189060] = anon_sym_LT_AMP_DASH;
	v->a[189061] = anon_sym_GT_AMP_DASH;
	v->a[189062] = anon_sym_LT_LT_LT;
	v->a[189063] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[189064] = anon_sym_DOLLAR_LBRACK;
	v->a[189065] = aux_sym_concatenation_token1;
	v->a[189066] = sym__special_character;
	v->a[189067] = anon_sym_DQUOTE;
	v->a[189068] = sym_raw_string;
	v->a[189069] = sym_ansi_c_string;
	v->a[189070] = anon_sym_DOLLAR_LBRACE;
	v->a[189071] = anon_sym_DOLLAR_BQUOTE;
	v->a[189072] = anon_sym_LT_LPAREN;
	v->a[189073] = anon_sym_GT_LPAREN;
	v->a[189074] = 23;
	v->a[189075] = actions(3);
	v->a[189076] = 1;
	v->a[189077] = sym_comment;
	v->a[189078] = actions(2263);
	v->a[189079] = 1;
	small_parse_table_9454(v);
}

void	small_parse_table_9454(t_small_parse_table_array *v)
{
	v->a[189080] = anon_sym_DOLLAR;
	v->a[189081] = actions(2269);
	v->a[189082] = 1;
	v->a[189083] = aux_sym_number_token1;
	v->a[189084] = actions(2271);
	v->a[189085] = 1;
	v->a[189086] = aux_sym_number_token2;
	v->a[189087] = actions(2275);
	v->a[189088] = 1;
	v->a[189089] = anon_sym_DOLLAR_LPAREN;
	v->a[189090] = actions(2289);
	v->a[189091] = 1;
	v->a[189092] = sym__brace_start;
	v->a[189093] = actions(8060);
	v->a[189094] = 1;
	v->a[189095] = sym_word;
	v->a[189096] = actions(8064);
	v->a[189097] = 1;
	v->a[189098] = anon_sym_LPAREN;
	v->a[189099] = actions(8066);
	small_parse_table_9455(v);
}

/* EOF small_parse_table_1890.c */
