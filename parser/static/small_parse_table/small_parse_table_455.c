/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_455.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2275(t_small_parse_table_array *v)
{
	v->a[45500] = actions(3);
	v->a[45501] = 1;
	v->a[45502] = sym_comment;
	v->a[45503] = actions(580);
	v->a[45504] = 1;
	v->a[45505] = anon_sym_PIPE;
	v->a[45506] = actions(597);
	v->a[45507] = 1;
	v->a[45508] = anon_sym_LT_LT;
	v->a[45509] = actions(1870);
	v->a[45510] = 1;
	v->a[45511] = aux_sym_heredoc_redirect_token1;
	v->a[45512] = state(573);
	v->a[45513] = 1;
	v->a[45514] = sym_terminator;
	v->a[45515] = actions(593);
	v->a[45516] = 2;
	v->a[45517] = anon_sym_SEMI_SEMI;
	v->a[45518] = anon_sym_SEMI;
	v->a[45519] = actions(769);
	small_parse_table_2276(v);
}

void	small_parse_table_2276(t_small_parse_table_array *v)
{
	v->a[45520] = 2;
	v->a[45521] = anon_sym_AMP_AMP;
	v->a[45522] = anon_sym_PIPE_PIPE;
	v->a[45523] = actions(1924);
	v->a[45524] = 3;
	v->a[45525] = anon_sym_LT;
	v->a[45526] = anon_sym_GT;
	v->a[45527] = anon_sym_GT_GT;
	v->a[45528] = state(1040);
	v->a[45529] = 3;
	v->a[45530] = sym_file_redirect;
	v->a[45531] = sym_heredoc_redirect;
	v->a[45532] = aux_sym_redirected_statement_repeat1;
	v->a[45533] = 5;
	v->a[45534] = actions(3);
	v->a[45535] = 1;
	v->a[45536] = sym_comment;
	v->a[45537] = actions(1952);
	v->a[45538] = 1;
	v->a[45539] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2277(v);
}

void	small_parse_table_2277(t_small_parse_table_array *v)
{
	v->a[45540] = actions(1996);
	v->a[45541] = 1;
	v->a[45542] = sym_variable_name;
	v->a[45543] = state(968);
	v->a[45544] = 2;
	v->a[45545] = sym_variable_assignment;
	v->a[45546] = aux_sym__variable_assignments_repeat1;
	v->a[45547] = actions(1954);
	v->a[45548] = 10;
	v->a[45549] = anon_sym_PIPE;
	v->a[45550] = anon_sym_SEMI_SEMI;
	v->a[45551] = anon_sym_AMP_AMP;
	v->a[45552] = anon_sym_PIPE_PIPE;
	v->a[45553] = anon_sym_LT;
	v->a[45554] = anon_sym_GT;
	v->a[45555] = anon_sym_GT_GT;
	v->a[45556] = anon_sym_LT_LT;
	v->a[45557] = anon_sym_BQUOTE;
	v->a[45558] = anon_sym_SEMI;
	v->a[45559] = 5;
	small_parse_table_2278(v);
}

void	small_parse_table_2278(t_small_parse_table_array *v)
{
	v->a[45560] = actions(3);
	v->a[45561] = 1;
	v->a[45562] = sym_comment;
	v->a[45563] = actions(1963);
	v->a[45564] = 1;
	v->a[45565] = aux_sym_heredoc_redirect_token1;
	v->a[45566] = actions(1998);
	v->a[45567] = 1;
	v->a[45568] = sym_variable_name;
	v->a[45569] = state(968);
	v->a[45570] = 2;
	v->a[45571] = sym_variable_assignment;
	v->a[45572] = aux_sym__variable_assignments_repeat1;
	v->a[45573] = actions(1961);
	v->a[45574] = 10;
	v->a[45575] = anon_sym_PIPE;
	v->a[45576] = anon_sym_SEMI_SEMI;
	v->a[45577] = anon_sym_AMP_AMP;
	v->a[45578] = anon_sym_PIPE_PIPE;
	v->a[45579] = anon_sym_LT;
	small_parse_table_2279(v);
}

void	small_parse_table_2279(t_small_parse_table_array *v)
{
	v->a[45580] = anon_sym_GT;
	v->a[45581] = anon_sym_GT_GT;
	v->a[45582] = anon_sym_LT_LT;
	v->a[45583] = anon_sym_BQUOTE;
	v->a[45584] = anon_sym_SEMI;
	v->a[45585] = 9;
	v->a[45586] = actions(3);
	v->a[45587] = 1;
	v->a[45588] = sym_comment;
	v->a[45589] = actions(578);
	v->a[45590] = 1;
	v->a[45591] = anon_sym_BQUOTE;
	v->a[45592] = actions(597);
	v->a[45593] = 1;
	v->a[45594] = anon_sym_LT_LT;
	v->a[45595] = actions(1870);
	v->a[45596] = 1;
	v->a[45597] = aux_sym_heredoc_redirect_token1;
	v->a[45598] = state(559);
	v->a[45599] = 1;
	small_parse_table_2280(v);
}

/* EOF small_parse_table_455.c */
