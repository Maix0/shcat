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
	v->a[18600] = anon_sym_DOLLAR;
	v->a[18601] = anon_sym_POUND;
	v->a[18602] = anon_sym_AT;
	v->a[18603] = anon_sym_0;
	v->a[18604] = actions(361);
	v->a[18605] = 24;
	v->a[18606] = anon_sym_PIPE;
	v->a[18607] = anon_sym_RPAREN;
	v->a[18608] = anon_sym_SEMI_SEMI;
	v->a[18609] = anon_sym_AMP_AMP;
	v->a[18610] = anon_sym_PIPE_PIPE;
	v->a[18611] = anon_sym_LT;
	v->a[18612] = anon_sym_GT;
	v->a[18613] = anon_sym_GT_GT;
	v->a[18614] = anon_sym_LT_AMP;
	v->a[18615] = anon_sym_GT_AMP;
	v->a[18616] = anon_sym_GT_PIPE;
	v->a[18617] = anon_sym_LT_GT;
	v->a[18618] = anon_sym_LT_LT;
	v->a[18619] = anon_sym_LT_LT_DASH;
	small_parse_table_931(v);
}

void	small_parse_table_931(t_small_parse_table_array *v)
{
	v->a[18620] = aux_sym_heredoc_redirect_token1;
	v->a[18621] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18622] = anon_sym_DQUOTE;
	v->a[18623] = sym_raw_string;
	v->a[18624] = sym_number;
	v->a[18625] = anon_sym_DOLLAR_LBRACE;
	v->a[18626] = anon_sym_DOLLAR_LPAREN;
	v->a[18627] = anon_sym_BQUOTE;
	v->a[18628] = sym_word;
	v->a[18629] = anon_sym_SEMI;
	v->a[18630] = 16;
	v->a[18631] = actions(3);
	v->a[18632] = 1;
	v->a[18633] = sym_comment;
	v->a[18634] = actions(97);
	v->a[18635] = 1;
	v->a[18636] = anon_sym_LPAREN;
	v->a[18637] = actions(417);
	v->a[18638] = 1;
	v->a[18639] = sym_file_descriptor;
	small_parse_table_932(v);
}

void	small_parse_table_932(t_small_parse_table_array *v)
{
	v->a[18640] = actions(429);
	v->a[18641] = 1;
	v->a[18642] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18643] = actions(431);
	v->a[18644] = 1;
	v->a[18645] = anon_sym_DOLLAR;
	v->a[18646] = actions(433);
	v->a[18647] = 1;
	v->a[18648] = anon_sym_DQUOTE;
	v->a[18649] = actions(435);
	v->a[18650] = 1;
	v->a[18651] = anon_sym_DOLLAR_LBRACE;
	v->a[18652] = actions(437);
	v->a[18653] = 1;
	v->a[18654] = anon_sym_DOLLAR_LPAREN;
	v->a[18655] = actions(439);
	v->a[18656] = 1;
	v->a[18657] = anon_sym_BQUOTE;
	v->a[18658] = actions(441);
	v->a[18659] = 1;
	small_parse_table_933(v);
}

void	small_parse_table_933(t_small_parse_table_array *v)
{
	v->a[18660] = sym__bare_dollar;
	v->a[18661] = state(189);
	v->a[18662] = 1;
	v->a[18663] = aux_sym_command_repeat2;
	v->a[18664] = state(732);
	v->a[18665] = 1;
	v->a[18666] = sym_concatenation;
	v->a[18667] = state(1303);
	v->a[18668] = 1;
	v->a[18669] = sym_subshell;
	v->a[18670] = actions(427);
	v->a[18671] = 3;
	v->a[18672] = sym_raw_string;
	v->a[18673] = sym_number;
	v->a[18674] = sym_word;
	v->a[18675] = state(401);
	v->a[18676] = 5;
	v->a[18677] = sym_arithmetic_expansion;
	v->a[18678] = sym_string;
	v->a[18679] = sym_simple_expansion;
	small_parse_table_934(v);
}

void	small_parse_table_934(t_small_parse_table_array *v)
{
	v->a[18680] = sym_expansion;
	v->a[18681] = sym_command_substitution;
	v->a[18682] = actions(403);
	v->a[18683] = 16;
	v->a[18684] = anon_sym_esac;
	v->a[18685] = anon_sym_PIPE;
	v->a[18686] = anon_sym_SEMI_SEMI;
	v->a[18687] = anon_sym_AMP_AMP;
	v->a[18688] = anon_sym_PIPE_PIPE;
	v->a[18689] = anon_sym_LT;
	v->a[18690] = anon_sym_GT;
	v->a[18691] = anon_sym_GT_GT;
	v->a[18692] = anon_sym_LT_AMP;
	v->a[18693] = anon_sym_GT_AMP;
	v->a[18694] = anon_sym_GT_PIPE;
	v->a[18695] = anon_sym_LT_GT;
	v->a[18696] = anon_sym_LT_LT;
	v->a[18697] = anon_sym_LT_LT_DASH;
	v->a[18698] = aux_sym_heredoc_redirect_token1;
	v->a[18699] = anon_sym_SEMI;
	small_parse_table_935(v);
}

/* EOF small_parse_table_186.c */
