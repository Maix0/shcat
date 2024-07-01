/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_260.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1300(t_small_parse_table_array *v)
{
	v->a[26000] = anon_sym_STAR_EQ;
	v->a[26001] = anon_sym_SLASH_EQ;
	v->a[26002] = anon_sym_PERCENT_EQ;
	v->a[26003] = anon_sym_LT_LT_EQ;
	v->a[26004] = anon_sym_GT_GT_EQ;
	v->a[26005] = anon_sym_AMP_EQ;
	v->a[26006] = anon_sym_CARET_EQ;
	v->a[26007] = anon_sym_PIPE_EQ;
	v->a[26008] = anon_sym_EQ_EQ;
	v->a[26009] = anon_sym_BANG_EQ;
	v->a[26010] = anon_sym_LT_EQ;
	v->a[26011] = anon_sym_GT_EQ;
	v->a[26012] = anon_sym_QMARK;
	v->a[26013] = anon_sym_COLON;
	v->a[26014] = anon_sym_PLUS_PLUS2;
	v->a[26015] = anon_sym_DASH_DASH2;
	v->a[26016] = 20;
	v->a[26017] = actions(3);
	v->a[26018] = 1;
	v->a[26019] = sym_comment;
	small_parse_table_1301(v);
}

void	small_parse_table_1301(t_small_parse_table_array *v)
{
	v->a[26020] = actions(894);
	v->a[26021] = 1;
	v->a[26022] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26023] = actions(896);
	v->a[26024] = 1;
	v->a[26025] = anon_sym_DOLLAR;
	v->a[26026] = actions(898);
	v->a[26027] = 1;
	v->a[26028] = anon_sym_DQUOTE;
	v->a[26029] = actions(900);
	v->a[26030] = 1;
	v->a[26031] = anon_sym_DOLLAR_LBRACE;
	v->a[26032] = actions(902);
	v->a[26033] = 1;
	v->a[26034] = anon_sym_DOLLAR_LPAREN;
	v->a[26035] = actions(904);
	v->a[26036] = 1;
	v->a[26037] = anon_sym_BQUOTE;
	v->a[26038] = actions(906);
	v->a[26039] = 1;
	small_parse_table_1302(v);
}

void	small_parse_table_1302(t_small_parse_table_array *v)
{
	v->a[26040] = sym_file_descriptor;
	v->a[26041] = actions(1011);
	v->a[26042] = 1;
	v->a[26043] = aux_sym_heredoc_redirect_token1;
	v->a[26044] = state(1514);
	v->a[26045] = 1;
	v->a[26046] = aux_sym__heredoc_command;
	v->a[26047] = state(1937);
	v->a[26048] = 1;
	v->a[26049] = sym_concatenation;
	v->a[26050] = state(2192);
	v->a[26051] = 1;
	v->a[26052] = sym__heredoc_expression;
	v->a[26053] = state(2193);
	v->a[26054] = 1;
	v->a[26055] = sym__heredoc_pipeline;
	v->a[26056] = actions(884);
	v->a[26057] = 2;
	v->a[26058] = anon_sym_PIPE;
	v->a[26059] = anon_sym_PIPE_AMP;
	small_parse_table_1303(v);
}

void	small_parse_table_1303(t_small_parse_table_array *v)
{
	v->a[26060] = actions(886);
	v->a[26061] = 2;
	v->a[26062] = anon_sym_AMP_AMP;
	v->a[26063] = anon_sym_PIPE_PIPE;
	v->a[26064] = actions(890);
	v->a[26065] = 2;
	v->a[26066] = anon_sym_LT_AMP_DASH;
	v->a[26067] = anon_sym_GT_AMP_DASH;
	v->a[26068] = state(1616);
	v->a[26069] = 2;
	v->a[26070] = sym_file_redirect;
	v->a[26071] = aux_sym_redirected_statement_repeat2;
	v->a[26072] = actions(882);
	v->a[26073] = 3;
	v->a[26074] = sym_raw_string;
	v->a[26075] = sym_number;
	v->a[26076] = sym_word;
	v->a[26077] = state(1774);
	v->a[26078] = 5;
	v->a[26079] = sym_arithmetic_expansion;
	small_parse_table_1304(v);
}

void	small_parse_table_1304(t_small_parse_table_array *v)
{
	v->a[26080] = sym_string;
	v->a[26081] = sym_simple_expansion;
	v->a[26082] = sym_expansion;
	v->a[26083] = sym_command_substitution;
	v->a[26084] = actions(888);
	v->a[26085] = 6;
	v->a[26086] = anon_sym_LT;
	v->a[26087] = anon_sym_GT;
	v->a[26088] = anon_sym_GT_GT;
	v->a[26089] = anon_sym_LT_AMP;
	v->a[26090] = anon_sym_GT_AMP;
	v->a[26091] = anon_sym_GT_PIPE;
	v->a[26092] = 3;
	v->a[26093] = actions(870);
	v->a[26094] = 1;
	v->a[26095] = sym_comment;
	v->a[26096] = actions(1013);
	v->a[26097] = 13;
	v->a[26098] = anon_sym_PIPE;
	v->a[26099] = anon_sym_EQ;
	small_parse_table_1305(v);
}

/* EOF small_parse_table_260.c */
