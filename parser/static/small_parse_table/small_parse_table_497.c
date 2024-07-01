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
	v->a[49700] = sym_number;
	v->a[49701] = anon_sym_DOLLAR_LBRACE;
	v->a[49702] = anon_sym_DOLLAR_LPAREN;
	v->a[49703] = anon_sym_BQUOTE;
	v->a[49704] = sym_word;
	v->a[49705] = 15;
	v->a[49706] = actions(664);
	v->a[49707] = 1;
	v->a[49708] = sym_comment;
	v->a[49709] = actions(1560);
	v->a[49710] = 1;
	v->a[49711] = anon_sym_LPAREN;
	v->a[49712] = actions(1562);
	v->a[49713] = 1;
	v->a[49714] = anon_sym_BANG;
	v->a[49715] = actions(1570);
	v->a[49716] = 1;
	v->a[49717] = anon_sym_TILDE;
	v->a[49718] = actions(1572);
	v->a[49719] = 1;
	small_parse_table_2486(v);
}

void	small_parse_table_2486(t_small_parse_table_array *v)
{
	v->a[49720] = anon_sym_DOLLAR;
	v->a[49721] = actions(1574);
	v->a[49722] = 1;
	v->a[49723] = anon_sym_DQUOTE;
	v->a[49724] = actions(1578);
	v->a[49725] = 1;
	v->a[49726] = anon_sym_DOLLAR_LBRACE;
	v->a[49727] = actions(1580);
	v->a[49728] = 1;
	v->a[49729] = anon_sym_DOLLAR_LPAREN;
	v->a[49730] = actions(1582);
	v->a[49731] = 1;
	v->a[49732] = anon_sym_BQUOTE;
	v->a[49733] = actions(1584);
	v->a[49734] = 1;
	v->a[49735] = sym_variable_name;
	v->a[49736] = actions(1566);
	v->a[49737] = 2;
	v->a[49738] = anon_sym_PLUS_PLUS;
	v->a[49739] = anon_sym_DASH_DASH;
	small_parse_table_2487(v);
}

void	small_parse_table_2487(t_small_parse_table_array *v)
{
	v->a[49740] = actions(1568);
	v->a[49741] = 2;
	v->a[49742] = anon_sym_DASH2;
	v->a[49743] = anon_sym_PLUS2;
	v->a[49744] = actions(1576);
	v->a[49745] = 2;
	v->a[49746] = sym_number;
	v->a[49747] = aux_sym__simple_variable_name_token1;
	v->a[49748] = state(255);
	v->a[49749] = 3;
	v->a[49750] = sym_string;
	v->a[49751] = sym_simple_expansion;
	v->a[49752] = sym_expansion;
	v->a[49753] = state(326);
	v->a[49754] = 8;
	v->a[49755] = sym__arithmetic_expression;
	v->a[49756] = sym_arithmetic_literal;
	v->a[49757] = sym_arithmetic_binary_expression;
	v->a[49758] = sym_arithmetic_ternary_expression;
	v->a[49759] = sym_arithmetic_unary_expression;
	small_parse_table_2488(v);
}

void	small_parse_table_2488(t_small_parse_table_array *v)
{
	v->a[49760] = sym_arithmetic_postfix_expression;
	v->a[49761] = sym_arithmetic_parenthesized_expression;
	v->a[49762] = sym_command_substitution;
	v->a[49763] = 3;
	v->a[49764] = actions(3);
	v->a[49765] = 1;
	v->a[49766] = sym_comment;
	v->a[49767] = actions(802);
	v->a[49768] = 3;
	v->a[49769] = sym_file_descriptor;
	v->a[49770] = sym__concat;
	v->a[49771] = sym__bare_dollar;
	v->a[49772] = actions(800);
	v->a[49773] = 23;
	v->a[49774] = anon_sym_LPAREN;
	v->a[49775] = anon_sym_PIPE;
	v->a[49776] = anon_sym_AMP_AMP;
	v->a[49777] = anon_sym_PIPE_PIPE;
	v->a[49778] = anon_sym_LT;
	v->a[49779] = anon_sym_GT;
	small_parse_table_2489(v);
}

void	small_parse_table_2489(t_small_parse_table_array *v)
{
	v->a[49780] = anon_sym_GT_GT;
	v->a[49781] = anon_sym_LT_AMP;
	v->a[49782] = anon_sym_GT_AMP;
	v->a[49783] = anon_sym_GT_PIPE;
	v->a[49784] = anon_sym_LT_GT;
	v->a[49785] = anon_sym_LT_LT;
	v->a[49786] = anon_sym_LT_LT_DASH;
	v->a[49787] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49788] = aux_sym_concatenation_token1;
	v->a[49789] = anon_sym_DOLLAR;
	v->a[49790] = anon_sym_DQUOTE;
	v->a[49791] = sym_raw_string;
	v->a[49792] = sym_number;
	v->a[49793] = anon_sym_DOLLAR_LBRACE;
	v->a[49794] = anon_sym_DOLLAR_LPAREN;
	v->a[49795] = anon_sym_BQUOTE;
	v->a[49796] = sym_word;
	v->a[49797] = 6;
	v->a[49798] = actions(3);
	v->a[49799] = 1;
	small_parse_table_2490(v);
}

/* EOF small_parse_table_497.c */
