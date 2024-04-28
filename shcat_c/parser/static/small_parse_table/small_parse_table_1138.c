/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1138.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5690(t_small_parse_table_array *v)
{
	v->a[113800] = anon_sym_TILDE;
	v->a[113801] = actions(237);
	v->a[113802] = 1;
	v->a[113803] = sym_word;
	v->a[113804] = actions(248);
	v->a[113805] = 1;
	v->a[113806] = anon_sym_LPAREN;
	v->a[113807] = actions(250);
	v->a[113808] = 1;
	v->a[113809] = anon_sym_BANG;
	v->a[113810] = actions(258);
	v->a[113811] = 1;
	v->a[113812] = anon_sym_DOLLAR;
	v->a[113813] = actions(264);
	v->a[113814] = 1;
	v->a[113815] = aux_sym_number_token1;
	v->a[113816] = actions(266);
	v->a[113817] = 1;
	v->a[113818] = aux_sym_number_token2;
	v->a[113819] = actions(270);
	small_parse_table_5691(v);
}

void	small_parse_table_5691(t_small_parse_table_array *v)
{
	v->a[113820] = 1;
	v->a[113821] = anon_sym_DOLLAR_LPAREN;
	v->a[113822] = actions(282);
	v->a[113823] = 1;
	v->a[113824] = sym_test_operator;
	v->a[113825] = actions(284);
	v->a[113826] = 1;
	v->a[113827] = sym__brace_start;
	v->a[113828] = actions(1075);
	v->a[113829] = 1;
	v->a[113830] = anon_sym_DOLLAR_LBRACK;
	v->a[113831] = actions(1079);
	v->a[113832] = 1;
	v->a[113833] = sym__special_character;
	v->a[113834] = actions(1081);
	v->a[113835] = 1;
	v->a[113836] = anon_sym_DQUOTE;
	v->a[113837] = actions(1085);
	v->a[113838] = 1;
	v->a[113839] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_5692(v);
}

void	small_parse_table_5692(t_small_parse_table_array *v)
{
	v->a[113840] = actions(1087);
	v->a[113841] = 1;
	v->a[113842] = anon_sym_DOLLAR_BQUOTE;
	v->a[113843] = actions(3598);
	v->a[113844] = 1;
	v->a[113845] = anon_sym_BQUOTE;
	v->a[113846] = state(2690);
	v->a[113847] = 1;
	v->a[113848] = aux_sym__literal_repeat1;
	v->a[113849] = state(3080);
	v->a[113850] = 1;
	v->a[113851] = sym__expression;
	v->a[113852] = actions(103);
	v->a[113853] = 2;
	v->a[113854] = anon_sym_PLUS_PLUS2;
	v->a[113855] = anon_sym_DASH_DASH2;
	v->a[113856] = actions(105);
	v->a[113857] = 2;
	v->a[113858] = anon_sym_DASH2;
	v->a[113859] = anon_sym_PLUS2;
	small_parse_table_5693(v);
}

void	small_parse_table_5693(t_small_parse_table_array *v)
{
	v->a[113860] = actions(1073);
	v->a[113861] = 2;
	v->a[113862] = anon_sym_LPAREN_LPAREN;
	v->a[113863] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[113864] = actions(1083);
	v->a[113865] = 2;
	v->a[113866] = sym_raw_string;
	v->a[113867] = sym_ansi_c_string;
	v->a[113868] = actions(1089);
	v->a[113869] = 2;
	v->a[113870] = anon_sym_LT_LPAREN;
	v->a[113871] = anon_sym_GT_LPAREN;
	v->a[113872] = state(3053);
	v->a[113873] = 6;
	v->a[113874] = sym_binary_expression;
	v->a[113875] = sym_ternary_expression;
	v->a[113876] = sym_unary_expression;
	v->a[113877] = sym_postfix_expression;
	v->a[113878] = sym_parenthesized_expression;
	v->a[113879] = sym_concatenation;
	small_parse_table_5694(v);
}

void	small_parse_table_5694(t_small_parse_table_array *v)
{
	v->a[113880] = state(2500);
	v->a[113881] = 9;
	v->a[113882] = sym_arithmetic_expansion;
	v->a[113883] = sym_brace_expression;
	v->a[113884] = sym_string;
	v->a[113885] = sym_translated_string;
	v->a[113886] = sym_number;
	v->a[113887] = sym_simple_expansion;
	v->a[113888] = sym_expansion;
	v->a[113889] = sym_command_substitution;
	v->a[113890] = sym_process_substitution;
	v->a[113891] = 8;
	v->a[113892] = actions(3);
	v->a[113893] = 1;
	v->a[113894] = sym_comment;
	v->a[113895] = actions(5826);
	v->a[113896] = 1;
	v->a[113897] = aux_sym_heredoc_redirect_token1;
	v->a[113898] = actions(5828);
	v->a[113899] = 1;
	small_parse_table_5695(v);
}

/* EOF small_parse_table_1138.c */
