/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1760.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8800(t_small_parse_table_array *v)
{
	v->a[176000] = anon_sym_GT;
	v->a[176001] = anon_sym_LT_LT;
	v->a[176002] = anon_sym_GT_GT;
	v->a[176003] = anon_sym_PLUS;
	v->a[176004] = anon_sym_DASH;
	v->a[176005] = anon_sym_STAR;
	v->a[176006] = anon_sym_SLASH;
	v->a[176007] = anon_sym_PERCENT;
	v->a[176008] = anon_sym_STAR_STAR;
	v->a[176009] = actions(1354);
	v->a[176010] = 22;
	v->a[176011] = anon_sym_PLUS_PLUS;
	v->a[176012] = anon_sym_DASH_DASH;
	v->a[176013] = anon_sym_PLUS_EQ;
	v->a[176014] = anon_sym_DASH_EQ;
	v->a[176015] = anon_sym_STAR_EQ;
	v->a[176016] = anon_sym_SLASH_EQ;
	v->a[176017] = anon_sym_PERCENT_EQ;
	v->a[176018] = anon_sym_STAR_STAR_EQ;
	v->a[176019] = anon_sym_LT_LT_EQ;
	small_parse_table_8801(v);
}

void	small_parse_table_8801(t_small_parse_table_array *v)
{
	v->a[176020] = anon_sym_GT_GT_EQ;
	v->a[176021] = anon_sym_AMP_EQ;
	v->a[176022] = anon_sym_CARET_EQ;
	v->a[176023] = anon_sym_PIPE_EQ;
	v->a[176024] = anon_sym_PIPE_PIPE;
	v->a[176025] = anon_sym_AMP_AMP;
	v->a[176026] = anon_sym_EQ_EQ;
	v->a[176027] = anon_sym_BANG_EQ;
	v->a[176028] = anon_sym_LT_EQ;
	v->a[176029] = anon_sym_GT_EQ;
	v->a[176030] = anon_sym_RBRACK;
	v->a[176031] = anon_sym_EQ_TILDE;
	v->a[176032] = anon_sym_QMARK;
	v->a[176033] = 19;
	v->a[176034] = actions(71);
	v->a[176035] = 1;
	v->a[176036] = sym_comment;
	v->a[176037] = actions(6991);
	v->a[176038] = 1;
	v->a[176039] = anon_sym_RBRACK;
	small_parse_table_8802(v);
}

void	small_parse_table_8802(t_small_parse_table_array *v)
{
	v->a[176040] = actions(7567);
	v->a[176041] = 1;
	v->a[176042] = anon_sym_EQ;
	v->a[176043] = actions(7573);
	v->a[176044] = 1;
	v->a[176045] = anon_sym_PIPE_PIPE;
	v->a[176046] = actions(7575);
	v->a[176047] = 1;
	v->a[176048] = anon_sym_AMP_AMP;
	v->a[176049] = actions(7577);
	v->a[176050] = 1;
	v->a[176051] = anon_sym_PIPE;
	v->a[176052] = actions(7579);
	v->a[176053] = 1;
	v->a[176054] = anon_sym_CARET;
	v->a[176055] = actions(7581);
	v->a[176056] = 1;
	v->a[176057] = anon_sym_AMP;
	v->a[176058] = actions(7595);
	v->a[176059] = 1;
	small_parse_table_8803(v);
}

void	small_parse_table_8803(t_small_parse_table_array *v)
{
	v->a[176060] = anon_sym_STAR_STAR;
	v->a[176061] = actions(7597);
	v->a[176062] = 1;
	v->a[176063] = anon_sym_EQ_TILDE;
	v->a[176064] = actions(7599);
	v->a[176065] = 1;
	v->a[176066] = anon_sym_QMARK;
	v->a[176067] = actions(7569);
	v->a[176068] = 2;
	v->a[176069] = anon_sym_PLUS_PLUS;
	v->a[176070] = anon_sym_DASH_DASH;
	v->a[176071] = actions(7583);
	v->a[176072] = 2;
	v->a[176073] = anon_sym_EQ_EQ;
	v->a[176074] = anon_sym_BANG_EQ;
	v->a[176075] = actions(7585);
	v->a[176076] = 2;
	v->a[176077] = anon_sym_LT;
	v->a[176078] = anon_sym_GT;
	v->a[176079] = actions(7587);
	small_parse_table_8804(v);
}

void	small_parse_table_8804(t_small_parse_table_array *v)
{
	v->a[176080] = 2;
	v->a[176081] = anon_sym_LT_EQ;
	v->a[176082] = anon_sym_GT_EQ;
	v->a[176083] = actions(7589);
	v->a[176084] = 2;
	v->a[176085] = anon_sym_LT_LT;
	v->a[176086] = anon_sym_GT_GT;
	v->a[176087] = actions(7591);
	v->a[176088] = 2;
	v->a[176089] = anon_sym_PLUS;
	v->a[176090] = anon_sym_DASH;
	v->a[176091] = actions(7593);
	v->a[176092] = 3;
	v->a[176093] = anon_sym_STAR;
	v->a[176094] = anon_sym_SLASH;
	v->a[176095] = anon_sym_PERCENT;
	v->a[176096] = actions(7571);
	v->a[176097] = 11;
	v->a[176098] = anon_sym_PLUS_EQ;
	v->a[176099] = anon_sym_DASH_EQ;
	small_parse_table_8805(v);
}

/* EOF small_parse_table_1760.c */
