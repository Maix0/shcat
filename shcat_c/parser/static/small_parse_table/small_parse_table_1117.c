/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1117.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5585(t_small_parse_table_array *v)
{
	v->a[111700] = 1;
	v->a[111701] = anon_sym_TILDE;
	v->a[111702] = actions(237);
	v->a[111703] = 1;
	v->a[111704] = sym_word;
	v->a[111705] = actions(248);
	v->a[111706] = 1;
	v->a[111707] = anon_sym_LPAREN;
	v->a[111708] = actions(250);
	v->a[111709] = 1;
	v->a[111710] = anon_sym_BANG;
	v->a[111711] = actions(258);
	v->a[111712] = 1;
	v->a[111713] = anon_sym_DOLLAR;
	v->a[111714] = actions(264);
	v->a[111715] = 1;
	v->a[111716] = aux_sym_number_token1;
	v->a[111717] = actions(266);
	v->a[111718] = 1;
	v->a[111719] = aux_sym_number_token2;
	small_parse_table_5586(v);
}

void	small_parse_table_5586(t_small_parse_table_array *v)
{
	v->a[111720] = actions(270);
	v->a[111721] = 1;
	v->a[111722] = anon_sym_DOLLAR_LPAREN;
	v->a[111723] = actions(282);
	v->a[111724] = 1;
	v->a[111725] = sym_test_operator;
	v->a[111726] = actions(284);
	v->a[111727] = 1;
	v->a[111728] = sym__brace_start;
	v->a[111729] = actions(1075);
	v->a[111730] = 1;
	v->a[111731] = anon_sym_DOLLAR_LBRACK;
	v->a[111732] = actions(1079);
	v->a[111733] = 1;
	v->a[111734] = sym__special_character;
	v->a[111735] = actions(1081);
	v->a[111736] = 1;
	v->a[111737] = anon_sym_DQUOTE;
	v->a[111738] = actions(1085);
	v->a[111739] = 1;
	small_parse_table_5587(v);
}

void	small_parse_table_5587(t_small_parse_table_array *v)
{
	v->a[111740] = anon_sym_DOLLAR_LBRACE;
	v->a[111741] = actions(1087);
	v->a[111742] = 1;
	v->a[111743] = anon_sym_DOLLAR_BQUOTE;
	v->a[111744] = actions(3598);
	v->a[111745] = 1;
	v->a[111746] = anon_sym_BQUOTE;
	v->a[111747] = state(2690);
	v->a[111748] = 1;
	v->a[111749] = aux_sym__literal_repeat1;
	v->a[111750] = state(3097);
	v->a[111751] = 1;
	v->a[111752] = sym__expression;
	v->a[111753] = actions(103);
	v->a[111754] = 2;
	v->a[111755] = anon_sym_PLUS_PLUS2;
	v->a[111756] = anon_sym_DASH_DASH2;
	v->a[111757] = actions(105);
	v->a[111758] = 2;
	v->a[111759] = anon_sym_DASH2;
	small_parse_table_5588(v);
}

void	small_parse_table_5588(t_small_parse_table_array *v)
{
	v->a[111760] = anon_sym_PLUS2;
	v->a[111761] = actions(1073);
	v->a[111762] = 2;
	v->a[111763] = anon_sym_LPAREN_LPAREN;
	v->a[111764] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[111765] = actions(1083);
	v->a[111766] = 2;
	v->a[111767] = sym_raw_string;
	v->a[111768] = sym_ansi_c_string;
	v->a[111769] = actions(1089);
	v->a[111770] = 2;
	v->a[111771] = anon_sym_LT_LPAREN;
	v->a[111772] = anon_sym_GT_LPAREN;
	v->a[111773] = state(3053);
	v->a[111774] = 6;
	v->a[111775] = sym_binary_expression;
	v->a[111776] = sym_ternary_expression;
	v->a[111777] = sym_unary_expression;
	v->a[111778] = sym_postfix_expression;
	v->a[111779] = sym_parenthesized_expression;
	small_parse_table_5589(v);
}

void	small_parse_table_5589(t_small_parse_table_array *v)
{
	v->a[111780] = sym_concatenation;
	v->a[111781] = state(2500);
	v->a[111782] = 9;
	v->a[111783] = sym_arithmetic_expansion;
	v->a[111784] = sym_brace_expression;
	v->a[111785] = sym_string;
	v->a[111786] = sym_translated_string;
	v->a[111787] = sym_number;
	v->a[111788] = sym_simple_expansion;
	v->a[111789] = sym_expansion;
	v->a[111790] = sym_command_substitution;
	v->a[111791] = sym_process_substitution;
	v->a[111792] = 8;
	v->a[111793] = actions(3);
	v->a[111794] = 1;
	v->a[111795] = sym_comment;
	v->a[111796] = actions(5826);
	v->a[111797] = 1;
	v->a[111798] = aux_sym_heredoc_redirect_token1;
	v->a[111799] = actions(5828);
	small_parse_table_5590(v);
}

/* EOF small_parse_table_1117.c */
