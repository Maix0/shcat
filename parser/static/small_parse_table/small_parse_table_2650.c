/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2650.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13250(t_small_parse_table_array *v)
{
	v->a[265000] = anon_sym_GT_AMP;
	v->a[265001] = anon_sym_GT_PIPE;
	v->a[265002] = anon_sym_LT_AMP_DASH;
	v->a[265003] = anon_sym_GT_AMP_DASH;
	v->a[265004] = anon_sym_LT_LT_DASH;
	v->a[265005] = anon_sym_LT_LT_LT;
	v->a[265006] = 6;
	v->a[265007] = actions(3);
	v->a[265008] = 1;
	v->a[265009] = sym_comment;
	v->a[265010] = actions(11512);
	v->a[265011] = 1;
	v->a[265012] = aux_sym_concatenation_token1;
	v->a[265013] = actions(11514);
	v->a[265014] = 1;
	v->a[265015] = sym__concat;
	v->a[265016] = state(4776);
	v->a[265017] = 1;
	v->a[265018] = aux_sym_concatenation_repeat1;
	v->a[265019] = actions(5697);
	small_parse_table_13251(v);
}

void	small_parse_table_13251(t_small_parse_table_array *v)
{
	v->a[265020] = 2;
	v->a[265021] = sym_file_descriptor;
	v->a[265022] = aux_sym_heredoc_redirect_token1;
	v->a[265023] = actions(5695);
	v->a[265024] = 20;
	v->a[265025] = anon_sym_SEMI;
	v->a[265026] = anon_sym_PIPE_PIPE;
	v->a[265027] = anon_sym_AMP_AMP;
	v->a[265028] = anon_sym_PIPE;
	v->a[265029] = anon_sym_AMP;
	v->a[265030] = anon_sym_LT;
	v->a[265031] = anon_sym_GT;
	v->a[265032] = anon_sym_LT_LT;
	v->a[265033] = anon_sym_GT_GT;
	v->a[265034] = anon_sym_SEMI_SEMI;
	v->a[265035] = anon_sym_PIPE_AMP;
	v->a[265036] = anon_sym_AMP_GT;
	v->a[265037] = anon_sym_AMP_GT_GT;
	v->a[265038] = anon_sym_LT_AMP;
	v->a[265039] = anon_sym_GT_AMP;
	small_parse_table_13252(v);
}

void	small_parse_table_13252(t_small_parse_table_array *v)
{
	v->a[265040] = anon_sym_GT_PIPE;
	v->a[265041] = anon_sym_LT_AMP_DASH;
	v->a[265042] = anon_sym_GT_AMP_DASH;
	v->a[265043] = anon_sym_LT_LT_DASH;
	v->a[265044] = anon_sym_LT_LT_LT;
	v->a[265045] = 16;
	v->a[265046] = actions(3);
	v->a[265047] = 1;
	v->a[265048] = sym_comment;
	v->a[265049] = actions(11760);
	v->a[265050] = 1;
	v->a[265051] = anon_sym_BANG2;
	v->a[265052] = actions(11764);
	v->a[265053] = 1;
	v->a[265054] = anon_sym_DOLLAR_LPAREN;
	v->a[265055] = actions(11766);
	v->a[265056] = 1;
	v->a[265057] = anon_sym_BQUOTE;
	v->a[265058] = actions(11768);
	v->a[265059] = 1;
	small_parse_table_13253(v);
}

void	small_parse_table_13253(t_small_parse_table_array *v)
{
	v->a[265060] = anon_sym_DOLLAR_BQUOTE;
	v->a[265061] = actions(11770);
	v->a[265062] = 1;
	v->a[265063] = aux_sym__simple_variable_name_token1;
	v->a[265064] = actions(11772);
	v->a[265065] = 1;
	v->a[265066] = sym_variable_name;
	v->a[265067] = actions(12076);
	v->a[265068] = 1;
	v->a[265069] = anon_sym_RBRACE3;
	v->a[265070] = state(3532);
	v->a[265071] = 1;
	v->a[265072] = sym_subscript;
	v->a[265073] = state(6428);
	v->a[265074] = 1;
	v->a[265075] = aux_sym__expansion_body_repeat1;
	v->a[265076] = state(6472);
	v->a[265077] = 1;
	v->a[265078] = sym_command_substitution;
	v->a[265079] = state(6904);
	small_parse_table_13254(v);
}

void	small_parse_table_13254(t_small_parse_table_array *v)
{
	v->a[265080] = 1;
	v->a[265081] = sym__expansion_body;
	v->a[265082] = actions(11762);
	v->a[265083] = 2;
	v->a[265084] = anon_sym_POUND2;
	v->a[265085] = anon_sym_EQ2;
	v->a[265086] = actions(8050);
	v->a[265087] = 3;
	v->a[265088] = sym__external_expansion_sym_hash;
	v->a[265089] = sym__external_expansion_sym_bang;
	v->a[265090] = sym__external_expansion_sym_equal;
	v->a[265091] = actions(11754);
	v->a[265092] = 4;
	v->a[265093] = anon_sym_DASH;
	v->a[265094] = anon_sym_STAR;
	v->a[265095] = anon_sym_QMARK;
	v->a[265096] = anon_sym_AT2;
	v->a[265097] = actions(11756);
	v->a[265098] = 5;
	v->a[265099] = anon_sym_BANG;
	small_parse_table_13255(v);
}

/* EOF small_parse_table_2650.c */
