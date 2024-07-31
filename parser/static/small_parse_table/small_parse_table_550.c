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
	v->a[55000] = actions(2025);
	v->a[55001] = 1;
	v->a[55002] = anon_sym_BQUOTE;
	v->a[55003] = actions(2073);
	v->a[55004] = 1;
	v->a[55005] = sym__comment_word;
	v->a[55006] = actions(2075);
	v->a[55007] = 1;
	v->a[55008] = sym__empty_value;
	v->a[55009] = state(567);
	v->a[55010] = 1;
	v->a[55011] = sym_concatenation;
	v->a[55012] = actions(2183);
	v->a[55013] = 3;
	v->a[55014] = sym_raw_string;
	v->a[55015] = sym_number;
	v->a[55016] = sym_word;
	v->a[55017] = state(349);
	v->a[55018] = 5;
	v->a[55019] = sym_arithmetic_expansion;
	small_parse_table_2751(v);
}

void	small_parse_table_2751(t_small_parse_table_array *v)
{
	v->a[55020] = sym_string;
	v->a[55021] = sym_simple_expansion;
	v->a[55022] = sym_expansion;
	v->a[55023] = sym_command_substitution;
	v->a[55024] = 12;
	v->a[55025] = actions(3);
	v->a[55026] = 1;
	v->a[55027] = sym_comment;
	v->a[55028] = actions(1922);
	v->a[55029] = 1;
	v->a[55030] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55031] = actions(1926);
	v->a[55032] = 1;
	v->a[55033] = anon_sym_DQUOTE;
	v->a[55034] = actions(1928);
	v->a[55035] = 1;
	v->a[55036] = anon_sym_DOLLAR_LBRACE;
	v->a[55037] = actions(1930);
	v->a[55038] = 1;
	v->a[55039] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2752(v);
}

void	small_parse_table_2752(t_small_parse_table_array *v)
{
	v->a[55040] = actions(1932);
	v->a[55041] = 1;
	v->a[55042] = anon_sym_BQUOTE;
	v->a[55043] = actions(2087);
	v->a[55044] = 1;
	v->a[55045] = anon_sym_DOLLAR;
	v->a[55046] = actions(2089);
	v->a[55047] = 1;
	v->a[55048] = sym__comment_word;
	v->a[55049] = actions(2091);
	v->a[55050] = 1;
	v->a[55051] = sym__empty_value;
	v->a[55052] = state(890);
	v->a[55053] = 1;
	v->a[55054] = sym_concatenation;
	v->a[55055] = actions(2185);
	v->a[55056] = 3;
	v->a[55057] = sym_raw_string;
	v->a[55058] = sym_number;
	v->a[55059] = sym_word;
	small_parse_table_2753(v);
}

void	small_parse_table_2753(t_small_parse_table_array *v)
{
	v->a[55060] = state(822);
	v->a[55061] = 5;
	v->a[55062] = sym_arithmetic_expansion;
	v->a[55063] = sym_string;
	v->a[55064] = sym_simple_expansion;
	v->a[55065] = sym_expansion;
	v->a[55066] = sym_command_substitution;
	v->a[55067] = 6;
	v->a[55068] = actions(3);
	v->a[55069] = 1;
	v->a[55070] = sym_comment;
	v->a[55071] = actions(1599);
	v->a[55072] = 1;
	v->a[55073] = aux_sym_concatenation_token1;
	v->a[55074] = actions(1611);
	v->a[55075] = 1;
	v->a[55076] = sym__concat;
	v->a[55077] = state(1112);
	v->a[55078] = 1;
	v->a[55079] = aux_sym_concatenation_repeat1;
	small_parse_table_2754(v);
}

void	small_parse_table_2754(t_small_parse_table_array *v)
{
	v->a[55080] = actions(1023);
	v->a[55081] = 2;
	v->a[55082] = sym_variable_name;
	v->a[55083] = aux_sym_heredoc_redirect_token1;
	v->a[55084] = actions(1025);
	v->a[55085] = 12;
	v->a[55086] = anon_sym_PIPE;
	v->a[55087] = anon_sym_AMP_AMP;
	v->a[55088] = anon_sym_PIPE_PIPE;
	v->a[55089] = anon_sym_LT;
	v->a[55090] = anon_sym_GT;
	v->a[55091] = anon_sym_GT_GT;
	v->a[55092] = anon_sym_LT_AMP;
	v->a[55093] = anon_sym_GT_AMP;
	v->a[55094] = anon_sym_GT_PIPE;
	v->a[55095] = anon_sym_LT_GT;
	v->a[55096] = anon_sym_LT_LT;
	v->a[55097] = anon_sym_LT_LT_DASH;
	v->a[55098] = 12;
	v->a[55099] = actions(3);
	small_parse_table_2755(v);
}

/* EOF small_parse_table_550.c */
