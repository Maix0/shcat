/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_300.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1500(t_small_parse_table_array *v)
{
	v->a[30000] = 1;
	v->a[30001] = sym_comment;
	v->a[30002] = actions(1185);
	v->a[30003] = 13;
	v->a[30004] = anon_sym_PIPE;
	v->a[30005] = anon_sym_EQ;
	v->a[30006] = anon_sym_LT;
	v->a[30007] = anon_sym_GT;
	v->a[30008] = anon_sym_GT_GT;
	v->a[30009] = anon_sym_LT_LT;
	v->a[30010] = anon_sym_CARET;
	v->a[30011] = anon_sym_AMP;
	v->a[30012] = anon_sym_PLUS;
	v->a[30013] = anon_sym_DASH;
	v->a[30014] = anon_sym_STAR;
	v->a[30015] = anon_sym_SLASH;
	v->a[30016] = anon_sym_PERCENT;
	v->a[30017] = actions(1187);
	v->a[30018] = 21;
	v->a[30019] = anon_sym_AMP_AMP;
	small_parse_table_1501(v);
}

void	small_parse_table_1501(t_small_parse_table_array *v)
{
	v->a[30020] = anon_sym_PIPE_PIPE;
	v->a[30021] = anon_sym_RPAREN_RPAREN;
	v->a[30022] = anon_sym_PLUS_EQ;
	v->a[30023] = anon_sym_DASH_EQ;
	v->a[30024] = anon_sym_STAR_EQ;
	v->a[30025] = anon_sym_SLASH_EQ;
	v->a[30026] = anon_sym_PERCENT_EQ;
	v->a[30027] = anon_sym_LT_LT_EQ;
	v->a[30028] = anon_sym_GT_GT_EQ;
	v->a[30029] = anon_sym_AMP_EQ;
	v->a[30030] = anon_sym_CARET_EQ;
	v->a[30031] = anon_sym_PIPE_EQ;
	v->a[30032] = anon_sym_EQ_EQ;
	v->a[30033] = anon_sym_BANG_EQ;
	v->a[30034] = anon_sym_LT_EQ;
	v->a[30035] = anon_sym_GT_EQ;
	v->a[30036] = anon_sym_QMARK;
	v->a[30037] = anon_sym_COLON;
	v->a[30038] = anon_sym_PLUS_PLUS2;
	v->a[30039] = anon_sym_DASH_DASH2;
	small_parse_table_1502(v);
}

void	small_parse_table_1502(t_small_parse_table_array *v)
{
	v->a[30040] = 6;
	v->a[30041] = actions(3);
	v->a[30042] = 1;
	v->a[30043] = sym_comment;
	v->a[30044] = actions(1181);
	v->a[30045] = 1;
	v->a[30046] = aux_sym_concatenation_token1;
	v->a[30047] = actions(1189);
	v->a[30048] = 1;
	v->a[30049] = sym__concat;
	v->a[30050] = state(382);
	v->a[30051] = 1;
	v->a[30052] = aux_sym_concatenation_repeat1;
	v->a[30053] = actions(972);
	v->a[30054] = 3;
	v->a[30055] = sym_file_descriptor;
	v->a[30056] = sym__bare_dollar;
	v->a[30057] = ts_builtin_sym_end;
	v->a[30058] = actions(974);
	v->a[30059] = 28;
	small_parse_table_1503(v);
}

void	small_parse_table_1503(t_small_parse_table_array *v)
{
	v->a[30060] = anon_sym_PIPE;
	v->a[30061] = anon_sym_SEMI_SEMI;
	v->a[30062] = anon_sym_AMP_AMP;
	v->a[30063] = anon_sym_PIPE_PIPE;
	v->a[30064] = anon_sym_LT;
	v->a[30065] = anon_sym_GT;
	v->a[30066] = anon_sym_GT_GT;
	v->a[30067] = anon_sym_AMP_GT;
	v->a[30068] = anon_sym_AMP_GT_GT;
	v->a[30069] = anon_sym_LT_AMP;
	v->a[30070] = anon_sym_GT_AMP;
	v->a[30071] = anon_sym_GT_PIPE;
	v->a[30072] = anon_sym_LT_AMP_DASH;
	v->a[30073] = anon_sym_GT_AMP_DASH;
	v->a[30074] = anon_sym_LT_LT;
	v->a[30075] = anon_sym_LT_LT_DASH;
	v->a[30076] = aux_sym_heredoc_redirect_token1;
	v->a[30077] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30078] = anon_sym_AMP;
	v->a[30079] = anon_sym_DOLLAR;
	small_parse_table_1504(v);
}

void	small_parse_table_1504(t_small_parse_table_array *v)
{
	v->a[30080] = anon_sym_DQUOTE;
	v->a[30081] = sym_raw_string;
	v->a[30082] = sym_number;
	v->a[30083] = anon_sym_DOLLAR_LBRACE;
	v->a[30084] = anon_sym_DOLLAR_LPAREN;
	v->a[30085] = anon_sym_BQUOTE;
	v->a[30086] = sym_word;
	v->a[30087] = anon_sym_SEMI;
	v->a[30088] = 11;
	v->a[30089] = actions(1094);
	v->a[30090] = 1;
	v->a[30091] = sym_comment;
	v->a[30092] = actions(1114);
	v->a[30093] = 1;
	v->a[30094] = anon_sym_AMP;
	v->a[30095] = actions(1082);
	v->a[30096] = 2;
	v->a[30097] = anon_sym_LT;
	v->a[30098] = anon_sym_GT;
	v->a[30099] = actions(1084);
	small_parse_table_1505(v);
}

/* EOF small_parse_table_300.c */
