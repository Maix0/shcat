/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_797.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3985(t_small_parse_table_array *v)
{
	v->a[79700] = 1;
	v->a[79701] = sym_comment;
	v->a[79702] = actions(363);
	v->a[79703] = 1;
	v->a[79704] = anon_sym_DOLLAR_LBRACK;
	v->a[79705] = actions(367);
	v->a[79706] = 1;
	v->a[79707] = anon_sym_DOLLAR;
	v->a[79708] = actions(371);
	v->a[79709] = 1;
	v->a[79710] = anon_sym_DQUOTE;
	v->a[79711] = actions(375);
	v->a[79712] = 1;
	v->a[79713] = aux_sym_number_token1;
	v->a[79714] = actions(377);
	v->a[79715] = 1;
	v->a[79716] = aux_sym_number_token2;
	v->a[79717] = actions(379);
	v->a[79718] = 1;
	v->a[79719] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3986(v);
}

void	small_parse_table_3986(t_small_parse_table_array *v)
{
	v->a[79720] = actions(381);
	v->a[79721] = 1;
	v->a[79722] = anon_sym_DOLLAR_LPAREN;
	v->a[79723] = actions(385);
	v->a[79724] = 1;
	v->a[79725] = anon_sym_DOLLAR_BQUOTE;
	v->a[79726] = actions(391);
	v->a[79727] = 1;
	v->a[79728] = sym__brace_start;
	v->a[79729] = actions(1091);
	v->a[79730] = 1;
	v->a[79731] = sym_word;
	v->a[79732] = actions(1093);
	v->a[79733] = 1;
	v->a[79734] = anon_sym_LPAREN;
	v->a[79735] = actions(1095);
	v->a[79736] = 1;
	v->a[79737] = anon_sym_BANG;
	v->a[79738] = actions(1103);
	v->a[79739] = 1;
	small_parse_table_3987(v);
}

void	small_parse_table_3987(t_small_parse_table_array *v)
{
	v->a[79740] = anon_sym_TILDE;
	v->a[79741] = actions(1113);
	v->a[79742] = 1;
	v->a[79743] = sym_test_operator;
	v->a[79744] = actions(5809);
	v->a[79745] = 1;
	v->a[79746] = anon_sym_BQUOTE;
	v->a[79747] = actions(5916);
	v->a[79748] = 1;
	v->a[79749] = sym__special_character;
	v->a[79750] = actions(5918);
	v->a[79751] = 1;
	v->a[79752] = sym_extglob_pattern;
	v->a[79753] = state(2472);
	v->a[79754] = 1;
	v->a[79755] = aux_sym__literal_repeat1;
	v->a[79756] = state(2827);
	v->a[79757] = 1;
	v->a[79758] = sym__expression;
	v->a[79759] = state(2897);
	small_parse_table_3988(v);
}

void	small_parse_table_3988(t_small_parse_table_array *v)
{
	v->a[79760] = 1;
	v->a[79761] = sym__extglob_blob;
	v->a[79762] = actions(352);
	v->a[79763] = 2;
	v->a[79764] = anon_sym_LPAREN_LPAREN;
	v->a[79765] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79766] = actions(387);
	v->a[79767] = 2;
	v->a[79768] = anon_sym_LT_LPAREN;
	v->a[79769] = anon_sym_GT_LPAREN;
	v->a[79770] = actions(1099);
	v->a[79771] = 2;
	v->a[79772] = anon_sym_PLUS_PLUS2;
	v->a[79773] = anon_sym_DASH_DASH2;
	v->a[79774] = actions(1101);
	v->a[79775] = 2;
	v->a[79776] = anon_sym_DASH2;
	v->a[79777] = anon_sym_PLUS2;
	v->a[79778] = actions(1109);
	v->a[79779] = 2;
	small_parse_table_3989(v);
}

void	small_parse_table_3989(t_small_parse_table_array *v)
{
	v->a[79780] = sym_raw_string;
	v->a[79781] = sym_ansi_c_string;
	v->a[79782] = state(2863);
	v->a[79783] = 6;
	v->a[79784] = sym_binary_expression;
	v->a[79785] = sym_ternary_expression;
	v->a[79786] = sym_unary_expression;
	v->a[79787] = sym_postfix_expression;
	v->a[79788] = sym_parenthesized_expression;
	v->a[79789] = sym_concatenation;
	v->a[79790] = state(2451);
	v->a[79791] = 9;
	v->a[79792] = sym_arithmetic_expansion;
	v->a[79793] = sym_brace_expression;
	v->a[79794] = sym_string;
	v->a[79795] = sym_translated_string;
	v->a[79796] = sym_number;
	v->a[79797] = sym_simple_expansion;
	v->a[79798] = sym_expansion;
	v->a[79799] = sym_command_substitution;
	small_parse_table_3990(v);
}

/* EOF small_parse_table_797.c */
