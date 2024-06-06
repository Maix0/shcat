/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_838.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4190(t_small_parse_table_array *v)
{
	v->a[83800] = sym_test_operator;
	v->a[83801] = sym_raw_string;
	v->a[83802] = state(1881);
	v->a[83803] = 2;
	v->a[83804] = sym_case_item;
	v->a[83805] = aux_sym_case_statement_repeat1;
	v->a[83806] = state(3472);
	v->a[83807] = 2;
	v->a[83808] = sym_concatenation;
	v->a[83809] = sym__extglob_blob;
	v->a[83810] = state(3295);
	v->a[83811] = 7;
	v->a[83812] = sym_arithmetic_expansion;
	v->a[83813] = sym_brace_expression;
	v->a[83814] = sym_string;
	v->a[83815] = sym_number;
	v->a[83816] = sym_simple_expansion;
	v->a[83817] = sym_expansion;
	v->a[83818] = sym_command_substitution;
	v->a[83819] = 21;
	small_parse_table_4191(v);
}

void	small_parse_table_4191(t_small_parse_table_array *v)
{
	v->a[83820] = actions(57);
	v->a[83821] = 1;
	v->a[83822] = sym_comment;
	v->a[83823] = actions(4584);
	v->a[83824] = 1;
	v->a[83825] = anon_sym_LPAREN;
	v->a[83826] = actions(4586);
	v->a[83827] = 1;
	v->a[83828] = anon_sym_BANG;
	v->a[83829] = actions(4592);
	v->a[83830] = 1;
	v->a[83831] = anon_sym_TILDE;
	v->a[83832] = actions(4594);
	v->a[83833] = 1;
	v->a[83834] = anon_sym_DOLLAR;
	v->a[83835] = actions(4596);
	v->a[83836] = 1;
	v->a[83837] = anon_sym_DQUOTE;
	v->a[83838] = actions(4598);
	v->a[83839] = 1;
	small_parse_table_4192(v);
}

void	small_parse_table_4192(t_small_parse_table_array *v)
{
	v->a[83840] = aux_sym_number_token1;
	v->a[83841] = actions(4600);
	v->a[83842] = 1;
	v->a[83843] = aux_sym_number_token2;
	v->a[83844] = actions(4602);
	v->a[83845] = 1;
	v->a[83846] = anon_sym_DOLLAR_LBRACE;
	v->a[83847] = actions(4604);
	v->a[83848] = 1;
	v->a[83849] = anon_sym_DOLLAR_LPAREN;
	v->a[83850] = actions(4606);
	v->a[83851] = 1;
	v->a[83852] = anon_sym_BQUOTE;
	v->a[83853] = actions(4608);
	v->a[83854] = 1;
	v->a[83855] = anon_sym_DOLLAR_BQUOTE;
	v->a[83856] = actions(4689);
	v->a[83857] = 1;
	v->a[83858] = aux_sym__simple_variable_name_token1;
	v->a[83859] = actions(4691);
	small_parse_table_4193(v);
}

void	small_parse_table_4193(t_small_parse_table_array *v)
{
	v->a[83860] = 1;
	v->a[83861] = sym_variable_name;
	v->a[83862] = state(1476);
	v->a[83863] = 1;
	v->a[83864] = sym__arithmetic_postfix_expression;
	v->a[83865] = state(1478);
	v->a[83866] = 1;
	v->a[83867] = sym__arithmetic_unary_expression;
	v->a[83868] = state(1490);
	v->a[83869] = 1;
	v->a[83870] = sym__arithmetic_ternary_expression;
	v->a[83871] = state(1511);
	v->a[83872] = 1;
	v->a[83873] = sym__arithmetic_binary_expression;
	v->a[83874] = actions(4588);
	v->a[83875] = 2;
	v->a[83876] = anon_sym_PLUS_PLUS;
	v->a[83877] = anon_sym_DASH_DASH;
	v->a[83878] = actions(4590);
	v->a[83879] = 2;
	small_parse_table_4194(v);
}

void	small_parse_table_4194(t_small_parse_table_array *v)
{
	v->a[83880] = anon_sym_DASH2;
	v->a[83881] = anon_sym_PLUS2;
	v->a[83882] = state(1411);
	v->a[83883] = 8;
	v->a[83884] = sym__arithmetic_expression;
	v->a[83885] = sym__arithmetic_literal;
	v->a[83886] = sym__arithmetic_parenthesized_expression;
	v->a[83887] = sym_string;
	v->a[83888] = sym_number;
	v->a[83889] = sym_simple_expansion;
	v->a[83890] = sym_expansion;
	v->a[83891] = sym_command_substitution;
	v->a[83892] = 21;
	v->a[83893] = actions(57);
	v->a[83894] = 1;
	v->a[83895] = sym_comment;
	v->a[83896] = actions(4328);
	v->a[83897] = 1;
	v->a[83898] = sym_word;
	v->a[83899] = actions(4340);
	small_parse_table_4195(v);
}

/* EOF small_parse_table_838.c */
