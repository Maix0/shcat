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
	v->a[70000] = anon_sym_LT_AMP;
	v->a[70001] = anon_sym_GT_AMP;
	v->a[70002] = anon_sym_GT_PIPE;
	v->a[70003] = anon_sym_LT_GT;
	v->a[70004] = 9;
	v->a[70005] = actions(664);
	v->a[70006] = 1;
	v->a[70007] = sym_comment;
	v->a[70008] = actions(1953);
	v->a[70009] = 1;
	v->a[70010] = anon_sym_PIPE;
	v->a[70011] = actions(2752);
	v->a[70012] = 1;
	v->a[70013] = anon_sym_LT_LT;
	v->a[70014] = actions(2754);
	v->a[70015] = 1;
	v->a[70016] = anon_sym_LT_LT_DASH;
	v->a[70017] = actions(2756);
	v->a[70018] = 1;
	v->a[70019] = sym_file_descriptor;
	small_parse_table_3501(v);
}

void	small_parse_table_3501(t_small_parse_table_array *v)
{
	v->a[70020] = actions(1955);
	v->a[70021] = 2;
	v->a[70022] = anon_sym_AMP_AMP;
	v->a[70023] = anon_sym_PIPE_PIPE;
	v->a[70024] = actions(2748);
	v->a[70025] = 2;
	v->a[70026] = anon_sym_LT;
	v->a[70027] = anon_sym_GT;
	v->a[70028] = state(1369);
	v->a[70029] = 3;
	v->a[70030] = sym_file_redirect;
	v->a[70031] = sym_heredoc_redirect;
	v->a[70032] = aux_sym_redirected_statement_repeat1;
	v->a[70033] = actions(2750);
	v->a[70034] = 5;
	v->a[70035] = anon_sym_GT_GT;
	v->a[70036] = anon_sym_LT_AMP;
	v->a[70037] = anon_sym_GT_AMP;
	v->a[70038] = anon_sym_GT_PIPE;
	v->a[70039] = anon_sym_LT_GT;
	small_parse_table_3502(v);
}

void	small_parse_table_3502(t_small_parse_table_array *v)
{
	v->a[70040] = 3;
	v->a[70041] = actions(664);
	v->a[70042] = 1;
	v->a[70043] = sym_comment;
	v->a[70044] = actions(906);
	v->a[70045] = 4;
	v->a[70046] = anon_sym_PIPE;
	v->a[70047] = anon_sym_LT;
	v->a[70048] = anon_sym_GT;
	v->a[70049] = anon_sym_LT_LT;
	v->a[70050] = actions(908);
	v->a[70051] = 12;
	v->a[70052] = sym_file_descriptor;
	v->a[70053] = sym__concat;
	v->a[70054] = sym_variable_name;
	v->a[70055] = anon_sym_AMP_AMP;
	v->a[70056] = anon_sym_PIPE_PIPE;
	v->a[70057] = anon_sym_GT_GT;
	v->a[70058] = anon_sym_LT_AMP;
	v->a[70059] = anon_sym_GT_AMP;
	small_parse_table_3503(v);
}

void	small_parse_table_3503(t_small_parse_table_array *v)
{
	v->a[70060] = anon_sym_GT_PIPE;
	v->a[70061] = anon_sym_LT_GT;
	v->a[70062] = anon_sym_LT_LT_DASH;
	v->a[70063] = aux_sym_concatenation_token1;
	v->a[70064] = 10;
	v->a[70065] = actions(3);
	v->a[70066] = 1;
	v->a[70067] = sym_comment;
	v->a[70068] = actions(871);
	v->a[70069] = 1;
	v->a[70070] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70071] = actions(873);
	v->a[70072] = 1;
	v->a[70073] = anon_sym_DOLLAR;
	v->a[70074] = actions(875);
	v->a[70075] = 1;
	v->a[70076] = anon_sym_DQUOTE;
	v->a[70077] = actions(877);
	v->a[70078] = 1;
	v->a[70079] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3504(v);
}

void	small_parse_table_3504(t_small_parse_table_array *v)
{
	v->a[70080] = actions(879);
	v->a[70081] = 1;
	v->a[70082] = anon_sym_DOLLAR_LPAREN;
	v->a[70083] = actions(881);
	v->a[70084] = 1;
	v->a[70085] = anon_sym_BQUOTE;
	v->a[70086] = state(264);
	v->a[70087] = 2;
	v->a[70088] = sym_concatenation;
	v->a[70089] = aux_sym_for_statement_repeat1;
	v->a[70090] = actions(947);
	v->a[70091] = 3;
	v->a[70092] = sym_raw_string;
	v->a[70093] = sym_number;
	v->a[70094] = sym_word;
	v->a[70095] = state(616);
	v->a[70096] = 5;
	v->a[70097] = sym_arithmetic_expansion;
	v->a[70098] = sym_string;
	v->a[70099] = sym_simple_expansion;
	small_parse_table_3505(v);
}

/* EOF small_parse_table_700.c */
