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
	v->a[70000] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70001] = actions(2121);
	v->a[70002] = 1;
	v->a[70003] = anon_sym_DOLLAR;
	v->a[70004] = actions(2123);
	v->a[70005] = 1;
	v->a[70006] = anon_sym_DQUOTE;
	v->a[70007] = actions(2125);
	v->a[70008] = 1;
	v->a[70009] = aux_sym_number_token1;
	v->a[70010] = actions(2127);
	v->a[70011] = 1;
	v->a[70012] = aux_sym_number_token2;
	v->a[70013] = actions(2129);
	v->a[70014] = 1;
	v->a[70015] = anon_sym_DOLLAR_LBRACE;
	v->a[70016] = actions(2131);
	v->a[70017] = 1;
	v->a[70018] = anon_sym_DOLLAR_LPAREN;
	v->a[70019] = actions(2133);
	small_parse_table_3501(v);
}

void	small_parse_table_3501(t_small_parse_table_array *v)
{
	v->a[70020] = 1;
	v->a[70021] = anon_sym_BQUOTE;
	v->a[70022] = actions(2135);
	v->a[70023] = 1;
	v->a[70024] = sym_extglob_pattern;
	v->a[70025] = state(1241);
	v->a[70026] = 1;
	v->a[70027] = aux_sym_case_statement_repeat1;
	v->a[70028] = state(1786);
	v->a[70029] = 1;
	v->a[70030] = sym_case_item;
	v->a[70031] = state(2132);
	v->a[70032] = 1;
	v->a[70033] = sym__case_item_last;
	v->a[70034] = actions(2111);
	v->a[70035] = 2;
	v->a[70036] = sym_raw_string;
	v->a[70037] = sym_word;
	v->a[70038] = state(2016);
	v->a[70039] = 2;
	small_parse_table_3502(v);
}

void	small_parse_table_3502(t_small_parse_table_array *v)
{
	v->a[70040] = sym_concatenation;
	v->a[70041] = sym__extglob_blob;
	v->a[70042] = state(1896);
	v->a[70043] = 6;
	v->a[70044] = sym_arithmetic_expansion;
	v->a[70045] = sym_string;
	v->a[70046] = sym_number;
	v->a[70047] = sym_simple_expansion;
	v->a[70048] = sym_expansion;
	v->a[70049] = sym_command_substitution;
	v->a[70050] = 5;
	v->a[70051] = actions(3);
	v->a[70052] = 1;
	v->a[70053] = sym_comment;
	v->a[70054] = actions(1002);
	v->a[70055] = 1;
	v->a[70056] = anon_sym_PIPE;
	v->a[70057] = actions(1071);
	v->a[70058] = 2;
	v->a[70059] = sym_file_descriptor;
	small_parse_table_3503(v);
}

void	small_parse_table_3503(t_small_parse_table_array *v)
{
	v->a[70060] = aux_sym_heredoc_redirect_token1;
	v->a[70061] = state(1160);
	v->a[70062] = 3;
	v->a[70063] = sym_file_redirect;
	v->a[70064] = sym_heredoc_redirect;
	v->a[70065] = aux_sym_redirected_statement_repeat1;
	v->a[70066] = actions(1004);
	v->a[70067] = 17;
	v->a[70068] = anon_sym_SEMI_SEMI;
	v->a[70069] = anon_sym_AMP_AMP;
	v->a[70070] = anon_sym_PIPE_PIPE;
	v->a[70071] = anon_sym_LT;
	v->a[70072] = anon_sym_GT;
	v->a[70073] = anon_sym_GT_GT;
	v->a[70074] = anon_sym_AMP_GT;
	v->a[70075] = anon_sym_AMP_GT_GT;
	v->a[70076] = anon_sym_LT_AMP;
	v->a[70077] = anon_sym_GT_AMP;
	v->a[70078] = anon_sym_GT_PIPE;
	v->a[70079] = anon_sym_LT_AMP_DASH;
	small_parse_table_3504(v);
}

void	small_parse_table_3504(t_small_parse_table_array *v)
{
	v->a[70080] = anon_sym_GT_AMP_DASH;
	v->a[70081] = anon_sym_LT_LT;
	v->a[70082] = anon_sym_LT_LT_DASH;
	v->a[70083] = anon_sym_AMP;
	v->a[70084] = anon_sym_SEMI;
	v->a[70085] = 3;
	v->a[70086] = actions(3);
	v->a[70087] = 1;
	v->a[70088] = sym_comment;
	v->a[70089] = actions(1112);
	v->a[70090] = 3;
	v->a[70091] = sym_file_descriptor;
	v->a[70092] = sym__concat;
	v->a[70093] = aux_sym_heredoc_redirect_token1;
	v->a[70094] = actions(1114);
	v->a[70095] = 20;
	v->a[70096] = anon_sym_esac;
	v->a[70097] = anon_sym_PIPE;
	v->a[70098] = anon_sym_SEMI_SEMI;
	v->a[70099] = anon_sym_AMP_AMP;
	small_parse_table_3505(v);
}

/* EOF small_parse_table_700.c */
