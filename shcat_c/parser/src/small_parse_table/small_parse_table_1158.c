/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1158.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5790(t_small_parse_table_array *v)
{
	v->a[115800] = anon_sym_DOLLAR_LBRACE;
	v->a[115801] = actions(1159);
	v->a[115802] = 1;
	v->a[115803] = anon_sym_DOLLAR_LPAREN;
	v->a[115804] = actions(1163);
	v->a[115805] = 1;
	v->a[115806] = anon_sym_DOLLAR_BQUOTE;
	v->a[115807] = actions(1169);
	v->a[115808] = 1;
	v->a[115809] = sym__brace_start;
	v->a[115810] = actions(1187);
	v->a[115811] = 1;
	v->a[115812] = sym_word;
	v->a[115813] = actions(1189);
	v->a[115814] = 1;
	v->a[115815] = anon_sym_BANG;
	v->a[115816] = actions(1195);
	v->a[115817] = 1;
	v->a[115818] = anon_sym_TILDE;
	v->a[115819] = actions(1201);
	small_parse_table_5791(v);
}

void	small_parse_table_5791(t_small_parse_table_array *v)
{
	v->a[115820] = 1;
	v->a[115821] = sym_test_operator;
	v->a[115822] = actions(3060);
	v->a[115823] = 1;
	v->a[115824] = anon_sym_BQUOTE;
	v->a[115825] = actions(5779);
	v->a[115826] = 1;
	v->a[115827] = sym__special_character;
	v->a[115828] = state(2717);
	v->a[115829] = 1;
	v->a[115830] = aux_sym__literal_repeat1;
	v->a[115831] = state(3007);
	v->a[115832] = 1;
	v->a[115833] = sym__expression;
	v->a[115834] = actions(1129);
	v->a[115835] = 2;
	v->a[115836] = anon_sym_LPAREN_LPAREN;
	v->a[115837] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115838] = actions(1165);
	v->a[115839] = 2;
	small_parse_table_5792(v);
}

void	small_parse_table_5792(t_small_parse_table_array *v)
{
	v->a[115840] = anon_sym_LT_LPAREN;
	v->a[115841] = anon_sym_GT_LPAREN;
	v->a[115842] = actions(1191);
	v->a[115843] = 2;
	v->a[115844] = anon_sym_PLUS_PLUS2;
	v->a[115845] = anon_sym_DASH_DASH2;
	v->a[115846] = actions(1193);
	v->a[115847] = 2;
	v->a[115848] = anon_sym_DASH2;
	v->a[115849] = anon_sym_PLUS2;
	v->a[115850] = actions(1199);
	v->a[115851] = 2;
	v->a[115852] = sym_raw_string;
	v->a[115853] = sym_ansi_c_string;
	v->a[115854] = state(2594);
	v->a[115855] = 6;
	v->a[115856] = sym_binary_expression;
	v->a[115857] = sym_ternary_expression;
	v->a[115858] = sym_unary_expression;
	v->a[115859] = sym_postfix_expression;
	small_parse_table_5793(v);
}

void	small_parse_table_5793(t_small_parse_table_array *v)
{
	v->a[115860] = sym_parenthesized_expression;
	v->a[115861] = sym_concatenation;
	v->a[115862] = state(2503);
	v->a[115863] = 9;
	v->a[115864] = sym_arithmetic_expansion;
	v->a[115865] = sym_brace_expression;
	v->a[115866] = sym_string;
	v->a[115867] = sym_translated_string;
	v->a[115868] = sym_number;
	v->a[115869] = sym_simple_expansion;
	v->a[115870] = sym_expansion;
	v->a[115871] = sym_command_substitution;
	v->a[115872] = sym_process_substitution;
	v->a[115873] = 26;
	v->a[115874] = actions(71);
	v->a[115875] = 1;
	v->a[115876] = sym_comment;
	v->a[115877] = actions(1127);
	v->a[115878] = 1;
	v->a[115879] = sym_word;
	small_parse_table_5794(v);
}

void	small_parse_table_5794(t_small_parse_table_array *v)
{
	v->a[115880] = actions(1131);
	v->a[115881] = 1;
	v->a[115882] = anon_sym_LPAREN;
	v->a[115883] = actions(1133);
	v->a[115884] = 1;
	v->a[115885] = anon_sym_BANG;
	v->a[115886] = actions(1139);
	v->a[115887] = 1;
	v->a[115888] = anon_sym_TILDE;
	v->a[115889] = actions(1141);
	v->a[115890] = 1;
	v->a[115891] = anon_sym_DOLLAR_LBRACK;
	v->a[115892] = actions(1145);
	v->a[115893] = 1;
	v->a[115894] = anon_sym_DOLLAR;
	v->a[115895] = actions(1147);
	v->a[115896] = 1;
	v->a[115897] = sym__special_character;
	v->a[115898] = actions(1149);
	v->a[115899] = 1;
	small_parse_table_5795(v);
}

/* EOF small_parse_table_1158.c */
