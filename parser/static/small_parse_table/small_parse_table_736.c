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
	v->a[73600] = aux_sym_heredoc_redirect_token1;
	v->a[73601] = actions(861);
	v->a[73602] = 2;
	v->a[73603] = anon_sym_LT_LT;
	v->a[73604] = anon_sym_LT_LT_DASH;
	v->a[73605] = actions(965);
	v->a[73606] = 2;
	v->a[73607] = anon_sym_AMP_AMP;
	v->a[73608] = anon_sym_PIPE_PIPE;
	v->a[73609] = actions(2598);
	v->a[73610] = 2;
	v->a[73611] = anon_sym_LT_AMP_DASH;
	v->a[73612] = anon_sym_GT_AMP_DASH;
	v->a[73613] = actions(995);
	v->a[73614] = 3;
	v->a[73615] = anon_sym_SEMI_SEMI;
	v->a[73616] = anon_sym_AMP;
	v->a[73617] = anon_sym_SEMI;
	v->a[73618] = state(1322);
	v->a[73619] = 3;
	small_parse_table_3681(v);
}

void	small_parse_table_3681(t_small_parse_table_array *v)
{
	v->a[73620] = sym_file_redirect;
	v->a[73621] = sym_heredoc_redirect;
	v->a[73622] = aux_sym_redirected_statement_repeat1;
	v->a[73623] = actions(2596);
	v->a[73624] = 8;
	v->a[73625] = anon_sym_LT;
	v->a[73626] = anon_sym_GT;
	v->a[73627] = anon_sym_GT_GT;
	v->a[73628] = anon_sym_AMP_GT;
	v->a[73629] = anon_sym_AMP_GT_GT;
	v->a[73630] = anon_sym_LT_AMP;
	v->a[73631] = anon_sym_GT_AMP;
	v->a[73632] = anon_sym_GT_PIPE;
	v->a[73633] = 3;
	v->a[73634] = actions(3);
	v->a[73635] = 1;
	v->a[73636] = sym_comment;
	v->a[73637] = actions(2667);
	v->a[73638] = 3;
	v->a[73639] = sym_file_descriptor;
	small_parse_table_3682(v);
}

void	small_parse_table_3682(t_small_parse_table_array *v)
{
	v->a[73640] = ts_builtin_sym_end;
	v->a[73641] = aux_sym_heredoc_redirect_token1;
	v->a[73642] = actions(2669);
	v->a[73643] = 20;
	v->a[73644] = anon_sym_PIPE;
	v->a[73645] = anon_sym_RPAREN;
	v->a[73646] = anon_sym_SEMI_SEMI;
	v->a[73647] = anon_sym_AMP_AMP;
	v->a[73648] = anon_sym_PIPE_PIPE;
	v->a[73649] = anon_sym_LT;
	v->a[73650] = anon_sym_GT;
	v->a[73651] = anon_sym_GT_GT;
	v->a[73652] = anon_sym_AMP_GT;
	v->a[73653] = anon_sym_AMP_GT_GT;
	v->a[73654] = anon_sym_LT_AMP;
	v->a[73655] = anon_sym_GT_AMP;
	v->a[73656] = anon_sym_GT_PIPE;
	v->a[73657] = anon_sym_LT_AMP_DASH;
	v->a[73658] = anon_sym_GT_AMP_DASH;
	v->a[73659] = anon_sym_LT_LT;
	small_parse_table_3683(v);
}

void	small_parse_table_3683(t_small_parse_table_array *v)
{
	v->a[73660] = anon_sym_LT_LT_DASH;
	v->a[73661] = anon_sym_AMP;
	v->a[73662] = anon_sym_BQUOTE;
	v->a[73663] = anon_sym_SEMI;
	v->a[73664] = 3;
	v->a[73665] = actions(3);
	v->a[73666] = 1;
	v->a[73667] = sym_comment;
	v->a[73668] = actions(2671);
	v->a[73669] = 3;
	v->a[73670] = sym_file_descriptor;
	v->a[73671] = ts_builtin_sym_end;
	v->a[73672] = aux_sym_heredoc_redirect_token1;
	v->a[73673] = actions(2673);
	v->a[73674] = 20;
	v->a[73675] = anon_sym_PIPE;
	v->a[73676] = anon_sym_RPAREN;
	v->a[73677] = anon_sym_SEMI_SEMI;
	v->a[73678] = anon_sym_AMP_AMP;
	v->a[73679] = anon_sym_PIPE_PIPE;
	small_parse_table_3684(v);
}

void	small_parse_table_3684(t_small_parse_table_array *v)
{
	v->a[73680] = anon_sym_LT;
	v->a[73681] = anon_sym_GT;
	v->a[73682] = anon_sym_GT_GT;
	v->a[73683] = anon_sym_AMP_GT;
	v->a[73684] = anon_sym_AMP_GT_GT;
	v->a[73685] = anon_sym_LT_AMP;
	v->a[73686] = anon_sym_GT_AMP;
	v->a[73687] = anon_sym_GT_PIPE;
	v->a[73688] = anon_sym_LT_AMP_DASH;
	v->a[73689] = anon_sym_GT_AMP_DASH;
	v->a[73690] = anon_sym_LT_LT;
	v->a[73691] = anon_sym_LT_LT_DASH;
	v->a[73692] = anon_sym_AMP;
	v->a[73693] = anon_sym_BQUOTE;
	v->a[73694] = anon_sym_SEMI;
	v->a[73695] = 3;
	v->a[73696] = actions(3);
	v->a[73697] = 1;
	v->a[73698] = sym_comment;
	v->a[73699] = actions(2675);
	small_parse_table_3685(v);
}

/* EOF small_parse_table_736.c */
