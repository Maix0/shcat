/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1480.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7400(t_small_parse_table_array *v)
{
	v->a[148000] = actions(6885);
	v->a[148001] = 2;
	v->a[148002] = anon_sym_PLUS_PLUS;
	v->a[148003] = anon_sym_DASH_DASH;
	v->a[148004] = actions(6899);
	v->a[148005] = 2;
	v->a[148006] = anon_sym_EQ_EQ;
	v->a[148007] = anon_sym_BANG_EQ;
	v->a[148008] = actions(6901);
	v->a[148009] = 2;
	v->a[148010] = anon_sym_LT;
	v->a[148011] = anon_sym_GT;
	v->a[148012] = actions(6903);
	v->a[148013] = 2;
	v->a[148014] = anon_sym_LT_EQ;
	v->a[148015] = anon_sym_GT_EQ;
	v->a[148016] = actions(6905);
	v->a[148017] = 2;
	v->a[148018] = anon_sym_LT_LT;
	v->a[148019] = anon_sym_GT_GT;
	small_parse_table_7401(v);
}

void	small_parse_table_7401(t_small_parse_table_array *v)
{
	v->a[148020] = actions(6907);
	v->a[148021] = 2;
	v->a[148022] = anon_sym_PLUS;
	v->a[148023] = anon_sym_DASH;
	v->a[148024] = actions(6909);
	v->a[148025] = 3;
	v->a[148026] = anon_sym_STAR;
	v->a[148027] = anon_sym_SLASH;
	v->a[148028] = anon_sym_PERCENT;
	v->a[148029] = actions(6887);
	v->a[148030] = 11;
	v->a[148031] = anon_sym_PLUS_EQ;
	v->a[148032] = anon_sym_DASH_EQ;
	v->a[148033] = anon_sym_STAR_EQ;
	v->a[148034] = anon_sym_SLASH_EQ;
	v->a[148035] = anon_sym_PERCENT_EQ;
	v->a[148036] = anon_sym_STAR_STAR_EQ;
	v->a[148037] = anon_sym_LT_LT_EQ;
	v->a[148038] = anon_sym_GT_GT_EQ;
	v->a[148039] = anon_sym_AMP_EQ;
	small_parse_table_7402(v);
}

void	small_parse_table_7402(t_small_parse_table_array *v)
{
	v->a[148040] = anon_sym_CARET_EQ;
	v->a[148041] = anon_sym_PIPE_EQ;
	v->a[148042] = 3;
	v->a[148043] = actions(71);
	v->a[148044] = 1;
	v->a[148045] = sym_comment;
	v->a[148046] = actions(7035);
	v->a[148047] = 14;
	v->a[148048] = anon_sym_EQ;
	v->a[148049] = anon_sym_PIPE;
	v->a[148050] = anon_sym_CARET;
	v->a[148051] = anon_sym_AMP;
	v->a[148052] = anon_sym_LT;
	v->a[148053] = anon_sym_GT;
	v->a[148054] = anon_sym_LT_LT;
	v->a[148055] = anon_sym_GT_GT;
	v->a[148056] = anon_sym_PLUS;
	v->a[148057] = anon_sym_DASH;
	v->a[148058] = anon_sym_STAR;
	v->a[148059] = anon_sym_SLASH;
	small_parse_table_7403(v);
}

void	small_parse_table_7403(t_small_parse_table_array *v)
{
	v->a[148060] = anon_sym_PERCENT;
	v->a[148061] = anon_sym_STAR_STAR;
	v->a[148062] = actions(7033);
	v->a[148063] = 24;
	v->a[148064] = anon_sym_RPAREN_RPAREN;
	v->a[148065] = anon_sym_COMMA;
	v->a[148066] = anon_sym_PLUS_PLUS;
	v->a[148067] = anon_sym_DASH_DASH;
	v->a[148068] = anon_sym_PLUS_EQ;
	v->a[148069] = anon_sym_DASH_EQ;
	v->a[148070] = anon_sym_STAR_EQ;
	v->a[148071] = anon_sym_SLASH_EQ;
	v->a[148072] = anon_sym_PERCENT_EQ;
	v->a[148073] = anon_sym_STAR_STAR_EQ;
	v->a[148074] = anon_sym_LT_LT_EQ;
	v->a[148075] = anon_sym_GT_GT_EQ;
	v->a[148076] = anon_sym_AMP_EQ;
	v->a[148077] = anon_sym_CARET_EQ;
	v->a[148078] = anon_sym_PIPE_EQ;
	v->a[148079] = anon_sym_PIPE_PIPE;
	small_parse_table_7404(v);
}

void	small_parse_table_7404(t_small_parse_table_array *v)
{
	v->a[148080] = anon_sym_AMP_AMP;
	v->a[148081] = anon_sym_EQ_EQ;
	v->a[148082] = anon_sym_BANG_EQ;
	v->a[148083] = anon_sym_LT_EQ;
	v->a[148084] = anon_sym_GT_EQ;
	v->a[148085] = anon_sym_EQ_TILDE;
	v->a[148086] = anon_sym_QMARK;
	v->a[148087] = anon_sym_COLON;
	v->a[148088] = 15;
	v->a[148089] = actions(71);
	v->a[148090] = 1;
	v->a[148091] = sym_comment;
	v->a[148092] = actions(6807);
	v->a[148093] = 1;
	v->a[148094] = anon_sym_EQ;
	v->a[148095] = actions(6877);
	v->a[148096] = 1;
	v->a[148097] = anon_sym_STAR_STAR;
	v->a[148098] = actions(7037);
	v->a[148099] = 1;
	small_parse_table_7405(v);
}

/* EOF small_parse_table_1480.c */
