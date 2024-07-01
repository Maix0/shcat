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
	v->a[67000] = sym__extglob_blob;
	v->a[67001] = actions(2538);
	v->a[67002] = 3;
	v->a[67003] = sym_raw_string;
	v->a[67004] = sym_number;
	v->a[67005] = sym_word;
	v->a[67006] = state(1800);
	v->a[67007] = 5;
	v->a[67008] = sym_arithmetic_expansion;
	v->a[67009] = sym_string;
	v->a[67010] = sym_simple_expansion;
	v->a[67011] = sym_expansion;
	v->a[67012] = sym_command_substitution;
	v->a[67013] = 12;
	v->a[67014] = actions(3);
	v->a[67015] = 1;
	v->a[67016] = sym_comment;
	v->a[67017] = actions(1074);
	v->a[67018] = 1;
	v->a[67019] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3351(v);
}

void	small_parse_table_3351(t_small_parse_table_array *v)
{
	v->a[67020] = actions(1076);
	v->a[67021] = 1;
	v->a[67022] = anon_sym_DOLLAR;
	v->a[67023] = actions(1078);
	v->a[67024] = 1;
	v->a[67025] = anon_sym_DQUOTE;
	v->a[67026] = actions(1080);
	v->a[67027] = 1;
	v->a[67028] = anon_sym_DOLLAR_LBRACE;
	v->a[67029] = actions(1082);
	v->a[67030] = 1;
	v->a[67031] = anon_sym_DOLLAR_LPAREN;
	v->a[67032] = actions(1084);
	v->a[67033] = 1;
	v->a[67034] = anon_sym_BQUOTE;
	v->a[67035] = actions(2540);
	v->a[67036] = 1;
	v->a[67037] = aux_sym_heredoc_redirect_token1;
	v->a[67038] = state(1338);
	v->a[67039] = 1;
	small_parse_table_3352(v);
}

void	small_parse_table_3352(t_small_parse_table_array *v)
{
	v->a[67040] = aux_sym__heredoc_command;
	v->a[67041] = state(1721);
	v->a[67042] = 1;
	v->a[67043] = sym_concatenation;
	v->a[67044] = actions(1064);
	v->a[67045] = 3;
	v->a[67046] = sym_raw_string;
	v->a[67047] = sym_number;
	v->a[67048] = sym_word;
	v->a[67049] = state(1573);
	v->a[67050] = 5;
	v->a[67051] = sym_arithmetic_expansion;
	v->a[67052] = sym_string;
	v->a[67053] = sym_simple_expansion;
	v->a[67054] = sym_expansion;
	v->a[67055] = sym_command_substitution;
	v->a[67056] = 12;
	v->a[67057] = actions(3);
	v->a[67058] = 1;
	v->a[67059] = sym_comment;
	small_parse_table_3353(v);
}

void	small_parse_table_3353(t_small_parse_table_array *v)
{
	v->a[67060] = actions(2400);
	v->a[67061] = 1;
	v->a[67062] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67063] = actions(2404);
	v->a[67064] = 1;
	v->a[67065] = anon_sym_DQUOTE;
	v->a[67066] = actions(2406);
	v->a[67067] = 1;
	v->a[67068] = anon_sym_DOLLAR_LBRACE;
	v->a[67069] = actions(2408);
	v->a[67070] = 1;
	v->a[67071] = anon_sym_DOLLAR_LPAREN;
	v->a[67072] = actions(2410);
	v->a[67073] = 1;
	v->a[67074] = anon_sym_BQUOTE;
	v->a[67075] = actions(2532);
	v->a[67076] = 1;
	v->a[67077] = anon_sym_DOLLAR;
	v->a[67078] = actions(2544);
	v->a[67079] = 1;
	small_parse_table_3354(v);
}

void	small_parse_table_3354(t_small_parse_table_array *v)
{
	v->a[67080] = sym__comment_word;
	v->a[67081] = actions(2546);
	v->a[67082] = 1;
	v->a[67083] = sym__empty_value;
	v->a[67084] = state(622);
	v->a[67085] = 1;
	v->a[67086] = sym_concatenation;
	v->a[67087] = actions(2542);
	v->a[67088] = 3;
	v->a[67089] = sym_raw_string;
	v->a[67090] = sym_number;
	v->a[67091] = sym_word;
	v->a[67092] = state(749);
	v->a[67093] = 5;
	v->a[67094] = sym_arithmetic_expansion;
	v->a[67095] = sym_string;
	v->a[67096] = sym_simple_expansion;
	v->a[67097] = sym_expansion;
	v->a[67098] = sym_command_substitution;
	v->a[67099] = 12;
	small_parse_table_3355(v);
}

/* EOF small_parse_table_670.c */
