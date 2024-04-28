/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_945.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4725(t_small_parse_table_array *v)
{
	v->a[94500] = anon_sym_BQUOTE;
	v->a[94501] = state(2484);
	v->a[94502] = 1;
	v->a[94503] = aux_sym__literal_repeat1;
	v->a[94504] = state(2977);
	v->a[94505] = 1;
	v->a[94506] = sym__expression;
	v->a[94507] = actions(1129);
	v->a[94508] = 2;
	v->a[94509] = anon_sym_LPAREN_LPAREN;
	v->a[94510] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[94511] = actions(1135);
	v->a[94512] = 2;
	v->a[94513] = anon_sym_PLUS_PLUS2;
	v->a[94514] = anon_sym_DASH_DASH2;
	v->a[94515] = actions(1137);
	v->a[94516] = 2;
	v->a[94517] = anon_sym_DASH2;
	v->a[94518] = anon_sym_PLUS2;
	v->a[94519] = actions(1151);
	small_parse_table_4726(v);
}

void	small_parse_table_4726(t_small_parse_table_array *v)
{
	v->a[94520] = 2;
	v->a[94521] = sym_raw_string;
	v->a[94522] = sym_ansi_c_string;
	v->a[94523] = actions(1165);
	v->a[94524] = 2;
	v->a[94525] = anon_sym_LT_LPAREN;
	v->a[94526] = anon_sym_GT_LPAREN;
	v->a[94527] = state(2594);
	v->a[94528] = 6;
	v->a[94529] = sym_binary_expression;
	v->a[94530] = sym_ternary_expression;
	v->a[94531] = sym_unary_expression;
	v->a[94532] = sym_postfix_expression;
	v->a[94533] = sym_parenthesized_expression;
	v->a[94534] = sym_concatenation;
	v->a[94535] = state(2573);
	v->a[94536] = 9;
	v->a[94537] = sym_arithmetic_expansion;
	v->a[94538] = sym_brace_expression;
	v->a[94539] = sym_string;
	small_parse_table_4727(v);
}

void	small_parse_table_4727(t_small_parse_table_array *v)
{
	v->a[94540] = sym_translated_string;
	v->a[94541] = sym_number;
	v->a[94542] = sym_simple_expansion;
	v->a[94543] = sym_expansion;
	v->a[94544] = sym_command_substitution;
	v->a[94545] = sym_process_substitution;
	v->a[94546] = 26;
	v->a[94547] = actions(71);
	v->a[94548] = 1;
	v->a[94549] = sym_comment;
	v->a[94550] = actions(1127);
	v->a[94551] = 1;
	v->a[94552] = sym_word;
	v->a[94553] = actions(1131);
	v->a[94554] = 1;
	v->a[94555] = anon_sym_LPAREN;
	v->a[94556] = actions(1133);
	v->a[94557] = 1;
	v->a[94558] = anon_sym_BANG;
	v->a[94559] = actions(1139);
	small_parse_table_4728(v);
}

void	small_parse_table_4728(t_small_parse_table_array *v)
{
	v->a[94560] = 1;
	v->a[94561] = anon_sym_TILDE;
	v->a[94562] = actions(1141);
	v->a[94563] = 1;
	v->a[94564] = anon_sym_DOLLAR_LBRACK;
	v->a[94565] = actions(1145);
	v->a[94566] = 1;
	v->a[94567] = anon_sym_DOLLAR;
	v->a[94568] = actions(1147);
	v->a[94569] = 1;
	v->a[94570] = sym__special_character;
	v->a[94571] = actions(1149);
	v->a[94572] = 1;
	v->a[94573] = anon_sym_DQUOTE;
	v->a[94574] = actions(1153);
	v->a[94575] = 1;
	v->a[94576] = aux_sym_number_token1;
	v->a[94577] = actions(1155);
	v->a[94578] = 1;
	v->a[94579] = aux_sym_number_token2;
	small_parse_table_4729(v);
}

void	small_parse_table_4729(t_small_parse_table_array *v)
{
	v->a[94580] = actions(1157);
	v->a[94581] = 1;
	v->a[94582] = anon_sym_DOLLAR_LBRACE;
	v->a[94583] = actions(1159);
	v->a[94584] = 1;
	v->a[94585] = anon_sym_DOLLAR_LPAREN;
	v->a[94586] = actions(1163);
	v->a[94587] = 1;
	v->a[94588] = anon_sym_DOLLAR_BQUOTE;
	v->a[94589] = actions(1167);
	v->a[94590] = 1;
	v->a[94591] = sym_test_operator;
	v->a[94592] = actions(1169);
	v->a[94593] = 1;
	v->a[94594] = sym__brace_start;
	v->a[94595] = actions(3060);
	v->a[94596] = 1;
	v->a[94597] = anon_sym_BQUOTE;
	v->a[94598] = state(2484);
	v->a[94599] = 1;
	small_parse_table_4730(v);
}

/* EOF small_parse_table_945.c */
