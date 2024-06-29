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
	v->a[48000] = anon_sym_until;
	v->a[48001] = anon_sym_if;
	v->a[48002] = anon_sym_case;
	v->a[48003] = anon_sym_LPAREN;
	v->a[48004] = anon_sym_LBRACE;
	v->a[48005] = anon_sym_BANG;
	v->a[48006] = anon_sym_LT;
	v->a[48007] = anon_sym_GT;
	v->a[48008] = anon_sym_GT_GT;
	v->a[48009] = anon_sym_AMP_GT;
	v->a[48010] = anon_sym_AMP_GT_GT;
	v->a[48011] = anon_sym_LT_AMP;
	v->a[48012] = anon_sym_GT_AMP;
	v->a[48013] = anon_sym_GT_PIPE;
	v->a[48014] = anon_sym_LT_AMP_DASH;
	v->a[48015] = anon_sym_GT_AMP_DASH;
	v->a[48016] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48017] = anon_sym_DOLLAR;
	v->a[48018] = anon_sym_DQUOTE;
	v->a[48019] = sym_raw_string;
	small_parse_table_2401(v);
}

void	small_parse_table_2401(t_small_parse_table_array *v)
{
	v->a[48020] = sym_number;
	v->a[48021] = anon_sym_DOLLAR_LBRACE;
	v->a[48022] = anon_sym_DOLLAR_LPAREN;
	v->a[48023] = anon_sym_BQUOTE;
	v->a[48024] = sym_word;
	v->a[48025] = 4;
	v->a[48026] = actions(3);
	v->a[48027] = 1;
	v->a[48028] = sym_comment;
	v->a[48029] = actions(1522);
	v->a[48030] = 2;
	v->a[48031] = anon_sym_RPAREN;
	v->a[48032] = anon_sym_SEMI_SEMI;
	v->a[48033] = actions(1524);
	v->a[48034] = 2;
	v->a[48035] = sym_file_descriptor;
	v->a[48036] = sym_variable_name;
	v->a[48037] = actions(1520);
	v->a[48038] = 27;
	v->a[48039] = anon_sym_for;
	small_parse_table_2402(v);
}

void	small_parse_table_2402(t_small_parse_table_array *v)
{
	v->a[48040] = anon_sym_while;
	v->a[48041] = anon_sym_until;
	v->a[48042] = anon_sym_if;
	v->a[48043] = anon_sym_case;
	v->a[48044] = anon_sym_LPAREN;
	v->a[48045] = anon_sym_LBRACE;
	v->a[48046] = anon_sym_BANG;
	v->a[48047] = anon_sym_LT;
	v->a[48048] = anon_sym_GT;
	v->a[48049] = anon_sym_GT_GT;
	v->a[48050] = anon_sym_AMP_GT;
	v->a[48051] = anon_sym_AMP_GT_GT;
	v->a[48052] = anon_sym_LT_AMP;
	v->a[48053] = anon_sym_GT_AMP;
	v->a[48054] = anon_sym_GT_PIPE;
	v->a[48055] = anon_sym_LT_AMP_DASH;
	v->a[48056] = anon_sym_GT_AMP_DASH;
	v->a[48057] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48058] = anon_sym_DOLLAR;
	v->a[48059] = anon_sym_DQUOTE;
	small_parse_table_2403(v);
}

void	small_parse_table_2403(t_small_parse_table_array *v)
{
	v->a[48060] = sym_raw_string;
	v->a[48061] = sym_number;
	v->a[48062] = anon_sym_DOLLAR_LBRACE;
	v->a[48063] = anon_sym_DOLLAR_LPAREN;
	v->a[48064] = anon_sym_BQUOTE;
	v->a[48065] = sym_word;
	v->a[48066] = 3;
	v->a[48067] = actions(3);
	v->a[48068] = 1;
	v->a[48069] = sym_comment;
	v->a[48070] = actions(538);
	v->a[48071] = 3;
	v->a[48072] = sym_file_descriptor;
	v->a[48073] = sym_variable_name;
	v->a[48074] = ts_builtin_sym_end;
	v->a[48075] = actions(540);
	v->a[48076] = 28;
	v->a[48077] = anon_sym_PIPE;
	v->a[48078] = anon_sym_SEMI_SEMI;
	v->a[48079] = anon_sym_AMP_AMP;
	small_parse_table_2404(v);
}

void	small_parse_table_2404(t_small_parse_table_array *v)
{
	v->a[48080] = anon_sym_PIPE_PIPE;
	v->a[48081] = anon_sym_LT;
	v->a[48082] = anon_sym_GT;
	v->a[48083] = anon_sym_GT_GT;
	v->a[48084] = anon_sym_AMP_GT;
	v->a[48085] = anon_sym_AMP_GT_GT;
	v->a[48086] = anon_sym_LT_AMP;
	v->a[48087] = anon_sym_GT_AMP;
	v->a[48088] = anon_sym_GT_PIPE;
	v->a[48089] = anon_sym_LT_AMP_DASH;
	v->a[48090] = anon_sym_GT_AMP_DASH;
	v->a[48091] = anon_sym_LT_LT;
	v->a[48092] = anon_sym_LT_LT_DASH;
	v->a[48093] = aux_sym_heredoc_redirect_token1;
	v->a[48094] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48095] = anon_sym_AMP;
	v->a[48096] = anon_sym_DOLLAR;
	v->a[48097] = anon_sym_DQUOTE;
	v->a[48098] = sym_raw_string;
	v->a[48099] = sym_number;
	small_parse_table_2405(v);
}

/* EOF small_parse_table_480.c */
