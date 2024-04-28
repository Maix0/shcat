/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2630.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13150(t_small_parse_table_array *v)
{
	v->a[263000] = anon_sym_AMP;
	v->a[263001] = anon_sym_LT;
	v->a[263002] = anon_sym_GT;
	v->a[263003] = anon_sym_LT_LT;
	v->a[263004] = anon_sym_GT_GT;
	v->a[263005] = anon_sym_esac;
	v->a[263006] = anon_sym_SEMI_SEMI;
	v->a[263007] = anon_sym_SEMI_AMP;
	v->a[263008] = anon_sym_SEMI_SEMI_AMP;
	v->a[263009] = anon_sym_PIPE_AMP;
	v->a[263010] = anon_sym_AMP_GT;
	v->a[263011] = anon_sym_AMP_GT_GT;
	v->a[263012] = anon_sym_LT_AMP;
	v->a[263013] = anon_sym_GT_AMP;
	v->a[263014] = anon_sym_GT_PIPE;
	v->a[263015] = anon_sym_LT_AMP_DASH;
	v->a[263016] = anon_sym_GT_AMP_DASH;
	v->a[263017] = anon_sym_LT_LT_DASH;
	v->a[263018] = anon_sym_LT_LT_LT;
	v->a[263019] = 3;
	small_parse_table_13151(v);
}

void	small_parse_table_13151(t_small_parse_table_array *v)
{
	v->a[263020] = actions(3);
	v->a[263021] = 1;
	v->a[263022] = sym_comment;
	v->a[263023] = actions(1334);
	v->a[263024] = 3;
	v->a[263025] = sym_file_descriptor;
	v->a[263026] = sym__concat;
	v->a[263027] = aux_sym_heredoc_redirect_token1;
	v->a[263028] = actions(1332);
	v->a[263029] = 22;
	v->a[263030] = anon_sym_SEMI;
	v->a[263031] = anon_sym_PIPE_PIPE;
	v->a[263032] = anon_sym_AMP_AMP;
	v->a[263033] = anon_sym_PIPE;
	v->a[263034] = anon_sym_AMP;
	v->a[263035] = anon_sym_LT;
	v->a[263036] = anon_sym_GT;
	v->a[263037] = anon_sym_LT_LT;
	v->a[263038] = anon_sym_GT_GT;
	v->a[263039] = anon_sym_SEMI_SEMI;
	small_parse_table_13152(v);
}

void	small_parse_table_13152(t_small_parse_table_array *v)
{
	v->a[263040] = anon_sym_SEMI_AMP;
	v->a[263041] = anon_sym_SEMI_SEMI_AMP;
	v->a[263042] = anon_sym_PIPE_AMP;
	v->a[263043] = anon_sym_AMP_GT;
	v->a[263044] = anon_sym_AMP_GT_GT;
	v->a[263045] = anon_sym_LT_AMP;
	v->a[263046] = anon_sym_GT_AMP;
	v->a[263047] = anon_sym_GT_PIPE;
	v->a[263048] = anon_sym_LT_AMP_DASH;
	v->a[263049] = anon_sym_GT_AMP_DASH;
	v->a[263050] = anon_sym_LT_LT_DASH;
	v->a[263051] = aux_sym_concatenation_token1;
	v->a[263052] = 16;
	v->a[263053] = actions(3);
	v->a[263054] = 1;
	v->a[263055] = sym_comment;
	v->a[263056] = actions(11760);
	v->a[263057] = 1;
	v->a[263058] = anon_sym_BANG2;
	v->a[263059] = actions(11764);
	small_parse_table_13153(v);
}

void	small_parse_table_13153(t_small_parse_table_array *v)
{
	v->a[263060] = 1;
	v->a[263061] = anon_sym_DOLLAR_LPAREN;
	v->a[263062] = actions(11766);
	v->a[263063] = 1;
	v->a[263064] = anon_sym_BQUOTE;
	v->a[263065] = actions(11768);
	v->a[263066] = 1;
	v->a[263067] = anon_sym_DOLLAR_BQUOTE;
	v->a[263068] = actions(11770);
	v->a[263069] = 1;
	v->a[263070] = aux_sym__simple_variable_name_token1;
	v->a[263071] = actions(11772);
	v->a[263072] = 1;
	v->a[263073] = sym_variable_name;
	v->a[263074] = actions(12040);
	v->a[263075] = 1;
	v->a[263076] = anon_sym_RBRACE3;
	v->a[263077] = state(3532);
	v->a[263078] = 1;
	v->a[263079] = sym_subscript;
	small_parse_table_13154(v);
}

void	small_parse_table_13154(t_small_parse_table_array *v)
{
	v->a[263080] = state(6428);
	v->a[263081] = 1;
	v->a[263082] = aux_sym__expansion_body_repeat1;
	v->a[263083] = state(6472);
	v->a[263084] = 1;
	v->a[263085] = sym_command_substitution;
	v->a[263086] = state(7510);
	v->a[263087] = 1;
	v->a[263088] = sym__expansion_body;
	v->a[263089] = actions(11762);
	v->a[263090] = 2;
	v->a[263091] = anon_sym_POUND2;
	v->a[263092] = anon_sym_EQ2;
	v->a[263093] = actions(8050);
	v->a[263094] = 3;
	v->a[263095] = sym__external_expansion_sym_hash;
	v->a[263096] = sym__external_expansion_sym_bang;
	v->a[263097] = sym__external_expansion_sym_equal;
	v->a[263098] = actions(11754);
	v->a[263099] = 4;
	small_parse_table_13155(v);
}

/* EOF small_parse_table_2630.c */
