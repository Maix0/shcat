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
	v->a[64500] = 1;
	v->a[64501] = aux_sym_concatenation_repeat1;
	v->a[64502] = actions(2441);
	v->a[64503] = 2;
	v->a[64504] = sym__concat;
	v->a[64505] = aux_sym_concatenation_token1;
	v->a[64506] = actions(1105);
	v->a[64507] = 4;
	v->a[64508] = anon_sym_PIPE;
	v->a[64509] = anon_sym_LT;
	v->a[64510] = anon_sym_GT;
	v->a[64511] = anon_sym_LT_LT;
	v->a[64512] = actions(1110);
	v->a[64513] = 10;
	v->a[64514] = sym_file_descriptor;
	v->a[64515] = sym_variable_name;
	v->a[64516] = anon_sym_AMP_AMP;
	v->a[64517] = anon_sym_PIPE_PIPE;
	v->a[64518] = anon_sym_GT_GT;
	v->a[64519] = anon_sym_LT_AMP;
	small_parse_table_3226(v);
}

void	small_parse_table_3226(t_small_parse_table_array *v)
{
	v->a[64520] = anon_sym_GT_AMP;
	v->a[64521] = anon_sym_GT_PIPE;
	v->a[64522] = anon_sym_LT_GT;
	v->a[64523] = anon_sym_LT_LT_DASH;
	v->a[64524] = 8;
	v->a[64525] = actions(3);
	v->a[64526] = 1;
	v->a[64527] = sym_comment;
	v->a[64528] = actions(782);
	v->a[64529] = 1;
	v->a[64530] = anon_sym_PIPE;
	v->a[64531] = actions(2429);
	v->a[64532] = 1;
	v->a[64533] = sym_file_descriptor;
	v->a[64534] = actions(2444);
	v->a[64535] = 1;
	v->a[64536] = aux_sym_heredoc_redirect_token1;
	v->a[64537] = actions(790);
	v->a[64538] = 2;
	v->a[64539] = anon_sym_LT_LT;
	small_parse_table_3227(v);
}

void	small_parse_table_3227(t_small_parse_table_array *v)
{
	v->a[64540] = anon_sym_LT_LT_DASH;
	v->a[64541] = actions(1328);
	v->a[64542] = 2;
	v->a[64543] = anon_sym_AMP_AMP;
	v->a[64544] = anon_sym_PIPE_PIPE;
	v->a[64545] = state(1353);
	v->a[64546] = 3;
	v->a[64547] = sym_file_redirect;
	v->a[64548] = sym_heredoc_redirect;
	v->a[64549] = aux_sym_redirected_statement_repeat1;
	v->a[64550] = actions(2425);
	v->a[64551] = 7;
	v->a[64552] = anon_sym_LT;
	v->a[64553] = anon_sym_GT;
	v->a[64554] = anon_sym_GT_GT;
	v->a[64555] = anon_sym_LT_AMP;
	v->a[64556] = anon_sym_GT_AMP;
	v->a[64557] = anon_sym_GT_PIPE;
	v->a[64558] = anon_sym_LT_GT;
	v->a[64559] = 10;
	small_parse_table_3228(v);
}

void	small_parse_table_3228(t_small_parse_table_array *v)
{
	v->a[64560] = actions(3);
	v->a[64561] = 1;
	v->a[64562] = sym_comment;
	v->a[64563] = actions(329);
	v->a[64564] = 1;
	v->a[64565] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64566] = actions(331);
	v->a[64567] = 1;
	v->a[64568] = anon_sym_DOLLAR;
	v->a[64569] = actions(333);
	v->a[64570] = 1;
	v->a[64571] = anon_sym_DQUOTE;
	v->a[64572] = actions(337);
	v->a[64573] = 1;
	v->a[64574] = anon_sym_DOLLAR_LBRACE;
	v->a[64575] = actions(339);
	v->a[64576] = 1;
	v->a[64577] = anon_sym_DOLLAR_LPAREN;
	v->a[64578] = actions(341);
	v->a[64579] = 1;
	small_parse_table_3229(v);
}

void	small_parse_table_3229(t_small_parse_table_array *v)
{
	v->a[64580] = anon_sym_BQUOTE;
	v->a[64581] = actions(2448);
	v->a[64582] = 1;
	v->a[64583] = sym__bare_dollar;
	v->a[64584] = actions(2446);
	v->a[64585] = 5;
	v->a[64586] = aux_sym_concatenation_token1;
	v->a[64587] = sym_raw_string;
	v->a[64588] = sym_number;
	v->a[64589] = sym__comment_word;
	v->a[64590] = sym_word;
	v->a[64591] = state(818);
	v->a[64592] = 5;
	v->a[64593] = sym_arithmetic_expansion;
	v->a[64594] = sym_string;
	v->a[64595] = sym_simple_expansion;
	v->a[64596] = sym_expansion;
	v->a[64597] = sym_command_substitution;
	v->a[64598] = 10;
	v->a[64599] = actions(3);
	small_parse_table_3230(v);
}

/* EOF small_parse_table_645.c */
