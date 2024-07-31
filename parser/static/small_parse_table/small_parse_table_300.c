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
	v->a[30000] = actions(445);
	v->a[30001] = 2;
	v->a[30002] = sym__concat;
	v->a[30003] = sym__bare_dollar;
	v->a[30004] = actions(443);
	v->a[30005] = 26;
	v->a[30006] = anon_sym_esac;
	v->a[30007] = anon_sym_PIPE;
	v->a[30008] = anon_sym_SEMI_SEMI;
	v->a[30009] = anon_sym_AMP_AMP;
	v->a[30010] = anon_sym_PIPE_PIPE;
	v->a[30011] = anon_sym_LT;
	v->a[30012] = anon_sym_GT;
	v->a[30013] = anon_sym_GT_GT;
	v->a[30014] = anon_sym_LT_AMP;
	v->a[30015] = anon_sym_GT_AMP;
	v->a[30016] = anon_sym_GT_PIPE;
	v->a[30017] = anon_sym_LT_GT;
	v->a[30018] = anon_sym_LT_LT;
	v->a[30019] = anon_sym_LT_LT_DASH;
	small_parse_table_1501(v);
}

void	small_parse_table_1501(t_small_parse_table_array *v)
{
	v->a[30020] = aux_sym_heredoc_redirect_token1;
	v->a[30021] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30022] = aux_sym_concatenation_token1;
	v->a[30023] = anon_sym_DOLLAR;
	v->a[30024] = anon_sym_DQUOTE;
	v->a[30025] = sym_raw_string;
	v->a[30026] = sym_number;
	v->a[30027] = anon_sym_DOLLAR_LBRACE;
	v->a[30028] = anon_sym_DOLLAR_LPAREN;
	v->a[30029] = anon_sym_BQUOTE;
	v->a[30030] = sym_word;
	v->a[30031] = anon_sym_SEMI;
	v->a[30032] = 5;
	v->a[30033] = actions(3);
	v->a[30034] = 1;
	v->a[30035] = sym_comment;
	v->a[30036] = actions(1231);
	v->a[30037] = 1;
	v->a[30038] = aux_sym_concatenation_token1;
	v->a[30039] = actions(1234);
	small_parse_table_1502(v);
}

void	small_parse_table_1502(t_small_parse_table_array *v)
{
	v->a[30040] = 1;
	v->a[30041] = sym__concat;
	v->a[30042] = state(420);
	v->a[30043] = 1;
	v->a[30044] = aux_sym_concatenation_repeat1;
	v->a[30045] = actions(1003);
	v->a[30046] = 25;
	v->a[30047] = anon_sym_esac;
	v->a[30048] = anon_sym_PIPE;
	v->a[30049] = anon_sym_SEMI_SEMI;
	v->a[30050] = anon_sym_AMP_AMP;
	v->a[30051] = anon_sym_PIPE_PIPE;
	v->a[30052] = anon_sym_LT;
	v->a[30053] = anon_sym_GT;
	v->a[30054] = anon_sym_GT_GT;
	v->a[30055] = anon_sym_LT_AMP;
	v->a[30056] = anon_sym_GT_AMP;
	v->a[30057] = anon_sym_GT_PIPE;
	v->a[30058] = anon_sym_LT_GT;
	v->a[30059] = anon_sym_LT_LT;
	small_parse_table_1503(v);
}

void	small_parse_table_1503(t_small_parse_table_array *v)
{
	v->a[30060] = anon_sym_LT_LT_DASH;
	v->a[30061] = aux_sym_heredoc_redirect_token1;
	v->a[30062] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30063] = anon_sym_DOLLAR;
	v->a[30064] = anon_sym_DQUOTE;
	v->a[30065] = sym_raw_string;
	v->a[30066] = sym_number;
	v->a[30067] = anon_sym_DOLLAR_LBRACE;
	v->a[30068] = anon_sym_DOLLAR_LPAREN;
	v->a[30069] = anon_sym_BQUOTE;
	v->a[30070] = sym_word;
	v->a[30071] = anon_sym_SEMI;
	v->a[30072] = 3;
	v->a[30073] = actions(3);
	v->a[30074] = 1;
	v->a[30075] = sym_comment;
	v->a[30076] = actions(473);
	v->a[30077] = 3;
	v->a[30078] = sym__concat;
	v->a[30079] = sym__bare_dollar;
	small_parse_table_1504(v);
}

void	small_parse_table_1504(t_small_parse_table_array *v)
{
	v->a[30080] = ts_builtin_sym_end;
	v->a[30081] = actions(471);
	v->a[30082] = 25;
	v->a[30083] = anon_sym_PIPE;
	v->a[30084] = anon_sym_SEMI_SEMI;
	v->a[30085] = anon_sym_AMP_AMP;
	v->a[30086] = anon_sym_PIPE_PIPE;
	v->a[30087] = anon_sym_LT;
	v->a[30088] = anon_sym_GT;
	v->a[30089] = anon_sym_GT_GT;
	v->a[30090] = anon_sym_LT_AMP;
	v->a[30091] = anon_sym_GT_AMP;
	v->a[30092] = anon_sym_GT_PIPE;
	v->a[30093] = anon_sym_LT_GT;
	v->a[30094] = anon_sym_LT_LT;
	v->a[30095] = anon_sym_LT_LT_DASH;
	v->a[30096] = aux_sym_heredoc_redirect_token1;
	v->a[30097] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30098] = aux_sym_concatenation_token1;
	v->a[30099] = anon_sym_DOLLAR;
	small_parse_table_1505(v);
}

/* EOF small_parse_table_300.c */
