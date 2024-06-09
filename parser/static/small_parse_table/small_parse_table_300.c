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
	v->a[30000] = actions(1102);
	v->a[30001] = 1;
	v->a[30002] = sym_file_descriptor;
	v->a[30003] = state(247);
	v->a[30004] = 1;
	v->a[30005] = sym_command_name;
	v->a[30006] = state(582);
	v->a[30007] = 1;
	v->a[30008] = sym_concatenation;
	v->a[30009] = state(585);
	v->a[30010] = 1;
	v->a[30011] = aux_sym_command_repeat1;
	v->a[30012] = state(724);
	v->a[30013] = 1;
	v->a[30014] = sym_variable_assignment;
	v->a[30015] = state(1175);
	v->a[30016] = 1;
	v->a[30017] = sym_subshell;
	v->a[30018] = state(1179);
	v->a[30019] = 1;
	small_parse_table_1501(v);
}

void	small_parse_table_1501(t_small_parse_table_array *v)
{
	v->a[30020] = sym_command;
	v->a[30021] = state(1237);
	v->a[30022] = 1;
	v->a[30023] = sym_file_redirect;
	v->a[30024] = actions(357);
	v->a[30025] = 2;
	v->a[30026] = sym_raw_string;
	v->a[30027] = sym_word;
	v->a[30028] = actions(1100);
	v->a[30029] = 2;
	v->a[30030] = anon_sym_LT_AMP_DASH;
	v->a[30031] = anon_sym_GT_AMP_DASH;
	v->a[30032] = state(686);
	v->a[30033] = 6;
	v->a[30034] = sym_arithmetic_expansion;
	v->a[30035] = sym_string;
	v->a[30036] = sym_number;
	v->a[30037] = sym_simple_expansion;
	v->a[30038] = sym_expansion;
	v->a[30039] = sym_command_substitution;
	small_parse_table_1502(v);
}

void	small_parse_table_1502(t_small_parse_table_array *v)
{
	v->a[30040] = actions(1098);
	v->a[30041] = 8;
	v->a[30042] = anon_sym_LT;
	v->a[30043] = anon_sym_GT;
	v->a[30044] = anon_sym_GT_GT;
	v->a[30045] = anon_sym_AMP_GT;
	v->a[30046] = anon_sym_AMP_GT_GT;
	v->a[30047] = anon_sym_LT_AMP;
	v->a[30048] = anon_sym_GT_AMP;
	v->a[30049] = anon_sym_GT_PIPE;
	v->a[30050] = 6;
	v->a[30051] = actions(3);
	v->a[30052] = 1;
	v->a[30053] = sym_comment;
	v->a[30054] = actions(1131);
	v->a[30055] = 1;
	v->a[30056] = aux_sym_concatenation_token1;
	v->a[30057] = actions(1181);
	v->a[30058] = 1;
	v->a[30059] = sym__concat;
	small_parse_table_1503(v);
}

void	small_parse_table_1503(t_small_parse_table_array *v)
{
	v->a[30060] = state(287);
	v->a[30061] = 1;
	v->a[30062] = aux_sym_concatenation_repeat1;
	v->a[30063] = actions(1108);
	v->a[30064] = 3;
	v->a[30065] = sym_file_descriptor;
	v->a[30066] = sym__bare_dollar;
	v->a[30067] = ts_builtin_sym_end;
	v->a[30068] = actions(1104);
	v->a[30069] = 30;
	v->a[30070] = anon_sym_LPAREN;
	v->a[30071] = anon_sym_PIPE;
	v->a[30072] = anon_sym_SEMI_SEMI;
	v->a[30073] = anon_sym_AMP_AMP;
	v->a[30074] = anon_sym_PIPE_PIPE;
	v->a[30075] = anon_sym_LT;
	v->a[30076] = anon_sym_GT;
	v->a[30077] = anon_sym_GT_GT;
	v->a[30078] = anon_sym_AMP_GT;
	v->a[30079] = anon_sym_AMP_GT_GT;
	small_parse_table_1504(v);
}

void	small_parse_table_1504(t_small_parse_table_array *v)
{
	v->a[30080] = anon_sym_LT_AMP;
	v->a[30081] = anon_sym_GT_AMP;
	v->a[30082] = anon_sym_GT_PIPE;
	v->a[30083] = anon_sym_LT_AMP_DASH;
	v->a[30084] = anon_sym_GT_AMP_DASH;
	v->a[30085] = anon_sym_LT_LT;
	v->a[30086] = anon_sym_LT_LT_DASH;
	v->a[30087] = aux_sym_heredoc_redirect_token1;
	v->a[30088] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30089] = anon_sym_AMP;
	v->a[30090] = anon_sym_DOLLAR;
	v->a[30091] = anon_sym_DQUOTE;
	v->a[30092] = sym_raw_string;
	v->a[30093] = aux_sym_number_token1;
	v->a[30094] = aux_sym_number_token2;
	v->a[30095] = anon_sym_DOLLAR_LBRACE;
	v->a[30096] = anon_sym_DOLLAR_LPAREN;
	v->a[30097] = anon_sym_BQUOTE;
	v->a[30098] = sym_word;
	v->a[30099] = anon_sym_SEMI;
	small_parse_table_1505(v);
}

/* EOF small_parse_table_300.c */
