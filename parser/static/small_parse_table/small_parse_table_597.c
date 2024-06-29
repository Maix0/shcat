/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_597.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2985(t_small_parse_table_array *v)
{
	v->a[59700] = sym_comment;
	v->a[59701] = actions(1831);
	v->a[59702] = 1;
	v->a[59703] = anon_sym_LPAREN;
	v->a[59704] = actions(1833);
	v->a[59705] = 1;
	v->a[59706] = anon_sym_BANG;
	v->a[59707] = actions(1841);
	v->a[59708] = 1;
	v->a[59709] = anon_sym_TILDE;
	v->a[59710] = actions(1843);
	v->a[59711] = 1;
	v->a[59712] = anon_sym_DOLLAR;
	v->a[59713] = actions(1845);
	v->a[59714] = 1;
	v->a[59715] = anon_sym_DQUOTE;
	v->a[59716] = actions(1849);
	v->a[59717] = 1;
	v->a[59718] = anon_sym_DOLLAR_LBRACE;
	v->a[59719] = actions(1851);
	small_parse_table_2986(v);
}

void	small_parse_table_2986(t_small_parse_table_array *v)
{
	v->a[59720] = 1;
	v->a[59721] = anon_sym_DOLLAR_LPAREN;
	v->a[59722] = actions(1853);
	v->a[59723] = 1;
	v->a[59724] = anon_sym_BQUOTE;
	v->a[59725] = actions(1855);
	v->a[59726] = 1;
	v->a[59727] = sym_variable_name;
	v->a[59728] = actions(1837);
	v->a[59729] = 2;
	v->a[59730] = anon_sym_PLUS_PLUS;
	v->a[59731] = anon_sym_DASH_DASH;
	v->a[59732] = actions(1839);
	v->a[59733] = 2;
	v->a[59734] = anon_sym_DASH2;
	v->a[59735] = anon_sym_PLUS2;
	v->a[59736] = actions(1847);
	v->a[59737] = 2;
	v->a[59738] = sym_number;
	v->a[59739] = aux_sym__simple_variable_name_token1;
	small_parse_table_2987(v);
}

void	small_parse_table_2987(t_small_parse_table_array *v)
{
	v->a[59740] = state(370);
	v->a[59741] = 3;
	v->a[59742] = sym_string;
	v->a[59743] = sym_simple_expansion;
	v->a[59744] = sym_expansion;
	v->a[59745] = state(405);
	v->a[59746] = 8;
	v->a[59747] = sym__arithmetic_expression;
	v->a[59748] = sym_arithmetic_literal;
	v->a[59749] = sym_arithmetic_binary_expression;
	v->a[59750] = sym_arithmetic_ternary_expression;
	v->a[59751] = sym_arithmetic_unary_expression;
	v->a[59752] = sym_arithmetic_postfix_expression;
	v->a[59753] = sym_arithmetic_parenthesized_expression;
	v->a[59754] = sym_command_substitution;
	v->a[59755] = 15;
	v->a[59756] = actions(1074);
	v->a[59757] = 1;
	v->a[59758] = sym_comment;
	v->a[59759] = actions(1831);
	small_parse_table_2988(v);
}

void	small_parse_table_2988(t_small_parse_table_array *v)
{
	v->a[59760] = 1;
	v->a[59761] = anon_sym_LPAREN;
	v->a[59762] = actions(1833);
	v->a[59763] = 1;
	v->a[59764] = anon_sym_BANG;
	v->a[59765] = actions(1841);
	v->a[59766] = 1;
	v->a[59767] = anon_sym_TILDE;
	v->a[59768] = actions(1843);
	v->a[59769] = 1;
	v->a[59770] = anon_sym_DOLLAR;
	v->a[59771] = actions(1845);
	v->a[59772] = 1;
	v->a[59773] = anon_sym_DQUOTE;
	v->a[59774] = actions(1849);
	v->a[59775] = 1;
	v->a[59776] = anon_sym_DOLLAR_LBRACE;
	v->a[59777] = actions(1851);
	v->a[59778] = 1;
	v->a[59779] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2989(v);
}

void	small_parse_table_2989(t_small_parse_table_array *v)
{
	v->a[59780] = actions(1853);
	v->a[59781] = 1;
	v->a[59782] = anon_sym_BQUOTE;
	v->a[59783] = actions(1855);
	v->a[59784] = 1;
	v->a[59785] = sym_variable_name;
	v->a[59786] = actions(1837);
	v->a[59787] = 2;
	v->a[59788] = anon_sym_PLUS_PLUS;
	v->a[59789] = anon_sym_DASH_DASH;
	v->a[59790] = actions(1839);
	v->a[59791] = 2;
	v->a[59792] = anon_sym_DASH2;
	v->a[59793] = anon_sym_PLUS2;
	v->a[59794] = actions(1847);
	v->a[59795] = 2;
	v->a[59796] = sym_number;
	v->a[59797] = aux_sym__simple_variable_name_token1;
	v->a[59798] = state(370);
	v->a[59799] = 3;
	small_parse_table_2990(v);
}

/* EOF small_parse_table_597.c */
