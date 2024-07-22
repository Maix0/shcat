/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_497.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2485(t_small_parse_table_array *v)
{
	v->a[49700] = actions(1481);
	v->a[49701] = 1;
	v->a[49702] = anon_sym_DOLLAR;
	v->a[49703] = actions(1483);
	v->a[49704] = 1;
	v->a[49705] = anon_sym_DQUOTE;
	v->a[49706] = actions(1487);
	v->a[49707] = 1;
	v->a[49708] = anon_sym_DOLLAR_LBRACE;
	v->a[49709] = actions(1489);
	v->a[49710] = 1;
	v->a[49711] = anon_sym_DOLLAR_LPAREN;
	v->a[49712] = actions(1491);
	v->a[49713] = 1;
	v->a[49714] = anon_sym_BQUOTE;
	v->a[49715] = actions(1493);
	v->a[49716] = 1;
	v->a[49717] = sym_variable_name;
	v->a[49718] = actions(1475);
	v->a[49719] = 2;
	small_parse_table_2486(v);
}

void	small_parse_table_2486(t_small_parse_table_array *v)
{
	v->a[49720] = anon_sym_PLUS_PLUS;
	v->a[49721] = anon_sym_DASH_DASH;
	v->a[49722] = actions(1477);
	v->a[49723] = 2;
	v->a[49724] = anon_sym_DASH2;
	v->a[49725] = anon_sym_PLUS2;
	v->a[49726] = actions(1485);
	v->a[49727] = 2;
	v->a[49728] = sym_number;
	v->a[49729] = aux_sym__simple_variable_name_token1;
	v->a[49730] = state(194);
	v->a[49731] = 3;
	v->a[49732] = sym_string;
	v->a[49733] = sym_simple_expansion;
	v->a[49734] = sym_expansion;
	v->a[49735] = state(222);
	v->a[49736] = 8;
	v->a[49737] = sym__arithmetic_expression;
	v->a[49738] = sym_arithmetic_literal;
	v->a[49739] = sym_arithmetic_binary_expression;
	small_parse_table_2487(v);
}

void	small_parse_table_2487(t_small_parse_table_array *v)
{
	v->a[49740] = sym_arithmetic_ternary_expression;
	v->a[49741] = sym_arithmetic_unary_expression;
	v->a[49742] = sym_arithmetic_postfix_expression;
	v->a[49743] = sym_arithmetic_parenthesized_expression;
	v->a[49744] = sym_command_substitution;
	v->a[49745] = 15;
	v->a[49746] = actions(501);
	v->a[49747] = 1;
	v->a[49748] = sym_comment;
	v->a[49749] = actions(1469);
	v->a[49750] = 1;
	v->a[49751] = anon_sym_LPAREN;
	v->a[49752] = actions(1471);
	v->a[49753] = 1;
	v->a[49754] = anon_sym_BANG;
	v->a[49755] = actions(1479);
	v->a[49756] = 1;
	v->a[49757] = anon_sym_TILDE;
	v->a[49758] = actions(1481);
	v->a[49759] = 1;
	small_parse_table_2488(v);
}

void	small_parse_table_2488(t_small_parse_table_array *v)
{
	v->a[49760] = anon_sym_DOLLAR;
	v->a[49761] = actions(1483);
	v->a[49762] = 1;
	v->a[49763] = anon_sym_DQUOTE;
	v->a[49764] = actions(1487);
	v->a[49765] = 1;
	v->a[49766] = anon_sym_DOLLAR_LBRACE;
	v->a[49767] = actions(1489);
	v->a[49768] = 1;
	v->a[49769] = anon_sym_DOLLAR_LPAREN;
	v->a[49770] = actions(1491);
	v->a[49771] = 1;
	v->a[49772] = anon_sym_BQUOTE;
	v->a[49773] = actions(1493);
	v->a[49774] = 1;
	v->a[49775] = sym_variable_name;
	v->a[49776] = actions(1475);
	v->a[49777] = 2;
	v->a[49778] = anon_sym_PLUS_PLUS;
	v->a[49779] = anon_sym_DASH_DASH;
	small_parse_table_2489(v);
}

void	small_parse_table_2489(t_small_parse_table_array *v)
{
	v->a[49780] = actions(1477);
	v->a[49781] = 2;
	v->a[49782] = anon_sym_DASH2;
	v->a[49783] = anon_sym_PLUS2;
	v->a[49784] = actions(1485);
	v->a[49785] = 2;
	v->a[49786] = sym_number;
	v->a[49787] = aux_sym__simple_variable_name_token1;
	v->a[49788] = state(194);
	v->a[49789] = 3;
	v->a[49790] = sym_string;
	v->a[49791] = sym_simple_expansion;
	v->a[49792] = sym_expansion;
	v->a[49793] = state(225);
	v->a[49794] = 8;
	v->a[49795] = sym__arithmetic_expression;
	v->a[49796] = sym_arithmetic_literal;
	v->a[49797] = sym_arithmetic_binary_expression;
	v->a[49798] = sym_arithmetic_ternary_expression;
	v->a[49799] = sym_arithmetic_unary_expression;
	small_parse_table_2490(v);
}

/* EOF small_parse_table_497.c */
