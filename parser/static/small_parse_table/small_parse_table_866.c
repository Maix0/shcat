/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_866.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4330(t_small_parse_table_array *v)
{
	v->a[86600] = actions(3486);
	v->a[86601] = 1;
	v->a[86602] = anon_sym_DQUOTE;
	v->a[86603] = state(1836);
	v->a[86604] = 1;
	v->a[86605] = aux_sym_string_repeat1;
	v->a[86606] = state(1959);
	v->a[86607] = 4;
	v->a[86608] = sym_arithmetic_expansion;
	v->a[86609] = sym_simple_expansion;
	v->a[86610] = sym_expansion;
	v->a[86611] = sym_command_substitution;
	v->a[86612] = 4;
	v->a[86613] = actions(3);
	v->a[86614] = 1;
	v->a[86615] = sym_comment;
	v->a[86616] = actions(3185);
	v->a[86617] = 1;
	v->a[86618] = sym_variable_name;
	v->a[86619] = actions(3183);
	small_parse_table_4331(v);
}

void	small_parse_table_4331(t_small_parse_table_array *v)
{
	v->a[86620] = 2;
	v->a[86621] = aux_sym__simple_variable_name_token1;
	v->a[86622] = aux_sym__multiline_variable_name_token1;
	v->a[86623] = actions(3181);
	v->a[86624] = 9;
	v->a[86625] = anon_sym_BANG;
	v->a[86626] = anon_sym_DASH;
	v->a[86627] = anon_sym_STAR;
	v->a[86628] = anon_sym_QMARK;
	v->a[86629] = anon_sym_DOLLAR;
	v->a[86630] = anon_sym_POUND;
	v->a[86631] = anon_sym_AT;
	v->a[86632] = anon_sym_0;
	v->a[86633] = anon_sym__;
	v->a[86634] = 10;
	v->a[86635] = actions(3);
	v->a[86636] = 1;
	v->a[86637] = sym_comment;
	v->a[86638] = actions(3414);
	v->a[86639] = 1;
	small_parse_table_4332(v);
}

void	small_parse_table_4332(t_small_parse_table_array *v)
{
	v->a[86640] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86641] = actions(3420);
	v->a[86642] = 1;
	v->a[86643] = sym_string_content;
	v->a[86644] = actions(3422);
	v->a[86645] = 1;
	v->a[86646] = anon_sym_DOLLAR_LBRACE;
	v->a[86647] = actions(3424);
	v->a[86648] = 1;
	v->a[86649] = anon_sym_DOLLAR_LPAREN;
	v->a[86650] = actions(3426);
	v->a[86651] = 1;
	v->a[86652] = anon_sym_BQUOTE;
	v->a[86653] = actions(3488);
	v->a[86654] = 1;
	v->a[86655] = anon_sym_DOLLAR;
	v->a[86656] = actions(3490);
	v->a[86657] = 1;
	v->a[86658] = anon_sym_DQUOTE;
	v->a[86659] = state(1833);
	small_parse_table_4333(v);
}

void	small_parse_table_4333(t_small_parse_table_array *v)
{
	v->a[86660] = 1;
	v->a[86661] = aux_sym_string_repeat1;
	v->a[86662] = state(1959);
	v->a[86663] = 4;
	v->a[86664] = sym_arithmetic_expansion;
	v->a[86665] = sym_simple_expansion;
	v->a[86666] = sym_expansion;
	v->a[86667] = sym_command_substitution;
	v->a[86668] = 10;
	v->a[86669] = actions(3);
	v->a[86670] = 1;
	v->a[86671] = sym_comment;
	v->a[86672] = actions(3414);
	v->a[86673] = 1;
	v->a[86674] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86675] = actions(3420);
	v->a[86676] = 1;
	v->a[86677] = sym_string_content;
	v->a[86678] = actions(3422);
	v->a[86679] = 1;
	small_parse_table_4334(v);
}

void	small_parse_table_4334(t_small_parse_table_array *v)
{
	v->a[86680] = anon_sym_DOLLAR_LBRACE;
	v->a[86681] = actions(3424);
	v->a[86682] = 1;
	v->a[86683] = anon_sym_DOLLAR_LPAREN;
	v->a[86684] = actions(3426);
	v->a[86685] = 1;
	v->a[86686] = anon_sym_BQUOTE;
	v->a[86687] = actions(3492);
	v->a[86688] = 1;
	v->a[86689] = anon_sym_DOLLAR;
	v->a[86690] = actions(3494);
	v->a[86691] = 1;
	v->a[86692] = anon_sym_DQUOTE;
	v->a[86693] = state(1906);
	v->a[86694] = 1;
	v->a[86695] = aux_sym_string_repeat1;
	v->a[86696] = state(1959);
	v->a[86697] = 4;
	v->a[86698] = sym_arithmetic_expansion;
	v->a[86699] = sym_simple_expansion;
	small_parse_table_4335(v);
}

/* EOF small_parse_table_866.c */
