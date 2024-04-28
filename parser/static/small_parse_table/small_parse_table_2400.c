/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2400.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12000(t_small_parse_table_array *v)
{
	v->a[240000] = 1;
	v->a[240001] = anon_sym_LPAREN;
	v->a[240002] = actions(11252);
	v->a[240003] = 1;
	v->a[240004] = aux_sym__c_word_token1;
	v->a[240005] = actions(11254);
	v->a[240006] = 1;
	v->a[240007] = aux_sym_heredoc_redirect_token1;
	v->a[240008] = actions(11256);
	v->a[240009] = 1;
	v->a[240010] = anon_sym_DOLLAR;
	v->a[240011] = actions(11258);
	v->a[240012] = 1;
	v->a[240013] = anon_sym_DQUOTE;
	v->a[240014] = actions(11260);
	v->a[240015] = 1;
	v->a[240016] = aux_sym_number_token1;
	v->a[240017] = actions(11262);
	v->a[240018] = 1;
	v->a[240019] = aux_sym_number_token2;
	small_parse_table_12001(v);
}

void	small_parse_table_12001(t_small_parse_table_array *v)
{
	v->a[240020] = actions(11264);
	v->a[240021] = 1;
	v->a[240022] = anon_sym_DOLLAR_LBRACE;
	v->a[240023] = actions(11266);
	v->a[240024] = 1;
	v->a[240025] = anon_sym_DOLLAR_LPAREN;
	v->a[240026] = actions(11268);
	v->a[240027] = 1;
	v->a[240028] = anon_sym_BQUOTE;
	v->a[240029] = actions(11270);
	v->a[240030] = 1;
	v->a[240031] = anon_sym_DOLLAR_BQUOTE;
	v->a[240032] = state(3113);
	v->a[240033] = 1;
	v->a[240034] = sym__c_postfix_expression;
	v->a[240035] = state(3116);
	v->a[240036] = 1;
	v->a[240037] = sym__c_binary_expression;
	v->a[240038] = state(3118);
	v->a[240039] = 1;
	small_parse_table_12002(v);
}

void	small_parse_table_12002(t_small_parse_table_array *v)
{
	v->a[240040] = sym__c_unary_expression;
	v->a[240041] = state(4243);
	v->a[240042] = 1;
	v->a[240043] = sym__c_terminator;
	v->a[240044] = state(6365);
	v->a[240045] = 1;
	v->a[240046] = sym__c_expression;
	v->a[240047] = state(6493);
	v->a[240048] = 1;
	v->a[240049] = sym__c_variable_assignment;
	v->a[240050] = state(7326);
	v->a[240051] = 1;
	v->a[240052] = sym__for_body;
	v->a[240053] = actions(11246);
	v->a[240054] = 2;
	v->a[240055] = anon_sym_SEMI;
	v->a[240056] = anon_sym_AMP;
	v->a[240057] = actions(11248);
	v->a[240058] = 2;
	v->a[240059] = anon_sym_PLUS_PLUS;
	small_parse_table_12003(v);
}

void	small_parse_table_12003(t_small_parse_table_array *v)
{
	v->a[240060] = anon_sym_DASH_DASH;
	v->a[240061] = state(3119);
	v->a[240062] = 7;
	v->a[240063] = sym__c_expression_not_assignment;
	v->a[240064] = sym__c_parenthesized_expression;
	v->a[240065] = sym_string;
	v->a[240066] = sym_number;
	v->a[240067] = sym_simple_expansion;
	v->a[240068] = sym_expansion;
	v->a[240069] = sym_command_substitution;
	v->a[240070] = 6;
	v->a[240071] = actions(3);
	v->a[240072] = 1;
	v->a[240073] = sym_comment;
	v->a[240074] = actions(11284);
	v->a[240075] = 1;
	v->a[240076] = anon_sym_LT_LT_LT;
	v->a[240077] = state(4866);
	v->a[240078] = 1;
	v->a[240079] = sym_herestring_redirect;
	small_parse_table_12004(v);
}

void	small_parse_table_12004(t_small_parse_table_array *v)
{
	v->a[240080] = actions(4348);
	v->a[240081] = 2;
	v->a[240082] = sym_file_descriptor;
	v->a[240083] = aux_sym_heredoc_redirect_token1;
	v->a[240084] = state(4283);
	v->a[240085] = 3;
	v->a[240086] = sym_file_redirect;
	v->a[240087] = sym_heredoc_redirect;
	v->a[240088] = aux_sym_redirected_statement_repeat1;
	v->a[240089] = actions(4253);
	v->a[240090] = 22;
	v->a[240091] = anon_sym_SEMI;
	v->a[240092] = anon_sym_PIPE_PIPE;
	v->a[240093] = anon_sym_AMP_AMP;
	v->a[240094] = anon_sym_PIPE;
	v->a[240095] = anon_sym_AMP;
	v->a[240096] = anon_sym_LT;
	v->a[240097] = anon_sym_GT;
	v->a[240098] = anon_sym_LT_LT;
	v->a[240099] = anon_sym_GT_GT;
	small_parse_table_12005(v);
}

/* EOF small_parse_table_2400.c */
