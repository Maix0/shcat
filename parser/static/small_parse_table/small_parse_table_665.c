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
	v->a[66500] = anon_sym_PIPE;
	v->a[66501] = anon_sym_SEMI_SEMI;
	v->a[66502] = anon_sym_AMP_AMP;
	v->a[66503] = anon_sym_PIPE_PIPE;
	v->a[66504] = anon_sym_LT;
	v->a[66505] = anon_sym_GT;
	v->a[66506] = anon_sym_GT_GT;
	v->a[66507] = anon_sym_LT_AMP;
	v->a[66508] = anon_sym_GT_AMP;
	v->a[66509] = anon_sym_GT_PIPE;
	v->a[66510] = anon_sym_LT_AMP_DASH;
	v->a[66511] = anon_sym_GT_AMP_DASH;
	v->a[66512] = anon_sym_LT_LT;
	v->a[66513] = anon_sym_LT_LT_DASH;
	v->a[66514] = anon_sym_AMP;
	v->a[66515] = anon_sym_SEMI;
	v->a[66516] = 11;
	v->a[66517] = actions(3);
	v->a[66518] = 1;
	v->a[66519] = sym_comment;
	small_parse_table_3326(v);
}

void	small_parse_table_3326(t_small_parse_table_array *v)
{
	v->a[66520] = actions(682);
	v->a[66521] = 1;
	v->a[66522] = anon_sym_PIPE;
	v->a[66523] = actions(2065);
	v->a[66524] = 1;
	v->a[66525] = sym_file_descriptor;
	v->a[66526] = actions(2210);
	v->a[66527] = 1;
	v->a[66528] = aux_sym_heredoc_redirect_token1;
	v->a[66529] = state(649);
	v->a[66530] = 1;
	v->a[66531] = sym_terminator;
	v->a[66532] = actions(754);
	v->a[66533] = 2;
	v->a[66534] = anon_sym_LT_LT;
	v->a[66535] = anon_sym_LT_LT_DASH;
	v->a[66536] = actions(924);
	v->a[66537] = 2;
	v->a[66538] = anon_sym_AMP_AMP;
	v->a[66539] = anon_sym_PIPE_PIPE;
	small_parse_table_3327(v);
}

void	small_parse_table_3327(t_small_parse_table_array *v)
{
	v->a[66540] = actions(2063);
	v->a[66541] = 2;
	v->a[66542] = anon_sym_LT_AMP_DASH;
	v->a[66543] = anon_sym_GT_AMP_DASH;
	v->a[66544] = actions(999);
	v->a[66545] = 3;
	v->a[66546] = anon_sym_SEMI_SEMI;
	v->a[66547] = anon_sym_AMP;
	v->a[66548] = anon_sym_SEMI;
	v->a[66549] = state(1268);
	v->a[66550] = 3;
	v->a[66551] = sym_file_redirect;
	v->a[66552] = sym_heredoc_redirect;
	v->a[66553] = aux_sym_redirected_statement_repeat1;
	v->a[66554] = actions(2061);
	v->a[66555] = 6;
	v->a[66556] = anon_sym_LT;
	v->a[66557] = anon_sym_GT;
	v->a[66558] = anon_sym_GT_GT;
	v->a[66559] = anon_sym_LT_AMP;
	small_parse_table_3328(v);
}

void	small_parse_table_3328(t_small_parse_table_array *v)
{
	v->a[66560] = anon_sym_GT_AMP;
	v->a[66561] = anon_sym_GT_PIPE;
	v->a[66562] = 3;
	v->a[66563] = actions(3);
	v->a[66564] = 1;
	v->a[66565] = sym_comment;
	v->a[66566] = actions(2212);
	v->a[66567] = 3;
	v->a[66568] = sym_file_descriptor;
	v->a[66569] = ts_builtin_sym_end;
	v->a[66570] = aux_sym_heredoc_redirect_token1;
	v->a[66571] = actions(2214);
	v->a[66572] = 18;
	v->a[66573] = anon_sym_PIPE;
	v->a[66574] = anon_sym_RPAREN;
	v->a[66575] = anon_sym_SEMI_SEMI;
	v->a[66576] = anon_sym_AMP_AMP;
	v->a[66577] = anon_sym_PIPE_PIPE;
	v->a[66578] = anon_sym_LT;
	v->a[66579] = anon_sym_GT;
	small_parse_table_3329(v);
}

void	small_parse_table_3329(t_small_parse_table_array *v)
{
	v->a[66580] = anon_sym_GT_GT;
	v->a[66581] = anon_sym_LT_AMP;
	v->a[66582] = anon_sym_GT_AMP;
	v->a[66583] = anon_sym_GT_PIPE;
	v->a[66584] = anon_sym_LT_AMP_DASH;
	v->a[66585] = anon_sym_GT_AMP_DASH;
	v->a[66586] = anon_sym_LT_LT;
	v->a[66587] = anon_sym_LT_LT_DASH;
	v->a[66588] = anon_sym_AMP;
	v->a[66589] = anon_sym_BQUOTE;
	v->a[66590] = anon_sym_SEMI;
	v->a[66591] = 3;
	v->a[66592] = actions(3);
	v->a[66593] = 1;
	v->a[66594] = sym_comment;
	v->a[66595] = actions(982);
	v->a[66596] = 3;
	v->a[66597] = sym_file_descriptor;
	v->a[66598] = sym__concat;
	v->a[66599] = sym_variable_name;
	small_parse_table_3330(v);
}

/* EOF small_parse_table_665.c */
