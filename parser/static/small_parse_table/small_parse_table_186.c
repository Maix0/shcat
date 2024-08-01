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
	v->a[18600] = anon_sym_GT;
	v->a[18601] = anon_sym_GT_GT;
	v->a[18602] = anon_sym_LT_LT;
	v->a[18603] = aux_sym_heredoc_redirect_token1;
	v->a[18604] = anon_sym_SEMI;
	v->a[18605] = 18;
	v->a[18606] = actions(3);
	v->a[18607] = 1;
	v->a[18608] = sym_comment;
	v->a[18609] = actions(647);
	v->a[18610] = 1;
	v->a[18611] = anon_sym_PIPE;
	v->a[18612] = actions(655);
	v->a[18613] = 1;
	v->a[18614] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18615] = actions(657);
	v->a[18616] = 1;
	v->a[18617] = anon_sym_DOLLAR;
	v->a[18618] = actions(659);
	v->a[18619] = 1;
	small_parse_table_931(v);
}

void	small_parse_table_931(t_small_parse_table_array *v)
{
	v->a[18620] = anon_sym_DQUOTE;
	v->a[18621] = actions(661);
	v->a[18622] = 1;
	v->a[18623] = anon_sym_DOLLAR_LBRACE;
	v->a[18624] = actions(663);
	v->a[18625] = 1;
	v->a[18626] = anon_sym_DOLLAR_LPAREN;
	v->a[18627] = actions(665);
	v->a[18628] = 1;
	v->a[18629] = anon_sym_BQUOTE;
	v->a[18630] = actions(756);
	v->a[18631] = 1;
	v->a[18632] = aux_sym_heredoc_redirect_token1;
	v->a[18633] = state(755);
	v->a[18634] = 1;
	v->a[18635] = aux_sym__heredoc_command;
	v->a[18636] = state(1296);
	v->a[18637] = 1;
	v->a[18638] = sym_concatenation;
	v->a[18639] = state(1632);
	small_parse_table_932(v);
}

void	small_parse_table_932(t_small_parse_table_array *v)
{
	v->a[18640] = 1;
	v->a[18641] = sym__heredoc_expression;
	v->a[18642] = state(1633);
	v->a[18643] = 1;
	v->a[18644] = sym__heredoc_pipeline;
	v->a[18645] = actions(649);
	v->a[18646] = 2;
	v->a[18647] = anon_sym_AMP_AMP;
	v->a[18648] = anon_sym_PIPE_PIPE;
	v->a[18649] = state(1370);
	v->a[18650] = 2;
	v->a[18651] = sym_file_redirect;
	v->a[18652] = aux_sym_redirected_statement_repeat2;
	v->a[18653] = actions(645);
	v->a[18654] = 3;
	v->a[18655] = sym_raw_string;
	v->a[18656] = sym_number;
	v->a[18657] = sym_word;
	v->a[18658] = actions(651);
	v->a[18659] = 3;
	small_parse_table_933(v);
}

void	small_parse_table_933(t_small_parse_table_array *v)
{
	v->a[18660] = anon_sym_LT;
	v->a[18661] = anon_sym_GT;
	v->a[18662] = anon_sym_GT_GT;
	v->a[18663] = state(1011);
	v->a[18664] = 5;
	v->a[18665] = sym_arithmetic_expansion;
	v->a[18666] = sym_string;
	v->a[18667] = sym_simple_expansion;
	v->a[18668] = sym_expansion;
	v->a[18669] = sym_command_substitution;
	v->a[18670] = 13;
	v->a[18671] = actions(3);
	v->a[18672] = 1;
	v->a[18673] = sym_comment;
	v->a[18674] = actions(53);
	v->a[18675] = 1;
	v->a[18676] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18677] = actions(55);
	v->a[18678] = 1;
	v->a[18679] = anon_sym_DOLLAR;
	small_parse_table_934(v);
}

void	small_parse_table_934(t_small_parse_table_array *v)
{
	v->a[18680] = actions(57);
	v->a[18681] = 1;
	v->a[18682] = anon_sym_DQUOTE;
	v->a[18683] = actions(61);
	v->a[18684] = 1;
	v->a[18685] = anon_sym_DOLLAR_LBRACE;
	v->a[18686] = actions(63);
	v->a[18687] = 1;
	v->a[18688] = anon_sym_DOLLAR_LPAREN;
	v->a[18689] = actions(65);
	v->a[18690] = 1;
	v->a[18691] = anon_sym_BQUOTE;
	v->a[18692] = actions(419);
	v->a[18693] = 1;
	v->a[18694] = sym__bare_dollar;
	v->a[18695] = state(188);
	v->a[18696] = 1;
	v->a[18697] = aux_sym_command_repeat2;
	v->a[18698] = state(570);
	v->a[18699] = 1;
	small_parse_table_935(v);
}

/* EOF small_parse_table_186.c */
