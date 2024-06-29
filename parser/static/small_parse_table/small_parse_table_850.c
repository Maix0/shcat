/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_850.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4250(t_small_parse_table_array *v)
{
	v->a[85000] = 1;
	v->a[85001] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85002] = actions(2883);
	v->a[85003] = 1;
	v->a[85004] = anon_sym_DOLLAR;
	v->a[85005] = actions(2885);
	v->a[85006] = 1;
	v->a[85007] = anon_sym_DQUOTE;
	v->a[85008] = actions(2887);
	v->a[85009] = 1;
	v->a[85010] = anon_sym_DOLLAR_LBRACE;
	v->a[85011] = actions(2889);
	v->a[85012] = 1;
	v->a[85013] = anon_sym_DOLLAR_LPAREN;
	v->a[85014] = actions(2891);
	v->a[85015] = 1;
	v->a[85016] = anon_sym_BQUOTE;
	v->a[85017] = state(583);
	v->a[85018] = 2;
	v->a[85019] = sym_concatenation;
	small_parse_table_4251(v);
}

void	small_parse_table_4251(t_small_parse_table_array *v)
{
	v->a[85020] = aux_sym_for_statement_repeat1;
	v->a[85021] = actions(3162);
	v->a[85022] = 3;
	v->a[85023] = sym_raw_string;
	v->a[85024] = sym_number;
	v->a[85025] = sym_word;
	v->a[85026] = state(828);
	v->a[85027] = 5;
	v->a[85028] = sym_arithmetic_expansion;
	v->a[85029] = sym_string;
	v->a[85030] = sym_simple_expansion;
	v->a[85031] = sym_expansion;
	v->a[85032] = sym_command_substitution;
	v->a[85033] = 10;
	v->a[85034] = actions(3);
	v->a[85035] = 1;
	v->a[85036] = sym_comment;
	v->a[85037] = actions(2789);
	v->a[85038] = 1;
	v->a[85039] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4252(v);
}

void	small_parse_table_4252(t_small_parse_table_array *v)
{
	v->a[85040] = actions(2791);
	v->a[85041] = 1;
	v->a[85042] = anon_sym_DOLLAR;
	v->a[85043] = actions(2793);
	v->a[85044] = 1;
	v->a[85045] = anon_sym_DQUOTE;
	v->a[85046] = actions(2795);
	v->a[85047] = 1;
	v->a[85048] = anon_sym_DOLLAR_LBRACE;
	v->a[85049] = actions(2797);
	v->a[85050] = 1;
	v->a[85051] = anon_sym_DOLLAR_LPAREN;
	v->a[85052] = actions(2799);
	v->a[85053] = 1;
	v->a[85054] = anon_sym_BQUOTE;
	v->a[85055] = state(205);
	v->a[85056] = 2;
	v->a[85057] = sym_concatenation;
	v->a[85058] = aux_sym_for_statement_repeat1;
	v->a[85059] = actions(3164);
	small_parse_table_4253(v);
}

void	small_parse_table_4253(t_small_parse_table_array *v)
{
	v->a[85060] = 3;
	v->a[85061] = sym_raw_string;
	v->a[85062] = sym_number;
	v->a[85063] = sym_word;
	v->a[85064] = state(361);
	v->a[85065] = 5;
	v->a[85066] = sym_arithmetic_expansion;
	v->a[85067] = sym_string;
	v->a[85068] = sym_simple_expansion;
	v->a[85069] = sym_expansion;
	v->a[85070] = sym_command_substitution;
	v->a[85071] = 10;
	v->a[85072] = actions(3);
	v->a[85073] = 1;
	v->a[85074] = sym_comment;
	v->a[85075] = actions(2719);
	v->a[85076] = 1;
	v->a[85077] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85078] = actions(2721);
	v->a[85079] = 1;
	small_parse_table_4254(v);
}

void	small_parse_table_4254(t_small_parse_table_array *v)
{
	v->a[85080] = anon_sym_DOLLAR;
	v->a[85081] = actions(2723);
	v->a[85082] = 1;
	v->a[85083] = anon_sym_DQUOTE;
	v->a[85084] = actions(2725);
	v->a[85085] = 1;
	v->a[85086] = anon_sym_DOLLAR_LBRACE;
	v->a[85087] = actions(2727);
	v->a[85088] = 1;
	v->a[85089] = anon_sym_DOLLAR_LPAREN;
	v->a[85090] = actions(2729);
	v->a[85091] = 1;
	v->a[85092] = anon_sym_BQUOTE;
	v->a[85093] = state(224);
	v->a[85094] = 2;
	v->a[85095] = sym_concatenation;
	v->a[85096] = aux_sym_for_statement_repeat1;
	v->a[85097] = actions(3139);
	v->a[85098] = 3;
	v->a[85099] = sym_raw_string;
	small_parse_table_4255(v);
}

/* EOF small_parse_table_850.c */
