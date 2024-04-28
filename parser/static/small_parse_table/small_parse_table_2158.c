/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2158.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10790(t_small_parse_table_array *v)
{
	v->a[215800] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[215801] = actions(5134);
	v->a[215802] = 2;
	v->a[215803] = anon_sym_LT_LPAREN;
	v->a[215804] = anon_sym_GT_LPAREN;
	v->a[215805] = actions(10178);
	v->a[215806] = 2;
	v->a[215807] = sym_test_operator;
	v->a[215808] = sym__special_character;
	v->a[215809] = actions(10180);
	v->a[215810] = 3;
	v->a[215811] = sym__bare_dollar;
	v->a[215812] = sym_raw_string;
	v->a[215813] = sym_ansi_c_string;
	v->a[215814] = state(2842);
	v->a[215815] = 9;
	v->a[215816] = sym_arithmetic_expansion;
	v->a[215817] = sym_brace_expression;
	v->a[215818] = sym_string;
	v->a[215819] = sym_translated_string;
	small_parse_table_10791(v);
}

void	small_parse_table_10791(t_small_parse_table_array *v)
{
	v->a[215820] = sym_number;
	v->a[215821] = sym_simple_expansion;
	v->a[215822] = sym_expansion;
	v->a[215823] = sym_command_substitution;
	v->a[215824] = sym_process_substitution;
	v->a[215825] = 18;
	v->a[215826] = actions(3);
	v->a[215827] = 1;
	v->a[215828] = sym_comment;
	v->a[215829] = actions(6494);
	v->a[215830] = 1;
	v->a[215831] = aux_sym_number_token1;
	v->a[215832] = actions(6496);
	v->a[215833] = 1;
	v->a[215834] = aux_sym_number_token2;
	v->a[215835] = actions(6500);
	v->a[215836] = 1;
	v->a[215837] = anon_sym_DOLLAR_LPAREN;
	v->a[215838] = actions(6512);
	v->a[215839] = 1;
	small_parse_table_10792(v);
}

void	small_parse_table_10792(t_small_parse_table_array *v)
{
	v->a[215840] = sym__brace_start;
	v->a[215841] = actions(7226);
	v->a[215842] = 1;
	v->a[215843] = anon_sym_DOLLAR_LBRACK;
	v->a[215844] = actions(7230);
	v->a[215845] = 1;
	v->a[215846] = anon_sym_DQUOTE;
	v->a[215847] = actions(7234);
	v->a[215848] = 1;
	v->a[215849] = anon_sym_DOLLAR_LBRACE;
	v->a[215850] = actions(7236);
	v->a[215851] = 1;
	v->a[215852] = anon_sym_BQUOTE;
	v->a[215853] = actions(7238);
	v->a[215854] = 1;
	v->a[215855] = anon_sym_DOLLAR_BQUOTE;
	v->a[215856] = actions(10206);
	v->a[215857] = 1;
	v->a[215858] = sym_word;
	v->a[215859] = actions(10212);
	small_parse_table_10793(v);
}

void	small_parse_table_10793(t_small_parse_table_array *v)
{
	v->a[215860] = 1;
	v->a[215861] = sym__comment_word;
	v->a[215862] = actions(10316);
	v->a[215863] = 1;
	v->a[215864] = anon_sym_DOLLAR;
	v->a[215865] = actions(7224);
	v->a[215866] = 2;
	v->a[215867] = anon_sym_LPAREN_LPAREN;
	v->a[215868] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[215869] = actions(7240);
	v->a[215870] = 2;
	v->a[215871] = anon_sym_LT_LPAREN;
	v->a[215872] = anon_sym_GT_LPAREN;
	v->a[215873] = actions(10208);
	v->a[215874] = 2;
	v->a[215875] = sym_test_operator;
	v->a[215876] = sym__special_character;
	v->a[215877] = actions(10210);
	v->a[215878] = 3;
	v->a[215879] = sym__bare_dollar;
	small_parse_table_10794(v);
}

void	small_parse_table_10794(t_small_parse_table_array *v)
{
	v->a[215880] = sym_raw_string;
	v->a[215881] = sym_ansi_c_string;
	v->a[215882] = state(6494);
	v->a[215883] = 9;
	v->a[215884] = sym_arithmetic_expansion;
	v->a[215885] = sym_brace_expression;
	v->a[215886] = sym_string;
	v->a[215887] = sym_translated_string;
	v->a[215888] = sym_number;
	v->a[215889] = sym_simple_expansion;
	v->a[215890] = sym_expansion;
	v->a[215891] = sym_command_substitution;
	v->a[215892] = sym_process_substitution;
	v->a[215893] = 18;
	v->a[215894] = actions(3);
	v->a[215895] = 1;
	v->a[215896] = sym_comment;
	v->a[215897] = actions(5405);
	v->a[215898] = 1;
	v->a[215899] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_10795(v);
}

/* EOF small_parse_table_2158.c */
