/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1037.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5185(t_small_parse_table_array *v)
{
	v->a[103700] = sym_expansion;
	v->a[103701] = sym_command_substitution;
	v->a[103702] = sym_process_substitution;
	v->a[103703] = 26;
	v->a[103704] = actions(71);
	v->a[103705] = 1;
	v->a[103706] = sym_comment;
	v->a[103707] = actions(1131);
	v->a[103708] = 1;
	v->a[103709] = anon_sym_LPAREN;
	v->a[103710] = actions(1141);
	v->a[103711] = 1;
	v->a[103712] = anon_sym_DOLLAR_LBRACK;
	v->a[103713] = actions(1145);
	v->a[103714] = 1;
	v->a[103715] = anon_sym_DOLLAR;
	v->a[103716] = actions(1149);
	v->a[103717] = 1;
	v->a[103718] = anon_sym_DQUOTE;
	v->a[103719] = actions(1153);
	small_parse_table_5186(v);
}

void	small_parse_table_5186(t_small_parse_table_array *v)
{
	v->a[103720] = 1;
	v->a[103721] = aux_sym_number_token1;
	v->a[103722] = actions(1155);
	v->a[103723] = 1;
	v->a[103724] = aux_sym_number_token2;
	v->a[103725] = actions(1157);
	v->a[103726] = 1;
	v->a[103727] = anon_sym_DOLLAR_LBRACE;
	v->a[103728] = actions(1159);
	v->a[103729] = 1;
	v->a[103730] = anon_sym_DOLLAR_LPAREN;
	v->a[103731] = actions(1163);
	v->a[103732] = 1;
	v->a[103733] = anon_sym_DOLLAR_BQUOTE;
	v->a[103734] = actions(1169);
	v->a[103735] = 1;
	v->a[103736] = sym__brace_start;
	v->a[103737] = actions(1211);
	v->a[103738] = 1;
	v->a[103739] = sym_word;
	small_parse_table_5187(v);
}

void	small_parse_table_5187(t_small_parse_table_array *v)
{
	v->a[103740] = actions(1213);
	v->a[103741] = 1;
	v->a[103742] = anon_sym_BANG;
	v->a[103743] = actions(1219);
	v->a[103744] = 1;
	v->a[103745] = anon_sym_TILDE;
	v->a[103746] = actions(1221);
	v->a[103747] = 1;
	v->a[103748] = sym__special_character;
	v->a[103749] = actions(1225);
	v->a[103750] = 1;
	v->a[103751] = sym_test_operator;
	v->a[103752] = actions(3060);
	v->a[103753] = 1;
	v->a[103754] = anon_sym_BQUOTE;
	v->a[103755] = state(2484);
	v->a[103756] = 1;
	v->a[103757] = aux_sym__literal_repeat1;
	v->a[103758] = state(3356);
	v->a[103759] = 1;
	small_parse_table_5188(v);
}

void	small_parse_table_5188(t_small_parse_table_array *v)
{
	v->a[103760] = sym__expression;
	v->a[103761] = actions(1129);
	v->a[103762] = 2;
	v->a[103763] = anon_sym_LPAREN_LPAREN;
	v->a[103764] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[103765] = actions(1165);
	v->a[103766] = 2;
	v->a[103767] = anon_sym_LT_LPAREN;
	v->a[103768] = anon_sym_GT_LPAREN;
	v->a[103769] = actions(1215);
	v->a[103770] = 2;
	v->a[103771] = anon_sym_PLUS_PLUS2;
	v->a[103772] = anon_sym_DASH_DASH2;
	v->a[103773] = actions(1217);
	v->a[103774] = 2;
	v->a[103775] = anon_sym_DASH2;
	v->a[103776] = anon_sym_PLUS2;
	v->a[103777] = actions(1223);
	v->a[103778] = 2;
	v->a[103779] = sym_raw_string;
	small_parse_table_5189(v);
}

void	small_parse_table_5189(t_small_parse_table_array *v)
{
	v->a[103780] = sym_ansi_c_string;
	v->a[103781] = state(2594);
	v->a[103782] = 6;
	v->a[103783] = sym_binary_expression;
	v->a[103784] = sym_ternary_expression;
	v->a[103785] = sym_unary_expression;
	v->a[103786] = sym_postfix_expression;
	v->a[103787] = sym_parenthesized_expression;
	v->a[103788] = sym_concatenation;
	v->a[103789] = state(2588);
	v->a[103790] = 9;
	v->a[103791] = sym_arithmetic_expansion;
	v->a[103792] = sym_brace_expression;
	v->a[103793] = sym_string;
	v->a[103794] = sym_translated_string;
	v->a[103795] = sym_number;
	v->a[103796] = sym_simple_expansion;
	v->a[103797] = sym_expansion;
	v->a[103798] = sym_command_substitution;
	v->a[103799] = sym_process_substitution;
	small_parse_table_5190(v);
}

/* EOF small_parse_table_1037.c */
