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
	v->a[48000] = sym__concat;
	v->a[48001] = sym__bare_dollar;
	v->a[48002] = actions(1160);
	v->a[48003] = 23;
	v->a[48004] = anon_sym_LPAREN;
	v->a[48005] = anon_sym_PIPE;
	v->a[48006] = anon_sym_AMP_AMP;
	v->a[48007] = anon_sym_PIPE_PIPE;
	v->a[48008] = anon_sym_LT;
	v->a[48009] = anon_sym_GT;
	v->a[48010] = anon_sym_GT_GT;
	v->a[48011] = anon_sym_LT_AMP;
	v->a[48012] = anon_sym_GT_AMP;
	v->a[48013] = anon_sym_GT_PIPE;
	v->a[48014] = anon_sym_LT_GT;
	v->a[48015] = anon_sym_LT_LT;
	v->a[48016] = anon_sym_LT_LT_DASH;
	v->a[48017] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48018] = aux_sym_concatenation_token1;
	v->a[48019] = anon_sym_DOLLAR;
	small_parse_table_2401(v);
}

void	small_parse_table_2401(t_small_parse_table_array *v)
{
	v->a[48020] = anon_sym_DQUOTE;
	v->a[48021] = sym_raw_string;
	v->a[48022] = sym_number;
	v->a[48023] = anon_sym_DOLLAR_LBRACE;
	v->a[48024] = anon_sym_DOLLAR_LPAREN;
	v->a[48025] = anon_sym_BQUOTE;
	v->a[48026] = sym_word;
	v->a[48027] = 3;
	v->a[48028] = actions(3);
	v->a[48029] = 1;
	v->a[48030] = sym_comment;
	v->a[48031] = actions(686);
	v->a[48032] = 3;
	v->a[48033] = sym_file_descriptor;
	v->a[48034] = sym__concat;
	v->a[48035] = sym__bare_dollar;
	v->a[48036] = actions(684);
	v->a[48037] = 23;
	v->a[48038] = anon_sym_LPAREN;
	v->a[48039] = anon_sym_PIPE;
	small_parse_table_2402(v);
}

void	small_parse_table_2402(t_small_parse_table_array *v)
{
	v->a[48040] = anon_sym_AMP_AMP;
	v->a[48041] = anon_sym_PIPE_PIPE;
	v->a[48042] = anon_sym_LT;
	v->a[48043] = anon_sym_GT;
	v->a[48044] = anon_sym_GT_GT;
	v->a[48045] = anon_sym_LT_AMP;
	v->a[48046] = anon_sym_GT_AMP;
	v->a[48047] = anon_sym_GT_PIPE;
	v->a[48048] = anon_sym_LT_GT;
	v->a[48049] = anon_sym_LT_LT;
	v->a[48050] = anon_sym_LT_LT_DASH;
	v->a[48051] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48052] = aux_sym_concatenation_token1;
	v->a[48053] = anon_sym_DOLLAR;
	v->a[48054] = anon_sym_DQUOTE;
	v->a[48055] = sym_raw_string;
	v->a[48056] = sym_number;
	v->a[48057] = anon_sym_DOLLAR_LBRACE;
	v->a[48058] = anon_sym_DOLLAR_LPAREN;
	v->a[48059] = anon_sym_BQUOTE;
	small_parse_table_2403(v);
}

void	small_parse_table_2403(t_small_parse_table_array *v)
{
	v->a[48060] = sym_word;
	v->a[48061] = 6;
	v->a[48062] = actions(3);
	v->a[48063] = 1;
	v->a[48064] = sym_comment;
	v->a[48065] = actions(1760);
	v->a[48066] = 1;
	v->a[48067] = aux_sym_concatenation_token1;
	v->a[48068] = actions(1762);
	v->a[48069] = 1;
	v->a[48070] = sym__concat;
	v->a[48071] = state(787);
	v->a[48072] = 1;
	v->a[48073] = aux_sym_concatenation_repeat1;
	v->a[48074] = actions(1097);
	v->a[48075] = 2;
	v->a[48076] = sym_file_descriptor;
	v->a[48077] = sym__bare_dollar;
	v->a[48078] = actions(1099);
	v->a[48079] = 21;
	small_parse_table_2404(v);
}

void	small_parse_table_2404(t_small_parse_table_array *v)
{
	v->a[48080] = anon_sym_PIPE;
	v->a[48081] = anon_sym_AMP_AMP;
	v->a[48082] = anon_sym_PIPE_PIPE;
	v->a[48083] = anon_sym_LT;
	v->a[48084] = anon_sym_GT;
	v->a[48085] = anon_sym_GT_GT;
	v->a[48086] = anon_sym_LT_AMP;
	v->a[48087] = anon_sym_GT_AMP;
	v->a[48088] = anon_sym_GT_PIPE;
	v->a[48089] = anon_sym_LT_GT;
	v->a[48090] = anon_sym_LT_LT;
	v->a[48091] = anon_sym_LT_LT_DASH;
	v->a[48092] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48093] = anon_sym_DOLLAR;
	v->a[48094] = anon_sym_DQUOTE;
	v->a[48095] = sym_raw_string;
	v->a[48096] = sym_number;
	v->a[48097] = anon_sym_DOLLAR_LBRACE;
	v->a[48098] = anon_sym_DOLLAR_LPAREN;
	v->a[48099] = anon_sym_BQUOTE;
	small_parse_table_2405(v);
}

/* EOF small_parse_table_480.c */
