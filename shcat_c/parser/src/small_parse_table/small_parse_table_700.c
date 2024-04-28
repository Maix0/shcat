/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_700.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3500(t_small_parse_table_array *v)
{
	v->a[70000] = anon_sym_SEMI_AMP;
	v->a[70001] = anon_sym_SEMI_SEMI_AMP;
	v->a[70002] = anon_sym_PIPE_AMP;
	v->a[70003] = anon_sym_AMP_GT;
	v->a[70004] = anon_sym_AMP_GT_GT;
	v->a[70005] = anon_sym_LT_AMP;
	v->a[70006] = anon_sym_GT_AMP;
	v->a[70007] = anon_sym_GT_PIPE;
	v->a[70008] = anon_sym_LT_AMP_DASH;
	v->a[70009] = anon_sym_GT_AMP_DASH;
	v->a[70010] = anon_sym_LT_LT_DASH;
	v->a[70011] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70012] = anon_sym_DOLLAR_LBRACK;
	v->a[70013] = aux_sym_concatenation_token1;
	v->a[70014] = anon_sym_DOLLAR;
	v->a[70015] = sym__special_character;
	v->a[70016] = anon_sym_DQUOTE;
	v->a[70017] = sym_raw_string;
	v->a[70018] = sym_ansi_c_string;
	v->a[70019] = aux_sym_number_token1;
	small_parse_table_3501(v);
}

void	small_parse_table_3501(t_small_parse_table_array *v)
{
	v->a[70020] = aux_sym_number_token2;
	v->a[70021] = anon_sym_DOLLAR_LBRACE;
	v->a[70022] = anon_sym_DOLLAR_LPAREN;
	v->a[70023] = anon_sym_BQUOTE;
	v->a[70024] = anon_sym_DOLLAR_BQUOTE;
	v->a[70025] = anon_sym_LT_LPAREN;
	v->a[70026] = anon_sym_GT_LPAREN;
	v->a[70027] = sym_word;
	v->a[70028] = 3;
	v->a[70029] = actions(3);
	v->a[70030] = 1;
	v->a[70031] = sym_comment;
	v->a[70032] = actions(1318);
	v->a[70033] = 5;
	v->a[70034] = sym_file_descriptor;
	v->a[70035] = sym__concat;
	v->a[70036] = sym_test_operator;
	v->a[70037] = sym__brace_start;
	v->a[70038] = aux_sym_heredoc_redirect_token1;
	v->a[70039] = actions(1316);
	small_parse_table_3502(v);
}

void	small_parse_table_3502(t_small_parse_table_array *v)
{
	v->a[70040] = 40;
	v->a[70041] = anon_sym_LPAREN_LPAREN;
	v->a[70042] = anon_sym_SEMI;
	v->a[70043] = anon_sym_PIPE_PIPE;
	v->a[70044] = anon_sym_AMP_AMP;
	v->a[70045] = anon_sym_PIPE;
	v->a[70046] = anon_sym_AMP;
	v->a[70047] = anon_sym_LT;
	v->a[70048] = anon_sym_GT;
	v->a[70049] = anon_sym_LT_LT;
	v->a[70050] = anon_sym_GT_GT;
	v->a[70051] = anon_sym_esac;
	v->a[70052] = anon_sym_SEMI_SEMI;
	v->a[70053] = anon_sym_SEMI_AMP;
	v->a[70054] = anon_sym_SEMI_SEMI_AMP;
	v->a[70055] = anon_sym_PIPE_AMP;
	v->a[70056] = anon_sym_AMP_GT;
	v->a[70057] = anon_sym_AMP_GT_GT;
	v->a[70058] = anon_sym_LT_AMP;
	v->a[70059] = anon_sym_GT_AMP;
	small_parse_table_3503(v);
}

void	small_parse_table_3503(t_small_parse_table_array *v)
{
	v->a[70060] = anon_sym_GT_PIPE;
	v->a[70061] = anon_sym_LT_AMP_DASH;
	v->a[70062] = anon_sym_GT_AMP_DASH;
	v->a[70063] = anon_sym_LT_LT_DASH;
	v->a[70064] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70065] = anon_sym_DOLLAR_LBRACK;
	v->a[70066] = aux_sym_concatenation_token1;
	v->a[70067] = anon_sym_DOLLAR;
	v->a[70068] = sym__special_character;
	v->a[70069] = anon_sym_DQUOTE;
	v->a[70070] = sym_raw_string;
	v->a[70071] = sym_ansi_c_string;
	v->a[70072] = aux_sym_number_token1;
	v->a[70073] = aux_sym_number_token2;
	v->a[70074] = anon_sym_DOLLAR_LBRACE;
	v->a[70075] = anon_sym_DOLLAR_LPAREN;
	v->a[70076] = anon_sym_BQUOTE;
	v->a[70077] = anon_sym_DOLLAR_BQUOTE;
	v->a[70078] = anon_sym_LT_LPAREN;
	v->a[70079] = anon_sym_GT_LPAREN;
	small_parse_table_3504(v);
}

void	small_parse_table_3504(t_small_parse_table_array *v)
{
	v->a[70080] = sym_word;
	v->a[70081] = 3;
	v->a[70082] = actions(3);
	v->a[70083] = 1;
	v->a[70084] = sym_comment;
	v->a[70085] = actions(1298);
	v->a[70086] = 5;
	v->a[70087] = sym_file_descriptor;
	v->a[70088] = sym__concat;
	v->a[70089] = sym_test_operator;
	v->a[70090] = sym__brace_start;
	v->a[70091] = aux_sym_heredoc_redirect_token1;
	v->a[70092] = actions(1296);
	v->a[70093] = 40;
	v->a[70094] = anon_sym_LPAREN_LPAREN;
	v->a[70095] = anon_sym_SEMI;
	v->a[70096] = anon_sym_PIPE_PIPE;
	v->a[70097] = anon_sym_AMP_AMP;
	v->a[70098] = anon_sym_PIPE;
	v->a[70099] = anon_sym_AMP;
	small_parse_table_3505(v);
}

/* EOF small_parse_table_700.c */
