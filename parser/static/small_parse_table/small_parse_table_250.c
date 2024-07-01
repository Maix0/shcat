/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_250.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1250(t_small_parse_table_array *v)
{
	v->a[25000] = anon_sym_STAR_EQ;
	v->a[25001] = anon_sym_SLASH_EQ;
	v->a[25002] = anon_sym_PERCENT_EQ;
	v->a[25003] = anon_sym_LT_LT_EQ;
	v->a[25004] = anon_sym_GT_GT_EQ;
	v->a[25005] = anon_sym_AMP_EQ;
	v->a[25006] = anon_sym_CARET_EQ;
	v->a[25007] = anon_sym_PIPE_EQ;
	v->a[25008] = anon_sym_EQ_EQ;
	v->a[25009] = anon_sym_BANG_EQ;
	v->a[25010] = anon_sym_LT_EQ;
	v->a[25011] = anon_sym_GT_EQ;
	v->a[25012] = anon_sym_QMARK;
	v->a[25013] = anon_sym_COLON;
	v->a[25014] = 4;
	v->a[25015] = actions(870);
	v->a[25016] = 1;
	v->a[25017] = sym_comment;
	v->a[25018] = actions(868);
	v->a[25019] = 2;
	small_parse_table_1251(v);
}

void	small_parse_table_1251(t_small_parse_table_array *v)
{
	v->a[25020] = anon_sym_PLUS_PLUS2;
	v->a[25021] = anon_sym_DASH_DASH2;
	v->a[25022] = actions(959);
	v->a[25023] = 13;
	v->a[25024] = anon_sym_PIPE;
	v->a[25025] = anon_sym_EQ;
	v->a[25026] = anon_sym_LT;
	v->a[25027] = anon_sym_GT;
	v->a[25028] = anon_sym_GT_GT;
	v->a[25029] = anon_sym_LT_LT;
	v->a[25030] = anon_sym_CARET;
	v->a[25031] = anon_sym_AMP;
	v->a[25032] = anon_sym_PLUS;
	v->a[25033] = anon_sym_DASH;
	v->a[25034] = anon_sym_STAR;
	v->a[25035] = anon_sym_SLASH;
	v->a[25036] = anon_sym_PERCENT;
	v->a[25037] = actions(961);
	v->a[25038] = 19;
	v->a[25039] = anon_sym_AMP_AMP;
	small_parse_table_1252(v);
}

void	small_parse_table_1252(t_small_parse_table_array *v)
{
	v->a[25040] = anon_sym_PIPE_PIPE;
	v->a[25041] = anon_sym_RPAREN_RPAREN;
	v->a[25042] = anon_sym_PLUS_EQ;
	v->a[25043] = anon_sym_DASH_EQ;
	v->a[25044] = anon_sym_STAR_EQ;
	v->a[25045] = anon_sym_SLASH_EQ;
	v->a[25046] = anon_sym_PERCENT_EQ;
	v->a[25047] = anon_sym_LT_LT_EQ;
	v->a[25048] = anon_sym_GT_GT_EQ;
	v->a[25049] = anon_sym_AMP_EQ;
	v->a[25050] = anon_sym_CARET_EQ;
	v->a[25051] = anon_sym_PIPE_EQ;
	v->a[25052] = anon_sym_EQ_EQ;
	v->a[25053] = anon_sym_BANG_EQ;
	v->a[25054] = anon_sym_LT_EQ;
	v->a[25055] = anon_sym_GT_EQ;
	v->a[25056] = anon_sym_QMARK;
	v->a[25057] = anon_sym_COLON;
	v->a[25058] = 12;
	v->a[25059] = actions(3);
	small_parse_table_1253(v);
}

void	small_parse_table_1253(t_small_parse_table_array *v)
{
	v->a[25060] = 1;
	v->a[25061] = sym_comment;
	v->a[25062] = actions(682);
	v->a[25063] = 1;
	v->a[25064] = anon_sym_PIPE;
	v->a[25065] = actions(690);
	v->a[25066] = 1;
	v->a[25067] = sym_file_descriptor;
	v->a[25068] = actions(695);
	v->a[25069] = 1;
	v->a[25070] = anon_sym_BQUOTE;
	v->a[25071] = actions(965);
	v->a[25072] = 1;
	v->a[25073] = sym_variable_name;
	v->a[25074] = state(812);
	v->a[25075] = 1;
	v->a[25076] = sym_terminator;
	v->a[25077] = actions(754);
	v->a[25078] = 2;
	v->a[25079] = anon_sym_LT_LT;
	small_parse_table_1254(v);
}

void	small_parse_table_1254(t_small_parse_table_array *v)
{
	v->a[25080] = anon_sym_LT_LT_DASH;
	v->a[25081] = actions(963);
	v->a[25082] = 2;
	v->a[25083] = anon_sym_AMP_AMP;
	v->a[25084] = anon_sym_PIPE_PIPE;
	v->a[25085] = state(1181);
	v->a[25086] = 2;
	v->a[25087] = sym_variable_assignment;
	v->a[25088] = aux_sym__variable_assignments_repeat1;
	v->a[25089] = state(1165);
	v->a[25090] = 3;
	v->a[25091] = sym_file_redirect;
	v->a[25092] = sym_heredoc_redirect;
	v->a[25093] = aux_sym_redirected_statement_repeat1;
	v->a[25094] = actions(750);
	v->a[25095] = 4;
	v->a[25096] = anon_sym_SEMI_SEMI;
	v->a[25097] = aux_sym_heredoc_redirect_token1;
	v->a[25098] = anon_sym_AMP;
	v->a[25099] = anon_sym_SEMI;
	small_parse_table_1255(v);
}

/* EOF small_parse_table_250.c */
