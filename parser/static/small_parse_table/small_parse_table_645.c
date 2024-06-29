/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_645.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3225(t_small_parse_table_array *v)
{
	v->a[64500] = sym_terminator;
	v->a[64501] = actions(804);
	v->a[64502] = 2;
	v->a[64503] = anon_sym_LT_LT;
	v->a[64504] = anon_sym_LT_LT_DASH;
	v->a[64505] = actions(835);
	v->a[64506] = 2;
	v->a[64507] = anon_sym_AMP_AMP;
	v->a[64508] = anon_sym_PIPE_PIPE;
	v->a[64509] = actions(2015);
	v->a[64510] = 2;
	v->a[64511] = anon_sym_LT_AMP_DASH;
	v->a[64512] = anon_sym_GT_AMP_DASH;
	v->a[64513] = actions(833);
	v->a[64514] = 3;
	v->a[64515] = anon_sym_SEMI_SEMI;
	v->a[64516] = anon_sym_AMP;
	v->a[64517] = anon_sym_SEMI;
	v->a[64518] = state(1133);
	v->a[64519] = 3;
	small_parse_table_3226(v);
}

void	small_parse_table_3226(t_small_parse_table_array *v)
{
	v->a[64520] = sym_file_redirect;
	v->a[64521] = sym_heredoc_redirect;
	v->a[64522] = aux_sym_redirected_statement_repeat1;
	v->a[64523] = actions(2013);
	v->a[64524] = 8;
	v->a[64525] = anon_sym_LT;
	v->a[64526] = anon_sym_GT;
	v->a[64527] = anon_sym_GT_GT;
	v->a[64528] = anon_sym_AMP_GT;
	v->a[64529] = anon_sym_AMP_GT_GT;
	v->a[64530] = anon_sym_LT_AMP;
	v->a[64531] = anon_sym_GT_AMP;
	v->a[64532] = anon_sym_GT_PIPE;
	v->a[64533] = 3;
	v->a[64534] = actions(3);
	v->a[64535] = 1;
	v->a[64536] = sym_comment;
	v->a[64537] = actions(1126);
	v->a[64538] = 4;
	v->a[64539] = sym_file_descriptor;
	small_parse_table_3227(v);
}

void	small_parse_table_3227(t_small_parse_table_array *v)
{
	v->a[64540] = sym__concat;
	v->a[64541] = ts_builtin_sym_end;
	v->a[64542] = aux_sym_heredoc_redirect_token1;
	v->a[64543] = actions(1124);
	v->a[64544] = 21;
	v->a[64545] = anon_sym_PIPE;
	v->a[64546] = anon_sym_RPAREN;
	v->a[64547] = anon_sym_SEMI_SEMI;
	v->a[64548] = anon_sym_AMP_AMP;
	v->a[64549] = anon_sym_PIPE_PIPE;
	v->a[64550] = anon_sym_LT;
	v->a[64551] = anon_sym_GT;
	v->a[64552] = anon_sym_GT_GT;
	v->a[64553] = anon_sym_AMP_GT;
	v->a[64554] = anon_sym_AMP_GT_GT;
	v->a[64555] = anon_sym_LT_AMP;
	v->a[64556] = anon_sym_GT_AMP;
	v->a[64557] = anon_sym_GT_PIPE;
	v->a[64558] = anon_sym_LT_AMP_DASH;
	v->a[64559] = anon_sym_GT_AMP_DASH;
	small_parse_table_3228(v);
}

void	small_parse_table_3228(t_small_parse_table_array *v)
{
	v->a[64560] = anon_sym_LT_LT;
	v->a[64561] = anon_sym_LT_LT_DASH;
	v->a[64562] = anon_sym_AMP;
	v->a[64563] = aux_sym_concatenation_token1;
	v->a[64564] = anon_sym_BQUOTE;
	v->a[64565] = anon_sym_SEMI;
	v->a[64566] = 6;
	v->a[64567] = actions(3);
	v->a[64568] = 1;
	v->a[64569] = sym_comment;
	v->a[64570] = actions(2035);
	v->a[64571] = 1;
	v->a[64572] = aux_sym_concatenation_token1;
	v->a[64573] = actions(2049);
	v->a[64574] = 1;
	v->a[64575] = sym__concat;
	v->a[64576] = state(1052);
	v->a[64577] = 1;
	v->a[64578] = aux_sym_concatenation_repeat1;
	v->a[64579] = actions(1094);
	small_parse_table_3229(v);
}

void	small_parse_table_3229(t_small_parse_table_array *v)
{
	v->a[64580] = 3;
	v->a[64581] = sym_file_descriptor;
	v->a[64582] = sym_variable_name;
	v->a[64583] = aux_sym_heredoc_redirect_token1;
	v->a[64584] = actions(1090);
	v->a[64585] = 19;
	v->a[64586] = anon_sym_PIPE;
	v->a[64587] = anon_sym_SEMI_SEMI;
	v->a[64588] = anon_sym_AMP_AMP;
	v->a[64589] = anon_sym_PIPE_PIPE;
	v->a[64590] = anon_sym_LT;
	v->a[64591] = anon_sym_GT;
	v->a[64592] = anon_sym_GT_GT;
	v->a[64593] = anon_sym_AMP_GT;
	v->a[64594] = anon_sym_AMP_GT_GT;
	v->a[64595] = anon_sym_LT_AMP;
	v->a[64596] = anon_sym_GT_AMP;
	v->a[64597] = anon_sym_GT_PIPE;
	v->a[64598] = anon_sym_LT_AMP_DASH;
	v->a[64599] = anon_sym_GT_AMP_DASH;
	small_parse_table_3230(v);
}

/* EOF small_parse_table_645.c */
