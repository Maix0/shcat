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
	v->a[76600] = actions(3274);
	v->a[76601] = 10;
	v->a[76602] = anon_sym_LPAREN;
	v->a[76603] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76604] = anon_sym_DOLLAR;
	v->a[76605] = anon_sym_DQUOTE;
	v->a[76606] = sym_raw_string;
	v->a[76607] = sym_number;
	v->a[76608] = anon_sym_DOLLAR_LBRACE;
	v->a[76609] = anon_sym_DOLLAR_LPAREN;
	v->a[76610] = anon_sym_BQUOTE;
	v->a[76611] = sym_word;
	v->a[76612] = 10;
	v->a[76613] = actions(3);
	v->a[76614] = 1;
	v->a[76615] = sym_comment;
	v->a[76616] = actions(3058);
	v->a[76617] = 1;
	v->a[76618] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76619] = actions(3064);
	small_parse_table_3831(v);
}

void	small_parse_table_3831(t_small_parse_table_array *v)
{
	v->a[76620] = 1;
	v->a[76621] = sym_string_content;
	v->a[76622] = actions(3066);
	v->a[76623] = 1;
	v->a[76624] = anon_sym_DOLLAR_LBRACE;
	v->a[76625] = actions(3068);
	v->a[76626] = 1;
	v->a[76627] = anon_sym_DOLLAR_LPAREN;
	v->a[76628] = actions(3070);
	v->a[76629] = 1;
	v->a[76630] = anon_sym_BQUOTE;
	v->a[76631] = actions(3280);
	v->a[76632] = 1;
	v->a[76633] = anon_sym_DOLLAR;
	v->a[76634] = actions(3282);
	v->a[76635] = 1;
	v->a[76636] = anon_sym_DQUOTE;
	v->a[76637] = state(1646);
	v->a[76638] = 1;
	v->a[76639] = aux_sym_string_repeat1;
	small_parse_table_3832(v);
}

void	small_parse_table_3832(t_small_parse_table_array *v)
{
	v->a[76640] = state(1748);
	v->a[76641] = 4;
	v->a[76642] = sym_arithmetic_expansion;
	v->a[76643] = sym_simple_expansion;
	v->a[76644] = sym_expansion;
	v->a[76645] = sym_command_substitution;
	v->a[76646] = 8;
	v->a[76647] = actions(3);
	v->a[76648] = 1;
	v->a[76649] = sym_comment;
	v->a[76650] = actions(3040);
	v->a[76651] = 1;
	v->a[76652] = anon_sym_POUND;
	v->a[76653] = actions(3042);
	v->a[76654] = 1;
	v->a[76655] = aux_sym__simple_variable_name_token1;
	v->a[76656] = actions(3044);
	v->a[76657] = 1;
	v->a[76658] = anon_sym_0;
	v->a[76659] = actions(3046);
	small_parse_table_3833(v);
}

void	small_parse_table_3833(t_small_parse_table_array *v)
{
	v->a[76660] = 1;
	v->a[76661] = sym_variable_name;
	v->a[76662] = actions(3284);
	v->a[76663] = 1;
	v->a[76664] = anon_sym_RBRACE;
	v->a[76665] = state(1979);
	v->a[76666] = 1;
	v->a[76667] = sym__expansion_body;
	v->a[76668] = actions(3038);
	v->a[76669] = 6;
	v->a[76670] = anon_sym_BANG;
	v->a[76671] = anon_sym_DASH;
	v->a[76672] = anon_sym_STAR;
	v->a[76673] = anon_sym_QMARK;
	v->a[76674] = anon_sym_DOLLAR;
	v->a[76675] = anon_sym_AT;
	v->a[76676] = 4;
	v->a[76677] = actions(3);
	v->a[76678] = 1;
	v->a[76679] = sym_comment;
	small_parse_table_3834(v);
}

void	small_parse_table_3834(t_small_parse_table_array *v)
{
	v->a[76680] = actions(3276);
	v->a[76681] = 1;
	v->a[76682] = anon_sym_esac;
	v->a[76683] = actions(3278);
	v->a[76684] = 1;
	v->a[76685] = sym_extglob_pattern;
	v->a[76686] = actions(3274);
	v->a[76687] = 10;
	v->a[76688] = anon_sym_LPAREN;
	v->a[76689] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76690] = anon_sym_DOLLAR;
	v->a[76691] = anon_sym_DQUOTE;
	v->a[76692] = sym_raw_string;
	v->a[76693] = sym_number;
	v->a[76694] = anon_sym_DOLLAR_LBRACE;
	v->a[76695] = anon_sym_DOLLAR_LPAREN;
	v->a[76696] = anon_sym_BQUOTE;
	v->a[76697] = sym_word;
	v->a[76698] = 10;
	v->a[76699] = actions(3);
	small_parse_table_3835(v);
}

/* EOF small_parse_table_766.c */
