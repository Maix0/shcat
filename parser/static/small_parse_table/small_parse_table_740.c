/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_740.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3700(t_small_parse_table_array *v)
{
	v->a[74000] = sym_variable_name;
	v->a[74001] = anon_sym_AMP_AMP;
	v->a[74002] = anon_sym_PIPE_PIPE;
	v->a[74003] = anon_sym_GT_GT;
	v->a[74004] = anon_sym_AMP_GT_GT;
	v->a[74005] = anon_sym_GT_PIPE;
	v->a[74006] = anon_sym_LT_AMP_DASH;
	v->a[74007] = anon_sym_GT_AMP_DASH;
	v->a[74008] = anon_sym_LT_LT_DASH;
	v->a[74009] = aux_sym_concatenation_token1;
	v->a[74010] = 14;
	v->a[74011] = actions(3);
	v->a[74012] = 1;
	v->a[74013] = sym_comment;
	v->a[74014] = actions(2803);
	v->a[74015] = 1;
	v->a[74016] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74017] = actions(2805);
	v->a[74018] = 1;
	v->a[74019] = anon_sym_DOLLAR;
	small_parse_table_3701(v);
}

void	small_parse_table_3701(t_small_parse_table_array *v)
{
	v->a[74020] = actions(2807);
	v->a[74021] = 1;
	v->a[74022] = anon_sym_DQUOTE;
	v->a[74023] = actions(2809);
	v->a[74024] = 1;
	v->a[74025] = aux_sym_number_token1;
	v->a[74026] = actions(2811);
	v->a[74027] = 1;
	v->a[74028] = aux_sym_number_token2;
	v->a[74029] = actions(2813);
	v->a[74030] = 1;
	v->a[74031] = anon_sym_DOLLAR_LBRACE;
	v->a[74032] = actions(2815);
	v->a[74033] = 1;
	v->a[74034] = anon_sym_DOLLAR_LPAREN;
	v->a[74035] = actions(2817);
	v->a[74036] = 1;
	v->a[74037] = anon_sym_BQUOTE;
	v->a[74038] = actions(2819);
	v->a[74039] = 1;
	small_parse_table_3702(v);
}

void	small_parse_table_3702(t_small_parse_table_array *v)
{
	v->a[74040] = sym__comment_word;
	v->a[74041] = actions(2821);
	v->a[74042] = 1;
	v->a[74043] = sym__empty_value;
	v->a[74044] = state(733);
	v->a[74045] = 1;
	v->a[74046] = sym_concatenation;
	v->a[74047] = actions(2801);
	v->a[74048] = 2;
	v->a[74049] = sym_raw_string;
	v->a[74050] = sym_word;
	v->a[74051] = state(345);
	v->a[74052] = 6;
	v->a[74053] = sym_arithmetic_expansion;
	v->a[74054] = sym_string;
	v->a[74055] = sym_number;
	v->a[74056] = sym_simple_expansion;
	v->a[74057] = sym_expansion;
	v->a[74058] = sym_command_substitution;
	v->a[74059] = 14;
	small_parse_table_3703(v);
}

void	small_parse_table_3703(t_small_parse_table_array *v)
{
	v->a[74060] = actions(3);
	v->a[74061] = 1;
	v->a[74062] = sym_comment;
	v->a[74063] = actions(2825);
	v->a[74064] = 1;
	v->a[74065] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74066] = actions(2827);
	v->a[74067] = 1;
	v->a[74068] = anon_sym_DOLLAR;
	v->a[74069] = actions(2829);
	v->a[74070] = 1;
	v->a[74071] = anon_sym_DQUOTE;
	v->a[74072] = actions(2831);
	v->a[74073] = 1;
	v->a[74074] = aux_sym_number_token1;
	v->a[74075] = actions(2833);
	v->a[74076] = 1;
	v->a[74077] = aux_sym_number_token2;
	v->a[74078] = actions(2835);
	v->a[74079] = 1;
	small_parse_table_3704(v);
}

void	small_parse_table_3704(t_small_parse_table_array *v)
{
	v->a[74080] = anon_sym_DOLLAR_LBRACE;
	v->a[74081] = actions(2837);
	v->a[74082] = 1;
	v->a[74083] = anon_sym_DOLLAR_LPAREN;
	v->a[74084] = actions(2839);
	v->a[74085] = 1;
	v->a[74086] = anon_sym_BQUOTE;
	v->a[74087] = actions(2841);
	v->a[74088] = 1;
	v->a[74089] = sym__comment_word;
	v->a[74090] = actions(2843);
	v->a[74091] = 1;
	v->a[74092] = sym__empty_value;
	v->a[74093] = state(692);
	v->a[74094] = 1;
	v->a[74095] = sym_concatenation;
	v->a[74096] = actions(2823);
	v->a[74097] = 2;
	v->a[74098] = sym_raw_string;
	v->a[74099] = sym_word;
	small_parse_table_3705(v);
}

/* EOF small_parse_table_740.c */
