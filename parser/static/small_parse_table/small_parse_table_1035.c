/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1035.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5175(t_small_parse_table_array *v)
{
	v->a[103500] = sym_arithmetic_expansion;
	v->a[103501] = sym_brace_expression;
	v->a[103502] = sym_string;
	v->a[103503] = sym_translated_string;
	v->a[103504] = sym_number;
	v->a[103505] = sym_simple_expansion;
	v->a[103506] = sym_expansion;
	v->a[103507] = sym_command_substitution;
	v->a[103508] = sym_process_substitution;
	v->a[103509] = 26;
	v->a[103510] = actions(71);
	v->a[103511] = 1;
	v->a[103512] = sym_comment;
	v->a[103513] = actions(1131);
	v->a[103514] = 1;
	v->a[103515] = anon_sym_LPAREN;
	v->a[103516] = actions(1141);
	v->a[103517] = 1;
	v->a[103518] = anon_sym_DOLLAR_LBRACK;
	v->a[103519] = actions(1145);
	small_parse_table_5176(v);
}

void	small_parse_table_5176(t_small_parse_table_array *v)
{
	v->a[103520] = 1;
	v->a[103521] = anon_sym_DOLLAR;
	v->a[103522] = actions(1149);
	v->a[103523] = 1;
	v->a[103524] = anon_sym_DQUOTE;
	v->a[103525] = actions(1153);
	v->a[103526] = 1;
	v->a[103527] = aux_sym_number_token1;
	v->a[103528] = actions(1155);
	v->a[103529] = 1;
	v->a[103530] = aux_sym_number_token2;
	v->a[103531] = actions(1157);
	v->a[103532] = 1;
	v->a[103533] = anon_sym_DOLLAR_LBRACE;
	v->a[103534] = actions(1159);
	v->a[103535] = 1;
	v->a[103536] = anon_sym_DOLLAR_LPAREN;
	v->a[103537] = actions(1163);
	v->a[103538] = 1;
	v->a[103539] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_5177(v);
}

void	small_parse_table_5177(t_small_parse_table_array *v)
{
	v->a[103540] = actions(1169);
	v->a[103541] = 1;
	v->a[103542] = sym__brace_start;
	v->a[103543] = actions(1211);
	v->a[103544] = 1;
	v->a[103545] = sym_word;
	v->a[103546] = actions(1213);
	v->a[103547] = 1;
	v->a[103548] = anon_sym_BANG;
	v->a[103549] = actions(1219);
	v->a[103550] = 1;
	v->a[103551] = anon_sym_TILDE;
	v->a[103552] = actions(1221);
	v->a[103553] = 1;
	v->a[103554] = sym__special_character;
	v->a[103555] = actions(1225);
	v->a[103556] = 1;
	v->a[103557] = sym_test_operator;
	v->a[103558] = actions(3060);
	v->a[103559] = 1;
	small_parse_table_5178(v);
}

void	small_parse_table_5178(t_small_parse_table_array *v)
{
	v->a[103560] = anon_sym_BQUOTE;
	v->a[103561] = state(2484);
	v->a[103562] = 1;
	v->a[103563] = aux_sym__literal_repeat1;
	v->a[103564] = state(3351);
	v->a[103565] = 1;
	v->a[103566] = sym__expression;
	v->a[103567] = actions(1129);
	v->a[103568] = 2;
	v->a[103569] = anon_sym_LPAREN_LPAREN;
	v->a[103570] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[103571] = actions(1165);
	v->a[103572] = 2;
	v->a[103573] = anon_sym_LT_LPAREN;
	v->a[103574] = anon_sym_GT_LPAREN;
	v->a[103575] = actions(1215);
	v->a[103576] = 2;
	v->a[103577] = anon_sym_PLUS_PLUS2;
	v->a[103578] = anon_sym_DASH_DASH2;
	v->a[103579] = actions(1217);
	small_parse_table_5179(v);
}

void	small_parse_table_5179(t_small_parse_table_array *v)
{
	v->a[103580] = 2;
	v->a[103581] = anon_sym_DASH2;
	v->a[103582] = anon_sym_PLUS2;
	v->a[103583] = actions(1223);
	v->a[103584] = 2;
	v->a[103585] = sym_raw_string;
	v->a[103586] = sym_ansi_c_string;
	v->a[103587] = state(2594);
	v->a[103588] = 6;
	v->a[103589] = sym_binary_expression;
	v->a[103590] = sym_ternary_expression;
	v->a[103591] = sym_unary_expression;
	v->a[103592] = sym_postfix_expression;
	v->a[103593] = sym_parenthesized_expression;
	v->a[103594] = sym_concatenation;
	v->a[103595] = state(2588);
	v->a[103596] = 9;
	v->a[103597] = sym_arithmetic_expansion;
	v->a[103598] = sym_brace_expression;
	v->a[103599] = sym_string;
	small_parse_table_5180(v);
}

/* EOF small_parse_table_1035.c */
