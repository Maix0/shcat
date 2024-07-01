/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_766.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3830(t_small_parse_table_array *v)
{
	v->a[76600] = 1;
	v->a[76601] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76602] = actions(3077);
	v->a[76603] = 1;
	v->a[76604] = sym_string_content;
	v->a[76605] = actions(3079);
	v->a[76606] = 1;
	v->a[76607] = anon_sym_DOLLAR_LBRACE;
	v->a[76608] = actions(3081);
	v->a[76609] = 1;
	v->a[76610] = anon_sym_DOLLAR_LPAREN;
	v->a[76611] = actions(3083);
	v->a[76612] = 1;
	v->a[76613] = anon_sym_BQUOTE;
	v->a[76614] = actions(3139);
	v->a[76615] = 1;
	v->a[76616] = anon_sym_DOLLAR;
	v->a[76617] = actions(3141);
	v->a[76618] = 1;
	v->a[76619] = anon_sym_DQUOTE;
	small_parse_table_3831(v);
}

void	small_parse_table_3831(t_small_parse_table_array *v)
{
	v->a[76620] = state(1608);
	v->a[76621] = 1;
	v->a[76622] = aux_sym_string_repeat1;
	v->a[76623] = state(1739);
	v->a[76624] = 4;
	v->a[76625] = sym_arithmetic_expansion;
	v->a[76626] = sym_simple_expansion;
	v->a[76627] = sym_expansion;
	v->a[76628] = sym_command_substitution;
	v->a[76629] = 4;
	v->a[76630] = actions(3);
	v->a[76631] = 1;
	v->a[76632] = sym_comment;
	v->a[76633] = actions(405);
	v->a[76634] = 1;
	v->a[76635] = sym_variable_name;
	v->a[76636] = actions(403);
	v->a[76637] = 2;
	v->a[76638] = aux_sym__simple_variable_name_token1;
	v->a[76639] = aux_sym__multiline_variable_name_token1;
	small_parse_table_3832(v);
}

void	small_parse_table_3832(t_small_parse_table_array *v)
{
	v->a[76640] = actions(401);
	v->a[76641] = 9;
	v->a[76642] = anon_sym_BANG;
	v->a[76643] = anon_sym_DASH;
	v->a[76644] = anon_sym_STAR;
	v->a[76645] = anon_sym_QMARK;
	v->a[76646] = anon_sym_DOLLAR;
	v->a[76647] = anon_sym_POUND;
	v->a[76648] = anon_sym_AT;
	v->a[76649] = anon_sym_0;
	v->a[76650] = anon_sym__;
	v->a[76651] = 4;
	v->a[76652] = actions(3);
	v->a[76653] = 1;
	v->a[76654] = sym_comment;
	v->a[76655] = actions(1549);
	v->a[76656] = 1;
	v->a[76657] = sym_variable_name;
	v->a[76658] = actions(1547);
	v->a[76659] = 2;
	small_parse_table_3833(v);
}

void	small_parse_table_3833(t_small_parse_table_array *v)
{
	v->a[76660] = aux_sym__simple_variable_name_token1;
	v->a[76661] = aux_sym__multiline_variable_name_token1;
	v->a[76662] = actions(1545);
	v->a[76663] = 9;
	v->a[76664] = anon_sym_BANG;
	v->a[76665] = anon_sym_DASH;
	v->a[76666] = anon_sym_STAR;
	v->a[76667] = anon_sym_QMARK;
	v->a[76668] = anon_sym_DOLLAR;
	v->a[76669] = anon_sym_POUND;
	v->a[76670] = anon_sym_AT;
	v->a[76671] = anon_sym_0;
	v->a[76672] = anon_sym__;
	v->a[76673] = 10;
	v->a[76674] = actions(3);
	v->a[76675] = 1;
	v->a[76676] = sym_comment;
	v->a[76677] = actions(3071);
	v->a[76678] = 1;
	v->a[76679] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3834(v);
}

void	small_parse_table_3834(t_small_parse_table_array *v)
{
	v->a[76680] = actions(3077);
	v->a[76681] = 1;
	v->a[76682] = sym_string_content;
	v->a[76683] = actions(3079);
	v->a[76684] = 1;
	v->a[76685] = anon_sym_DOLLAR_LBRACE;
	v->a[76686] = actions(3081);
	v->a[76687] = 1;
	v->a[76688] = anon_sym_DOLLAR_LPAREN;
	v->a[76689] = actions(3083);
	v->a[76690] = 1;
	v->a[76691] = anon_sym_BQUOTE;
	v->a[76692] = actions(3143);
	v->a[76693] = 1;
	v->a[76694] = anon_sym_DOLLAR;
	v->a[76695] = actions(3145);
	v->a[76696] = 1;
	v->a[76697] = anon_sym_DQUOTE;
	v->a[76698] = state(1616);
	v->a[76699] = 1;
	small_parse_table_3835(v);
}

/* EOF small_parse_table_766.c */
