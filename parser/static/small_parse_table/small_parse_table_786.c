/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_786.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3930(t_small_parse_table_array *v)
{
	v->a[78600] = anon_sym_DOLLAR;
	v->a[78601] = actions(3361);
	v->a[78602] = 1;
	v->a[78603] = anon_sym_DQUOTE;
	v->a[78604] = state(1681);
	v->a[78605] = 1;
	v->a[78606] = aux_sym_string_repeat1;
	v->a[78607] = state(1739);
	v->a[78608] = 4;
	v->a[78609] = sym_arithmetic_expansion;
	v->a[78610] = sym_simple_expansion;
	v->a[78611] = sym_expansion;
	v->a[78612] = sym_command_substitution;
	v->a[78613] = 10;
	v->a[78614] = actions(3);
	v->a[78615] = 1;
	v->a[78616] = sym_comment;
	v->a[78617] = actions(3071);
	v->a[78618] = 1;
	v->a[78619] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3931(v);
}

void	small_parse_table_3931(t_small_parse_table_array *v)
{
	v->a[78620] = actions(3077);
	v->a[78621] = 1;
	v->a[78622] = sym_string_content;
	v->a[78623] = actions(3079);
	v->a[78624] = 1;
	v->a[78625] = anon_sym_DOLLAR_LBRACE;
	v->a[78626] = actions(3081);
	v->a[78627] = 1;
	v->a[78628] = anon_sym_DOLLAR_LPAREN;
	v->a[78629] = actions(3083);
	v->a[78630] = 1;
	v->a[78631] = anon_sym_BQUOTE;
	v->a[78632] = actions(3363);
	v->a[78633] = 1;
	v->a[78634] = anon_sym_DOLLAR;
	v->a[78635] = actions(3365);
	v->a[78636] = 1;
	v->a[78637] = anon_sym_DQUOTE;
	v->a[78638] = state(1689);
	v->a[78639] = 1;
	small_parse_table_3932(v);
}

void	small_parse_table_3932(t_small_parse_table_array *v)
{
	v->a[78640] = aux_sym_string_repeat1;
	v->a[78641] = state(1739);
	v->a[78642] = 4;
	v->a[78643] = sym_arithmetic_expansion;
	v->a[78644] = sym_simple_expansion;
	v->a[78645] = sym_expansion;
	v->a[78646] = sym_command_substitution;
	v->a[78647] = 4;
	v->a[78648] = actions(3);
	v->a[78649] = 1;
	v->a[78650] = sym_comment;
	v->a[78651] = actions(2358);
	v->a[78652] = 1;
	v->a[78653] = sym_variable_name;
	v->a[78654] = actions(2356);
	v->a[78655] = 2;
	v->a[78656] = aux_sym__simple_variable_name_token1;
	v->a[78657] = aux_sym__multiline_variable_name_token1;
	v->a[78658] = actions(2354);
	v->a[78659] = 9;
	small_parse_table_3933(v);
}

void	small_parse_table_3933(t_small_parse_table_array *v)
{
	v->a[78660] = anon_sym_BANG;
	v->a[78661] = anon_sym_DASH;
	v->a[78662] = anon_sym_STAR;
	v->a[78663] = anon_sym_QMARK;
	v->a[78664] = anon_sym_DOLLAR;
	v->a[78665] = anon_sym_POUND;
	v->a[78666] = anon_sym_AT;
	v->a[78667] = anon_sym_0;
	v->a[78668] = anon_sym__;
	v->a[78669] = 10;
	v->a[78670] = actions(3);
	v->a[78671] = 1;
	v->a[78672] = sym_comment;
	v->a[78673] = actions(3071);
	v->a[78674] = 1;
	v->a[78675] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78676] = actions(3077);
	v->a[78677] = 1;
	v->a[78678] = sym_string_content;
	v->a[78679] = actions(3079);
	small_parse_table_3934(v);
}

void	small_parse_table_3934(t_small_parse_table_array *v)
{
	v->a[78680] = 1;
	v->a[78681] = anon_sym_DOLLAR_LBRACE;
	v->a[78682] = actions(3081);
	v->a[78683] = 1;
	v->a[78684] = anon_sym_DOLLAR_LPAREN;
	v->a[78685] = actions(3083);
	v->a[78686] = 1;
	v->a[78687] = anon_sym_BQUOTE;
	v->a[78688] = actions(3367);
	v->a[78689] = 1;
	v->a[78690] = anon_sym_DOLLAR;
	v->a[78691] = actions(3369);
	v->a[78692] = 1;
	v->a[78693] = anon_sym_DQUOTE;
	v->a[78694] = state(1684);
	v->a[78695] = 1;
	v->a[78696] = aux_sym_string_repeat1;
	v->a[78697] = state(1739);
	v->a[78698] = 4;
	v->a[78699] = sym_arithmetic_expansion;
	small_parse_table_3935(v);
}

/* EOF small_parse_table_786.c */
