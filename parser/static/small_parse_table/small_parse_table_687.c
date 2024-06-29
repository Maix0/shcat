/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_687.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3435(t_small_parse_table_array *v)
{
	v->a[68700] = 1;
	v->a[68701] = sym_terminator;
	v->a[68702] = actions(800);
	v->a[68703] = 2;
	v->a[68704] = anon_sym_AMP;
	v->a[68705] = anon_sym_SEMI;
	v->a[68706] = actions(804);
	v->a[68707] = 2;
	v->a[68708] = anon_sym_LT_LT;
	v->a[68709] = anon_sym_LT_LT_DASH;
	v->a[68710] = actions(893);
	v->a[68711] = 2;
	v->a[68712] = anon_sym_AMP_AMP;
	v->a[68713] = anon_sym_PIPE_PIPE;
	v->a[68714] = actions(2064);
	v->a[68715] = 2;
	v->a[68716] = anon_sym_LT_AMP_DASH;
	v->a[68717] = anon_sym_GT_AMP_DASH;
	v->a[68718] = state(1256);
	v->a[68719] = 3;
	small_parse_table_3436(v);
}

void	small_parse_table_3436(t_small_parse_table_array *v)
{
	v->a[68720] = sym_file_redirect;
	v->a[68721] = sym_heredoc_redirect;
	v->a[68722] = aux_sym_redirected_statement_repeat1;
	v->a[68723] = actions(2062);
	v->a[68724] = 8;
	v->a[68725] = anon_sym_LT;
	v->a[68726] = anon_sym_GT;
	v->a[68727] = anon_sym_GT_GT;
	v->a[68728] = anon_sym_AMP_GT;
	v->a[68729] = anon_sym_AMP_GT_GT;
	v->a[68730] = anon_sym_LT_AMP;
	v->a[68731] = anon_sym_GT_AMP;
	v->a[68732] = anon_sym_GT_PIPE;
	v->a[68733] = 7;
	v->a[68734] = actions(3);
	v->a[68735] = 1;
	v->a[68736] = sym_comment;
	v->a[68737] = actions(2218);
	v->a[68738] = 1;
	v->a[68739] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3437(v);
}

void	small_parse_table_3437(t_small_parse_table_array *v)
{
	v->a[68740] = actions(2252);
	v->a[68741] = 1;
	v->a[68742] = sym_file_descriptor;
	v->a[68743] = actions(2249);
	v->a[68744] = 2;
	v->a[68745] = anon_sym_LT_AMP_DASH;
	v->a[68746] = anon_sym_GT_AMP_DASH;
	v->a[68747] = state(1195);
	v->a[68748] = 2;
	v->a[68749] = sym_file_redirect;
	v->a[68750] = aux_sym_redirected_statement_repeat2;
	v->a[68751] = actions(2246);
	v->a[68752] = 8;
	v->a[68753] = anon_sym_LT;
	v->a[68754] = anon_sym_GT;
	v->a[68755] = anon_sym_GT_GT;
	v->a[68756] = anon_sym_AMP_GT;
	v->a[68757] = anon_sym_AMP_GT_GT;
	v->a[68758] = anon_sym_LT_AMP;
	v->a[68759] = anon_sym_GT_AMP;
	small_parse_table_3438(v);
}

void	small_parse_table_3438(t_small_parse_table_array *v)
{
	v->a[68760] = anon_sym_GT_PIPE;
	v->a[68761] = actions(2210);
	v->a[68762] = 9;
	v->a[68763] = anon_sym_esac;
	v->a[68764] = anon_sym_PIPE;
	v->a[68765] = anon_sym_SEMI_SEMI;
	v->a[68766] = anon_sym_AMP_AMP;
	v->a[68767] = anon_sym_PIPE_PIPE;
	v->a[68768] = anon_sym_LT_LT;
	v->a[68769] = anon_sym_LT_LT_DASH;
	v->a[68770] = anon_sym_AMP;
	v->a[68771] = anon_sym_SEMI;
	v->a[68772] = 3;
	v->a[68773] = actions(3);
	v->a[68774] = 1;
	v->a[68775] = sym_comment;
	v->a[68776] = actions(2255);
	v->a[68777] = 3;
	v->a[68778] = sym_file_descriptor;
	v->a[68779] = ts_builtin_sym_end;
	small_parse_table_3439(v);
}

void	small_parse_table_3439(t_small_parse_table_array *v)
{
	v->a[68780] = aux_sym_heredoc_redirect_token1;
	v->a[68781] = actions(2257);
	v->a[68782] = 20;
	v->a[68783] = anon_sym_PIPE;
	v->a[68784] = anon_sym_RPAREN;
	v->a[68785] = anon_sym_SEMI_SEMI;
	v->a[68786] = anon_sym_AMP_AMP;
	v->a[68787] = anon_sym_PIPE_PIPE;
	v->a[68788] = anon_sym_LT;
	v->a[68789] = anon_sym_GT;
	v->a[68790] = anon_sym_GT_GT;
	v->a[68791] = anon_sym_AMP_GT;
	v->a[68792] = anon_sym_AMP_GT_GT;
	v->a[68793] = anon_sym_LT_AMP;
	v->a[68794] = anon_sym_GT_AMP;
	v->a[68795] = anon_sym_GT_PIPE;
	v->a[68796] = anon_sym_LT_AMP_DASH;
	v->a[68797] = anon_sym_GT_AMP_DASH;
	v->a[68798] = anon_sym_LT_LT;
	v->a[68799] = anon_sym_LT_LT_DASH;
	small_parse_table_3440(v);
}

/* EOF small_parse_table_687.c */
