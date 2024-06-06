/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_898.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4490(t_small_parse_table_array *v)
{
	v->a[89800] = sym__arithmetic_parenthesized_expression;
	v->a[89801] = sym_string;
	v->a[89802] = sym_number;
	v->a[89803] = sym_simple_expansion;
	v->a[89804] = sym_expansion;
	v->a[89805] = sym_command_substitution;
	v->a[89806] = 21;
	v->a[89807] = actions(57);
	v->a[89808] = 1;
	v->a[89809] = sym_comment;
	v->a[89810] = actions(4584);
	v->a[89811] = 1;
	v->a[89812] = anon_sym_LPAREN;
	v->a[89813] = actions(4586);
	v->a[89814] = 1;
	v->a[89815] = anon_sym_BANG;
	v->a[89816] = actions(4592);
	v->a[89817] = 1;
	v->a[89818] = anon_sym_TILDE;
	v->a[89819] = actions(4594);
	small_parse_table_4491(v);
}

void	small_parse_table_4491(t_small_parse_table_array *v)
{
	v->a[89820] = 1;
	v->a[89821] = anon_sym_DOLLAR;
	v->a[89822] = actions(4596);
	v->a[89823] = 1;
	v->a[89824] = anon_sym_DQUOTE;
	v->a[89825] = actions(4598);
	v->a[89826] = 1;
	v->a[89827] = aux_sym_number_token1;
	v->a[89828] = actions(4600);
	v->a[89829] = 1;
	v->a[89830] = aux_sym_number_token2;
	v->a[89831] = actions(4602);
	v->a[89832] = 1;
	v->a[89833] = anon_sym_DOLLAR_LBRACE;
	v->a[89834] = actions(4604);
	v->a[89835] = 1;
	v->a[89836] = anon_sym_DOLLAR_LPAREN;
	v->a[89837] = actions(4606);
	v->a[89838] = 1;
	v->a[89839] = anon_sym_BQUOTE;
	small_parse_table_4492(v);
}

void	small_parse_table_4492(t_small_parse_table_array *v)
{
	v->a[89840] = actions(4608);
	v->a[89841] = 1;
	v->a[89842] = anon_sym_DOLLAR_BQUOTE;
	v->a[89843] = actions(4957);
	v->a[89844] = 1;
	v->a[89845] = aux_sym__simple_variable_name_token1;
	v->a[89846] = actions(4959);
	v->a[89847] = 1;
	v->a[89848] = sym_variable_name;
	v->a[89849] = state(1476);
	v->a[89850] = 1;
	v->a[89851] = sym__arithmetic_postfix_expression;
	v->a[89852] = state(1478);
	v->a[89853] = 1;
	v->a[89854] = sym__arithmetic_unary_expression;
	v->a[89855] = state(1490);
	v->a[89856] = 1;
	v->a[89857] = sym__arithmetic_ternary_expression;
	v->a[89858] = state(1511);
	v->a[89859] = 1;
	small_parse_table_4493(v);
}

void	small_parse_table_4493(t_small_parse_table_array *v)
{
	v->a[89860] = sym__arithmetic_binary_expression;
	v->a[89861] = actions(4588);
	v->a[89862] = 2;
	v->a[89863] = anon_sym_PLUS_PLUS;
	v->a[89864] = anon_sym_DASH_DASH;
	v->a[89865] = actions(4590);
	v->a[89866] = 2;
	v->a[89867] = anon_sym_DASH2;
	v->a[89868] = anon_sym_PLUS2;
	v->a[89869] = state(1493);
	v->a[89870] = 8;
	v->a[89871] = sym__arithmetic_expression;
	v->a[89872] = sym__arithmetic_literal;
	v->a[89873] = sym__arithmetic_parenthesized_expression;
	v->a[89874] = sym_string;
	v->a[89875] = sym_number;
	v->a[89876] = sym_simple_expansion;
	v->a[89877] = sym_expansion;
	v->a[89878] = sym_command_substitution;
	v->a[89879] = 21;
	small_parse_table_4494(v);
}

void	small_parse_table_4494(t_small_parse_table_array *v)
{
	v->a[89880] = actions(57);
	v->a[89881] = 1;
	v->a[89882] = sym_comment;
	v->a[89883] = actions(4584);
	v->a[89884] = 1;
	v->a[89885] = anon_sym_LPAREN;
	v->a[89886] = actions(4586);
	v->a[89887] = 1;
	v->a[89888] = anon_sym_BANG;
	v->a[89889] = actions(4592);
	v->a[89890] = 1;
	v->a[89891] = anon_sym_TILDE;
	v->a[89892] = actions(4594);
	v->a[89893] = 1;
	v->a[89894] = anon_sym_DOLLAR;
	v->a[89895] = actions(4596);
	v->a[89896] = 1;
	v->a[89897] = anon_sym_DQUOTE;
	v->a[89898] = actions(4598);
	v->a[89899] = 1;
	small_parse_table_4495(v);
}

/* EOF small_parse_table_898.c */
