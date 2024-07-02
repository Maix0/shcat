/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_602.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3010(t_small_parse_table_array *v)
{
	v->a[60200] = 3;
	v->a[60201] = sym_file_redirect;
	v->a[60202] = sym_heredoc_redirect;
	v->a[60203] = aux_sym_redirected_statement_repeat1;
	v->a[60204] = actions(1869);
	v->a[60205] = 7;
	v->a[60206] = anon_sym_LT;
	v->a[60207] = anon_sym_GT;
	v->a[60208] = anon_sym_GT_GT;
	v->a[60209] = anon_sym_LT_AMP;
	v->a[60210] = anon_sym_GT_AMP;
	v->a[60211] = anon_sym_GT_PIPE;
	v->a[60212] = anon_sym_LT_GT;
	v->a[60213] = 11;
	v->a[60214] = actions(3);
	v->a[60215] = 1;
	v->a[60216] = sym_comment;
	v->a[60217] = actions(692);
	v->a[60218] = 1;
	v->a[60219] = anon_sym_PIPE;
	small_parse_table_3011(v);
}

void	small_parse_table_3011(t_small_parse_table_array *v)
{
	v->a[60220] = actions(694);
	v->a[60221] = 1;
	v->a[60222] = anon_sym_SEMI_SEMI;
	v->a[60223] = actions(1857);
	v->a[60224] = 1;
	v->a[60225] = aux_sym_heredoc_redirect_token1;
	v->a[60226] = actions(1946);
	v->a[60227] = 1;
	v->a[60228] = sym_file_descriptor;
	v->a[60229] = state(660);
	v->a[60230] = 1;
	v->a[60231] = sym_terminator;
	v->a[60232] = actions(696);
	v->a[60233] = 2;
	v->a[60234] = anon_sym_AMP;
	v->a[60235] = anon_sym_SEMI;
	v->a[60236] = actions(700);
	v->a[60237] = 2;
	v->a[60238] = anon_sym_LT_LT;
	v->a[60239] = anon_sym_LT_LT_DASH;
	small_parse_table_3012(v);
}

void	small_parse_table_3012(t_small_parse_table_array *v)
{
	v->a[60240] = actions(914);
	v->a[60241] = 2;
	v->a[60242] = anon_sym_AMP_AMP;
	v->a[60243] = anon_sym_PIPE_PIPE;
	v->a[60244] = state(1134);
	v->a[60245] = 3;
	v->a[60246] = sym_file_redirect;
	v->a[60247] = sym_heredoc_redirect;
	v->a[60248] = aux_sym_redirected_statement_repeat1;
	v->a[60249] = actions(1942);
	v->a[60250] = 7;
	v->a[60251] = anon_sym_LT;
	v->a[60252] = anon_sym_GT;
	v->a[60253] = anon_sym_GT_GT;
	v->a[60254] = anon_sym_LT_AMP;
	v->a[60255] = anon_sym_GT_AMP;
	v->a[60256] = anon_sym_GT_PIPE;
	v->a[60257] = anon_sym_LT_GT;
	v->a[60258] = 10;
	v->a[60259] = actions(3);
	small_parse_table_3013(v);
}

void	small_parse_table_3013(t_small_parse_table_array *v)
{
	v->a[60260] = 1;
	v->a[60261] = sym_comment;
	v->a[60262] = actions(692);
	v->a[60263] = 1;
	v->a[60264] = anon_sym_PIPE;
	v->a[60265] = actions(1946);
	v->a[60266] = 1;
	v->a[60267] = sym_file_descriptor;
	v->a[60268] = actions(2028);
	v->a[60269] = 1;
	v->a[60270] = aux_sym_heredoc_redirect_token1;
	v->a[60271] = state(747);
	v->a[60272] = 1;
	v->a[60273] = sym_terminator;
	v->a[60274] = actions(700);
	v->a[60275] = 2;
	v->a[60276] = anon_sym_LT_LT;
	v->a[60277] = anon_sym_LT_LT_DASH;
	v->a[60278] = actions(914);
	v->a[60279] = 2;
	small_parse_table_3014(v);
}

void	small_parse_table_3014(t_small_parse_table_array *v)
{
	v->a[60280] = anon_sym_AMP_AMP;
	v->a[60281] = anon_sym_PIPE_PIPE;
	v->a[60282] = actions(1035);
	v->a[60283] = 3;
	v->a[60284] = anon_sym_SEMI_SEMI;
	v->a[60285] = anon_sym_AMP;
	v->a[60286] = anon_sym_SEMI;
	v->a[60287] = state(1134);
	v->a[60288] = 3;
	v->a[60289] = sym_file_redirect;
	v->a[60290] = sym_heredoc_redirect;
	v->a[60291] = aux_sym_redirected_statement_repeat1;
	v->a[60292] = actions(1942);
	v->a[60293] = 7;
	v->a[60294] = anon_sym_LT;
	v->a[60295] = anon_sym_GT;
	v->a[60296] = anon_sym_GT_GT;
	v->a[60297] = anon_sym_LT_AMP;
	v->a[60298] = anon_sym_GT_AMP;
	v->a[60299] = anon_sym_GT_PIPE;
	small_parse_table_3015(v);
}

/* EOF small_parse_table_602.c */
