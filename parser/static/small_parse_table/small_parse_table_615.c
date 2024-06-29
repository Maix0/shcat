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
	v->a[61500] = sym_file_descriptor;
	v->a[61501] = state(834);
	v->a[61502] = 1;
	v->a[61503] = sym_terminator;
	v->a[61504] = actions(804);
	v->a[61505] = 2;
	v->a[61506] = anon_sym_LT_LT;
	v->a[61507] = anon_sym_LT_LT_DASH;
	v->a[61508] = actions(842);
	v->a[61509] = 2;
	v->a[61510] = anon_sym_AMP_AMP;
	v->a[61511] = anon_sym_PIPE_PIPE;
	v->a[61512] = actions(2029);
	v->a[61513] = 2;
	v->a[61514] = anon_sym_LT_AMP_DASH;
	v->a[61515] = anon_sym_GT_AMP_DASH;
	v->a[61516] = actions(800);
	v->a[61517] = 3;
	v->a[61518] = anon_sym_SEMI_SEMI;
	v->a[61519] = anon_sym_AMP;
	small_parse_table_3076(v);
}

void	small_parse_table_3076(t_small_parse_table_array *v)
{
	v->a[61520] = anon_sym_SEMI;
	v->a[61521] = state(1157);
	v->a[61522] = 3;
	v->a[61523] = sym_file_redirect;
	v->a[61524] = sym_heredoc_redirect;
	v->a[61525] = aux_sym_redirected_statement_repeat1;
	v->a[61526] = actions(2027);
	v->a[61527] = 8;
	v->a[61528] = anon_sym_LT;
	v->a[61529] = anon_sym_GT;
	v->a[61530] = anon_sym_GT_GT;
	v->a[61531] = anon_sym_AMP_GT;
	v->a[61532] = anon_sym_AMP_GT_GT;
	v->a[61533] = anon_sym_LT_AMP;
	v->a[61534] = anon_sym_GT_AMP;
	v->a[61535] = anon_sym_GT_PIPE;
	v->a[61536] = 12;
	v->a[61537] = actions(3);
	v->a[61538] = 1;
	v->a[61539] = sym_comment;
	small_parse_table_3077(v);
}

void	small_parse_table_3077(t_small_parse_table_array *v)
{
	v->a[61540] = actions(764);
	v->a[61541] = 1;
	v->a[61542] = anon_sym_BQUOTE;
	v->a[61543] = actions(766);
	v->a[61544] = 1;
	v->a[61545] = anon_sym_PIPE;
	v->a[61546] = actions(2031);
	v->a[61547] = 1;
	v->a[61548] = aux_sym_heredoc_redirect_token1;
	v->a[61549] = actions(2033);
	v->a[61550] = 1;
	v->a[61551] = sym_file_descriptor;
	v->a[61552] = state(836);
	v->a[61553] = 1;
	v->a[61554] = sym_terminator;
	v->a[61555] = actions(804);
	v->a[61556] = 2;
	v->a[61557] = anon_sym_LT_LT;
	v->a[61558] = anon_sym_LT_LT_DASH;
	v->a[61559] = actions(842);
	small_parse_table_3078(v);
}

void	small_parse_table_3078(t_small_parse_table_array *v)
{
	v->a[61560] = 2;
	v->a[61561] = anon_sym_AMP_AMP;
	v->a[61562] = anon_sym_PIPE_PIPE;
	v->a[61563] = actions(2029);
	v->a[61564] = 2;
	v->a[61565] = anon_sym_LT_AMP_DASH;
	v->a[61566] = anon_sym_GT_AMP_DASH;
	v->a[61567] = actions(800);
	v->a[61568] = 3;
	v->a[61569] = anon_sym_SEMI_SEMI;
	v->a[61570] = anon_sym_AMP;
	v->a[61571] = anon_sym_SEMI;
	v->a[61572] = state(1157);
	v->a[61573] = 3;
	v->a[61574] = sym_file_redirect;
	v->a[61575] = sym_heredoc_redirect;
	v->a[61576] = aux_sym_redirected_statement_repeat1;
	v->a[61577] = actions(2027);
	v->a[61578] = 8;
	v->a[61579] = anon_sym_LT;
	small_parse_table_3079(v);
}

void	small_parse_table_3079(t_small_parse_table_array *v)
{
	v->a[61580] = anon_sym_GT;
	v->a[61581] = anon_sym_GT_GT;
	v->a[61582] = anon_sym_AMP_GT;
	v->a[61583] = anon_sym_AMP_GT_GT;
	v->a[61584] = anon_sym_LT_AMP;
	v->a[61585] = anon_sym_GT_AMP;
	v->a[61586] = anon_sym_GT_PIPE;
	v->a[61587] = 12;
	v->a[61588] = actions(3);
	v->a[61589] = 1;
	v->a[61590] = sym_comment;
	v->a[61591] = actions(764);
	v->a[61592] = 1;
	v->a[61593] = anon_sym_BQUOTE;
	v->a[61594] = actions(766);
	v->a[61595] = 1;
	v->a[61596] = anon_sym_PIPE;
	v->a[61597] = actions(2031);
	v->a[61598] = 1;
	v->a[61599] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3080(v);
}

/* EOF small_parse_table_615.c */
