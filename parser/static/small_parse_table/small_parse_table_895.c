/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_895.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4475(t_small_parse_table_array *v)
{
	v->a[89500] = actions(4590);
	v->a[89501] = 2;
	v->a[89502] = anon_sym_DASH2;
	v->a[89503] = anon_sym_PLUS2;
	v->a[89504] = state(1384);
	v->a[89505] = 8;
	v->a[89506] = sym__arithmetic_expression;
	v->a[89507] = sym__arithmetic_literal;
	v->a[89508] = sym__arithmetic_parenthesized_expression;
	v->a[89509] = sym_string;
	v->a[89510] = sym_number;
	v->a[89511] = sym_simple_expansion;
	v->a[89512] = sym_expansion;
	v->a[89513] = sym_command_substitution;
	v->a[89514] = 21;
	v->a[89515] = actions(57);
	v->a[89516] = 1;
	v->a[89517] = sym_comment;
	v->a[89518] = actions(4584);
	v->a[89519] = 1;
	small_parse_table_4476(v);
}

void	small_parse_table_4476(t_small_parse_table_array *v)
{
	v->a[89520] = anon_sym_LPAREN;
	v->a[89521] = actions(4586);
	v->a[89522] = 1;
	v->a[89523] = anon_sym_BANG;
	v->a[89524] = actions(4592);
	v->a[89525] = 1;
	v->a[89526] = anon_sym_TILDE;
	v->a[89527] = actions(4594);
	v->a[89528] = 1;
	v->a[89529] = anon_sym_DOLLAR;
	v->a[89530] = actions(4596);
	v->a[89531] = 1;
	v->a[89532] = anon_sym_DQUOTE;
	v->a[89533] = actions(4598);
	v->a[89534] = 1;
	v->a[89535] = aux_sym_number_token1;
	v->a[89536] = actions(4600);
	v->a[89537] = 1;
	v->a[89538] = aux_sym_number_token2;
	v->a[89539] = actions(4602);
	small_parse_table_4477(v);
}

void	small_parse_table_4477(t_small_parse_table_array *v)
{
	v->a[89540] = 1;
	v->a[89541] = anon_sym_DOLLAR_LBRACE;
	v->a[89542] = actions(4604);
	v->a[89543] = 1;
	v->a[89544] = anon_sym_DOLLAR_LPAREN;
	v->a[89545] = actions(4606);
	v->a[89546] = 1;
	v->a[89547] = anon_sym_BQUOTE;
	v->a[89548] = actions(4608);
	v->a[89549] = 1;
	v->a[89550] = anon_sym_DOLLAR_BQUOTE;
	v->a[89551] = actions(4941);
	v->a[89552] = 1;
	v->a[89553] = aux_sym__simple_variable_name_token1;
	v->a[89554] = actions(4943);
	v->a[89555] = 1;
	v->a[89556] = sym_variable_name;
	v->a[89557] = state(1476);
	v->a[89558] = 1;
	v->a[89559] = sym__arithmetic_postfix_expression;
	small_parse_table_4478(v);
}

void	small_parse_table_4478(t_small_parse_table_array *v)
{
	v->a[89560] = state(1478);
	v->a[89561] = 1;
	v->a[89562] = sym__arithmetic_unary_expression;
	v->a[89563] = state(1490);
	v->a[89564] = 1;
	v->a[89565] = sym__arithmetic_ternary_expression;
	v->a[89566] = state(1511);
	v->a[89567] = 1;
	v->a[89568] = sym__arithmetic_binary_expression;
	v->a[89569] = actions(4588);
	v->a[89570] = 2;
	v->a[89571] = anon_sym_PLUS_PLUS;
	v->a[89572] = anon_sym_DASH_DASH;
	v->a[89573] = actions(4590);
	v->a[89574] = 2;
	v->a[89575] = anon_sym_DASH2;
	v->a[89576] = anon_sym_PLUS2;
	v->a[89577] = state(1392);
	v->a[89578] = 8;
	v->a[89579] = sym__arithmetic_expression;
	small_parse_table_4479(v);
}

void	small_parse_table_4479(t_small_parse_table_array *v)
{
	v->a[89580] = sym__arithmetic_literal;
	v->a[89581] = sym__arithmetic_parenthesized_expression;
	v->a[89582] = sym_string;
	v->a[89583] = sym_number;
	v->a[89584] = sym_simple_expansion;
	v->a[89585] = sym_expansion;
	v->a[89586] = sym_command_substitution;
	v->a[89587] = 21;
	v->a[89588] = actions(57);
	v->a[89589] = 1;
	v->a[89590] = sym_comment;
	v->a[89591] = actions(4584);
	v->a[89592] = 1;
	v->a[89593] = anon_sym_LPAREN;
	v->a[89594] = actions(4586);
	v->a[89595] = 1;
	v->a[89596] = anon_sym_BANG;
	v->a[89597] = actions(4592);
	v->a[89598] = 1;
	v->a[89599] = anon_sym_TILDE;
	small_parse_table_4480(v);
}

/* EOF small_parse_table_895.c */
