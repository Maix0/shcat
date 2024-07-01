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
	v->a[64500] = anon_sym_SEMI;
	v->a[64501] = actions(754);
	v->a[64502] = 2;
	v->a[64503] = anon_sym_LT_LT;
	v->a[64504] = anon_sym_LT_LT_DASH;
	v->a[64505] = actions(924);
	v->a[64506] = 2;
	v->a[64507] = anon_sym_AMP_AMP;
	v->a[64508] = anon_sym_PIPE_PIPE;
	v->a[64509] = actions(2063);
	v->a[64510] = 2;
	v->a[64511] = anon_sym_LT_AMP_DASH;
	v->a[64512] = anon_sym_GT_AMP_DASH;
	v->a[64513] = state(1268);
	v->a[64514] = 3;
	v->a[64515] = sym_file_redirect;
	v->a[64516] = sym_heredoc_redirect;
	v->a[64517] = aux_sym_redirected_statement_repeat1;
	v->a[64518] = actions(2061);
	v->a[64519] = 6;
	small_parse_table_3226(v);
}

void	small_parse_table_3226(t_small_parse_table_array *v)
{
	v->a[64520] = anon_sym_LT;
	v->a[64521] = anon_sym_GT;
	v->a[64522] = anon_sym_GT_GT;
	v->a[64523] = anon_sym_LT_AMP;
	v->a[64524] = anon_sym_GT_AMP;
	v->a[64525] = anon_sym_GT_PIPE;
	v->a[64526] = 12;
	v->a[64527] = actions(3);
	v->a[64528] = 1;
	v->a[64529] = sym_comment;
	v->a[64530] = actions(682);
	v->a[64531] = 1;
	v->a[64532] = anon_sym_PIPE;
	v->a[64533] = actions(695);
	v->a[64534] = 1;
	v->a[64535] = anon_sym_SEMI_SEMI;
	v->a[64536] = actions(2009);
	v->a[64537] = 1;
	v->a[64538] = aux_sym_heredoc_redirect_token1;
	v->a[64539] = actions(2065);
	small_parse_table_3227(v);
}

void	small_parse_table_3227(t_small_parse_table_array *v)
{
	v->a[64540] = 1;
	v->a[64541] = sym_file_descriptor;
	v->a[64542] = state(745);
	v->a[64543] = 1;
	v->a[64544] = sym_terminator;
	v->a[64545] = actions(750);
	v->a[64546] = 2;
	v->a[64547] = anon_sym_AMP;
	v->a[64548] = anon_sym_SEMI;
	v->a[64549] = actions(754);
	v->a[64550] = 2;
	v->a[64551] = anon_sym_LT_LT;
	v->a[64552] = anon_sym_LT_LT_DASH;
	v->a[64553] = actions(924);
	v->a[64554] = 2;
	v->a[64555] = anon_sym_AMP_AMP;
	v->a[64556] = anon_sym_PIPE_PIPE;
	v->a[64557] = actions(2063);
	v->a[64558] = 2;
	v->a[64559] = anon_sym_LT_AMP_DASH;
	small_parse_table_3228(v);
}

void	small_parse_table_3228(t_small_parse_table_array *v)
{
	v->a[64560] = anon_sym_GT_AMP_DASH;
	v->a[64561] = state(1268);
	v->a[64562] = 3;
	v->a[64563] = sym_file_redirect;
	v->a[64564] = sym_heredoc_redirect;
	v->a[64565] = aux_sym_redirected_statement_repeat1;
	v->a[64566] = actions(2061);
	v->a[64567] = 6;
	v->a[64568] = anon_sym_LT;
	v->a[64569] = anon_sym_GT;
	v->a[64570] = anon_sym_GT_GT;
	v->a[64571] = anon_sym_LT_AMP;
	v->a[64572] = anon_sym_GT_AMP;
	v->a[64573] = anon_sym_GT_PIPE;
	v->a[64574] = 12;
	v->a[64575] = actions(3);
	v->a[64576] = 1;
	v->a[64577] = sym_comment;
	v->a[64578] = actions(682);
	v->a[64579] = 1;
	small_parse_table_3229(v);
}

void	small_parse_table_3229(t_small_parse_table_array *v)
{
	v->a[64580] = anon_sym_PIPE;
	v->a[64581] = actions(695);
	v->a[64582] = 1;
	v->a[64583] = anon_sym_SEMI_SEMI;
	v->a[64584] = actions(2009);
	v->a[64585] = 1;
	v->a[64586] = aux_sym_heredoc_redirect_token1;
	v->a[64587] = actions(2065);
	v->a[64588] = 1;
	v->a[64589] = sym_file_descriptor;
	v->a[64590] = state(746);
	v->a[64591] = 1;
	v->a[64592] = sym_terminator;
	v->a[64593] = actions(750);
	v->a[64594] = 2;
	v->a[64595] = anon_sym_AMP;
	v->a[64596] = anon_sym_SEMI;
	v->a[64597] = actions(754);
	v->a[64598] = 2;
	v->a[64599] = anon_sym_LT_LT;
	small_parse_table_3230(v);
}

/* EOF small_parse_table_645.c */
