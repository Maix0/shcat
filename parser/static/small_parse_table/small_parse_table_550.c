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
	v->a[55000] = sym__concat;
	v->a[55001] = actions(1180);
	v->a[55002] = 20;
	v->a[55003] = anon_sym_AMP_AMP;
	v->a[55004] = anon_sym_PIPE_PIPE;
	v->a[55005] = anon_sym_LT;
	v->a[55006] = anon_sym_GT;
	v->a[55007] = anon_sym_GT_GT;
	v->a[55008] = anon_sym_LT_AMP;
	v->a[55009] = anon_sym_GT_AMP;
	v->a[55010] = anon_sym_GT_PIPE;
	v->a[55011] = anon_sym_LT_GT;
	v->a[55012] = aux_sym_heredoc_redirect_token1;
	v->a[55013] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55014] = aux_sym_concatenation_token1;
	v->a[55015] = anon_sym_DOLLAR;
	v->a[55016] = anon_sym_DQUOTE;
	v->a[55017] = sym_raw_string;
	v->a[55018] = sym_number;
	v->a[55019] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2751(v);
}

void	small_parse_table_2751(t_small_parse_table_array *v)
{
	v->a[55020] = anon_sym_DOLLAR_LPAREN;
	v->a[55021] = anon_sym_BQUOTE;
	v->a[55022] = sym_word;
	v->a[55023] = 11;
	v->a[55024] = actions(3);
	v->a[55025] = 1;
	v->a[55026] = sym_comment;
	v->a[55027] = actions(692);
	v->a[55028] = 1;
	v->a[55029] = anon_sym_PIPE;
	v->a[55030] = actions(862);
	v->a[55031] = 1;
	v->a[55032] = ts_builtin_sym_end;
	v->a[55033] = actions(1863);
	v->a[55034] = 1;
	v->a[55035] = aux_sym_heredoc_redirect_token1;
	v->a[55036] = actions(1865);
	v->a[55037] = 1;
	v->a[55038] = sym_file_descriptor;
	v->a[55039] = state(768);
	small_parse_table_2752(v);
}

void	small_parse_table_2752(t_small_parse_table_array *v)
{
	v->a[55040] = 1;
	v->a[55041] = sym_terminator;
	v->a[55042] = actions(700);
	v->a[55043] = 2;
	v->a[55044] = anon_sym_LT_LT;
	v->a[55045] = anon_sym_LT_LT_DASH;
	v->a[55046] = actions(719);
	v->a[55047] = 2;
	v->a[55048] = anon_sym_AMP_AMP;
	v->a[55049] = anon_sym_PIPE_PIPE;
	v->a[55050] = actions(717);
	v->a[55051] = 3;
	v->a[55052] = anon_sym_SEMI_SEMI;
	v->a[55053] = anon_sym_AMP;
	v->a[55054] = anon_sym_SEMI;
	v->a[55055] = state(1086);
	v->a[55056] = 3;
	v->a[55057] = sym_file_redirect;
	v->a[55058] = sym_heredoc_redirect;
	v->a[55059] = aux_sym_redirected_statement_repeat1;
	small_parse_table_2753(v);
}

void	small_parse_table_2753(t_small_parse_table_array *v)
{
	v->a[55060] = actions(1861);
	v->a[55061] = 7;
	v->a[55062] = anon_sym_LT;
	v->a[55063] = anon_sym_GT;
	v->a[55064] = anon_sym_GT_GT;
	v->a[55065] = anon_sym_LT_AMP;
	v->a[55066] = anon_sym_GT_AMP;
	v->a[55067] = anon_sym_GT_PIPE;
	v->a[55068] = anon_sym_LT_GT;
	v->a[55069] = 11;
	v->a[55070] = actions(3);
	v->a[55071] = 1;
	v->a[55072] = sym_comment;
	v->a[55073] = actions(692);
	v->a[55074] = 1;
	v->a[55075] = anon_sym_PIPE;
	v->a[55076] = actions(694);
	v->a[55077] = 1;
	v->a[55078] = anon_sym_RPAREN;
	v->a[55079] = actions(1857);
	small_parse_table_2754(v);
}

void	small_parse_table_2754(t_small_parse_table_array *v)
{
	v->a[55080] = 1;
	v->a[55081] = aux_sym_heredoc_redirect_token1;
	v->a[55082] = actions(1859);
	v->a[55083] = 1;
	v->a[55084] = sym_file_descriptor;
	v->a[55085] = state(660);
	v->a[55086] = 1;
	v->a[55087] = sym_terminator;
	v->a[55088] = actions(698);
	v->a[55089] = 2;
	v->a[55090] = anon_sym_AMP_AMP;
	v->a[55091] = anon_sym_PIPE_PIPE;
	v->a[55092] = actions(700);
	v->a[55093] = 2;
	v->a[55094] = anon_sym_LT_LT;
	v->a[55095] = anon_sym_LT_LT_DASH;
	v->a[55096] = actions(696);
	v->a[55097] = 3;
	v->a[55098] = anon_sym_SEMI_SEMI;
	v->a[55099] = anon_sym_AMP;
	small_parse_table_2755(v);
}

/* EOF small_parse_table_550.c */
