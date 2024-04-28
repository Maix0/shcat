/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2343.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11715(t_small_parse_table_array *v)
{
	v->a[234300] = 1;
	v->a[234301] = aux_sym__simple_variable_name_token1;
	v->a[234302] = state(3391);
	v->a[234303] = 1;
	v->a[234304] = sym__arithmetic_binary_expression;
	v->a[234305] = state(3396);
	v->a[234306] = 1;
	v->a[234307] = sym__arithmetic_ternary_expression;
	v->a[234308] = state(3398);
	v->a[234309] = 1;
	v->a[234310] = sym__arithmetic_unary_expression;
	v->a[234311] = state(3400);
	v->a[234312] = 1;
	v->a[234313] = sym__arithmetic_postfix_expression;
	v->a[234314] = actions(9368);
	v->a[234315] = 2;
	v->a[234316] = anon_sym_PLUS_PLUS2;
	v->a[234317] = anon_sym_DASH_DASH2;
	v->a[234318] = actions(9370);
	v->a[234319] = 2;
	small_parse_table_11716(v);
}

void	small_parse_table_11716(t_small_parse_table_array *v)
{
	v->a[234320] = anon_sym_DASH2;
	v->a[234321] = anon_sym_PLUS2;
	v->a[234322] = state(3257);
	v->a[234323] = 9;
	v->a[234324] = sym_subscript;
	v->a[234325] = sym__arithmetic_expression;
	v->a[234326] = sym__arithmetic_literal;
	v->a[234327] = sym__arithmetic_parenthesized_expression;
	v->a[234328] = sym_string;
	v->a[234329] = sym_number;
	v->a[234330] = sym_simple_expansion;
	v->a[234331] = sym_expansion;
	v->a[234332] = sym_command_substitution;
	v->a[234333] = 21;
	v->a[234334] = actions(71);
	v->a[234335] = 1;
	v->a[234336] = sym_comment;
	v->a[234337] = actions(9364);
	v->a[234338] = 1;
	v->a[234339] = anon_sym_LPAREN;
	small_parse_table_11717(v);
}

void	small_parse_table_11717(t_small_parse_table_array *v)
{
	v->a[234340] = actions(9366);
	v->a[234341] = 1;
	v->a[234342] = anon_sym_BANG;
	v->a[234343] = actions(9372);
	v->a[234344] = 1;
	v->a[234345] = anon_sym_TILDE;
	v->a[234346] = actions(9374);
	v->a[234347] = 1;
	v->a[234348] = anon_sym_DOLLAR;
	v->a[234349] = actions(9376);
	v->a[234350] = 1;
	v->a[234351] = anon_sym_DQUOTE;
	v->a[234352] = actions(9378);
	v->a[234353] = 1;
	v->a[234354] = aux_sym_number_token1;
	v->a[234355] = actions(9380);
	v->a[234356] = 1;
	v->a[234357] = aux_sym_number_token2;
	v->a[234358] = actions(9382);
	v->a[234359] = 1;
	small_parse_table_11718(v);
}

void	small_parse_table_11718(t_small_parse_table_array *v)
{
	v->a[234360] = anon_sym_DOLLAR_LBRACE;
	v->a[234361] = actions(9384);
	v->a[234362] = 1;
	v->a[234363] = anon_sym_DOLLAR_LPAREN;
	v->a[234364] = actions(9386);
	v->a[234365] = 1;
	v->a[234366] = anon_sym_BQUOTE;
	v->a[234367] = actions(9388);
	v->a[234368] = 1;
	v->a[234369] = anon_sym_DOLLAR_BQUOTE;
	v->a[234370] = actions(9392);
	v->a[234371] = 1;
	v->a[234372] = sym_variable_name;
	v->a[234373] = actions(11060);
	v->a[234374] = 1;
	v->a[234375] = aux_sym__simple_variable_name_token1;
	v->a[234376] = state(3391);
	v->a[234377] = 1;
	v->a[234378] = sym__arithmetic_binary_expression;
	v->a[234379] = state(3396);
	small_parse_table_11719(v);
}

void	small_parse_table_11719(t_small_parse_table_array *v)
{
	v->a[234380] = 1;
	v->a[234381] = sym__arithmetic_ternary_expression;
	v->a[234382] = state(3398);
	v->a[234383] = 1;
	v->a[234384] = sym__arithmetic_unary_expression;
	v->a[234385] = state(3400);
	v->a[234386] = 1;
	v->a[234387] = sym__arithmetic_postfix_expression;
	v->a[234388] = actions(9368);
	v->a[234389] = 2;
	v->a[234390] = anon_sym_PLUS_PLUS2;
	v->a[234391] = anon_sym_DASH_DASH2;
	v->a[234392] = actions(9370);
	v->a[234393] = 2;
	v->a[234394] = anon_sym_DASH2;
	v->a[234395] = anon_sym_PLUS2;
	v->a[234396] = state(3428);
	v->a[234397] = 9;
	v->a[234398] = sym_subscript;
	v->a[234399] = sym__arithmetic_expression;
	small_parse_table_11720(v);
}

/* EOF small_parse_table_2343.c */
