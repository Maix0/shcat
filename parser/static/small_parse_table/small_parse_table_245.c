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
	v->a[24500] = anon_sym_PIPE_PIPE;
	v->a[24501] = anon_sym_LT;
	v->a[24502] = anon_sym_GT;
	v->a[24503] = anon_sym_GT_GT;
	v->a[24504] = anon_sym_LT_AMP;
	v->a[24505] = anon_sym_GT_AMP;
	v->a[24506] = anon_sym_GT_PIPE;
	v->a[24507] = anon_sym_LT_GT;
	v->a[24508] = anon_sym_LT_LT;
	v->a[24509] = anon_sym_LT_LT_DASH;
	v->a[24510] = aux_sym_heredoc_redirect_token1;
	v->a[24511] = anon_sym_SEMI;
	v->a[24512] = 10;
	v->a[24513] = actions(3);
	v->a[24514] = 1;
	v->a[24515] = sym_comment;
	v->a[24516] = actions(746);
	v->a[24517] = 1;
	v->a[24518] = anon_sym_PIPE;
	v->a[24519] = actions(900);
	small_parse_table_1226(v);
}

void	small_parse_table_1226(t_small_parse_table_array *v)
{
	v->a[24520] = 1;
	v->a[24521] = sym_variable_name;
	v->a[24522] = state(562);
	v->a[24523] = 1;
	v->a[24524] = sym_terminator;
	v->a[24525] = actions(850);
	v->a[24526] = 2;
	v->a[24527] = anon_sym_LT_LT;
	v->a[24528] = anon_sym_LT_LT_DASH;
	v->a[24529] = actions(898);
	v->a[24530] = 2;
	v->a[24531] = anon_sym_AMP_AMP;
	v->a[24532] = anon_sym_PIPE_PIPE;
	v->a[24533] = state(1002);
	v->a[24534] = 2;
	v->a[24535] = sym_variable_assignment;
	v->a[24536] = aux_sym__variable_assignments_repeat1;
	v->a[24537] = actions(956);
	v->a[24538] = 3;
	v->a[24539] = anon_sym_SEMI_SEMI;
	small_parse_table_1227(v);
}

void	small_parse_table_1227(t_small_parse_table_array *v)
{
	v->a[24540] = aux_sym_heredoc_redirect_token1;
	v->a[24541] = anon_sym_SEMI;
	v->a[24542] = state(984);
	v->a[24543] = 3;
	v->a[24544] = sym_file_redirect;
	v->a[24545] = sym_heredoc_redirect;
	v->a[24546] = aux_sym_redirected_statement_repeat1;
	v->a[24547] = actions(742);
	v->a[24548] = 16;
	v->a[24549] = anon_sym_LT;
	v->a[24550] = anon_sym_GT;
	v->a[24551] = anon_sym_GT_GT;
	v->a[24552] = anon_sym_LT_AMP;
	v->a[24553] = anon_sym_GT_AMP;
	v->a[24554] = anon_sym_GT_PIPE;
	v->a[24555] = anon_sym_LT_GT;
	v->a[24556] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24557] = anon_sym_DOLLAR;
	v->a[24558] = anon_sym_DQUOTE;
	v->a[24559] = sym_raw_string;
	small_parse_table_1228(v);
}

void	small_parse_table_1228(t_small_parse_table_array *v)
{
	v->a[24560] = sym_number;
	v->a[24561] = anon_sym_DOLLAR_LBRACE;
	v->a[24562] = anon_sym_DOLLAR_LPAREN;
	v->a[24563] = anon_sym_BQUOTE;
	v->a[24564] = sym_word;
	v->a[24565] = 7;
	v->a[24566] = actions(3);
	v->a[24567] = 1;
	v->a[24568] = sym_comment;
	v->a[24569] = actions(746);
	v->a[24570] = 1;
	v->a[24571] = anon_sym_PIPE;
	v->a[24572] = actions(754);
	v->a[24573] = 1;
	v->a[24574] = sym_variable_name;
	v->a[24575] = state(929);
	v->a[24576] = 2;
	v->a[24577] = sym_variable_assignment;
	v->a[24578] = aux_sym__variable_assignments_repeat1;
	v->a[24579] = state(931);
	small_parse_table_1229(v);
}

void	small_parse_table_1229(t_small_parse_table_array *v)
{
	v->a[24580] = 3;
	v->a[24581] = sym_file_redirect;
	v->a[24582] = sym_heredoc_redirect;
	v->a[24583] = aux_sym_redirected_statement_repeat1;
	v->a[24584] = actions(916);
	v->a[24585] = 8;
	v->a[24586] = anon_sym_esac;
	v->a[24587] = anon_sym_SEMI_SEMI;
	v->a[24588] = anon_sym_AMP_AMP;
	v->a[24589] = anon_sym_PIPE_PIPE;
	v->a[24590] = anon_sym_LT_LT;
	v->a[24591] = anon_sym_LT_LT_DASH;
	v->a[24592] = aux_sym_heredoc_redirect_token1;
	v->a[24593] = anon_sym_SEMI;
	v->a[24594] = actions(742);
	v->a[24595] = 16;
	v->a[24596] = anon_sym_LT;
	v->a[24597] = anon_sym_GT;
	v->a[24598] = anon_sym_GT_GT;
	v->a[24599] = anon_sym_LT_AMP;
	small_parse_table_1230(v);
}

/* EOF small_parse_table_245.c */
