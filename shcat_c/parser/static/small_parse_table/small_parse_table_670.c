/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_670.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3350(t_small_parse_table_array *v)
{
	v->a[67000] = anon_sym_AMP_AMP;
	v->a[67001] = anon_sym_PIPE;
	v->a[67002] = anon_sym_AMP;
	v->a[67003] = anon_sym_LT;
	v->a[67004] = anon_sym_GT;
	v->a[67005] = anon_sym_LT_LT;
	v->a[67006] = anon_sym_GT_GT;
	v->a[67007] = anon_sym_esac;
	v->a[67008] = anon_sym_SEMI_SEMI;
	v->a[67009] = anon_sym_SEMI_AMP;
	v->a[67010] = anon_sym_SEMI_SEMI_AMP;
	v->a[67011] = anon_sym_PIPE_AMP;
	v->a[67012] = anon_sym_AMP_GT;
	v->a[67013] = anon_sym_AMP_GT_GT;
	v->a[67014] = anon_sym_LT_AMP;
	v->a[67015] = anon_sym_GT_AMP;
	v->a[67016] = anon_sym_GT_PIPE;
	v->a[67017] = anon_sym_LT_AMP_DASH;
	v->a[67018] = anon_sym_GT_AMP_DASH;
	v->a[67019] = anon_sym_LT_LT_DASH;
	small_parse_table_3351(v);
}

void	small_parse_table_3351(t_small_parse_table_array *v)
{
	v->a[67020] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67021] = anon_sym_DOLLAR_LBRACK;
	v->a[67022] = aux_sym_concatenation_token1;
	v->a[67023] = anon_sym_DOLLAR;
	v->a[67024] = sym__special_character;
	v->a[67025] = anon_sym_DQUOTE;
	v->a[67026] = sym_raw_string;
	v->a[67027] = sym_ansi_c_string;
	v->a[67028] = aux_sym_number_token1;
	v->a[67029] = aux_sym_number_token2;
	v->a[67030] = anon_sym_DOLLAR_LBRACE;
	v->a[67031] = anon_sym_DOLLAR_LPAREN;
	v->a[67032] = anon_sym_BQUOTE;
	v->a[67033] = anon_sym_DOLLAR_BQUOTE;
	v->a[67034] = anon_sym_LT_LPAREN;
	v->a[67035] = anon_sym_GT_LPAREN;
	v->a[67036] = aux_sym__simple_variable_name_token1;
	v->a[67037] = sym_word;
	v->a[67038] = 6;
	v->a[67039] = actions(3);
	small_parse_table_3352(v);
}

void	small_parse_table_3352(t_small_parse_table_array *v)
{
	v->a[67040] = 1;
	v->a[67041] = sym_comment;
	v->a[67042] = actions(5634);
	v->a[67043] = 1;
	v->a[67044] = aux_sym_concatenation_token1;
	v->a[67045] = actions(5636);
	v->a[67046] = 1;
	v->a[67047] = sym__concat;
	v->a[67048] = state(1398);
	v->a[67049] = 1;
	v->a[67050] = aux_sym_concatenation_repeat1;
	v->a[67051] = actions(1263);
	v->a[67052] = 6;
	v->a[67053] = sym_file_descriptor;
	v->a[67054] = sym_variable_name;
	v->a[67055] = sym_test_operator;
	v->a[67056] = sym__brace_start;
	v->a[67057] = ts_builtin_sym_end;
	v->a[67058] = aux_sym_heredoc_redirect_token1;
	v->a[67059] = actions(1261);
	small_parse_table_3353(v);
}

void	small_parse_table_3353(t_small_parse_table_array *v)
{
	v->a[67060] = 37;
	v->a[67061] = anon_sym_LPAREN_LPAREN;
	v->a[67062] = anon_sym_SEMI;
	v->a[67063] = anon_sym_PIPE_PIPE;
	v->a[67064] = anon_sym_AMP_AMP;
	v->a[67065] = anon_sym_PIPE;
	v->a[67066] = anon_sym_AMP;
	v->a[67067] = anon_sym_LT;
	v->a[67068] = anon_sym_GT;
	v->a[67069] = anon_sym_LT_LT;
	v->a[67070] = anon_sym_GT_GT;
	v->a[67071] = anon_sym_SEMI_SEMI;
	v->a[67072] = anon_sym_PIPE_AMP;
	v->a[67073] = anon_sym_AMP_GT;
	v->a[67074] = anon_sym_AMP_GT_GT;
	v->a[67075] = anon_sym_LT_AMP;
	v->a[67076] = anon_sym_GT_AMP;
	v->a[67077] = anon_sym_GT_PIPE;
	v->a[67078] = anon_sym_LT_AMP_DASH;
	v->a[67079] = anon_sym_GT_AMP_DASH;
	small_parse_table_3354(v);
}

void	small_parse_table_3354(t_small_parse_table_array *v)
{
	v->a[67080] = anon_sym_LT_LT_DASH;
	v->a[67081] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67082] = anon_sym_DOLLAR_LBRACK;
	v->a[67083] = anon_sym_DOLLAR;
	v->a[67084] = sym__special_character;
	v->a[67085] = anon_sym_DQUOTE;
	v->a[67086] = sym_raw_string;
	v->a[67087] = sym_ansi_c_string;
	v->a[67088] = aux_sym_number_token1;
	v->a[67089] = aux_sym_number_token2;
	v->a[67090] = anon_sym_DOLLAR_LBRACE;
	v->a[67091] = anon_sym_DOLLAR_LPAREN;
	v->a[67092] = anon_sym_BQUOTE;
	v->a[67093] = anon_sym_DOLLAR_BQUOTE;
	v->a[67094] = anon_sym_LT_LPAREN;
	v->a[67095] = anon_sym_GT_LPAREN;
	v->a[67096] = aux_sym__simple_variable_name_token1;
	v->a[67097] = sym_word;
	v->a[67098] = 3;
	v->a[67099] = actions(3);
	small_parse_table_3355(v);
}

/* EOF small_parse_table_670.c */
