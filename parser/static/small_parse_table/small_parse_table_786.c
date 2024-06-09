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
	v->a[78600] = sym_arithmetic_expansion;
	v->a[78601] = sym_string;
	v->a[78602] = sym_number;
	v->a[78603] = sym_simple_expansion;
	v->a[78604] = sym_expansion;
	v->a[78605] = sym_command_substitution;
	v->a[78606] = 12;
	v->a[78607] = actions(3);
	v->a[78608] = 1;
	v->a[78609] = sym_comment;
	v->a[78610] = actions(797);
	v->a[78611] = 1;
	v->a[78612] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78613] = actions(799);
	v->a[78614] = 1;
	v->a[78615] = anon_sym_DOLLAR;
	v->a[78616] = actions(801);
	v->a[78617] = 1;
	v->a[78618] = anon_sym_DQUOTE;
	v->a[78619] = actions(803);
	small_parse_table_3931(v);
}

void	small_parse_table_3931(t_small_parse_table_array *v)
{
	v->a[78620] = 1;
	v->a[78621] = aux_sym_number_token1;
	v->a[78622] = actions(805);
	v->a[78623] = 1;
	v->a[78624] = aux_sym_number_token2;
	v->a[78625] = actions(807);
	v->a[78626] = 1;
	v->a[78627] = anon_sym_DOLLAR_LBRACE;
	v->a[78628] = actions(809);
	v->a[78629] = 1;
	v->a[78630] = anon_sym_DOLLAR_LPAREN;
	v->a[78631] = actions(811);
	v->a[78632] = 1;
	v->a[78633] = anon_sym_BQUOTE;
	v->a[78634] = actions(3140);
	v->a[78635] = 1;
	v->a[78636] = sym__bare_dollar;
	v->a[78637] = actions(3136);
	v->a[78638] = 3;
	v->a[78639] = sym_raw_string;
	small_parse_table_3932(v);
}

void	small_parse_table_3932(t_small_parse_table_array *v)
{
	v->a[78640] = sym__comment_word;
	v->a[78641] = sym_word;
	v->a[78642] = state(607);
	v->a[78643] = 6;
	v->a[78644] = sym_arithmetic_expansion;
	v->a[78645] = sym_string;
	v->a[78646] = sym_number;
	v->a[78647] = sym_simple_expansion;
	v->a[78648] = sym_expansion;
	v->a[78649] = sym_command_substitution;
	v->a[78650] = 12;
	v->a[78651] = actions(3);
	v->a[78652] = 1;
	v->a[78653] = sym_comment;
	v->a[78654] = actions(2851);
	v->a[78655] = 1;
	v->a[78656] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78657] = actions(2853);
	v->a[78658] = 1;
	v->a[78659] = anon_sym_DOLLAR;
	small_parse_table_3933(v);
}

void	small_parse_table_3933(t_small_parse_table_array *v)
{
	v->a[78660] = actions(2855);
	v->a[78661] = 1;
	v->a[78662] = anon_sym_DQUOTE;
	v->a[78663] = actions(2857);
	v->a[78664] = 1;
	v->a[78665] = aux_sym_number_token1;
	v->a[78666] = actions(2859);
	v->a[78667] = 1;
	v->a[78668] = aux_sym_number_token2;
	v->a[78669] = actions(2861);
	v->a[78670] = 1;
	v->a[78671] = anon_sym_DOLLAR_LBRACE;
	v->a[78672] = actions(2863);
	v->a[78673] = 1;
	v->a[78674] = anon_sym_DOLLAR_LPAREN;
	v->a[78675] = actions(2865);
	v->a[78676] = 1;
	v->a[78677] = anon_sym_BQUOTE;
	v->a[78678] = actions(3220);
	v->a[78679] = 1;
	small_parse_table_3934(v);
}

void	small_parse_table_3934(t_small_parse_table_array *v)
{
	v->a[78680] = sym__bare_dollar;
	v->a[78681] = actions(3218);
	v->a[78682] = 3;
	v->a[78683] = sym_raw_string;
	v->a[78684] = sym__comment_word;
	v->a[78685] = sym_word;
	v->a[78686] = state(1052);
	v->a[78687] = 6;
	v->a[78688] = sym_arithmetic_expansion;
	v->a[78689] = sym_string;
	v->a[78690] = sym_number;
	v->a[78691] = sym_simple_expansion;
	v->a[78692] = sym_expansion;
	v->a[78693] = sym_command_substitution;
	v->a[78694] = 12;
	v->a[78695] = actions(3);
	v->a[78696] = 1;
	v->a[78697] = sym_comment;
	v->a[78698] = actions(2803);
	v->a[78699] = 1;
	small_parse_table_3935(v);
}

/* EOF small_parse_table_786.c */
