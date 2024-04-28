/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_460.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2300(t_small_parse_table_array *v)
{
	v->a[46000] = anon_sym_LT_AMP_DASH;
	v->a[46001] = anon_sym_GT_AMP_DASH;
	v->a[46002] = anon_sym_LT_LT_DASH;
	v->a[46003] = anon_sym_LT_LT_LT;
	v->a[46004] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46005] = anon_sym_DOLLAR_LBRACK;
	v->a[46006] = aux_sym_concatenation_token1;
	v->a[46007] = anon_sym_DOLLAR;
	v->a[46008] = sym__special_character;
	v->a[46009] = anon_sym_DQUOTE;
	v->a[46010] = sym_raw_string;
	v->a[46011] = sym_ansi_c_string;
	v->a[46012] = aux_sym_number_token1;
	v->a[46013] = aux_sym_number_token2;
	v->a[46014] = anon_sym_DOLLAR_LBRACE;
	v->a[46015] = anon_sym_DOLLAR_LPAREN;
	v->a[46016] = anon_sym_BQUOTE;
	v->a[46017] = anon_sym_DOLLAR_BQUOTE;
	v->a[46018] = anon_sym_LT_LPAREN;
	v->a[46019] = anon_sym_GT_LPAREN;
	small_parse_table_2301(v);
}

void	small_parse_table_2301(t_small_parse_table_array *v)
{
	v->a[46020] = sym_word;
	v->a[46021] = 22;
	v->a[46022] = actions(71);
	v->a[46023] = 1;
	v->a[46024] = sym_comment;
	v->a[46025] = actions(5261);
	v->a[46026] = 1;
	v->a[46027] = anon_sym_DOLLAR_LBRACK;
	v->a[46028] = actions(5263);
	v->a[46029] = 1;
	v->a[46030] = anon_sym_DOLLAR;
	v->a[46031] = actions(5265);
	v->a[46032] = 1;
	v->a[46033] = sym__special_character;
	v->a[46034] = actions(5267);
	v->a[46035] = 1;
	v->a[46036] = anon_sym_DQUOTE;
	v->a[46037] = actions(5271);
	v->a[46038] = 1;
	v->a[46039] = aux_sym_number_token1;
	small_parse_table_2302(v);
}

void	small_parse_table_2302(t_small_parse_table_array *v)
{
	v->a[46040] = actions(5273);
	v->a[46041] = 1;
	v->a[46042] = aux_sym_number_token2;
	v->a[46043] = actions(5275);
	v->a[46044] = 1;
	v->a[46045] = anon_sym_DOLLAR_LBRACE;
	v->a[46046] = actions(5277);
	v->a[46047] = 1;
	v->a[46048] = anon_sym_DOLLAR_LPAREN;
	v->a[46049] = actions(5279);
	v->a[46050] = 1;
	v->a[46051] = anon_sym_BQUOTE;
	v->a[46052] = actions(5281);
	v->a[46053] = 1;
	v->a[46054] = anon_sym_DOLLAR_BQUOTE;
	v->a[46055] = actions(5287);
	v->a[46056] = 1;
	v->a[46057] = sym__brace_start;
	v->a[46058] = actions(5295);
	v->a[46059] = 1;
	small_parse_table_2303(v);
}

void	small_parse_table_2303(t_small_parse_table_array *v)
{
	v->a[46060] = sym_word;
	v->a[46061] = actions(5299);
	v->a[46062] = 1;
	v->a[46063] = sym_test_operator;
	v->a[46064] = state(5494);
	v->a[46065] = 1;
	v->a[46066] = aux_sym__literal_repeat1;
	v->a[46067] = state(5601);
	v->a[46068] = 1;
	v->a[46069] = sym_concatenation;
	v->a[46070] = actions(5259);
	v->a[46071] = 2;
	v->a[46072] = anon_sym_LPAREN_LPAREN;
	v->a[46073] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46074] = actions(5283);
	v->a[46075] = 2;
	v->a[46076] = anon_sym_LT_LPAREN;
	v->a[46077] = anon_sym_GT_LPAREN;
	v->a[46078] = actions(5297);
	v->a[46079] = 2;
	small_parse_table_2304(v);
}

void	small_parse_table_2304(t_small_parse_table_array *v)
{
	v->a[46080] = sym_raw_string;
	v->a[46081] = sym_ansi_c_string;
	v->a[46082] = actions(2498);
	v->a[46083] = 7;
	v->a[46084] = anon_sym_PIPE;
	v->a[46085] = anon_sym_LT;
	v->a[46086] = anon_sym_GT;
	v->a[46087] = anon_sym_LT_LT;
	v->a[46088] = anon_sym_AMP_GT;
	v->a[46089] = anon_sym_LT_AMP;
	v->a[46090] = anon_sym_GT_AMP;
	v->a[46091] = state(5352);
	v->a[46092] = 9;
	v->a[46093] = sym_arithmetic_expansion;
	v->a[46094] = sym_brace_expression;
	v->a[46095] = sym_string;
	v->a[46096] = sym_translated_string;
	v->a[46097] = sym_number;
	v->a[46098] = sym_simple_expansion;
	v->a[46099] = sym_expansion;
	small_parse_table_2305(v);
}

/* EOF small_parse_table_460.c */
