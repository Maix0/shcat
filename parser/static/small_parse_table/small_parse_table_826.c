/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_826.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4130(t_small_parse_table_array *v)
{
	v->a[82600] = anon_sym_GT;
	v->a[82601] = anon_sym_AMP_GT;
	v->a[82602] = anon_sym_LT_AMP;
	v->a[82603] = anon_sym_GT_AMP;
	v->a[82604] = anon_sym_LT_LT;
	v->a[82605] = actions(2117);
	v->a[82606] = 9;
	v->a[82607] = sym_file_descriptor;
	v->a[82608] = anon_sym_AMP_AMP;
	v->a[82609] = anon_sym_PIPE_PIPE;
	v->a[82610] = anon_sym_GT_GT;
	v->a[82611] = anon_sym_AMP_GT_GT;
	v->a[82612] = anon_sym_GT_PIPE;
	v->a[82613] = anon_sym_LT_AMP_DASH;
	v->a[82614] = anon_sym_GT_AMP_DASH;
	v->a[82615] = anon_sym_LT_LT_DASH;
	v->a[82616] = 3;
	v->a[82617] = actions(1094);
	v->a[82618] = 1;
	v->a[82619] = sym_comment;
	small_parse_table_4131(v);
}

void	small_parse_table_4131(t_small_parse_table_array *v)
{
	v->a[82620] = actions(999);
	v->a[82621] = 7;
	v->a[82622] = anon_sym_PIPE;
	v->a[82623] = anon_sym_LT;
	v->a[82624] = anon_sym_GT;
	v->a[82625] = anon_sym_AMP_GT;
	v->a[82626] = anon_sym_LT_AMP;
	v->a[82627] = anon_sym_GT_AMP;
	v->a[82628] = anon_sym_LT_LT;
	v->a[82629] = actions(1004);
	v->a[82630] = 12;
	v->a[82631] = sym_file_descriptor;
	v->a[82632] = sym__concat;
	v->a[82633] = sym_variable_name;
	v->a[82634] = anon_sym_AMP_AMP;
	v->a[82635] = anon_sym_PIPE_PIPE;
	v->a[82636] = anon_sym_GT_GT;
	v->a[82637] = anon_sym_AMP_GT_GT;
	v->a[82638] = anon_sym_GT_PIPE;
	v->a[82639] = anon_sym_LT_AMP_DASH;
	small_parse_table_4132(v);
}

void	small_parse_table_4132(t_small_parse_table_array *v)
{
	v->a[82640] = anon_sym_GT_AMP_DASH;
	v->a[82641] = anon_sym_LT_LT_DASH;
	v->a[82642] = aux_sym_concatenation_token1;
	v->a[82643] = 8;
	v->a[82644] = actions(3);
	v->a[82645] = 1;
	v->a[82646] = sym_comment;
	v->a[82647] = actions(2964);
	v->a[82648] = 1;
	v->a[82649] = sym_file_descriptor;
	v->a[82650] = actions(3000);
	v->a[82651] = 1;
	v->a[82652] = aux_sym_heredoc_redirect_token1;
	v->a[82653] = actions(861);
	v->a[82654] = 2;
	v->a[82655] = anon_sym_LT_LT;
	v->a[82656] = anon_sym_LT_LT_DASH;
	v->a[82657] = actions(1500);
	v->a[82658] = 2;
	v->a[82659] = anon_sym_AMP_AMP;
	small_parse_table_4133(v);
}

void	small_parse_table_4133(t_small_parse_table_array *v)
{
	v->a[82660] = anon_sym_PIPE_PIPE;
	v->a[82661] = actions(2962);
	v->a[82662] = 2;
	v->a[82663] = anon_sym_LT_AMP_DASH;
	v->a[82664] = anon_sym_GT_AMP_DASH;
	v->a[82665] = state(1546);
	v->a[82666] = 3;
	v->a[82667] = sym_file_redirect;
	v->a[82668] = sym_heredoc_redirect;
	v->a[82669] = aux_sym_redirected_statement_repeat1;
	v->a[82670] = actions(2960);
	v->a[82671] = 8;
	v->a[82672] = anon_sym_LT;
	v->a[82673] = anon_sym_GT;
	v->a[82674] = anon_sym_GT_GT;
	v->a[82675] = anon_sym_AMP_GT;
	v->a[82676] = anon_sym_AMP_GT_GT;
	v->a[82677] = anon_sym_LT_AMP;
	v->a[82678] = anon_sym_GT_AMP;
	v->a[82679] = anon_sym_GT_PIPE;
	small_parse_table_4134(v);
}

void	small_parse_table_4134(t_small_parse_table_array *v)
{
	v->a[82680] = 7;
	v->a[82681] = actions(3);
	v->a[82682] = 1;
	v->a[82683] = sym_comment;
	v->a[82684] = actions(2626);
	v->a[82685] = 1;
	v->a[82686] = aux_sym_heredoc_redirect_token1;
	v->a[82687] = actions(3027);
	v->a[82688] = 1;
	v->a[82689] = sym_file_descriptor;
	v->a[82690] = actions(2962);
	v->a[82691] = 2;
	v->a[82692] = anon_sym_LT_AMP_DASH;
	v->a[82693] = anon_sym_GT_AMP_DASH;
	v->a[82694] = state(1565);
	v->a[82695] = 2;
	v->a[82696] = sym_file_redirect;
	v->a[82697] = aux_sym_redirected_statement_repeat2;
	v->a[82698] = actions(2624);
	v->a[82699] = 5;
	small_parse_table_4135(v);
}

/* EOF small_parse_table_826.c */
