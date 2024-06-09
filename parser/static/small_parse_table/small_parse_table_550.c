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
	v->a[55000] = sym_variable_name;
	v->a[55001] = actions(1327);
	v->a[55002] = 26;
	v->a[55003] = anon_sym_PIPE;
	v->a[55004] = anon_sym_AMP_AMP;
	v->a[55005] = anon_sym_PIPE_PIPE;
	v->a[55006] = anon_sym_LT;
	v->a[55007] = anon_sym_GT;
	v->a[55008] = anon_sym_GT_GT;
	v->a[55009] = anon_sym_AMP_GT;
	v->a[55010] = anon_sym_AMP_GT_GT;
	v->a[55011] = anon_sym_LT_AMP;
	v->a[55012] = anon_sym_GT_AMP;
	v->a[55013] = anon_sym_GT_PIPE;
	v->a[55014] = anon_sym_LT_AMP_DASH;
	v->a[55015] = anon_sym_GT_AMP_DASH;
	v->a[55016] = anon_sym_LT_LT;
	v->a[55017] = anon_sym_LT_LT_DASH;
	v->a[55018] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55019] = aux_sym_concatenation_token1;
	small_parse_table_2751(v);
}

void	small_parse_table_2751(t_small_parse_table_array *v)
{
	v->a[55020] = anon_sym_DOLLAR;
	v->a[55021] = anon_sym_DQUOTE;
	v->a[55022] = sym_raw_string;
	v->a[55023] = aux_sym_number_token1;
	v->a[55024] = aux_sym_number_token2;
	v->a[55025] = anon_sym_DOLLAR_LBRACE;
	v->a[55026] = anon_sym_DOLLAR_LPAREN;
	v->a[55027] = anon_sym_BQUOTE;
	v->a[55028] = sym_word;
	v->a[55029] = 3;
	v->a[55030] = actions(3);
	v->a[55031] = 1;
	v->a[55032] = sym_comment;
	v->a[55033] = actions(1112);
	v->a[55034] = 3;
	v->a[55035] = sym_file_descriptor;
	v->a[55036] = sym__concat;
	v->a[55037] = sym__bare_dollar;
	v->a[55038] = actions(1114);
	v->a[55039] = 26;
	small_parse_table_2752(v);
}

void	small_parse_table_2752(t_small_parse_table_array *v)
{
	v->a[55040] = anon_sym_PIPE;
	v->a[55041] = anon_sym_AMP_AMP;
	v->a[55042] = anon_sym_PIPE_PIPE;
	v->a[55043] = anon_sym_LT;
	v->a[55044] = anon_sym_GT;
	v->a[55045] = anon_sym_GT_GT;
	v->a[55046] = anon_sym_AMP_GT;
	v->a[55047] = anon_sym_AMP_GT_GT;
	v->a[55048] = anon_sym_LT_AMP;
	v->a[55049] = anon_sym_GT_AMP;
	v->a[55050] = anon_sym_GT_PIPE;
	v->a[55051] = anon_sym_LT_AMP_DASH;
	v->a[55052] = anon_sym_GT_AMP_DASH;
	v->a[55053] = anon_sym_LT_LT;
	v->a[55054] = anon_sym_LT_LT_DASH;
	v->a[55055] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55056] = aux_sym_concatenation_token1;
	v->a[55057] = anon_sym_DOLLAR;
	v->a[55058] = anon_sym_DQUOTE;
	v->a[55059] = sym_raw_string;
	small_parse_table_2753(v);
}

void	small_parse_table_2753(t_small_parse_table_array *v)
{
	v->a[55060] = aux_sym_number_token1;
	v->a[55061] = aux_sym_number_token2;
	v->a[55062] = anon_sym_DOLLAR_LBRACE;
	v->a[55063] = anon_sym_DOLLAR_LPAREN;
	v->a[55064] = anon_sym_BQUOTE;
	v->a[55065] = sym_word;
	v->a[55066] = 6;
	v->a[55067] = actions(3);
	v->a[55068] = 1;
	v->a[55069] = sym_comment;
	v->a[55070] = actions(1210);
	v->a[55071] = 1;
	v->a[55072] = sym_file_descriptor;
	v->a[55073] = actions(2039);
	v->a[55074] = 1;
	v->a[55075] = aux_sym_concatenation_token1;
	v->a[55076] = actions(2041);
	v->a[55077] = 1;
	v->a[55078] = sym__concat;
	v->a[55079] = state(854);
	small_parse_table_2754(v);
}

void	small_parse_table_2754(t_small_parse_table_array *v)
{
	v->a[55080] = 1;
	v->a[55081] = aux_sym_concatenation_repeat1;
	v->a[55082] = actions(1206);
	v->a[55083] = 25;
	v->a[55084] = anon_sym_PIPE;
	v->a[55085] = anon_sym_AMP_AMP;
	v->a[55086] = anon_sym_PIPE_PIPE;
	v->a[55087] = anon_sym_LT;
	v->a[55088] = anon_sym_GT;
	v->a[55089] = anon_sym_GT_GT;
	v->a[55090] = anon_sym_AMP_GT;
	v->a[55091] = anon_sym_AMP_GT_GT;
	v->a[55092] = anon_sym_LT_AMP;
	v->a[55093] = anon_sym_GT_AMP;
	v->a[55094] = anon_sym_GT_PIPE;
	v->a[55095] = anon_sym_LT_AMP_DASH;
	v->a[55096] = anon_sym_GT_AMP_DASH;
	v->a[55097] = anon_sym_LT_LT;
	v->a[55098] = anon_sym_LT_LT_DASH;
	v->a[55099] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2755(v);
}

/* EOF small_parse_table_550.c */
