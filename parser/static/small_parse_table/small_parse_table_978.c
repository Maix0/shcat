/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_978.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4890(t_small_parse_table_array *v)
{
	v->a[97800] = anon_sym_BQUOTE;
	v->a[97801] = state(2641);
	v->a[97802] = 1;
	v->a[97803] = aux_sym__literal_repeat1;
	v->a[97804] = state(2986);
	v->a[97805] = 1;
	v->a[97806] = sym__expression;
	v->a[97807] = actions(183);
	v->a[97808] = 2;
	v->a[97809] = anon_sym_PLUS_PLUS2;
	v->a[97810] = anon_sym_DASH_DASH2;
	v->a[97811] = actions(185);
	v->a[97812] = 2;
	v->a[97813] = anon_sym_DASH2;
	v->a[97814] = anon_sym_PLUS2;
	v->a[97815] = actions(352);
	v->a[97816] = 2;
	v->a[97817] = anon_sym_LPAREN_LPAREN;
	v->a[97818] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97819] = actions(373);
	small_parse_table_4891(v);
}

void	small_parse_table_4891(t_small_parse_table_array *v)
{
	v->a[97820] = 2;
	v->a[97821] = sym_raw_string;
	v->a[97822] = sym_ansi_c_string;
	v->a[97823] = actions(387);
	v->a[97824] = 2;
	v->a[97825] = anon_sym_LT_LPAREN;
	v->a[97826] = anon_sym_GT_LPAREN;
	v->a[97827] = state(3071);
	v->a[97828] = 6;
	v->a[97829] = sym_binary_expression;
	v->a[97830] = sym_ternary_expression;
	v->a[97831] = sym_unary_expression;
	v->a[97832] = sym_postfix_expression;
	v->a[97833] = sym_parenthesized_expression;
	v->a[97834] = sym_concatenation;
	v->a[97835] = state(2521);
	v->a[97836] = 9;
	v->a[97837] = sym_arithmetic_expansion;
	v->a[97838] = sym_brace_expression;
	v->a[97839] = sym_string;
	small_parse_table_4892(v);
}

void	small_parse_table_4892(t_small_parse_table_array *v)
{
	v->a[97840] = sym_translated_string;
	v->a[97841] = sym_number;
	v->a[97842] = sym_simple_expansion;
	v->a[97843] = sym_expansion;
	v->a[97844] = sym_command_substitution;
	v->a[97845] = sym_process_substitution;
	v->a[97846] = 26;
	v->a[97847] = actions(71);
	v->a[97848] = 1;
	v->a[97849] = sym_comment;
	v->a[97850] = actions(187);
	v->a[97851] = 1;
	v->a[97852] = anon_sym_TILDE;
	v->a[97853] = actions(350);
	v->a[97854] = 1;
	v->a[97855] = sym_word;
	v->a[97856] = actions(359);
	v->a[97857] = 1;
	v->a[97858] = anon_sym_LPAREN;
	v->a[97859] = actions(361);
	small_parse_table_4893(v);
}

void	small_parse_table_4893(t_small_parse_table_array *v)
{
	v->a[97860] = 1;
	v->a[97861] = anon_sym_BANG;
	v->a[97862] = actions(363);
	v->a[97863] = 1;
	v->a[97864] = anon_sym_DOLLAR_LBRACK;
	v->a[97865] = actions(367);
	v->a[97866] = 1;
	v->a[97867] = anon_sym_DOLLAR;
	v->a[97868] = actions(371);
	v->a[97869] = 1;
	v->a[97870] = anon_sym_DQUOTE;
	v->a[97871] = actions(375);
	v->a[97872] = 1;
	v->a[97873] = aux_sym_number_token1;
	v->a[97874] = actions(377);
	v->a[97875] = 1;
	v->a[97876] = aux_sym_number_token2;
	v->a[97877] = actions(379);
	v->a[97878] = 1;
	v->a[97879] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4894(v);
}

void	small_parse_table_4894(t_small_parse_table_array *v)
{
	v->a[97880] = actions(381);
	v->a[97881] = 1;
	v->a[97882] = anon_sym_DOLLAR_LPAREN;
	v->a[97883] = actions(385);
	v->a[97884] = 1;
	v->a[97885] = anon_sym_DOLLAR_BQUOTE;
	v->a[97886] = actions(389);
	v->a[97887] = 1;
	v->a[97888] = sym_test_operator;
	v->a[97889] = actions(391);
	v->a[97890] = 1;
	v->a[97891] = sym__brace_start;
	v->a[97892] = actions(5807);
	v->a[97893] = 1;
	v->a[97894] = sym__special_character;
	v->a[97895] = actions(5809);
	v->a[97896] = 1;
	v->a[97897] = anon_sym_BQUOTE;
	v->a[97898] = state(2641);
	v->a[97899] = 1;
	small_parse_table_4895(v);
}

/* EOF small_parse_table_978.c */
