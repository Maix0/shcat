/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_956.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4780(t_small_parse_table_array *v)
{
	v->a[95600] = 1;
	v->a[95601] = anon_sym_DOLLAR_LPAREN;
	v->a[95602] = actions(3868);
	v->a[95603] = 1;
	v->a[95604] = anon_sym_BQUOTE;
	v->a[95605] = actions(4024);
	v->a[95606] = 1;
	v->a[95607] = anon_sym_DOLLAR;
	v->a[95608] = actions(4026);
	v->a[95609] = 1;
	v->a[95610] = anon_sym_DQUOTE;
	v->a[95611] = state(1987);
	v->a[95612] = 1;
	v->a[95613] = aux_sym_string_repeat1;
	v->a[95614] = state(2107);
	v->a[95615] = 4;
	v->a[95616] = sym_arithmetic_expansion;
	v->a[95617] = sym_simple_expansion;
	v->a[95618] = sym_expansion;
	v->a[95619] = sym_command_substitution;
	small_parse_table_4781(v);
}

void	small_parse_table_4781(t_small_parse_table_array *v)
{
	v->a[95620] = 10;
	v->a[95621] = actions(3);
	v->a[95622] = 1;
	v->a[95623] = sym_comment;
	v->a[95624] = actions(3856);
	v->a[95625] = 1;
	v->a[95626] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95627] = actions(3862);
	v->a[95628] = 1;
	v->a[95629] = sym_string_content;
	v->a[95630] = actions(3864);
	v->a[95631] = 1;
	v->a[95632] = anon_sym_DOLLAR_LBRACE;
	v->a[95633] = actions(3866);
	v->a[95634] = 1;
	v->a[95635] = anon_sym_DOLLAR_LPAREN;
	v->a[95636] = actions(3868);
	v->a[95637] = 1;
	v->a[95638] = anon_sym_BQUOTE;
	v->a[95639] = actions(4028);
	small_parse_table_4782(v);
}

void	small_parse_table_4782(t_small_parse_table_array *v)
{
	v->a[95640] = 1;
	v->a[95641] = anon_sym_DOLLAR;
	v->a[95642] = actions(4030);
	v->a[95643] = 1;
	v->a[95644] = anon_sym_DQUOTE;
	v->a[95645] = state(1985);
	v->a[95646] = 1;
	v->a[95647] = aux_sym_string_repeat1;
	v->a[95648] = state(2107);
	v->a[95649] = 4;
	v->a[95650] = sym_arithmetic_expansion;
	v->a[95651] = sym_simple_expansion;
	v->a[95652] = sym_expansion;
	v->a[95653] = sym_command_substitution;
	v->a[95654] = 4;
	v->a[95655] = actions(3);
	v->a[95656] = 1;
	v->a[95657] = sym_comment;
	v->a[95658] = actions(1419);
	v->a[95659] = 1;
	small_parse_table_4783(v);
}

void	small_parse_table_4783(t_small_parse_table_array *v)
{
	v->a[95660] = sym_variable_name;
	v->a[95661] = actions(1417);
	v->a[95662] = 2;
	v->a[95663] = aux_sym__simple_variable_name_token1;
	v->a[95664] = aux_sym__multiline_variable_name_token1;
	v->a[95665] = actions(1415);
	v->a[95666] = 9;
	v->a[95667] = anon_sym_BANG;
	v->a[95668] = anon_sym_DASH;
	v->a[95669] = anon_sym_STAR;
	v->a[95670] = anon_sym_QMARK;
	v->a[95671] = anon_sym_DOLLAR;
	v->a[95672] = anon_sym_POUND;
	v->a[95673] = anon_sym_AT;
	v->a[95674] = anon_sym_0;
	v->a[95675] = anon_sym__;
	v->a[95676] = 10;
	v->a[95677] = actions(3);
	v->a[95678] = 1;
	v->a[95679] = sym_comment;
	small_parse_table_4784(v);
}

void	small_parse_table_4784(t_small_parse_table_array *v)
{
	v->a[95680] = actions(3856);
	v->a[95681] = 1;
	v->a[95682] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95683] = actions(3862);
	v->a[95684] = 1;
	v->a[95685] = sym_string_content;
	v->a[95686] = actions(3864);
	v->a[95687] = 1;
	v->a[95688] = anon_sym_DOLLAR_LBRACE;
	v->a[95689] = actions(3866);
	v->a[95690] = 1;
	v->a[95691] = anon_sym_DOLLAR_LPAREN;
	v->a[95692] = actions(3868);
	v->a[95693] = 1;
	v->a[95694] = anon_sym_BQUOTE;
	v->a[95695] = actions(4032);
	v->a[95696] = 1;
	v->a[95697] = anon_sym_DOLLAR;
	v->a[95698] = actions(4034);
	v->a[95699] = 1;
	small_parse_table_4785(v);
}

/* EOF small_parse_table_956.c */
