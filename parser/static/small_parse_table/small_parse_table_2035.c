/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2035.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10175(t_small_parse_table_array *v)
{
	v->a[203500] = 1;
	v->a[203501] = sym__arithmetic_ternary_expression;
	v->a[203502] = state(2809);
	v->a[203503] = 1;
	v->a[203504] = sym__arithmetic_unary_expression;
	v->a[203505] = state(2825);
	v->a[203506] = 1;
	v->a[203507] = sym__arithmetic_postfix_expression;
	v->a[203508] = actions(9282);
	v->a[203509] = 2;
	v->a[203510] = anon_sym_PLUS_PLUS2;
	v->a[203511] = anon_sym_DASH_DASH2;
	v->a[203512] = actions(9284);
	v->a[203513] = 2;
	v->a[203514] = anon_sym_DASH2;
	v->a[203515] = anon_sym_PLUS2;
	v->a[203516] = state(2742);
	v->a[203517] = 9;
	v->a[203518] = sym_subscript;
	v->a[203519] = sym__arithmetic_expression;
	small_parse_table_10176(v);
}

void	small_parse_table_10176(t_small_parse_table_array *v)
{
	v->a[203520] = sym__arithmetic_literal;
	v->a[203521] = sym__arithmetic_parenthesized_expression;
	v->a[203522] = sym_string;
	v->a[203523] = sym_number;
	v->a[203524] = sym_simple_expansion;
	v->a[203525] = sym_expansion;
	v->a[203526] = sym_command_substitution;
	v->a[203527] = 21;
	v->a[203528] = actions(71);
	v->a[203529] = 1;
	v->a[203530] = sym_comment;
	v->a[203531] = actions(9364);
	v->a[203532] = 1;
	v->a[203533] = anon_sym_LPAREN;
	v->a[203534] = actions(9366);
	v->a[203535] = 1;
	v->a[203536] = anon_sym_BANG;
	v->a[203537] = actions(9372);
	v->a[203538] = 1;
	v->a[203539] = anon_sym_TILDE;
	small_parse_table_10177(v);
}

void	small_parse_table_10177(t_small_parse_table_array *v)
{
	v->a[203540] = actions(9374);
	v->a[203541] = 1;
	v->a[203542] = anon_sym_DOLLAR;
	v->a[203543] = actions(9376);
	v->a[203544] = 1;
	v->a[203545] = anon_sym_DQUOTE;
	v->a[203546] = actions(9378);
	v->a[203547] = 1;
	v->a[203548] = aux_sym_number_token1;
	v->a[203549] = actions(9380);
	v->a[203550] = 1;
	v->a[203551] = aux_sym_number_token2;
	v->a[203552] = actions(9382);
	v->a[203553] = 1;
	v->a[203554] = anon_sym_DOLLAR_LBRACE;
	v->a[203555] = actions(9384);
	v->a[203556] = 1;
	v->a[203557] = anon_sym_DOLLAR_LPAREN;
	v->a[203558] = actions(9386);
	v->a[203559] = 1;
	small_parse_table_10178(v);
}

void	small_parse_table_10178(t_small_parse_table_array *v)
{
	v->a[203560] = anon_sym_BQUOTE;
	v->a[203561] = actions(9388);
	v->a[203562] = 1;
	v->a[203563] = anon_sym_DOLLAR_BQUOTE;
	v->a[203564] = actions(9392);
	v->a[203565] = 1;
	v->a[203566] = sym_variable_name;
	v->a[203567] = actions(9410);
	v->a[203568] = 1;
	v->a[203569] = aux_sym__simple_variable_name_token1;
	v->a[203570] = state(3391);
	v->a[203571] = 1;
	v->a[203572] = sym__arithmetic_binary_expression;
	v->a[203573] = state(3396);
	v->a[203574] = 1;
	v->a[203575] = sym__arithmetic_ternary_expression;
	v->a[203576] = state(3398);
	v->a[203577] = 1;
	v->a[203578] = sym__arithmetic_unary_expression;
	v->a[203579] = state(3400);
	small_parse_table_10179(v);
}

void	small_parse_table_10179(t_small_parse_table_array *v)
{
	v->a[203580] = 1;
	v->a[203581] = sym__arithmetic_postfix_expression;
	v->a[203582] = actions(9368);
	v->a[203583] = 2;
	v->a[203584] = anon_sym_PLUS_PLUS2;
	v->a[203585] = anon_sym_DASH_DASH2;
	v->a[203586] = actions(9370);
	v->a[203587] = 2;
	v->a[203588] = anon_sym_DASH2;
	v->a[203589] = anon_sym_PLUS2;
	v->a[203590] = state(3355);
	v->a[203591] = 9;
	v->a[203592] = sym_subscript;
	v->a[203593] = sym__arithmetic_expression;
	v->a[203594] = sym__arithmetic_literal;
	v->a[203595] = sym__arithmetic_parenthesized_expression;
	v->a[203596] = sym_string;
	v->a[203597] = sym_number;
	v->a[203598] = sym_simple_expansion;
	v->a[203599] = sym_expansion;
	small_parse_table_10180(v);
}

/* EOF small_parse_table_2035.c */
