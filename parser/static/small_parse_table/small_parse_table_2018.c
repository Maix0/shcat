/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2018.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10090(t_small_parse_table_array *v)
{
	v->a[201800] = 19;
	v->a[201801] = actions(3);
	v->a[201802] = 1;
	v->a[201803] = sym_comment;
	v->a[201804] = actions(363);
	v->a[201805] = 1;
	v->a[201806] = anon_sym_DOLLAR_LBRACK;
	v->a[201807] = actions(367);
	v->a[201808] = 1;
	v->a[201809] = anon_sym_DOLLAR;
	v->a[201810] = actions(371);
	v->a[201811] = 1;
	v->a[201812] = anon_sym_DQUOTE;
	v->a[201813] = actions(375);
	v->a[201814] = 1;
	v->a[201815] = aux_sym_number_token1;
	v->a[201816] = actions(377);
	v->a[201817] = 1;
	v->a[201818] = aux_sym_number_token2;
	v->a[201819] = actions(379);
	small_parse_table_10091(v);
}

void	small_parse_table_10091(t_small_parse_table_array *v)
{
	v->a[201820] = 1;
	v->a[201821] = anon_sym_DOLLAR_LBRACE;
	v->a[201822] = actions(381);
	v->a[201823] = 1;
	v->a[201824] = anon_sym_DOLLAR_LPAREN;
	v->a[201825] = actions(385);
	v->a[201826] = 1;
	v->a[201827] = anon_sym_DOLLAR_BQUOTE;
	v->a[201828] = actions(391);
	v->a[201829] = 1;
	v->a[201830] = sym__brace_start;
	v->a[201831] = actions(5809);
	v->a[201832] = 1;
	v->a[201833] = anon_sym_BQUOTE;
	v->a[201834] = actions(8836);
	v->a[201835] = 1;
	v->a[201836] = sym_word;
	v->a[201837] = actions(8844);
	v->a[201838] = 1;
	v->a[201839] = sym_test_operator;
	small_parse_table_10092(v);
}

void	small_parse_table_10092(t_small_parse_table_array *v)
{
	v->a[201840] = actions(9220);
	v->a[201841] = 1;
	v->a[201842] = anon_sym_RBRACK;
	v->a[201843] = actions(352);
	v->a[201844] = 2;
	v->a[201845] = anon_sym_LPAREN_LPAREN;
	v->a[201846] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[201847] = actions(387);
	v->a[201848] = 2;
	v->a[201849] = anon_sym_LT_LPAREN;
	v->a[201850] = anon_sym_GT_LPAREN;
	v->a[201851] = actions(8840);
	v->a[201852] = 2;
	v->a[201853] = sym__special_character;
	v->a[201854] = sym__comment_word;
	v->a[201855] = actions(8842);
	v->a[201856] = 3;
	v->a[201857] = sym__bare_dollar;
	v->a[201858] = sym_raw_string;
	v->a[201859] = sym_ansi_c_string;
	small_parse_table_10093(v);
}

void	small_parse_table_10093(t_small_parse_table_array *v)
{
	v->a[201860] = state(2730);
	v->a[201861] = 9;
	v->a[201862] = sym_arithmetic_expansion;
	v->a[201863] = sym_brace_expression;
	v->a[201864] = sym_string;
	v->a[201865] = sym_translated_string;
	v->a[201866] = sym_number;
	v->a[201867] = sym_simple_expansion;
	v->a[201868] = sym_expansion;
	v->a[201869] = sym_command_substitution;
	v->a[201870] = sym_process_substitution;
	v->a[201871] = 21;
	v->a[201872] = actions(71);
	v->a[201873] = 1;
	v->a[201874] = sym_comment;
	v->a[201875] = actions(1551);
	v->a[201876] = 1;
	v->a[201877] = anon_sym_DOLLAR;
	v->a[201878] = actions(1557);
	v->a[201879] = 1;
	small_parse_table_10094(v);
}

void	small_parse_table_10094(t_small_parse_table_array *v)
{
	v->a[201880] = aux_sym_number_token1;
	v->a[201881] = actions(1559);
	v->a[201882] = 1;
	v->a[201883] = aux_sym_number_token2;
	v->a[201884] = actions(1563);
	v->a[201885] = 1;
	v->a[201886] = anon_sym_DOLLAR_LPAREN;
	v->a[201887] = actions(1575);
	v->a[201888] = 1;
	v->a[201889] = sym__brace_start;
	v->a[201890] = actions(9198);
	v->a[201891] = 1;
	v->a[201892] = anon_sym_DOLLAR_LBRACK;
	v->a[201893] = actions(9202);
	v->a[201894] = 1;
	v->a[201895] = anon_sym_DQUOTE;
	v->a[201896] = actions(9206);
	v->a[201897] = 1;
	v->a[201898] = anon_sym_DOLLAR_LBRACE;
	v->a[201899] = actions(9208);
	small_parse_table_10095(v);
}

/* EOF small_parse_table_2018.c */
