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
	v->a[39600] = anon_sym_RPAREN;
	v->a[39601] = anon_sym_SEMI_SEMI;
	v->a[39602] = anon_sym_AMP_AMP;
	v->a[39603] = anon_sym_PIPE_PIPE;
	v->a[39604] = anon_sym_LT;
	v->a[39605] = anon_sym_GT;
	v->a[39606] = anon_sym_GT_GT;
	v->a[39607] = anon_sym_AMP_GT;
	v->a[39608] = anon_sym_AMP_GT_GT;
	v->a[39609] = anon_sym_LT_AMP;
	v->a[39610] = anon_sym_GT_AMP;
	v->a[39611] = anon_sym_GT_PIPE;
	v->a[39612] = anon_sym_LT_AMP_DASH;
	v->a[39613] = anon_sym_GT_AMP_DASH;
	v->a[39614] = anon_sym_LT_LT;
	v->a[39615] = anon_sym_LT_LT_DASH;
	v->a[39616] = aux_sym_heredoc_redirect_token1;
	v->a[39617] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39618] = anon_sym_AMP;
	v->a[39619] = aux_sym_concatenation_token1;
	small_parse_table_1981(v);
}

void	small_parse_table_1981(t_small_parse_table_array *v)
{
	v->a[39620] = anon_sym_DOLLAR;
	v->a[39621] = anon_sym_DQUOTE;
	v->a[39622] = sym_raw_string;
	v->a[39623] = sym_number;
	v->a[39624] = anon_sym_DOLLAR_LBRACE;
	v->a[39625] = anon_sym_DOLLAR_LPAREN;
	v->a[39626] = anon_sym_BQUOTE;
	v->a[39627] = sym_word;
	v->a[39628] = anon_sym_SEMI;
	v->a[39629] = 3;
	v->a[39630] = actions(3);
	v->a[39631] = 1;
	v->a[39632] = sym_comment;
	v->a[39633] = actions(1126);
	v->a[39634] = 3;
	v->a[39635] = sym_file_descriptor;
	v->a[39636] = sym__concat;
	v->a[39637] = sym__bare_dollar;
	v->a[39638] = actions(1124);
	v->a[39639] = 30;
	small_parse_table_1982(v);
}

void	small_parse_table_1982(t_small_parse_table_array *v)
{
	v->a[39640] = anon_sym_esac;
	v->a[39641] = anon_sym_PIPE;
	v->a[39642] = anon_sym_SEMI_SEMI;
	v->a[39643] = anon_sym_AMP_AMP;
	v->a[39644] = anon_sym_PIPE_PIPE;
	v->a[39645] = anon_sym_LT;
	v->a[39646] = anon_sym_GT;
	v->a[39647] = anon_sym_GT_GT;
	v->a[39648] = anon_sym_AMP_GT;
	v->a[39649] = anon_sym_AMP_GT_GT;
	v->a[39650] = anon_sym_LT_AMP;
	v->a[39651] = anon_sym_GT_AMP;
	v->a[39652] = anon_sym_GT_PIPE;
	v->a[39653] = anon_sym_LT_AMP_DASH;
	v->a[39654] = anon_sym_GT_AMP_DASH;
	v->a[39655] = anon_sym_LT_LT;
	v->a[39656] = anon_sym_LT_LT_DASH;
	v->a[39657] = aux_sym_heredoc_redirect_token1;
	v->a[39658] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39659] = anon_sym_AMP;
	small_parse_table_1983(v);
}

void	small_parse_table_1983(t_small_parse_table_array *v)
{
	v->a[39660] = aux_sym_concatenation_token1;
	v->a[39661] = anon_sym_DOLLAR;
	v->a[39662] = anon_sym_DQUOTE;
	v->a[39663] = sym_raw_string;
	v->a[39664] = sym_number;
	v->a[39665] = anon_sym_DOLLAR_LBRACE;
	v->a[39666] = anon_sym_DOLLAR_LPAREN;
	v->a[39667] = anon_sym_BQUOTE;
	v->a[39668] = sym_word;
	v->a[39669] = anon_sym_SEMI;
	v->a[39670] = 17;
	v->a[39671] = actions(1074);
	v->a[39672] = 1;
	v->a[39673] = sym_comment;
	v->a[39674] = actions(1136);
	v->a[39675] = 1;
	v->a[39676] = anon_sym_PIPE;
	v->a[39677] = actions(1138);
	v->a[39678] = 1;
	v->a[39679] = anon_sym_AMP_AMP;
	small_parse_table_1984(v);
}

void	small_parse_table_1984(t_small_parse_table_array *v)
{
	v->a[39680] = actions(1140);
	v->a[39681] = 1;
	v->a[39682] = anon_sym_PIPE_PIPE;
	v->a[39683] = actions(1150);
	v->a[39684] = 1;
	v->a[39685] = anon_sym_CARET;
	v->a[39686] = actions(1152);
	v->a[39687] = 1;
	v->a[39688] = anon_sym_AMP;
	v->a[39689] = actions(1239);
	v->a[39690] = 1;
	v->a[39691] = anon_sym_EQ;
	v->a[39692] = actions(1241);
	v->a[39693] = 1;
	v->a[39694] = anon_sym_QMARK;
	v->a[39695] = actions(1412);
	v->a[39696] = 1;
	v->a[39697] = anon_sym_RPAREN_RPAREN;
	v->a[39698] = actions(1144);
	v->a[39699] = 2;
	small_parse_table_1985(v);
}

/* EOF small_parse_table_396.c */
