/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_535.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2675(t_small_parse_table_array *v)
{
	v->a[53500] = 1;
	v->a[53501] = anon_sym_BQUOTE;
	v->a[53502] = actions(2694);
	v->a[53503] = 1;
	v->a[53504] = sym_heredoc_content;
	v->a[53505] = actions(2696);
	v->a[53506] = 1;
	v->a[53507] = sym_heredoc_end;
	v->a[53508] = state(1317);
	v->a[53509] = 4;
	v->a[53510] = sym_simple_expansion;
	v->a[53511] = sym_expansion;
	v->a[53512] = sym_command_substitution;
	v->a[53513] = aux_sym_heredoc_body_repeat1;
	v->a[53514] = 6;
	v->a[53515] = actions(3);
	v->a[53516] = 1;
	v->a[53517] = sym_comment;
	v->a[53518] = actions(597);
	v->a[53519] = 1;
	small_parse_table_2676(v);
}

void	small_parse_table_2676(t_small_parse_table_array *v)
{
	v->a[53520] = anon_sym_LT_LT;
	v->a[53521] = actions(2637);
	v->a[53522] = 1;
	v->a[53523] = aux_sym_heredoc_redirect_token1;
	v->a[53524] = actions(1033);
	v->a[53525] = 2;
	v->a[53526] = anon_sym_AMP_AMP;
	v->a[53527] = anon_sym_PIPE_PIPE;
	v->a[53528] = actions(2633);
	v->a[53529] = 3;
	v->a[53530] = anon_sym_LT;
	v->a[53531] = anon_sym_GT;
	v->a[53532] = anon_sym_GT_GT;
	v->a[53533] = state(1225);
	v->a[53534] = 3;
	v->a[53535] = sym_file_redirect;
	v->a[53536] = sym_heredoc_redirect;
	v->a[53537] = aux_sym_redirected_statement_repeat1;
	v->a[53538] = 3;
	v->a[53539] = actions(1436);
	small_parse_table_2677(v);
}

void	small_parse_table_2677(t_small_parse_table_array *v)
{
	v->a[53540] = 1;
	v->a[53541] = sym_comment;
	v->a[53542] = actions(1058);
	v->a[53543] = 3;
	v->a[53544] = anon_sym_PIPE;
	v->a[53545] = anon_sym_LT;
	v->a[53546] = anon_sym_GT;
	v->a[53547] = actions(1060);
	v->a[53548] = 7;
	v->a[53549] = sym__concat;
	v->a[53550] = sym_variable_name;
	v->a[53551] = anon_sym_AMP_AMP;
	v->a[53552] = anon_sym_PIPE_PIPE;
	v->a[53553] = anon_sym_GT_GT;
	v->a[53554] = anon_sym_LT_LT;
	v->a[53555] = aux_sym_concatenation_token1;
	v->a[53556] = 3;
	v->a[53557] = actions(1436);
	v->a[53558] = 1;
	v->a[53559] = sym_comment;
	small_parse_table_2678(v);
}

void	small_parse_table_2678(t_small_parse_table_array *v)
{
	v->a[53560] = actions(1124);
	v->a[53561] = 2;
	v->a[53562] = anon_sym_PLUS;
	v->a[53563] = anon_sym_DASH;
	v->a[53564] = actions(1126);
	v->a[53565] = 8;
	v->a[53566] = anon_sym_RPAREN_RPAREN;
	v->a[53567] = anon_sym_STAR;
	v->a[53568] = anon_sym_SLASH;
	v->a[53569] = anon_sym_PERCENT;
	v->a[53570] = anon_sym_QMARK;
	v->a[53571] = anon_sym_COLON;
	v->a[53572] = anon_sym_PLUS_PLUS;
	v->a[53573] = anon_sym_DASH_DASH;
	v->a[53574] = 5;
	v->a[53575] = actions(580);
	v->a[53576] = 1;
	v->a[53577] = anon_sym_PIPE;
	v->a[53578] = actions(1436);
	v->a[53579] = 1;
	small_parse_table_2679(v);
}

void	small_parse_table_2679(t_small_parse_table_array *v)
{
	v->a[53580] = sym_comment;
	v->a[53581] = actions(816);
	v->a[53582] = 2;
	v->a[53583] = anon_sym_LT;
	v->a[53584] = anon_sym_GT;
	v->a[53585] = state(1319);
	v->a[53586] = 3;
	v->a[53587] = sym_file_redirect;
	v->a[53588] = sym_heredoc_redirect;
	v->a[53589] = aux_sym_redirected_statement_repeat1;
	v->a[53590] = actions(827);
	v->a[53591] = 4;
	v->a[53592] = anon_sym_AMP_AMP;
	v->a[53593] = anon_sym_PIPE_PIPE;
	v->a[53594] = anon_sym_GT_GT;
	v->a[53595] = anon_sym_LT_LT;
	v->a[53596] = 3;
	v->a[53597] = actions(1436);
	v->a[53598] = 1;
	v->a[53599] = sym_comment;
	small_parse_table_2680(v);
}

/* EOF small_parse_table_535.c */
