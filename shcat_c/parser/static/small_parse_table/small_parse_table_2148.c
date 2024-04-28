/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2148.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10740(t_small_parse_table_array *v)
{
	v->a[214800] = actions(8966);
	v->a[214801] = 1;
	v->a[214802] = anon_sym_DQUOTE;
	v->a[214803] = actions(8970);
	v->a[214804] = 1;
	v->a[214805] = anon_sym_DOLLAR_LBRACE;
	v->a[214806] = actions(8972);
	v->a[214807] = 1;
	v->a[214808] = anon_sym_BQUOTE;
	v->a[214809] = actions(8974);
	v->a[214810] = 1;
	v->a[214811] = anon_sym_DOLLAR_BQUOTE;
	v->a[214812] = actions(10246);
	v->a[214813] = 1;
	v->a[214814] = sym_word;
	v->a[214815] = actions(10248);
	v->a[214816] = 1;
	v->a[214817] = anon_sym_DOLLAR;
	v->a[214818] = actions(10254);
	v->a[214819] = 1;
	small_parse_table_10741(v);
}

void	small_parse_table_10741(t_small_parse_table_array *v)
{
	v->a[214820] = sym__comment_word;
	v->a[214821] = actions(8960);
	v->a[214822] = 2;
	v->a[214823] = anon_sym_LPAREN_LPAREN;
	v->a[214824] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[214825] = actions(8976);
	v->a[214826] = 2;
	v->a[214827] = anon_sym_LT_LPAREN;
	v->a[214828] = anon_sym_GT_LPAREN;
	v->a[214829] = actions(10250);
	v->a[214830] = 2;
	v->a[214831] = sym_test_operator;
	v->a[214832] = sym__special_character;
	v->a[214833] = actions(10252);
	v->a[214834] = 3;
	v->a[214835] = sym__bare_dollar;
	v->a[214836] = sym_raw_string;
	v->a[214837] = sym_ansi_c_string;
	v->a[214838] = state(1532);
	v->a[214839] = 9;
	small_parse_table_10742(v);
}

void	small_parse_table_10742(t_small_parse_table_array *v)
{
	v->a[214840] = sym_arithmetic_expansion;
	v->a[214841] = sym_brace_expression;
	v->a[214842] = sym_string;
	v->a[214843] = sym_translated_string;
	v->a[214844] = sym_number;
	v->a[214845] = sym_simple_expansion;
	v->a[214846] = sym_expansion;
	v->a[214847] = sym_command_substitution;
	v->a[214848] = sym_process_substitution;
	v->a[214849] = 18;
	v->a[214850] = actions(3);
	v->a[214851] = 1;
	v->a[214852] = sym_comment;
	v->a[214853] = actions(4502);
	v->a[214854] = 1;
	v->a[214855] = anon_sym_DOLLAR_LBRACK;
	v->a[214856] = actions(4504);
	v->a[214857] = 1;
	v->a[214858] = anon_sym_DOLLAR;
	v->a[214859] = actions(4508);
	small_parse_table_10743(v);
}

void	small_parse_table_10743(t_small_parse_table_array *v)
{
	v->a[214860] = 1;
	v->a[214861] = anon_sym_DQUOTE;
	v->a[214862] = actions(4512);
	v->a[214863] = 1;
	v->a[214864] = aux_sym_number_token1;
	v->a[214865] = actions(4514);
	v->a[214866] = 1;
	v->a[214867] = aux_sym_number_token2;
	v->a[214868] = actions(4516);
	v->a[214869] = 1;
	v->a[214870] = anon_sym_DOLLAR_LBRACE;
	v->a[214871] = actions(4518);
	v->a[214872] = 1;
	v->a[214873] = anon_sym_DOLLAR_LPAREN;
	v->a[214874] = actions(4520);
	v->a[214875] = 1;
	v->a[214876] = anon_sym_BQUOTE;
	v->a[214877] = actions(4522);
	v->a[214878] = 1;
	v->a[214879] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_10744(v);
}

void	small_parse_table_10744(t_small_parse_table_array *v)
{
	v->a[214880] = actions(4528);
	v->a[214881] = 1;
	v->a[214882] = sym__brace_start;
	v->a[214883] = actions(10256);
	v->a[214884] = 1;
	v->a[214885] = sym_word;
	v->a[214886] = actions(10262);
	v->a[214887] = 1;
	v->a[214888] = sym__comment_word;
	v->a[214889] = actions(4500);
	v->a[214890] = 2;
	v->a[214891] = anon_sym_LPAREN_LPAREN;
	v->a[214892] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[214893] = actions(4524);
	v->a[214894] = 2;
	v->a[214895] = anon_sym_LT_LPAREN;
	v->a[214896] = anon_sym_GT_LPAREN;
	v->a[214897] = actions(10258);
	v->a[214898] = 2;
	v->a[214899] = sym_test_operator;
	small_parse_table_10745(v);
}

/* EOF small_parse_table_2148.c */
