/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_646.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3230(t_small_parse_table_array *v)
{
	v->a[64600] = anon_sym_LT_LT_DASH;
	v->a[64601] = actions(924);
	v->a[64602] = 2;
	v->a[64603] = anon_sym_AMP_AMP;
	v->a[64604] = anon_sym_PIPE_PIPE;
	v->a[64605] = actions(2063);
	v->a[64606] = 2;
	v->a[64607] = anon_sym_LT_AMP_DASH;
	v->a[64608] = anon_sym_GT_AMP_DASH;
	v->a[64609] = state(1268);
	v->a[64610] = 3;
	v->a[64611] = sym_file_redirect;
	v->a[64612] = sym_heredoc_redirect;
	v->a[64613] = aux_sym_redirected_statement_repeat1;
	v->a[64614] = actions(2061);
	v->a[64615] = 6;
	v->a[64616] = anon_sym_LT;
	v->a[64617] = anon_sym_GT;
	v->a[64618] = anon_sym_GT_GT;
	v->a[64619] = anon_sym_LT_AMP;
	small_parse_table_3231(v);
}

void	small_parse_table_3231(t_small_parse_table_array *v)
{
	v->a[64620] = anon_sym_GT_AMP;
	v->a[64621] = anon_sym_GT_PIPE;
	v->a[64622] = 11;
	v->a[64623] = actions(3);
	v->a[64624] = 1;
	v->a[64625] = sym_comment;
	v->a[64626] = actions(779);
	v->a[64627] = 1;
	v->a[64628] = ts_builtin_sym_end;
	v->a[64629] = actions(2029);
	v->a[64630] = 1;
	v->a[64631] = aux_sym_heredoc_redirect_token1;
	v->a[64632] = actions(2031);
	v->a[64633] = 1;
	v->a[64634] = sym_file_descriptor;
	v->a[64635] = state(797);
	v->a[64636] = 1;
	v->a[64637] = sym_terminator;
	v->a[64638] = actions(754);
	v->a[64639] = 2;
	small_parse_table_3232(v);
}

void	small_parse_table_3232(t_small_parse_table_array *v)
{
	v->a[64640] = anon_sym_LT_LT;
	v->a[64641] = anon_sym_LT_LT_DASH;
	v->a[64642] = actions(783);
	v->a[64643] = 2;
	v->a[64644] = anon_sym_AMP_AMP;
	v->a[64645] = anon_sym_PIPE_PIPE;
	v->a[64646] = actions(2027);
	v->a[64647] = 2;
	v->a[64648] = anon_sym_LT_AMP_DASH;
	v->a[64649] = anon_sym_GT_AMP_DASH;
	v->a[64650] = actions(781);
	v->a[64651] = 3;
	v->a[64652] = anon_sym_SEMI_SEMI;
	v->a[64653] = anon_sym_AMP;
	v->a[64654] = anon_sym_SEMI;
	v->a[64655] = state(1160);
	v->a[64656] = 3;
	v->a[64657] = sym_file_redirect;
	v->a[64658] = sym_heredoc_redirect;
	v->a[64659] = aux_sym_redirected_statement_repeat1;
	small_parse_table_3233(v);
}

void	small_parse_table_3233(t_small_parse_table_array *v)
{
	v->a[64660] = actions(2025);
	v->a[64661] = 6;
	v->a[64662] = anon_sym_LT;
	v->a[64663] = anon_sym_GT;
	v->a[64664] = anon_sym_GT_GT;
	v->a[64665] = anon_sym_LT_AMP;
	v->a[64666] = anon_sym_GT_AMP;
	v->a[64667] = anon_sym_GT_PIPE;
	v->a[64668] = 12;
	v->a[64669] = actions(3);
	v->a[64670] = 1;
	v->a[64671] = sym_comment;
	v->a[64672] = actions(682);
	v->a[64673] = 1;
	v->a[64674] = anon_sym_PIPE;
	v->a[64675] = actions(695);
	v->a[64676] = 1;
	v->a[64677] = anon_sym_SEMI_SEMI;
	v->a[64678] = actions(2009);
	v->a[64679] = 1;
	small_parse_table_3234(v);
}

void	small_parse_table_3234(t_small_parse_table_array *v)
{
	v->a[64680] = aux_sym_heredoc_redirect_token1;
	v->a[64681] = actions(2065);
	v->a[64682] = 1;
	v->a[64683] = sym_file_descriptor;
	v->a[64684] = state(751);
	v->a[64685] = 1;
	v->a[64686] = sym_terminator;
	v->a[64687] = actions(750);
	v->a[64688] = 2;
	v->a[64689] = anon_sym_AMP;
	v->a[64690] = anon_sym_SEMI;
	v->a[64691] = actions(754);
	v->a[64692] = 2;
	v->a[64693] = anon_sym_LT_LT;
	v->a[64694] = anon_sym_LT_LT_DASH;
	v->a[64695] = actions(924);
	v->a[64696] = 2;
	v->a[64697] = anon_sym_AMP_AMP;
	v->a[64698] = anon_sym_PIPE_PIPE;
	v->a[64699] = actions(2063);
	small_parse_table_3235(v);
}

/* EOF small_parse_table_646.c */
