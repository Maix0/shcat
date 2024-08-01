/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_550.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2750(t_small_parse_table_array *v)
{
	v->a[55000] = actions(1108);
	v->a[55001] = 7;
	v->a[55002] = anon_sym_RPAREN;
	v->a[55003] = anon_sym_STAR;
	v->a[55004] = anon_sym_SLASH;
	v->a[55005] = anon_sym_PERCENT;
	v->a[55006] = anon_sym_QMARK;
	v->a[55007] = anon_sym_PLUS_PLUS;
	v->a[55008] = anon_sym_DASH_DASH;
	v->a[55009] = 6;
	v->a[55010] = actions(1436);
	v->a[55011] = 1;
	v->a[55012] = sym_comment;
	v->a[55013] = actions(2754);
	v->a[55014] = 1;
	v->a[55015] = anon_sym_QMARK;
	v->a[55016] = actions(2837);
	v->a[55017] = 1;
	v->a[55018] = anon_sym_RPAREN_RPAREN;
	v->a[55019] = actions(2702);
	small_parse_table_2751(v);
}

void	small_parse_table_2751(t_small_parse_table_array *v)
{
	v->a[55020] = 2;
	v->a[55021] = anon_sym_PLUS;
	v->a[55022] = anon_sym_DASH;
	v->a[55023] = actions(2706);
	v->a[55024] = 2;
	v->a[55025] = anon_sym_PLUS_PLUS;
	v->a[55026] = anon_sym_DASH_DASH;
	v->a[55027] = actions(2704);
	v->a[55028] = 3;
	v->a[55029] = anon_sym_STAR;
	v->a[55030] = anon_sym_SLASH;
	v->a[55031] = anon_sym_PERCENT;
	v->a[55032] = 6;
	v->a[55033] = actions(1436);
	v->a[55034] = 1;
	v->a[55035] = sym_comment;
	v->a[55036] = actions(2760);
	v->a[55037] = 1;
	v->a[55038] = anon_sym_LT_LT;
	v->a[55039] = actions(2841);
	small_parse_table_2752(v);
}

void	small_parse_table_2752(t_small_parse_table_array *v)
{
	v->a[55040] = 1;
	v->a[55041] = anon_sym_GT_GT;
	v->a[55042] = actions(1880);
	v->a[55043] = 2;
	v->a[55044] = anon_sym_LT;
	v->a[55045] = anon_sym_GT;
	v->a[55046] = actions(2839);
	v->a[55047] = 2;
	v->a[55048] = anon_sym_AMP_AMP;
	v->a[55049] = anon_sym_PIPE_PIPE;
	v->a[55050] = state(925);
	v->a[55051] = 3;
	v->a[55052] = sym_file_redirect;
	v->a[55053] = sym_heredoc_redirect;
	v->a[55054] = aux_sym_redirected_statement_repeat1;
	v->a[55055] = 3;
	v->a[55056] = actions(1436);
	v->a[55057] = 1;
	v->a[55058] = sym_comment;
	v->a[55059] = actions(1095);
	small_parse_table_2753(v);
}

void	small_parse_table_2753(t_small_parse_table_array *v)
{
	v->a[55060] = 2;
	v->a[55061] = anon_sym_PLUS;
	v->a[55062] = anon_sym_DASH;
	v->a[55063] = actions(1097);
	v->a[55064] = 7;
	v->a[55065] = anon_sym_RPAREN;
	v->a[55066] = anon_sym_STAR;
	v->a[55067] = anon_sym_SLASH;
	v->a[55068] = anon_sym_PERCENT;
	v->a[55069] = anon_sym_QMARK;
	v->a[55070] = anon_sym_PLUS_PLUS;
	v->a[55071] = anon_sym_DASH_DASH;
	v->a[55072] = 6;
	v->a[55073] = actions(1436);
	v->a[55074] = 1;
	v->a[55075] = sym_comment;
	v->a[55076] = actions(2754);
	v->a[55077] = 1;
	v->a[55078] = anon_sym_QMARK;
	v->a[55079] = actions(2843);
	small_parse_table_2754(v);
}

void	small_parse_table_2754(t_small_parse_table_array *v)
{
	v->a[55080] = 1;
	v->a[55081] = anon_sym_RPAREN_RPAREN;
	v->a[55082] = actions(2702);
	v->a[55083] = 2;
	v->a[55084] = anon_sym_PLUS;
	v->a[55085] = anon_sym_DASH;
	v->a[55086] = actions(2706);
	v->a[55087] = 2;
	v->a[55088] = anon_sym_PLUS_PLUS;
	v->a[55089] = anon_sym_DASH_DASH;
	v->a[55090] = actions(2704);
	v->a[55091] = 3;
	v->a[55092] = anon_sym_STAR;
	v->a[55093] = anon_sym_SLASH;
	v->a[55094] = anon_sym_PERCENT;
	v->a[55095] = 6;
	v->a[55096] = actions(3);
	v->a[55097] = 1;
	v->a[55098] = sym_comment;
	v->a[55099] = actions(2845);
	small_parse_table_2755(v);
}

/* EOF small_parse_table_550.c */
