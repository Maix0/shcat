/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1025.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5125(t_small_parse_table_array *v)
{
	v->a[102500] = anon_sym_DOLLAR;
	v->a[102501] = actions(1149);
	v->a[102502] = 1;
	v->a[102503] = anon_sym_DQUOTE;
	v->a[102504] = actions(1153);
	v->a[102505] = 1;
	v->a[102506] = aux_sym_number_token1;
	v->a[102507] = actions(1155);
	v->a[102508] = 1;
	v->a[102509] = aux_sym_number_token2;
	v->a[102510] = actions(1157);
	v->a[102511] = 1;
	v->a[102512] = anon_sym_DOLLAR_LBRACE;
	v->a[102513] = actions(1159);
	v->a[102514] = 1;
	v->a[102515] = anon_sym_DOLLAR_LPAREN;
	v->a[102516] = actions(1163);
	v->a[102517] = 1;
	v->a[102518] = anon_sym_DOLLAR_BQUOTE;
	v->a[102519] = actions(1169);
	small_parse_table_5126(v);
}

void	small_parse_table_5126(t_small_parse_table_array *v)
{
	v->a[102520] = 1;
	v->a[102521] = sym__brace_start;
	v->a[102522] = actions(1171);
	v->a[102523] = 1;
	v->a[102524] = sym_word;
	v->a[102525] = actions(1173);
	v->a[102526] = 1;
	v->a[102527] = anon_sym_BANG;
	v->a[102528] = actions(1179);
	v->a[102529] = 1;
	v->a[102530] = anon_sym_TILDE;
	v->a[102531] = actions(1181);
	v->a[102532] = 1;
	v->a[102533] = sym__special_character;
	v->a[102534] = actions(1185);
	v->a[102535] = 1;
	v->a[102536] = sym_test_operator;
	v->a[102537] = actions(3060);
	v->a[102538] = 1;
	v->a[102539] = anon_sym_BQUOTE;
	small_parse_table_5127(v);
}

void	small_parse_table_5127(t_small_parse_table_array *v)
{
	v->a[102540] = state(2484);
	v->a[102541] = 1;
	v->a[102542] = aux_sym__literal_repeat1;
	v->a[102543] = state(3039);
	v->a[102544] = 1;
	v->a[102545] = sym__expression;
	v->a[102546] = actions(1129);
	v->a[102547] = 2;
	v->a[102548] = anon_sym_LPAREN_LPAREN;
	v->a[102549] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[102550] = actions(1165);
	v->a[102551] = 2;
	v->a[102552] = anon_sym_LT_LPAREN;
	v->a[102553] = anon_sym_GT_LPAREN;
	v->a[102554] = actions(1175);
	v->a[102555] = 2;
	v->a[102556] = anon_sym_PLUS_PLUS2;
	v->a[102557] = anon_sym_DASH_DASH2;
	v->a[102558] = actions(1177);
	v->a[102559] = 2;
	small_parse_table_5128(v);
}

void	small_parse_table_5128(t_small_parse_table_array *v)
{
	v->a[102560] = anon_sym_DASH2;
	v->a[102561] = anon_sym_PLUS2;
	v->a[102562] = actions(1183);
	v->a[102563] = 2;
	v->a[102564] = sym_raw_string;
	v->a[102565] = sym_ansi_c_string;
	v->a[102566] = state(2594);
	v->a[102567] = 6;
	v->a[102568] = sym_binary_expression;
	v->a[102569] = sym_ternary_expression;
	v->a[102570] = sym_unary_expression;
	v->a[102571] = sym_postfix_expression;
	v->a[102572] = sym_parenthesized_expression;
	v->a[102573] = sym_concatenation;
	v->a[102574] = state(2456);
	v->a[102575] = 9;
	v->a[102576] = sym_arithmetic_expansion;
	v->a[102577] = sym_brace_expression;
	v->a[102578] = sym_string;
	v->a[102579] = sym_translated_string;
	small_parse_table_5129(v);
}

void	small_parse_table_5129(t_small_parse_table_array *v)
{
	v->a[102580] = sym_number;
	v->a[102581] = sym_simple_expansion;
	v->a[102582] = sym_expansion;
	v->a[102583] = sym_command_substitution;
	v->a[102584] = sym_process_substitution;
	v->a[102585] = 26;
	v->a[102586] = actions(71);
	v->a[102587] = 1;
	v->a[102588] = sym_comment;
	v->a[102589] = actions(1131);
	v->a[102590] = 1;
	v->a[102591] = anon_sym_LPAREN;
	v->a[102592] = actions(1141);
	v->a[102593] = 1;
	v->a[102594] = anon_sym_DOLLAR_LBRACK;
	v->a[102595] = actions(1145);
	v->a[102596] = 1;
	v->a[102597] = anon_sym_DOLLAR;
	v->a[102598] = actions(1149);
	v->a[102599] = 1;
	small_parse_table_5130(v);
}

/* EOF small_parse_table_1025.c */
