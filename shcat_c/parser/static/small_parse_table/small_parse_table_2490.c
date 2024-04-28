/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2490.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12450(t_small_parse_table_array *v)
{
	v->a[249000] = 21;
	v->a[249001] = anon_sym_SEMI;
	v->a[249002] = anon_sym_PIPE_PIPE;
	v->a[249003] = anon_sym_AMP_AMP;
	v->a[249004] = anon_sym_PIPE;
	v->a[249005] = anon_sym_AMP;
	v->a[249006] = anon_sym_LT;
	v->a[249007] = anon_sym_GT;
	v->a[249008] = anon_sym_LT_LT;
	v->a[249009] = anon_sym_GT_GT;
	v->a[249010] = anon_sym_SEMI_SEMI;
	v->a[249011] = anon_sym_SEMI_AMP;
	v->a[249012] = anon_sym_SEMI_SEMI_AMP;
	v->a[249013] = anon_sym_PIPE_AMP;
	v->a[249014] = anon_sym_AMP_GT;
	v->a[249015] = anon_sym_AMP_GT_GT;
	v->a[249016] = anon_sym_LT_AMP;
	v->a[249017] = anon_sym_GT_AMP;
	v->a[249018] = anon_sym_GT_PIPE;
	v->a[249019] = anon_sym_LT_AMP_DASH;
	small_parse_table_12451(v);
}

void	small_parse_table_12451(t_small_parse_table_array *v)
{
	v->a[249020] = anon_sym_GT_AMP_DASH;
	v->a[249021] = anon_sym_LT_LT_DASH;
	v->a[249022] = 3;
	v->a[249023] = actions(3);
	v->a[249024] = 1;
	v->a[249025] = sym_comment;
	v->a[249026] = actions(1302);
	v->a[249027] = 3;
	v->a[249028] = sym_file_descriptor;
	v->a[249029] = sym__concat;
	v->a[249030] = aux_sym_heredoc_redirect_token1;
	v->a[249031] = actions(1300);
	v->a[249032] = 23;
	v->a[249033] = anon_sym_SEMI;
	v->a[249034] = anon_sym_PIPE_PIPE;
	v->a[249035] = anon_sym_AMP_AMP;
	v->a[249036] = anon_sym_PIPE;
	v->a[249037] = anon_sym_AMP;
	v->a[249038] = anon_sym_LT;
	v->a[249039] = anon_sym_GT;
	small_parse_table_12452(v);
}

void	small_parse_table_12452(t_small_parse_table_array *v)
{
	v->a[249040] = anon_sym_LT_LT;
	v->a[249041] = anon_sym_GT_GT;
	v->a[249042] = anon_sym_SEMI_SEMI;
	v->a[249043] = anon_sym_SEMI_AMP;
	v->a[249044] = anon_sym_SEMI_SEMI_AMP;
	v->a[249045] = anon_sym_PIPE_AMP;
	v->a[249046] = anon_sym_AMP_GT;
	v->a[249047] = anon_sym_AMP_GT_GT;
	v->a[249048] = anon_sym_LT_AMP;
	v->a[249049] = anon_sym_GT_AMP;
	v->a[249050] = anon_sym_GT_PIPE;
	v->a[249051] = anon_sym_LT_AMP_DASH;
	v->a[249052] = anon_sym_GT_AMP_DASH;
	v->a[249053] = anon_sym_LT_LT_DASH;
	v->a[249054] = anon_sym_LT_LT_LT;
	v->a[249055] = aux_sym_concatenation_token1;
	v->a[249056] = 8;
	v->a[249057] = actions(3);
	v->a[249058] = 1;
	v->a[249059] = sym_comment;
	small_parse_table_12453(v);
}

void	small_parse_table_12453(t_small_parse_table_array *v)
{
	v->a[249060] = actions(11455);
	v->a[249061] = 1;
	v->a[249062] = aux_sym_heredoc_redirect_token1;
	v->a[249063] = actions(11562);
	v->a[249064] = 1;
	v->a[249065] = sym_file_descriptor;
	v->a[249066] = actions(4382);
	v->a[249067] = 2;
	v->a[249068] = anon_sym_LT_LT;
	v->a[249069] = anon_sym_LT_LT_DASH;
	v->a[249070] = actions(11335);
	v->a[249071] = 2;
	v->a[249072] = anon_sym_LT_AMP_DASH;
	v->a[249073] = anon_sym_GT_AMP_DASH;
	v->a[249074] = state(4465);
	v->a[249075] = 3;
	v->a[249076] = sym_file_redirect;
	v->a[249077] = sym_heredoc_redirect;
	v->a[249078] = aux_sym_redirected_statement_repeat1;
	v->a[249079] = actions(11333);
	small_parse_table_12454(v);
}

void	small_parse_table_12454(t_small_parse_table_array *v)
{
	v->a[249080] = 8;
	v->a[249081] = anon_sym_LT;
	v->a[249082] = anon_sym_GT;
	v->a[249083] = anon_sym_GT_GT;
	v->a[249084] = anon_sym_AMP_GT;
	v->a[249085] = anon_sym_AMP_GT_GT;
	v->a[249086] = anon_sym_LT_AMP;
	v->a[249087] = anon_sym_GT_AMP;
	v->a[249088] = anon_sym_GT_PIPE;
	v->a[249089] = actions(11453);
	v->a[249090] = 9;
	v->a[249091] = anon_sym_SEMI;
	v->a[249092] = anon_sym_PIPE_PIPE;
	v->a[249093] = anon_sym_AMP_AMP;
	v->a[249094] = anon_sym_PIPE;
	v->a[249095] = anon_sym_AMP;
	v->a[249096] = anon_sym_SEMI_SEMI;
	v->a[249097] = anon_sym_SEMI_AMP;
	v->a[249098] = anon_sym_SEMI_SEMI_AMP;
	v->a[249099] = anon_sym_PIPE_AMP;
	small_parse_table_12455(v);
}

/* EOF small_parse_table_2490.c */
