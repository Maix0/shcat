/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1376.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6880(t_small_parse_table_array *v)
{
	v->a[137600] = actions(7770);
	v->a[137601] = 1;
	v->a[137602] = anon_sym_DOLLAR_LPAREN;
	v->a[137603] = actions(7772);
	v->a[137604] = 1;
	v->a[137605] = anon_sym_BQUOTE;
	v->a[137606] = actions(7774);
	v->a[137607] = 1;
	v->a[137608] = anon_sym_DOLLAR_BQUOTE;
	v->a[137609] = actions(8031);
	v->a[137610] = 1;
	v->a[137611] = anon_sym_DOLLAR;
	v->a[137612] = state(3061);
	v->a[137613] = 1;
	v->a[137614] = aux_sym_string_repeat1;
	v->a[137615] = state(3218);
	v->a[137616] = 4;
	v->a[137617] = sym_arithmetic_expansion;
	v->a[137618] = sym_simple_expansion;
	v->a[137619] = sym_expansion;
	small_parse_table_6881(v);
}

void	small_parse_table_6881(t_small_parse_table_array *v)
{
	v->a[137620] = sym_command_substitution;
	v->a[137621] = 11;
	v->a[137622] = actions(3);
	v->a[137623] = 1;
	v->a[137624] = sym_comment;
	v->a[137625] = actions(7618);
	v->a[137626] = 1;
	v->a[137627] = anon_sym_DQUOTE;
	v->a[137628] = actions(7760);
	v->a[137629] = 1;
	v->a[137630] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[137631] = actions(7766);
	v->a[137632] = 1;
	v->a[137633] = sym_string_content;
	v->a[137634] = actions(7768);
	v->a[137635] = 1;
	v->a[137636] = anon_sym_DOLLAR_LBRACE;
	v->a[137637] = actions(7770);
	v->a[137638] = 1;
	v->a[137639] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_6882(v);
}

void	small_parse_table_6882(t_small_parse_table_array *v)
{
	v->a[137640] = actions(7772);
	v->a[137641] = 1;
	v->a[137642] = anon_sym_BQUOTE;
	v->a[137643] = actions(7774);
	v->a[137644] = 1;
	v->a[137645] = anon_sym_DOLLAR_BQUOTE;
	v->a[137646] = actions(8033);
	v->a[137647] = 1;
	v->a[137648] = anon_sym_DOLLAR;
	v->a[137649] = state(3061);
	v->a[137650] = 1;
	v->a[137651] = aux_sym_string_repeat1;
	v->a[137652] = state(3218);
	v->a[137653] = 4;
	v->a[137654] = sym_arithmetic_expansion;
	v->a[137655] = sym_simple_expansion;
	v->a[137656] = sym_expansion;
	v->a[137657] = sym_command_substitution;
	v->a[137658] = 7;
	v->a[137659] = actions(3);
	small_parse_table_6883(v);
}

void	small_parse_table_6883(t_small_parse_table_array *v)
{
	v->a[137660] = 1;
	v->a[137661] = sym_comment;
	v->a[137662] = actions(7754);
	v->a[137663] = 1;
	v->a[137664] = aux_sym__simple_variable_name_token1;
	v->a[137665] = actions(7758);
	v->a[137666] = 1;
	v->a[137667] = sym_variable_name;
	v->a[137668] = actions(8035);
	v->a[137669] = 1;
	v->a[137670] = anon_sym_RBRACE3;
	v->a[137671] = state(3799);
	v->a[137672] = 1;
	v->a[137673] = sym__expansion_body;
	v->a[137674] = actions(7756);
	v->a[137675] = 2;
	v->a[137676] = anon_sym_0;
	v->a[137677] = anon_sym__;
	v->a[137678] = actions(7750);
	v->a[137679] = 7;
	small_parse_table_6884(v);
}

void	small_parse_table_6884(t_small_parse_table_array *v)
{
	v->a[137680] = anon_sym_BANG;
	v->a[137681] = anon_sym_DASH;
	v->a[137682] = anon_sym_STAR;
	v->a[137683] = anon_sym_QMARK;
	v->a[137684] = anon_sym_DOLLAR;
	v->a[137685] = anon_sym_POUND;
	v->a[137686] = anon_sym_AT;
	v->a[137687] = 7;
	v->a[137688] = actions(3);
	v->a[137689] = 1;
	v->a[137690] = sym_comment;
	v->a[137691] = actions(7754);
	v->a[137692] = 1;
	v->a[137693] = aux_sym__simple_variable_name_token1;
	v->a[137694] = actions(7758);
	v->a[137695] = 1;
	v->a[137696] = sym_variable_name;
	v->a[137697] = actions(8037);
	v->a[137698] = 1;
	v->a[137699] = anon_sym_RBRACE3;
	small_parse_table_6885(v);
}

/* EOF small_parse_table_1376.c */
