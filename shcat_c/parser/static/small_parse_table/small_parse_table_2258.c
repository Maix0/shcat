/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2258.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11290(t_small_parse_table_array *v)
{
	v->a[225800] = actions(3);
	v->a[225801] = 1;
	v->a[225802] = sym_comment;
	v->a[225803] = actions(8512);
	v->a[225804] = 1;
	v->a[225805] = anon_sym_DOLLAR_LBRACK;
	v->a[225806] = actions(8518);
	v->a[225807] = 1;
	v->a[225808] = anon_sym_DQUOTE;
	v->a[225809] = actions(8522);
	v->a[225810] = 1;
	v->a[225811] = aux_sym_number_token1;
	v->a[225812] = actions(8524);
	v->a[225813] = 1;
	v->a[225814] = aux_sym_number_token2;
	v->a[225815] = actions(8526);
	v->a[225816] = 1;
	v->a[225817] = anon_sym_DOLLAR_LBRACE;
	v->a[225818] = actions(8528);
	v->a[225819] = 1;
	small_parse_table_11291(v);
}

void	small_parse_table_11291(t_small_parse_table_array *v)
{
	v->a[225820] = anon_sym_DOLLAR_LPAREN;
	v->a[225821] = actions(8530);
	v->a[225822] = 1;
	v->a[225823] = anon_sym_BQUOTE;
	v->a[225824] = actions(8532);
	v->a[225825] = 1;
	v->a[225826] = anon_sym_DOLLAR_BQUOTE;
	v->a[225827] = actions(8542);
	v->a[225828] = 1;
	v->a[225829] = sym__brace_start;
	v->a[225830] = actions(10220);
	v->a[225831] = 1;
	v->a[225832] = sym_word;
	v->a[225833] = actions(10226);
	v->a[225834] = 1;
	v->a[225835] = sym__comment_word;
	v->a[225836] = actions(10738);
	v->a[225837] = 1;
	v->a[225838] = anon_sym_DOLLAR;
	v->a[225839] = actions(8508);
	small_parse_table_11292(v);
}

void	small_parse_table_11292(t_small_parse_table_array *v)
{
	v->a[225840] = 2;
	v->a[225841] = anon_sym_LPAREN_LPAREN;
	v->a[225842] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[225843] = actions(8534);
	v->a[225844] = 2;
	v->a[225845] = anon_sym_LT_LPAREN;
	v->a[225846] = anon_sym_GT_LPAREN;
	v->a[225847] = actions(10222);
	v->a[225848] = 2;
	v->a[225849] = sym_test_operator;
	v->a[225850] = sym__special_character;
	v->a[225851] = actions(10224);
	v->a[225852] = 3;
	v->a[225853] = sym__bare_dollar;
	v->a[225854] = sym_raw_string;
	v->a[225855] = sym_ansi_c_string;
	v->a[225856] = state(2514);
	v->a[225857] = 9;
	v->a[225858] = sym_arithmetic_expansion;
	v->a[225859] = sym_brace_expression;
	small_parse_table_11293(v);
}

void	small_parse_table_11293(t_small_parse_table_array *v)
{
	v->a[225860] = sym_string;
	v->a[225861] = sym_translated_string;
	v->a[225862] = sym_number;
	v->a[225863] = sym_simple_expansion;
	v->a[225864] = sym_expansion;
	v->a[225865] = sym_command_substitution;
	v->a[225866] = sym_process_substitution;
	v->a[225867] = 18;
	v->a[225868] = actions(3);
	v->a[225869] = 1;
	v->a[225870] = sym_comment;
	v->a[225871] = actions(47);
	v->a[225872] = 1;
	v->a[225873] = anon_sym_DOLLAR_LBRACK;
	v->a[225874] = actions(49);
	v->a[225875] = 1;
	v->a[225876] = anon_sym_DOLLAR;
	v->a[225877] = actions(53);
	v->a[225878] = 1;
	v->a[225879] = anon_sym_DQUOTE;
	small_parse_table_11294(v);
}

void	small_parse_table_11294(t_small_parse_table_array *v)
{
	v->a[225880] = actions(57);
	v->a[225881] = 1;
	v->a[225882] = aux_sym_number_token1;
	v->a[225883] = actions(59);
	v->a[225884] = 1;
	v->a[225885] = aux_sym_number_token2;
	v->a[225886] = actions(61);
	v->a[225887] = 1;
	v->a[225888] = anon_sym_DOLLAR_LBRACE;
	v->a[225889] = actions(63);
	v->a[225890] = 1;
	v->a[225891] = anon_sym_DOLLAR_LPAREN;
	v->a[225892] = actions(65);
	v->a[225893] = 1;
	v->a[225894] = anon_sym_BQUOTE;
	v->a[225895] = actions(67);
	v->a[225896] = 1;
	v->a[225897] = anon_sym_DOLLAR_BQUOTE;
	v->a[225898] = actions(79);
	v->a[225899] = 1;
	small_parse_table_11295(v);
}

/* EOF small_parse_table_2258.c */
