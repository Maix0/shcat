/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_676.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3380(t_small_parse_table_array *v)
{
	v->a[67600] = state(663);
	v->a[67601] = 1;
	v->a[67602] = sym_concatenation;
	v->a[67603] = actions(2614);
	v->a[67604] = 3;
	v->a[67605] = sym_raw_string;
	v->a[67606] = sym_number;
	v->a[67607] = sym_word;
	v->a[67608] = state(374);
	v->a[67609] = 5;
	v->a[67610] = sym_arithmetic_expansion;
	v->a[67611] = sym_string;
	v->a[67612] = sym_simple_expansion;
	v->a[67613] = sym_expansion;
	v->a[67614] = sym_command_substitution;
	v->a[67615] = 10;
	v->a[67616] = actions(3);
	v->a[67617] = 1;
	v->a[67618] = sym_comment;
	v->a[67619] = actions(1067);
	small_parse_table_3381(v);
}

void	small_parse_table_3381(t_small_parse_table_array *v)
{
	v->a[67620] = 1;
	v->a[67621] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67622] = actions(1071);
	v->a[67623] = 1;
	v->a[67624] = anon_sym_DQUOTE;
	v->a[67625] = actions(1073);
	v->a[67626] = 1;
	v->a[67627] = anon_sym_DOLLAR_LBRACE;
	v->a[67628] = actions(1075);
	v->a[67629] = 1;
	v->a[67630] = anon_sym_DOLLAR_LPAREN;
	v->a[67631] = actions(1077);
	v->a[67632] = 1;
	v->a[67633] = anon_sym_BQUOTE;
	v->a[67634] = actions(2551);
	v->a[67635] = 1;
	v->a[67636] = sym__bare_dollar;
	v->a[67637] = actions(2632);
	v->a[67638] = 1;
	v->a[67639] = anon_sym_DOLLAR;
	small_parse_table_3382(v);
}

void	small_parse_table_3382(t_small_parse_table_array *v)
{
	v->a[67640] = actions(2549);
	v->a[67641] = 5;
	v->a[67642] = aux_sym_concatenation_token1;
	v->a[67643] = sym_raw_string;
	v->a[67644] = sym_number;
	v->a[67645] = sym__comment_word;
	v->a[67646] = sym_word;
	v->a[67647] = state(1439);
	v->a[67648] = 5;
	v->a[67649] = sym_arithmetic_expansion;
	v->a[67650] = sym_string;
	v->a[67651] = sym_simple_expansion;
	v->a[67652] = sym_expansion;
	v->a[67653] = sym_command_substitution;
	v->a[67654] = 10;
	v->a[67655] = actions(3);
	v->a[67656] = 1;
	v->a[67657] = sym_comment;
	v->a[67658] = actions(821);
	v->a[67659] = 1;
	small_parse_table_3383(v);
}

void	small_parse_table_3383(t_small_parse_table_array *v)
{
	v->a[67660] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67661] = actions(825);
	v->a[67662] = 1;
	v->a[67663] = anon_sym_DQUOTE;
	v->a[67664] = actions(827);
	v->a[67665] = 1;
	v->a[67666] = anon_sym_DOLLAR_LBRACE;
	v->a[67667] = actions(829);
	v->a[67668] = 1;
	v->a[67669] = anon_sym_DOLLAR_LPAREN;
	v->a[67670] = actions(831);
	v->a[67671] = 1;
	v->a[67672] = anon_sym_BQUOTE;
	v->a[67673] = actions(2592);
	v->a[67674] = 1;
	v->a[67675] = sym__bare_dollar;
	v->a[67676] = actions(2634);
	v->a[67677] = 1;
	v->a[67678] = anon_sym_DOLLAR;
	v->a[67679] = actions(2588);
	small_parse_table_3384(v);
}

void	small_parse_table_3384(t_small_parse_table_array *v)
{
	v->a[67680] = 5;
	v->a[67681] = aux_sym_concatenation_token1;
	v->a[67682] = sym_raw_string;
	v->a[67683] = sym_number;
	v->a[67684] = sym__comment_word;
	v->a[67685] = sym_word;
	v->a[67686] = state(589);
	v->a[67687] = 5;
	v->a[67688] = sym_arithmetic_expansion;
	v->a[67689] = sym_string;
	v->a[67690] = sym_simple_expansion;
	v->a[67691] = sym_expansion;
	v->a[67692] = sym_command_substitution;
	v->a[67693] = 10;
	v->a[67694] = actions(3);
	v->a[67695] = 1;
	v->a[67696] = sym_comment;
	v->a[67697] = actions(55);
	v->a[67698] = 1;
	v->a[67699] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3385(v);
}

/* EOF small_parse_table_676.c */
