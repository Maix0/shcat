/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_470.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2350(t_small_parse_table_array *v)
{
	v->a[47000] = 8;
	v->a[47001] = anon_sym_LT;
	v->a[47002] = anon_sym_GT;
	v->a[47003] = anon_sym_GT_GT;
	v->a[47004] = anon_sym_LT_AMP;
	v->a[47005] = anon_sym_GT_AMP;
	v->a[47006] = anon_sym_GT_PIPE;
	v->a[47007] = anon_sym_LT_GT;
	v->a[47008] = anon_sym_BQUOTE;
	v->a[47009] = 15;
	v->a[47010] = actions(501);
	v->a[47011] = 1;
	v->a[47012] = sym_comment;
	v->a[47013] = actions(1469);
	v->a[47014] = 1;
	v->a[47015] = anon_sym_LPAREN;
	v->a[47016] = actions(1471);
	v->a[47017] = 1;
	v->a[47018] = anon_sym_BANG;
	v->a[47019] = actions(1479);
	small_parse_table_2351(v);
}

void	small_parse_table_2351(t_small_parse_table_array *v)
{
	v->a[47020] = 1;
	v->a[47021] = anon_sym_TILDE;
	v->a[47022] = actions(1481);
	v->a[47023] = 1;
	v->a[47024] = anon_sym_DOLLAR;
	v->a[47025] = actions(1483);
	v->a[47026] = 1;
	v->a[47027] = anon_sym_DQUOTE;
	v->a[47028] = actions(1487);
	v->a[47029] = 1;
	v->a[47030] = anon_sym_DOLLAR_LBRACE;
	v->a[47031] = actions(1489);
	v->a[47032] = 1;
	v->a[47033] = anon_sym_DOLLAR_LPAREN;
	v->a[47034] = actions(1491);
	v->a[47035] = 1;
	v->a[47036] = anon_sym_BQUOTE;
	v->a[47037] = actions(1493);
	v->a[47038] = 1;
	v->a[47039] = sym_variable_name;
	small_parse_table_2352(v);
}

void	small_parse_table_2352(t_small_parse_table_array *v)
{
	v->a[47040] = actions(1475);
	v->a[47041] = 2;
	v->a[47042] = anon_sym_PLUS_PLUS;
	v->a[47043] = anon_sym_DASH_DASH;
	v->a[47044] = actions(1477);
	v->a[47045] = 2;
	v->a[47046] = anon_sym_DASH2;
	v->a[47047] = anon_sym_PLUS2;
	v->a[47048] = actions(1485);
	v->a[47049] = 2;
	v->a[47050] = sym_number;
	v->a[47051] = aux_sym__simple_variable_name_token1;
	v->a[47052] = state(194);
	v->a[47053] = 3;
	v->a[47054] = sym_string;
	v->a[47055] = sym_simple_expansion;
	v->a[47056] = sym_expansion;
	v->a[47057] = state(293);
	v->a[47058] = 8;
	v->a[47059] = sym__arithmetic_expression;
	small_parse_table_2353(v);
}

void	small_parse_table_2353(t_small_parse_table_array *v)
{
	v->a[47060] = sym_arithmetic_literal;
	v->a[47061] = sym_arithmetic_binary_expression;
	v->a[47062] = sym_arithmetic_ternary_expression;
	v->a[47063] = sym_arithmetic_unary_expression;
	v->a[47064] = sym_arithmetic_postfix_expression;
	v->a[47065] = sym_arithmetic_parenthesized_expression;
	v->a[47066] = sym_command_substitution;
	v->a[47067] = 18;
	v->a[47068] = actions(3);
	v->a[47069] = 1;
	v->a[47070] = sym_comment;
	v->a[47071] = actions(1718);
	v->a[47072] = 1;
	v->a[47073] = anon_sym_esac;
	v->a[47074] = actions(1720);
	v->a[47075] = 1;
	v->a[47076] = anon_sym_LPAREN;
	v->a[47077] = actions(1724);
	v->a[47078] = 1;
	v->a[47079] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2354(v);
}

void	small_parse_table_2354(t_small_parse_table_array *v)
{
	v->a[47080] = actions(1726);
	v->a[47081] = 1;
	v->a[47082] = anon_sym_DOLLAR;
	v->a[47083] = actions(1728);
	v->a[47084] = 1;
	v->a[47085] = anon_sym_DQUOTE;
	v->a[47086] = actions(1730);
	v->a[47087] = 1;
	v->a[47088] = anon_sym_DOLLAR_LBRACE;
	v->a[47089] = actions(1732);
	v->a[47090] = 1;
	v->a[47091] = anon_sym_DOLLAR_LPAREN;
	v->a[47092] = actions(1734);
	v->a[47093] = 1;
	v->a[47094] = anon_sym_BQUOTE;
	v->a[47095] = actions(1736);
	v->a[47096] = 1;
	v->a[47097] = sym_extglob_pattern;
	v->a[47098] = state(946);
	v->a[47099] = 1;
	small_parse_table_2355(v);
}

/* EOF small_parse_table_470.c */
