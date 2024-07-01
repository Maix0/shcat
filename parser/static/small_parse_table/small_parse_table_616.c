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
	v->a[61600] = anon_sym_AMP;
	v->a[61601] = anon_sym_SEMI;
	v->a[61602] = state(1194);
	v->a[61603] = 3;
	v->a[61604] = sym_file_redirect;
	v->a[61605] = sym_heredoc_redirect;
	v->a[61606] = aux_sym_redirected_statement_repeat1;
	v->a[61607] = actions(1887);
	v->a[61608] = 7;
	v->a[61609] = anon_sym_LT;
	v->a[61610] = anon_sym_GT;
	v->a[61611] = anon_sym_GT_GT;
	v->a[61612] = anon_sym_LT_AMP;
	v->a[61613] = anon_sym_GT_AMP;
	v->a[61614] = anon_sym_GT_PIPE;
	v->a[61615] = anon_sym_LT_GT;
	v->a[61616] = 3;
	v->a[61617] = actions(3);
	v->a[61618] = 1;
	v->a[61619] = sym_comment;
	small_parse_table_3081(v);
}

void	small_parse_table_3081(t_small_parse_table_array *v)
{
	v->a[61620] = actions(2099);
	v->a[61621] = 3;
	v->a[61622] = sym_file_descriptor;
	v->a[61623] = ts_builtin_sym_end;
	v->a[61624] = aux_sym_heredoc_redirect_token1;
	v->a[61625] = actions(2101);
	v->a[61626] = 17;
	v->a[61627] = anon_sym_PIPE;
	v->a[61628] = anon_sym_RPAREN;
	v->a[61629] = anon_sym_SEMI_SEMI;
	v->a[61630] = anon_sym_AMP_AMP;
	v->a[61631] = anon_sym_PIPE_PIPE;
	v->a[61632] = anon_sym_LT;
	v->a[61633] = anon_sym_GT;
	v->a[61634] = anon_sym_GT_GT;
	v->a[61635] = anon_sym_LT_AMP;
	v->a[61636] = anon_sym_GT_AMP;
	v->a[61637] = anon_sym_GT_PIPE;
	v->a[61638] = anon_sym_LT_GT;
	v->a[61639] = anon_sym_LT_LT;
	small_parse_table_3082(v);
}

void	small_parse_table_3082(t_small_parse_table_array *v)
{
	v->a[61640] = anon_sym_LT_LT_DASH;
	v->a[61641] = anon_sym_AMP;
	v->a[61642] = anon_sym_BQUOTE;
	v->a[61643] = anon_sym_SEMI;
	v->a[61644] = 3;
	v->a[61645] = actions(3);
	v->a[61646] = 1;
	v->a[61647] = sym_comment;
	v->a[61648] = actions(2091);
	v->a[61649] = 3;
	v->a[61650] = sym_file_descriptor;
	v->a[61651] = ts_builtin_sym_end;
	v->a[61652] = aux_sym_heredoc_redirect_token1;
	v->a[61653] = actions(2093);
	v->a[61654] = 17;
	v->a[61655] = anon_sym_PIPE;
	v->a[61656] = anon_sym_RPAREN;
	v->a[61657] = anon_sym_SEMI_SEMI;
	v->a[61658] = anon_sym_AMP_AMP;
	v->a[61659] = anon_sym_PIPE_PIPE;
	small_parse_table_3083(v);
}

void	small_parse_table_3083(t_small_parse_table_array *v)
{
	v->a[61660] = anon_sym_LT;
	v->a[61661] = anon_sym_GT;
	v->a[61662] = anon_sym_GT_GT;
	v->a[61663] = anon_sym_LT_AMP;
	v->a[61664] = anon_sym_GT_AMP;
	v->a[61665] = anon_sym_GT_PIPE;
	v->a[61666] = anon_sym_LT_GT;
	v->a[61667] = anon_sym_LT_LT;
	v->a[61668] = anon_sym_LT_LT_DASH;
	v->a[61669] = anon_sym_AMP;
	v->a[61670] = anon_sym_BQUOTE;
	v->a[61671] = anon_sym_SEMI;
	v->a[61672] = 5;
	v->a[61673] = actions(3);
	v->a[61674] = 1;
	v->a[61675] = sym_comment;
	v->a[61676] = actions(2103);
	v->a[61677] = 1;
	v->a[61678] = sym_variable_name;
	v->a[61679] = actions(1908);
	small_parse_table_3084(v);
}

void	small_parse_table_3084(t_small_parse_table_array *v)
{
	v->a[61680] = 2;
	v->a[61681] = sym_file_descriptor;
	v->a[61682] = aux_sym_heredoc_redirect_token1;
	v->a[61683] = state(1187);
	v->a[61684] = 2;
	v->a[61685] = sym_variable_assignment;
	v->a[61686] = aux_sym__variable_assignments_repeat1;
	v->a[61687] = actions(1906);
	v->a[61688] = 15;
	v->a[61689] = anon_sym_PIPE;
	v->a[61690] = anon_sym_SEMI_SEMI;
	v->a[61691] = anon_sym_AMP_AMP;
	v->a[61692] = anon_sym_PIPE_PIPE;
	v->a[61693] = anon_sym_LT;
	v->a[61694] = anon_sym_GT;
	v->a[61695] = anon_sym_GT_GT;
	v->a[61696] = anon_sym_LT_AMP;
	v->a[61697] = anon_sym_GT_AMP;
	v->a[61698] = anon_sym_GT_PIPE;
	v->a[61699] = anon_sym_LT_GT;
	small_parse_table_3085(v);
}

/* EOF small_parse_table_616.c */
