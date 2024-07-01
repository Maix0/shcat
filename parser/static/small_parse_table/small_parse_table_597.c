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
	v->a[59700] = 4;
	v->a[59701] = actions(3);
	v->a[59702] = 1;
	v->a[59703] = sym_comment;
	v->a[59704] = actions(997);
	v->a[59705] = 2;
	v->a[59706] = sym_file_descriptor;
	v->a[59707] = aux_sym_heredoc_redirect_token1;
	v->a[59708] = state(1080);
	v->a[59709] = 3;
	v->a[59710] = sym_file_redirect;
	v->a[59711] = sym_heredoc_redirect;
	v->a[59712] = aux_sym_redirected_statement_repeat1;
	v->a[59713] = actions(960);
	v->a[59714] = 16;
	v->a[59715] = anon_sym_PIPE;
	v->a[59716] = anon_sym_RPAREN;
	v->a[59717] = anon_sym_SEMI_SEMI;
	v->a[59718] = anon_sym_AMP_AMP;
	v->a[59719] = anon_sym_PIPE_PIPE;
	small_parse_table_2986(v);
}

void	small_parse_table_2986(t_small_parse_table_array *v)
{
	v->a[59720] = anon_sym_LT;
	v->a[59721] = anon_sym_GT;
	v->a[59722] = anon_sym_GT_GT;
	v->a[59723] = anon_sym_LT_AMP;
	v->a[59724] = anon_sym_GT_AMP;
	v->a[59725] = anon_sym_GT_PIPE;
	v->a[59726] = anon_sym_LT_GT;
	v->a[59727] = anon_sym_LT_LT;
	v->a[59728] = anon_sym_LT_LT_DASH;
	v->a[59729] = anon_sym_AMP;
	v->a[59730] = anon_sym_SEMI;
	v->a[59731] = 5;
	v->a[59732] = actions(3);
	v->a[59733] = 1;
	v->a[59734] = sym_comment;
	v->a[59735] = actions(736);
	v->a[59736] = 1;
	v->a[59737] = anon_sym_PIPE;
	v->a[59738] = actions(997);
	v->a[59739] = 2;
	small_parse_table_2987(v);
}

void	small_parse_table_2987(t_small_parse_table_array *v)
{
	v->a[59740] = sym_file_descriptor;
	v->a[59741] = aux_sym_heredoc_redirect_token1;
	v->a[59742] = state(1080);
	v->a[59743] = 3;
	v->a[59744] = sym_file_redirect;
	v->a[59745] = sym_heredoc_redirect;
	v->a[59746] = aux_sym_redirected_statement_repeat1;
	v->a[59747] = actions(960);
	v->a[59748] = 15;
	v->a[59749] = anon_sym_RPAREN;
	v->a[59750] = anon_sym_SEMI_SEMI;
	v->a[59751] = anon_sym_AMP_AMP;
	v->a[59752] = anon_sym_PIPE_PIPE;
	v->a[59753] = anon_sym_LT;
	v->a[59754] = anon_sym_GT;
	v->a[59755] = anon_sym_GT_GT;
	v->a[59756] = anon_sym_LT_AMP;
	v->a[59757] = anon_sym_GT_AMP;
	v->a[59758] = anon_sym_GT_PIPE;
	v->a[59759] = anon_sym_LT_GT;
	small_parse_table_2988(v);
}

void	small_parse_table_2988(t_small_parse_table_array *v)
{
	v->a[59760] = anon_sym_LT_LT;
	v->a[59761] = anon_sym_LT_LT_DASH;
	v->a[59762] = anon_sym_AMP;
	v->a[59763] = anon_sym_SEMI;
	v->a[59764] = 3;
	v->a[59765] = actions(3);
	v->a[59766] = 1;
	v->a[59767] = sym_comment;
	v->a[59768] = actions(1209);
	v->a[59769] = 4;
	v->a[59770] = sym_file_descriptor;
	v->a[59771] = sym_variable_name;
	v->a[59772] = ts_builtin_sym_end;
	v->a[59773] = aux_sym_heredoc_redirect_token1;
	v->a[59774] = actions(1207);
	v->a[59775] = 17;
	v->a[59776] = anon_sym_PIPE;
	v->a[59777] = anon_sym_RPAREN;
	v->a[59778] = anon_sym_SEMI_SEMI;
	v->a[59779] = anon_sym_AMP_AMP;
	small_parse_table_2989(v);
}

void	small_parse_table_2989(t_small_parse_table_array *v)
{
	v->a[59780] = anon_sym_PIPE_PIPE;
	v->a[59781] = anon_sym_LT;
	v->a[59782] = anon_sym_GT;
	v->a[59783] = anon_sym_GT_GT;
	v->a[59784] = anon_sym_LT_AMP;
	v->a[59785] = anon_sym_GT_AMP;
	v->a[59786] = anon_sym_GT_PIPE;
	v->a[59787] = anon_sym_LT_GT;
	v->a[59788] = anon_sym_LT_LT;
	v->a[59789] = anon_sym_LT_LT_DASH;
	v->a[59790] = anon_sym_AMP;
	v->a[59791] = anon_sym_BQUOTE;
	v->a[59792] = anon_sym_SEMI;
	v->a[59793] = 10;
	v->a[59794] = actions(3);
	v->a[59795] = 1;
	v->a[59796] = sym_comment;
	v->a[59797] = actions(736);
	v->a[59798] = 1;
	v->a[59799] = anon_sym_PIPE;
	small_parse_table_2990(v);
}

/* EOF small_parse_table_597.c */
