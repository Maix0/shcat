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
	v->a[68701] = sym_case_item;
	v->a[68702] = state(2260);
	v->a[68703] = 1;
	v->a[68704] = sym__case_item_last;
	v->a[68705] = actions(2111);
	v->a[68706] = 2;
	v->a[68707] = sym_raw_string;
	v->a[68708] = sym_word;
	v->a[68709] = state(2016);
	v->a[68710] = 2;
	v->a[68711] = sym_concatenation;
	v->a[68712] = sym__extglob_blob;
	v->a[68713] = state(1896);
	v->a[68714] = 6;
	v->a[68715] = sym_arithmetic_expansion;
	v->a[68716] = sym_string;
	v->a[68717] = sym_number;
	v->a[68718] = sym_simple_expansion;
	v->a[68719] = sym_expansion;
	small_parse_table_3436(v);
}

void	small_parse_table_3436(t_small_parse_table_array *v)
{
	v->a[68720] = sym_command_substitution;
	v->a[68721] = 3;
	v->a[68722] = actions(3);
	v->a[68723] = 1;
	v->a[68724] = sym_comment;
	v->a[68725] = actions(2516);
	v->a[68726] = 3;
	v->a[68727] = sym_file_descriptor;
	v->a[68728] = ts_builtin_sym_end;
	v->a[68729] = aux_sym_heredoc_redirect_token1;
	v->a[68730] = actions(2518);
	v->a[68731] = 20;
	v->a[68732] = anon_sym_PIPE;
	v->a[68733] = anon_sym_RPAREN;
	v->a[68734] = anon_sym_SEMI_SEMI;
	v->a[68735] = anon_sym_AMP_AMP;
	v->a[68736] = anon_sym_PIPE_PIPE;
	v->a[68737] = anon_sym_LT;
	v->a[68738] = anon_sym_GT;
	v->a[68739] = anon_sym_GT_GT;
	small_parse_table_3437(v);
}

void	small_parse_table_3437(t_small_parse_table_array *v)
{
	v->a[68740] = anon_sym_AMP_GT;
	v->a[68741] = anon_sym_AMP_GT_GT;
	v->a[68742] = anon_sym_LT_AMP;
	v->a[68743] = anon_sym_GT_AMP;
	v->a[68744] = anon_sym_GT_PIPE;
	v->a[68745] = anon_sym_LT_AMP_DASH;
	v->a[68746] = anon_sym_GT_AMP_DASH;
	v->a[68747] = anon_sym_LT_LT;
	v->a[68748] = anon_sym_LT_LT_DASH;
	v->a[68749] = anon_sym_AMP;
	v->a[68750] = anon_sym_BQUOTE;
	v->a[68751] = anon_sym_SEMI;
	v->a[68752] = 3;
	v->a[68753] = actions(3);
	v->a[68754] = 1;
	v->a[68755] = sym_comment;
	v->a[68756] = actions(2520);
	v->a[68757] = 3;
	v->a[68758] = sym_file_descriptor;
	v->a[68759] = ts_builtin_sym_end;
	small_parse_table_3438(v);
}

void	small_parse_table_3438(t_small_parse_table_array *v)
{
	v->a[68760] = aux_sym_heredoc_redirect_token1;
	v->a[68761] = actions(2522);
	v->a[68762] = 20;
	v->a[68763] = anon_sym_PIPE;
	v->a[68764] = anon_sym_RPAREN;
	v->a[68765] = anon_sym_SEMI_SEMI;
	v->a[68766] = anon_sym_AMP_AMP;
	v->a[68767] = anon_sym_PIPE_PIPE;
	v->a[68768] = anon_sym_LT;
	v->a[68769] = anon_sym_GT;
	v->a[68770] = anon_sym_GT_GT;
	v->a[68771] = anon_sym_AMP_GT;
	v->a[68772] = anon_sym_AMP_GT_GT;
	v->a[68773] = anon_sym_LT_AMP;
	v->a[68774] = anon_sym_GT_AMP;
	v->a[68775] = anon_sym_GT_PIPE;
	v->a[68776] = anon_sym_LT_AMP_DASH;
	v->a[68777] = anon_sym_GT_AMP_DASH;
	v->a[68778] = anon_sym_LT_LT;
	v->a[68779] = anon_sym_LT_LT_DASH;
	small_parse_table_3439(v);
}

void	small_parse_table_3439(t_small_parse_table_array *v)
{
	v->a[68780] = anon_sym_AMP;
	v->a[68781] = anon_sym_BQUOTE;
	v->a[68782] = anon_sym_SEMI;
	v->a[68783] = 3;
	v->a[68784] = actions(3);
	v->a[68785] = 1;
	v->a[68786] = sym_comment;
	v->a[68787] = actions(2524);
	v->a[68788] = 3;
	v->a[68789] = sym_file_descriptor;
	v->a[68790] = ts_builtin_sym_end;
	v->a[68791] = aux_sym_heredoc_redirect_token1;
	v->a[68792] = actions(2526);
	v->a[68793] = 20;
	v->a[68794] = anon_sym_PIPE;
	v->a[68795] = anon_sym_RPAREN;
	v->a[68796] = anon_sym_SEMI_SEMI;
	v->a[68797] = anon_sym_AMP_AMP;
	v->a[68798] = anon_sym_PIPE_PIPE;
	v->a[68799] = anon_sym_LT;
	small_parse_table_3440(v);
}

/* EOF small_parse_table_687.c */
