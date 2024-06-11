/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_695.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3475(t_small_parse_table_array *v)
{
	v->a[69500] = anon_sym_BQUOTE;
	v->a[69501] = sym_word;
	v->a[69502] = 13;
	v->a[69503] = actions(3);
	v->a[69504] = 1;
	v->a[69505] = sym_comment;
	v->a[69506] = actions(807);
	v->a[69507] = 1;
	v->a[69508] = anon_sym_PIPE;
	v->a[69509] = actions(840);
	v->a[69510] = 1;
	v->a[69511] = anon_sym_BQUOTE;
	v->a[69512] = actions(2164);
	v->a[69513] = 1;
	v->a[69514] = sym_file_descriptor;
	v->a[69515] = actions(2248);
	v->a[69516] = 1;
	v->a[69517] = anon_sym_SEMI_SEMI;
	v->a[69518] = actions(2250);
	v->a[69519] = 1;
	small_parse_table_3476(v);
}

void	small_parse_table_3476(t_small_parse_table_array *v)
{
	v->a[69520] = aux_sym_heredoc_redirect_token1;
	v->a[69521] = actions(2252);
	v->a[69522] = 1;
	v->a[69523] = anon_sym_AMP;
	v->a[69524] = actions(2254);
	v->a[69525] = 1;
	v->a[69526] = anon_sym_SEMI;
	v->a[69527] = actions(861);
	v->a[69528] = 2;
	v->a[69529] = anon_sym_LT_LT;
	v->a[69530] = anon_sym_LT_LT_DASH;
	v->a[69531] = actions(1032);
	v->a[69532] = 2;
	v->a[69533] = anon_sym_AMP_AMP;
	v->a[69534] = anon_sym_PIPE_PIPE;
	v->a[69535] = actions(2160);
	v->a[69536] = 2;
	v->a[69537] = anon_sym_LT_AMP_DASH;
	v->a[69538] = anon_sym_GT_AMP_DASH;
	v->a[69539] = state(1297);
	small_parse_table_3477(v);
}

void	small_parse_table_3477(t_small_parse_table_array *v)
{
	v->a[69540] = 3;
	v->a[69541] = sym_file_redirect;
	v->a[69542] = sym_heredoc_redirect;
	v->a[69543] = aux_sym_redirected_statement_repeat1;
	v->a[69544] = actions(2158);
	v->a[69545] = 8;
	v->a[69546] = anon_sym_LT;
	v->a[69547] = anon_sym_GT;
	v->a[69548] = anon_sym_GT_GT;
	v->a[69549] = anon_sym_AMP_GT;
	v->a[69550] = anon_sym_AMP_GT_GT;
	v->a[69551] = anon_sym_LT_AMP;
	v->a[69552] = anon_sym_GT_AMP;
	v->a[69553] = anon_sym_GT_PIPE;
	v->a[69554] = 12;
	v->a[69555] = actions(3);
	v->a[69556] = 1;
	v->a[69557] = sym_comment;
	v->a[69558] = actions(807);
	v->a[69559] = 1;
	small_parse_table_3478(v);
}

void	small_parse_table_3478(t_small_parse_table_array *v)
{
	v->a[69560] = anon_sym_PIPE;
	v->a[69561] = actions(2184);
	v->a[69562] = 1;
	v->a[69563] = sym_file_descriptor;
	v->a[69564] = actions(2256);
	v->a[69565] = 1;
	v->a[69566] = aux_sym_heredoc_redirect_token1;
	v->a[69567] = actions(2258);
	v->a[69568] = 1;
	v->a[69569] = anon_sym_AMP;
	v->a[69570] = actions(2260);
	v->a[69571] = 1;
	v->a[69572] = anon_sym_SEMI;
	v->a[69573] = actions(840);
	v->a[69574] = 2;
	v->a[69575] = anon_sym_esac;
	v->a[69576] = anon_sym_SEMI_SEMI;
	v->a[69577] = actions(842);
	v->a[69578] = 2;
	v->a[69579] = anon_sym_AMP_AMP;
	small_parse_table_3479(v);
}

void	small_parse_table_3479(t_small_parse_table_array *v)
{
	v->a[69580] = anon_sym_PIPE_PIPE;
	v->a[69581] = actions(844);
	v->a[69582] = 2;
	v->a[69583] = anon_sym_LT_LT;
	v->a[69584] = anon_sym_LT_LT_DASH;
	v->a[69585] = actions(2180);
	v->a[69586] = 2;
	v->a[69587] = anon_sym_LT_AMP_DASH;
	v->a[69588] = anon_sym_GT_AMP_DASH;
	v->a[69589] = state(1214);
	v->a[69590] = 3;
	v->a[69591] = sym_file_redirect;
	v->a[69592] = sym_heredoc_redirect;
	v->a[69593] = aux_sym_redirected_statement_repeat1;
	v->a[69594] = actions(2178);
	v->a[69595] = 8;
	v->a[69596] = anon_sym_LT;
	v->a[69597] = anon_sym_GT;
	v->a[69598] = anon_sym_GT_GT;
	v->a[69599] = anon_sym_AMP_GT;
	small_parse_table_3480(v);
}

/* EOF small_parse_table_695.c */
