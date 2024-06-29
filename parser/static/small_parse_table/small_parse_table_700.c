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
	v->a[70000] = 3;
	v->a[70001] = sym_file_descriptor;
	v->a[70002] = ts_builtin_sym_end;
	v->a[70003] = aux_sym_heredoc_redirect_token1;
	v->a[70004] = actions(2340);
	v->a[70005] = 20;
	v->a[70006] = anon_sym_PIPE;
	v->a[70007] = anon_sym_RPAREN;
	v->a[70008] = anon_sym_SEMI_SEMI;
	v->a[70009] = anon_sym_AMP_AMP;
	v->a[70010] = anon_sym_PIPE_PIPE;
	v->a[70011] = anon_sym_LT;
	v->a[70012] = anon_sym_GT;
	v->a[70013] = anon_sym_GT_GT;
	v->a[70014] = anon_sym_AMP_GT;
	v->a[70015] = anon_sym_AMP_GT_GT;
	v->a[70016] = anon_sym_LT_AMP;
	v->a[70017] = anon_sym_GT_AMP;
	v->a[70018] = anon_sym_GT_PIPE;
	v->a[70019] = anon_sym_LT_AMP_DASH;
	small_parse_table_3501(v);
}

void	small_parse_table_3501(t_small_parse_table_array *v)
{
	v->a[70020] = anon_sym_GT_AMP_DASH;
	v->a[70021] = anon_sym_LT_LT;
	v->a[70022] = anon_sym_LT_LT_DASH;
	v->a[70023] = anon_sym_AMP;
	v->a[70024] = anon_sym_BQUOTE;
	v->a[70025] = anon_sym_SEMI;
	v->a[70026] = 3;
	v->a[70027] = actions(3);
	v->a[70028] = 1;
	v->a[70029] = sym_comment;
	v->a[70030] = actions(1100);
	v->a[70031] = 3;
	v->a[70032] = sym_file_descriptor;
	v->a[70033] = sym__concat;
	v->a[70034] = aux_sym_heredoc_redirect_token1;
	v->a[70035] = actions(1098);
	v->a[70036] = 20;
	v->a[70037] = anon_sym_esac;
	v->a[70038] = anon_sym_PIPE;
	v->a[70039] = anon_sym_SEMI_SEMI;
	small_parse_table_3502(v);
}

void	small_parse_table_3502(t_small_parse_table_array *v)
{
	v->a[70040] = anon_sym_AMP_AMP;
	v->a[70041] = anon_sym_PIPE_PIPE;
	v->a[70042] = anon_sym_LT;
	v->a[70043] = anon_sym_GT;
	v->a[70044] = anon_sym_GT_GT;
	v->a[70045] = anon_sym_AMP_GT;
	v->a[70046] = anon_sym_AMP_GT_GT;
	v->a[70047] = anon_sym_LT_AMP;
	v->a[70048] = anon_sym_GT_AMP;
	v->a[70049] = anon_sym_GT_PIPE;
	v->a[70050] = anon_sym_LT_AMP_DASH;
	v->a[70051] = anon_sym_GT_AMP_DASH;
	v->a[70052] = anon_sym_LT_LT;
	v->a[70053] = anon_sym_LT_LT_DASH;
	v->a[70054] = anon_sym_AMP;
	v->a[70055] = aux_sym_concatenation_token1;
	v->a[70056] = anon_sym_SEMI;
	v->a[70057] = 10;
	v->a[70058] = actions(3);
	v->a[70059] = 1;
	small_parse_table_3503(v);
}

void	small_parse_table_3503(t_small_parse_table_array *v)
{
	v->a[70060] = sym_comment;
	v->a[70061] = actions(2066);
	v->a[70062] = 1;
	v->a[70063] = sym_file_descriptor;
	v->a[70064] = actions(2195);
	v->a[70065] = 1;
	v->a[70066] = aux_sym_heredoc_redirect_token1;
	v->a[70067] = state(773);
	v->a[70068] = 1;
	v->a[70069] = sym_terminator;
	v->a[70070] = actions(804);
	v->a[70071] = 2;
	v->a[70072] = anon_sym_LT_LT;
	v->a[70073] = anon_sym_LT_LT_DASH;
	v->a[70074] = actions(893);
	v->a[70075] = 2;
	v->a[70076] = anon_sym_AMP_AMP;
	v->a[70077] = anon_sym_PIPE_PIPE;
	v->a[70078] = actions(2064);
	v->a[70079] = 2;
	small_parse_table_3504(v);
}

void	small_parse_table_3504(t_small_parse_table_array *v)
{
	v->a[70080] = anon_sym_LT_AMP_DASH;
	v->a[70081] = anon_sym_GT_AMP_DASH;
	v->a[70082] = actions(951);
	v->a[70083] = 3;
	v->a[70084] = anon_sym_SEMI_SEMI;
	v->a[70085] = anon_sym_AMP;
	v->a[70086] = anon_sym_SEMI;
	v->a[70087] = state(1256);
	v->a[70088] = 3;
	v->a[70089] = sym_file_redirect;
	v->a[70090] = sym_heredoc_redirect;
	v->a[70091] = aux_sym_redirected_statement_repeat1;
	v->a[70092] = actions(2062);
	v->a[70093] = 8;
	v->a[70094] = anon_sym_LT;
	v->a[70095] = anon_sym_GT;
	v->a[70096] = anon_sym_GT_GT;
	v->a[70097] = anon_sym_AMP_GT;
	v->a[70098] = anon_sym_AMP_GT_GT;
	v->a[70099] = anon_sym_LT_AMP;
	small_parse_table_3505(v);
}

/* EOF small_parse_table_700.c */
