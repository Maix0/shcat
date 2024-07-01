/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_615.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3075(t_small_parse_table_array *v)
{
	v->a[61500] = actions(3);
	v->a[61501] = 1;
	v->a[61502] = sym_comment;
	v->a[61503] = actions(682);
	v->a[61504] = 1;
	v->a[61505] = anon_sym_PIPE;
	v->a[61506] = actions(779);
	v->a[61507] = 1;
	v->a[61508] = ts_builtin_sym_end;
	v->a[61509] = actions(2029);
	v->a[61510] = 1;
	v->a[61511] = aux_sym_heredoc_redirect_token1;
	v->a[61512] = actions(2031);
	v->a[61513] = 1;
	v->a[61514] = sym_file_descriptor;
	v->a[61515] = state(800);
	v->a[61516] = 1;
	v->a[61517] = sym_terminator;
	v->a[61518] = actions(754);
	v->a[61519] = 2;
	small_parse_table_3076(v);
}

void	small_parse_table_3076(t_small_parse_table_array *v)
{
	v->a[61520] = anon_sym_LT_LT;
	v->a[61521] = anon_sym_LT_LT_DASH;
	v->a[61522] = actions(783);
	v->a[61523] = 2;
	v->a[61524] = anon_sym_AMP_AMP;
	v->a[61525] = anon_sym_PIPE_PIPE;
	v->a[61526] = actions(2027);
	v->a[61527] = 2;
	v->a[61528] = anon_sym_LT_AMP_DASH;
	v->a[61529] = anon_sym_GT_AMP_DASH;
	v->a[61530] = actions(781);
	v->a[61531] = 3;
	v->a[61532] = anon_sym_SEMI_SEMI;
	v->a[61533] = anon_sym_AMP;
	v->a[61534] = anon_sym_SEMI;
	v->a[61535] = state(1160);
	v->a[61536] = 3;
	v->a[61537] = sym_file_redirect;
	v->a[61538] = sym_heredoc_redirect;
	v->a[61539] = aux_sym_redirected_statement_repeat1;
	small_parse_table_3077(v);
}

void	small_parse_table_3077(t_small_parse_table_array *v)
{
	v->a[61540] = actions(2025);
	v->a[61541] = 6;
	v->a[61542] = anon_sym_LT;
	v->a[61543] = anon_sym_GT;
	v->a[61544] = anon_sym_GT_GT;
	v->a[61545] = anon_sym_LT_AMP;
	v->a[61546] = anon_sym_GT_AMP;
	v->a[61547] = anon_sym_GT_PIPE;
	v->a[61548] = 3;
	v->a[61549] = actions(3);
	v->a[61550] = 1;
	v->a[61551] = sym_comment;
	v->a[61552] = actions(1264);
	v->a[61553] = 4;
	v->a[61554] = sym_file_descriptor;
	v->a[61555] = sym__concat;
	v->a[61556] = ts_builtin_sym_end;
	v->a[61557] = aux_sym_heredoc_redirect_token1;
	v->a[61558] = actions(1266);
	v->a[61559] = 19;
	small_parse_table_3078(v);
}

void	small_parse_table_3078(t_small_parse_table_array *v)
{
	v->a[61560] = anon_sym_PIPE;
	v->a[61561] = anon_sym_RPAREN;
	v->a[61562] = anon_sym_SEMI_SEMI;
	v->a[61563] = anon_sym_AMP_AMP;
	v->a[61564] = anon_sym_PIPE_PIPE;
	v->a[61565] = anon_sym_LT;
	v->a[61566] = anon_sym_GT;
	v->a[61567] = anon_sym_GT_GT;
	v->a[61568] = anon_sym_LT_AMP;
	v->a[61569] = anon_sym_GT_AMP;
	v->a[61570] = anon_sym_GT_PIPE;
	v->a[61571] = anon_sym_LT_AMP_DASH;
	v->a[61572] = anon_sym_GT_AMP_DASH;
	v->a[61573] = anon_sym_LT_LT;
	v->a[61574] = anon_sym_LT_LT_DASH;
	v->a[61575] = anon_sym_AMP;
	v->a[61576] = aux_sym_concatenation_token1;
	v->a[61577] = anon_sym_BQUOTE;
	v->a[61578] = anon_sym_SEMI;
	v->a[61579] = 12;
	small_parse_table_3079(v);
}

void	small_parse_table_3079(t_small_parse_table_array *v)
{
	v->a[61580] = actions(3);
	v->a[61581] = 1;
	v->a[61582] = sym_comment;
	v->a[61583] = actions(682);
	v->a[61584] = 1;
	v->a[61585] = anon_sym_PIPE;
	v->a[61586] = actions(695);
	v->a[61587] = 1;
	v->a[61588] = anon_sym_RPAREN;
	v->a[61589] = actions(2009);
	v->a[61590] = 1;
	v->a[61591] = aux_sym_heredoc_redirect_token1;
	v->a[61592] = actions(2011);
	v->a[61593] = 1;
	v->a[61594] = sym_file_descriptor;
	v->a[61595] = state(759);
	v->a[61596] = 1;
	v->a[61597] = sym_terminator;
	v->a[61598] = actions(752);
	v->a[61599] = 2;
	small_parse_table_3080(v);
}

/* EOF small_parse_table_615.c */
