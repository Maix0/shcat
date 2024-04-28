/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_970.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4850(t_small_parse_table_array *v)
{
	v->a[97000] = state(2717);
	v->a[97001] = 1;
	v->a[97002] = aux_sym__literal_repeat1;
	v->a[97003] = state(3048);
	v->a[97004] = 1;
	v->a[97005] = sym__expression;
	v->a[97006] = actions(1129);
	v->a[97007] = 2;
	v->a[97008] = anon_sym_LPAREN_LPAREN;
	v->a[97009] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97010] = actions(1165);
	v->a[97011] = 2;
	v->a[97012] = anon_sym_LT_LPAREN;
	v->a[97013] = anon_sym_GT_LPAREN;
	v->a[97014] = actions(1191);
	v->a[97015] = 2;
	v->a[97016] = anon_sym_PLUS_PLUS2;
	v->a[97017] = anon_sym_DASH_DASH2;
	v->a[97018] = actions(1193);
	v->a[97019] = 2;
	small_parse_table_4851(v);
}

void	small_parse_table_4851(t_small_parse_table_array *v)
{
	v->a[97020] = anon_sym_DASH2;
	v->a[97021] = anon_sym_PLUS2;
	v->a[97022] = actions(1199);
	v->a[97023] = 2;
	v->a[97024] = sym_raw_string;
	v->a[97025] = sym_ansi_c_string;
	v->a[97026] = state(2594);
	v->a[97027] = 6;
	v->a[97028] = sym_binary_expression;
	v->a[97029] = sym_ternary_expression;
	v->a[97030] = sym_unary_expression;
	v->a[97031] = sym_postfix_expression;
	v->a[97032] = sym_parenthesized_expression;
	v->a[97033] = sym_concatenation;
	v->a[97034] = state(2503);
	v->a[97035] = 9;
	v->a[97036] = sym_arithmetic_expansion;
	v->a[97037] = sym_brace_expression;
	v->a[97038] = sym_string;
	v->a[97039] = sym_translated_string;
	small_parse_table_4852(v);
}

void	small_parse_table_4852(t_small_parse_table_array *v)
{
	v->a[97040] = sym_number;
	v->a[97041] = sym_simple_expansion;
	v->a[97042] = sym_expansion;
	v->a[97043] = sym_command_substitution;
	v->a[97044] = sym_process_substitution;
	v->a[97045] = 26;
	v->a[97046] = actions(71);
	v->a[97047] = 1;
	v->a[97048] = sym_comment;
	v->a[97049] = actions(1131);
	v->a[97050] = 1;
	v->a[97051] = anon_sym_LPAREN;
	v->a[97052] = actions(1141);
	v->a[97053] = 1;
	v->a[97054] = anon_sym_DOLLAR_LBRACK;
	v->a[97055] = actions(1145);
	v->a[97056] = 1;
	v->a[97057] = anon_sym_DOLLAR;
	v->a[97058] = actions(1149);
	v->a[97059] = 1;
	small_parse_table_4853(v);
}

void	small_parse_table_4853(t_small_parse_table_array *v)
{
	v->a[97060] = anon_sym_DQUOTE;
	v->a[97061] = actions(1153);
	v->a[97062] = 1;
	v->a[97063] = aux_sym_number_token1;
	v->a[97064] = actions(1155);
	v->a[97065] = 1;
	v->a[97066] = aux_sym_number_token2;
	v->a[97067] = actions(1157);
	v->a[97068] = 1;
	v->a[97069] = anon_sym_DOLLAR_LBRACE;
	v->a[97070] = actions(1159);
	v->a[97071] = 1;
	v->a[97072] = anon_sym_DOLLAR_LPAREN;
	v->a[97073] = actions(1163);
	v->a[97074] = 1;
	v->a[97075] = anon_sym_DOLLAR_BQUOTE;
	v->a[97076] = actions(1169);
	v->a[97077] = 1;
	v->a[97078] = sym__brace_start;
	v->a[97079] = actions(1187);
	small_parse_table_4854(v);
}

void	small_parse_table_4854(t_small_parse_table_array *v)
{
	v->a[97080] = 1;
	v->a[97081] = sym_word;
	v->a[97082] = actions(1189);
	v->a[97083] = 1;
	v->a[97084] = anon_sym_BANG;
	v->a[97085] = actions(1195);
	v->a[97086] = 1;
	v->a[97087] = anon_sym_TILDE;
	v->a[97088] = actions(1201);
	v->a[97089] = 1;
	v->a[97090] = sym_test_operator;
	v->a[97091] = actions(3060);
	v->a[97092] = 1;
	v->a[97093] = anon_sym_BQUOTE;
	v->a[97094] = actions(5779);
	v->a[97095] = 1;
	v->a[97096] = sym__special_character;
	v->a[97097] = state(2621);
	v->a[97098] = 1;
	v->a[97099] = sym__expression;
	small_parse_table_4855(v);
}

/* EOF small_parse_table_970.c */
