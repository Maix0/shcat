/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_878.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4390(t_small_parse_table_array *v)
{
	v->a[87800] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87801] = actions(4552);
	v->a[87802] = 1;
	v->a[87803] = sym__special_character;
	v->a[87804] = actions(4554);
	v->a[87805] = 1;
	v->a[87806] = anon_sym_DQUOTE;
	v->a[87807] = actions(4556);
	v->a[87808] = 1;
	v->a[87809] = anon_sym_DOLLAR_LBRACE;
	v->a[87810] = actions(4558);
	v->a[87811] = 1;
	v->a[87812] = anon_sym_BQUOTE;
	v->a[87813] = actions(4560);
	v->a[87814] = 1;
	v->a[87815] = anon_sym_DOLLAR_BQUOTE;
	v->a[87816] = state(3393);
	v->a[87817] = 1;
	v->a[87818] = aux_sym__literal_repeat1;
	v->a[87819] = state(3952);
	small_parse_table_4391(v);
}

void	small_parse_table_4391(t_small_parse_table_array *v)
{
	v->a[87820] = 1;
	v->a[87821] = sym_last_case_item;
	v->a[87822] = actions(4358);
	v->a[87823] = 2;
	v->a[87824] = sym_test_operator;
	v->a[87825] = sym_raw_string;
	v->a[87826] = state(1881);
	v->a[87827] = 2;
	v->a[87828] = sym_case_item;
	v->a[87829] = aux_sym_case_statement_repeat1;
	v->a[87830] = state(3472);
	v->a[87831] = 2;
	v->a[87832] = sym_concatenation;
	v->a[87833] = sym__extglob_blob;
	v->a[87834] = state(3295);
	v->a[87835] = 7;
	v->a[87836] = sym_arithmetic_expansion;
	v->a[87837] = sym_brace_expression;
	v->a[87838] = sym_string;
	v->a[87839] = sym_number;
	small_parse_table_4392(v);
}

void	small_parse_table_4392(t_small_parse_table_array *v)
{
	v->a[87840] = sym_simple_expansion;
	v->a[87841] = sym_expansion;
	v->a[87842] = sym_command_substitution;
	v->a[87843] = 21;
	v->a[87844] = actions(57);
	v->a[87845] = 1;
	v->a[87846] = sym_comment;
	v->a[87847] = actions(4584);
	v->a[87848] = 1;
	v->a[87849] = anon_sym_LPAREN;
	v->a[87850] = actions(4586);
	v->a[87851] = 1;
	v->a[87852] = anon_sym_BANG;
	v->a[87853] = actions(4592);
	v->a[87854] = 1;
	v->a[87855] = anon_sym_TILDE;
	v->a[87856] = actions(4594);
	v->a[87857] = 1;
	v->a[87858] = anon_sym_DOLLAR;
	v->a[87859] = actions(4596);
	small_parse_table_4393(v);
}

void	small_parse_table_4393(t_small_parse_table_array *v)
{
	v->a[87860] = 1;
	v->a[87861] = anon_sym_DQUOTE;
	v->a[87862] = actions(4598);
	v->a[87863] = 1;
	v->a[87864] = aux_sym_number_token1;
	v->a[87865] = actions(4600);
	v->a[87866] = 1;
	v->a[87867] = aux_sym_number_token2;
	v->a[87868] = actions(4602);
	v->a[87869] = 1;
	v->a[87870] = anon_sym_DOLLAR_LBRACE;
	v->a[87871] = actions(4604);
	v->a[87872] = 1;
	v->a[87873] = anon_sym_DOLLAR_LPAREN;
	v->a[87874] = actions(4606);
	v->a[87875] = 1;
	v->a[87876] = anon_sym_BQUOTE;
	v->a[87877] = actions(4608);
	v->a[87878] = 1;
	v->a[87879] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_4394(v);
}

void	small_parse_table_4394(t_small_parse_table_array *v)
{
	v->a[87880] = actions(4869);
	v->a[87881] = 1;
	v->a[87882] = aux_sym__simple_variable_name_token1;
	v->a[87883] = actions(4871);
	v->a[87884] = 1;
	v->a[87885] = sym_variable_name;
	v->a[87886] = state(1476);
	v->a[87887] = 1;
	v->a[87888] = sym__arithmetic_postfix_expression;
	v->a[87889] = state(1478);
	v->a[87890] = 1;
	v->a[87891] = sym__arithmetic_unary_expression;
	v->a[87892] = state(1490);
	v->a[87893] = 1;
	v->a[87894] = sym__arithmetic_ternary_expression;
	v->a[87895] = state(1511);
	v->a[87896] = 1;
	v->a[87897] = sym__arithmetic_binary_expression;
	v->a[87898] = actions(4588);
	v->a[87899] = 2;
	small_parse_table_4395(v);
}

/* EOF small_parse_table_878.c */
