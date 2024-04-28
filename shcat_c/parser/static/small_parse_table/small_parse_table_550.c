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
	v->a[55000] = anon_sym_PIPE_AMP;
	v->a[55001] = anon_sym_AMP_GT;
	v->a[55002] = anon_sym_AMP_GT_GT;
	v->a[55003] = anon_sym_LT_AMP;
	v->a[55004] = anon_sym_GT_AMP;
	v->a[55005] = anon_sym_GT_PIPE;
	v->a[55006] = anon_sym_LT_AMP_DASH;
	v->a[55007] = anon_sym_GT_AMP_DASH;
	v->a[55008] = anon_sym_LT_LT_DASH;
	v->a[55009] = anon_sym_LT_LT_LT;
	v->a[55010] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55011] = anon_sym_DOLLAR_LBRACK;
	v->a[55012] = anon_sym_DOLLAR;
	v->a[55013] = sym__special_character;
	v->a[55014] = anon_sym_DQUOTE;
	v->a[55015] = sym_raw_string;
	v->a[55016] = sym_ansi_c_string;
	v->a[55017] = aux_sym_number_token1;
	v->a[55018] = aux_sym_number_token2;
	v->a[55019] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2751(v);
}

void	small_parse_table_2751(t_small_parse_table_array *v)
{
	v->a[55020] = anon_sym_DOLLAR_LPAREN;
	v->a[55021] = anon_sym_BQUOTE;
	v->a[55022] = anon_sym_DOLLAR_BQUOTE;
	v->a[55023] = anon_sym_LT_LPAREN;
	v->a[55024] = anon_sym_GT_LPAREN;
	v->a[55025] = sym_word;
	v->a[55026] = 6;
	v->a[55027] = actions(3);
	v->a[55028] = 1;
	v->a[55029] = sym_comment;
	v->a[55030] = actions(5397);
	v->a[55031] = 1;
	v->a[55032] = aux_sym_concatenation_token1;
	v->a[55033] = actions(5521);
	v->a[55034] = 1;
	v->a[55035] = sym__concat;
	v->a[55036] = state(1262);
	v->a[55037] = 1;
	v->a[55038] = aux_sym_concatenation_repeat1;
	v->a[55039] = actions(1267);
	small_parse_table_2752(v);
}

void	small_parse_table_2752(t_small_parse_table_array *v)
{
	v->a[55040] = 5;
	v->a[55041] = sym_file_descriptor;
	v->a[55042] = sym_variable_name;
	v->a[55043] = sym_test_operator;
	v->a[55044] = sym__brace_start;
	v->a[55045] = aux_sym_heredoc_redirect_token1;
	v->a[55046] = actions(1265);
	v->a[55047] = 39;
	v->a[55048] = anon_sym_LPAREN_LPAREN;
	v->a[55049] = anon_sym_SEMI;
	v->a[55050] = anon_sym_PIPE_PIPE;
	v->a[55051] = anon_sym_AMP_AMP;
	v->a[55052] = anon_sym_PIPE;
	v->a[55053] = anon_sym_AMP;
	v->a[55054] = anon_sym_LT;
	v->a[55055] = anon_sym_GT;
	v->a[55056] = anon_sym_LT_LT;
	v->a[55057] = anon_sym_GT_GT;
	v->a[55058] = anon_sym_SEMI_SEMI;
	v->a[55059] = anon_sym_SEMI_AMP;
	small_parse_table_2753(v);
}

void	small_parse_table_2753(t_small_parse_table_array *v)
{
	v->a[55060] = anon_sym_SEMI_SEMI_AMP;
	v->a[55061] = anon_sym_PIPE_AMP;
	v->a[55062] = anon_sym_AMP_GT;
	v->a[55063] = anon_sym_AMP_GT_GT;
	v->a[55064] = anon_sym_LT_AMP;
	v->a[55065] = anon_sym_GT_AMP;
	v->a[55066] = anon_sym_GT_PIPE;
	v->a[55067] = anon_sym_LT_AMP_DASH;
	v->a[55068] = anon_sym_GT_AMP_DASH;
	v->a[55069] = anon_sym_LT_LT_DASH;
	v->a[55070] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55071] = anon_sym_DOLLAR_LBRACK;
	v->a[55072] = anon_sym_DOLLAR;
	v->a[55073] = sym__special_character;
	v->a[55074] = anon_sym_DQUOTE;
	v->a[55075] = sym_raw_string;
	v->a[55076] = sym_ansi_c_string;
	v->a[55077] = aux_sym_number_token1;
	v->a[55078] = aux_sym_number_token2;
	v->a[55079] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2754(v);
}

void	small_parse_table_2754(t_small_parse_table_array *v)
{
	v->a[55080] = anon_sym_DOLLAR_LPAREN;
	v->a[55081] = anon_sym_BQUOTE;
	v->a[55082] = anon_sym_DOLLAR_BQUOTE;
	v->a[55083] = anon_sym_LT_LPAREN;
	v->a[55084] = anon_sym_GT_LPAREN;
	v->a[55085] = aux_sym__simple_variable_name_token1;
	v->a[55086] = sym_word;
	v->a[55087] = 3;
	v->a[55088] = actions(3);
	v->a[55089] = 1;
	v->a[55090] = sym_comment;
	v->a[55091] = actions(1358);
	v->a[55092] = 6;
	v->a[55093] = sym_file_descriptor;
	v->a[55094] = sym__concat;
	v->a[55095] = sym_variable_name;
	v->a[55096] = sym_test_operator;
	v->a[55097] = sym__brace_start;
	v->a[55098] = aux_sym_heredoc_redirect_token1;
	v->a[55099] = actions(1356);
	small_parse_table_2755(v);
}

/* EOF small_parse_table_550.c */
