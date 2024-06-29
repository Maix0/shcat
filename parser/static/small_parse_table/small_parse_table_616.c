/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_616.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3080(t_small_parse_table_array *v)
{
	v->a[61600] = actions(2033);
	v->a[61601] = 1;
	v->a[61602] = sym_file_descriptor;
	v->a[61603] = state(837);
	v->a[61604] = 1;
	v->a[61605] = sym_terminator;
	v->a[61606] = actions(804);
	v->a[61607] = 2;
	v->a[61608] = anon_sym_LT_LT;
	v->a[61609] = anon_sym_LT_LT_DASH;
	v->a[61610] = actions(842);
	v->a[61611] = 2;
	v->a[61612] = anon_sym_AMP_AMP;
	v->a[61613] = anon_sym_PIPE_PIPE;
	v->a[61614] = actions(2029);
	v->a[61615] = 2;
	v->a[61616] = anon_sym_LT_AMP_DASH;
	v->a[61617] = anon_sym_GT_AMP_DASH;
	v->a[61618] = actions(800);
	v->a[61619] = 3;
	small_parse_table_3081(v);
}

void	small_parse_table_3081(t_small_parse_table_array *v)
{
	v->a[61620] = anon_sym_SEMI_SEMI;
	v->a[61621] = anon_sym_AMP;
	v->a[61622] = anon_sym_SEMI;
	v->a[61623] = state(1157);
	v->a[61624] = 3;
	v->a[61625] = sym_file_redirect;
	v->a[61626] = sym_heredoc_redirect;
	v->a[61627] = aux_sym_redirected_statement_repeat1;
	v->a[61628] = actions(2027);
	v->a[61629] = 8;
	v->a[61630] = anon_sym_LT;
	v->a[61631] = anon_sym_GT;
	v->a[61632] = anon_sym_GT_GT;
	v->a[61633] = anon_sym_AMP_GT;
	v->a[61634] = anon_sym_AMP_GT_GT;
	v->a[61635] = anon_sym_LT_AMP;
	v->a[61636] = anon_sym_GT_AMP;
	v->a[61637] = anon_sym_GT_PIPE;
	v->a[61638] = 12;
	v->a[61639] = actions(3);
	small_parse_table_3082(v);
}

void	small_parse_table_3082(t_small_parse_table_array *v)
{
	v->a[61640] = 1;
	v->a[61641] = sym_comment;
	v->a[61642] = actions(764);
	v->a[61643] = 1;
	v->a[61644] = anon_sym_BQUOTE;
	v->a[61645] = actions(766);
	v->a[61646] = 1;
	v->a[61647] = anon_sym_PIPE;
	v->a[61648] = actions(2031);
	v->a[61649] = 1;
	v->a[61650] = aux_sym_heredoc_redirect_token1;
	v->a[61651] = actions(2033);
	v->a[61652] = 1;
	v->a[61653] = sym_file_descriptor;
	v->a[61654] = state(838);
	v->a[61655] = 1;
	v->a[61656] = sym_terminator;
	v->a[61657] = actions(804);
	v->a[61658] = 2;
	v->a[61659] = anon_sym_LT_LT;
	small_parse_table_3083(v);
}

void	small_parse_table_3083(t_small_parse_table_array *v)
{
	v->a[61660] = anon_sym_LT_LT_DASH;
	v->a[61661] = actions(842);
	v->a[61662] = 2;
	v->a[61663] = anon_sym_AMP_AMP;
	v->a[61664] = anon_sym_PIPE_PIPE;
	v->a[61665] = actions(2029);
	v->a[61666] = 2;
	v->a[61667] = anon_sym_LT_AMP_DASH;
	v->a[61668] = anon_sym_GT_AMP_DASH;
	v->a[61669] = actions(800);
	v->a[61670] = 3;
	v->a[61671] = anon_sym_SEMI_SEMI;
	v->a[61672] = anon_sym_AMP;
	v->a[61673] = anon_sym_SEMI;
	v->a[61674] = state(1157);
	v->a[61675] = 3;
	v->a[61676] = sym_file_redirect;
	v->a[61677] = sym_heredoc_redirect;
	v->a[61678] = aux_sym_redirected_statement_repeat1;
	v->a[61679] = actions(2027);
	small_parse_table_3084(v);
}

void	small_parse_table_3084(t_small_parse_table_array *v)
{
	v->a[61680] = 8;
	v->a[61681] = anon_sym_LT;
	v->a[61682] = anon_sym_GT;
	v->a[61683] = anon_sym_GT_GT;
	v->a[61684] = anon_sym_AMP_GT;
	v->a[61685] = anon_sym_AMP_GT_GT;
	v->a[61686] = anon_sym_LT_AMP;
	v->a[61687] = anon_sym_GT_AMP;
	v->a[61688] = anon_sym_GT_PIPE;
	v->a[61689] = 12;
	v->a[61690] = actions(3);
	v->a[61691] = 1;
	v->a[61692] = sym_comment;
	v->a[61693] = actions(764);
	v->a[61694] = 1;
	v->a[61695] = anon_sym_BQUOTE;
	v->a[61696] = actions(766);
	v->a[61697] = 1;
	v->a[61698] = anon_sym_PIPE;
	v->a[61699] = actions(2031);
	small_parse_table_3085(v);
}

/* EOF small_parse_table_616.c */
