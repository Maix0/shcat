/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_896.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4480(t_small_parse_table_array *v)
{
	v->a[89600] = 1;
	v->a[89601] = anon_sym_BQUOTE;
	v->a[89602] = actions(3888);
	v->a[89603] = 1;
	v->a[89604] = anon_sym_DOLLAR;
	v->a[89605] = actions(3890);
	v->a[89606] = 1;
	v->a[89607] = anon_sym_DQUOTE;
	v->a[89608] = state(1744);
	v->a[89609] = 1;
	v->a[89610] = aux_sym_string_repeat1;
	v->a[89611] = state(1869);
	v->a[89612] = 4;
	v->a[89613] = sym_arithmetic_expansion;
	v->a[89614] = sym_simple_expansion;
	v->a[89615] = sym_expansion;
	v->a[89616] = sym_command_substitution;
	v->a[89617] = 4;
	v->a[89618] = actions(3);
	v->a[89619] = 1;
	small_parse_table_4481(v);
}

void	small_parse_table_4481(t_small_parse_table_array *v)
{
	v->a[89620] = sym_comment;
	v->a[89621] = actions(1551);
	v->a[89622] = 1;
	v->a[89623] = sym_variable_name;
	v->a[89624] = actions(1549);
	v->a[89625] = 2;
	v->a[89626] = aux_sym__simple_variable_name_token1;
	v->a[89627] = aux_sym__multiline_variable_name_token1;
	v->a[89628] = actions(1547);
	v->a[89629] = 9;
	v->a[89630] = anon_sym_BANG;
	v->a[89631] = anon_sym_DASH;
	v->a[89632] = anon_sym_STAR;
	v->a[89633] = anon_sym_QMARK;
	v->a[89634] = anon_sym_DOLLAR;
	v->a[89635] = anon_sym_POUND;
	v->a[89636] = anon_sym_AT;
	v->a[89637] = anon_sym_0;
	v->a[89638] = anon_sym__;
	v->a[89639] = 4;
	small_parse_table_4482(v);
}

void	small_parse_table_4482(t_small_parse_table_array *v)
{
	v->a[89640] = actions(3);
	v->a[89641] = 1;
	v->a[89642] = sym_comment;
	v->a[89643] = actions(2185);
	v->a[89644] = 1;
	v->a[89645] = sym_variable_name;
	v->a[89646] = actions(2183);
	v->a[89647] = 2;
	v->a[89648] = aux_sym__simple_variable_name_token1;
	v->a[89649] = aux_sym__multiline_variable_name_token1;
	v->a[89650] = actions(2181);
	v->a[89651] = 9;
	v->a[89652] = anon_sym_BANG;
	v->a[89653] = anon_sym_DASH;
	v->a[89654] = anon_sym_STAR;
	v->a[89655] = anon_sym_QMARK;
	v->a[89656] = anon_sym_DOLLAR;
	v->a[89657] = anon_sym_POUND;
	v->a[89658] = anon_sym_AT;
	v->a[89659] = anon_sym_0;
	small_parse_table_4483(v);
}

void	small_parse_table_4483(t_small_parse_table_array *v)
{
	v->a[89660] = anon_sym__;
	v->a[89661] = 10;
	v->a[89662] = actions(3);
	v->a[89663] = 1;
	v->a[89664] = sym_comment;
	v->a[89665] = actions(3712);
	v->a[89666] = 1;
	v->a[89667] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89668] = actions(3716);
	v->a[89669] = 1;
	v->a[89670] = sym_string_content;
	v->a[89671] = actions(3718);
	v->a[89672] = 1;
	v->a[89673] = anon_sym_DOLLAR_LBRACE;
	v->a[89674] = actions(3720);
	v->a[89675] = 1;
	v->a[89676] = anon_sym_DOLLAR_LPAREN;
	v->a[89677] = actions(3722);
	v->a[89678] = 1;
	v->a[89679] = anon_sym_BQUOTE;
	small_parse_table_4484(v);
}

void	small_parse_table_4484(t_small_parse_table_array *v)
{
	v->a[89680] = actions(3892);
	v->a[89681] = 1;
	v->a[89682] = anon_sym_DOLLAR;
	v->a[89683] = actions(3894);
	v->a[89684] = 1;
	v->a[89685] = anon_sym_DQUOTE;
	v->a[89686] = state(1800);
	v->a[89687] = 1;
	v->a[89688] = aux_sym_string_repeat1;
	v->a[89689] = state(1869);
	v->a[89690] = 4;
	v->a[89691] = sym_arithmetic_expansion;
	v->a[89692] = sym_simple_expansion;
	v->a[89693] = sym_expansion;
	v->a[89694] = sym_command_substitution;
	v->a[89695] = 10;
	v->a[89696] = actions(3);
	v->a[89697] = 1;
	v->a[89698] = sym_comment;
	v->a[89699] = actions(3712);
	small_parse_table_4485(v);
}

/* EOF small_parse_table_896.c */
