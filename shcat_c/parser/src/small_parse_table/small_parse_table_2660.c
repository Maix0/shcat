/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2660.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13300(t_small_parse_table_array *v)
{
	v->a[266000] = aux_sym__simple_variable_name_token1;
	v->a[266001] = actions(11772);
	v->a[266002] = 1;
	v->a[266003] = sym_variable_name;
	v->a[266004] = actions(12097);
	v->a[266005] = 1;
	v->a[266006] = anon_sym_RBRACE3;
	v->a[266007] = state(3532);
	v->a[266008] = 1;
	v->a[266009] = sym_subscript;
	v->a[266010] = state(6428);
	v->a[266011] = 1;
	v->a[266012] = aux_sym__expansion_body_repeat1;
	v->a[266013] = state(6472);
	v->a[266014] = 1;
	v->a[266015] = sym_command_substitution;
	v->a[266016] = state(6841);
	v->a[266017] = 1;
	v->a[266018] = sym__expansion_body;
	v->a[266019] = actions(11762);
	small_parse_table_13301(v);
}

void	small_parse_table_13301(t_small_parse_table_array *v)
{
	v->a[266020] = 2;
	v->a[266021] = anon_sym_POUND2;
	v->a[266022] = anon_sym_EQ2;
	v->a[266023] = actions(8050);
	v->a[266024] = 3;
	v->a[266025] = sym__external_expansion_sym_hash;
	v->a[266026] = sym__external_expansion_sym_bang;
	v->a[266027] = sym__external_expansion_sym_equal;
	v->a[266028] = actions(11754);
	v->a[266029] = 4;
	v->a[266030] = anon_sym_DASH;
	v->a[266031] = anon_sym_STAR;
	v->a[266032] = anon_sym_QMARK;
	v->a[266033] = anon_sym_AT2;
	v->a[266034] = actions(11756);
	v->a[266035] = 5;
	v->a[266036] = anon_sym_BANG;
	v->a[266037] = anon_sym_DOLLAR;
	v->a[266038] = anon_sym_POUND;
	v->a[266039] = anon_sym_0;
	small_parse_table_13302(v);
}

void	small_parse_table_13302(t_small_parse_table_array *v)
{
	v->a[266040] = anon_sym__;
	v->a[266041] = 3;
	v->a[266042] = actions(3);
	v->a[266043] = 1;
	v->a[266044] = sym_comment;
	v->a[266045] = actions(12036);
	v->a[266046] = 3;
	v->a[266047] = sym_file_descriptor;
	v->a[266048] = ts_builtin_sym_end;
	v->a[266049] = aux_sym_heredoc_redirect_token1;
	v->a[266050] = actions(12034);
	v->a[266051] = 22;
	v->a[266052] = anon_sym_SEMI;
	v->a[266053] = anon_sym_PIPE_PIPE;
	v->a[266054] = anon_sym_AMP_AMP;
	v->a[266055] = anon_sym_PIPE;
	v->a[266056] = anon_sym_AMP;
	v->a[266057] = anon_sym_LT;
	v->a[266058] = anon_sym_GT;
	v->a[266059] = anon_sym_LT_LT;
	small_parse_table_13303(v);
}

void	small_parse_table_13303(t_small_parse_table_array *v)
{
	v->a[266060] = anon_sym_GT_GT;
	v->a[266061] = anon_sym_RPAREN;
	v->a[266062] = anon_sym_SEMI_SEMI;
	v->a[266063] = anon_sym_PIPE_AMP;
	v->a[266064] = anon_sym_AMP_GT;
	v->a[266065] = anon_sym_AMP_GT_GT;
	v->a[266066] = anon_sym_LT_AMP;
	v->a[266067] = anon_sym_GT_AMP;
	v->a[266068] = anon_sym_GT_PIPE;
	v->a[266069] = anon_sym_LT_AMP_DASH;
	v->a[266070] = anon_sym_GT_AMP_DASH;
	v->a[266071] = anon_sym_LT_LT_DASH;
	v->a[266072] = anon_sym_LT_LT_LT;
	v->a[266073] = anon_sym_BQUOTE;
	v->a[266074] = 3;
	v->a[266075] = actions(3);
	v->a[266076] = 1;
	v->a[266077] = sym_comment;
	v->a[266078] = actions(1350);
	v->a[266079] = 3;
	small_parse_table_13304(v);
}

void	small_parse_table_13304(t_small_parse_table_array *v)
{
	v->a[266080] = sym_file_descriptor;
	v->a[266081] = sym__concat;
	v->a[266082] = aux_sym_heredoc_redirect_token1;
	v->a[266083] = actions(1348);
	v->a[266084] = 22;
	v->a[266085] = anon_sym_SEMI;
	v->a[266086] = anon_sym_PIPE_PIPE;
	v->a[266087] = anon_sym_AMP_AMP;
	v->a[266088] = anon_sym_PIPE;
	v->a[266089] = anon_sym_AMP;
	v->a[266090] = anon_sym_LT;
	v->a[266091] = anon_sym_GT;
	v->a[266092] = anon_sym_LT_LT;
	v->a[266093] = anon_sym_GT_GT;
	v->a[266094] = anon_sym_SEMI_SEMI;
	v->a[266095] = anon_sym_SEMI_AMP;
	v->a[266096] = anon_sym_SEMI_SEMI_AMP;
	v->a[266097] = anon_sym_PIPE_AMP;
	v->a[266098] = anon_sym_AMP_GT;
	v->a[266099] = anon_sym_AMP_GT_GT;
	small_parse_table_13305(v);
}

/* EOF small_parse_table_2660.c */
