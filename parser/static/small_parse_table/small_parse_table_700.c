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
	v->a[70000] = anon_sym_AMP_AMP;
	v->a[70001] = anon_sym_PIPE_PIPE;
	v->a[70002] = anon_sym_COMMA;
	v->a[70003] = anon_sym_RPAREN_RPAREN;
	v->a[70004] = anon_sym_PLUS_EQ;
	v->a[70005] = anon_sym_DASH_EQ;
	v->a[70006] = anon_sym_STAR_EQ;
	v->a[70007] = anon_sym_SLASH_EQ;
	v->a[70008] = anon_sym_PERCENT_EQ;
	v->a[70009] = anon_sym_LT_LT_EQ;
	v->a[70010] = anon_sym_GT_GT_EQ;
	v->a[70011] = anon_sym_AMP_EQ;
	v->a[70012] = anon_sym_CARET_EQ;
	v->a[70013] = anon_sym_PIPE_EQ;
	v->a[70014] = anon_sym_EQ_EQ;
	v->a[70015] = anon_sym_BANG_EQ;
	v->a[70016] = anon_sym_LT_EQ;
	v->a[70017] = anon_sym_GT_EQ;
	v->a[70018] = anon_sym_QMARK;
	v->a[70019] = anon_sym_COLON;
	small_parse_table_3501(v);
}

void	small_parse_table_3501(t_small_parse_table_array *v)
{
	v->a[70020] = 3;
	v->a[70021] = actions(57);
	v->a[70022] = 1;
	v->a[70023] = sym_comment;
	v->a[70024] = actions(2772);
	v->a[70025] = 13;
	v->a[70026] = anon_sym_PIPE;
	v->a[70027] = anon_sym_LT;
	v->a[70028] = anon_sym_GT;
	v->a[70029] = anon_sym_AMP_GT;
	v->a[70030] = anon_sym_LT_AMP;
	v->a[70031] = anon_sym_GT_AMP;
	v->a[70032] = anon_sym_LT_LT;
	v->a[70033] = anon_sym_DOLLAR;
	v->a[70034] = aux_sym_number_token1;
	v->a[70035] = aux_sym_number_token2;
	v->a[70036] = anon_sym_DOLLAR_LPAREN;
	v->a[70037] = anon_sym_BQUOTE;
	v->a[70038] = sym_word;
	v->a[70039] = actions(2774);
	small_parse_table_3502(v);
}

void	small_parse_table_3502(t_small_parse_table_array *v)
{
	v->a[70040] = 22;
	v->a[70041] = sym_file_descriptor;
	v->a[70042] = sym__concat;
	v->a[70043] = sym_test_operator;
	v->a[70044] = sym__bare_dollar;
	v->a[70045] = sym__brace_start;
	v->a[70046] = anon_sym_LPAREN;
	v->a[70047] = anon_sym_PIPE_AMP;
	v->a[70048] = anon_sym_AMP_AMP;
	v->a[70049] = anon_sym_PIPE_PIPE;
	v->a[70050] = anon_sym_GT_GT;
	v->a[70051] = anon_sym_AMP_GT_GT;
	v->a[70052] = anon_sym_GT_PIPE;
	v->a[70053] = anon_sym_LT_AMP_DASH;
	v->a[70054] = anon_sym_GT_AMP_DASH;
	v->a[70055] = anon_sym_LT_LT_DASH;
	v->a[70056] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70057] = aux_sym_concatenation_token1;
	v->a[70058] = sym__special_character;
	v->a[70059] = anon_sym_DQUOTE;
	small_parse_table_3503(v);
}

void	small_parse_table_3503(t_small_parse_table_array *v)
{
	v->a[70060] = sym_raw_string;
	v->a[70061] = anon_sym_DOLLAR_LBRACE;
	v->a[70062] = anon_sym_DOLLAR_BQUOTE;
	v->a[70063] = 3;
	v->a[70064] = actions(57);
	v->a[70065] = 1;
	v->a[70066] = sym_comment;
	v->a[70067] = actions(2776);
	v->a[70068] = 13;
	v->a[70069] = anon_sym_PIPE;
	v->a[70070] = anon_sym_LT;
	v->a[70071] = anon_sym_GT;
	v->a[70072] = anon_sym_AMP_GT;
	v->a[70073] = anon_sym_LT_AMP;
	v->a[70074] = anon_sym_GT_AMP;
	v->a[70075] = anon_sym_LT_LT;
	v->a[70076] = anon_sym_DOLLAR;
	v->a[70077] = aux_sym_number_token1;
	v->a[70078] = aux_sym_number_token2;
	v->a[70079] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3504(v);
}

void	small_parse_table_3504(t_small_parse_table_array *v)
{
	v->a[70080] = anon_sym_BQUOTE;
	v->a[70081] = sym_word;
	v->a[70082] = actions(2778);
	v->a[70083] = 22;
	v->a[70084] = sym_file_descriptor;
	v->a[70085] = sym__concat;
	v->a[70086] = sym_test_operator;
	v->a[70087] = sym__bare_dollar;
	v->a[70088] = sym__brace_start;
	v->a[70089] = anon_sym_LPAREN;
	v->a[70090] = anon_sym_PIPE_AMP;
	v->a[70091] = anon_sym_AMP_AMP;
	v->a[70092] = anon_sym_PIPE_PIPE;
	v->a[70093] = anon_sym_GT_GT;
	v->a[70094] = anon_sym_AMP_GT_GT;
	v->a[70095] = anon_sym_GT_PIPE;
	v->a[70096] = anon_sym_LT_AMP_DASH;
	v->a[70097] = anon_sym_GT_AMP_DASH;
	v->a[70098] = anon_sym_LT_LT_DASH;
	v->a[70099] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3505(v);
}

/* EOF small_parse_table_700.c */
