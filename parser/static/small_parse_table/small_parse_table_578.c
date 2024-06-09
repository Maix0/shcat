/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_578.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2890(t_small_parse_table_array *v)
{
	v->a[57800] = 1;
	v->a[57801] = sym_variable_name;
	v->a[57802] = actions(2081);
	v->a[57803] = 2;
	v->a[57804] = anon_sym_PLUS_PLUS;
	v->a[57805] = anon_sym_DASH_DASH;
	v->a[57806] = actions(2083);
	v->a[57807] = 2;
	v->a[57808] = anon_sym_DASH2;
	v->a[57809] = anon_sym_PLUS2;
	v->a[57810] = state(588);
	v->a[57811] = 4;
	v->a[57812] = sym_string;
	v->a[57813] = sym_number;
	v->a[57814] = sym_simple_expansion;
	v->a[57815] = sym_expansion;
	v->a[57816] = state(583);
	v->a[57817] = 8;
	v->a[57818] = sym__arithmetic_expression;
	v->a[57819] = sym_arithmetic_literal;
	small_parse_table_2891(v);
}

void	small_parse_table_2891(t_small_parse_table_array *v)
{
	v->a[57820] = sym_arithmetic_binary_expression;
	v->a[57821] = sym_arithmetic_ternary_expression;
	v->a[57822] = sym_arithmetic_unary_expression;
	v->a[57823] = sym_arithmetic_postfix_expression;
	v->a[57824] = sym_arithmetic_parenthesized_expression;
	v->a[57825] = sym_command_substitution;
	v->a[57826] = 17;
	v->a[57827] = actions(1404);
	v->a[57828] = 1;
	v->a[57829] = sym_comment;
	v->a[57830] = actions(1979);
	v->a[57831] = 1;
	v->a[57832] = anon_sym_LPAREN;
	v->a[57833] = actions(1981);
	v->a[57834] = 1;
	v->a[57835] = anon_sym_BANG;
	v->a[57836] = actions(1989);
	v->a[57837] = 1;
	v->a[57838] = anon_sym_TILDE;
	v->a[57839] = actions(1991);
	small_parse_table_2892(v);
}

void	small_parse_table_2892(t_small_parse_table_array *v)
{
	v->a[57840] = 1;
	v->a[57841] = anon_sym_DOLLAR;
	v->a[57842] = actions(1993);
	v->a[57843] = 1;
	v->a[57844] = anon_sym_DQUOTE;
	v->a[57845] = actions(1995);
	v->a[57846] = 1;
	v->a[57847] = aux_sym_number_token1;
	v->a[57848] = actions(1997);
	v->a[57849] = 1;
	v->a[57850] = aux_sym_number_token2;
	v->a[57851] = actions(1999);
	v->a[57852] = 1;
	v->a[57853] = anon_sym_DOLLAR_LBRACE;
	v->a[57854] = actions(2001);
	v->a[57855] = 1;
	v->a[57856] = anon_sym_DOLLAR_LPAREN;
	v->a[57857] = actions(2003);
	v->a[57858] = 1;
	v->a[57859] = anon_sym_BQUOTE;
	small_parse_table_2893(v);
}

void	small_parse_table_2893(t_small_parse_table_array *v)
{
	v->a[57860] = actions(2005);
	v->a[57861] = 1;
	v->a[57862] = aux_sym__simple_variable_name_token1;
	v->a[57863] = actions(2007);
	v->a[57864] = 1;
	v->a[57865] = sym_variable_name;
	v->a[57866] = actions(1985);
	v->a[57867] = 2;
	v->a[57868] = anon_sym_PLUS_PLUS;
	v->a[57869] = anon_sym_DASH_DASH;
	v->a[57870] = actions(1987);
	v->a[57871] = 2;
	v->a[57872] = anon_sym_DASH2;
	v->a[57873] = anon_sym_PLUS2;
	v->a[57874] = state(530);
	v->a[57875] = 4;
	v->a[57876] = sym_string;
	v->a[57877] = sym_number;
	v->a[57878] = sym_simple_expansion;
	v->a[57879] = sym_expansion;
	small_parse_table_2894(v);
}

void	small_parse_table_2894(t_small_parse_table_array *v)
{
	v->a[57880] = state(546);
	v->a[57881] = 8;
	v->a[57882] = sym__arithmetic_expression;
	v->a[57883] = sym_arithmetic_literal;
	v->a[57884] = sym_arithmetic_binary_expression;
	v->a[57885] = sym_arithmetic_ternary_expression;
	v->a[57886] = sym_arithmetic_unary_expression;
	v->a[57887] = sym_arithmetic_postfix_expression;
	v->a[57888] = sym_arithmetic_parenthesized_expression;
	v->a[57889] = sym_command_substitution;
	v->a[57890] = 3;
	v->a[57891] = actions(3);
	v->a[57892] = 1;
	v->a[57893] = sym_comment;
	v->a[57894] = actions(1108);
	v->a[57895] = 2;
	v->a[57896] = sym_file_descriptor;
	v->a[57897] = sym__bare_dollar;
	v->a[57898] = actions(1104);
	v->a[57899] = 26;
	small_parse_table_2895(v);
}

/* EOF small_parse_table_578.c */
