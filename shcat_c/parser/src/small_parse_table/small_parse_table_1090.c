/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1090.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5450(t_small_parse_table_array *v)
{
	v->a[109000] = actions(1141);
	v->a[109001] = 1;
	v->a[109002] = anon_sym_DOLLAR_LBRACK;
	v->a[109003] = actions(1145);
	v->a[109004] = 1;
	v->a[109005] = anon_sym_DOLLAR;
	v->a[109006] = actions(1149);
	v->a[109007] = 1;
	v->a[109008] = anon_sym_DQUOTE;
	v->a[109009] = actions(1153);
	v->a[109010] = 1;
	v->a[109011] = aux_sym_number_token1;
	v->a[109012] = actions(1155);
	v->a[109013] = 1;
	v->a[109014] = aux_sym_number_token2;
	v->a[109015] = actions(1157);
	v->a[109016] = 1;
	v->a[109017] = anon_sym_DOLLAR_LBRACE;
	v->a[109018] = actions(1159);
	v->a[109019] = 1;
	small_parse_table_5451(v);
}

void	small_parse_table_5451(t_small_parse_table_array *v)
{
	v->a[109020] = anon_sym_DOLLAR_LPAREN;
	v->a[109021] = actions(1163);
	v->a[109022] = 1;
	v->a[109023] = anon_sym_DOLLAR_BQUOTE;
	v->a[109024] = actions(1169);
	v->a[109025] = 1;
	v->a[109026] = sym__brace_start;
	v->a[109027] = actions(1171);
	v->a[109028] = 1;
	v->a[109029] = sym_word;
	v->a[109030] = actions(1173);
	v->a[109031] = 1;
	v->a[109032] = anon_sym_BANG;
	v->a[109033] = actions(1179);
	v->a[109034] = 1;
	v->a[109035] = anon_sym_TILDE;
	v->a[109036] = actions(1181);
	v->a[109037] = 1;
	v->a[109038] = sym__special_character;
	v->a[109039] = actions(1185);
	small_parse_table_5452(v);
}

void	small_parse_table_5452(t_small_parse_table_array *v)
{
	v->a[109040] = 1;
	v->a[109041] = sym_test_operator;
	v->a[109042] = actions(3060);
	v->a[109043] = 1;
	v->a[109044] = anon_sym_BQUOTE;
	v->a[109045] = state(2484);
	v->a[109046] = 1;
	v->a[109047] = aux_sym__literal_repeat1;
	v->a[109048] = state(3101);
	v->a[109049] = 1;
	v->a[109050] = sym__expression;
	v->a[109051] = actions(1129);
	v->a[109052] = 2;
	v->a[109053] = anon_sym_LPAREN_LPAREN;
	v->a[109054] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[109055] = actions(1165);
	v->a[109056] = 2;
	v->a[109057] = anon_sym_LT_LPAREN;
	v->a[109058] = anon_sym_GT_LPAREN;
	v->a[109059] = actions(1175);
	small_parse_table_5453(v);
}

void	small_parse_table_5453(t_small_parse_table_array *v)
{
	v->a[109060] = 2;
	v->a[109061] = anon_sym_PLUS_PLUS2;
	v->a[109062] = anon_sym_DASH_DASH2;
	v->a[109063] = actions(1177);
	v->a[109064] = 2;
	v->a[109065] = anon_sym_DASH2;
	v->a[109066] = anon_sym_PLUS2;
	v->a[109067] = actions(1183);
	v->a[109068] = 2;
	v->a[109069] = sym_raw_string;
	v->a[109070] = sym_ansi_c_string;
	v->a[109071] = state(2594);
	v->a[109072] = 6;
	v->a[109073] = sym_binary_expression;
	v->a[109074] = sym_ternary_expression;
	v->a[109075] = sym_unary_expression;
	v->a[109076] = sym_postfix_expression;
	v->a[109077] = sym_parenthesized_expression;
	v->a[109078] = sym_concatenation;
	v->a[109079] = state(2456);
	small_parse_table_5454(v);
}

void	small_parse_table_5454(t_small_parse_table_array *v)
{
	v->a[109080] = 9;
	v->a[109081] = sym_arithmetic_expansion;
	v->a[109082] = sym_brace_expression;
	v->a[109083] = sym_string;
	v->a[109084] = sym_translated_string;
	v->a[109085] = sym_number;
	v->a[109086] = sym_simple_expansion;
	v->a[109087] = sym_expansion;
	v->a[109088] = sym_command_substitution;
	v->a[109089] = sym_process_substitution;
	v->a[109090] = 8;
	v->a[109091] = actions(3);
	v->a[109092] = 1;
	v->a[109093] = sym_comment;
	v->a[109094] = actions(5826);
	v->a[109095] = 1;
	v->a[109096] = aux_sym_heredoc_redirect_token1;
	v->a[109097] = actions(5828);
	v->a[109098] = 1;
	v->a[109099] = sym_file_descriptor;
	small_parse_table_5455(v);
}

/* EOF small_parse_table_1090.c */
