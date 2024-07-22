/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_597.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2985(t_small_parse_table_array *v)
{
	v->a[59700] = sym_comment;
	v->a[59701] = actions(797);
	v->a[59702] = 1;
	v->a[59703] = anon_sym_BQUOTE;
	v->a[59704] = actions(1888);
	v->a[59705] = 1;
	v->a[59706] = aux_sym_heredoc_redirect_token1;
	v->a[59707] = actions(1890);
	v->a[59708] = 1;
	v->a[59709] = sym_file_descriptor;
	v->a[59710] = state(793);
	v->a[59711] = 1;
	v->a[59712] = sym_terminator;
	v->a[59713] = actions(786);
	v->a[59714] = 2;
	v->a[59715] = anon_sym_SEMI_SEMI;
	v->a[59716] = anon_sym_SEMI;
	v->a[59717] = actions(790);
	v->a[59718] = 2;
	v->a[59719] = anon_sym_LT_LT;
	small_parse_table_2986(v);
}

void	small_parse_table_2986(t_small_parse_table_array *v)
{
	v->a[59720] = anon_sym_LT_LT_DASH;
	v->a[59721] = actions(1059);
	v->a[59722] = 2;
	v->a[59723] = anon_sym_AMP_AMP;
	v->a[59724] = anon_sym_PIPE_PIPE;
	v->a[59725] = state(1062);
	v->a[59726] = 3;
	v->a[59727] = sym_file_redirect;
	v->a[59728] = sym_heredoc_redirect;
	v->a[59729] = aux_sym_redirected_statement_repeat1;
	v->a[59730] = actions(1886);
	v->a[59731] = 7;
	v->a[59732] = anon_sym_LT;
	v->a[59733] = anon_sym_GT;
	v->a[59734] = anon_sym_GT_GT;
	v->a[59735] = anon_sym_LT_AMP;
	v->a[59736] = anon_sym_GT_AMP;
	v->a[59737] = anon_sym_GT_PIPE;
	v->a[59738] = anon_sym_LT_GT;
	v->a[59739] = 10;
	small_parse_table_2987(v);
}

void	small_parse_table_2987(t_small_parse_table_array *v)
{
	v->a[59740] = actions(3);
	v->a[59741] = 1;
	v->a[59742] = sym_comment;
	v->a[59743] = actions(782);
	v->a[59744] = 1;
	v->a[59745] = anon_sym_PIPE;
	v->a[59746] = actions(1888);
	v->a[59747] = 1;
	v->a[59748] = aux_sym_heredoc_redirect_token1;
	v->a[59749] = actions(1945);
	v->a[59750] = 1;
	v->a[59751] = sym_file_descriptor;
	v->a[59752] = state(616);
	v->a[59753] = 1;
	v->a[59754] = sym_terminator;
	v->a[59755] = actions(786);
	v->a[59756] = 2;
	v->a[59757] = anon_sym_SEMI_SEMI;
	v->a[59758] = anon_sym_SEMI;
	v->a[59759] = actions(790);
	small_parse_table_2988(v);
}

void	small_parse_table_2988(t_small_parse_table_array *v)
{
	v->a[59760] = 2;
	v->a[59761] = anon_sym_LT_LT;
	v->a[59762] = anon_sym_LT_LT_DASH;
	v->a[59763] = actions(1028);
	v->a[59764] = 2;
	v->a[59765] = anon_sym_AMP_AMP;
	v->a[59766] = anon_sym_PIPE_PIPE;
	v->a[59767] = state(1194);
	v->a[59768] = 3;
	v->a[59769] = sym_file_redirect;
	v->a[59770] = sym_heredoc_redirect;
	v->a[59771] = aux_sym_redirected_statement_repeat1;
	v->a[59772] = actions(1941);
	v->a[59773] = 7;
	v->a[59774] = anon_sym_LT;
	v->a[59775] = anon_sym_GT;
	v->a[59776] = anon_sym_GT_GT;
	v->a[59777] = anon_sym_LT_AMP;
	v->a[59778] = anon_sym_GT_AMP;
	v->a[59779] = anon_sym_GT_PIPE;
	small_parse_table_2989(v);
}

void	small_parse_table_2989(t_small_parse_table_array *v)
{
	v->a[59780] = anon_sym_LT_GT;
	v->a[59781] = 11;
	v->a[59782] = actions(3);
	v->a[59783] = 1;
	v->a[59784] = sym_comment;
	v->a[59785] = actions(782);
	v->a[59786] = 1;
	v->a[59787] = anon_sym_PIPE;
	v->a[59788] = actions(786);
	v->a[59789] = 1;
	v->a[59790] = anon_sym_SEMI;
	v->a[59791] = actions(797);
	v->a[59792] = 1;
	v->a[59793] = anon_sym_SEMI_SEMI;
	v->a[59794] = actions(1888);
	v->a[59795] = 1;
	v->a[59796] = aux_sym_heredoc_redirect_token1;
	v->a[59797] = actions(1945);
	v->a[59798] = 1;
	v->a[59799] = sym_file_descriptor;
	small_parse_table_2990(v);
}

/* EOF small_parse_table_597.c */
