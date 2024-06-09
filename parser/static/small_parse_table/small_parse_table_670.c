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
	v->a[67001] = state(1896);
	v->a[67002] = 6;
	v->a[67003] = sym_arithmetic_expansion;
	v->a[67004] = sym_string;
	v->a[67005] = sym_number;
	v->a[67006] = sym_simple_expansion;
	v->a[67007] = sym_expansion;
	v->a[67008] = sym_command_substitution;
	v->a[67009] = 3;
	v->a[67010] = actions(3);
	v->a[67011] = 1;
	v->a[67012] = sym_comment;
	v->a[67013] = actions(2450);
	v->a[67014] = 3;
	v->a[67015] = sym_file_descriptor;
	v->a[67016] = ts_builtin_sym_end;
	v->a[67017] = aux_sym_heredoc_redirect_token1;
	v->a[67018] = actions(2452);
	v->a[67019] = 20;
	small_parse_table_3351(v);
}

void	small_parse_table_3351(t_small_parse_table_array *v)
{
	v->a[67020] = anon_sym_PIPE;
	v->a[67021] = anon_sym_RPAREN;
	v->a[67022] = anon_sym_SEMI_SEMI;
	v->a[67023] = anon_sym_AMP_AMP;
	v->a[67024] = anon_sym_PIPE_PIPE;
	v->a[67025] = anon_sym_LT;
	v->a[67026] = anon_sym_GT;
	v->a[67027] = anon_sym_GT_GT;
	v->a[67028] = anon_sym_AMP_GT;
	v->a[67029] = anon_sym_AMP_GT_GT;
	v->a[67030] = anon_sym_LT_AMP;
	v->a[67031] = anon_sym_GT_AMP;
	v->a[67032] = anon_sym_GT_PIPE;
	v->a[67033] = anon_sym_LT_AMP_DASH;
	v->a[67034] = anon_sym_GT_AMP_DASH;
	v->a[67035] = anon_sym_LT_LT;
	v->a[67036] = anon_sym_LT_LT_DASH;
	v->a[67037] = anon_sym_AMP;
	v->a[67038] = anon_sym_BQUOTE;
	v->a[67039] = anon_sym_SEMI;
	small_parse_table_3352(v);
}

void	small_parse_table_3352(t_small_parse_table_array *v)
{
	v->a[67040] = 17;
	v->a[67041] = actions(3);
	v->a[67042] = 1;
	v->a[67043] = sym_comment;
	v->a[67044] = actions(2115);
	v->a[67045] = 1;
	v->a[67046] = anon_sym_LPAREN;
	v->a[67047] = actions(2119);
	v->a[67048] = 1;
	v->a[67049] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67050] = actions(2121);
	v->a[67051] = 1;
	v->a[67052] = anon_sym_DOLLAR;
	v->a[67053] = actions(2123);
	v->a[67054] = 1;
	v->a[67055] = anon_sym_DQUOTE;
	v->a[67056] = actions(2125);
	v->a[67057] = 1;
	v->a[67058] = aux_sym_number_token1;
	v->a[67059] = actions(2127);
	small_parse_table_3353(v);
}

void	small_parse_table_3353(t_small_parse_table_array *v)
{
	v->a[67060] = 1;
	v->a[67061] = aux_sym_number_token2;
	v->a[67062] = actions(2129);
	v->a[67063] = 1;
	v->a[67064] = anon_sym_DOLLAR_LBRACE;
	v->a[67065] = actions(2131);
	v->a[67066] = 1;
	v->a[67067] = anon_sym_DOLLAR_LPAREN;
	v->a[67068] = actions(2133);
	v->a[67069] = 1;
	v->a[67070] = anon_sym_BQUOTE;
	v->a[67071] = actions(2135);
	v->a[67072] = 1;
	v->a[67073] = sym_extglob_pattern;
	v->a[67074] = state(1241);
	v->a[67075] = 1;
	v->a[67076] = aux_sym_case_statement_repeat1;
	v->a[67077] = state(1786);
	v->a[67078] = 1;
	v->a[67079] = sym_case_item;
	small_parse_table_3354(v);
}

void	small_parse_table_3354(t_small_parse_table_array *v)
{
	v->a[67080] = state(2248);
	v->a[67081] = 1;
	v->a[67082] = sym__case_item_last;
	v->a[67083] = actions(2111);
	v->a[67084] = 2;
	v->a[67085] = sym_raw_string;
	v->a[67086] = sym_word;
	v->a[67087] = state(2016);
	v->a[67088] = 2;
	v->a[67089] = sym_concatenation;
	v->a[67090] = sym__extglob_blob;
	v->a[67091] = state(1896);
	v->a[67092] = 6;
	v->a[67093] = sym_arithmetic_expansion;
	v->a[67094] = sym_string;
	v->a[67095] = sym_number;
	v->a[67096] = sym_simple_expansion;
	v->a[67097] = sym_expansion;
	v->a[67098] = sym_command_substitution;
	v->a[67099] = 3;
	small_parse_table_3355(v);
}

/* EOF small_parse_table_670.c */
