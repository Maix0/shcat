/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1230.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6150(t_small_parse_table_array *v)
{
	v->a[123000] = 2;
	v->a[123001] = sym_file_descriptor;
	v->a[123002] = aux_sym_heredoc_redirect_token1;
	v->a[123003] = actions(2662);
	v->a[123004] = 17;
	v->a[123005] = anon_sym_PIPE;
	v->a[123006] = anon_sym_PIPE_AMP;
	v->a[123007] = anon_sym_AMP_AMP;
	v->a[123008] = anon_sym_PIPE_PIPE;
	v->a[123009] = anon_sym_LT;
	v->a[123010] = anon_sym_GT;
	v->a[123011] = anon_sym_GT_GT;
	v->a[123012] = anon_sym_AMP_GT;
	v->a[123013] = anon_sym_AMP_GT_GT;
	v->a[123014] = anon_sym_LT_AMP;
	v->a[123015] = anon_sym_GT_AMP;
	v->a[123016] = anon_sym_GT_PIPE;
	v->a[123017] = anon_sym_LT_AMP_DASH;
	v->a[123018] = anon_sym_GT_AMP_DASH;
	v->a[123019] = anon_sym_LT_LT;
	small_parse_table_6151(v);
}

void	small_parse_table_6151(t_small_parse_table_array *v)
{
	v->a[123020] = anon_sym_LT_LT_DASH;
	v->a[123021] = sym__special_character;
	v->a[123022] = 6;
	v->a[123023] = actions(3);
	v->a[123024] = 1;
	v->a[123025] = sym_comment;
	v->a[123026] = actions(5161);
	v->a[123027] = 1;
	v->a[123028] = aux_sym_concatenation_token1;
	v->a[123029] = actions(5163);
	v->a[123030] = 1;
	v->a[123031] = sym__concat;
	v->a[123032] = state(2582);
	v->a[123033] = 1;
	v->a[123034] = aux_sym_concatenation_repeat1;
	v->a[123035] = actions(2719);
	v->a[123036] = 3;
	v->a[123037] = sym_file_descriptor;
	v->a[123038] = sym_variable_name;
	v->a[123039] = aux_sym_heredoc_redirect_token1;
	small_parse_table_6152(v);
}

void	small_parse_table_6152(t_small_parse_table_array *v)
{
	v->a[123040] = actions(2717);
	v->a[123041] = 16;
	v->a[123042] = anon_sym_PIPE;
	v->a[123043] = anon_sym_PIPE_AMP;
	v->a[123044] = anon_sym_AMP_AMP;
	v->a[123045] = anon_sym_PIPE_PIPE;
	v->a[123046] = anon_sym_LT;
	v->a[123047] = anon_sym_GT;
	v->a[123048] = anon_sym_GT_GT;
	v->a[123049] = anon_sym_AMP_GT;
	v->a[123050] = anon_sym_AMP_GT_GT;
	v->a[123051] = anon_sym_LT_AMP;
	v->a[123052] = anon_sym_GT_AMP;
	v->a[123053] = anon_sym_GT_PIPE;
	v->a[123054] = anon_sym_LT_AMP_DASH;
	v->a[123055] = anon_sym_GT_AMP_DASH;
	v->a[123056] = anon_sym_LT_LT;
	v->a[123057] = anon_sym_LT_LT_DASH;
	v->a[123058] = 9;
	v->a[123059] = actions(3);
	small_parse_table_6153(v);
}

void	small_parse_table_6153(t_small_parse_table_array *v)
{
	v->a[123060] = 1;
	v->a[123061] = sym_comment;
	v->a[123062] = actions(3302);
	v->a[123063] = 1;
	v->a[123064] = aux_sym_heredoc_redirect_token1;
	v->a[123065] = actions(5970);
	v->a[123066] = 1;
	v->a[123067] = sym_file_descriptor;
	v->a[123068] = actions(2945);
	v->a[123069] = 2;
	v->a[123070] = anon_sym_LT_LT;
	v->a[123071] = anon_sym_LT_LT_DASH;
	v->a[123072] = actions(3300);
	v->a[123073] = 2;
	v->a[123074] = anon_sym_AMP_AMP;
	v->a[123075] = anon_sym_PIPE_PIPE;
	v->a[123076] = actions(5968);
	v->a[123077] = 2;
	v->a[123078] = anon_sym_LT_AMP_DASH;
	v->a[123079] = anon_sym_GT_AMP_DASH;
	small_parse_table_6154(v);
}

void	small_parse_table_6154(t_small_parse_table_array *v)
{
	v->a[123080] = actions(3298);
	v->a[123081] = 3;
	v->a[123082] = anon_sym_SEMI_SEMI;
	v->a[123083] = anon_sym_AMP;
	v->a[123084] = anon_sym_SEMI;
	v->a[123085] = state(2295);
	v->a[123086] = 3;
	v->a[123087] = sym_file_redirect;
	v->a[123088] = sym_heredoc_redirect;
	v->a[123089] = aux_sym_redirected_statement_repeat1;
	v->a[123090] = actions(5966);
	v->a[123091] = 8;
	v->a[123092] = anon_sym_LT;
	v->a[123093] = anon_sym_GT;
	v->a[123094] = anon_sym_GT_GT;
	v->a[123095] = anon_sym_AMP_GT;
	v->a[123096] = anon_sym_AMP_GT_GT;
	v->a[123097] = anon_sym_LT_AMP;
	v->a[123098] = anon_sym_GT_AMP;
	v->a[123099] = anon_sym_GT_PIPE;
	small_parse_table_6155(v);
}

/* EOF small_parse_table_1230.c */
