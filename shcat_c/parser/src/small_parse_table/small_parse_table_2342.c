/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2342.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11710(t_small_parse_table_array *v)
{
	v->a[234200] = anon_sym_DOLLAR;
	v->a[234201] = actions(9376);
	v->a[234202] = 1;
	v->a[234203] = anon_sym_DQUOTE;
	v->a[234204] = actions(9378);
	v->a[234205] = 1;
	v->a[234206] = aux_sym_number_token1;
	v->a[234207] = actions(9380);
	v->a[234208] = 1;
	v->a[234209] = aux_sym_number_token2;
	v->a[234210] = actions(9382);
	v->a[234211] = 1;
	v->a[234212] = anon_sym_DOLLAR_LBRACE;
	v->a[234213] = actions(9384);
	v->a[234214] = 1;
	v->a[234215] = anon_sym_DOLLAR_LPAREN;
	v->a[234216] = actions(9386);
	v->a[234217] = 1;
	v->a[234218] = anon_sym_BQUOTE;
	v->a[234219] = actions(9388);
	small_parse_table_11711(v);
}

void	small_parse_table_11711(t_small_parse_table_array *v)
{
	v->a[234220] = 1;
	v->a[234221] = anon_sym_DOLLAR_BQUOTE;
	v->a[234222] = actions(9392);
	v->a[234223] = 1;
	v->a[234224] = sym_variable_name;
	v->a[234225] = actions(11056);
	v->a[234226] = 1;
	v->a[234227] = aux_sym__simple_variable_name_token1;
	v->a[234228] = state(3391);
	v->a[234229] = 1;
	v->a[234230] = sym__arithmetic_binary_expression;
	v->a[234231] = state(3396);
	v->a[234232] = 1;
	v->a[234233] = sym__arithmetic_ternary_expression;
	v->a[234234] = state(3398);
	v->a[234235] = 1;
	v->a[234236] = sym__arithmetic_unary_expression;
	v->a[234237] = state(3400);
	v->a[234238] = 1;
	v->a[234239] = sym__arithmetic_postfix_expression;
	small_parse_table_11712(v);
}

void	small_parse_table_11712(t_small_parse_table_array *v)
{
	v->a[234240] = actions(9368);
	v->a[234241] = 2;
	v->a[234242] = anon_sym_PLUS_PLUS2;
	v->a[234243] = anon_sym_DASH_DASH2;
	v->a[234244] = actions(9370);
	v->a[234245] = 2;
	v->a[234246] = anon_sym_DASH2;
	v->a[234247] = anon_sym_PLUS2;
	v->a[234248] = state(3429);
	v->a[234249] = 9;
	v->a[234250] = sym_subscript;
	v->a[234251] = sym__arithmetic_expression;
	v->a[234252] = sym__arithmetic_literal;
	v->a[234253] = sym__arithmetic_parenthesized_expression;
	v->a[234254] = sym_string;
	v->a[234255] = sym_number;
	v->a[234256] = sym_simple_expansion;
	v->a[234257] = sym_expansion;
	v->a[234258] = sym_command_substitution;
	v->a[234259] = 21;
	small_parse_table_11713(v);
}

void	small_parse_table_11713(t_small_parse_table_array *v)
{
	v->a[234260] = actions(71);
	v->a[234261] = 1;
	v->a[234262] = sym_comment;
	v->a[234263] = actions(9364);
	v->a[234264] = 1;
	v->a[234265] = anon_sym_LPAREN;
	v->a[234266] = actions(9366);
	v->a[234267] = 1;
	v->a[234268] = anon_sym_BANG;
	v->a[234269] = actions(9372);
	v->a[234270] = 1;
	v->a[234271] = anon_sym_TILDE;
	v->a[234272] = actions(9374);
	v->a[234273] = 1;
	v->a[234274] = anon_sym_DOLLAR;
	v->a[234275] = actions(9376);
	v->a[234276] = 1;
	v->a[234277] = anon_sym_DQUOTE;
	v->a[234278] = actions(9378);
	v->a[234279] = 1;
	small_parse_table_11714(v);
}

void	small_parse_table_11714(t_small_parse_table_array *v)
{
	v->a[234280] = aux_sym_number_token1;
	v->a[234281] = actions(9380);
	v->a[234282] = 1;
	v->a[234283] = aux_sym_number_token2;
	v->a[234284] = actions(9382);
	v->a[234285] = 1;
	v->a[234286] = anon_sym_DOLLAR_LBRACE;
	v->a[234287] = actions(9384);
	v->a[234288] = 1;
	v->a[234289] = anon_sym_DOLLAR_LPAREN;
	v->a[234290] = actions(9386);
	v->a[234291] = 1;
	v->a[234292] = anon_sym_BQUOTE;
	v->a[234293] = actions(9388);
	v->a[234294] = 1;
	v->a[234295] = anon_sym_DOLLAR_BQUOTE;
	v->a[234296] = actions(9392);
	v->a[234297] = 1;
	v->a[234298] = sym_variable_name;
	v->a[234299] = actions(11058);
	small_parse_table_11715(v);
}

/* EOF small_parse_table_2342.c */
