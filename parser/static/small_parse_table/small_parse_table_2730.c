/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2730.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13650(t_small_parse_table_array *v)
{
	v->a[273000] = anon_sym_AMP_GT;
	v->a[273001] = anon_sym_AMP_GT_GT;
	v->a[273002] = anon_sym_LT_AMP;
	v->a[273003] = anon_sym_GT_AMP;
	v->a[273004] = anon_sym_GT_PIPE;
	v->a[273005] = anon_sym_LT_AMP_DASH;
	v->a[273006] = anon_sym_GT_AMP_DASH;
	v->a[273007] = anon_sym_LT_LT_DASH;
	v->a[273008] = 6;
	v->a[273009] = actions(3);
	v->a[273010] = 1;
	v->a[273011] = sym_comment;
	v->a[273012] = actions(11568);
	v->a[273013] = 1;
	v->a[273014] = aux_sym_concatenation_token1;
	v->a[273015] = actions(12319);
	v->a[273016] = 1;
	v->a[273017] = sym__concat;
	v->a[273018] = state(4520);
	v->a[273019] = 1;
	small_parse_table_13651(v);
}

void	small_parse_table_13651(t_small_parse_table_array *v)
{
	v->a[273020] = aux_sym_concatenation_repeat1;
	v->a[273021] = actions(1267);
	v->a[273022] = 3;
	v->a[273023] = sym_test_operator;
	v->a[273024] = sym__brace_start;
	v->a[273025] = aux_sym_heredoc_redirect_token1;
	v->a[273026] = actions(1265);
	v->a[273027] = 17;
	v->a[273028] = anon_sym_LPAREN_LPAREN;
	v->a[273029] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[273030] = anon_sym_DOLLAR_LBRACK;
	v->a[273031] = anon_sym_DOLLAR;
	v->a[273032] = sym__special_character;
	v->a[273033] = anon_sym_DQUOTE;
	v->a[273034] = sym_raw_string;
	v->a[273035] = sym_ansi_c_string;
	v->a[273036] = aux_sym_number_token1;
	v->a[273037] = aux_sym_number_token2;
	v->a[273038] = anon_sym_DOLLAR_LBRACE;
	v->a[273039] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_13652(v);
}

void	small_parse_table_13652(t_small_parse_table_array *v)
{
	v->a[273040] = anon_sym_BQUOTE;
	v->a[273041] = anon_sym_DOLLAR_BQUOTE;
	v->a[273042] = anon_sym_LT_LPAREN;
	v->a[273043] = anon_sym_GT_LPAREN;
	v->a[273044] = sym_word;
	v->a[273045] = 6;
	v->a[273046] = actions(3);
	v->a[273047] = 1;
	v->a[273048] = sym_comment;
	v->a[273049] = actions(12317);
	v->a[273050] = 1;
	v->a[273051] = anon_sym_LT_LT_LT;
	v->a[273052] = state(4912);
	v->a[273053] = 1;
	v->a[273054] = sym_herestring_redirect;
	v->a[273055] = actions(4348);
	v->a[273056] = 2;
	v->a[273057] = sym_file_descriptor;
	v->a[273058] = aux_sym_heredoc_redirect_token1;
	v->a[273059] = state(5366);
	small_parse_table_13653(v);
}

void	small_parse_table_13653(t_small_parse_table_array *v)
{
	v->a[273060] = 3;
	v->a[273061] = sym_file_redirect;
	v->a[273062] = sym_heredoc_redirect;
	v->a[273063] = aux_sym_redirected_statement_repeat1;
	v->a[273064] = actions(4253);
	v->a[273065] = 16;
	v->a[273066] = anon_sym_PIPE_PIPE;
	v->a[273067] = anon_sym_AMP_AMP;
	v->a[273068] = anon_sym_PIPE;
	v->a[273069] = anon_sym_LT;
	v->a[273070] = anon_sym_GT;
	v->a[273071] = anon_sym_LT_LT;
	v->a[273072] = anon_sym_GT_GT;
	v->a[273073] = anon_sym_PIPE_AMP;
	v->a[273074] = anon_sym_AMP_GT;
	v->a[273075] = anon_sym_AMP_GT_GT;
	v->a[273076] = anon_sym_LT_AMP;
	v->a[273077] = anon_sym_GT_AMP;
	v->a[273078] = anon_sym_GT_PIPE;
	v->a[273079] = anon_sym_LT_AMP_DASH;
	small_parse_table_13654(v);
}

void	small_parse_table_13654(t_small_parse_table_array *v)
{
	v->a[273080] = anon_sym_GT_AMP_DASH;
	v->a[273081] = anon_sym_LT_LT_DASH;
	v->a[273082] = 6;
	v->a[273083] = actions(71);
	v->a[273084] = 1;
	v->a[273085] = sym_comment;
	v->a[273086] = actions(12309);
	v->a[273087] = 1;
	v->a[273088] = aux_sym_concatenation_token1;
	v->a[273089] = actions(12321);
	v->a[273090] = 1;
	v->a[273091] = sym__concat;
	v->a[273092] = state(5038);
	v->a[273093] = 1;
	v->a[273094] = aux_sym_concatenation_repeat1;
	v->a[273095] = actions(1286);
	v->a[273096] = 6;
	v->a[273097] = anon_sym_DOLLAR;
	v->a[273098] = aux_sym_number_token1;
	v->a[273099] = aux_sym_number_token2;
	small_parse_table_13655(v);
}

/* EOF small_parse_table_2730.c */
