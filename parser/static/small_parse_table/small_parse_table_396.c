/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_396.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1980(t_small_parse_table_array *v)
{
	v->a[39600] = anon_sym_GT_GT;
	v->a[39601] = anon_sym_LT_AMP;
	v->a[39602] = anon_sym_GT_AMP;
	v->a[39603] = anon_sym_GT_PIPE;
	v->a[39604] = anon_sym_LT_GT;
	v->a[39605] = anon_sym_LT_LT;
	v->a[39606] = anon_sym_LT_LT_DASH;
	v->a[39607] = aux_sym_heredoc_redirect_token1;
	v->a[39608] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39609] = anon_sym_AMP;
	v->a[39610] = aux_sym_concatenation_token1;
	v->a[39611] = anon_sym_DOLLAR;
	v->a[39612] = anon_sym_DQUOTE;
	v->a[39613] = sym_raw_string;
	v->a[39614] = sym_number;
	v->a[39615] = anon_sym_DOLLAR_LBRACE;
	v->a[39616] = anon_sym_DOLLAR_LPAREN;
	v->a[39617] = anon_sym_BQUOTE;
	v->a[39618] = sym_word;
	v->a[39619] = anon_sym_SEMI;
	small_parse_table_1981(v);
}

void	small_parse_table_1981(t_small_parse_table_array *v)
{
	v->a[39620] = 6;
	v->a[39621] = actions(3);
	v->a[39622] = 1;
	v->a[39623] = sym_comment;
	v->a[39624] = actions(367);
	v->a[39625] = 1;
	v->a[39626] = sym_file_descriptor;
	v->a[39627] = actions(1295);
	v->a[39628] = 1;
	v->a[39629] = sym_variable_name;
	v->a[39630] = actions(1293);
	v->a[39631] = 2;
	v->a[39632] = aux_sym__simple_variable_name_token1;
	v->a[39633] = aux_sym__multiline_variable_name_token1;
	v->a[39634] = actions(1291);
	v->a[39635] = 9;
	v->a[39636] = anon_sym_BANG;
	v->a[39637] = anon_sym_DASH;
	v->a[39638] = anon_sym_STAR;
	v->a[39639] = anon_sym_QMARK;
	small_parse_table_1982(v);
}

void	small_parse_table_1982(t_small_parse_table_array *v)
{
	v->a[39640] = anon_sym_DOLLAR;
	v->a[39641] = anon_sym_POUND;
	v->a[39642] = anon_sym_AT;
	v->a[39643] = anon_sym_0;
	v->a[39644] = anon_sym__;
	v->a[39645] = actions(361);
	v->a[39646] = 16;
	v->a[39647] = anon_sym_PIPE;
	v->a[39648] = anon_sym_SEMI_SEMI;
	v->a[39649] = anon_sym_AMP_AMP;
	v->a[39650] = anon_sym_PIPE_PIPE;
	v->a[39651] = anon_sym_LT;
	v->a[39652] = anon_sym_GT;
	v->a[39653] = anon_sym_GT_GT;
	v->a[39654] = anon_sym_LT_AMP;
	v->a[39655] = anon_sym_GT_AMP;
	v->a[39656] = anon_sym_GT_PIPE;
	v->a[39657] = anon_sym_LT_GT;
	v->a[39658] = anon_sym_LT_LT;
	v->a[39659] = anon_sym_LT_LT_DASH;
	small_parse_table_1983(v);
}

void	small_parse_table_1983(t_small_parse_table_array *v)
{
	v->a[39660] = aux_sym_heredoc_redirect_token1;
	v->a[39661] = anon_sym_AMP;
	v->a[39662] = anon_sym_SEMI;
	v->a[39663] = 3;
	v->a[39664] = actions(3);
	v->a[39665] = 1;
	v->a[39666] = sym_comment;
	v->a[39667] = actions(1402);
	v->a[39668] = 2;
	v->a[39669] = sym_file_descriptor;
	v->a[39670] = sym_variable_name;
	v->a[39671] = actions(1400);
	v->a[39672] = 27;
	v->a[39673] = anon_sym_for;
	v->a[39674] = anon_sym_while;
	v->a[39675] = anon_sym_until;
	v->a[39676] = anon_sym_if;
	v->a[39677] = anon_sym_fi;
	v->a[39678] = anon_sym_elif;
	v->a[39679] = anon_sym_else;
	small_parse_table_1984(v);
}

void	small_parse_table_1984(t_small_parse_table_array *v)
{
	v->a[39680] = anon_sym_case;
	v->a[39681] = anon_sym_LPAREN;
	v->a[39682] = anon_sym_LBRACE;
	v->a[39683] = anon_sym_BANG;
	v->a[39684] = anon_sym_LT;
	v->a[39685] = anon_sym_GT;
	v->a[39686] = anon_sym_GT_GT;
	v->a[39687] = anon_sym_LT_AMP;
	v->a[39688] = anon_sym_GT_AMP;
	v->a[39689] = anon_sym_GT_PIPE;
	v->a[39690] = anon_sym_LT_GT;
	v->a[39691] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39692] = anon_sym_DOLLAR;
	v->a[39693] = anon_sym_DQUOTE;
	v->a[39694] = sym_raw_string;
	v->a[39695] = sym_number;
	v->a[39696] = anon_sym_DOLLAR_LBRACE;
	v->a[39697] = anon_sym_DOLLAR_LPAREN;
	v->a[39698] = anon_sym_BQUOTE;
	v->a[39699] = sym_word;
	small_parse_table_1985(v);
}

/* EOF small_parse_table_396.c */
