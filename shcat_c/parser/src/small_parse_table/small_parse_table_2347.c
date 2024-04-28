/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2347.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11735(t_small_parse_table_array *v)
{
	v->a[234700] = sym_simple_expansion;
	v->a[234701] = sym_expansion;
	v->a[234702] = sym_command_substitution;
	v->a[234703] = 21;
	v->a[234704] = actions(71);
	v->a[234705] = 1;
	v->a[234706] = sym_comment;
	v->a[234707] = actions(9364);
	v->a[234708] = 1;
	v->a[234709] = anon_sym_LPAREN;
	v->a[234710] = actions(9366);
	v->a[234711] = 1;
	v->a[234712] = anon_sym_BANG;
	v->a[234713] = actions(9372);
	v->a[234714] = 1;
	v->a[234715] = anon_sym_TILDE;
	v->a[234716] = actions(9374);
	v->a[234717] = 1;
	v->a[234718] = anon_sym_DOLLAR;
	v->a[234719] = actions(9376);
	small_parse_table_11736(v);
}

void	small_parse_table_11736(t_small_parse_table_array *v)
{
	v->a[234720] = 1;
	v->a[234721] = anon_sym_DQUOTE;
	v->a[234722] = actions(9378);
	v->a[234723] = 1;
	v->a[234724] = aux_sym_number_token1;
	v->a[234725] = actions(9380);
	v->a[234726] = 1;
	v->a[234727] = aux_sym_number_token2;
	v->a[234728] = actions(9382);
	v->a[234729] = 1;
	v->a[234730] = anon_sym_DOLLAR_LBRACE;
	v->a[234731] = actions(9384);
	v->a[234732] = 1;
	v->a[234733] = anon_sym_DOLLAR_LPAREN;
	v->a[234734] = actions(9386);
	v->a[234735] = 1;
	v->a[234736] = anon_sym_BQUOTE;
	v->a[234737] = actions(9388);
	v->a[234738] = 1;
	v->a[234739] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_11737(v);
}

void	small_parse_table_11737(t_small_parse_table_array *v)
{
	v->a[234740] = actions(9392);
	v->a[234741] = 1;
	v->a[234742] = sym_variable_name;
	v->a[234743] = actions(11070);
	v->a[234744] = 1;
	v->a[234745] = aux_sym__simple_variable_name_token1;
	v->a[234746] = state(3391);
	v->a[234747] = 1;
	v->a[234748] = sym__arithmetic_binary_expression;
	v->a[234749] = state(3396);
	v->a[234750] = 1;
	v->a[234751] = sym__arithmetic_ternary_expression;
	v->a[234752] = state(3398);
	v->a[234753] = 1;
	v->a[234754] = sym__arithmetic_unary_expression;
	v->a[234755] = state(3400);
	v->a[234756] = 1;
	v->a[234757] = sym__arithmetic_postfix_expression;
	v->a[234758] = actions(9368);
	v->a[234759] = 2;
	small_parse_table_11738(v);
}

void	small_parse_table_11738(t_small_parse_table_array *v)
{
	v->a[234760] = anon_sym_PLUS_PLUS2;
	v->a[234761] = anon_sym_DASH_DASH2;
	v->a[234762] = actions(9370);
	v->a[234763] = 2;
	v->a[234764] = anon_sym_DASH2;
	v->a[234765] = anon_sym_PLUS2;
	v->a[234766] = state(3410);
	v->a[234767] = 9;
	v->a[234768] = sym_subscript;
	v->a[234769] = sym__arithmetic_expression;
	v->a[234770] = sym__arithmetic_literal;
	v->a[234771] = sym__arithmetic_parenthesized_expression;
	v->a[234772] = sym_string;
	v->a[234773] = sym_number;
	v->a[234774] = sym_simple_expansion;
	v->a[234775] = sym_expansion;
	v->a[234776] = sym_command_substitution;
	v->a[234777] = 21;
	v->a[234778] = actions(71);
	v->a[234779] = 1;
	small_parse_table_11739(v);
}

void	small_parse_table_11739(t_small_parse_table_array *v)
{
	v->a[234780] = sym_comment;
	v->a[234781] = actions(9364);
	v->a[234782] = 1;
	v->a[234783] = anon_sym_LPAREN;
	v->a[234784] = actions(9366);
	v->a[234785] = 1;
	v->a[234786] = anon_sym_BANG;
	v->a[234787] = actions(9372);
	v->a[234788] = 1;
	v->a[234789] = anon_sym_TILDE;
	v->a[234790] = actions(9374);
	v->a[234791] = 1;
	v->a[234792] = anon_sym_DOLLAR;
	v->a[234793] = actions(9376);
	v->a[234794] = 1;
	v->a[234795] = anon_sym_DQUOTE;
	v->a[234796] = actions(9378);
	v->a[234797] = 1;
	v->a[234798] = aux_sym_number_token1;
	v->a[234799] = actions(9380);
	small_parse_table_11740(v);
}

/* EOF small_parse_table_2347.c */
