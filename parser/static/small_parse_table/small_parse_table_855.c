/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_855.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4275(t_small_parse_table_array *v)
{
	v->a[85500] = actions(4608);
	v->a[85501] = 1;
	v->a[85502] = anon_sym_DOLLAR_BQUOTE;
	v->a[85503] = actions(4756);
	v->a[85504] = 1;
	v->a[85505] = aux_sym__simple_variable_name_token1;
	v->a[85506] = actions(4758);
	v->a[85507] = 1;
	v->a[85508] = sym_variable_name;
	v->a[85509] = state(1476);
	v->a[85510] = 1;
	v->a[85511] = sym__arithmetic_postfix_expression;
	v->a[85512] = state(1478);
	v->a[85513] = 1;
	v->a[85514] = sym__arithmetic_unary_expression;
	v->a[85515] = state(1490);
	v->a[85516] = 1;
	v->a[85517] = sym__arithmetic_ternary_expression;
	v->a[85518] = state(1511);
	v->a[85519] = 1;
	small_parse_table_4276(v);
}

void	small_parse_table_4276(t_small_parse_table_array *v)
{
	v->a[85520] = sym__arithmetic_binary_expression;
	v->a[85521] = actions(4588);
	v->a[85522] = 2;
	v->a[85523] = anon_sym_PLUS_PLUS;
	v->a[85524] = anon_sym_DASH_DASH;
	v->a[85525] = actions(4590);
	v->a[85526] = 2;
	v->a[85527] = anon_sym_DASH2;
	v->a[85528] = anon_sym_PLUS2;
	v->a[85529] = state(1436);
	v->a[85530] = 8;
	v->a[85531] = sym__arithmetic_expression;
	v->a[85532] = sym__arithmetic_literal;
	v->a[85533] = sym__arithmetic_parenthesized_expression;
	v->a[85534] = sym_string;
	v->a[85535] = sym_number;
	v->a[85536] = sym_simple_expansion;
	v->a[85537] = sym_expansion;
	v->a[85538] = sym_command_substitution;
	v->a[85539] = 21;
	small_parse_table_4277(v);
}

void	small_parse_table_4277(t_small_parse_table_array *v)
{
	v->a[85540] = actions(57);
	v->a[85541] = 1;
	v->a[85542] = sym_comment;
	v->a[85543] = actions(4584);
	v->a[85544] = 1;
	v->a[85545] = anon_sym_LPAREN;
	v->a[85546] = actions(4586);
	v->a[85547] = 1;
	v->a[85548] = anon_sym_BANG;
	v->a[85549] = actions(4592);
	v->a[85550] = 1;
	v->a[85551] = anon_sym_TILDE;
	v->a[85552] = actions(4594);
	v->a[85553] = 1;
	v->a[85554] = anon_sym_DOLLAR;
	v->a[85555] = actions(4596);
	v->a[85556] = 1;
	v->a[85557] = anon_sym_DQUOTE;
	v->a[85558] = actions(4598);
	v->a[85559] = 1;
	small_parse_table_4278(v);
}

void	small_parse_table_4278(t_small_parse_table_array *v)
{
	v->a[85560] = aux_sym_number_token1;
	v->a[85561] = actions(4600);
	v->a[85562] = 1;
	v->a[85563] = aux_sym_number_token2;
	v->a[85564] = actions(4602);
	v->a[85565] = 1;
	v->a[85566] = anon_sym_DOLLAR_LBRACE;
	v->a[85567] = actions(4604);
	v->a[85568] = 1;
	v->a[85569] = anon_sym_DOLLAR_LPAREN;
	v->a[85570] = actions(4606);
	v->a[85571] = 1;
	v->a[85572] = anon_sym_BQUOTE;
	v->a[85573] = actions(4608);
	v->a[85574] = 1;
	v->a[85575] = anon_sym_DOLLAR_BQUOTE;
	v->a[85576] = actions(4760);
	v->a[85577] = 1;
	v->a[85578] = aux_sym__simple_variable_name_token1;
	v->a[85579] = actions(4762);
	small_parse_table_4279(v);
}

void	small_parse_table_4279(t_small_parse_table_array *v)
{
	v->a[85580] = 1;
	v->a[85581] = sym_variable_name;
	v->a[85582] = state(1476);
	v->a[85583] = 1;
	v->a[85584] = sym__arithmetic_postfix_expression;
	v->a[85585] = state(1478);
	v->a[85586] = 1;
	v->a[85587] = sym__arithmetic_unary_expression;
	v->a[85588] = state(1490);
	v->a[85589] = 1;
	v->a[85590] = sym__arithmetic_ternary_expression;
	v->a[85591] = state(1511);
	v->a[85592] = 1;
	v->a[85593] = sym__arithmetic_binary_expression;
	v->a[85594] = actions(4588);
	v->a[85595] = 2;
	v->a[85596] = anon_sym_PLUS_PLUS;
	v->a[85597] = anon_sym_DASH_DASH;
	v->a[85598] = actions(4590);
	v->a[85599] = 2;
	small_parse_table_4280(v);
}

/* EOF small_parse_table_855.c */
