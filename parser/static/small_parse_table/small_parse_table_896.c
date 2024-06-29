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
	v->a[89600] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89601] = actions(3420);
	v->a[89602] = 1;
	v->a[89603] = sym_string_content;
	v->a[89604] = actions(3422);
	v->a[89605] = 1;
	v->a[89606] = anon_sym_DOLLAR_LBRACE;
	v->a[89607] = actions(3424);
	v->a[89608] = 1;
	v->a[89609] = anon_sym_DOLLAR_LPAREN;
	v->a[89610] = actions(3426);
	v->a[89611] = 1;
	v->a[89612] = anon_sym_BQUOTE;
	v->a[89613] = actions(3542);
	v->a[89614] = 1;
	v->a[89615] = anon_sym_DOLLAR;
	v->a[89616] = actions(3544);
	v->a[89617] = 1;
	v->a[89618] = anon_sym_DQUOTE;
	v->a[89619] = state(1845);
	small_parse_table_4481(v);
}

void	small_parse_table_4481(t_small_parse_table_array *v)
{
	v->a[89620] = 1;
	v->a[89621] = aux_sym_string_repeat1;
	v->a[89622] = state(1963);
	v->a[89623] = 4;
	v->a[89624] = sym_arithmetic_expansion;
	v->a[89625] = sym_simple_expansion;
	v->a[89626] = sym_expansion;
	v->a[89627] = sym_command_substitution;
	v->a[89628] = 4;
	v->a[89629] = actions(3);
	v->a[89630] = 1;
	v->a[89631] = sym_comment;
	v->a[89632] = actions(1262);
	v->a[89633] = 1;
	v->a[89634] = sym_variable_name;
	v->a[89635] = actions(1260);
	v->a[89636] = 2;
	v->a[89637] = aux_sym__simple_variable_name_token1;
	v->a[89638] = aux_sym__multiline_variable_name_token1;
	v->a[89639] = actions(1258);
	small_parse_table_4482(v);
}

void	small_parse_table_4482(t_small_parse_table_array *v)
{
	v->a[89640] = 9;
	v->a[89641] = anon_sym_BANG;
	v->a[89642] = anon_sym_DASH;
	v->a[89643] = anon_sym_STAR;
	v->a[89644] = anon_sym_QMARK;
	v->a[89645] = anon_sym_DOLLAR;
	v->a[89646] = anon_sym_POUND;
	v->a[89647] = anon_sym_AT;
	v->a[89648] = anon_sym_0;
	v->a[89649] = anon_sym__;
	v->a[89650] = 10;
	v->a[89651] = actions(3);
	v->a[89652] = 1;
	v->a[89653] = sym_comment;
	v->a[89654] = actions(3414);
	v->a[89655] = 1;
	v->a[89656] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89657] = actions(3420);
	v->a[89658] = 1;
	v->a[89659] = sym_string_content;
	small_parse_table_4483(v);
}

void	small_parse_table_4483(t_small_parse_table_array *v)
{
	v->a[89660] = actions(3422);
	v->a[89661] = 1;
	v->a[89662] = anon_sym_DOLLAR_LBRACE;
	v->a[89663] = actions(3424);
	v->a[89664] = 1;
	v->a[89665] = anon_sym_DOLLAR_LPAREN;
	v->a[89666] = actions(3426);
	v->a[89667] = 1;
	v->a[89668] = anon_sym_BQUOTE;
	v->a[89669] = actions(3546);
	v->a[89670] = 1;
	v->a[89671] = anon_sym_DOLLAR;
	v->a[89672] = actions(3548);
	v->a[89673] = 1;
	v->a[89674] = anon_sym_DQUOTE;
	v->a[89675] = state(1863);
	v->a[89676] = 1;
	v->a[89677] = aux_sym_string_repeat1;
	v->a[89678] = state(1963);
	v->a[89679] = 4;
	small_parse_table_4484(v);
}

void	small_parse_table_4484(t_small_parse_table_array *v)
{
	v->a[89680] = sym_arithmetic_expansion;
	v->a[89681] = sym_simple_expansion;
	v->a[89682] = sym_expansion;
	v->a[89683] = sym_command_substitution;
	v->a[89684] = 10;
	v->a[89685] = actions(3);
	v->a[89686] = 1;
	v->a[89687] = sym_comment;
	v->a[89688] = actions(3414);
	v->a[89689] = 1;
	v->a[89690] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89691] = actions(3420);
	v->a[89692] = 1;
	v->a[89693] = sym_string_content;
	v->a[89694] = actions(3422);
	v->a[89695] = 1;
	v->a[89696] = anon_sym_DOLLAR_LBRACE;
	v->a[89697] = actions(3424);
	v->a[89698] = 1;
	v->a[89699] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4485(v);
}

/* EOF small_parse_table_896.c */
