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
	v->a[30000] = actions(1093);
	v->a[30001] = 7;
	v->a[30002] = anon_sym_LT;
	v->a[30003] = anon_sym_GT;
	v->a[30004] = anon_sym_GT_GT;
	v->a[30005] = anon_sym_LT_AMP;
	v->a[30006] = anon_sym_GT_AMP;
	v->a[30007] = anon_sym_GT_PIPE;
	v->a[30008] = anon_sym_LT_GT;
	v->a[30009] = 20;
	v->a[30010] = actions(3);
	v->a[30011] = 1;
	v->a[30012] = sym_comment;
	v->a[30013] = actions(17);
	v->a[30014] = 1;
	v->a[30015] = anon_sym_LPAREN;
	v->a[30016] = actions(55);
	v->a[30017] = 1;
	v->a[30018] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30019] = actions(57);
	small_parse_table_1501(v);
}

void	small_parse_table_1501(t_small_parse_table_array *v)
{
	v->a[30020] = 1;
	v->a[30021] = anon_sym_DOLLAR;
	v->a[30022] = actions(59);
	v->a[30023] = 1;
	v->a[30024] = anon_sym_DQUOTE;
	v->a[30025] = actions(63);
	v->a[30026] = 1;
	v->a[30027] = anon_sym_DOLLAR_LBRACE;
	v->a[30028] = actions(65);
	v->a[30029] = 1;
	v->a[30030] = anon_sym_DOLLAR_LPAREN;
	v->a[30031] = actions(67);
	v->a[30032] = 1;
	v->a[30033] = anon_sym_BQUOTE;
	v->a[30034] = actions(71);
	v->a[30035] = 1;
	v->a[30036] = sym_variable_name;
	v->a[30037] = actions(1095);
	v->a[30038] = 1;
	v->a[30039] = sym_file_descriptor;
	small_parse_table_1502(v);
}

void	small_parse_table_1502(t_small_parse_table_array *v)
{
	v->a[30040] = state(183);
	v->a[30041] = 1;
	v->a[30042] = sym_command_name;
	v->a[30043] = state(655);
	v->a[30044] = 1;
	v->a[30045] = aux_sym_command_repeat1;
	v->a[30046] = state(661);
	v->a[30047] = 1;
	v->a[30048] = sym_concatenation;
	v->a[30049] = state(668);
	v->a[30050] = 1;
	v->a[30051] = sym_variable_assignment;
	v->a[30052] = state(1121);
	v->a[30053] = 1;
	v->a[30054] = sym_command;
	v->a[30055] = state(1171);
	v->a[30056] = 1;
	v->a[30057] = sym_subshell;
	v->a[30058] = state(1203);
	v->a[30059] = 1;
	small_parse_table_1503(v);
}

void	small_parse_table_1503(t_small_parse_table_array *v)
{
	v->a[30060] = sym_file_redirect;
	v->a[30061] = actions(61);
	v->a[30062] = 3;
	v->a[30063] = sym_raw_string;
	v->a[30064] = sym_number;
	v->a[30065] = sym_word;
	v->a[30066] = state(455);
	v->a[30067] = 5;
	v->a[30068] = sym_arithmetic_expansion;
	v->a[30069] = sym_string;
	v->a[30070] = sym_simple_expansion;
	v->a[30071] = sym_expansion;
	v->a[30072] = sym_command_substitution;
	v->a[30073] = actions(1093);
	v->a[30074] = 7;
	v->a[30075] = anon_sym_LT;
	v->a[30076] = anon_sym_GT;
	v->a[30077] = anon_sym_GT_GT;
	v->a[30078] = anon_sym_LT_AMP;
	v->a[30079] = anon_sym_GT_AMP;
	small_parse_table_1504(v);
}

void	small_parse_table_1504(t_small_parse_table_array *v)
{
	v->a[30080] = anon_sym_GT_PIPE;
	v->a[30081] = anon_sym_LT_GT;
	v->a[30082] = 12;
	v->a[30083] = actions(3);
	v->a[30084] = 1;
	v->a[30085] = sym_comment;
	v->a[30086] = actions(630);
	v->a[30087] = 1;
	v->a[30088] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30089] = actions(633);
	v->a[30090] = 1;
	v->a[30091] = anon_sym_DOLLAR;
	v->a[30092] = actions(636);
	v->a[30093] = 1;
	v->a[30094] = anon_sym_DQUOTE;
	v->a[30095] = actions(639);
	v->a[30096] = 1;
	v->a[30097] = anon_sym_DOLLAR_LBRACE;
	v->a[30098] = actions(642);
	v->a[30099] = 1;
	small_parse_table_1505(v);
}

/* EOF small_parse_table_300.c */
