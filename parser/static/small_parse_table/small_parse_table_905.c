/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_905.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4525(t_small_parse_table_array *v)
{
	v->a[90500] = sym_number;
	v->a[90501] = sym_simple_expansion;
	v->a[90502] = sym_expansion;
	v->a[90503] = sym_command_substitution;
	v->a[90504] = 21;
	v->a[90505] = actions(57);
	v->a[90506] = 1;
	v->a[90507] = sym_comment;
	v->a[90508] = actions(4584);
	v->a[90509] = 1;
	v->a[90510] = anon_sym_LPAREN;
	v->a[90511] = actions(4586);
	v->a[90512] = 1;
	v->a[90513] = anon_sym_BANG;
	v->a[90514] = actions(4592);
	v->a[90515] = 1;
	v->a[90516] = anon_sym_TILDE;
	v->a[90517] = actions(4594);
	v->a[90518] = 1;
	v->a[90519] = anon_sym_DOLLAR;
	small_parse_table_4526(v);
}

void	small_parse_table_4526(t_small_parse_table_array *v)
{
	v->a[90520] = actions(4596);
	v->a[90521] = 1;
	v->a[90522] = anon_sym_DQUOTE;
	v->a[90523] = actions(4598);
	v->a[90524] = 1;
	v->a[90525] = aux_sym_number_token1;
	v->a[90526] = actions(4600);
	v->a[90527] = 1;
	v->a[90528] = aux_sym_number_token2;
	v->a[90529] = actions(4602);
	v->a[90530] = 1;
	v->a[90531] = anon_sym_DOLLAR_LBRACE;
	v->a[90532] = actions(4604);
	v->a[90533] = 1;
	v->a[90534] = anon_sym_DOLLAR_LPAREN;
	v->a[90535] = actions(4606);
	v->a[90536] = 1;
	v->a[90537] = anon_sym_BQUOTE;
	v->a[90538] = actions(4608);
	v->a[90539] = 1;
	small_parse_table_4527(v);
}

void	small_parse_table_4527(t_small_parse_table_array *v)
{
	v->a[90540] = anon_sym_DOLLAR_BQUOTE;
	v->a[90541] = actions(4993);
	v->a[90542] = 1;
	v->a[90543] = aux_sym__simple_variable_name_token1;
	v->a[90544] = actions(4995);
	v->a[90545] = 1;
	v->a[90546] = sym_variable_name;
	v->a[90547] = state(1476);
	v->a[90548] = 1;
	v->a[90549] = sym__arithmetic_postfix_expression;
	v->a[90550] = state(1478);
	v->a[90551] = 1;
	v->a[90552] = sym__arithmetic_unary_expression;
	v->a[90553] = state(1490);
	v->a[90554] = 1;
	v->a[90555] = sym__arithmetic_ternary_expression;
	v->a[90556] = state(1511);
	v->a[90557] = 1;
	v->a[90558] = sym__arithmetic_binary_expression;
	v->a[90559] = actions(4588);
	small_parse_table_4528(v);
}

void	small_parse_table_4528(t_small_parse_table_array *v)
{
	v->a[90560] = 2;
	v->a[90561] = anon_sym_PLUS_PLUS;
	v->a[90562] = anon_sym_DASH_DASH;
	v->a[90563] = actions(4590);
	v->a[90564] = 2;
	v->a[90565] = anon_sym_DASH2;
	v->a[90566] = anon_sym_PLUS2;
	v->a[90567] = state(1418);
	v->a[90568] = 8;
	v->a[90569] = sym__arithmetic_expression;
	v->a[90570] = sym__arithmetic_literal;
	v->a[90571] = sym__arithmetic_parenthesized_expression;
	v->a[90572] = sym_string;
	v->a[90573] = sym_number;
	v->a[90574] = sym_simple_expansion;
	v->a[90575] = sym_expansion;
	v->a[90576] = sym_command_substitution;
	v->a[90577] = 21;
	v->a[90578] = actions(57);
	v->a[90579] = 1;
	small_parse_table_4529(v);
}

void	small_parse_table_4529(t_small_parse_table_array *v)
{
	v->a[90580] = sym_comment;
	v->a[90581] = actions(4584);
	v->a[90582] = 1;
	v->a[90583] = anon_sym_LPAREN;
	v->a[90584] = actions(4586);
	v->a[90585] = 1;
	v->a[90586] = anon_sym_BANG;
	v->a[90587] = actions(4592);
	v->a[90588] = 1;
	v->a[90589] = anon_sym_TILDE;
	v->a[90590] = actions(4594);
	v->a[90591] = 1;
	v->a[90592] = anon_sym_DOLLAR;
	v->a[90593] = actions(4596);
	v->a[90594] = 1;
	v->a[90595] = anon_sym_DQUOTE;
	v->a[90596] = actions(4598);
	v->a[90597] = 1;
	v->a[90598] = aux_sym_number_token1;
	v->a[90599] = actions(4600);
	small_parse_table_4530(v);
}

/* EOF small_parse_table_905.c */
