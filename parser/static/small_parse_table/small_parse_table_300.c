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
	v->a[30000] = actions(1144);
	v->a[30001] = 1;
	v->a[30002] = aux_sym_concatenation_token1;
	v->a[30003] = actions(1147);
	v->a[30004] = 1;
	v->a[30005] = sym__concat;
	v->a[30006] = state(367);
	v->a[30007] = 1;
	v->a[30008] = aux_sym_concatenation_repeat1;
	v->a[30009] = actions(1093);
	v->a[30010] = 3;
	v->a[30011] = sym_file_descriptor;
	v->a[30012] = sym__bare_dollar;
	v->a[30013] = ts_builtin_sym_end;
	v->a[30014] = actions(1088);
	v->a[30015] = 26;
	v->a[30016] = anon_sym_LPAREN;
	v->a[30017] = anon_sym_PIPE;
	v->a[30018] = anon_sym_SEMI_SEMI;
	v->a[30019] = anon_sym_AMP_AMP;
	small_parse_table_1501(v);
}

void	small_parse_table_1501(t_small_parse_table_array *v)
{
	v->a[30020] = anon_sym_PIPE_PIPE;
	v->a[30021] = anon_sym_LT;
	v->a[30022] = anon_sym_GT;
	v->a[30023] = anon_sym_GT_GT;
	v->a[30024] = anon_sym_LT_AMP;
	v->a[30025] = anon_sym_GT_AMP;
	v->a[30026] = anon_sym_GT_PIPE;
	v->a[30027] = anon_sym_LT_GT;
	v->a[30028] = anon_sym_LT_LT;
	v->a[30029] = anon_sym_LT_LT_DASH;
	v->a[30030] = aux_sym_heredoc_redirect_token1;
	v->a[30031] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30032] = anon_sym_AMP;
	v->a[30033] = anon_sym_DOLLAR;
	v->a[30034] = anon_sym_DQUOTE;
	v->a[30035] = sym_raw_string;
	v->a[30036] = sym_number;
	v->a[30037] = anon_sym_DOLLAR_LBRACE;
	v->a[30038] = anon_sym_DOLLAR_LPAREN;
	v->a[30039] = anon_sym_BQUOTE;
	small_parse_table_1502(v);
}

void	small_parse_table_1502(t_small_parse_table_array *v)
{
	v->a[30040] = sym_word;
	v->a[30041] = anon_sym_SEMI;
	v->a[30042] = 20;
	v->a[30043] = actions(3);
	v->a[30044] = 1;
	v->a[30045] = sym_comment;
	v->a[30046] = actions(17);
	v->a[30047] = 1;
	v->a[30048] = anon_sym_LPAREN;
	v->a[30049] = actions(55);
	v->a[30050] = 1;
	v->a[30051] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30052] = actions(57);
	v->a[30053] = 1;
	v->a[30054] = anon_sym_DOLLAR;
	v->a[30055] = actions(59);
	v->a[30056] = 1;
	v->a[30057] = anon_sym_DQUOTE;
	v->a[30058] = actions(63);
	v->a[30059] = 1;
	small_parse_table_1503(v);
}

void	small_parse_table_1503(t_small_parse_table_array *v)
{
	v->a[30060] = anon_sym_DOLLAR_LBRACE;
	v->a[30061] = actions(65);
	v->a[30062] = 1;
	v->a[30063] = anon_sym_DOLLAR_LPAREN;
	v->a[30064] = actions(67);
	v->a[30065] = 1;
	v->a[30066] = anon_sym_BQUOTE;
	v->a[30067] = actions(71);
	v->a[30068] = 1;
	v->a[30069] = sym_variable_name;
	v->a[30070] = actions(1152);
	v->a[30071] = 1;
	v->a[30072] = sym_file_descriptor;
	v->a[30073] = state(183);
	v->a[30074] = 1;
	v->a[30075] = sym_command_name;
	v->a[30076] = state(603);
	v->a[30077] = 1;
	v->a[30078] = sym_concatenation;
	v->a[30079] = state(635);
	small_parse_table_1504(v);
}

void	small_parse_table_1504(t_small_parse_table_array *v)
{
	v->a[30080] = 1;
	v->a[30081] = sym_variable_assignment;
	v->a[30082] = state(639);
	v->a[30083] = 1;
	v->a[30084] = aux_sym_command_repeat1;
	v->a[30085] = state(1096);
	v->a[30086] = 1;
	v->a[30087] = sym_subshell;
	v->a[30088] = state(1097);
	v->a[30089] = 1;
	v->a[30090] = sym_command;
	v->a[30091] = state(1225);
	v->a[30092] = 1;
	v->a[30093] = sym_file_redirect;
	v->a[30094] = actions(61);
	v->a[30095] = 3;
	v->a[30096] = sym_raw_string;
	v->a[30097] = sym_number;
	v->a[30098] = sym_word;
	v->a[30099] = state(436);
	small_parse_table_1505(v);
}

/* EOF small_parse_table_300.c */
