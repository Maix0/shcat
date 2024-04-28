/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1600.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8000(t_small_parse_table_array *v)
{
	v->a[160000] = anon_sym_AT2;
	v->a[160001] = anon_sym_0;
	v->a[160002] = anon_sym__;
	v->a[160003] = actions(1239);
	v->a[160004] = 22;
	v->a[160005] = anon_sym_SEMI;
	v->a[160006] = anon_sym_PIPE_PIPE;
	v->a[160007] = anon_sym_AMP_AMP;
	v->a[160008] = anon_sym_PIPE;
	v->a[160009] = anon_sym_AMP;
	v->a[160010] = anon_sym_LT;
	v->a[160011] = anon_sym_GT;
	v->a[160012] = anon_sym_LT_LT;
	v->a[160013] = anon_sym_GT_GT;
	v->a[160014] = anon_sym_SEMI_SEMI;
	v->a[160015] = anon_sym_SEMI_AMP;
	v->a[160016] = anon_sym_SEMI_SEMI_AMP;
	v->a[160017] = anon_sym_PIPE_AMP;
	v->a[160018] = anon_sym_AMP_GT;
	v->a[160019] = anon_sym_AMP_GT_GT;
	small_parse_table_8001(v);
}

void	small_parse_table_8001(t_small_parse_table_array *v)
{
	v->a[160020] = anon_sym_LT_AMP;
	v->a[160021] = anon_sym_GT_AMP;
	v->a[160022] = anon_sym_GT_PIPE;
	v->a[160023] = anon_sym_LT_AMP_DASH;
	v->a[160024] = anon_sym_GT_AMP_DASH;
	v->a[160025] = anon_sym_LT_LT_DASH;
	v->a[160026] = aux_sym_heredoc_redirect_token1;
	v->a[160027] = 9;
	v->a[160028] = actions(3);
	v->a[160029] = 1;
	v->a[160030] = sym_comment;
	v->a[160031] = actions(7272);
	v->a[160032] = 1;
	v->a[160033] = anon_sym_STAR_STAR;
	v->a[160034] = actions(7274);
	v->a[160035] = 1;
	v->a[160036] = aux_sym_heredoc_redirect_token1;
	v->a[160037] = actions(7250);
	v->a[160038] = 2;
	v->a[160039] = anon_sym_PLUS_PLUS;
	small_parse_table_8002(v);
}

void	small_parse_table_8002(t_small_parse_table_array *v)
{
	v->a[160040] = anon_sym_DASH_DASH;
	v->a[160041] = actions(7266);
	v->a[160042] = 2;
	v->a[160043] = anon_sym_LT_LT;
	v->a[160044] = anon_sym_GT_GT;
	v->a[160045] = actions(7268);
	v->a[160046] = 2;
	v->a[160047] = anon_sym_PLUS;
	v->a[160048] = anon_sym_DASH;
	v->a[160049] = actions(7270);
	v->a[160050] = 3;
	v->a[160051] = anon_sym_STAR;
	v->a[160052] = anon_sym_SLASH;
	v->a[160053] = anon_sym_PERCENT;
	v->a[160054] = actions(7264);
	v->a[160055] = 4;
	v->a[160056] = anon_sym_LT;
	v->a[160057] = anon_sym_GT;
	v->a[160058] = anon_sym_LT_EQ;
	v->a[160059] = anon_sym_GT_EQ;
	small_parse_table_8003(v);
}

void	small_parse_table_8003(t_small_parse_table_array *v)
{
	v->a[160060] = actions(7248);
	v->a[160061] = 22;
	v->a[160062] = anon_sym_SEMI;
	v->a[160063] = anon_sym_COMMA;
	v->a[160064] = anon_sym_PLUS_EQ;
	v->a[160065] = anon_sym_DASH_EQ;
	v->a[160066] = anon_sym_STAR_EQ;
	v->a[160067] = anon_sym_SLASH_EQ;
	v->a[160068] = anon_sym_PERCENT_EQ;
	v->a[160069] = anon_sym_STAR_STAR_EQ;
	v->a[160070] = anon_sym_LT_LT_EQ;
	v->a[160071] = anon_sym_GT_GT_EQ;
	v->a[160072] = anon_sym_AMP_EQ;
	v->a[160073] = anon_sym_CARET_EQ;
	v->a[160074] = anon_sym_PIPE_EQ;
	v->a[160075] = anon_sym_PIPE_PIPE;
	v->a[160076] = anon_sym_DASHo;
	v->a[160077] = anon_sym_AMP_AMP;
	v->a[160078] = anon_sym_DASHa;
	v->a[160079] = anon_sym_PIPE;
	small_parse_table_8004(v);
}

void	small_parse_table_8004(t_small_parse_table_array *v)
{
	v->a[160080] = anon_sym_CARET;
	v->a[160081] = anon_sym_AMP;
	v->a[160082] = anon_sym_EQ_EQ;
	v->a[160083] = anon_sym_BANG_EQ;
	v->a[160084] = 3;
	v->a[160085] = actions(3);
	v->a[160086] = 1;
	v->a[160087] = sym_comment;
	v->a[160088] = actions(1322);
	v->a[160089] = 1;
	v->a[160090] = aux_sym_heredoc_redirect_token1;
	v->a[160091] = actions(1320);
	v->a[160092] = 36;
	v->a[160093] = anon_sym_SEMI;
	v->a[160094] = anon_sym_COMMA;
	v->a[160095] = anon_sym_PLUS_PLUS;
	v->a[160096] = anon_sym_DASH_DASH;
	v->a[160097] = anon_sym_PLUS_EQ;
	v->a[160098] = anon_sym_DASH_EQ;
	v->a[160099] = anon_sym_STAR_EQ;
	small_parse_table_8005(v);
}

/* EOF small_parse_table_1600.c */
