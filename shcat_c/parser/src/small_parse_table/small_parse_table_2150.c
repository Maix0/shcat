/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2150.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10750(t_small_parse_table_array *v)
{
	v->a[215000] = aux_sym_number_token2;
	v->a[215001] = actions(5126);
	v->a[215002] = 1;
	v->a[215003] = anon_sym_DOLLAR_LBRACE;
	v->a[215004] = actions(5128);
	v->a[215005] = 1;
	v->a[215006] = anon_sym_DOLLAR_LPAREN;
	v->a[215007] = actions(5130);
	v->a[215008] = 1;
	v->a[215009] = anon_sym_BQUOTE;
	v->a[215010] = actions(5132);
	v->a[215011] = 1;
	v->a[215012] = anon_sym_DOLLAR_BQUOTE;
	v->a[215013] = actions(5138);
	v->a[215014] = 1;
	v->a[215015] = sym__brace_start;
	v->a[215016] = actions(10174);
	v->a[215017] = 1;
	v->a[215018] = sym_word;
	v->a[215019] = actions(10182);
	small_parse_table_10751(v);
}

void	small_parse_table_10751(t_small_parse_table_array *v)
{
	v->a[215020] = 1;
	v->a[215021] = sym__comment_word;
	v->a[215022] = actions(10272);
	v->a[215023] = 1;
	v->a[215024] = anon_sym_DOLLAR;
	v->a[215025] = actions(5110);
	v->a[215026] = 2;
	v->a[215027] = anon_sym_LPAREN_LPAREN;
	v->a[215028] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[215029] = actions(5134);
	v->a[215030] = 2;
	v->a[215031] = anon_sym_LT_LPAREN;
	v->a[215032] = anon_sym_GT_LPAREN;
	v->a[215033] = actions(10178);
	v->a[215034] = 2;
	v->a[215035] = sym_test_operator;
	v->a[215036] = sym__special_character;
	v->a[215037] = actions(10180);
	v->a[215038] = 3;
	v->a[215039] = sym__bare_dollar;
	small_parse_table_10752(v);
}

void	small_parse_table_10752(t_small_parse_table_array *v)
{
	v->a[215040] = sym_raw_string;
	v->a[215041] = sym_ansi_c_string;
	v->a[215042] = state(2842);
	v->a[215043] = 9;
	v->a[215044] = sym_arithmetic_expansion;
	v->a[215045] = sym_brace_expression;
	v->a[215046] = sym_string;
	v->a[215047] = sym_translated_string;
	v->a[215048] = sym_number;
	v->a[215049] = sym_simple_expansion;
	v->a[215050] = sym_expansion;
	v->a[215051] = sym_command_substitution;
	v->a[215052] = sym_process_substitution;
	v->a[215053] = 18;
	v->a[215054] = actions(3);
	v->a[215055] = 1;
	v->a[215056] = sym_comment;
	v->a[215057] = actions(2610);
	v->a[215058] = 1;
	v->a[215059] = aux_sym_number_token1;
	small_parse_table_10753(v);
}

void	small_parse_table_10753(t_small_parse_table_array *v)
{
	v->a[215060] = actions(2612);
	v->a[215061] = 1;
	v->a[215062] = aux_sym_number_token2;
	v->a[215063] = actions(2616);
	v->a[215064] = 1;
	v->a[215065] = anon_sym_DOLLAR_LPAREN;
	v->a[215066] = actions(2626);
	v->a[215067] = 1;
	v->a[215068] = sym__brace_start;
	v->a[215069] = actions(8962);
	v->a[215070] = 1;
	v->a[215071] = anon_sym_DOLLAR_LBRACK;
	v->a[215072] = actions(8966);
	v->a[215073] = 1;
	v->a[215074] = anon_sym_DQUOTE;
	v->a[215075] = actions(8970);
	v->a[215076] = 1;
	v->a[215077] = anon_sym_DOLLAR_LBRACE;
	v->a[215078] = actions(8972);
	v->a[215079] = 1;
	small_parse_table_10754(v);
}

void	small_parse_table_10754(t_small_parse_table_array *v)
{
	v->a[215080] = anon_sym_BQUOTE;
	v->a[215081] = actions(8974);
	v->a[215082] = 1;
	v->a[215083] = anon_sym_DOLLAR_BQUOTE;
	v->a[215084] = actions(10246);
	v->a[215085] = 1;
	v->a[215086] = sym_word;
	v->a[215087] = actions(10254);
	v->a[215088] = 1;
	v->a[215089] = sym__comment_word;
	v->a[215090] = actions(10274);
	v->a[215091] = 1;
	v->a[215092] = anon_sym_DOLLAR;
	v->a[215093] = actions(8960);
	v->a[215094] = 2;
	v->a[215095] = anon_sym_LPAREN_LPAREN;
	v->a[215096] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[215097] = actions(8976);
	v->a[215098] = 2;
	v->a[215099] = anon_sym_LT_LPAREN;
	small_parse_table_10755(v);
}

/* EOF small_parse_table_2150.c */
