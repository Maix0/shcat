/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_950.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4750(t_small_parse_table_array *v)
{
	v->a[95000] = 1;
	v->a[95001] = sym_word;
	v->a[95002] = actions(1131);
	v->a[95003] = 1;
	v->a[95004] = anon_sym_LPAREN;
	v->a[95005] = actions(1133);
	v->a[95006] = 1;
	v->a[95007] = anon_sym_BANG;
	v->a[95008] = actions(1139);
	v->a[95009] = 1;
	v->a[95010] = anon_sym_TILDE;
	v->a[95011] = actions(1141);
	v->a[95012] = 1;
	v->a[95013] = anon_sym_DOLLAR_LBRACK;
	v->a[95014] = actions(1145);
	v->a[95015] = 1;
	v->a[95016] = anon_sym_DOLLAR;
	v->a[95017] = actions(1147);
	v->a[95018] = 1;
	v->a[95019] = sym__special_character;
	small_parse_table_4751(v);
}

void	small_parse_table_4751(t_small_parse_table_array *v)
{
	v->a[95020] = actions(1149);
	v->a[95021] = 1;
	v->a[95022] = anon_sym_DQUOTE;
	v->a[95023] = actions(1153);
	v->a[95024] = 1;
	v->a[95025] = aux_sym_number_token1;
	v->a[95026] = actions(1155);
	v->a[95027] = 1;
	v->a[95028] = aux_sym_number_token2;
	v->a[95029] = actions(1157);
	v->a[95030] = 1;
	v->a[95031] = anon_sym_DOLLAR_LBRACE;
	v->a[95032] = actions(1159);
	v->a[95033] = 1;
	v->a[95034] = anon_sym_DOLLAR_LPAREN;
	v->a[95035] = actions(1163);
	v->a[95036] = 1;
	v->a[95037] = anon_sym_DOLLAR_BQUOTE;
	v->a[95038] = actions(1167);
	v->a[95039] = 1;
	small_parse_table_4752(v);
}

void	small_parse_table_4752(t_small_parse_table_array *v)
{
	v->a[95040] = sym_test_operator;
	v->a[95041] = actions(1169);
	v->a[95042] = 1;
	v->a[95043] = sym__brace_start;
	v->a[95044] = actions(3060);
	v->a[95045] = 1;
	v->a[95046] = anon_sym_BQUOTE;
	v->a[95047] = state(2484);
	v->a[95048] = 1;
	v->a[95049] = aux_sym__literal_repeat1;
	v->a[95050] = state(2971);
	v->a[95051] = 1;
	v->a[95052] = sym__expression;
	v->a[95053] = actions(1129);
	v->a[95054] = 2;
	v->a[95055] = anon_sym_LPAREN_LPAREN;
	v->a[95056] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95057] = actions(1135);
	v->a[95058] = 2;
	v->a[95059] = anon_sym_PLUS_PLUS2;
	small_parse_table_4753(v);
}

void	small_parse_table_4753(t_small_parse_table_array *v)
{
	v->a[95060] = anon_sym_DASH_DASH2;
	v->a[95061] = actions(1137);
	v->a[95062] = 2;
	v->a[95063] = anon_sym_DASH2;
	v->a[95064] = anon_sym_PLUS2;
	v->a[95065] = actions(1151);
	v->a[95066] = 2;
	v->a[95067] = sym_raw_string;
	v->a[95068] = sym_ansi_c_string;
	v->a[95069] = actions(1165);
	v->a[95070] = 2;
	v->a[95071] = anon_sym_LT_LPAREN;
	v->a[95072] = anon_sym_GT_LPAREN;
	v->a[95073] = state(2594);
	v->a[95074] = 6;
	v->a[95075] = sym_binary_expression;
	v->a[95076] = sym_ternary_expression;
	v->a[95077] = sym_unary_expression;
	v->a[95078] = sym_postfix_expression;
	v->a[95079] = sym_parenthesized_expression;
	small_parse_table_4754(v);
}

void	small_parse_table_4754(t_small_parse_table_array *v)
{
	v->a[95080] = sym_concatenation;
	v->a[95081] = state(2573);
	v->a[95082] = 9;
	v->a[95083] = sym_arithmetic_expansion;
	v->a[95084] = sym_brace_expression;
	v->a[95085] = sym_string;
	v->a[95086] = sym_translated_string;
	v->a[95087] = sym_number;
	v->a[95088] = sym_simple_expansion;
	v->a[95089] = sym_expansion;
	v->a[95090] = sym_command_substitution;
	v->a[95091] = sym_process_substitution;
	v->a[95092] = 26;
	v->a[95093] = actions(71);
	v->a[95094] = 1;
	v->a[95095] = sym_comment;
	v->a[95096] = actions(1127);
	v->a[95097] = 1;
	v->a[95098] = sym_word;
	v->a[95099] = actions(1131);
	small_parse_table_4755(v);
}

/* EOF small_parse_table_950.c */
