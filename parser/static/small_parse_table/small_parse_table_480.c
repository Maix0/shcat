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
	v->a[48000] = anon_sym_SEMI_AMP;
	v->a[48001] = anon_sym_SEMI_SEMI_AMP;
	v->a[48002] = anon_sym_PIPE_AMP;
	v->a[48003] = anon_sym_AMP_AMP;
	v->a[48004] = anon_sym_PIPE_PIPE;
	v->a[48005] = anon_sym_LT;
	v->a[48006] = anon_sym_GT;
	v->a[48007] = anon_sym_GT_GT;
	v->a[48008] = anon_sym_AMP_GT;
	v->a[48009] = anon_sym_AMP_GT_GT;
	v->a[48010] = anon_sym_LT_AMP;
	v->a[48011] = anon_sym_GT_AMP;
	v->a[48012] = anon_sym_GT_PIPE;
	v->a[48013] = anon_sym_LT_AMP_DASH;
	v->a[48014] = anon_sym_GT_AMP_DASH;
	v->a[48015] = anon_sym_LT_LT;
	v->a[48016] = anon_sym_LT_LT_DASH;
	v->a[48017] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48018] = anon_sym_AMP;
	v->a[48019] = anon_sym_DOLLAR;
	small_parse_table_2401(v);
}

void	small_parse_table_2401(t_small_parse_table_array *v)
{
	v->a[48020] = anon_sym_DQUOTE;
	v->a[48021] = sym_raw_string;
	v->a[48022] = aux_sym_number_token1;
	v->a[48023] = aux_sym_number_token2;
	v->a[48024] = anon_sym_DOLLAR_LBRACE;
	v->a[48025] = anon_sym_DOLLAR_LPAREN;
	v->a[48026] = anon_sym_BQUOTE;
	v->a[48027] = anon_sym_DOLLAR_BQUOTE;
	v->a[48028] = sym_word;
	v->a[48029] = anon_sym_SEMI;
	v->a[48030] = 6;
	v->a[48031] = actions(3);
	v->a[48032] = 1;
	v->a[48033] = sym_comment;
	v->a[48034] = actions(3672);
	v->a[48035] = 1;
	v->a[48036] = sym_variable_name;
	v->a[48037] = actions(3670);
	v->a[48038] = 2;
	v->a[48039] = aux_sym__simple_variable_name_token1;
	small_parse_table_2402(v);
}

void	small_parse_table_2402(t_small_parse_table_array *v)
{
	v->a[48040] = aux_sym__multiline_variable_name_token1;
	v->a[48041] = actions(816);
	v->a[48042] = 3;
	v->a[48043] = sym_file_descriptor;
	v->a[48044] = sym_test_operator;
	v->a[48045] = sym__brace_start;
	v->a[48046] = actions(3668);
	v->a[48047] = 9;
	v->a[48048] = anon_sym_BANG;
	v->a[48049] = anon_sym_DASH;
	v->a[48050] = anon_sym_STAR;
	v->a[48051] = anon_sym_QMARK;
	v->a[48052] = anon_sym_DOLLAR;
	v->a[48053] = anon_sym_POUND;
	v->a[48054] = anon_sym_AT;
	v->a[48055] = anon_sym_0;
	v->a[48056] = anon_sym__;
	v->a[48057] = actions(810);
	v->a[48058] = 24;
	v->a[48059] = anon_sym_AMP_AMP;
	small_parse_table_2403(v);
}

void	small_parse_table_2403(t_small_parse_table_array *v)
{
	v->a[48060] = anon_sym_PIPE_PIPE;
	v->a[48061] = anon_sym_LT;
	v->a[48062] = anon_sym_GT;
	v->a[48063] = anon_sym_GT_GT;
	v->a[48064] = anon_sym_AMP_GT;
	v->a[48065] = anon_sym_AMP_GT_GT;
	v->a[48066] = anon_sym_LT_AMP;
	v->a[48067] = anon_sym_GT_AMP;
	v->a[48068] = anon_sym_GT_PIPE;
	v->a[48069] = anon_sym_LT_AMP_DASH;
	v->a[48070] = anon_sym_GT_AMP_DASH;
	v->a[48071] = aux_sym_heredoc_redirect_token1;
	v->a[48072] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48073] = sym__special_character;
	v->a[48074] = anon_sym_DQUOTE;
	v->a[48075] = sym_raw_string;
	v->a[48076] = aux_sym_number_token1;
	v->a[48077] = aux_sym_number_token2;
	v->a[48078] = anon_sym_DOLLAR_LBRACE;
	v->a[48079] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2404(v);
}

void	small_parse_table_2404(t_small_parse_table_array *v)
{
	v->a[48080] = anon_sym_BQUOTE;
	v->a[48081] = anon_sym_DOLLAR_BQUOTE;
	v->a[48082] = sym_word;
	v->a[48083] = 3;
	v->a[48084] = actions(3);
	v->a[48085] = 1;
	v->a[48086] = sym_comment;
	v->a[48087] = actions(3117);
	v->a[48088] = 5;
	v->a[48089] = sym_file_descriptor;
	v->a[48090] = sym__concat;
	v->a[48091] = sym_test_operator;
	v->a[48092] = sym__brace_start;
	v->a[48093] = aux_sym_heredoc_redirect_token1;
	v->a[48094] = actions(3115);
	v->a[48095] = 34;
	v->a[48096] = anon_sym_PIPE;
	v->a[48097] = anon_sym_SEMI_SEMI;
	v->a[48098] = anon_sym_SEMI_AMP;
	v->a[48099] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_2405(v);
}

/* EOF small_parse_table_480.c */
