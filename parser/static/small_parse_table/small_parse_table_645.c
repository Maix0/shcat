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
	v->a[64500] = actions(1002);
	v->a[64501] = 1;
	v->a[64502] = anon_sym_PIPE;
	v->a[64503] = actions(1067);
	v->a[64504] = 1;
	v->a[64505] = ts_builtin_sym_end;
	v->a[64506] = actions(2277);
	v->a[64507] = 1;
	v->a[64508] = sym_file_descriptor;
	v->a[64509] = actions(2324);
	v->a[64510] = 1;
	v->a[64511] = aux_sym_heredoc_redirect_token1;
	v->a[64512] = actions(1060);
	v->a[64513] = 2;
	v->a[64514] = anon_sym_AMP_AMP;
	v->a[64515] = anon_sym_PIPE_PIPE;
	v->a[64516] = actions(1062);
	v->a[64517] = 2;
	v->a[64518] = anon_sym_LT_LT;
	v->a[64519] = anon_sym_LT_LT_DASH;
	small_parse_table_3226(v);
}

void	small_parse_table_3226(t_small_parse_table_array *v)
{
	v->a[64520] = actions(2273);
	v->a[64521] = 2;
	v->a[64522] = anon_sym_LT_AMP_DASH;
	v->a[64523] = anon_sym_GT_AMP_DASH;
	v->a[64524] = actions(1069);
	v->a[64525] = 3;
	v->a[64526] = anon_sym_SEMI_SEMI;
	v->a[64527] = anon_sym_AMP;
	v->a[64528] = anon_sym_SEMI;
	v->a[64529] = state(1043);
	v->a[64530] = 3;
	v->a[64531] = sym_file_redirect;
	v->a[64532] = sym_heredoc_redirect;
	v->a[64533] = aux_sym_redirected_statement_repeat1;
	v->a[64534] = actions(2271);
	v->a[64535] = 8;
	v->a[64536] = anon_sym_LT;
	v->a[64537] = anon_sym_GT;
	v->a[64538] = anon_sym_GT_GT;
	v->a[64539] = anon_sym_AMP_GT;
	small_parse_table_3227(v);
}

void	small_parse_table_3227(t_small_parse_table_array *v)
{
	v->a[64540] = anon_sym_AMP_GT_GT;
	v->a[64541] = anon_sym_LT_AMP;
	v->a[64542] = anon_sym_GT_AMP;
	v->a[64543] = anon_sym_GT_PIPE;
	v->a[64544] = 11;
	v->a[64545] = actions(3);
	v->a[64546] = 1;
	v->a[64547] = sym_comment;
	v->a[64548] = actions(1002);
	v->a[64549] = 1;
	v->a[64550] = anon_sym_PIPE;
	v->a[64551] = actions(2310);
	v->a[64552] = 1;
	v->a[64553] = sym_file_descriptor;
	v->a[64554] = actions(2326);
	v->a[64555] = 1;
	v->a[64556] = aux_sym_heredoc_redirect_token1;
	v->a[64557] = actions(1035);
	v->a[64558] = 2;
	v->a[64559] = anon_sym_AMP_AMP;
	small_parse_table_3228(v);
}

void	small_parse_table_3228(t_small_parse_table_array *v)
{
	v->a[64560] = anon_sym_PIPE_PIPE;
	v->a[64561] = actions(1037);
	v->a[64562] = 2;
	v->a[64563] = anon_sym_LT_LT;
	v->a[64564] = anon_sym_LT_LT_DASH;
	v->a[64565] = actions(1073);
	v->a[64566] = 2;
	v->a[64567] = anon_sym_esac;
	v->a[64568] = anon_sym_SEMI_SEMI;
	v->a[64569] = actions(1075);
	v->a[64570] = 2;
	v->a[64571] = anon_sym_AMP;
	v->a[64572] = anon_sym_SEMI;
	v->a[64573] = actions(2306);
	v->a[64574] = 2;
	v->a[64575] = anon_sym_LT_AMP_DASH;
	v->a[64576] = anon_sym_GT_AMP_DASH;
	v->a[64577] = state(1035);
	v->a[64578] = 3;
	v->a[64579] = sym_file_redirect;
	small_parse_table_3229(v);
}

void	small_parse_table_3229(t_small_parse_table_array *v)
{
	v->a[64580] = sym_heredoc_redirect;
	v->a[64581] = aux_sym_redirected_statement_repeat1;
	v->a[64582] = actions(2304);
	v->a[64583] = 8;
	v->a[64584] = anon_sym_LT;
	v->a[64585] = anon_sym_GT;
	v->a[64586] = anon_sym_GT_GT;
	v->a[64587] = anon_sym_AMP_GT;
	v->a[64588] = anon_sym_AMP_GT_GT;
	v->a[64589] = anon_sym_LT_AMP;
	v->a[64590] = anon_sym_GT_AMP;
	v->a[64591] = anon_sym_GT_PIPE;
	v->a[64592] = 3;
	v->a[64593] = actions(3);
	v->a[64594] = 1;
	v->a[64595] = sym_comment;
	v->a[64596] = actions(1202);
	v->a[64597] = 4;
	v->a[64598] = sym_file_descriptor;
	v->a[64599] = sym_variable_name;
	small_parse_table_3230(v);
}

/* EOF small_parse_table_645.c */
