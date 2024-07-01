/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_245.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1225(t_small_parse_table_array *v)
{
	v->a[24500] = sym_arithmetic_expansion;
	v->a[24501] = sym_string;
	v->a[24502] = sym_simple_expansion;
	v->a[24503] = sym_expansion;
	v->a[24504] = sym_command_substitution;
	v->a[24505] = actions(554);
	v->a[24506] = 16;
	v->a[24507] = anon_sym_PIPE;
	v->a[24508] = anon_sym_SEMI_SEMI;
	v->a[24509] = anon_sym_AMP_AMP;
	v->a[24510] = anon_sym_PIPE_PIPE;
	v->a[24511] = anon_sym_LT;
	v->a[24512] = anon_sym_GT;
	v->a[24513] = anon_sym_GT_GT;
	v->a[24514] = anon_sym_LT_AMP;
	v->a[24515] = anon_sym_GT_AMP;
	v->a[24516] = anon_sym_GT_PIPE;
	v->a[24517] = anon_sym_LT_GT;
	v->a[24518] = anon_sym_LT_LT;
	v->a[24519] = anon_sym_LT_LT_DASH;
	small_parse_table_1226(v);
}

void	small_parse_table_1226(t_small_parse_table_array *v)
{
	v->a[24520] = aux_sym_heredoc_redirect_token1;
	v->a[24521] = anon_sym_AMP;
	v->a[24522] = anon_sym_SEMI;
	v->a[24523] = 12;
	v->a[24524] = actions(3);
	v->a[24525] = 1;
	v->a[24526] = sym_comment;
	v->a[24527] = actions(736);
	v->a[24528] = 1;
	v->a[24529] = anon_sym_PIPE;
	v->a[24530] = actions(738);
	v->a[24531] = 1;
	v->a[24532] = anon_sym_SEMI_SEMI;
	v->a[24533] = actions(746);
	v->a[24534] = 1;
	v->a[24535] = sym_file_descriptor;
	v->a[24536] = actions(957);
	v->a[24537] = 1;
	v->a[24538] = sym_variable_name;
	v->a[24539] = state(631);
	small_parse_table_1227(v);
}

void	small_parse_table_1227(t_small_parse_table_array *v)
{
	v->a[24540] = 1;
	v->a[24541] = sym_terminator;
	v->a[24542] = actions(744);
	v->a[24543] = 2;
	v->a[24544] = anon_sym_LT_LT;
	v->a[24545] = anon_sym_LT_LT_DASH;
	v->a[24546] = actions(955);
	v->a[24547] = 2;
	v->a[24548] = anon_sym_AMP_AMP;
	v->a[24549] = anon_sym_PIPE_PIPE;
	v->a[24550] = state(1134);
	v->a[24551] = 2;
	v->a[24552] = sym_variable_assignment;
	v->a[24553] = aux_sym__variable_assignments_repeat1;
	v->a[24554] = actions(740);
	v->a[24555] = 3;
	v->a[24556] = aux_sym_heredoc_redirect_token1;
	v->a[24557] = anon_sym_AMP;
	v->a[24558] = anon_sym_SEMI;
	v->a[24559] = state(1194);
	small_parse_table_1228(v);
}

void	small_parse_table_1228(t_small_parse_table_array *v)
{
	v->a[24560] = 3;
	v->a[24561] = sym_file_redirect;
	v->a[24562] = sym_heredoc_redirect;
	v->a[24563] = aux_sym_redirected_statement_repeat1;
	v->a[24564] = actions(734);
	v->a[24565] = 16;
	v->a[24566] = anon_sym_LT;
	v->a[24567] = anon_sym_GT;
	v->a[24568] = anon_sym_GT_GT;
	v->a[24569] = anon_sym_LT_AMP;
	v->a[24570] = anon_sym_GT_AMP;
	v->a[24571] = anon_sym_GT_PIPE;
	v->a[24572] = anon_sym_LT_GT;
	v->a[24573] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24574] = anon_sym_DOLLAR;
	v->a[24575] = anon_sym_DQUOTE;
	v->a[24576] = sym_raw_string;
	v->a[24577] = sym_number;
	v->a[24578] = anon_sym_DOLLAR_LBRACE;
	v->a[24579] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1229(v);
}

void	small_parse_table_1229(t_small_parse_table_array *v)
{
	v->a[24580] = anon_sym_BQUOTE;
	v->a[24581] = sym_word;
	v->a[24582] = 8;
	v->a[24583] = actions(3);
	v->a[24584] = 1;
	v->a[24585] = sym_comment;
	v->a[24586] = actions(736);
	v->a[24587] = 1;
	v->a[24588] = anon_sym_PIPE;
	v->a[24589] = actions(746);
	v->a[24590] = 1;
	v->a[24591] = sym_file_descriptor;
	v->a[24592] = actions(761);
	v->a[24593] = 1;
	v->a[24594] = sym_variable_name;
	v->a[24595] = state(1040);
	v->a[24596] = 2;
	v->a[24597] = sym_variable_assignment;
	v->a[24598] = aux_sym__variable_assignments_repeat1;
	v->a[24599] = state(1094);
	small_parse_table_1230(v);
}

/* EOF small_parse_table_245.c */
