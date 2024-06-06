/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_908.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4540(t_small_parse_table_array *v)
{
	v->a[90800] = actions(4584);
	v->a[90801] = 1;
	v->a[90802] = anon_sym_LPAREN;
	v->a[90803] = actions(4586);
	v->a[90804] = 1;
	v->a[90805] = anon_sym_BANG;
	v->a[90806] = actions(4592);
	v->a[90807] = 1;
	v->a[90808] = anon_sym_TILDE;
	v->a[90809] = actions(4594);
	v->a[90810] = 1;
	v->a[90811] = anon_sym_DOLLAR;
	v->a[90812] = actions(4596);
	v->a[90813] = 1;
	v->a[90814] = anon_sym_DQUOTE;
	v->a[90815] = actions(4598);
	v->a[90816] = 1;
	v->a[90817] = aux_sym_number_token1;
	v->a[90818] = actions(4600);
	v->a[90819] = 1;
	small_parse_table_4541(v);
}

void	small_parse_table_4541(t_small_parse_table_array *v)
{
	v->a[90820] = aux_sym_number_token2;
	v->a[90821] = actions(4602);
	v->a[90822] = 1;
	v->a[90823] = anon_sym_DOLLAR_LBRACE;
	v->a[90824] = actions(4604);
	v->a[90825] = 1;
	v->a[90826] = anon_sym_DOLLAR_LPAREN;
	v->a[90827] = actions(4606);
	v->a[90828] = 1;
	v->a[90829] = anon_sym_BQUOTE;
	v->a[90830] = actions(4608);
	v->a[90831] = 1;
	v->a[90832] = anon_sym_DOLLAR_BQUOTE;
	v->a[90833] = actions(5009);
	v->a[90834] = 1;
	v->a[90835] = aux_sym__simple_variable_name_token1;
	v->a[90836] = actions(5011);
	v->a[90837] = 1;
	v->a[90838] = sym_variable_name;
	v->a[90839] = state(1476);
	small_parse_table_4542(v);
}

void	small_parse_table_4542(t_small_parse_table_array *v)
{
	v->a[90840] = 1;
	v->a[90841] = sym__arithmetic_postfix_expression;
	v->a[90842] = state(1478);
	v->a[90843] = 1;
	v->a[90844] = sym__arithmetic_unary_expression;
	v->a[90845] = state(1490);
	v->a[90846] = 1;
	v->a[90847] = sym__arithmetic_ternary_expression;
	v->a[90848] = state(1511);
	v->a[90849] = 1;
	v->a[90850] = sym__arithmetic_binary_expression;
	v->a[90851] = actions(4588);
	v->a[90852] = 2;
	v->a[90853] = anon_sym_PLUS_PLUS;
	v->a[90854] = anon_sym_DASH_DASH;
	v->a[90855] = actions(4590);
	v->a[90856] = 2;
	v->a[90857] = anon_sym_DASH2;
	v->a[90858] = anon_sym_PLUS2;
	v->a[90859] = state(1506);
	small_parse_table_4543(v);
}

void	small_parse_table_4543(t_small_parse_table_array *v)
{
	v->a[90860] = 8;
	v->a[90861] = sym__arithmetic_expression;
	v->a[90862] = sym__arithmetic_literal;
	v->a[90863] = sym__arithmetic_parenthesized_expression;
	v->a[90864] = sym_string;
	v->a[90865] = sym_number;
	v->a[90866] = sym_simple_expansion;
	v->a[90867] = sym_expansion;
	v->a[90868] = sym_command_substitution;
	v->a[90869] = 19;
	v->a[90870] = actions(3);
	v->a[90871] = 1;
	v->a[90872] = sym_comment;
	v->a[90873] = actions(1287);
	v->a[90874] = 1;
	v->a[90875] = aux_sym_heredoc_redirect_token1;
	v->a[90876] = actions(5016);
	v->a[90877] = 1;
	v->a[90878] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90879] = actions(5019);
	small_parse_table_4544(v);
}

void	small_parse_table_4544(t_small_parse_table_array *v)
{
	v->a[90880] = 1;
	v->a[90881] = anon_sym_DOLLAR;
	v->a[90882] = actions(5022);
	v->a[90883] = 1;
	v->a[90884] = sym__special_character;
	v->a[90885] = actions(5025);
	v->a[90886] = 1;
	v->a[90887] = anon_sym_DQUOTE;
	v->a[90888] = actions(5028);
	v->a[90889] = 1;
	v->a[90890] = aux_sym_number_token1;
	v->a[90891] = actions(5031);
	v->a[90892] = 1;
	v->a[90893] = aux_sym_number_token2;
	v->a[90894] = actions(5034);
	v->a[90895] = 1;
	v->a[90896] = anon_sym_DOLLAR_LBRACE;
	v->a[90897] = actions(5037);
	v->a[90898] = 1;
	v->a[90899] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4545(v);
}

/* EOF small_parse_table_908.c */
