/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1240.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6200(t_small_parse_table_array *v)
{
	v->a[124000] = aux_sym_heredoc_redirect_token1;
	v->a[124001] = actions(2694);
	v->a[124002] = 16;
	v->a[124003] = anon_sym_PIPE;
	v->a[124004] = anon_sym_PIPE_AMP;
	v->a[124005] = anon_sym_AMP_AMP;
	v->a[124006] = anon_sym_PIPE_PIPE;
	v->a[124007] = anon_sym_LT;
	v->a[124008] = anon_sym_GT;
	v->a[124009] = anon_sym_GT_GT;
	v->a[124010] = anon_sym_AMP_GT;
	v->a[124011] = anon_sym_AMP_GT_GT;
	v->a[124012] = anon_sym_LT_AMP;
	v->a[124013] = anon_sym_GT_AMP;
	v->a[124014] = anon_sym_GT_PIPE;
	v->a[124015] = anon_sym_LT_AMP_DASH;
	v->a[124016] = anon_sym_GT_AMP_DASH;
	v->a[124017] = anon_sym_LT_LT;
	v->a[124018] = anon_sym_LT_LT_DASH;
	v->a[124019] = 8;
	small_parse_table_6201(v);
}

void	small_parse_table_6201(t_small_parse_table_array *v)
{
	v->a[124020] = actions(3);
	v->a[124021] = 1;
	v->a[124022] = sym_comment;
	v->a[124023] = actions(5157);
	v->a[124024] = 1;
	v->a[124025] = aux_sym_heredoc_redirect_token1;
	v->a[124026] = actions(7134);
	v->a[124027] = 1;
	v->a[124028] = sym_file_descriptor;
	v->a[124029] = actions(2945);
	v->a[124030] = 2;
	v->a[124031] = anon_sym_LT_LT;
	v->a[124032] = anon_sym_LT_LT_DASH;
	v->a[124033] = actions(7132);
	v->a[124034] = 2;
	v->a[124035] = anon_sym_LT_AMP_DASH;
	v->a[124036] = anon_sym_GT_AMP_DASH;
	v->a[124037] = state(2602);
	v->a[124038] = 3;
	v->a[124039] = sym_file_redirect;
	small_parse_table_6202(v);
}

void	small_parse_table_6202(t_small_parse_table_array *v)
{
	v->a[124040] = sym_heredoc_redirect;
	v->a[124041] = aux_sym_redirected_statement_repeat1;
	v->a[124042] = actions(5151);
	v->a[124043] = 4;
	v->a[124044] = anon_sym_PIPE;
	v->a[124045] = anon_sym_PIPE_AMP;
	v->a[124046] = anon_sym_AMP_AMP;
	v->a[124047] = anon_sym_PIPE_PIPE;
	v->a[124048] = actions(7130);
	v->a[124049] = 8;
	v->a[124050] = anon_sym_LT;
	v->a[124051] = anon_sym_GT;
	v->a[124052] = anon_sym_GT_GT;
	v->a[124053] = anon_sym_AMP_GT;
	v->a[124054] = anon_sym_AMP_GT_GT;
	v->a[124055] = anon_sym_LT_AMP;
	v->a[124056] = anon_sym_GT_AMP;
	v->a[124057] = anon_sym_GT_PIPE;
	v->a[124058] = 9;
	v->a[124059] = actions(3);
	small_parse_table_6203(v);
}

void	small_parse_table_6203(t_small_parse_table_array *v)
{
	v->a[124060] = 1;
	v->a[124061] = sym_comment;
	v->a[124062] = actions(3801);
	v->a[124063] = 1;
	v->a[124064] = aux_sym_heredoc_redirect_token1;
	v->a[124065] = actions(7134);
	v->a[124066] = 1;
	v->a[124067] = sym_file_descriptor;
	v->a[124068] = actions(2516);
	v->a[124069] = 2;
	v->a[124070] = anon_sym_PIPE;
	v->a[124071] = anon_sym_PIPE_AMP;
	v->a[124072] = actions(2945);
	v->a[124073] = 2;
	v->a[124074] = anon_sym_LT_LT;
	v->a[124075] = anon_sym_LT_LT_DASH;
	v->a[124076] = actions(3799);
	v->a[124077] = 2;
	v->a[124078] = anon_sym_AMP_AMP;
	v->a[124079] = anon_sym_PIPE_PIPE;
	small_parse_table_6204(v);
}

void	small_parse_table_6204(t_small_parse_table_array *v)
{
	v->a[124080] = actions(7132);
	v->a[124081] = 2;
	v->a[124082] = anon_sym_LT_AMP_DASH;
	v->a[124083] = anon_sym_GT_AMP_DASH;
	v->a[124084] = state(2613);
	v->a[124085] = 3;
	v->a[124086] = sym_file_redirect;
	v->a[124087] = sym_heredoc_redirect;
	v->a[124088] = aux_sym_redirected_statement_repeat1;
	v->a[124089] = actions(7130);
	v->a[124090] = 8;
	v->a[124091] = anon_sym_LT;
	v->a[124092] = anon_sym_GT;
	v->a[124093] = anon_sym_GT_GT;
	v->a[124094] = anon_sym_AMP_GT;
	v->a[124095] = anon_sym_AMP_GT_GT;
	v->a[124096] = anon_sym_LT_AMP;
	v->a[124097] = anon_sym_GT_AMP;
	v->a[124098] = anon_sym_GT_PIPE;
	v->a[124099] = 9;
	small_parse_table_6205(v);
}

/* EOF small_parse_table_1240.c */
