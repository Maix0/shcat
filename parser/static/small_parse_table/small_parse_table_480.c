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
	v->a[48000] = 2;
	v->a[48001] = anon_sym_PLUS_PLUS2;
	v->a[48002] = anon_sym_DASH_DASH2;
	v->a[48003] = actions(1408);
	v->a[48004] = 2;
	v->a[48005] = anon_sym_LT;
	v->a[48006] = anon_sym_GT;
	v->a[48007] = actions(1410);
	v->a[48008] = 2;
	v->a[48009] = anon_sym_GT_GT;
	v->a[48010] = anon_sym_LT_LT;
	v->a[48011] = actions(1412);
	v->a[48012] = 2;
	v->a[48013] = anon_sym_LT_EQ;
	v->a[48014] = anon_sym_GT_EQ;
	v->a[48015] = actions(1414);
	v->a[48016] = 2;
	v->a[48017] = anon_sym_PLUS;
	v->a[48018] = anon_sym_DASH;
	v->a[48019] = actions(1416);
	small_parse_table_2401(v);
}

void	small_parse_table_2401(t_small_parse_table_array *v)
{
	v->a[48020] = 2;
	v->a[48021] = anon_sym_EQ_EQ;
	v->a[48022] = anon_sym_BANG_EQ;
	v->a[48023] = actions(1406);
	v->a[48024] = 3;
	v->a[48025] = anon_sym_STAR;
	v->a[48026] = anon_sym_SLASH;
	v->a[48027] = anon_sym_PERCENT;
	v->a[48028] = actions(1543);
	v->a[48029] = 10;
	v->a[48030] = anon_sym_PLUS_EQ;
	v->a[48031] = anon_sym_DASH_EQ;
	v->a[48032] = anon_sym_STAR_EQ;
	v->a[48033] = anon_sym_SLASH_EQ;
	v->a[48034] = anon_sym_PERCENT_EQ;
	v->a[48035] = anon_sym_LT_LT_EQ;
	v->a[48036] = anon_sym_GT_GT_EQ;
	v->a[48037] = anon_sym_AMP_EQ;
	v->a[48038] = anon_sym_CARET_EQ;
	v->a[48039] = anon_sym_PIPE_EQ;
	small_parse_table_2402(v);
}

void	small_parse_table_2402(t_small_parse_table_array *v)
{
	v->a[48040] = 3;
	v->a[48041] = actions(3);
	v->a[48042] = 1;
	v->a[48043] = sym_comment;
	v->a[48044] = actions(1194);
	v->a[48045] = 2;
	v->a[48046] = sym_file_descriptor;
	v->a[48047] = sym__concat;
	v->a[48048] = actions(1196);
	v->a[48049] = 31;
	v->a[48050] = anon_sym_PIPE;
	v->a[48051] = anon_sym_RPAREN;
	v->a[48052] = anon_sym_SEMI_SEMI;
	v->a[48053] = anon_sym_AMP_AMP;
	v->a[48054] = anon_sym_PIPE_PIPE;
	v->a[48055] = anon_sym_LT;
	v->a[48056] = anon_sym_GT;
	v->a[48057] = anon_sym_GT_GT;
	v->a[48058] = anon_sym_AMP_GT;
	v->a[48059] = anon_sym_AMP_GT_GT;
	small_parse_table_2403(v);
}

void	small_parse_table_2403(t_small_parse_table_array *v)
{
	v->a[48060] = anon_sym_LT_AMP;
	v->a[48061] = anon_sym_GT_AMP;
	v->a[48062] = anon_sym_GT_PIPE;
	v->a[48063] = anon_sym_LT_AMP_DASH;
	v->a[48064] = anon_sym_GT_AMP_DASH;
	v->a[48065] = anon_sym_LT_LT;
	v->a[48066] = anon_sym_LT_LT_DASH;
	v->a[48067] = aux_sym_heredoc_redirect_token1;
	v->a[48068] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48069] = anon_sym_AMP;
	v->a[48070] = aux_sym_concatenation_token1;
	v->a[48071] = anon_sym_DOLLAR;
	v->a[48072] = anon_sym_DQUOTE;
	v->a[48073] = sym_raw_string;
	v->a[48074] = aux_sym_number_token1;
	v->a[48075] = aux_sym_number_token2;
	v->a[48076] = anon_sym_DOLLAR_LBRACE;
	v->a[48077] = anon_sym_DOLLAR_LPAREN;
	v->a[48078] = anon_sym_BQUOTE;
	v->a[48079] = sym_word;
	small_parse_table_2404(v);
}

void	small_parse_table_2404(t_small_parse_table_array *v)
{
	v->a[48080] = anon_sym_SEMI;
	v->a[48081] = 3;
	v->a[48082] = actions(3);
	v->a[48083] = 1;
	v->a[48084] = sym_comment;
	v->a[48085] = actions(1251);
	v->a[48086] = 2;
	v->a[48087] = sym_file_descriptor;
	v->a[48088] = sym__concat;
	v->a[48089] = actions(1253);
	v->a[48090] = 31;
	v->a[48091] = anon_sym_PIPE;
	v->a[48092] = anon_sym_RPAREN;
	v->a[48093] = anon_sym_SEMI_SEMI;
	v->a[48094] = anon_sym_AMP_AMP;
	v->a[48095] = anon_sym_PIPE_PIPE;
	v->a[48096] = anon_sym_LT;
	v->a[48097] = anon_sym_GT;
	v->a[48098] = anon_sym_GT_GT;
	v->a[48099] = anon_sym_AMP_GT;
	small_parse_table_2405(v);
}

/* EOF small_parse_table_480.c */
