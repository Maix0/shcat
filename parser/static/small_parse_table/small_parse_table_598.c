/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_598.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2990(t_small_parse_table_array *v)
{
	v->a[59800] = sym_string;
	v->a[59801] = sym_simple_expansion;
	v->a[59802] = sym_expansion;
	v->a[59803] = state(404);
	v->a[59804] = 8;
	v->a[59805] = sym__arithmetic_expression;
	v->a[59806] = sym_arithmetic_literal;
	v->a[59807] = sym_arithmetic_binary_expression;
	v->a[59808] = sym_arithmetic_ternary_expression;
	v->a[59809] = sym_arithmetic_unary_expression;
	v->a[59810] = sym_arithmetic_postfix_expression;
	v->a[59811] = sym_arithmetic_parenthesized_expression;
	v->a[59812] = sym_command_substitution;
	v->a[59813] = 15;
	v->a[59814] = actions(1074);
	v->a[59815] = 1;
	v->a[59816] = sym_comment;
	v->a[59817] = actions(1831);
	v->a[59818] = 1;
	v->a[59819] = anon_sym_LPAREN;
	small_parse_table_2991(v);
}

void	small_parse_table_2991(t_small_parse_table_array *v)
{
	v->a[59820] = actions(1833);
	v->a[59821] = 1;
	v->a[59822] = anon_sym_BANG;
	v->a[59823] = actions(1841);
	v->a[59824] = 1;
	v->a[59825] = anon_sym_TILDE;
	v->a[59826] = actions(1843);
	v->a[59827] = 1;
	v->a[59828] = anon_sym_DOLLAR;
	v->a[59829] = actions(1845);
	v->a[59830] = 1;
	v->a[59831] = anon_sym_DQUOTE;
	v->a[59832] = actions(1849);
	v->a[59833] = 1;
	v->a[59834] = anon_sym_DOLLAR_LBRACE;
	v->a[59835] = actions(1851);
	v->a[59836] = 1;
	v->a[59837] = anon_sym_DOLLAR_LPAREN;
	v->a[59838] = actions(1853);
	v->a[59839] = 1;
	small_parse_table_2992(v);
}

void	small_parse_table_2992(t_small_parse_table_array *v)
{
	v->a[59840] = anon_sym_BQUOTE;
	v->a[59841] = actions(1855);
	v->a[59842] = 1;
	v->a[59843] = sym_variable_name;
	v->a[59844] = actions(1837);
	v->a[59845] = 2;
	v->a[59846] = anon_sym_PLUS_PLUS;
	v->a[59847] = anon_sym_DASH_DASH;
	v->a[59848] = actions(1839);
	v->a[59849] = 2;
	v->a[59850] = anon_sym_DASH2;
	v->a[59851] = anon_sym_PLUS2;
	v->a[59852] = actions(1847);
	v->a[59853] = 2;
	v->a[59854] = sym_number;
	v->a[59855] = aux_sym__simple_variable_name_token1;
	v->a[59856] = state(370);
	v->a[59857] = 3;
	v->a[59858] = sym_string;
	v->a[59859] = sym_simple_expansion;
	small_parse_table_2993(v);
}

void	small_parse_table_2993(t_small_parse_table_array *v)
{
	v->a[59860] = sym_expansion;
	v->a[59861] = state(403);
	v->a[59862] = 8;
	v->a[59863] = sym__arithmetic_expression;
	v->a[59864] = sym_arithmetic_literal;
	v->a[59865] = sym_arithmetic_binary_expression;
	v->a[59866] = sym_arithmetic_ternary_expression;
	v->a[59867] = sym_arithmetic_unary_expression;
	v->a[59868] = sym_arithmetic_postfix_expression;
	v->a[59869] = sym_arithmetic_parenthesized_expression;
	v->a[59870] = sym_command_substitution;
	v->a[59871] = 6;
	v->a[59872] = actions(3);
	v->a[59873] = 1;
	v->a[59874] = sym_comment;
	v->a[59875] = actions(385);
	v->a[59876] = 1;
	v->a[59877] = sym_file_descriptor;
	v->a[59878] = actions(1995);
	v->a[59879] = 1;
	small_parse_table_2994(v);
}

void	small_parse_table_2994(t_small_parse_table_array *v)
{
	v->a[59880] = sym_variable_name;
	v->a[59881] = actions(1993);
	v->a[59882] = 2;
	v->a[59883] = aux_sym__simple_variable_name_token1;
	v->a[59884] = aux_sym__multiline_variable_name_token1;
	v->a[59885] = actions(1991);
	v->a[59886] = 9;
	v->a[59887] = anon_sym_BANG;
	v->a[59888] = anon_sym_DASH;
	v->a[59889] = anon_sym_STAR;
	v->a[59890] = anon_sym_QMARK;
	v->a[59891] = anon_sym_DOLLAR;
	v->a[59892] = anon_sym_POUND;
	v->a[59893] = anon_sym_AT;
	v->a[59894] = anon_sym_0;
	v->a[59895] = anon_sym__;
	v->a[59896] = actions(379);
	v->a[59897] = 13;
	v->a[59898] = anon_sym_AMP_AMP;
	v->a[59899] = anon_sym_PIPE_PIPE;
	small_parse_table_2995(v);
}

/* EOF small_parse_table_598.c */
