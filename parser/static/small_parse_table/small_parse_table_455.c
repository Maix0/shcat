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
	v->a[45500] = actions(748);
	v->a[45501] = 2;
	v->a[45502] = anon_sym_AMP_AMP;
	v->a[45503] = anon_sym_PIPE_PIPE;
	v->a[45504] = actions(750);
	v->a[45505] = 2;
	v->a[45506] = anon_sym_LT_LT;
	v->a[45507] = anon_sym_LT_LT_DASH;
	v->a[45508] = actions(842);
	v->a[45509] = 2;
	v->a[45510] = anon_sym_esac;
	v->a[45511] = anon_sym_SEMI_SEMI;
	v->a[45512] = state(931);
	v->a[45513] = 3;
	v->a[45514] = sym_file_redirect;
	v->a[45515] = sym_heredoc_redirect;
	v->a[45516] = aux_sym_redirected_statement_repeat1;
	v->a[45517] = actions(1593);
	v->a[45518] = 7;
	v->a[45519] = anon_sym_LT;
	small_parse_table_2276(v);
}

void	small_parse_table_2276(t_small_parse_table_array *v)
{
	v->a[45520] = anon_sym_GT;
	v->a[45521] = anon_sym_GT_GT;
	v->a[45522] = anon_sym_LT_AMP;
	v->a[45523] = anon_sym_GT_AMP;
	v->a[45524] = anon_sym_GT_PIPE;
	v->a[45525] = anon_sym_LT_GT;
	v->a[45526] = 10;
	v->a[45527] = actions(3);
	v->a[45528] = 1;
	v->a[45529] = sym_comment;
	v->a[45530] = actions(746);
	v->a[45531] = 1;
	v->a[45532] = anon_sym_PIPE;
	v->a[45533] = actions(842);
	v->a[45534] = 1;
	v->a[45535] = anon_sym_RPAREN;
	v->a[45536] = actions(1591);
	v->a[45537] = 1;
	v->a[45538] = aux_sym_heredoc_redirect_token1;
	v->a[45539] = state(523);
	small_parse_table_2277(v);
}

void	small_parse_table_2277(t_small_parse_table_array *v)
{
	v->a[45540] = 1;
	v->a[45541] = sym_terminator;
	v->a[45542] = actions(850);
	v->a[45543] = 2;
	v->a[45544] = anon_sym_LT_LT;
	v->a[45545] = anon_sym_LT_LT_DASH;
	v->a[45546] = actions(858);
	v->a[45547] = 2;
	v->a[45548] = anon_sym_SEMI_SEMI;
	v->a[45549] = anon_sym_SEMI;
	v->a[45550] = actions(860);
	v->a[45551] = 2;
	v->a[45552] = anon_sym_AMP_AMP;
	v->a[45553] = anon_sym_PIPE_PIPE;
	v->a[45554] = state(918);
	v->a[45555] = 3;
	v->a[45556] = sym_file_redirect;
	v->a[45557] = sym_heredoc_redirect;
	v->a[45558] = aux_sym_redirected_statement_repeat1;
	v->a[45559] = actions(1597);
	small_parse_table_2278(v);
}

void	small_parse_table_2278(t_small_parse_table_array *v)
{
	v->a[45560] = 7;
	v->a[45561] = anon_sym_LT;
	v->a[45562] = anon_sym_GT;
	v->a[45563] = anon_sym_GT_GT;
	v->a[45564] = anon_sym_LT_AMP;
	v->a[45565] = anon_sym_GT_AMP;
	v->a[45566] = anon_sym_GT_PIPE;
	v->a[45567] = anon_sym_LT_GT;
	v->a[45568] = 10;
	v->a[45569] = actions(3);
	v->a[45570] = 1;
	v->a[45571] = sym_comment;
	v->a[45572] = actions(746);
	v->a[45573] = 1;
	v->a[45574] = anon_sym_PIPE;
	v->a[45575] = actions(842);
	v->a[45576] = 1;
	v->a[45577] = anon_sym_RPAREN;
	v->a[45578] = actions(1591);
	v->a[45579] = 1;
	small_parse_table_2279(v);
}

void	small_parse_table_2279(t_small_parse_table_array *v)
{
	v->a[45580] = aux_sym_heredoc_redirect_token1;
	v->a[45581] = state(524);
	v->a[45582] = 1;
	v->a[45583] = sym_terminator;
	v->a[45584] = actions(850);
	v->a[45585] = 2;
	v->a[45586] = anon_sym_LT_LT;
	v->a[45587] = anon_sym_LT_LT_DASH;
	v->a[45588] = actions(858);
	v->a[45589] = 2;
	v->a[45590] = anon_sym_SEMI_SEMI;
	v->a[45591] = anon_sym_SEMI;
	v->a[45592] = actions(860);
	v->a[45593] = 2;
	v->a[45594] = anon_sym_AMP_AMP;
	v->a[45595] = anon_sym_PIPE_PIPE;
	v->a[45596] = state(918);
	v->a[45597] = 3;
	v->a[45598] = sym_file_redirect;
	v->a[45599] = sym_heredoc_redirect;
	small_parse_table_2280(v);
}

/* EOF small_parse_table_455.c */
