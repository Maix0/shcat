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
	v->a[24500] = 1;
	v->a[24501] = sym_file_descriptor;
	v->a[24502] = actions(926);
	v->a[24503] = 1;
	v->a[24504] = sym_variable_name;
	v->a[24505] = state(783);
	v->a[24506] = 1;
	v->a[24507] = sym_terminator;
	v->a[24508] = actions(754);
	v->a[24509] = 2;
	v->a[24510] = anon_sym_LT_LT;
	v->a[24511] = anon_sym_LT_LT_DASH;
	v->a[24512] = actions(924);
	v->a[24513] = 2;
	v->a[24514] = anon_sym_AMP_AMP;
	v->a[24515] = anon_sym_PIPE_PIPE;
	v->a[24516] = state(1298);
	v->a[24517] = 2;
	v->a[24518] = sym_variable_assignment;
	v->a[24519] = aux_sym__variable_assignments_repeat1;
	small_parse_table_1226(v);
}

void	small_parse_table_1226(t_small_parse_table_array *v)
{
	v->a[24520] = state(1268);
	v->a[24521] = 3;
	v->a[24522] = sym_file_redirect;
	v->a[24523] = sym_heredoc_redirect;
	v->a[24524] = aux_sym_redirected_statement_repeat1;
	v->a[24525] = actions(922);
	v->a[24526] = 4;
	v->a[24527] = anon_sym_SEMI_SEMI;
	v->a[24528] = aux_sym_heredoc_redirect_token1;
	v->a[24529] = anon_sym_AMP;
	v->a[24530] = anon_sym_SEMI;
	v->a[24531] = actions(678);
	v->a[24532] = 17;
	v->a[24533] = anon_sym_LT;
	v->a[24534] = anon_sym_GT;
	v->a[24535] = anon_sym_GT_GT;
	v->a[24536] = anon_sym_LT_AMP;
	v->a[24537] = anon_sym_GT_AMP;
	v->a[24538] = anon_sym_GT_PIPE;
	v->a[24539] = anon_sym_LT_AMP_DASH;
	small_parse_table_1227(v);
}

void	small_parse_table_1227(t_small_parse_table_array *v)
{
	v->a[24540] = anon_sym_GT_AMP_DASH;
	v->a[24541] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24542] = anon_sym_DOLLAR;
	v->a[24543] = anon_sym_DQUOTE;
	v->a[24544] = sym_raw_string;
	v->a[24545] = sym_number;
	v->a[24546] = anon_sym_DOLLAR_LBRACE;
	v->a[24547] = anon_sym_DOLLAR_LPAREN;
	v->a[24548] = anon_sym_BQUOTE;
	v->a[24549] = sym_word;
	v->a[24550] = 6;
	v->a[24551] = actions(3);
	v->a[24552] = 1;
	v->a[24553] = sym_comment;
	v->a[24554] = actions(379);
	v->a[24555] = 1;
	v->a[24556] = sym_file_descriptor;
	v->a[24557] = actions(933);
	v->a[24558] = 1;
	v->a[24559] = sym_variable_name;
	small_parse_table_1228(v);
}

void	small_parse_table_1228(t_small_parse_table_array *v)
{
	v->a[24560] = actions(931);
	v->a[24561] = 2;
	v->a[24562] = aux_sym__simple_variable_name_token1;
	v->a[24563] = aux_sym__multiline_variable_name_token1;
	v->a[24564] = actions(929);
	v->a[24565] = 9;
	v->a[24566] = anon_sym_BANG;
	v->a[24567] = anon_sym_DASH;
	v->a[24568] = anon_sym_STAR;
	v->a[24569] = anon_sym_QMARK;
	v->a[24570] = anon_sym_DOLLAR;
	v->a[24571] = anon_sym_POUND;
	v->a[24572] = anon_sym_AT;
	v->a[24573] = anon_sym_0;
	v->a[24574] = anon_sym__;
	v->a[24575] = actions(381);
	v->a[24576] = 21;
	v->a[24577] = anon_sym_PIPE;
	v->a[24578] = anon_sym_AMP_AMP;
	v->a[24579] = anon_sym_PIPE_PIPE;
	small_parse_table_1229(v);
}

void	small_parse_table_1229(t_small_parse_table_array *v)
{
	v->a[24580] = anon_sym_LT;
	v->a[24581] = anon_sym_GT;
	v->a[24582] = anon_sym_GT_GT;
	v->a[24583] = anon_sym_LT_AMP;
	v->a[24584] = anon_sym_GT_AMP;
	v->a[24585] = anon_sym_GT_PIPE;
	v->a[24586] = anon_sym_LT_AMP_DASH;
	v->a[24587] = anon_sym_GT_AMP_DASH;
	v->a[24588] = anon_sym_LT_LT;
	v->a[24589] = anon_sym_LT_LT_DASH;
	v->a[24590] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24591] = anon_sym_DQUOTE;
	v->a[24592] = sym_raw_string;
	v->a[24593] = sym_number;
	v->a[24594] = anon_sym_DOLLAR_LBRACE;
	v->a[24595] = anon_sym_DOLLAR_LPAREN;
	v->a[24596] = anon_sym_BQUOTE;
	v->a[24597] = sym_word;
	v->a[24598] = 8;
	v->a[24599] = actions(3);
	small_parse_table_1230(v);
}

/* EOF small_parse_table_245.c */
