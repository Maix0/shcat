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
	v->a[55000] = actions(3);
	v->a[55001] = 1;
	v->a[55002] = sym_comment;
	v->a[55003] = actions(782);
	v->a[55004] = 1;
	v->a[55005] = anon_sym_PIPE;
	v->a[55006] = actions(886);
	v->a[55007] = 1;
	v->a[55008] = anon_sym_SEMI;
	v->a[55009] = actions(1876);
	v->a[55010] = 1;
	v->a[55011] = aux_sym_heredoc_redirect_token1;
	v->a[55012] = actions(1878);
	v->a[55013] = 1;
	v->a[55014] = sym_file_descriptor;
	v->a[55015] = state(603);
	v->a[55016] = 1;
	v->a[55017] = sym_terminator;
	v->a[55018] = actions(784);
	v->a[55019] = 2;
	small_parse_table_2751(v);
}

void	small_parse_table_2751(t_small_parse_table_array *v)
{
	v->a[55020] = anon_sym_esac;
	v->a[55021] = anon_sym_SEMI_SEMI;
	v->a[55022] = actions(882);
	v->a[55023] = 2;
	v->a[55024] = anon_sym_AMP_AMP;
	v->a[55025] = anon_sym_PIPE_PIPE;
	v->a[55026] = actions(884);
	v->a[55027] = 2;
	v->a[55028] = anon_sym_LT_LT;
	v->a[55029] = anon_sym_LT_LT_DASH;
	v->a[55030] = state(1099);
	v->a[55031] = 3;
	v->a[55032] = sym_file_redirect;
	v->a[55033] = sym_heredoc_redirect;
	v->a[55034] = aux_sym_redirected_statement_repeat1;
	v->a[55035] = actions(1874);
	v->a[55036] = 7;
	v->a[55037] = anon_sym_LT;
	v->a[55038] = anon_sym_GT;
	v->a[55039] = anon_sym_GT_GT;
	small_parse_table_2752(v);
}

void	small_parse_table_2752(t_small_parse_table_array *v)
{
	v->a[55040] = anon_sym_LT_AMP;
	v->a[55041] = anon_sym_GT_AMP;
	v->a[55042] = anon_sym_GT_PIPE;
	v->a[55043] = anon_sym_LT_GT;
	v->a[55044] = 11;
	v->a[55045] = actions(3);
	v->a[55046] = 1;
	v->a[55047] = sym_comment;
	v->a[55048] = actions(782);
	v->a[55049] = 1;
	v->a[55050] = anon_sym_PIPE;
	v->a[55051] = actions(886);
	v->a[55052] = 1;
	v->a[55053] = anon_sym_SEMI;
	v->a[55054] = actions(1876);
	v->a[55055] = 1;
	v->a[55056] = aux_sym_heredoc_redirect_token1;
	v->a[55057] = actions(1878);
	v->a[55058] = 1;
	v->a[55059] = sym_file_descriptor;
	small_parse_table_2753(v);
}

void	small_parse_table_2753(t_small_parse_table_array *v)
{
	v->a[55060] = state(604);
	v->a[55061] = 1;
	v->a[55062] = sym_terminator;
	v->a[55063] = actions(784);
	v->a[55064] = 2;
	v->a[55065] = anon_sym_esac;
	v->a[55066] = anon_sym_SEMI_SEMI;
	v->a[55067] = actions(882);
	v->a[55068] = 2;
	v->a[55069] = anon_sym_AMP_AMP;
	v->a[55070] = anon_sym_PIPE_PIPE;
	v->a[55071] = actions(884);
	v->a[55072] = 2;
	v->a[55073] = anon_sym_LT_LT;
	v->a[55074] = anon_sym_LT_LT_DASH;
	v->a[55075] = state(1099);
	v->a[55076] = 3;
	v->a[55077] = sym_file_redirect;
	v->a[55078] = sym_heredoc_redirect;
	v->a[55079] = aux_sym_redirected_statement_repeat1;
	small_parse_table_2754(v);
}

void	small_parse_table_2754(t_small_parse_table_array *v)
{
	v->a[55080] = actions(1874);
	v->a[55081] = 7;
	v->a[55082] = anon_sym_LT;
	v->a[55083] = anon_sym_GT;
	v->a[55084] = anon_sym_GT_GT;
	v->a[55085] = anon_sym_LT_AMP;
	v->a[55086] = anon_sym_GT_AMP;
	v->a[55087] = anon_sym_GT_PIPE;
	v->a[55088] = anon_sym_LT_GT;
	v->a[55089] = 11;
	v->a[55090] = actions(3);
	v->a[55091] = 1;
	v->a[55092] = sym_comment;
	v->a[55093] = actions(782);
	v->a[55094] = 1;
	v->a[55095] = anon_sym_PIPE;
	v->a[55096] = actions(886);
	v->a[55097] = 1;
	v->a[55098] = anon_sym_SEMI;
	v->a[55099] = actions(1876);
	small_parse_table_2755(v);
}

/* EOF small_parse_table_550.c */
