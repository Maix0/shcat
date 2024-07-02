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
	v->a[67000] = 1;
	v->a[67001] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67002] = actions(2448);
	v->a[67003] = 1;
	v->a[67004] = anon_sym_DQUOTE;
	v->a[67005] = actions(2450);
	v->a[67006] = 1;
	v->a[67007] = anon_sym_DOLLAR_LBRACE;
	v->a[67008] = actions(2452);
	v->a[67009] = 1;
	v->a[67010] = anon_sym_DOLLAR_LPAREN;
	v->a[67011] = actions(2454);
	v->a[67012] = 1;
	v->a[67013] = anon_sym_BQUOTE;
	v->a[67014] = actions(2456);
	v->a[67015] = 1;
	v->a[67016] = sym__bare_dollar;
	v->a[67017] = actions(2561);
	v->a[67018] = 1;
	v->a[67019] = anon_sym_DOLLAR;
	small_parse_table_3351(v);
}

void	small_parse_table_3351(t_small_parse_table_array *v)
{
	v->a[67020] = actions(2442);
	v->a[67021] = 5;
	v->a[67022] = aux_sym_concatenation_token1;
	v->a[67023] = sym_raw_string;
	v->a[67024] = sym_number;
	v->a[67025] = sym__comment_word;
	v->a[67026] = sym_word;
	v->a[67027] = state(501);
	v->a[67028] = 5;
	v->a[67029] = sym_arithmetic_expansion;
	v->a[67030] = sym_string;
	v->a[67031] = sym_simple_expansion;
	v->a[67032] = sym_expansion;
	v->a[67033] = sym_command_substitution;
	v->a[67034] = 10;
	v->a[67035] = actions(3);
	v->a[67036] = 1;
	v->a[67037] = sym_comment;
	v->a[67038] = actions(2492);
	v->a[67039] = 1;
	small_parse_table_3352(v);
}

void	small_parse_table_3352(t_small_parse_table_array *v)
{
	v->a[67040] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67041] = actions(2496);
	v->a[67042] = 1;
	v->a[67043] = anon_sym_DQUOTE;
	v->a[67044] = actions(2498);
	v->a[67045] = 1;
	v->a[67046] = anon_sym_DOLLAR_LBRACE;
	v->a[67047] = actions(2500);
	v->a[67048] = 1;
	v->a[67049] = anon_sym_DOLLAR_LPAREN;
	v->a[67050] = actions(2502);
	v->a[67051] = 1;
	v->a[67052] = anon_sym_BQUOTE;
	v->a[67053] = actions(2504);
	v->a[67054] = 1;
	v->a[67055] = sym__bare_dollar;
	v->a[67056] = actions(2563);
	v->a[67057] = 1;
	v->a[67058] = anon_sym_DOLLAR;
	v->a[67059] = actions(2490);
	small_parse_table_3353(v);
}

void	small_parse_table_3353(t_small_parse_table_array *v)
{
	v->a[67060] = 5;
	v->a[67061] = aux_sym_concatenation_token1;
	v->a[67062] = sym_raw_string;
	v->a[67063] = sym_number;
	v->a[67064] = sym__comment_word;
	v->a[67065] = sym_word;
	v->a[67066] = state(1759);
	v->a[67067] = 5;
	v->a[67068] = sym_arithmetic_expansion;
	v->a[67069] = sym_string;
	v->a[67070] = sym_simple_expansion;
	v->a[67071] = sym_expansion;
	v->a[67072] = sym_command_substitution;
	v->a[67073] = 5;
	v->a[67074] = actions(680);
	v->a[67075] = 1;
	v->a[67076] = sym_comment;
	v->a[67077] = state(1323);
	v->a[67078] = 1;
	v->a[67079] = aux_sym_concatenation_repeat1;
	small_parse_table_3354(v);
}

void	small_parse_table_3354(t_small_parse_table_array *v)
{
	v->a[67080] = actions(2565);
	v->a[67081] = 2;
	v->a[67082] = sym__concat;
	v->a[67083] = aux_sym_concatenation_token1;
	v->a[67084] = actions(1154);
	v->a[67085] = 4;
	v->a[67086] = anon_sym_PIPE;
	v->a[67087] = anon_sym_LT;
	v->a[67088] = anon_sym_GT;
	v->a[67089] = anon_sym_LT_LT;
	v->a[67090] = actions(1158);
	v->a[67091] = 10;
	v->a[67092] = sym_file_descriptor;
	v->a[67093] = sym_variable_name;
	v->a[67094] = anon_sym_AMP_AMP;
	v->a[67095] = anon_sym_PIPE_PIPE;
	v->a[67096] = anon_sym_GT_GT;
	v->a[67097] = anon_sym_LT_AMP;
	v->a[67098] = anon_sym_GT_AMP;
	v->a[67099] = anon_sym_GT_PIPE;
	small_parse_table_3355(v);
}

/* EOF small_parse_table_670.c */
