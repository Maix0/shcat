/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_947.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4735(t_small_parse_table_array *v)
{
	v->a[94700] = sym__expression;
	v->a[94701] = actions(1129);
	v->a[94702] = 2;
	v->a[94703] = anon_sym_LPAREN_LPAREN;
	v->a[94704] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[94705] = actions(1135);
	v->a[94706] = 2;
	v->a[94707] = anon_sym_PLUS_PLUS2;
	v->a[94708] = anon_sym_DASH_DASH2;
	v->a[94709] = actions(1137);
	v->a[94710] = 2;
	v->a[94711] = anon_sym_DASH2;
	v->a[94712] = anon_sym_PLUS2;
	v->a[94713] = actions(1151);
	v->a[94714] = 2;
	v->a[94715] = sym_raw_string;
	v->a[94716] = sym_ansi_c_string;
	v->a[94717] = actions(1165);
	v->a[94718] = 2;
	v->a[94719] = anon_sym_LT_LPAREN;
	small_parse_table_4736(v);
}

void	small_parse_table_4736(t_small_parse_table_array *v)
{
	v->a[94720] = anon_sym_GT_LPAREN;
	v->a[94721] = state(2594);
	v->a[94722] = 6;
	v->a[94723] = sym_binary_expression;
	v->a[94724] = sym_ternary_expression;
	v->a[94725] = sym_unary_expression;
	v->a[94726] = sym_postfix_expression;
	v->a[94727] = sym_parenthesized_expression;
	v->a[94728] = sym_concatenation;
	v->a[94729] = state(2573);
	v->a[94730] = 9;
	v->a[94731] = sym_arithmetic_expansion;
	v->a[94732] = sym_brace_expression;
	v->a[94733] = sym_string;
	v->a[94734] = sym_translated_string;
	v->a[94735] = sym_number;
	v->a[94736] = sym_simple_expansion;
	v->a[94737] = sym_expansion;
	v->a[94738] = sym_command_substitution;
	v->a[94739] = sym_process_substitution;
	small_parse_table_4737(v);
}

void	small_parse_table_4737(t_small_parse_table_array *v)
{
	v->a[94740] = 26;
	v->a[94741] = actions(71);
	v->a[94742] = 1;
	v->a[94743] = sym_comment;
	v->a[94744] = actions(1127);
	v->a[94745] = 1;
	v->a[94746] = sym_word;
	v->a[94747] = actions(1131);
	v->a[94748] = 1;
	v->a[94749] = anon_sym_LPAREN;
	v->a[94750] = actions(1133);
	v->a[94751] = 1;
	v->a[94752] = anon_sym_BANG;
	v->a[94753] = actions(1139);
	v->a[94754] = 1;
	v->a[94755] = anon_sym_TILDE;
	v->a[94756] = actions(1141);
	v->a[94757] = 1;
	v->a[94758] = anon_sym_DOLLAR_LBRACK;
	v->a[94759] = actions(1145);
	small_parse_table_4738(v);
}

void	small_parse_table_4738(t_small_parse_table_array *v)
{
	v->a[94760] = 1;
	v->a[94761] = anon_sym_DOLLAR;
	v->a[94762] = actions(1147);
	v->a[94763] = 1;
	v->a[94764] = sym__special_character;
	v->a[94765] = actions(1149);
	v->a[94766] = 1;
	v->a[94767] = anon_sym_DQUOTE;
	v->a[94768] = actions(1153);
	v->a[94769] = 1;
	v->a[94770] = aux_sym_number_token1;
	v->a[94771] = actions(1155);
	v->a[94772] = 1;
	v->a[94773] = aux_sym_number_token2;
	v->a[94774] = actions(1157);
	v->a[94775] = 1;
	v->a[94776] = anon_sym_DOLLAR_LBRACE;
	v->a[94777] = actions(1159);
	v->a[94778] = 1;
	v->a[94779] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4739(v);
}

void	small_parse_table_4739(t_small_parse_table_array *v)
{
	v->a[94780] = actions(1163);
	v->a[94781] = 1;
	v->a[94782] = anon_sym_DOLLAR_BQUOTE;
	v->a[94783] = actions(1167);
	v->a[94784] = 1;
	v->a[94785] = sym_test_operator;
	v->a[94786] = actions(1169);
	v->a[94787] = 1;
	v->a[94788] = sym__brace_start;
	v->a[94789] = actions(3060);
	v->a[94790] = 1;
	v->a[94791] = anon_sym_BQUOTE;
	v->a[94792] = state(2484);
	v->a[94793] = 1;
	v->a[94794] = aux_sym__literal_repeat1;
	v->a[94795] = state(2974);
	v->a[94796] = 1;
	v->a[94797] = sym__expression;
	v->a[94798] = actions(1129);
	v->a[94799] = 2;
	small_parse_table_4740(v);
}

/* EOF small_parse_table_947.c */
