/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1088.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5440(t_small_parse_table_array *v)
{
	v->a[108800] = actions(71);
	v->a[108801] = 1;
	v->a[108802] = sym_comment;
	v->a[108803] = actions(187);
	v->a[108804] = 1;
	v->a[108805] = anon_sym_TILDE;
	v->a[108806] = actions(350);
	v->a[108807] = 1;
	v->a[108808] = sym_word;
	v->a[108809] = actions(359);
	v->a[108810] = 1;
	v->a[108811] = anon_sym_LPAREN;
	v->a[108812] = actions(361);
	v->a[108813] = 1;
	v->a[108814] = anon_sym_BANG;
	v->a[108815] = actions(363);
	v->a[108816] = 1;
	v->a[108817] = anon_sym_DOLLAR_LBRACK;
	v->a[108818] = actions(367);
	v->a[108819] = 1;
	small_parse_table_5441(v);
}

void	small_parse_table_5441(t_small_parse_table_array *v)
{
	v->a[108820] = anon_sym_DOLLAR;
	v->a[108821] = actions(371);
	v->a[108822] = 1;
	v->a[108823] = anon_sym_DQUOTE;
	v->a[108824] = actions(375);
	v->a[108825] = 1;
	v->a[108826] = aux_sym_number_token1;
	v->a[108827] = actions(377);
	v->a[108828] = 1;
	v->a[108829] = aux_sym_number_token2;
	v->a[108830] = actions(379);
	v->a[108831] = 1;
	v->a[108832] = anon_sym_DOLLAR_LBRACE;
	v->a[108833] = actions(381);
	v->a[108834] = 1;
	v->a[108835] = anon_sym_DOLLAR_LPAREN;
	v->a[108836] = actions(385);
	v->a[108837] = 1;
	v->a[108838] = anon_sym_DOLLAR_BQUOTE;
	v->a[108839] = actions(389);
	small_parse_table_5442(v);
}

void	small_parse_table_5442(t_small_parse_table_array *v)
{
	v->a[108840] = 1;
	v->a[108841] = sym_test_operator;
	v->a[108842] = actions(391);
	v->a[108843] = 1;
	v->a[108844] = sym__brace_start;
	v->a[108845] = actions(5807);
	v->a[108846] = 1;
	v->a[108847] = sym__special_character;
	v->a[108848] = actions(5809);
	v->a[108849] = 1;
	v->a[108850] = anon_sym_BQUOTE;
	v->a[108851] = state(2641);
	v->a[108852] = 1;
	v->a[108853] = aux_sym__literal_repeat1;
	v->a[108854] = state(3006);
	v->a[108855] = 1;
	v->a[108856] = sym__expression;
	v->a[108857] = actions(183);
	v->a[108858] = 2;
	v->a[108859] = anon_sym_PLUS_PLUS2;
	small_parse_table_5443(v);
}

void	small_parse_table_5443(t_small_parse_table_array *v)
{
	v->a[108860] = anon_sym_DASH_DASH2;
	v->a[108861] = actions(185);
	v->a[108862] = 2;
	v->a[108863] = anon_sym_DASH2;
	v->a[108864] = anon_sym_PLUS2;
	v->a[108865] = actions(352);
	v->a[108866] = 2;
	v->a[108867] = anon_sym_LPAREN_LPAREN;
	v->a[108868] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[108869] = actions(373);
	v->a[108870] = 2;
	v->a[108871] = sym_raw_string;
	v->a[108872] = sym_ansi_c_string;
	v->a[108873] = actions(387);
	v->a[108874] = 2;
	v->a[108875] = anon_sym_LT_LPAREN;
	v->a[108876] = anon_sym_GT_LPAREN;
	v->a[108877] = state(3071);
	v->a[108878] = 6;
	v->a[108879] = sym_binary_expression;
	small_parse_table_5444(v);
}

void	small_parse_table_5444(t_small_parse_table_array *v)
{
	v->a[108880] = sym_ternary_expression;
	v->a[108881] = sym_unary_expression;
	v->a[108882] = sym_postfix_expression;
	v->a[108883] = sym_parenthesized_expression;
	v->a[108884] = sym_concatenation;
	v->a[108885] = state(2521);
	v->a[108886] = 9;
	v->a[108887] = sym_arithmetic_expansion;
	v->a[108888] = sym_brace_expression;
	v->a[108889] = sym_string;
	v->a[108890] = sym_translated_string;
	v->a[108891] = sym_number;
	v->a[108892] = sym_simple_expansion;
	v->a[108893] = sym_expansion;
	v->a[108894] = sym_command_substitution;
	v->a[108895] = sym_process_substitution;
	v->a[108896] = 26;
	v->a[108897] = actions(71);
	v->a[108898] = 1;
	v->a[108899] = sym_comment;
	small_parse_table_5445(v);
}

/* EOF small_parse_table_1088.c */
