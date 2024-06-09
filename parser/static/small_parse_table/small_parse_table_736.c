/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_736.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3680(t_small_parse_table_array *v)
{
	v->a[73600] = 2;
	v->a[73601] = anon_sym_LT_LT;
	v->a[73602] = anon_sym_LT_LT_DASH;
	v->a[73603] = actions(1588);
	v->a[73604] = 2;
	v->a[73605] = anon_sym_AMP_AMP;
	v->a[73606] = anon_sym_PIPE_PIPE;
	v->a[73607] = actions(2757);
	v->a[73608] = 2;
	v->a[73609] = anon_sym_LT_AMP_DASH;
	v->a[73610] = anon_sym_GT_AMP_DASH;
	v->a[73611] = state(1302);
	v->a[73612] = 3;
	v->a[73613] = sym_file_redirect;
	v->a[73614] = sym_heredoc_redirect;
	v->a[73615] = aux_sym_redirected_statement_repeat1;
	v->a[73616] = actions(2755);
	v->a[73617] = 8;
	v->a[73618] = anon_sym_LT;
	v->a[73619] = anon_sym_GT;
	small_parse_table_3681(v);
}

void	small_parse_table_3681(t_small_parse_table_array *v)
{
	v->a[73620] = anon_sym_GT_GT;
	v->a[73621] = anon_sym_AMP_GT;
	v->a[73622] = anon_sym_AMP_GT_GT;
	v->a[73623] = anon_sym_LT_AMP;
	v->a[73624] = anon_sym_GT_AMP;
	v->a[73625] = anon_sym_GT_PIPE;
	v->a[73626] = 5;
	v->a[73627] = actions(3);
	v->a[73628] = 1;
	v->a[73629] = sym_comment;
	v->a[73630] = actions(2763);
	v->a[73631] = 1;
	v->a[73632] = sym_variable_name;
	v->a[73633] = actions(2267);
	v->a[73634] = 2;
	v->a[73635] = sym_file_descriptor;
	v->a[73636] = aux_sym_heredoc_redirect_token1;
	v->a[73637] = state(1298);
	v->a[73638] = 2;
	v->a[73639] = sym_variable_assignment;
	small_parse_table_3682(v);
}

void	small_parse_table_3682(t_small_parse_table_array *v)
{
	v->a[73640] = aux_sym_variable_assignments_repeat1;
	v->a[73641] = actions(2265);
	v->a[73642] = 15;
	v->a[73643] = anon_sym_PIPE;
	v->a[73644] = anon_sym_AMP_AMP;
	v->a[73645] = anon_sym_PIPE_PIPE;
	v->a[73646] = anon_sym_LT;
	v->a[73647] = anon_sym_GT;
	v->a[73648] = anon_sym_GT_GT;
	v->a[73649] = anon_sym_AMP_GT;
	v->a[73650] = anon_sym_AMP_GT_GT;
	v->a[73651] = anon_sym_LT_AMP;
	v->a[73652] = anon_sym_GT_AMP;
	v->a[73653] = anon_sym_GT_PIPE;
	v->a[73654] = anon_sym_LT_AMP_DASH;
	v->a[73655] = anon_sym_GT_AMP_DASH;
	v->a[73656] = anon_sym_LT_LT;
	v->a[73657] = anon_sym_LT_LT_DASH;
	v->a[73658] = 5;
	v->a[73659] = actions(3);
	small_parse_table_3683(v);
}

void	small_parse_table_3683(t_small_parse_table_array *v)
{
	v->a[73660] = 1;
	v->a[73661] = sym_comment;
	v->a[73662] = actions(1002);
	v->a[73663] = 1;
	v->a[73664] = anon_sym_PIPE;
	v->a[73665] = actions(1071);
	v->a[73666] = 2;
	v->a[73667] = sym_file_descriptor;
	v->a[73668] = aux_sym_heredoc_redirect_token1;
	v->a[73669] = state(1302);
	v->a[73670] = 3;
	v->a[73671] = sym_file_redirect;
	v->a[73672] = sym_heredoc_redirect;
	v->a[73673] = aux_sym_redirected_statement_repeat1;
	v->a[73674] = actions(1004);
	v->a[73675] = 14;
	v->a[73676] = anon_sym_AMP_AMP;
	v->a[73677] = anon_sym_PIPE_PIPE;
	v->a[73678] = anon_sym_LT;
	v->a[73679] = anon_sym_GT;
	small_parse_table_3684(v);
}

void	small_parse_table_3684(t_small_parse_table_array *v)
{
	v->a[73680] = anon_sym_GT_GT;
	v->a[73681] = anon_sym_AMP_GT;
	v->a[73682] = anon_sym_AMP_GT_GT;
	v->a[73683] = anon_sym_LT_AMP;
	v->a[73684] = anon_sym_GT_AMP;
	v->a[73685] = anon_sym_GT_PIPE;
	v->a[73686] = anon_sym_LT_AMP_DASH;
	v->a[73687] = anon_sym_GT_AMP_DASH;
	v->a[73688] = anon_sym_LT_LT;
	v->a[73689] = anon_sym_LT_LT_DASH;
	v->a[73690] = 8;
	v->a[73691] = actions(3);
	v->a[73692] = 1;
	v->a[73693] = sym_comment;
	v->a[73694] = actions(2308);
	v->a[73695] = 1;
	v->a[73696] = aux_sym_heredoc_redirect_token1;
	v->a[73697] = actions(2761);
	v->a[73698] = 1;
	v->a[73699] = sym_file_descriptor;
	small_parse_table_3685(v);
}

/* EOF small_parse_table_736.c */
