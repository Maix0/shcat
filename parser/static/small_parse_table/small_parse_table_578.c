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
	v->a[57800] = anon_sym_BANG;
	v->a[57801] = actions(1959);
	v->a[57802] = 1;
	v->a[57803] = anon_sym_TILDE;
	v->a[57804] = actions(1961);
	v->a[57805] = 1;
	v->a[57806] = anon_sym_DOLLAR;
	v->a[57807] = actions(1963);
	v->a[57808] = 1;
	v->a[57809] = anon_sym_DQUOTE;
	v->a[57810] = actions(1967);
	v->a[57811] = 1;
	v->a[57812] = anon_sym_DOLLAR_LBRACE;
	v->a[57813] = actions(1969);
	v->a[57814] = 1;
	v->a[57815] = anon_sym_DOLLAR_LPAREN;
	v->a[57816] = actions(1971);
	v->a[57817] = 1;
	v->a[57818] = anon_sym_BQUOTE;
	v->a[57819] = actions(1973);
	small_parse_table_2891(v);
}

void	small_parse_table_2891(t_small_parse_table_array *v)
{
	v->a[57820] = 1;
	v->a[57821] = sym_variable_name;
	v->a[57822] = actions(1955);
	v->a[57823] = 2;
	v->a[57824] = anon_sym_PLUS_PLUS;
	v->a[57825] = anon_sym_DASH_DASH;
	v->a[57826] = actions(1957);
	v->a[57827] = 2;
	v->a[57828] = anon_sym_DASH2;
	v->a[57829] = anon_sym_PLUS2;
	v->a[57830] = actions(1965);
	v->a[57831] = 2;
	v->a[57832] = sym_number;
	v->a[57833] = aux_sym__simple_variable_name_token1;
	v->a[57834] = state(462);
	v->a[57835] = 3;
	v->a[57836] = sym_string;
	v->a[57837] = sym_simple_expansion;
	v->a[57838] = sym_expansion;
	v->a[57839] = state(570);
	small_parse_table_2892(v);
}

void	small_parse_table_2892(t_small_parse_table_array *v)
{
	v->a[57840] = 8;
	v->a[57841] = sym__arithmetic_expression;
	v->a[57842] = sym_arithmetic_literal;
	v->a[57843] = sym_arithmetic_binary_expression;
	v->a[57844] = sym_arithmetic_ternary_expression;
	v->a[57845] = sym_arithmetic_unary_expression;
	v->a[57846] = sym_arithmetic_postfix_expression;
	v->a[57847] = sym_arithmetic_parenthesized_expression;
	v->a[57848] = sym_command_substitution;
	v->a[57849] = 15;
	v->a[57850] = actions(1074);
	v->a[57851] = 1;
	v->a[57852] = sym_comment;
	v->a[57853] = actions(1951);
	v->a[57854] = 1;
	v->a[57855] = anon_sym_LPAREN;
	v->a[57856] = actions(1953);
	v->a[57857] = 1;
	v->a[57858] = anon_sym_BANG;
	v->a[57859] = actions(1959);
	small_parse_table_2893(v);
}

void	small_parse_table_2893(t_small_parse_table_array *v)
{
	v->a[57860] = 1;
	v->a[57861] = anon_sym_TILDE;
	v->a[57862] = actions(1961);
	v->a[57863] = 1;
	v->a[57864] = anon_sym_DOLLAR;
	v->a[57865] = actions(1963);
	v->a[57866] = 1;
	v->a[57867] = anon_sym_DQUOTE;
	v->a[57868] = actions(1967);
	v->a[57869] = 1;
	v->a[57870] = anon_sym_DOLLAR_LBRACE;
	v->a[57871] = actions(1969);
	v->a[57872] = 1;
	v->a[57873] = anon_sym_DOLLAR_LPAREN;
	v->a[57874] = actions(1971);
	v->a[57875] = 1;
	v->a[57876] = anon_sym_BQUOTE;
	v->a[57877] = actions(1973);
	v->a[57878] = 1;
	v->a[57879] = sym_variable_name;
	small_parse_table_2894(v);
}

void	small_parse_table_2894(t_small_parse_table_array *v)
{
	v->a[57880] = actions(1955);
	v->a[57881] = 2;
	v->a[57882] = anon_sym_PLUS_PLUS;
	v->a[57883] = anon_sym_DASH_DASH;
	v->a[57884] = actions(1957);
	v->a[57885] = 2;
	v->a[57886] = anon_sym_DASH2;
	v->a[57887] = anon_sym_PLUS2;
	v->a[57888] = actions(1965);
	v->a[57889] = 2;
	v->a[57890] = sym_number;
	v->a[57891] = aux_sym__simple_variable_name_token1;
	v->a[57892] = state(462);
	v->a[57893] = 3;
	v->a[57894] = sym_string;
	v->a[57895] = sym_simple_expansion;
	v->a[57896] = sym_expansion;
	v->a[57897] = state(571);
	v->a[57898] = 8;
	v->a[57899] = sym__arithmetic_expression;
	small_parse_table_2895(v);
}

/* EOF small_parse_table_578.c */
