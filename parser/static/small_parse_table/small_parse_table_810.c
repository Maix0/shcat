/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_810.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4050(t_small_parse_table_array *v)
{
	v->a[81000] = sym_else_clause;
	v->a[81001] = state(1847);
	v->a[81002] = 2;
	v->a[81003] = sym_elif_clause;
	v->a[81004] = aux_sym_if_statement_repeat1;
	v->a[81005] = 3;
	v->a[81006] = actions(680);
	v->a[81007] = 1;
	v->a[81008] = sym_comment;
	v->a[81009] = actions(707);
	v->a[81010] = 1;
	v->a[81011] = anon_sym_DOLLAR;
	v->a[81012] = actions(709);
	v->a[81013] = 5;
	v->a[81014] = sym_heredoc_content;
	v->a[81015] = sym_heredoc_end;
	v->a[81016] = anon_sym_DOLLAR_LBRACE;
	v->a[81017] = anon_sym_DOLLAR_LPAREN;
	v->a[81018] = anon_sym_BQUOTE;
	v->a[81019] = 3;
	small_parse_table_4051(v);
}

void	small_parse_table_4051(t_small_parse_table_array *v)
{
	v->a[81020] = actions(680);
	v->a[81021] = 1;
	v->a[81022] = sym_comment;
	v->a[81023] = actions(707);
	v->a[81024] = 1;
	v->a[81025] = anon_sym_DOLLAR;
	v->a[81026] = actions(709);
	v->a[81027] = 5;
	v->a[81028] = sym_heredoc_content;
	v->a[81029] = sym_heredoc_end;
	v->a[81030] = anon_sym_DOLLAR_LBRACE;
	v->a[81031] = anon_sym_DOLLAR_LPAREN;
	v->a[81032] = anon_sym_BQUOTE;
	v->a[81033] = 5;
	v->a[81034] = actions(680);
	v->a[81035] = 1;
	v->a[81036] = sym_comment;
	v->a[81037] = actions(3634);
	v->a[81038] = 1;
	v->a[81039] = sym_simple_heredoc_body;
	small_parse_table_4052(v);
}

void	small_parse_table_4052(t_small_parse_table_array *v)
{
	v->a[81040] = actions(3636);
	v->a[81041] = 1;
	v->a[81042] = sym__heredoc_body_beginning;
	v->a[81043] = state(2017);
	v->a[81044] = 1;
	v->a[81045] = sym_heredoc_body;
	v->a[81046] = state(1229);
	v->a[81047] = 2;
	v->a[81048] = sym__heredoc_body;
	v->a[81049] = sym__simple_heredoc_body;
	v->a[81050] = 6;
	v->a[81051] = actions(680);
	v->a[81052] = 1;
	v->a[81053] = sym_comment;
	v->a[81054] = actions(3636);
	v->a[81055] = 1;
	v->a[81056] = sym__heredoc_body_beginning;
	v->a[81057] = actions(3638);
	v->a[81058] = 1;
	v->a[81059] = sym_simple_heredoc_body;
	small_parse_table_4053(v);
}

void	small_parse_table_4053(t_small_parse_table_array *v)
{
	v->a[81060] = state(1535);
	v->a[81061] = 1;
	v->a[81062] = sym__simple_heredoc_body;
	v->a[81063] = state(1536);
	v->a[81064] = 1;
	v->a[81065] = sym__heredoc_body;
	v->a[81066] = state(2018);
	v->a[81067] = 1;
	v->a[81068] = sym_heredoc_body;
	v->a[81069] = 2;
	v->a[81070] = actions(680);
	v->a[81071] = 1;
	v->a[81072] = sym_comment;
	v->a[81073] = actions(796);
	v->a[81074] = 5;
	v->a[81075] = sym__concat;
	v->a[81076] = anon_sym_PIPE;
	v->a[81077] = anon_sym_RPAREN;
	v->a[81078] = anon_sym_RBRACE;
	v->a[81079] = aux_sym_concatenation_token1;
	small_parse_table_4054(v);
}

void	small_parse_table_4054(t_small_parse_table_array *v)
{
	v->a[81080] = 5;
	v->a[81081] = actions(680);
	v->a[81082] = 1;
	v->a[81083] = sym_comment;
	v->a[81084] = actions(3634);
	v->a[81085] = 1;
	v->a[81086] = sym_simple_heredoc_body;
	v->a[81087] = actions(3636);
	v->a[81088] = 1;
	v->a[81089] = sym__heredoc_body_beginning;
	v->a[81090] = state(2017);
	v->a[81091] = 1;
	v->a[81092] = sym_heredoc_body;
	v->a[81093] = state(1231);
	v->a[81094] = 2;
	v->a[81095] = sym__heredoc_body;
	v->a[81096] = sym__simple_heredoc_body;
	v->a[81097] = 2;
	v->a[81098] = actions(680);
	v->a[81099] = 1;
	small_parse_table_4055(v);
}

/* EOF small_parse_table_810.c */
