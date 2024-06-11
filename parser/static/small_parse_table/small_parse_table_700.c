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
	v->a[70000] = anon_sym_GT;
	v->a[70001] = anon_sym_GT_GT;
	v->a[70002] = anon_sym_AMP_GT;
	v->a[70003] = anon_sym_AMP_GT_GT;
	v->a[70004] = anon_sym_LT_AMP;
	v->a[70005] = anon_sym_GT_AMP;
	v->a[70006] = anon_sym_GT_PIPE;
	v->a[70007] = anon_sym_LT_AMP_DASH;
	v->a[70008] = anon_sym_GT_AMP_DASH;
	v->a[70009] = anon_sym_LT_LT;
	v->a[70010] = anon_sym_LT_LT_DASH;
	v->a[70011] = anon_sym_AMP;
	v->a[70012] = anon_sym_BQUOTE;
	v->a[70013] = anon_sym_SEMI;
	v->a[70014] = 13;
	v->a[70015] = actions(3);
	v->a[70016] = 1;
	v->a[70017] = sym_comment;
	v->a[70018] = actions(807);
	v->a[70019] = 1;
	small_parse_table_3501(v);
}

void	small_parse_table_3501(t_small_parse_table_array *v)
{
	v->a[70020] = anon_sym_PIPE;
	v->a[70021] = actions(840);
	v->a[70022] = 1;
	v->a[70023] = anon_sym_RPAREN;
	v->a[70024] = actions(2083);
	v->a[70025] = 1;
	v->a[70026] = sym_file_descriptor;
	v->a[70027] = actions(2300);
	v->a[70028] = 1;
	v->a[70029] = anon_sym_SEMI_SEMI;
	v->a[70030] = actions(2302);
	v->a[70031] = 1;
	v->a[70032] = aux_sym_heredoc_redirect_token1;
	v->a[70033] = actions(2304);
	v->a[70034] = 1;
	v->a[70035] = anon_sym_AMP;
	v->a[70036] = actions(2306);
	v->a[70037] = 1;
	v->a[70038] = anon_sym_SEMI;
	v->a[70039] = actions(859);
	small_parse_table_3502(v);
}

void	small_parse_table_3502(t_small_parse_table_array *v)
{
	v->a[70040] = 2;
	v->a[70041] = anon_sym_AMP_AMP;
	v->a[70042] = anon_sym_PIPE_PIPE;
	v->a[70043] = actions(861);
	v->a[70044] = 2;
	v->a[70045] = anon_sym_LT_LT;
	v->a[70046] = anon_sym_LT_LT_DASH;
	v->a[70047] = actions(2079);
	v->a[70048] = 2;
	v->a[70049] = anon_sym_LT_AMP_DASH;
	v->a[70050] = anon_sym_GT_AMP_DASH;
	v->a[70051] = state(1283);
	v->a[70052] = 3;
	v->a[70053] = sym_file_redirect;
	v->a[70054] = sym_heredoc_redirect;
	v->a[70055] = aux_sym_redirected_statement_repeat1;
	v->a[70056] = actions(2077);
	v->a[70057] = 8;
	v->a[70058] = anon_sym_LT;
	v->a[70059] = anon_sym_GT;
	small_parse_table_3503(v);
}

void	small_parse_table_3503(t_small_parse_table_array *v)
{
	v->a[70060] = anon_sym_GT_GT;
	v->a[70061] = anon_sym_AMP_GT;
	v->a[70062] = anon_sym_AMP_GT_GT;
	v->a[70063] = anon_sym_LT_AMP;
	v->a[70064] = anon_sym_GT_AMP;
	v->a[70065] = anon_sym_GT_PIPE;
	v->a[70066] = 13;
	v->a[70067] = actions(3);
	v->a[70068] = 1;
	v->a[70069] = sym_comment;
	v->a[70070] = actions(807);
	v->a[70071] = 1;
	v->a[70072] = anon_sym_PIPE;
	v->a[70073] = actions(840);
	v->a[70074] = 1;
	v->a[70075] = anon_sym_BQUOTE;
	v->a[70076] = actions(2164);
	v->a[70077] = 1;
	v->a[70078] = sym_file_descriptor;
	v->a[70079] = actions(2308);
	small_parse_table_3504(v);
}

void	small_parse_table_3504(t_small_parse_table_array *v)
{
	v->a[70080] = 1;
	v->a[70081] = anon_sym_SEMI_SEMI;
	v->a[70082] = actions(2310);
	v->a[70083] = 1;
	v->a[70084] = aux_sym_heredoc_redirect_token1;
	v->a[70085] = actions(2312);
	v->a[70086] = 1;
	v->a[70087] = anon_sym_AMP;
	v->a[70088] = actions(2314);
	v->a[70089] = 1;
	v->a[70090] = anon_sym_SEMI;
	v->a[70091] = actions(861);
	v->a[70092] = 2;
	v->a[70093] = anon_sym_LT_LT;
	v->a[70094] = anon_sym_LT_LT_DASH;
	v->a[70095] = actions(1032);
	v->a[70096] = 2;
	v->a[70097] = anon_sym_AMP_AMP;
	v->a[70098] = anon_sym_PIPE_PIPE;
	v->a[70099] = actions(2160);
	small_parse_table_3505(v);
}

/* EOF small_parse_table_700.c */
