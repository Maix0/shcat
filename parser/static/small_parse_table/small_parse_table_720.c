/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_720.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3600(t_small_parse_table_array *v)
{
	v->a[72000] = actions(2824);
	v->a[72001] = 5;
	v->a[72002] = anon_sym_GT_GT;
	v->a[72003] = anon_sym_LT_AMP;
	v->a[72004] = anon_sym_GT_AMP;
	v->a[72005] = anon_sym_GT_PIPE;
	v->a[72006] = anon_sym_LT_GT;
	v->a[72007] = 7;
	v->a[72008] = actions(664);
	v->a[72009] = 1;
	v->a[72010] = sym_comment;
	v->a[72011] = actions(2830);
	v->a[72012] = 1;
	v->a[72013] = sym_file_descriptor;
	v->a[72014] = actions(2053);
	v->a[72015] = 2;
	v->a[72016] = anon_sym_PIPE;
	v->a[72017] = anon_sym_LT_LT;
	v->a[72018] = actions(2748);
	v->a[72019] = 2;
	small_parse_table_3601(v);
}

void	small_parse_table_3601(t_small_parse_table_array *v)
{
	v->a[72020] = anon_sym_LT;
	v->a[72021] = anon_sym_GT;
	v->a[72022] = state(1448);
	v->a[72023] = 2;
	v->a[72024] = sym_file_redirect;
	v->a[72025] = aux_sym_redirected_statement_repeat2;
	v->a[72026] = actions(2051);
	v->a[72027] = 3;
	v->a[72028] = anon_sym_AMP_AMP;
	v->a[72029] = anon_sym_PIPE_PIPE;
	v->a[72030] = anon_sym_LT_LT_DASH;
	v->a[72031] = actions(2750);
	v->a[72032] = 5;
	v->a[72033] = anon_sym_GT_GT;
	v->a[72034] = anon_sym_LT_AMP;
	v->a[72035] = anon_sym_GT_AMP;
	v->a[72036] = anon_sym_GT_PIPE;
	v->a[72037] = anon_sym_LT_GT;
	v->a[72038] = 3;
	v->a[72039] = actions(3);
	small_parse_table_3602(v);
}

void	small_parse_table_3602(t_small_parse_table_array *v)
{
	v->a[72040] = 1;
	v->a[72041] = sym_comment;
	v->a[72042] = actions(1093);
	v->a[72043] = 1;
	v->a[72044] = sym__concat;
	v->a[72045] = actions(1088);
	v->a[72046] = 14;
	v->a[72047] = anon_sym_SEMI_SEMI;
	v->a[72048] = aux_sym_heredoc_redirect_token1;
	v->a[72049] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72050] = anon_sym_AMP;
	v->a[72051] = aux_sym_concatenation_token1;
	v->a[72052] = anon_sym_DOLLAR;
	v->a[72053] = anon_sym_DQUOTE;
	v->a[72054] = sym_raw_string;
	v->a[72055] = sym_number;
	v->a[72056] = anon_sym_DOLLAR_LBRACE;
	v->a[72057] = anon_sym_DOLLAR_LPAREN;
	v->a[72058] = anon_sym_BQUOTE;
	v->a[72059] = sym_word;
	small_parse_table_3603(v);
}

void	small_parse_table_3603(t_small_parse_table_array *v)
{
	v->a[72060] = anon_sym_SEMI;
	v->a[72061] = 8;
	v->a[72062] = actions(664);
	v->a[72063] = 1;
	v->a[72064] = sym_comment;
	v->a[72065] = actions(744);
	v->a[72066] = 1;
	v->a[72067] = anon_sym_LT_LT;
	v->a[72068] = actions(1841);
	v->a[72069] = 1;
	v->a[72070] = sym_file_descriptor;
	v->a[72071] = actions(2786);
	v->a[72072] = 1;
	v->a[72073] = anon_sym_LT_LT_DASH;
	v->a[72074] = actions(1837);
	v->a[72075] = 2;
	v->a[72076] = anon_sym_LT;
	v->a[72077] = anon_sym_GT;
	v->a[72078] = actions(2832);
	v->a[72079] = 2;
	small_parse_table_3604(v);
}

void	small_parse_table_3604(t_small_parse_table_array *v)
{
	v->a[72080] = anon_sym_AMP_AMP;
	v->a[72081] = anon_sym_PIPE_PIPE;
	v->a[72082] = state(1073);
	v->a[72083] = 3;
	v->a[72084] = sym_file_redirect;
	v->a[72085] = sym_heredoc_redirect;
	v->a[72086] = aux_sym_redirected_statement_repeat1;
	v->a[72087] = actions(2834);
	v->a[72088] = 5;
	v->a[72089] = anon_sym_GT_GT;
	v->a[72090] = anon_sym_LT_AMP;
	v->a[72091] = anon_sym_GT_AMP;
	v->a[72092] = anon_sym_GT_PIPE;
	v->a[72093] = anon_sym_LT_GT;
	v->a[72094] = 3;
	v->a[72095] = actions(3);
	v->a[72096] = 1;
	v->a[72097] = sym_comment;
	v->a[72098] = actions(766);
	v->a[72099] = 1;
	small_parse_table_3605(v);
}

/* EOF small_parse_table_720.c */
