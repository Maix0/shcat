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
	v->a[76600] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76601] = actions(3110);
	v->a[76602] = 1;
	v->a[76603] = sym_string_content;
	v->a[76604] = actions(3112);
	v->a[76605] = 1;
	v->a[76606] = anon_sym_DOLLAR_LBRACE;
	v->a[76607] = actions(3114);
	v->a[76608] = 1;
	v->a[76609] = anon_sym_DOLLAR_LPAREN;
	v->a[76610] = actions(3116);
	v->a[76611] = 1;
	v->a[76612] = anon_sym_BQUOTE;
	v->a[76613] = actions(3150);
	v->a[76614] = 1;
	v->a[76615] = anon_sym_DOLLAR;
	v->a[76616] = actions(3152);
	v->a[76617] = 1;
	v->a[76618] = anon_sym_DQUOTE;
	v->a[76619] = state(1661);
	small_parse_table_3831(v);
}

void	small_parse_table_3831(t_small_parse_table_array *v)
{
	v->a[76620] = 1;
	v->a[76621] = aux_sym_string_repeat1;
	v->a[76622] = state(1748);
	v->a[76623] = 4;
	v->a[76624] = sym_arithmetic_expansion;
	v->a[76625] = sym_simple_expansion;
	v->a[76626] = sym_expansion;
	v->a[76627] = sym_command_substitution;
	v->a[76628] = 10;
	v->a[76629] = actions(3);
	v->a[76630] = 1;
	v->a[76631] = sym_comment;
	v->a[76632] = actions(3104);
	v->a[76633] = 1;
	v->a[76634] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76635] = actions(3110);
	v->a[76636] = 1;
	v->a[76637] = sym_string_content;
	v->a[76638] = actions(3112);
	v->a[76639] = 1;
	small_parse_table_3832(v);
}

void	small_parse_table_3832(t_small_parse_table_array *v)
{
	v->a[76640] = anon_sym_DOLLAR_LBRACE;
	v->a[76641] = actions(3114);
	v->a[76642] = 1;
	v->a[76643] = anon_sym_DOLLAR_LPAREN;
	v->a[76644] = actions(3116);
	v->a[76645] = 1;
	v->a[76646] = anon_sym_BQUOTE;
	v->a[76647] = actions(3154);
	v->a[76648] = 1;
	v->a[76649] = anon_sym_DOLLAR;
	v->a[76650] = actions(3156);
	v->a[76651] = 1;
	v->a[76652] = anon_sym_DQUOTE;
	v->a[76653] = state(1661);
	v->a[76654] = 1;
	v->a[76655] = aux_sym_string_repeat1;
	v->a[76656] = state(1748);
	v->a[76657] = 4;
	v->a[76658] = sym_arithmetic_expansion;
	v->a[76659] = sym_simple_expansion;
	small_parse_table_3833(v);
}

void	small_parse_table_3833(t_small_parse_table_array *v)
{
	v->a[76660] = sym_expansion;
	v->a[76661] = sym_command_substitution;
	v->a[76662] = 3;
	v->a[76663] = actions(3);
	v->a[76664] = 1;
	v->a[76665] = sym_comment;
	v->a[76666] = actions(1327);
	v->a[76667] = 1;
	v->a[76668] = sym_extglob_pattern;
	v->a[76669] = actions(1325);
	v->a[76670] = 11;
	v->a[76671] = anon_sym_esac;
	v->a[76672] = anon_sym_LPAREN;
	v->a[76673] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76674] = anon_sym_DOLLAR;
	v->a[76675] = anon_sym_DQUOTE;
	v->a[76676] = sym_raw_string;
	v->a[76677] = sym_number;
	v->a[76678] = anon_sym_DOLLAR_LBRACE;
	v->a[76679] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3834(v);
}

void	small_parse_table_3834(t_small_parse_table_array *v)
{
	v->a[76680] = anon_sym_BQUOTE;
	v->a[76681] = sym_word;
	v->a[76682] = 4;
	v->a[76683] = actions(3);
	v->a[76684] = 1;
	v->a[76685] = sym_comment;
	v->a[76686] = actions(3160);
	v->a[76687] = 1;
	v->a[76688] = anon_sym_esac;
	v->a[76689] = actions(3162);
	v->a[76690] = 1;
	v->a[76691] = sym_extglob_pattern;
	v->a[76692] = actions(3158);
	v->a[76693] = 10;
	v->a[76694] = anon_sym_LPAREN;
	v->a[76695] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76696] = anon_sym_DOLLAR;
	v->a[76697] = anon_sym_DQUOTE;
	v->a[76698] = sym_raw_string;
	v->a[76699] = sym_number;
	small_parse_table_3835(v);
}

/* EOF small_parse_table_766.c */
