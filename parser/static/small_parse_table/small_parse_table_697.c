/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_697.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3485(t_small_parse_table_array *v)
{
	v->a[69700] = 1;
	v->a[69701] = sym_file_descriptor;
	v->a[69702] = actions(2268);
	v->a[69703] = 1;
	v->a[69704] = aux_sym_heredoc_redirect_token1;
	v->a[69705] = actions(2270);
	v->a[69706] = 1;
	v->a[69707] = anon_sym_AMP;
	v->a[69708] = actions(2272);
	v->a[69709] = 1;
	v->a[69710] = anon_sym_SEMI;
	v->a[69711] = actions(840);
	v->a[69712] = 2;
	v->a[69713] = anon_sym_esac;
	v->a[69714] = anon_sym_SEMI_SEMI;
	v->a[69715] = actions(842);
	v->a[69716] = 2;
	v->a[69717] = anon_sym_AMP_AMP;
	v->a[69718] = anon_sym_PIPE_PIPE;
	v->a[69719] = actions(844);
	small_parse_table_3486(v);
}

void	small_parse_table_3486(t_small_parse_table_array *v)
{
	v->a[69720] = 2;
	v->a[69721] = anon_sym_LT_LT;
	v->a[69722] = anon_sym_LT_LT_DASH;
	v->a[69723] = actions(2180);
	v->a[69724] = 2;
	v->a[69725] = anon_sym_LT_AMP_DASH;
	v->a[69726] = anon_sym_GT_AMP_DASH;
	v->a[69727] = state(1214);
	v->a[69728] = 3;
	v->a[69729] = sym_file_redirect;
	v->a[69730] = sym_heredoc_redirect;
	v->a[69731] = aux_sym_redirected_statement_repeat1;
	v->a[69732] = actions(2178);
	v->a[69733] = 8;
	v->a[69734] = anon_sym_LT;
	v->a[69735] = anon_sym_GT;
	v->a[69736] = anon_sym_GT_GT;
	v->a[69737] = anon_sym_AMP_GT;
	v->a[69738] = anon_sym_AMP_GT_GT;
	v->a[69739] = anon_sym_LT_AMP;
	small_parse_table_3487(v);
}

void	small_parse_table_3487(t_small_parse_table_array *v)
{
	v->a[69740] = anon_sym_GT_AMP;
	v->a[69741] = anon_sym_GT_PIPE;
	v->a[69742] = 13;
	v->a[69743] = actions(3);
	v->a[69744] = 1;
	v->a[69745] = sym_comment;
	v->a[69746] = actions(807);
	v->a[69747] = 1;
	v->a[69748] = anon_sym_PIPE;
	v->a[69749] = actions(840);
	v->a[69750] = 1;
	v->a[69751] = anon_sym_BQUOTE;
	v->a[69752] = actions(2164);
	v->a[69753] = 1;
	v->a[69754] = sym_file_descriptor;
	v->a[69755] = actions(2274);
	v->a[69756] = 1;
	v->a[69757] = anon_sym_SEMI_SEMI;
	v->a[69758] = actions(2276);
	v->a[69759] = 1;
	small_parse_table_3488(v);
}

void	small_parse_table_3488(t_small_parse_table_array *v)
{
	v->a[69760] = aux_sym_heredoc_redirect_token1;
	v->a[69761] = actions(2278);
	v->a[69762] = 1;
	v->a[69763] = anon_sym_AMP;
	v->a[69764] = actions(2280);
	v->a[69765] = 1;
	v->a[69766] = anon_sym_SEMI;
	v->a[69767] = actions(861);
	v->a[69768] = 2;
	v->a[69769] = anon_sym_LT_LT;
	v->a[69770] = anon_sym_LT_LT_DASH;
	v->a[69771] = actions(1032);
	v->a[69772] = 2;
	v->a[69773] = anon_sym_AMP_AMP;
	v->a[69774] = anon_sym_PIPE_PIPE;
	v->a[69775] = actions(2160);
	v->a[69776] = 2;
	v->a[69777] = anon_sym_LT_AMP_DASH;
	v->a[69778] = anon_sym_GT_AMP_DASH;
	v->a[69779] = state(1297);
	small_parse_table_3489(v);
}

void	small_parse_table_3489(t_small_parse_table_array *v)
{
	v->a[69780] = 3;
	v->a[69781] = sym_file_redirect;
	v->a[69782] = sym_heredoc_redirect;
	v->a[69783] = aux_sym_redirected_statement_repeat1;
	v->a[69784] = actions(2158);
	v->a[69785] = 8;
	v->a[69786] = anon_sym_LT;
	v->a[69787] = anon_sym_GT;
	v->a[69788] = anon_sym_GT_GT;
	v->a[69789] = anon_sym_AMP_GT;
	v->a[69790] = anon_sym_AMP_GT_GT;
	v->a[69791] = anon_sym_LT_AMP;
	v->a[69792] = anon_sym_GT_AMP;
	v->a[69793] = anon_sym_GT_PIPE;
	v->a[69794] = 12;
	v->a[69795] = actions(3);
	v->a[69796] = 1;
	v->a[69797] = sym_comment;
	v->a[69798] = actions(807);
	v->a[69799] = 1;
	small_parse_table_3490(v);
}

/* EOF small_parse_table_697.c */
