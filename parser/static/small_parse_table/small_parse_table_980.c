/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_980.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4900(t_small_parse_table_array *v)
{
	v->a[98000] = sym__expression;
	v->a[98001] = actions(1129);
	v->a[98002] = 2;
	v->a[98003] = anon_sym_LPAREN_LPAREN;
	v->a[98004] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[98005] = actions(1135);
	v->a[98006] = 2;
	v->a[98007] = anon_sym_PLUS_PLUS2;
	v->a[98008] = anon_sym_DASH_DASH2;
	v->a[98009] = actions(1137);
	v->a[98010] = 2;
	v->a[98011] = anon_sym_DASH2;
	v->a[98012] = anon_sym_PLUS2;
	v->a[98013] = actions(1151);
	v->a[98014] = 2;
	v->a[98015] = sym_raw_string;
	v->a[98016] = sym_ansi_c_string;
	v->a[98017] = actions(1165);
	v->a[98018] = 2;
	v->a[98019] = anon_sym_LT_LPAREN;
	small_parse_table_4901(v);
}

void	small_parse_table_4901(t_small_parse_table_array *v)
{
	v->a[98020] = anon_sym_GT_LPAREN;
	v->a[98021] = state(2594);
	v->a[98022] = 6;
	v->a[98023] = sym_binary_expression;
	v->a[98024] = sym_ternary_expression;
	v->a[98025] = sym_unary_expression;
	v->a[98026] = sym_postfix_expression;
	v->a[98027] = sym_parenthesized_expression;
	v->a[98028] = sym_concatenation;
	v->a[98029] = state(2573);
	v->a[98030] = 9;
	v->a[98031] = sym_arithmetic_expansion;
	v->a[98032] = sym_brace_expression;
	v->a[98033] = sym_string;
	v->a[98034] = sym_translated_string;
	v->a[98035] = sym_number;
	v->a[98036] = sym_simple_expansion;
	v->a[98037] = sym_expansion;
	v->a[98038] = sym_command_substitution;
	v->a[98039] = sym_process_substitution;
	small_parse_table_4902(v);
}

void	small_parse_table_4902(t_small_parse_table_array *v)
{
	v->a[98040] = 26;
	v->a[98041] = actions(71);
	v->a[98042] = 1;
	v->a[98043] = sym_comment;
	v->a[98044] = actions(187);
	v->a[98045] = 1;
	v->a[98046] = anon_sym_TILDE;
	v->a[98047] = actions(350);
	v->a[98048] = 1;
	v->a[98049] = sym_word;
	v->a[98050] = actions(359);
	v->a[98051] = 1;
	v->a[98052] = anon_sym_LPAREN;
	v->a[98053] = actions(361);
	v->a[98054] = 1;
	v->a[98055] = anon_sym_BANG;
	v->a[98056] = actions(363);
	v->a[98057] = 1;
	v->a[98058] = anon_sym_DOLLAR_LBRACK;
	v->a[98059] = actions(367);
	small_parse_table_4903(v);
}

void	small_parse_table_4903(t_small_parse_table_array *v)
{
	v->a[98060] = 1;
	v->a[98061] = anon_sym_DOLLAR;
	v->a[98062] = actions(371);
	v->a[98063] = 1;
	v->a[98064] = anon_sym_DQUOTE;
	v->a[98065] = actions(375);
	v->a[98066] = 1;
	v->a[98067] = aux_sym_number_token1;
	v->a[98068] = actions(377);
	v->a[98069] = 1;
	v->a[98070] = aux_sym_number_token2;
	v->a[98071] = actions(379);
	v->a[98072] = 1;
	v->a[98073] = anon_sym_DOLLAR_LBRACE;
	v->a[98074] = actions(381);
	v->a[98075] = 1;
	v->a[98076] = anon_sym_DOLLAR_LPAREN;
	v->a[98077] = actions(385);
	v->a[98078] = 1;
	v->a[98079] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_4904(v);
}

void	small_parse_table_4904(t_small_parse_table_array *v)
{
	v->a[98080] = actions(389);
	v->a[98081] = 1;
	v->a[98082] = sym_test_operator;
	v->a[98083] = actions(391);
	v->a[98084] = 1;
	v->a[98085] = sym__brace_start;
	v->a[98086] = actions(5807);
	v->a[98087] = 1;
	v->a[98088] = sym__special_character;
	v->a[98089] = actions(5809);
	v->a[98090] = 1;
	v->a[98091] = anon_sym_BQUOTE;
	v->a[98092] = state(2641);
	v->a[98093] = 1;
	v->a[98094] = aux_sym__literal_repeat1;
	v->a[98095] = state(2981);
	v->a[98096] = 1;
	v->a[98097] = sym__expression;
	v->a[98098] = actions(183);
	v->a[98099] = 2;
	small_parse_table_4905(v);
}

/* EOF small_parse_table_980.c */
