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
	v->a[76601] = anon_sym_BQUOTE;
	v->a[76602] = actions(2830);
	v->a[76603] = 1;
	v->a[76604] = anon_sym_DOLLAR;
	v->a[76605] = actions(2832);
	v->a[76606] = 1;
	v->a[76607] = sym__comment_word;
	v->a[76608] = actions(2834);
	v->a[76609] = 1;
	v->a[76610] = sym__empty_value;
	v->a[76611] = state(1183);
	v->a[76612] = 1;
	v->a[76613] = sym_concatenation;
	v->a[76614] = actions(2921);
	v->a[76615] = 3;
	v->a[76616] = sym_raw_string;
	v->a[76617] = sym_number;
	v->a[76618] = sym_word;
	v->a[76619] = state(1091);
	small_parse_table_3831(v);
}

void	small_parse_table_3831(t_small_parse_table_array *v)
{
	v->a[76620] = 5;
	v->a[76621] = sym_arithmetic_expansion;
	v->a[76622] = sym_string;
	v->a[76623] = sym_simple_expansion;
	v->a[76624] = sym_expansion;
	v->a[76625] = sym_command_substitution;
	v->a[76626] = 10;
	v->a[76627] = actions(3);
	v->a[76628] = 1;
	v->a[76629] = sym_comment;
	v->a[76630] = actions(1637);
	v->a[76631] = 1;
	v->a[76632] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76633] = actions(1641);
	v->a[76634] = 1;
	v->a[76635] = anon_sym_DQUOTE;
	v->a[76636] = actions(1643);
	v->a[76637] = 1;
	v->a[76638] = anon_sym_DOLLAR_LBRACE;
	v->a[76639] = actions(1645);
	small_parse_table_3832(v);
}

void	small_parse_table_3832(t_small_parse_table_array *v)
{
	v->a[76640] = 1;
	v->a[76641] = anon_sym_DOLLAR_LPAREN;
	v->a[76642] = actions(1647);
	v->a[76643] = 1;
	v->a[76644] = anon_sym_BQUOTE;
	v->a[76645] = actions(2788);
	v->a[76646] = 1;
	v->a[76647] = sym__bare_dollar;
	v->a[76648] = actions(2923);
	v->a[76649] = 1;
	v->a[76650] = anon_sym_DOLLAR;
	v->a[76651] = actions(2786);
	v->a[76652] = 5;
	v->a[76653] = aux_sym_concatenation_token1;
	v->a[76654] = sym_raw_string;
	v->a[76655] = sym_number;
	v->a[76656] = sym__comment_word;
	v->a[76657] = sym_word;
	v->a[76658] = state(1580);
	v->a[76659] = 5;
	small_parse_table_3833(v);
}

void	small_parse_table_3833(t_small_parse_table_array *v)
{
	v->a[76660] = sym_arithmetic_expansion;
	v->a[76661] = sym_string;
	v->a[76662] = sym_simple_expansion;
	v->a[76663] = sym_expansion;
	v->a[76664] = sym_command_substitution;
	v->a[76665] = 10;
	v->a[76666] = actions(3);
	v->a[76667] = 1;
	v->a[76668] = sym_comment;
	v->a[76669] = actions(2758);
	v->a[76670] = 1;
	v->a[76671] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76672] = actions(2762);
	v->a[76673] = 1;
	v->a[76674] = anon_sym_DQUOTE;
	v->a[76675] = actions(2764);
	v->a[76676] = 1;
	v->a[76677] = anon_sym_DOLLAR_LBRACE;
	v->a[76678] = actions(2766);
	v->a[76679] = 1;
	small_parse_table_3834(v);
}

void	small_parse_table_3834(t_small_parse_table_array *v)
{
	v->a[76680] = anon_sym_DOLLAR_LPAREN;
	v->a[76681] = actions(2768);
	v->a[76682] = 1;
	v->a[76683] = anon_sym_BQUOTE;
	v->a[76684] = actions(2770);
	v->a[76685] = 1;
	v->a[76686] = sym__bare_dollar;
	v->a[76687] = actions(2925);
	v->a[76688] = 1;
	v->a[76689] = anon_sym_DOLLAR;
	v->a[76690] = actions(2756);
	v->a[76691] = 5;
	v->a[76692] = aux_sym_concatenation_token1;
	v->a[76693] = sym_raw_string;
	v->a[76694] = sym_number;
	v->a[76695] = sym__comment_word;
	v->a[76696] = sym_word;
	v->a[76697] = state(1980);
	v->a[76698] = 5;
	v->a[76699] = sym_arithmetic_expansion;
	small_parse_table_3835(v);
}

/* EOF small_parse_table_766.c */
