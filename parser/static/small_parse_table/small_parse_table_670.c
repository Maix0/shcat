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
	v->a[67000] = actions(1778);
	v->a[67001] = 1;
	v->a[67002] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67003] = actions(1780);
	v->a[67004] = 1;
	v->a[67005] = anon_sym_DOLLAR;
	v->a[67006] = actions(1782);
	v->a[67007] = 1;
	v->a[67008] = anon_sym_DQUOTE;
	v->a[67009] = actions(1784);
	v->a[67010] = 1;
	v->a[67011] = anon_sym_DOLLAR_LBRACE;
	v->a[67012] = actions(1786);
	v->a[67013] = 1;
	v->a[67014] = anon_sym_DOLLAR_LPAREN;
	v->a[67015] = actions(1788);
	v->a[67016] = 1;
	v->a[67017] = anon_sym_BQUOTE;
	v->a[67018] = actions(1790);
	v->a[67019] = 1;
	small_parse_table_3351(v);
}

void	small_parse_table_3351(t_small_parse_table_array *v)
{
	v->a[67020] = sym_extglob_pattern;
	v->a[67021] = state(1329);
	v->a[67022] = 1;
	v->a[67023] = aux_sym_case_statement_repeat1;
	v->a[67024] = state(1920);
	v->a[67025] = 1;
	v->a[67026] = sym_case_item;
	v->a[67027] = state(2198);
	v->a[67028] = 1;
	v->a[67029] = sym__case_item_last;
	v->a[67030] = state(2096);
	v->a[67031] = 2;
	v->a[67032] = sym_concatenation;
	v->a[67033] = sym__extglob_blob;
	v->a[67034] = actions(1770);
	v->a[67035] = 3;
	v->a[67036] = sym_raw_string;
	v->a[67037] = sym_number;
	v->a[67038] = sym_word;
	v->a[67039] = state(2001);
	small_parse_table_3352(v);
}

void	small_parse_table_3352(t_small_parse_table_array *v)
{
	v->a[67040] = 5;
	v->a[67041] = sym_arithmetic_expansion;
	v->a[67042] = sym_string;
	v->a[67043] = sym_simple_expansion;
	v->a[67044] = sym_expansion;
	v->a[67045] = sym_command_substitution;
	v->a[67046] = 15;
	v->a[67047] = actions(3);
	v->a[67048] = 1;
	v->a[67049] = sym_comment;
	v->a[67050] = actions(1774);
	v->a[67051] = 1;
	v->a[67052] = anon_sym_LPAREN;
	v->a[67053] = actions(1778);
	v->a[67054] = 1;
	v->a[67055] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67056] = actions(1780);
	v->a[67057] = 1;
	v->a[67058] = anon_sym_DOLLAR;
	v->a[67059] = actions(1782);
	small_parse_table_3353(v);
}

void	small_parse_table_3353(t_small_parse_table_array *v)
{
	v->a[67060] = 1;
	v->a[67061] = anon_sym_DQUOTE;
	v->a[67062] = actions(1784);
	v->a[67063] = 1;
	v->a[67064] = anon_sym_DOLLAR_LBRACE;
	v->a[67065] = actions(1786);
	v->a[67066] = 1;
	v->a[67067] = anon_sym_DOLLAR_LPAREN;
	v->a[67068] = actions(1788);
	v->a[67069] = 1;
	v->a[67070] = anon_sym_BQUOTE;
	v->a[67071] = actions(1790);
	v->a[67072] = 1;
	v->a[67073] = sym_extglob_pattern;
	v->a[67074] = state(1329);
	v->a[67075] = 1;
	v->a[67076] = aux_sym_case_statement_repeat1;
	v->a[67077] = state(1920);
	v->a[67078] = 1;
	v->a[67079] = sym_case_item;
	small_parse_table_3354(v);
}

void	small_parse_table_3354(t_small_parse_table_array *v)
{
	v->a[67080] = state(2175);
	v->a[67081] = 1;
	v->a[67082] = sym__case_item_last;
	v->a[67083] = state(2096);
	v->a[67084] = 2;
	v->a[67085] = sym_concatenation;
	v->a[67086] = sym__extglob_blob;
	v->a[67087] = actions(1770);
	v->a[67088] = 3;
	v->a[67089] = sym_raw_string;
	v->a[67090] = sym_number;
	v->a[67091] = sym_word;
	v->a[67092] = state(2001);
	v->a[67093] = 5;
	v->a[67094] = sym_arithmetic_expansion;
	v->a[67095] = sym_string;
	v->a[67096] = sym_simple_expansion;
	v->a[67097] = sym_expansion;
	v->a[67098] = sym_command_substitution;
	v->a[67099] = 3;
	small_parse_table_3355(v);
}

/* EOF small_parse_table_670.c */
