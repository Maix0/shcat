/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_656.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3280(t_small_parse_table_array *v)
{
	v->a[65600] = 1;
	v->a[65601] = anon_sym_BQUOTE;
	v->a[65602] = actions(2500);
	v->a[65603] = 1;
	v->a[65604] = sym__bare_dollar;
	v->a[65605] = actions(2585);
	v->a[65606] = 1;
	v->a[65607] = anon_sym_DOLLAR;
	v->a[65608] = actions(2498);
	v->a[65609] = 5;
	v->a[65610] = aux_sym_concatenation_token1;
	v->a[65611] = sym_raw_string;
	v->a[65612] = sym_number;
	v->a[65613] = sym__comment_word;
	v->a[65614] = sym_word;
	v->a[65615] = state(619);
	v->a[65616] = 5;
	v->a[65617] = sym_arithmetic_expansion;
	v->a[65618] = sym_string;
	v->a[65619] = sym_simple_expansion;
	small_parse_table_3281(v);
}

void	small_parse_table_3281(t_small_parse_table_array *v)
{
	v->a[65620] = sym_expansion;
	v->a[65621] = sym_command_substitution;
	v->a[65622] = 10;
	v->a[65623] = actions(3);
	v->a[65624] = 1;
	v->a[65625] = sym_comment;
	v->a[65626] = actions(445);
	v->a[65627] = 1;
	v->a[65628] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65629] = actions(447);
	v->a[65630] = 1;
	v->a[65631] = anon_sym_DOLLAR;
	v->a[65632] = actions(449);
	v->a[65633] = 1;
	v->a[65634] = anon_sym_DQUOTE;
	v->a[65635] = actions(451);
	v->a[65636] = 1;
	v->a[65637] = anon_sym_DOLLAR_LBRACE;
	v->a[65638] = actions(453);
	v->a[65639] = 1;
	small_parse_table_3282(v);
}

void	small_parse_table_3282(t_small_parse_table_array *v)
{
	v->a[65640] = anon_sym_DOLLAR_LPAREN;
	v->a[65641] = actions(455);
	v->a[65642] = 1;
	v->a[65643] = anon_sym_BQUOTE;
	v->a[65644] = actions(2589);
	v->a[65645] = 1;
	v->a[65646] = sym__bare_dollar;
	v->a[65647] = actions(2587);
	v->a[65648] = 5;
	v->a[65649] = aux_sym_concatenation_token1;
	v->a[65650] = sym_raw_string;
	v->a[65651] = sym_number;
	v->a[65652] = sym__comment_word;
	v->a[65653] = sym_word;
	v->a[65654] = state(510);
	v->a[65655] = 5;
	v->a[65656] = sym_arithmetic_expansion;
	v->a[65657] = sym_string;
	v->a[65658] = sym_simple_expansion;
	v->a[65659] = sym_expansion;
	small_parse_table_3283(v);
}

void	small_parse_table_3283(t_small_parse_table_array *v)
{
	v->a[65660] = sym_command_substitution;
	v->a[65661] = 10;
	v->a[65662] = actions(3);
	v->a[65663] = 1;
	v->a[65664] = sym_comment;
	v->a[65665] = actions(903);
	v->a[65666] = 1;
	v->a[65667] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65668] = actions(905);
	v->a[65669] = 1;
	v->a[65670] = anon_sym_DOLLAR;
	v->a[65671] = actions(907);
	v->a[65672] = 1;
	v->a[65673] = anon_sym_DQUOTE;
	v->a[65674] = actions(909);
	v->a[65675] = 1;
	v->a[65676] = anon_sym_DOLLAR_LBRACE;
	v->a[65677] = actions(911);
	v->a[65678] = 1;
	v->a[65679] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3284(v);
}

void	small_parse_table_3284(t_small_parse_table_array *v)
{
	v->a[65680] = actions(913);
	v->a[65681] = 1;
	v->a[65682] = anon_sym_BQUOTE;
	v->a[65683] = actions(2439);
	v->a[65684] = 1;
	v->a[65685] = sym__bare_dollar;
	v->a[65686] = actions(2435);
	v->a[65687] = 5;
	v->a[65688] = aux_sym_concatenation_token1;
	v->a[65689] = sym_raw_string;
	v->a[65690] = sym_number;
	v->a[65691] = sym__comment_word;
	v->a[65692] = sym_word;
	v->a[65693] = state(624);
	v->a[65694] = 5;
	v->a[65695] = sym_arithmetic_expansion;
	v->a[65696] = sym_string;
	v->a[65697] = sym_simple_expansion;
	v->a[65698] = sym_expansion;
	v->a[65699] = sym_command_substitution;
	small_parse_table_3285(v);
}

/* EOF small_parse_table_656.c */
