/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_776.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3880(t_small_parse_table_array *v)
{
	v->a[77600] = 1;
	v->a[77601] = anon_sym_DOLLAR;
	v->a[77602] = actions(3250);
	v->a[77603] = 1;
	v->a[77604] = anon_sym_DQUOTE;
	v->a[77605] = state(1661);
	v->a[77606] = 1;
	v->a[77607] = aux_sym_string_repeat1;
	v->a[77608] = state(1748);
	v->a[77609] = 4;
	v->a[77610] = sym_arithmetic_expansion;
	v->a[77611] = sym_simple_expansion;
	v->a[77612] = sym_expansion;
	v->a[77613] = sym_command_substitution;
	v->a[77614] = 4;
	v->a[77615] = actions(3);
	v->a[77616] = 1;
	v->a[77617] = sym_comment;
	v->a[77618] = actions(429);
	v->a[77619] = 1;
	small_parse_table_3881(v);
}

void	small_parse_table_3881(t_small_parse_table_array *v)
{
	v->a[77620] = sym_variable_name;
	v->a[77621] = actions(427);
	v->a[77622] = 2;
	v->a[77623] = aux_sym__simple_variable_name_token1;
	v->a[77624] = aux_sym__multiline_variable_name_token1;
	v->a[77625] = actions(425);
	v->a[77626] = 9;
	v->a[77627] = anon_sym_BANG;
	v->a[77628] = anon_sym_DASH;
	v->a[77629] = anon_sym_STAR;
	v->a[77630] = anon_sym_QMARK;
	v->a[77631] = anon_sym_DOLLAR;
	v->a[77632] = anon_sym_POUND;
	v->a[77633] = anon_sym_AT;
	v->a[77634] = anon_sym_0;
	v->a[77635] = anon_sym__;
	v->a[77636] = 10;
	v->a[77637] = actions(3);
	v->a[77638] = 1;
	v->a[77639] = sym_comment;
	small_parse_table_3882(v);
}

void	small_parse_table_3882(t_small_parse_table_array *v)
{
	v->a[77640] = actions(3104);
	v->a[77641] = 1;
	v->a[77642] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77643] = actions(3110);
	v->a[77644] = 1;
	v->a[77645] = sym_string_content;
	v->a[77646] = actions(3112);
	v->a[77647] = 1;
	v->a[77648] = anon_sym_DOLLAR_LBRACE;
	v->a[77649] = actions(3114);
	v->a[77650] = 1;
	v->a[77651] = anon_sym_DOLLAR_LPAREN;
	v->a[77652] = actions(3116);
	v->a[77653] = 1;
	v->a[77654] = anon_sym_BQUOTE;
	v->a[77655] = actions(3252);
	v->a[77656] = 1;
	v->a[77657] = anon_sym_DOLLAR;
	v->a[77658] = actions(3254);
	v->a[77659] = 1;
	small_parse_table_3883(v);
}

void	small_parse_table_3883(t_small_parse_table_array *v)
{
	v->a[77660] = anon_sym_DQUOTE;
	v->a[77661] = state(1659);
	v->a[77662] = 1;
	v->a[77663] = aux_sym_string_repeat1;
	v->a[77664] = state(1748);
	v->a[77665] = 4;
	v->a[77666] = sym_arithmetic_expansion;
	v->a[77667] = sym_simple_expansion;
	v->a[77668] = sym_expansion;
	v->a[77669] = sym_command_substitution;
	v->a[77670] = 10;
	v->a[77671] = actions(3);
	v->a[77672] = 1;
	v->a[77673] = sym_comment;
	v->a[77674] = actions(3104);
	v->a[77675] = 1;
	v->a[77676] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77677] = actions(3110);
	v->a[77678] = 1;
	v->a[77679] = sym_string_content;
	small_parse_table_3884(v);
}

void	small_parse_table_3884(t_small_parse_table_array *v)
{
	v->a[77680] = actions(3112);
	v->a[77681] = 1;
	v->a[77682] = anon_sym_DOLLAR_LBRACE;
	v->a[77683] = actions(3114);
	v->a[77684] = 1;
	v->a[77685] = anon_sym_DOLLAR_LPAREN;
	v->a[77686] = actions(3116);
	v->a[77687] = 1;
	v->a[77688] = anon_sym_BQUOTE;
	v->a[77689] = actions(3256);
	v->a[77690] = 1;
	v->a[77691] = anon_sym_DOLLAR;
	v->a[77692] = actions(3258);
	v->a[77693] = 1;
	v->a[77694] = anon_sym_DQUOTE;
	v->a[77695] = state(1661);
	v->a[77696] = 1;
	v->a[77697] = aux_sym_string_repeat1;
	v->a[77698] = state(1748);
	v->a[77699] = 4;
	small_parse_table_3885(v);
}

/* EOF small_parse_table_776.c */
