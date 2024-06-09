/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_577.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2885(t_small_parse_table_array *v)
{
	v->a[57700] = 1;
	v->a[57701] = sym_comment;
	v->a[57702] = actions(1979);
	v->a[57703] = 1;
	v->a[57704] = anon_sym_LPAREN;
	v->a[57705] = actions(1981);
	v->a[57706] = 1;
	v->a[57707] = anon_sym_BANG;
	v->a[57708] = actions(1989);
	v->a[57709] = 1;
	v->a[57710] = anon_sym_TILDE;
	v->a[57711] = actions(1991);
	v->a[57712] = 1;
	v->a[57713] = anon_sym_DOLLAR;
	v->a[57714] = actions(1993);
	v->a[57715] = 1;
	v->a[57716] = anon_sym_DQUOTE;
	v->a[57717] = actions(1995);
	v->a[57718] = 1;
	v->a[57719] = aux_sym_number_token1;
	small_parse_table_2886(v);
}

void	small_parse_table_2886(t_small_parse_table_array *v)
{
	v->a[57720] = actions(1997);
	v->a[57721] = 1;
	v->a[57722] = aux_sym_number_token2;
	v->a[57723] = actions(1999);
	v->a[57724] = 1;
	v->a[57725] = anon_sym_DOLLAR_LBRACE;
	v->a[57726] = actions(2001);
	v->a[57727] = 1;
	v->a[57728] = anon_sym_DOLLAR_LPAREN;
	v->a[57729] = actions(2003);
	v->a[57730] = 1;
	v->a[57731] = anon_sym_BQUOTE;
	v->a[57732] = actions(2005);
	v->a[57733] = 1;
	v->a[57734] = aux_sym__simple_variable_name_token1;
	v->a[57735] = actions(2007);
	v->a[57736] = 1;
	v->a[57737] = sym_variable_name;
	v->a[57738] = actions(1985);
	v->a[57739] = 2;
	small_parse_table_2887(v);
}

void	small_parse_table_2887(t_small_parse_table_array *v)
{
	v->a[57740] = anon_sym_PLUS_PLUS;
	v->a[57741] = anon_sym_DASH_DASH;
	v->a[57742] = actions(1987);
	v->a[57743] = 2;
	v->a[57744] = anon_sym_DASH2;
	v->a[57745] = anon_sym_PLUS2;
	v->a[57746] = state(530);
	v->a[57747] = 4;
	v->a[57748] = sym_string;
	v->a[57749] = sym_number;
	v->a[57750] = sym_simple_expansion;
	v->a[57751] = sym_expansion;
	v->a[57752] = state(605);
	v->a[57753] = 8;
	v->a[57754] = sym__arithmetic_expression;
	v->a[57755] = sym_arithmetic_literal;
	v->a[57756] = sym_arithmetic_binary_expression;
	v->a[57757] = sym_arithmetic_ternary_expression;
	v->a[57758] = sym_arithmetic_unary_expression;
	v->a[57759] = sym_arithmetic_postfix_expression;
	small_parse_table_2888(v);
}

void	small_parse_table_2888(t_small_parse_table_array *v)
{
	v->a[57760] = sym_arithmetic_parenthesized_expression;
	v->a[57761] = sym_command_substitution;
	v->a[57762] = 17;
	v->a[57763] = actions(1404);
	v->a[57764] = 1;
	v->a[57765] = sym_comment;
	v->a[57766] = actions(2077);
	v->a[57767] = 1;
	v->a[57768] = anon_sym_LPAREN;
	v->a[57769] = actions(2079);
	v->a[57770] = 1;
	v->a[57771] = anon_sym_BANG;
	v->a[57772] = actions(2085);
	v->a[57773] = 1;
	v->a[57774] = anon_sym_TILDE;
	v->a[57775] = actions(2087);
	v->a[57776] = 1;
	v->a[57777] = anon_sym_DOLLAR;
	v->a[57778] = actions(2089);
	v->a[57779] = 1;
	small_parse_table_2889(v);
}

void	small_parse_table_2889(t_small_parse_table_array *v)
{
	v->a[57780] = anon_sym_DQUOTE;
	v->a[57781] = actions(2091);
	v->a[57782] = 1;
	v->a[57783] = aux_sym_number_token1;
	v->a[57784] = actions(2093);
	v->a[57785] = 1;
	v->a[57786] = aux_sym_number_token2;
	v->a[57787] = actions(2095);
	v->a[57788] = 1;
	v->a[57789] = anon_sym_DOLLAR_LBRACE;
	v->a[57790] = actions(2097);
	v->a[57791] = 1;
	v->a[57792] = anon_sym_DOLLAR_LPAREN;
	v->a[57793] = actions(2099);
	v->a[57794] = 1;
	v->a[57795] = anon_sym_BQUOTE;
	v->a[57796] = actions(2101);
	v->a[57797] = 1;
	v->a[57798] = aux_sym__simple_variable_name_token1;
	v->a[57799] = actions(2103);
	small_parse_table_2890(v);
}

/* EOF small_parse_table_577.c */
