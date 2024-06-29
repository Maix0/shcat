/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_677.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3385(t_small_parse_table_array *v)
{
	v->a[67700] = 5;
	v->a[67701] = actions(3);
	v->a[67702] = 1;
	v->a[67703] = sym_comment;
	v->a[67704] = actions(766);
	v->a[67705] = 1;
	v->a[67706] = anon_sym_PIPE;
	v->a[67707] = actions(927);
	v->a[67708] = 3;
	v->a[67709] = sym_file_descriptor;
	v->a[67710] = ts_builtin_sym_end;
	v->a[67711] = aux_sym_heredoc_redirect_token1;
	v->a[67712] = state(1133);
	v->a[67713] = 3;
	v->a[67714] = sym_file_redirect;
	v->a[67715] = sym_heredoc_redirect;
	v->a[67716] = aux_sym_redirected_statement_repeat1;
	v->a[67717] = actions(900);
	v->a[67718] = 17;
	v->a[67719] = anon_sym_SEMI_SEMI;
	small_parse_table_3386(v);
}

void	small_parse_table_3386(t_small_parse_table_array *v)
{
	v->a[67720] = anon_sym_AMP_AMP;
	v->a[67721] = anon_sym_PIPE_PIPE;
	v->a[67722] = anon_sym_LT;
	v->a[67723] = anon_sym_GT;
	v->a[67724] = anon_sym_GT_GT;
	v->a[67725] = anon_sym_AMP_GT;
	v->a[67726] = anon_sym_AMP_GT_GT;
	v->a[67727] = anon_sym_LT_AMP;
	v->a[67728] = anon_sym_GT_AMP;
	v->a[67729] = anon_sym_GT_PIPE;
	v->a[67730] = anon_sym_LT_AMP_DASH;
	v->a[67731] = anon_sym_GT_AMP_DASH;
	v->a[67732] = anon_sym_LT_LT;
	v->a[67733] = anon_sym_LT_LT_DASH;
	v->a[67734] = anon_sym_AMP;
	v->a[67735] = anon_sym_SEMI;
	v->a[67736] = 6;
	v->a[67737] = actions(3);
	v->a[67738] = 1;
	v->a[67739] = sym_comment;
	small_parse_table_3387(v);
}

void	small_parse_table_3387(t_small_parse_table_array *v)
{
	v->a[67740] = actions(2180);
	v->a[67741] = 1;
	v->a[67742] = aux_sym_concatenation_token1;
	v->a[67743] = actions(2183);
	v->a[67744] = 1;
	v->a[67745] = sym__concat;
	v->a[67746] = state(1169);
	v->a[67747] = 1;
	v->a[67748] = aux_sym_concatenation_repeat1;
	v->a[67749] = actions(988);
	v->a[67750] = 2;
	v->a[67751] = sym_file_descriptor;
	v->a[67752] = aux_sym_heredoc_redirect_token1;
	v->a[67753] = actions(983);
	v->a[67754] = 19;
	v->a[67755] = anon_sym_esac;
	v->a[67756] = anon_sym_PIPE;
	v->a[67757] = anon_sym_SEMI_SEMI;
	v->a[67758] = anon_sym_AMP_AMP;
	v->a[67759] = anon_sym_PIPE_PIPE;
	small_parse_table_3388(v);
}

void	small_parse_table_3388(t_small_parse_table_array *v)
{
	v->a[67760] = anon_sym_LT;
	v->a[67761] = anon_sym_GT;
	v->a[67762] = anon_sym_GT_GT;
	v->a[67763] = anon_sym_AMP_GT;
	v->a[67764] = anon_sym_AMP_GT_GT;
	v->a[67765] = anon_sym_LT_AMP;
	v->a[67766] = anon_sym_GT_AMP;
	v->a[67767] = anon_sym_GT_PIPE;
	v->a[67768] = anon_sym_LT_AMP_DASH;
	v->a[67769] = anon_sym_GT_AMP_DASH;
	v->a[67770] = anon_sym_LT_LT;
	v->a[67771] = anon_sym_LT_LT_DASH;
	v->a[67772] = anon_sym_AMP;
	v->a[67773] = anon_sym_SEMI;
	v->a[67774] = 5;
	v->a[67775] = actions(3);
	v->a[67776] = 1;
	v->a[67777] = sym_comment;
	v->a[67778] = actions(2188);
	v->a[67779] = 1;
	small_parse_table_3389(v);
}

void	small_parse_table_3389(t_small_parse_table_array *v)
{
	v->a[67780] = anon_sym_PIPE;
	v->a[67781] = state(1512);
	v->a[67782] = 1;
	v->a[67783] = aux_sym_pipeline_repeat1;
	v->a[67784] = actions(2186);
	v->a[67785] = 3;
	v->a[67786] = sym_file_descriptor;
	v->a[67787] = ts_builtin_sym_end;
	v->a[67788] = aux_sym_heredoc_redirect_token1;
	v->a[67789] = actions(2191);
	v->a[67790] = 19;
	v->a[67791] = anon_sym_RPAREN;
	v->a[67792] = anon_sym_SEMI_SEMI;
	v->a[67793] = anon_sym_AMP_AMP;
	v->a[67794] = anon_sym_PIPE_PIPE;
	v->a[67795] = anon_sym_LT;
	v->a[67796] = anon_sym_GT;
	v->a[67797] = anon_sym_GT_GT;
	v->a[67798] = anon_sym_AMP_GT;
	v->a[67799] = anon_sym_AMP_GT_GT;
	small_parse_table_3390(v);
}

/* EOF small_parse_table_677.c */
