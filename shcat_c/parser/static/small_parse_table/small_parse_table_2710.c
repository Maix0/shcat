/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2710.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13550(t_small_parse_table_array *v)
{
	v->a[271000] = actions(12239);
	v->a[271001] = 1;
	v->a[271002] = aux_sym_number_token1;
	v->a[271003] = actions(12241);
	v->a[271004] = 1;
	v->a[271005] = anon_sym_DOLLAR_LBRACE;
	v->a[271006] = actions(12243);
	v->a[271007] = 1;
	v->a[271008] = anon_sym_DOLLAR_LPAREN;
	v->a[271009] = actions(12245);
	v->a[271010] = 1;
	v->a[271011] = anon_sym_BQUOTE;
	v->a[271012] = actions(12247);
	v->a[271013] = 1;
	v->a[271014] = anon_sym_DOLLAR_BQUOTE;
	v->a[271015] = state(3113);
	v->a[271016] = 1;
	v->a[271017] = sym__c_postfix_expression;
	v->a[271018] = state(3116);
	v->a[271019] = 1;
	small_parse_table_13551(v);
}

void	small_parse_table_13551(t_small_parse_table_array *v)
{
	v->a[271020] = sym__c_binary_expression;
	v->a[271021] = state(3118);
	v->a[271022] = 1;
	v->a[271023] = sym__c_unary_expression;
	v->a[271024] = state(6481);
	v->a[271025] = 1;
	v->a[271026] = sym__c_expression;
	v->a[271027] = state(6493);
	v->a[271028] = 1;
	v->a[271029] = sym__c_variable_assignment;
	v->a[271030] = actions(12231);
	v->a[271031] = 2;
	v->a[271032] = anon_sym_PLUS_PLUS;
	v->a[271033] = anon_sym_DASH_DASH;
	v->a[271034] = state(3119);
	v->a[271035] = 7;
	v->a[271036] = sym__c_expression_not_assignment;
	v->a[271037] = sym__c_parenthesized_expression;
	v->a[271038] = sym_string;
	v->a[271039] = sym_number;
	small_parse_table_13552(v);
}

void	small_parse_table_13552(t_small_parse_table_array *v)
{
	v->a[271040] = sym_simple_expansion;
	v->a[271041] = sym_expansion;
	v->a[271042] = sym_command_substitution;
	v->a[271043] = 8;
	v->a[271044] = actions(3);
	v->a[271045] = 1;
	v->a[271046] = sym_comment;
	v->a[271047] = actions(11414);
	v->a[271048] = 1;
	v->a[271049] = aux_sym_heredoc_redirect_token1;
	v->a[271050] = actions(11558);
	v->a[271051] = 1;
	v->a[271052] = anon_sym_LT_LT_LT;
	v->a[271053] = actions(12278);
	v->a[271054] = 1;
	v->a[271055] = sym_file_descriptor;
	v->a[271056] = actions(11556);
	v->a[271057] = 2;
	v->a[271058] = anon_sym_LT_AMP_DASH;
	v->a[271059] = anon_sym_GT_AMP_DASH;
	small_parse_table_13553(v);
}

void	small_parse_table_13553(t_small_parse_table_array *v)
{
	v->a[271060] = state(4868);
	v->a[271061] = 2;
	v->a[271062] = sym_file_redirect;
	v->a[271063] = sym_herestring_redirect;
	v->a[271064] = actions(11554);
	v->a[271065] = 8;
	v->a[271066] = anon_sym_LT;
	v->a[271067] = anon_sym_GT;
	v->a[271068] = anon_sym_GT_GT;
	v->a[271069] = anon_sym_AMP_GT;
	v->a[271070] = anon_sym_AMP_GT_GT;
	v->a[271071] = anon_sym_LT_AMP;
	v->a[271072] = anon_sym_GT_AMP;
	v->a[271073] = anon_sym_GT_PIPE;
	v->a[271074] = actions(11412);
	v->a[271075] = 9;
	v->a[271076] = anon_sym_SEMI;
	v->a[271077] = anon_sym_PIPE_PIPE;
	v->a[271078] = anon_sym_AMP_AMP;
	v->a[271079] = anon_sym_PIPE;
	small_parse_table_13554(v);
}

void	small_parse_table_13554(t_small_parse_table_array *v)
{
	v->a[271080] = anon_sym_AMP;
	v->a[271081] = anon_sym_LT_LT;
	v->a[271082] = anon_sym_SEMI_SEMI;
	v->a[271083] = anon_sym_PIPE_AMP;
	v->a[271084] = anon_sym_LT_LT_DASH;
	v->a[271085] = 8;
	v->a[271086] = actions(3);
	v->a[271087] = 1;
	v->a[271088] = sym_comment;
	v->a[271089] = actions(11506);
	v->a[271090] = 1;
	v->a[271091] = aux_sym_heredoc_redirect_token1;
	v->a[271092] = actions(11558);
	v->a[271093] = 1;
	v->a[271094] = anon_sym_LT_LT_LT;
	v->a[271095] = actions(12278);
	v->a[271096] = 1;
	v->a[271097] = sym_file_descriptor;
	v->a[271098] = actions(11556);
	v->a[271099] = 2;
	small_parse_table_13555(v);
}

/* EOF small_parse_table_2710.c */
