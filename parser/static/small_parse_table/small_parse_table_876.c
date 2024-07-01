/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_876.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4380(t_small_parse_table_array *v)
{
	v->a[87600] = anon_sym_DQUOTE;
	v->a[87601] = state(1805);
	v->a[87602] = 1;
	v->a[87603] = aux_sym_string_repeat1;
	v->a[87604] = state(1959);
	v->a[87605] = 4;
	v->a[87606] = sym_arithmetic_expansion;
	v->a[87607] = sym_simple_expansion;
	v->a[87608] = sym_expansion;
	v->a[87609] = sym_command_substitution;
	v->a[87610] = 4;
	v->a[87611] = actions(3);
	v->a[87612] = 1;
	v->a[87613] = sym_comment;
	v->a[87614] = actions(1955);
	v->a[87615] = 1;
	v->a[87616] = sym_variable_name;
	v->a[87617] = actions(1953);
	v->a[87618] = 2;
	v->a[87619] = aux_sym__simple_variable_name_token1;
	small_parse_table_4381(v);
}

void	small_parse_table_4381(t_small_parse_table_array *v)
{
	v->a[87620] = aux_sym__multiline_variable_name_token1;
	v->a[87621] = actions(1951);
	v->a[87622] = 9;
	v->a[87623] = anon_sym_BANG;
	v->a[87624] = anon_sym_DASH;
	v->a[87625] = anon_sym_STAR;
	v->a[87626] = anon_sym_QMARK;
	v->a[87627] = anon_sym_DOLLAR;
	v->a[87628] = anon_sym_POUND;
	v->a[87629] = anon_sym_AT;
	v->a[87630] = anon_sym_0;
	v->a[87631] = anon_sym__;
	v->a[87632] = 4;
	v->a[87633] = actions(3);
	v->a[87634] = 1;
	v->a[87635] = sym_comment;
	v->a[87636] = actions(3584);
	v->a[87637] = 1;
	v->a[87638] = sym_variable_name;
	v->a[87639] = actions(3582);
	small_parse_table_4382(v);
}

void	small_parse_table_4382(t_small_parse_table_array *v)
{
	v->a[87640] = 2;
	v->a[87641] = aux_sym__simple_variable_name_token1;
	v->a[87642] = aux_sym__multiline_variable_name_token1;
	v->a[87643] = actions(3580);
	v->a[87644] = 9;
	v->a[87645] = anon_sym_BANG;
	v->a[87646] = anon_sym_DASH;
	v->a[87647] = anon_sym_STAR;
	v->a[87648] = anon_sym_QMARK;
	v->a[87649] = anon_sym_DOLLAR;
	v->a[87650] = anon_sym_POUND;
	v->a[87651] = anon_sym_AT;
	v->a[87652] = anon_sym_0;
	v->a[87653] = anon_sym__;
	v->a[87654] = 10;
	v->a[87655] = actions(3);
	v->a[87656] = 1;
	v->a[87657] = sym_comment;
	v->a[87658] = actions(3414);
	v->a[87659] = 1;
	small_parse_table_4383(v);
}

void	small_parse_table_4383(t_small_parse_table_array *v)
{
	v->a[87660] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87661] = actions(3420);
	v->a[87662] = 1;
	v->a[87663] = sym_string_content;
	v->a[87664] = actions(3422);
	v->a[87665] = 1;
	v->a[87666] = anon_sym_DOLLAR_LBRACE;
	v->a[87667] = actions(3424);
	v->a[87668] = 1;
	v->a[87669] = anon_sym_DOLLAR_LPAREN;
	v->a[87670] = actions(3426);
	v->a[87671] = 1;
	v->a[87672] = anon_sym_BQUOTE;
	v->a[87673] = actions(3586);
	v->a[87674] = 1;
	v->a[87675] = anon_sym_DOLLAR;
	v->a[87676] = actions(3588);
	v->a[87677] = 1;
	v->a[87678] = anon_sym_DQUOTE;
	v->a[87679] = state(1861);
	small_parse_table_4384(v);
}

void	small_parse_table_4384(t_small_parse_table_array *v)
{
	v->a[87680] = 1;
	v->a[87681] = aux_sym_string_repeat1;
	v->a[87682] = state(1959);
	v->a[87683] = 4;
	v->a[87684] = sym_arithmetic_expansion;
	v->a[87685] = sym_simple_expansion;
	v->a[87686] = sym_expansion;
	v->a[87687] = sym_command_substitution;
	v->a[87688] = 4;
	v->a[87689] = actions(3);
	v->a[87690] = 1;
	v->a[87691] = sym_comment;
	v->a[87692] = actions(1346);
	v->a[87693] = 1;
	v->a[87694] = sym_variable_name;
	v->a[87695] = actions(1344);
	v->a[87696] = 2;
	v->a[87697] = aux_sym__simple_variable_name_token1;
	v->a[87698] = aux_sym__multiline_variable_name_token1;
	v->a[87699] = actions(1342);
	small_parse_table_4385(v);
}

/* EOF small_parse_table_876.c */
