/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_958.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4790(t_small_parse_table_array *v)
{
	v->a[95800] = actions(1101);
	v->a[95801] = 2;
	v->a[95802] = anon_sym_DASH2;
	v->a[95803] = anon_sym_PLUS2;
	v->a[95804] = actions(1109);
	v->a[95805] = 2;
	v->a[95806] = sym_raw_string;
	v->a[95807] = sym_ansi_c_string;
	v->a[95808] = state(2863);
	v->a[95809] = 6;
	v->a[95810] = sym_binary_expression;
	v->a[95811] = sym_ternary_expression;
	v->a[95812] = sym_unary_expression;
	v->a[95813] = sym_postfix_expression;
	v->a[95814] = sym_parenthesized_expression;
	v->a[95815] = sym_concatenation;
	v->a[95816] = state(2451);
	v->a[95817] = 9;
	v->a[95818] = sym_arithmetic_expansion;
	v->a[95819] = sym_brace_expression;
	small_parse_table_4791(v);
}

void	small_parse_table_4791(t_small_parse_table_array *v)
{
	v->a[95820] = sym_string;
	v->a[95821] = sym_translated_string;
	v->a[95822] = sym_number;
	v->a[95823] = sym_simple_expansion;
	v->a[95824] = sym_expansion;
	v->a[95825] = sym_command_substitution;
	v->a[95826] = sym_process_substitution;
	v->a[95827] = 26;
	v->a[95828] = actions(71);
	v->a[95829] = 1;
	v->a[95830] = sym_comment;
	v->a[95831] = actions(363);
	v->a[95832] = 1;
	v->a[95833] = anon_sym_DOLLAR_LBRACK;
	v->a[95834] = actions(367);
	v->a[95835] = 1;
	v->a[95836] = anon_sym_DOLLAR;
	v->a[95837] = actions(371);
	v->a[95838] = 1;
	v->a[95839] = anon_sym_DQUOTE;
	small_parse_table_4792(v);
}

void	small_parse_table_4792(t_small_parse_table_array *v)
{
	v->a[95840] = actions(375);
	v->a[95841] = 1;
	v->a[95842] = aux_sym_number_token1;
	v->a[95843] = actions(377);
	v->a[95844] = 1;
	v->a[95845] = aux_sym_number_token2;
	v->a[95846] = actions(379);
	v->a[95847] = 1;
	v->a[95848] = anon_sym_DOLLAR_LBRACE;
	v->a[95849] = actions(381);
	v->a[95850] = 1;
	v->a[95851] = anon_sym_DOLLAR_LPAREN;
	v->a[95852] = actions(385);
	v->a[95853] = 1;
	v->a[95854] = anon_sym_DOLLAR_BQUOTE;
	v->a[95855] = actions(391);
	v->a[95856] = 1;
	v->a[95857] = sym__brace_start;
	v->a[95858] = actions(1091);
	v->a[95859] = 1;
	small_parse_table_4793(v);
}

void	small_parse_table_4793(t_small_parse_table_array *v)
{
	v->a[95860] = sym_word;
	v->a[95861] = actions(1093);
	v->a[95862] = 1;
	v->a[95863] = anon_sym_LPAREN;
	v->a[95864] = actions(1095);
	v->a[95865] = 1;
	v->a[95866] = anon_sym_BANG;
	v->a[95867] = actions(1103);
	v->a[95868] = 1;
	v->a[95869] = anon_sym_TILDE;
	v->a[95870] = actions(1113);
	v->a[95871] = 1;
	v->a[95872] = sym_test_operator;
	v->a[95873] = actions(5809);
	v->a[95874] = 1;
	v->a[95875] = anon_sym_BQUOTE;
	v->a[95876] = actions(5916);
	v->a[95877] = 1;
	v->a[95878] = sym__special_character;
	v->a[95879] = state(2472);
	small_parse_table_4794(v);
}

void	small_parse_table_4794(t_small_parse_table_array *v)
{
	v->a[95880] = 1;
	v->a[95881] = aux_sym__literal_repeat1;
	v->a[95882] = state(2925);
	v->a[95883] = 1;
	v->a[95884] = sym__expression;
	v->a[95885] = actions(352);
	v->a[95886] = 2;
	v->a[95887] = anon_sym_LPAREN_LPAREN;
	v->a[95888] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95889] = actions(387);
	v->a[95890] = 2;
	v->a[95891] = anon_sym_LT_LPAREN;
	v->a[95892] = anon_sym_GT_LPAREN;
	v->a[95893] = actions(1099);
	v->a[95894] = 2;
	v->a[95895] = anon_sym_PLUS_PLUS2;
	v->a[95896] = anon_sym_DASH_DASH2;
	v->a[95897] = actions(1101);
	v->a[95898] = 2;
	v->a[95899] = anon_sym_DASH2;
	small_parse_table_4795(v);
}

/* EOF small_parse_table_958.c */
