/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_665.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3325(t_small_parse_table_array *v)
{
	v->a[66500] = 1;
	v->a[66501] = sym_comment;
	v->a[66502] = actions(766);
	v->a[66503] = 1;
	v->a[66504] = anon_sym_PIPE;
	v->a[66505] = actions(2066);
	v->a[66506] = 1;
	v->a[66507] = sym_file_descriptor;
	v->a[66508] = actions(2143);
	v->a[66509] = 1;
	v->a[66510] = aux_sym_heredoc_redirect_token1;
	v->a[66511] = state(615);
	v->a[66512] = 1;
	v->a[66513] = sym_terminator;
	v->a[66514] = actions(804);
	v->a[66515] = 2;
	v->a[66516] = anon_sym_LT_LT;
	v->a[66517] = anon_sym_LT_LT_DASH;
	v->a[66518] = actions(893);
	v->a[66519] = 2;
	small_parse_table_3326(v);
}

void	small_parse_table_3326(t_small_parse_table_array *v)
{
	v->a[66520] = anon_sym_AMP_AMP;
	v->a[66521] = anon_sym_PIPE_PIPE;
	v->a[66522] = actions(2064);
	v->a[66523] = 2;
	v->a[66524] = anon_sym_LT_AMP_DASH;
	v->a[66525] = anon_sym_GT_AMP_DASH;
	v->a[66526] = actions(949);
	v->a[66527] = 3;
	v->a[66528] = anon_sym_SEMI_SEMI;
	v->a[66529] = anon_sym_AMP;
	v->a[66530] = anon_sym_SEMI;
	v->a[66531] = state(1256);
	v->a[66532] = 3;
	v->a[66533] = sym_file_redirect;
	v->a[66534] = sym_heredoc_redirect;
	v->a[66535] = aux_sym_redirected_statement_repeat1;
	v->a[66536] = actions(2062);
	v->a[66537] = 8;
	v->a[66538] = anon_sym_LT;
	v->a[66539] = anon_sym_GT;
	small_parse_table_3327(v);
}

void	small_parse_table_3327(t_small_parse_table_array *v)
{
	v->a[66540] = anon_sym_GT_GT;
	v->a[66541] = anon_sym_AMP_GT;
	v->a[66542] = anon_sym_AMP_GT_GT;
	v->a[66543] = anon_sym_LT_AMP;
	v->a[66544] = anon_sym_GT_AMP;
	v->a[66545] = anon_sym_GT_PIPE;
	v->a[66546] = 11;
	v->a[66547] = actions(3);
	v->a[66548] = 1;
	v->a[66549] = sym_comment;
	v->a[66550] = actions(766);
	v->a[66551] = 1;
	v->a[66552] = anon_sym_PIPE;
	v->a[66553] = actions(2066);
	v->a[66554] = 1;
	v->a[66555] = sym_file_descriptor;
	v->a[66556] = actions(2145);
	v->a[66557] = 1;
	v->a[66558] = aux_sym_heredoc_redirect_token1;
	v->a[66559] = state(798);
	small_parse_table_3328(v);
}

void	small_parse_table_3328(t_small_parse_table_array *v)
{
	v->a[66560] = 1;
	v->a[66561] = sym_terminator;
	v->a[66562] = actions(804);
	v->a[66563] = 2;
	v->a[66564] = anon_sym_LT_LT;
	v->a[66565] = anon_sym_LT_LT_DASH;
	v->a[66566] = actions(893);
	v->a[66567] = 2;
	v->a[66568] = anon_sym_AMP_AMP;
	v->a[66569] = anon_sym_PIPE_PIPE;
	v->a[66570] = actions(2064);
	v->a[66571] = 2;
	v->a[66572] = anon_sym_LT_AMP_DASH;
	v->a[66573] = anon_sym_GT_AMP_DASH;
	v->a[66574] = actions(953);
	v->a[66575] = 3;
	v->a[66576] = anon_sym_SEMI_SEMI;
	v->a[66577] = anon_sym_AMP;
	v->a[66578] = anon_sym_SEMI;
	v->a[66579] = state(1256);
	small_parse_table_3329(v);
}

void	small_parse_table_3329(t_small_parse_table_array *v)
{
	v->a[66580] = 3;
	v->a[66581] = sym_file_redirect;
	v->a[66582] = sym_heredoc_redirect;
	v->a[66583] = aux_sym_redirected_statement_repeat1;
	v->a[66584] = actions(2062);
	v->a[66585] = 8;
	v->a[66586] = anon_sym_LT;
	v->a[66587] = anon_sym_GT;
	v->a[66588] = anon_sym_GT_GT;
	v->a[66589] = anon_sym_AMP_GT;
	v->a[66590] = anon_sym_AMP_GT_GT;
	v->a[66591] = anon_sym_LT_AMP;
	v->a[66592] = anon_sym_GT_AMP;
	v->a[66593] = anon_sym_GT_PIPE;
	v->a[66594] = 5;
	v->a[66595] = actions(3);
	v->a[66596] = 1;
	v->a[66597] = sym_comment;
	v->a[66598] = actions(2147);
	v->a[66599] = 1;
	small_parse_table_3330(v);
}

/* EOF small_parse_table_665.c */
