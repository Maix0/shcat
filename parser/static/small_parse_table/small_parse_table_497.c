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
	v->a[49700] = sym_arithmetic_postfix_expression;
	v->a[49701] = sym_arithmetic_parenthesized_expression;
	v->a[49702] = sym_command_substitution;
	v->a[49703] = 15;
	v->a[49704] = actions(680);
	v->a[49705] = 1;
	v->a[49706] = sym_comment;
	v->a[49707] = actions(1574);
	v->a[49708] = 1;
	v->a[49709] = anon_sym_LPAREN;
	v->a[49710] = actions(1576);
	v->a[49711] = 1;
	v->a[49712] = anon_sym_BANG;
	v->a[49713] = actions(1584);
	v->a[49714] = 1;
	v->a[49715] = anon_sym_TILDE;
	v->a[49716] = actions(1586);
	v->a[49717] = 1;
	v->a[49718] = anon_sym_DOLLAR;
	v->a[49719] = actions(1588);
	small_parse_table_2486(v);
}

void	small_parse_table_2486(t_small_parse_table_array *v)
{
	v->a[49720] = 1;
	v->a[49721] = anon_sym_DQUOTE;
	v->a[49722] = actions(1592);
	v->a[49723] = 1;
	v->a[49724] = anon_sym_DOLLAR_LBRACE;
	v->a[49725] = actions(1594);
	v->a[49726] = 1;
	v->a[49727] = anon_sym_DOLLAR_LPAREN;
	v->a[49728] = actions(1596);
	v->a[49729] = 1;
	v->a[49730] = anon_sym_BQUOTE;
	v->a[49731] = actions(1598);
	v->a[49732] = 1;
	v->a[49733] = sym_variable_name;
	v->a[49734] = actions(1580);
	v->a[49735] = 2;
	v->a[49736] = anon_sym_PLUS_PLUS;
	v->a[49737] = anon_sym_DASH_DASH;
	v->a[49738] = actions(1582);
	v->a[49739] = 2;
	small_parse_table_2487(v);
}

void	small_parse_table_2487(t_small_parse_table_array *v)
{
	v->a[49740] = anon_sym_DASH2;
	v->a[49741] = anon_sym_PLUS2;
	v->a[49742] = actions(1590);
	v->a[49743] = 2;
	v->a[49744] = sym_number;
	v->a[49745] = aux_sym__simple_variable_name_token1;
	v->a[49746] = state(238);
	v->a[49747] = 3;
	v->a[49748] = sym_string;
	v->a[49749] = sym_simple_expansion;
	v->a[49750] = sym_expansion;
	v->a[49751] = state(219);
	v->a[49752] = 8;
	v->a[49753] = sym__arithmetic_expression;
	v->a[49754] = sym_arithmetic_literal;
	v->a[49755] = sym_arithmetic_binary_expression;
	v->a[49756] = sym_arithmetic_ternary_expression;
	v->a[49757] = sym_arithmetic_unary_expression;
	v->a[49758] = sym_arithmetic_postfix_expression;
	v->a[49759] = sym_arithmetic_parenthesized_expression;
	small_parse_table_2488(v);
}

void	small_parse_table_2488(t_small_parse_table_array *v)
{
	v->a[49760] = sym_command_substitution;
	v->a[49761] = 15;
	v->a[49762] = actions(680);
	v->a[49763] = 1;
	v->a[49764] = sym_comment;
	v->a[49765] = actions(1574);
	v->a[49766] = 1;
	v->a[49767] = anon_sym_LPAREN;
	v->a[49768] = actions(1576);
	v->a[49769] = 1;
	v->a[49770] = anon_sym_BANG;
	v->a[49771] = actions(1584);
	v->a[49772] = 1;
	v->a[49773] = anon_sym_TILDE;
	v->a[49774] = actions(1586);
	v->a[49775] = 1;
	v->a[49776] = anon_sym_DOLLAR;
	v->a[49777] = actions(1588);
	v->a[49778] = 1;
	v->a[49779] = anon_sym_DQUOTE;
	small_parse_table_2489(v);
}

void	small_parse_table_2489(t_small_parse_table_array *v)
{
	v->a[49780] = actions(1592);
	v->a[49781] = 1;
	v->a[49782] = anon_sym_DOLLAR_LBRACE;
	v->a[49783] = actions(1594);
	v->a[49784] = 1;
	v->a[49785] = anon_sym_DOLLAR_LPAREN;
	v->a[49786] = actions(1596);
	v->a[49787] = 1;
	v->a[49788] = anon_sym_BQUOTE;
	v->a[49789] = actions(1598);
	v->a[49790] = 1;
	v->a[49791] = sym_variable_name;
	v->a[49792] = actions(1580);
	v->a[49793] = 2;
	v->a[49794] = anon_sym_PLUS_PLUS;
	v->a[49795] = anon_sym_DASH_DASH;
	v->a[49796] = actions(1582);
	v->a[49797] = 2;
	v->a[49798] = anon_sym_DASH2;
	v->a[49799] = anon_sym_PLUS2;
	small_parse_table_2490(v);
}

/* EOF small_parse_table_497.c */
