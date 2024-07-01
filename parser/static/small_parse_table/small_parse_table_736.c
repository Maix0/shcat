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
	v->a[73600] = 8;
	v->a[73601] = actions(3);
	v->a[73602] = 1;
	v->a[73603] = sym_comment;
	v->a[73604] = actions(2116);
	v->a[73605] = 1;
	v->a[73606] = aux_sym_heredoc_redirect_token1;
	v->a[73607] = actions(2546);
	v->a[73608] = 1;
	v->a[73609] = sym_file_descriptor;
	v->a[73610] = actions(754);
	v->a[73611] = 2;
	v->a[73612] = anon_sym_LT_LT;
	v->a[73613] = anon_sym_LT_LT_DASH;
	v->a[73614] = actions(2542);
	v->a[73615] = 2;
	v->a[73616] = anon_sym_LT_AMP_DASH;
	v->a[73617] = anon_sym_GT_AMP_DASH;
	v->a[73618] = actions(2114);
	v->a[73619] = 3;
	small_parse_table_3681(v);
}

void	small_parse_table_3681(t_small_parse_table_array *v)
{
	v->a[73620] = anon_sym_PIPE;
	v->a[73621] = anon_sym_AMP_AMP;
	v->a[73622] = anon_sym_PIPE_PIPE;
	v->a[73623] = state(1401);
	v->a[73624] = 3;
	v->a[73625] = sym_file_redirect;
	v->a[73626] = sym_heredoc_redirect;
	v->a[73627] = aux_sym_redirected_statement_repeat1;
	v->a[73628] = actions(2540);
	v->a[73629] = 6;
	v->a[73630] = anon_sym_LT;
	v->a[73631] = anon_sym_GT;
	v->a[73632] = anon_sym_GT_GT;
	v->a[73633] = anon_sym_LT_AMP;
	v->a[73634] = anon_sym_GT_AMP;
	v->a[73635] = anon_sym_GT_PIPE;
	v->a[73636] = 5;
	v->a[73637] = actions(3);
	v->a[73638] = 1;
	v->a[73639] = sym_comment;
	small_parse_table_3682(v);
}

void	small_parse_table_3682(t_small_parse_table_array *v)
{
	v->a[73640] = actions(2568);
	v->a[73641] = 1;
	v->a[73642] = sym_variable_name;
	v->a[73643] = actions(2067);
	v->a[73644] = 2;
	v->a[73645] = sym_file_descriptor;
	v->a[73646] = aux_sym_heredoc_redirect_token1;
	v->a[73647] = state(1409);
	v->a[73648] = 2;
	v->a[73649] = sym_variable_assignment;
	v->a[73650] = aux_sym__variable_assignments_repeat1;
	v->a[73651] = actions(2069);
	v->a[73652] = 13;
	v->a[73653] = anon_sym_PIPE;
	v->a[73654] = anon_sym_AMP_AMP;
	v->a[73655] = anon_sym_PIPE_PIPE;
	v->a[73656] = anon_sym_LT;
	v->a[73657] = anon_sym_GT;
	v->a[73658] = anon_sym_GT_GT;
	v->a[73659] = anon_sym_LT_AMP;
	small_parse_table_3683(v);
}

void	small_parse_table_3683(t_small_parse_table_array *v)
{
	v->a[73660] = anon_sym_GT_AMP;
	v->a[73661] = anon_sym_GT_PIPE;
	v->a[73662] = anon_sym_LT_AMP_DASH;
	v->a[73663] = anon_sym_GT_AMP_DASH;
	v->a[73664] = anon_sym_LT_LT;
	v->a[73665] = anon_sym_LT_LT_DASH;
	v->a[73666] = 5;
	v->a[73667] = actions(3);
	v->a[73668] = 1;
	v->a[73669] = sym_comment;
	v->a[73670] = actions(682);
	v->a[73671] = 1;
	v->a[73672] = anon_sym_PIPE;
	v->a[73673] = actions(984);
	v->a[73674] = 2;
	v->a[73675] = sym_file_descriptor;
	v->a[73676] = aux_sym_heredoc_redirect_token1;
	v->a[73677] = state(1408);
	v->a[73678] = 3;
	v->a[73679] = sym_file_redirect;
	small_parse_table_3684(v);
}

void	small_parse_table_3684(t_small_parse_table_array *v)
{
	v->a[73680] = sym_heredoc_redirect;
	v->a[73681] = aux_sym_redirected_statement_repeat1;
	v->a[73682] = actions(935);
	v->a[73683] = 12;
	v->a[73684] = anon_sym_AMP_AMP;
	v->a[73685] = anon_sym_PIPE_PIPE;
	v->a[73686] = anon_sym_LT;
	v->a[73687] = anon_sym_GT;
	v->a[73688] = anon_sym_GT_GT;
	v->a[73689] = anon_sym_LT_AMP;
	v->a[73690] = anon_sym_GT_AMP;
	v->a[73691] = anon_sym_GT_PIPE;
	v->a[73692] = anon_sym_LT_AMP_DASH;
	v->a[73693] = anon_sym_GT_AMP_DASH;
	v->a[73694] = anon_sym_LT_LT;
	v->a[73695] = anon_sym_LT_LT_DASH;
	v->a[73696] = 3;
	v->a[73697] = actions(870);
	v->a[73698] = 1;
	v->a[73699] = sym_comment;
	small_parse_table_3685(v);
}

/* EOF small_parse_table_736.c */
