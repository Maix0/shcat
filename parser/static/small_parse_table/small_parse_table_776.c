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
	v->a[77600] = state(645);
	v->a[77601] = 5;
	v->a[77602] = sym_arithmetic_expansion;
	v->a[77603] = sym_string;
	v->a[77604] = sym_simple_expansion;
	v->a[77605] = sym_expansion;
	v->a[77606] = sym_command_substitution;
	v->a[77607] = 10;
	v->a[77608] = actions(3);
	v->a[77609] = 1;
	v->a[77610] = sym_comment;
	v->a[77611] = actions(2663);
	v->a[77612] = 1;
	v->a[77613] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77614] = actions(2667);
	v->a[77615] = 1;
	v->a[77616] = anon_sym_DQUOTE;
	v->a[77617] = actions(2669);
	v->a[77618] = 1;
	v->a[77619] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3881(v);
}

void	small_parse_table_3881(t_small_parse_table_array *v)
{
	v->a[77620] = actions(2671);
	v->a[77621] = 1;
	v->a[77622] = anon_sym_DOLLAR_LPAREN;
	v->a[77623] = actions(2673);
	v->a[77624] = 1;
	v->a[77625] = anon_sym_BQUOTE;
	v->a[77626] = actions(2675);
	v->a[77627] = 1;
	v->a[77628] = sym__bare_dollar;
	v->a[77629] = actions(2972);
	v->a[77630] = 1;
	v->a[77631] = anon_sym_DOLLAR;
	v->a[77632] = actions(2661);
	v->a[77633] = 5;
	v->a[77634] = aux_sym_concatenation_token1;
	v->a[77635] = sym_raw_string;
	v->a[77636] = sym_number;
	v->a[77637] = sym__comment_word;
	v->a[77638] = sym_word;
	v->a[77639] = state(990);
	small_parse_table_3882(v);
}

void	small_parse_table_3882(t_small_parse_table_array *v)
{
	v->a[77640] = 5;
	v->a[77641] = sym_arithmetic_expansion;
	v->a[77642] = sym_string;
	v->a[77643] = sym_simple_expansion;
	v->a[77644] = sym_expansion;
	v->a[77645] = sym_command_substitution;
	v->a[77646] = 10;
	v->a[77647] = actions(3);
	v->a[77648] = 1;
	v->a[77649] = sym_comment;
	v->a[77650] = actions(699);
	v->a[77651] = 1;
	v->a[77652] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77653] = actions(703);
	v->a[77654] = 1;
	v->a[77655] = anon_sym_DQUOTE;
	v->a[77656] = actions(705);
	v->a[77657] = 1;
	v->a[77658] = anon_sym_DOLLAR_LBRACE;
	v->a[77659] = actions(707);
	small_parse_table_3883(v);
}

void	small_parse_table_3883(t_small_parse_table_array *v)
{
	v->a[77660] = 1;
	v->a[77661] = anon_sym_DOLLAR_LPAREN;
	v->a[77662] = actions(709);
	v->a[77663] = 1;
	v->a[77664] = anon_sym_BQUOTE;
	v->a[77665] = actions(2605);
	v->a[77666] = 1;
	v->a[77667] = sym__bare_dollar;
	v->a[77668] = actions(2974);
	v->a[77669] = 1;
	v->a[77670] = anon_sym_DOLLAR;
	v->a[77671] = actions(2601);
	v->a[77672] = 5;
	v->a[77673] = aux_sym_concatenation_token1;
	v->a[77674] = sym_raw_string;
	v->a[77675] = sym_number;
	v->a[77676] = sym__comment_word;
	v->a[77677] = sym_word;
	v->a[77678] = state(619);
	v->a[77679] = 5;
	small_parse_table_3884(v);
}

void	small_parse_table_3884(t_small_parse_table_array *v)
{
	v->a[77680] = sym_arithmetic_expansion;
	v->a[77681] = sym_string;
	v->a[77682] = sym_simple_expansion;
	v->a[77683] = sym_expansion;
	v->a[77684] = sym_command_substitution;
	v->a[77685] = 5;
	v->a[77686] = actions(3);
	v->a[77687] = 1;
	v->a[77688] = sym_comment;
	v->a[77689] = actions(2980);
	v->a[77690] = 1;
	v->a[77691] = sym_variable_name;
	v->a[77692] = actions(2978);
	v->a[77693] = 2;
	v->a[77694] = aux_sym__simple_variable_name_token1;
	v->a[77695] = aux_sym__multiline_variable_name_token1;
	v->a[77696] = actions(381);
	v->a[77697] = 5;
	v->a[77698] = anon_sym_in;
	v->a[77699] = anon_sym_SEMI_SEMI;
	small_parse_table_3885(v);
}

/* EOF small_parse_table_776.c */
