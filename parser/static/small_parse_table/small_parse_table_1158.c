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
	v->a[115800] = sym_word;
	v->a[115801] = actions(6687);
	v->a[115802] = 1;
	v->a[115803] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115804] = actions(6691);
	v->a[115805] = 1;
	v->a[115806] = sym__special_character;
	v->a[115807] = actions(6693);
	v->a[115808] = 1;
	v->a[115809] = anon_sym_DQUOTE;
	v->a[115810] = actions(6697);
	v->a[115811] = 1;
	v->a[115812] = anon_sym_DOLLAR_LBRACE;
	v->a[115813] = actions(6699);
	v->a[115814] = 1;
	v->a[115815] = anon_sym_BQUOTE;
	v->a[115816] = actions(6701);
	v->a[115817] = 1;
	v->a[115818] = anon_sym_DOLLAR_BQUOTE;
	v->a[115819] = actions(6703);
	small_parse_table_5791(v);
}

void	small_parse_table_5791(t_small_parse_table_array *v)
{
	v->a[115820] = 1;
	v->a[115821] = sym__comment_word;
	v->a[115822] = actions(6695);
	v->a[115823] = 3;
	v->a[115824] = sym_test_operator;
	v->a[115825] = sym__bare_dollar;
	v->a[115826] = sym_raw_string;
	v->a[115827] = state(866);
	v->a[115828] = 7;
	v->a[115829] = sym_arithmetic_expansion;
	v->a[115830] = sym_brace_expression;
	v->a[115831] = sym_string;
	v->a[115832] = sym_number;
	v->a[115833] = sym_simple_expansion;
	v->a[115834] = sym_expansion;
	v->a[115835] = sym_command_substitution;
	v->a[115836] = 16;
	v->a[115837] = actions(3);
	v->a[115838] = 1;
	v->a[115839] = sym_comment;
	small_parse_table_5792(v);
}

void	small_parse_table_5792(t_small_parse_table_array *v)
{
	v->a[115840] = actions(3078);
	v->a[115841] = 1;
	v->a[115842] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115843] = actions(3084);
	v->a[115844] = 1;
	v->a[115845] = anon_sym_DQUOTE;
	v->a[115846] = actions(3088);
	v->a[115847] = 1;
	v->a[115848] = aux_sym_number_token1;
	v->a[115849] = actions(3090);
	v->a[115850] = 1;
	v->a[115851] = aux_sym_number_token2;
	v->a[115852] = actions(3092);
	v->a[115853] = 1;
	v->a[115854] = anon_sym_DOLLAR_LBRACE;
	v->a[115855] = actions(3094);
	v->a[115856] = 1;
	v->a[115857] = anon_sym_DOLLAR_LPAREN;
	v->a[115858] = actions(3096);
	v->a[115859] = 1;
	small_parse_table_5793(v);
}

void	small_parse_table_5793(t_small_parse_table_array *v)
{
	v->a[115860] = anon_sym_BQUOTE;
	v->a[115861] = actions(3098);
	v->a[115862] = 1;
	v->a[115863] = anon_sym_DOLLAR_BQUOTE;
	v->a[115864] = actions(3102);
	v->a[115865] = 1;
	v->a[115866] = sym__brace_start;
	v->a[115867] = actions(6597);
	v->a[115868] = 1;
	v->a[115869] = sym_word;
	v->a[115870] = actions(6599);
	v->a[115871] = 1;
	v->a[115872] = sym__special_character;
	v->a[115873] = actions(6603);
	v->a[115874] = 1;
	v->a[115875] = sym__comment_word;
	v->a[115876] = actions(6787);
	v->a[115877] = 1;
	v->a[115878] = anon_sym_DOLLAR;
	v->a[115879] = actions(6601);
	small_parse_table_5794(v);
}

void	small_parse_table_5794(t_small_parse_table_array *v)
{
	v->a[115880] = 3;
	v->a[115881] = sym_test_operator;
	v->a[115882] = sym__bare_dollar;
	v->a[115883] = sym_raw_string;
	v->a[115884] = state(1527);
	v->a[115885] = 7;
	v->a[115886] = sym_arithmetic_expansion;
	v->a[115887] = sym_brace_expression;
	v->a[115888] = sym_string;
	v->a[115889] = sym_number;
	v->a[115890] = sym_simple_expansion;
	v->a[115891] = sym_expansion;
	v->a[115892] = sym_command_substitution;
	v->a[115893] = 16;
	v->a[115894] = actions(3);
	v->a[115895] = 1;
	v->a[115896] = sym_comment;
	v->a[115897] = actions(1745);
	v->a[115898] = 1;
	v->a[115899] = aux_sym_number_token1;
	small_parse_table_5795(v);
}

/* EOF small_parse_table_1158.c */
