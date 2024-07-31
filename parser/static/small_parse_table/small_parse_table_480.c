/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_480.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2400(t_small_parse_table_array *v)
{
	v->a[48000] = anon_sym_GT_PIPE;
	v->a[48001] = anon_sym_LT_GT;
	v->a[48002] = 6;
	v->a[48003] = actions(3);
	v->a[48004] = 1;
	v->a[48005] = sym_comment;
	v->a[48006] = actions(1599);
	v->a[48007] = 1;
	v->a[48008] = aux_sym_concatenation_token1;
	v->a[48009] = actions(1611);
	v->a[48010] = 1;
	v->a[48011] = sym__concat;
	v->a[48012] = state(818);
	v->a[48013] = 1;
	v->a[48014] = aux_sym_concatenation_repeat1;
	v->a[48015] = actions(1023);
	v->a[48016] = 3;
	v->a[48017] = sym_variable_name;
	v->a[48018] = ts_builtin_sym_end;
	v->a[48019] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2401(v);
}

void	small_parse_table_2401(t_small_parse_table_array *v)
{
	v->a[48020] = actions(1025);
	v->a[48021] = 14;
	v->a[48022] = anon_sym_PIPE;
	v->a[48023] = anon_sym_SEMI_SEMI;
	v->a[48024] = anon_sym_AMP_AMP;
	v->a[48025] = anon_sym_PIPE_PIPE;
	v->a[48026] = anon_sym_LT;
	v->a[48027] = anon_sym_GT;
	v->a[48028] = anon_sym_GT_GT;
	v->a[48029] = anon_sym_LT_AMP;
	v->a[48030] = anon_sym_GT_AMP;
	v->a[48031] = anon_sym_GT_PIPE;
	v->a[48032] = anon_sym_LT_GT;
	v->a[48033] = anon_sym_LT_LT;
	v->a[48034] = anon_sym_LT_LT_DASH;
	v->a[48035] = anon_sym_SEMI;
	v->a[48036] = 10;
	v->a[48037] = actions(3);
	v->a[48038] = 1;
	v->a[48039] = sym_comment;
	small_parse_table_2402(v);
}

void	small_parse_table_2402(t_small_parse_table_array *v)
{
	v->a[48040] = actions(746);
	v->a[48041] = 1;
	v->a[48042] = anon_sym_PIPE;
	v->a[48043] = actions(842);
	v->a[48044] = 1;
	v->a[48045] = anon_sym_RPAREN;
	v->a[48046] = actions(1591);
	v->a[48047] = 1;
	v->a[48048] = aux_sym_heredoc_redirect_token1;
	v->a[48049] = state(528);
	v->a[48050] = 1;
	v->a[48051] = sym_terminator;
	v->a[48052] = actions(850);
	v->a[48053] = 2;
	v->a[48054] = anon_sym_LT_LT;
	v->a[48055] = anon_sym_LT_LT_DASH;
	v->a[48056] = actions(858);
	v->a[48057] = 2;
	v->a[48058] = anon_sym_SEMI_SEMI;
	v->a[48059] = anon_sym_SEMI;
	small_parse_table_2403(v);
}

void	small_parse_table_2403(t_small_parse_table_array *v)
{
	v->a[48060] = actions(860);
	v->a[48061] = 2;
	v->a[48062] = anon_sym_AMP_AMP;
	v->a[48063] = anon_sym_PIPE_PIPE;
	v->a[48064] = state(918);
	v->a[48065] = 3;
	v->a[48066] = sym_file_redirect;
	v->a[48067] = sym_heredoc_redirect;
	v->a[48068] = aux_sym_redirected_statement_repeat1;
	v->a[48069] = actions(1597);
	v->a[48070] = 7;
	v->a[48071] = anon_sym_LT;
	v->a[48072] = anon_sym_GT;
	v->a[48073] = anon_sym_GT_GT;
	v->a[48074] = anon_sym_LT_AMP;
	v->a[48075] = anon_sym_GT_AMP;
	v->a[48076] = anon_sym_GT_PIPE;
	v->a[48077] = anon_sym_LT_GT;
	v->a[48078] = 10;
	v->a[48079] = actions(3);
	small_parse_table_2404(v);
}

void	small_parse_table_2404(t_small_parse_table_array *v)
{
	v->a[48080] = 1;
	v->a[48081] = sym_comment;
	v->a[48082] = actions(746);
	v->a[48083] = 1;
	v->a[48084] = anon_sym_PIPE;
	v->a[48085] = actions(752);
	v->a[48086] = 1;
	v->a[48087] = anon_sym_SEMI;
	v->a[48088] = actions(1595);
	v->a[48089] = 1;
	v->a[48090] = aux_sym_heredoc_redirect_token1;
	v->a[48091] = state(548);
	v->a[48092] = 1;
	v->a[48093] = sym_terminator;
	v->a[48094] = actions(748);
	v->a[48095] = 2;
	v->a[48096] = anon_sym_AMP_AMP;
	v->a[48097] = anon_sym_PIPE_PIPE;
	v->a[48098] = actions(750);
	v->a[48099] = 2;
	small_parse_table_2405(v);
}

/* EOF small_parse_table_480.c */
