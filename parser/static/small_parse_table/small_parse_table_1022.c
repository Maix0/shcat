/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1022.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5110(t_small_parse_table_array *v)
{
	v->a[102200] = sym_comment;
	v->a[102201] = actions(1997);
	v->a[102202] = 1;
	v->a[102203] = ts_builtin_sym_end;
	v->a[102204] = actions(3149);
	v->a[102205] = 1;
	v->a[102206] = aux_sym_heredoc_redirect_token1;
	v->a[102207] = actions(5604);
	v->a[102208] = 1;
	v->a[102209] = sym_file_descriptor;
	v->a[102210] = actions(2516);
	v->a[102211] = 2;
	v->a[102212] = anon_sym_PIPE;
	v->a[102213] = anon_sym_PIPE_AMP;
	v->a[102214] = actions(2943);
	v->a[102215] = 2;
	v->a[102216] = anon_sym_AMP_AMP;
	v->a[102217] = anon_sym_PIPE_PIPE;
	v->a[102218] = actions(2945);
	v->a[102219] = 2;
	small_parse_table_5111(v);
}

void	small_parse_table_5111(t_small_parse_table_array *v)
{
	v->a[102220] = anon_sym_LT_LT;
	v->a[102221] = anon_sym_LT_LT_DASH;
	v->a[102222] = actions(5602);
	v->a[102223] = 2;
	v->a[102224] = anon_sym_LT_AMP_DASH;
	v->a[102225] = anon_sym_GT_AMP_DASH;
	v->a[102226] = actions(3147);
	v->a[102227] = 3;
	v->a[102228] = anon_sym_SEMI_SEMI;
	v->a[102229] = anon_sym_AMP;
	v->a[102230] = anon_sym_SEMI;
	v->a[102231] = state(2129);
	v->a[102232] = 3;
	v->a[102233] = sym_file_redirect;
	v->a[102234] = sym_heredoc_redirect;
	v->a[102235] = aux_sym_redirected_statement_repeat1;
	v->a[102236] = actions(5600);
	v->a[102237] = 8;
	v->a[102238] = anon_sym_LT;
	v->a[102239] = anon_sym_GT;
	small_parse_table_5112(v);
}

void	small_parse_table_5112(t_small_parse_table_array *v)
{
	v->a[102240] = anon_sym_GT_GT;
	v->a[102241] = anon_sym_AMP_GT;
	v->a[102242] = anon_sym_AMP_GT_GT;
	v->a[102243] = anon_sym_LT_AMP;
	v->a[102244] = anon_sym_GT_AMP;
	v->a[102245] = anon_sym_GT_PIPE;
	v->a[102246] = 5;
	v->a[102247] = actions(3);
	v->a[102248] = 1;
	v->a[102249] = sym_comment;
	v->a[102250] = actions(5915);
	v->a[102251] = 1;
	v->a[102252] = sym_variable_name;
	v->a[102253] = state(2095);
	v->a[102254] = 2;
	v->a[102255] = sym_variable_assignment;
	v->a[102256] = aux_sym_variable_assignments_repeat1;
	v->a[102257] = actions(5145);
	v->a[102258] = 3;
	v->a[102259] = sym_file_descriptor;
	small_parse_table_5113(v);
}

void	small_parse_table_5113(t_small_parse_table_array *v)
{
	v->a[102260] = ts_builtin_sym_end;
	v->a[102261] = aux_sym_heredoc_redirect_token1;
	v->a[102262] = actions(5143);
	v->a[102263] = 19;
	v->a[102264] = anon_sym_PIPE;
	v->a[102265] = anon_sym_SEMI_SEMI;
	v->a[102266] = anon_sym_PIPE_AMP;
	v->a[102267] = anon_sym_AMP_AMP;
	v->a[102268] = anon_sym_PIPE_PIPE;
	v->a[102269] = anon_sym_LT;
	v->a[102270] = anon_sym_GT;
	v->a[102271] = anon_sym_GT_GT;
	v->a[102272] = anon_sym_AMP_GT;
	v->a[102273] = anon_sym_AMP_GT_GT;
	v->a[102274] = anon_sym_LT_AMP;
	v->a[102275] = anon_sym_GT_AMP;
	v->a[102276] = anon_sym_GT_PIPE;
	v->a[102277] = anon_sym_LT_AMP_DASH;
	v->a[102278] = anon_sym_GT_AMP_DASH;
	v->a[102279] = anon_sym_LT_LT;
	small_parse_table_5114(v);
}

void	small_parse_table_5114(t_small_parse_table_array *v)
{
	v->a[102280] = anon_sym_LT_LT_DASH;
	v->a[102281] = anon_sym_AMP;
	v->a[102282] = anon_sym_SEMI;
	v->a[102283] = 8;
	v->a[102284] = actions(3);
	v->a[102285] = 1;
	v->a[102286] = sym_comment;
	v->a[102287] = actions(5604);
	v->a[102288] = 1;
	v->a[102289] = sym_file_descriptor;
	v->a[102290] = actions(2945);
	v->a[102291] = 2;
	v->a[102292] = anon_sym_LT_LT;
	v->a[102293] = anon_sym_LT_LT_DASH;
	v->a[102294] = actions(5157);
	v->a[102295] = 2;
	v->a[102296] = ts_builtin_sym_end;
	v->a[102297] = aux_sym_heredoc_redirect_token1;
	v->a[102298] = actions(5602);
	v->a[102299] = 2;
	small_parse_table_5115(v);
}

/* EOF small_parse_table_1022.c */
