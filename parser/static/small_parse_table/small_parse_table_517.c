/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_517.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2585(t_small_parse_table_array *v)
{
	v->a[51700] = 3;
	v->a[51701] = sym_string;
	v->a[51702] = sym_simple_expansion;
	v->a[51703] = sym_expansion;
	v->a[51704] = state(342);
	v->a[51705] = 8;
	v->a[51706] = sym__arithmetic_expression;
	v->a[51707] = sym_arithmetic_literal;
	v->a[51708] = sym_arithmetic_binary_expression;
	v->a[51709] = sym_arithmetic_ternary_expression;
	v->a[51710] = sym_arithmetic_unary_expression;
	v->a[51711] = sym_arithmetic_postfix_expression;
	v->a[51712] = sym_arithmetic_parenthesized_expression;
	v->a[51713] = sym_command_substitution;
	v->a[51714] = 16;
	v->a[51715] = actions(870);
	v->a[51716] = 1;
	v->a[51717] = sym_comment;
	v->a[51718] = actions(1744);
	v->a[51719] = 1;
	small_parse_table_2586(v);
}

void	small_parse_table_2586(t_small_parse_table_array *v)
{
	v->a[51720] = anon_sym_LPAREN;
	v->a[51721] = actions(1746);
	v->a[51722] = 1;
	v->a[51723] = anon_sym_BANG;
	v->a[51724] = actions(1754);
	v->a[51725] = 1;
	v->a[51726] = anon_sym_TILDE;
	v->a[51727] = actions(1756);
	v->a[51728] = 1;
	v->a[51729] = anon_sym_DOLLAR;
	v->a[51730] = actions(1758);
	v->a[51731] = 1;
	v->a[51732] = anon_sym_DQUOTE;
	v->a[51733] = actions(1762);
	v->a[51734] = 1;
	v->a[51735] = anon_sym_DOLLAR_LBRACE;
	v->a[51736] = actions(1764);
	v->a[51737] = 1;
	v->a[51738] = anon_sym_DOLLAR_LPAREN;
	v->a[51739] = actions(1766);
	small_parse_table_2587(v);
}

void	small_parse_table_2587(t_small_parse_table_array *v)
{
	v->a[51740] = 1;
	v->a[51741] = anon_sym_BQUOTE;
	v->a[51742] = actions(1768);
	v->a[51743] = 1;
	v->a[51744] = sym_variable_name;
	v->a[51745] = actions(1826);
	v->a[51746] = 1;
	v->a[51747] = anon_sym_RPAREN_RPAREN;
	v->a[51748] = actions(1750);
	v->a[51749] = 2;
	v->a[51750] = anon_sym_PLUS_PLUS;
	v->a[51751] = anon_sym_DASH_DASH;
	v->a[51752] = actions(1752);
	v->a[51753] = 2;
	v->a[51754] = anon_sym_DASH2;
	v->a[51755] = anon_sym_PLUS2;
	v->a[51756] = actions(1760);
	v->a[51757] = 2;
	v->a[51758] = sym_number;
	v->a[51759] = aux_sym__simple_variable_name_token1;
	small_parse_table_2588(v);
}

void	small_parse_table_2588(t_small_parse_table_array *v)
{
	v->a[51760] = state(271);
	v->a[51761] = 3;
	v->a[51762] = sym_string;
	v->a[51763] = sym_simple_expansion;
	v->a[51764] = sym_expansion;
	v->a[51765] = state(341);
	v->a[51766] = 8;
	v->a[51767] = sym__arithmetic_expression;
	v->a[51768] = sym_arithmetic_literal;
	v->a[51769] = sym_arithmetic_binary_expression;
	v->a[51770] = sym_arithmetic_ternary_expression;
	v->a[51771] = sym_arithmetic_unary_expression;
	v->a[51772] = sym_arithmetic_postfix_expression;
	v->a[51773] = sym_arithmetic_parenthesized_expression;
	v->a[51774] = sym_command_substitution;
	v->a[51775] = 3;
	v->a[51776] = actions(3);
	v->a[51777] = 1;
	v->a[51778] = sym_comment;
	v->a[51779] = actions(982);
	small_parse_table_2589(v);
}

void	small_parse_table_2589(t_small_parse_table_array *v)
{
	v->a[51780] = 3;
	v->a[51781] = sym_file_descriptor;
	v->a[51782] = sym__concat;
	v->a[51783] = sym__bare_dollar;
	v->a[51784] = actions(980);
	v->a[51785] = 24;
	v->a[51786] = anon_sym_LPAREN;
	v->a[51787] = anon_sym_PIPE;
	v->a[51788] = anon_sym_AMP_AMP;
	v->a[51789] = anon_sym_PIPE_PIPE;
	v->a[51790] = anon_sym_LT;
	v->a[51791] = anon_sym_GT;
	v->a[51792] = anon_sym_GT_GT;
	v->a[51793] = anon_sym_LT_AMP;
	v->a[51794] = anon_sym_GT_AMP;
	v->a[51795] = anon_sym_GT_PIPE;
	v->a[51796] = anon_sym_LT_AMP_DASH;
	v->a[51797] = anon_sym_GT_AMP_DASH;
	v->a[51798] = anon_sym_LT_LT;
	v->a[51799] = anon_sym_LT_LT_DASH;
	small_parse_table_2590(v);
}

/* EOF small_parse_table_517.c */
