/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2128.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10640(t_small_parse_table_array *v)
{
	v->a[212800] = 2;
	v->a[212801] = anon_sym_LPAREN_LPAREN;
	v->a[212802] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[212803] = actions(9108);
	v->a[212804] = 2;
	v->a[212805] = anon_sym_LT_LPAREN;
	v->a[212806] = anon_sym_GT_LPAREN;
	v->a[212807] = actions(10124);
	v->a[212808] = 2;
	v->a[212809] = sym_test_operator;
	v->a[212810] = sym__special_character;
	v->a[212811] = actions(10126);
	v->a[212812] = 3;
	v->a[212813] = sym__bare_dollar;
	v->a[212814] = sym_raw_string;
	v->a[212815] = sym_ansi_c_string;
	v->a[212816] = state(910);
	v->a[212817] = 9;
	v->a[212818] = sym_arithmetic_expansion;
	v->a[212819] = sym_brace_expression;
	small_parse_table_10641(v);
}

void	small_parse_table_10641(t_small_parse_table_array *v)
{
	v->a[212820] = sym_string;
	v->a[212821] = sym_translated_string;
	v->a[212822] = sym_number;
	v->a[212823] = sym_simple_expansion;
	v->a[212824] = sym_expansion;
	v->a[212825] = sym_command_substitution;
	v->a[212826] = sym_process_substitution;
	v->a[212827] = 20;
	v->a[212828] = actions(71);
	v->a[212829] = 1;
	v->a[212830] = sym_comment;
	v->a[212831] = actions(3026);
	v->a[212832] = 1;
	v->a[212833] = anon_sym_DOLLAR;
	v->a[212834] = actions(3032);
	v->a[212835] = 1;
	v->a[212836] = aux_sym_number_token1;
	v->a[212837] = actions(3034);
	v->a[212838] = 1;
	v->a[212839] = aux_sym_number_token2;
	small_parse_table_10642(v);
}

void	small_parse_table_10642(t_small_parse_table_array *v)
{
	v->a[212840] = actions(3038);
	v->a[212841] = 1;
	v->a[212842] = anon_sym_DOLLAR_LPAREN;
	v->a[212843] = actions(3048);
	v->a[212844] = 1;
	v->a[212845] = sym__brace_start;
	v->a[212846] = actions(10130);
	v->a[212847] = 1;
	v->a[212848] = sym_word;
	v->a[212849] = actions(10134);
	v->a[212850] = 1;
	v->a[212851] = anon_sym_DOLLAR_LBRACK;
	v->a[212852] = actions(10136);
	v->a[212853] = 1;
	v->a[212854] = sym__special_character;
	v->a[212855] = actions(10138);
	v->a[212856] = 1;
	v->a[212857] = anon_sym_DQUOTE;
	v->a[212858] = actions(10142);
	v->a[212859] = 1;
	small_parse_table_10643(v);
}

void	small_parse_table_10643(t_small_parse_table_array *v)
{
	v->a[212860] = anon_sym_DOLLAR_LBRACE;
	v->a[212861] = actions(10144);
	v->a[212862] = 1;
	v->a[212863] = anon_sym_BQUOTE;
	v->a[212864] = actions(10146);
	v->a[212865] = 1;
	v->a[212866] = anon_sym_DOLLAR_BQUOTE;
	v->a[212867] = actions(10150);
	v->a[212868] = 1;
	v->a[212869] = sym_test_operator;
	v->a[212870] = state(4492);
	v->a[212871] = 1;
	v->a[212872] = aux_sym__literal_repeat1;
	v->a[212873] = state(4893);
	v->a[212874] = 1;
	v->a[212875] = sym_concatenation;
	v->a[212876] = actions(10132);
	v->a[212877] = 2;
	v->a[212878] = anon_sym_LPAREN_LPAREN;
	v->a[212879] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_10644(v);
}

void	small_parse_table_10644(t_small_parse_table_array *v)
{
	v->a[212880] = actions(10140);
	v->a[212881] = 2;
	v->a[212882] = sym_raw_string;
	v->a[212883] = sym_ansi_c_string;
	v->a[212884] = actions(10148);
	v->a[212885] = 2;
	v->a[212886] = anon_sym_LT_LPAREN;
	v->a[212887] = anon_sym_GT_LPAREN;
	v->a[212888] = state(4274);
	v->a[212889] = 9;
	v->a[212890] = sym_arithmetic_expansion;
	v->a[212891] = sym_brace_expression;
	v->a[212892] = sym_string;
	v->a[212893] = sym_translated_string;
	v->a[212894] = sym_number;
	v->a[212895] = sym_simple_expansion;
	v->a[212896] = sym_expansion;
	v->a[212897] = sym_command_substitution;
	v->a[212898] = sym_process_substitution;
	v->a[212899] = 18;
	small_parse_table_10645(v);
}

/* EOF small_parse_table_2128.c */
