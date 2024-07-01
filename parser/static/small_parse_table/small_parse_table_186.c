/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_186.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_930(t_small_parse_table_array *v)
{
	v->a[18600] = anon_sym__;
	v->a[18601] = actions(361);
	v->a[18602] = 25;
	v->a[18603] = anon_sym_esac;
	v->a[18604] = anon_sym_PIPE;
	v->a[18605] = anon_sym_SEMI_SEMI;
	v->a[18606] = anon_sym_AMP_AMP;
	v->a[18607] = anon_sym_PIPE_PIPE;
	v->a[18608] = anon_sym_LT;
	v->a[18609] = anon_sym_GT;
	v->a[18610] = anon_sym_GT_GT;
	v->a[18611] = anon_sym_LT_AMP;
	v->a[18612] = anon_sym_GT_AMP;
	v->a[18613] = anon_sym_GT_PIPE;
	v->a[18614] = anon_sym_LT_GT;
	v->a[18615] = anon_sym_LT_LT;
	v->a[18616] = anon_sym_LT_LT_DASH;
	v->a[18617] = aux_sym_heredoc_redirect_token1;
	v->a[18618] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18619] = anon_sym_AMP;
	small_parse_table_931(v);
}

void	small_parse_table_931(t_small_parse_table_array *v)
{
	v->a[18620] = anon_sym_DQUOTE;
	v->a[18621] = sym_raw_string;
	v->a[18622] = sym_number;
	v->a[18623] = anon_sym_DOLLAR_LBRACE;
	v->a[18624] = anon_sym_DOLLAR_LPAREN;
	v->a[18625] = anon_sym_BQUOTE;
	v->a[18626] = sym_word;
	v->a[18627] = anon_sym_SEMI;
	v->a[18628] = 6;
	v->a[18629] = actions(3);
	v->a[18630] = 1;
	v->a[18631] = sym_comment;
	v->a[18632] = actions(367);
	v->a[18633] = 1;
	v->a[18634] = sym_file_descriptor;
	v->a[18635] = actions(417);
	v->a[18636] = 1;
	v->a[18637] = sym_variable_name;
	v->a[18638] = actions(415);
	v->a[18639] = 2;
	small_parse_table_932(v);
}

void	small_parse_table_932(t_small_parse_table_array *v)
{
	v->a[18640] = aux_sym__simple_variable_name_token1;
	v->a[18641] = aux_sym__multiline_variable_name_token1;
	v->a[18642] = actions(413);
	v->a[18643] = 9;
	v->a[18644] = anon_sym_BANG;
	v->a[18645] = anon_sym_DASH;
	v->a[18646] = anon_sym_STAR;
	v->a[18647] = anon_sym_QMARK;
	v->a[18648] = anon_sym_DOLLAR;
	v->a[18649] = anon_sym_POUND;
	v->a[18650] = anon_sym_AT;
	v->a[18651] = anon_sym_0;
	v->a[18652] = anon_sym__;
	v->a[18653] = actions(361);
	v->a[18654] = 25;
	v->a[18655] = anon_sym_PIPE;
	v->a[18656] = anon_sym_RPAREN;
	v->a[18657] = anon_sym_SEMI_SEMI;
	v->a[18658] = anon_sym_AMP_AMP;
	v->a[18659] = anon_sym_PIPE_PIPE;
	small_parse_table_933(v);
}

void	small_parse_table_933(t_small_parse_table_array *v)
{
	v->a[18660] = anon_sym_LT;
	v->a[18661] = anon_sym_GT;
	v->a[18662] = anon_sym_GT_GT;
	v->a[18663] = anon_sym_LT_AMP;
	v->a[18664] = anon_sym_GT_AMP;
	v->a[18665] = anon_sym_GT_PIPE;
	v->a[18666] = anon_sym_LT_GT;
	v->a[18667] = anon_sym_LT_LT;
	v->a[18668] = anon_sym_LT_LT_DASH;
	v->a[18669] = aux_sym_heredoc_redirect_token1;
	v->a[18670] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18671] = anon_sym_AMP;
	v->a[18672] = anon_sym_DQUOTE;
	v->a[18673] = sym_raw_string;
	v->a[18674] = sym_number;
	v->a[18675] = anon_sym_DOLLAR_LBRACE;
	v->a[18676] = anon_sym_DOLLAR_LPAREN;
	v->a[18677] = anon_sym_BQUOTE;
	v->a[18678] = sym_word;
	v->a[18679] = anon_sym_SEMI;
	small_parse_table_934(v);
}

void	small_parse_table_934(t_small_parse_table_array *v)
{
	v->a[18680] = 6;
	v->a[18681] = actions(3);
	v->a[18682] = 1;
	v->a[18683] = sym_comment;
	v->a[18684] = actions(423);
	v->a[18685] = 1;
	v->a[18686] = sym_variable_name;
	v->a[18687] = actions(367);
	v->a[18688] = 2;
	v->a[18689] = sym_file_descriptor;
	v->a[18690] = ts_builtin_sym_end;
	v->a[18691] = actions(421);
	v->a[18692] = 2;
	v->a[18693] = aux_sym__simple_variable_name_token1;
	v->a[18694] = aux_sym__multiline_variable_name_token1;
	v->a[18695] = actions(419);
	v->a[18696] = 9;
	v->a[18697] = anon_sym_BANG;
	v->a[18698] = anon_sym_DASH;
	v->a[18699] = anon_sym_STAR;
	small_parse_table_935(v);
}

/* EOF small_parse_table_186.c */
