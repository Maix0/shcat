/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1185.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5925(t_small_parse_table_array *v)
{
	v->a[118500] = anon_sym_BQUOTE;
	v->a[118501] = state(2484);
	v->a[118502] = 1;
	v->a[118503] = aux_sym__literal_repeat1;
	v->a[118504] = state(3143);
	v->a[118505] = 1;
	v->a[118506] = sym__expression;
	v->a[118507] = actions(1129);
	v->a[118508] = 2;
	v->a[118509] = anon_sym_LPAREN_LPAREN;
	v->a[118510] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[118511] = actions(1135);
	v->a[118512] = 2;
	v->a[118513] = anon_sym_PLUS_PLUS2;
	v->a[118514] = anon_sym_DASH_DASH2;
	v->a[118515] = actions(1137);
	v->a[118516] = 2;
	v->a[118517] = anon_sym_DASH2;
	v->a[118518] = anon_sym_PLUS2;
	v->a[118519] = actions(1151);
	small_parse_table_5926(v);
}

void	small_parse_table_5926(t_small_parse_table_array *v)
{
	v->a[118520] = 2;
	v->a[118521] = sym_raw_string;
	v->a[118522] = sym_ansi_c_string;
	v->a[118523] = actions(1165);
	v->a[118524] = 2;
	v->a[118525] = anon_sym_LT_LPAREN;
	v->a[118526] = anon_sym_GT_LPAREN;
	v->a[118527] = state(2594);
	v->a[118528] = 6;
	v->a[118529] = sym_binary_expression;
	v->a[118530] = sym_ternary_expression;
	v->a[118531] = sym_unary_expression;
	v->a[118532] = sym_postfix_expression;
	v->a[118533] = sym_parenthesized_expression;
	v->a[118534] = sym_concatenation;
	v->a[118535] = state(2573);
	v->a[118536] = 9;
	v->a[118537] = sym_arithmetic_expansion;
	v->a[118538] = sym_brace_expression;
	v->a[118539] = sym_string;
	small_parse_table_5927(v);
}

void	small_parse_table_5927(t_small_parse_table_array *v)
{
	v->a[118540] = sym_translated_string;
	v->a[118541] = sym_number;
	v->a[118542] = sym_simple_expansion;
	v->a[118543] = sym_expansion;
	v->a[118544] = sym_command_substitution;
	v->a[118545] = sym_process_substitution;
	v->a[118546] = 26;
	v->a[118547] = actions(71);
	v->a[118548] = 1;
	v->a[118549] = sym_comment;
	v->a[118550] = actions(1127);
	v->a[118551] = 1;
	v->a[118552] = sym_word;
	v->a[118553] = actions(1131);
	v->a[118554] = 1;
	v->a[118555] = anon_sym_LPAREN;
	v->a[118556] = actions(1133);
	v->a[118557] = 1;
	v->a[118558] = anon_sym_BANG;
	v->a[118559] = actions(1139);
	small_parse_table_5928(v);
}

void	small_parse_table_5928(t_small_parse_table_array *v)
{
	v->a[118560] = 1;
	v->a[118561] = anon_sym_TILDE;
	v->a[118562] = actions(1141);
	v->a[118563] = 1;
	v->a[118564] = anon_sym_DOLLAR_LBRACK;
	v->a[118565] = actions(1145);
	v->a[118566] = 1;
	v->a[118567] = anon_sym_DOLLAR;
	v->a[118568] = actions(1147);
	v->a[118569] = 1;
	v->a[118570] = sym__special_character;
	v->a[118571] = actions(1149);
	v->a[118572] = 1;
	v->a[118573] = anon_sym_DQUOTE;
	v->a[118574] = actions(1153);
	v->a[118575] = 1;
	v->a[118576] = aux_sym_number_token1;
	v->a[118577] = actions(1155);
	v->a[118578] = 1;
	v->a[118579] = aux_sym_number_token2;
	small_parse_table_5929(v);
}

void	small_parse_table_5929(t_small_parse_table_array *v)
{
	v->a[118580] = actions(1157);
	v->a[118581] = 1;
	v->a[118582] = anon_sym_DOLLAR_LBRACE;
	v->a[118583] = actions(1159);
	v->a[118584] = 1;
	v->a[118585] = anon_sym_DOLLAR_LPAREN;
	v->a[118586] = actions(1163);
	v->a[118587] = 1;
	v->a[118588] = anon_sym_DOLLAR_BQUOTE;
	v->a[118589] = actions(1167);
	v->a[118590] = 1;
	v->a[118591] = sym_test_operator;
	v->a[118592] = actions(1169);
	v->a[118593] = 1;
	v->a[118594] = sym__brace_start;
	v->a[118595] = actions(3060);
	v->a[118596] = 1;
	v->a[118597] = anon_sym_BQUOTE;
	v->a[118598] = state(2484);
	v->a[118599] = 1;
	small_parse_table_5930(v);
}

/* EOF small_parse_table_1185.c */
