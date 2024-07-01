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
	v->a[70000] = anon_sym_LT_AMP_DASH;
	v->a[70001] = anon_sym_GT_AMP_DASH;
	v->a[70002] = anon_sym_LT_LT;
	v->a[70003] = anon_sym_LT_LT_DASH;
	v->a[70004] = anon_sym_AMP;
	v->a[70005] = anon_sym_BQUOTE;
	v->a[70006] = anon_sym_SEMI;
	v->a[70007] = 3;
	v->a[70008] = actions(3);
	v->a[70009] = 1;
	v->a[70010] = sym_comment;
	v->a[70011] = actions(1283);
	v->a[70012] = 3;
	v->a[70013] = sym_file_descriptor;
	v->a[70014] = sym__concat;
	v->a[70015] = sym_variable_name;
	v->a[70016] = actions(1285);
	v->a[70017] = 18;
	v->a[70018] = anon_sym_LT;
	v->a[70019] = anon_sym_GT;
	small_parse_table_3501(v);
}

void	small_parse_table_3501(t_small_parse_table_array *v)
{
	v->a[70020] = anon_sym_GT_GT;
	v->a[70021] = anon_sym_LT_AMP;
	v->a[70022] = anon_sym_GT_AMP;
	v->a[70023] = anon_sym_GT_PIPE;
	v->a[70024] = anon_sym_LT_AMP_DASH;
	v->a[70025] = anon_sym_GT_AMP_DASH;
	v->a[70026] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70027] = aux_sym_concatenation_token1;
	v->a[70028] = anon_sym_DOLLAR;
	v->a[70029] = anon_sym_DQUOTE;
	v->a[70030] = sym_raw_string;
	v->a[70031] = sym_number;
	v->a[70032] = anon_sym_DOLLAR_LBRACE;
	v->a[70033] = anon_sym_DOLLAR_LPAREN;
	v->a[70034] = anon_sym_BQUOTE;
	v->a[70035] = sym_word;
	v->a[70036] = 3;
	v->a[70037] = actions(3);
	v->a[70038] = 1;
	v->a[70039] = sym_comment;
	small_parse_table_3502(v);
}

void	small_parse_table_3502(t_small_parse_table_array *v)
{
	v->a[70040] = actions(2373);
	v->a[70041] = 3;
	v->a[70042] = sym_file_descriptor;
	v->a[70043] = ts_builtin_sym_end;
	v->a[70044] = aux_sym_heredoc_redirect_token1;
	v->a[70045] = actions(2375);
	v->a[70046] = 18;
	v->a[70047] = anon_sym_PIPE;
	v->a[70048] = anon_sym_RPAREN;
	v->a[70049] = anon_sym_SEMI_SEMI;
	v->a[70050] = anon_sym_AMP_AMP;
	v->a[70051] = anon_sym_PIPE_PIPE;
	v->a[70052] = anon_sym_LT;
	v->a[70053] = anon_sym_GT;
	v->a[70054] = anon_sym_GT_GT;
	v->a[70055] = anon_sym_LT_AMP;
	v->a[70056] = anon_sym_GT_AMP;
	v->a[70057] = anon_sym_GT_PIPE;
	v->a[70058] = anon_sym_LT_AMP_DASH;
	v->a[70059] = anon_sym_GT_AMP_DASH;
	small_parse_table_3503(v);
}

void	small_parse_table_3503(t_small_parse_table_array *v)
{
	v->a[70060] = anon_sym_LT_LT;
	v->a[70061] = anon_sym_LT_LT_DASH;
	v->a[70062] = anon_sym_AMP;
	v->a[70063] = anon_sym_BQUOTE;
	v->a[70064] = anon_sym_SEMI;
	v->a[70065] = 3;
	v->a[70066] = actions(3);
	v->a[70067] = 1;
	v->a[70068] = sym_comment;
	v->a[70069] = actions(2373);
	v->a[70070] = 3;
	v->a[70071] = sym_file_descriptor;
	v->a[70072] = ts_builtin_sym_end;
	v->a[70073] = aux_sym_heredoc_redirect_token1;
	v->a[70074] = actions(2375);
	v->a[70075] = 18;
	v->a[70076] = anon_sym_PIPE;
	v->a[70077] = anon_sym_RPAREN;
	v->a[70078] = anon_sym_SEMI_SEMI;
	v->a[70079] = anon_sym_AMP_AMP;
	small_parse_table_3504(v);
}

void	small_parse_table_3504(t_small_parse_table_array *v)
{
	v->a[70080] = anon_sym_PIPE_PIPE;
	v->a[70081] = anon_sym_LT;
	v->a[70082] = anon_sym_GT;
	v->a[70083] = anon_sym_GT_GT;
	v->a[70084] = anon_sym_LT_AMP;
	v->a[70085] = anon_sym_GT_AMP;
	v->a[70086] = anon_sym_GT_PIPE;
	v->a[70087] = anon_sym_LT_AMP_DASH;
	v->a[70088] = anon_sym_GT_AMP_DASH;
	v->a[70089] = anon_sym_LT_LT;
	v->a[70090] = anon_sym_LT_LT_DASH;
	v->a[70091] = anon_sym_AMP;
	v->a[70092] = anon_sym_BQUOTE;
	v->a[70093] = anon_sym_SEMI;
	v->a[70094] = 3;
	v->a[70095] = actions(3);
	v->a[70096] = 1;
	v->a[70097] = sym_comment;
	v->a[70098] = actions(2377);
	v->a[70099] = 3;
	small_parse_table_3505(v);
}

/* EOF small_parse_table_700.c */
