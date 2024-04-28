/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1726.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8630(t_small_parse_table_array *v)
{
	v->a[172600] = 1;
	v->a[172601] = anon_sym_DQUOTE;
	v->a[172602] = actions(7677);
	v->a[172603] = 1;
	v->a[172604] = sym_variable_name;
	v->a[172605] = state(4393);
	v->a[172606] = 1;
	v->a[172607] = sym_string;
	v->a[172608] = actions(1241);
	v->a[172609] = 2;
	v->a[172610] = sym_file_descriptor;
	v->a[172611] = ts_builtin_sym_end;
	v->a[172612] = actions(7675);
	v->a[172613] = 2;
	v->a[172614] = aux_sym__simple_variable_name_token1;
	v->a[172615] = aux_sym__multiline_variable_name_token1;
	v->a[172616] = actions(7671);
	v->a[172617] = 9;
	v->a[172618] = anon_sym_DASH;
	v->a[172619] = anon_sym_STAR;
	small_parse_table_8631(v);
}

void	small_parse_table_8631(t_small_parse_table_array *v)
{
	v->a[172620] = anon_sym_BANG;
	v->a[172621] = anon_sym_QMARK;
	v->a[172622] = anon_sym_DOLLAR;
	v->a[172623] = anon_sym_POUND;
	v->a[172624] = anon_sym_AT2;
	v->a[172625] = anon_sym_0;
	v->a[172626] = anon_sym__;
	v->a[172627] = actions(1239);
	v->a[172628] = 20;
	v->a[172629] = anon_sym_SEMI;
	v->a[172630] = anon_sym_PIPE_PIPE;
	v->a[172631] = anon_sym_AMP_AMP;
	v->a[172632] = anon_sym_PIPE;
	v->a[172633] = anon_sym_AMP;
	v->a[172634] = anon_sym_LT;
	v->a[172635] = anon_sym_GT;
	v->a[172636] = anon_sym_LT_LT;
	v->a[172637] = anon_sym_GT_GT;
	v->a[172638] = anon_sym_SEMI_SEMI;
	v->a[172639] = anon_sym_PIPE_AMP;
	small_parse_table_8632(v);
}

void	small_parse_table_8632(t_small_parse_table_array *v)
{
	v->a[172640] = anon_sym_AMP_GT;
	v->a[172641] = anon_sym_AMP_GT_GT;
	v->a[172642] = anon_sym_LT_AMP;
	v->a[172643] = anon_sym_GT_AMP;
	v->a[172644] = anon_sym_GT_PIPE;
	v->a[172645] = anon_sym_LT_AMP_DASH;
	v->a[172646] = anon_sym_GT_AMP_DASH;
	v->a[172647] = anon_sym_LT_LT_DASH;
	v->a[172648] = aux_sym_heredoc_redirect_token1;
	v->a[172649] = 3;
	v->a[172650] = actions(71);
	v->a[172651] = 1;
	v->a[172652] = sym_comment;
	v->a[172653] = actions(7244);
	v->a[172654] = 13;
	v->a[172655] = anon_sym_PIPE;
	v->a[172656] = anon_sym_CARET;
	v->a[172657] = anon_sym_AMP;
	v->a[172658] = anon_sym_LT;
	v->a[172659] = anon_sym_GT;
	small_parse_table_8633(v);
}

void	small_parse_table_8633(t_small_parse_table_array *v)
{
	v->a[172660] = anon_sym_LT_LT;
	v->a[172661] = anon_sym_GT_GT;
	v->a[172662] = anon_sym_PLUS;
	v->a[172663] = anon_sym_DASH;
	v->a[172664] = anon_sym_STAR;
	v->a[172665] = anon_sym_SLASH;
	v->a[172666] = anon_sym_PERCENT;
	v->a[172667] = anon_sym_STAR_STAR;
	v->a[172668] = actions(7246);
	v->a[172669] = 23;
	v->a[172670] = anon_sym_RPAREN_RPAREN;
	v->a[172671] = anon_sym_COMMA;
	v->a[172672] = anon_sym_PLUS_PLUS;
	v->a[172673] = anon_sym_DASH_DASH;
	v->a[172674] = anon_sym_PLUS_EQ;
	v->a[172675] = anon_sym_DASH_EQ;
	v->a[172676] = anon_sym_STAR_EQ;
	v->a[172677] = anon_sym_SLASH_EQ;
	v->a[172678] = anon_sym_PERCENT_EQ;
	v->a[172679] = anon_sym_STAR_STAR_EQ;
	small_parse_table_8634(v);
}

void	small_parse_table_8634(t_small_parse_table_array *v)
{
	v->a[172680] = anon_sym_LT_LT_EQ;
	v->a[172681] = anon_sym_GT_GT_EQ;
	v->a[172682] = anon_sym_AMP_EQ;
	v->a[172683] = anon_sym_CARET_EQ;
	v->a[172684] = anon_sym_PIPE_EQ;
	v->a[172685] = anon_sym_PIPE_PIPE;
	v->a[172686] = anon_sym_DASHo;
	v->a[172687] = anon_sym_AMP_AMP;
	v->a[172688] = anon_sym_DASHa;
	v->a[172689] = anon_sym_EQ_EQ;
	v->a[172690] = anon_sym_BANG_EQ;
	v->a[172691] = anon_sym_LT_EQ;
	v->a[172692] = anon_sym_GT_EQ;
	v->a[172693] = 3;
	v->a[172694] = actions(3);
	v->a[172695] = 1;
	v->a[172696] = sym_comment;
	v->a[172697] = actions(1354);
	v->a[172698] = 5;
	v->a[172699] = sym_file_descriptor;
	small_parse_table_8635(v);
}

/* EOF small_parse_table_1726.c */
