/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_915.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4575(t_small_parse_table_array *v)
{
	v->a[91500] = sym__heredoc_body_beginning;
	v->a[91501] = actions(4020);
	v->a[91502] = 1;
	v->a[91503] = sym_simple_heredoc_body;
	v->a[91504] = state(2221);
	v->a[91505] = 1;
	v->a[91506] = sym_heredoc_body;
	v->a[91507] = state(1718);
	v->a[91508] = 2;
	v->a[91509] = sym__heredoc_body;
	v->a[91510] = sym__simple_heredoc_body;
	v->a[91511] = 5;
	v->a[91512] = actions(870);
	v->a[91513] = 1;
	v->a[91514] = sym_comment;
	v->a[91515] = actions(3988);
	v->a[91516] = 1;
	v->a[91517] = aux_sym_concatenation_token1;
	v->a[91518] = actions(4027);
	v->a[91519] = 1;
	small_parse_table_4576(v);
}

void	small_parse_table_4576(t_small_parse_table_array *v)
{
	v->a[91520] = sym__concat;
	v->a[91521] = state(2027);
	v->a[91522] = 1;
	v->a[91523] = aux_sym_concatenation_repeat1;
	v->a[91524] = actions(1085);
	v->a[91525] = 2;
	v->a[91526] = anon_sym_PIPE;
	v->a[91527] = anon_sym_RPAREN;
	v->a[91528] = 6;
	v->a[91529] = actions(870);
	v->a[91530] = 1;
	v->a[91531] = sym_comment;
	v->a[91532] = actions(4016);
	v->a[91533] = 1;
	v->a[91534] = sym_simple_heredoc_body;
	v->a[91535] = actions(4018);
	v->a[91536] = 1;
	v->a[91537] = sym__heredoc_body_beginning;
	v->a[91538] = state(1380);
	v->a[91539] = 1;
	small_parse_table_4577(v);
}

void	small_parse_table_4577(t_small_parse_table_array *v)
{
	v->a[91540] = sym__heredoc_body;
	v->a[91541] = state(1391);
	v->a[91542] = 1;
	v->a[91543] = sym__simple_heredoc_body;
	v->a[91544] = state(2220);
	v->a[91545] = 1;
	v->a[91546] = sym_heredoc_body;
	v->a[91547] = 4;
	v->a[91548] = actions(870);
	v->a[91549] = 1;
	v->a[91550] = sym_comment;
	v->a[91551] = actions(4031);
	v->a[91552] = 1;
	v->a[91553] = anon_sym_elif;
	v->a[91554] = actions(4029);
	v->a[91555] = 2;
	v->a[91556] = anon_sym_fi;
	v->a[91557] = anon_sym_else;
	v->a[91558] = state(2052);
	v->a[91559] = 2;
	small_parse_table_4578(v);
}

void	small_parse_table_4578(t_small_parse_table_array *v)
{
	v->a[91560] = sym_elif_clause;
	v->a[91561] = aux_sym_if_statement_repeat1;
	v->a[91562] = 6;
	v->a[91563] = actions(870);
	v->a[91564] = 1;
	v->a[91565] = sym_comment;
	v->a[91566] = actions(4016);
	v->a[91567] = 1;
	v->a[91568] = sym_simple_heredoc_body;
	v->a[91569] = actions(4018);
	v->a[91570] = 1;
	v->a[91571] = sym__heredoc_body_beginning;
	v->a[91572] = state(1341);
	v->a[91573] = 1;
	v->a[91574] = sym__simple_heredoc_body;
	v->a[91575] = state(1388);
	v->a[91576] = 1;
	v->a[91577] = sym__heredoc_body;
	v->a[91578] = state(2220);
	v->a[91579] = 1;
	small_parse_table_4579(v);
}

void	small_parse_table_4579(t_small_parse_table_array *v)
{
	v->a[91580] = sym_heredoc_body;
	v->a[91581] = 2;
	v->a[91582] = actions(870);
	v->a[91583] = 1;
	v->a[91584] = sym_comment;
	v->a[91585] = actions(1027);
	v->a[91586] = 5;
	v->a[91587] = sym__concat;
	v->a[91588] = anon_sym_PIPE;
	v->a[91589] = anon_sym_RPAREN;
	v->a[91590] = anon_sym_RBRACE;
	v->a[91591] = aux_sym_concatenation_token1;
	v->a[91592] = 6;
	v->a[91593] = actions(870);
	v->a[91594] = 1;
	v->a[91595] = sym_comment;
	v->a[91596] = actions(4016);
	v->a[91597] = 1;
	v->a[91598] = sym_simple_heredoc_body;
	v->a[91599] = actions(4018);
	small_parse_table_4580(v);
}

/* EOF small_parse_table_915.c */
