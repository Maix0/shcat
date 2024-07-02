/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_740.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3700(t_small_parse_table_array *v)
{
	v->a[74000] = 1;
	v->a[74001] = sym_comment;
	v->a[74002] = actions(1079);
	v->a[74003] = 1;
	v->a[74004] = sym_file_descriptor;
	v->a[74005] = actions(3000);
	v->a[74006] = 1;
	v->a[74007] = aux_sym_heredoc_redirect_token1;
	v->a[74008] = state(2045);
	v->a[74009] = 1;
	v->a[74010] = sym__heredoc_expression;
	v->a[74011] = actions(1061);
	v->a[74012] = 2;
	v->a[74013] = anon_sym_AMP_AMP;
	v->a[74014] = anon_sym_PIPE_PIPE;
	v->a[74015] = state(1581);
	v->a[74016] = 2;
	v->a[74017] = sym_file_redirect;
	v->a[74018] = aux_sym_redirected_statement_repeat2;
	v->a[74019] = actions(1063);
	small_parse_table_3701(v);
}

void	small_parse_table_3701(t_small_parse_table_array *v)
{
	v->a[74020] = 7;
	v->a[74021] = anon_sym_LT;
	v->a[74022] = anon_sym_GT;
	v->a[74023] = anon_sym_GT_GT;
	v->a[74024] = anon_sym_LT_AMP;
	v->a[74025] = anon_sym_GT_AMP;
	v->a[74026] = anon_sym_GT_PIPE;
	v->a[74027] = anon_sym_LT_GT;
	v->a[74028] = 6;
	v->a[74029] = actions(3);
	v->a[74030] = 1;
	v->a[74031] = sym_comment;
	v->a[74032] = actions(2881);
	v->a[74033] = 1;
	v->a[74034] = sym_string_content;
	v->a[74035] = actions(2885);
	v->a[74036] = 1;
	v->a[74037] = sym_variable_name;
	v->a[74038] = actions(3002);
	v->a[74039] = 1;
	small_parse_table_3702(v);
}

void	small_parse_table_3702(t_small_parse_table_array *v)
{
	v->a[74040] = anon_sym_DQUOTE;
	v->a[74041] = actions(2883);
	v->a[74042] = 2;
	v->a[74043] = aux_sym__simple_variable_name_token1;
	v->a[74044] = aux_sym__multiline_variable_name_token1;
	v->a[74045] = actions(2877);
	v->a[74046] = 9;
	v->a[74047] = anon_sym_BANG;
	v->a[74048] = anon_sym_DASH;
	v->a[74049] = anon_sym_STAR;
	v->a[74050] = anon_sym_QMARK;
	v->a[74051] = anon_sym_DOLLAR;
	v->a[74052] = anon_sym_POUND;
	v->a[74053] = anon_sym_AT;
	v->a[74054] = anon_sym_0;
	v->a[74055] = anon_sym__;
	v->a[74056] = 6;
	v->a[74057] = actions(3);
	v->a[74058] = 1;
	v->a[74059] = sym_comment;
	small_parse_table_3703(v);
}

void	small_parse_table_3703(t_small_parse_table_array *v)
{
	v->a[74060] = actions(2881);
	v->a[74061] = 1;
	v->a[74062] = sym_string_content;
	v->a[74063] = actions(2885);
	v->a[74064] = 1;
	v->a[74065] = sym_variable_name;
	v->a[74066] = actions(3004);
	v->a[74067] = 1;
	v->a[74068] = anon_sym_DQUOTE;
	v->a[74069] = actions(2883);
	v->a[74070] = 2;
	v->a[74071] = aux_sym__simple_variable_name_token1;
	v->a[74072] = aux_sym__multiline_variable_name_token1;
	v->a[74073] = actions(2877);
	v->a[74074] = 9;
	v->a[74075] = anon_sym_BANG;
	v->a[74076] = anon_sym_DASH;
	v->a[74077] = anon_sym_STAR;
	v->a[74078] = anon_sym_QMARK;
	v->a[74079] = anon_sym_DOLLAR;
	small_parse_table_3704(v);
}

void	small_parse_table_3704(t_small_parse_table_array *v)
{
	v->a[74080] = anon_sym_POUND;
	v->a[74081] = anon_sym_AT;
	v->a[74082] = anon_sym_0;
	v->a[74083] = anon_sym__;
	v->a[74084] = 5;
	v->a[74085] = actions(3);
	v->a[74086] = 1;
	v->a[74087] = sym_comment;
	v->a[74088] = actions(3010);
	v->a[74089] = 1;
	v->a[74090] = sym_variable_name;
	v->a[74091] = actions(363);
	v->a[74092] = 2;
	v->a[74093] = anon_sym_PIPE;
	v->a[74094] = anon_sym_RPAREN;
	v->a[74095] = actions(3008);
	v->a[74096] = 2;
	v->a[74097] = aux_sym__simple_variable_name_token1;
	v->a[74098] = aux_sym__multiline_variable_name_token1;
	v->a[74099] = actions(3006);
	small_parse_table_3705(v);
}

/* EOF small_parse_table_740.c */
