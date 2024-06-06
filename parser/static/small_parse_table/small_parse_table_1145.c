/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1145.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5725(t_small_parse_table_array *v)
{
	v->a[114500] = 1;
	v->a[114501] = sym_word;
	v->a[114502] = actions(6639);
	v->a[114503] = 1;
	v->a[114504] = sym__special_character;
	v->a[114505] = actions(6643);
	v->a[114506] = 1;
	v->a[114507] = sym__comment_word;
	v->a[114508] = actions(6647);
	v->a[114509] = 1;
	v->a[114510] = anon_sym_DOLLAR;
	v->a[114511] = actions(6641);
	v->a[114512] = 3;
	v->a[114513] = sym_test_operator;
	v->a[114514] = sym__bare_dollar;
	v->a[114515] = sym_raw_string;
	v->a[114516] = state(1118);
	v->a[114517] = 7;
	v->a[114518] = sym_arithmetic_expansion;
	v->a[114519] = sym_brace_expression;
	small_parse_table_5726(v);
}

void	small_parse_table_5726(t_small_parse_table_array *v)
{
	v->a[114520] = sym_string;
	v->a[114521] = sym_number;
	v->a[114522] = sym_simple_expansion;
	v->a[114523] = sym_expansion;
	v->a[114524] = sym_command_substitution;
	v->a[114525] = 16;
	v->a[114526] = actions(3);
	v->a[114527] = 1;
	v->a[114528] = sym_comment;
	v->a[114529] = actions(5453);
	v->a[114530] = 1;
	v->a[114531] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[114532] = actions(5459);
	v->a[114533] = 1;
	v->a[114534] = anon_sym_DQUOTE;
	v->a[114535] = actions(5463);
	v->a[114536] = 1;
	v->a[114537] = aux_sym_number_token1;
	v->a[114538] = actions(5465);
	v->a[114539] = 1;
	small_parse_table_5727(v);
}

void	small_parse_table_5727(t_small_parse_table_array *v)
{
	v->a[114540] = aux_sym_number_token2;
	v->a[114541] = actions(5467);
	v->a[114542] = 1;
	v->a[114543] = anon_sym_DOLLAR_LBRACE;
	v->a[114544] = actions(5469);
	v->a[114545] = 1;
	v->a[114546] = anon_sym_DOLLAR_LPAREN;
	v->a[114547] = actions(5471);
	v->a[114548] = 1;
	v->a[114549] = anon_sym_BQUOTE;
	v->a[114550] = actions(5473);
	v->a[114551] = 1;
	v->a[114552] = anon_sym_DOLLAR_BQUOTE;
	v->a[114553] = actions(5479);
	v->a[114554] = 1;
	v->a[114555] = sym__brace_start;
	v->a[114556] = actions(6637);
	v->a[114557] = 1;
	v->a[114558] = sym_word;
	v->a[114559] = actions(6639);
	small_parse_table_5728(v);
}

void	small_parse_table_5728(t_small_parse_table_array *v)
{
	v->a[114560] = 1;
	v->a[114561] = sym__special_character;
	v->a[114562] = actions(6643);
	v->a[114563] = 1;
	v->a[114564] = sym__comment_word;
	v->a[114565] = actions(6649);
	v->a[114566] = 1;
	v->a[114567] = anon_sym_DOLLAR;
	v->a[114568] = actions(6641);
	v->a[114569] = 3;
	v->a[114570] = sym_test_operator;
	v->a[114571] = sym__bare_dollar;
	v->a[114572] = sym_raw_string;
	v->a[114573] = state(1118);
	v->a[114574] = 7;
	v->a[114575] = sym_arithmetic_expansion;
	v->a[114576] = sym_brace_expression;
	v->a[114577] = sym_string;
	v->a[114578] = sym_number;
	v->a[114579] = sym_simple_expansion;
	small_parse_table_5729(v);
}

void	small_parse_table_5729(t_small_parse_table_array *v)
{
	v->a[114580] = sym_expansion;
	v->a[114581] = sym_command_substitution;
	v->a[114582] = 16;
	v->a[114583] = actions(3);
	v->a[114584] = 1;
	v->a[114585] = sym_comment;
	v->a[114586] = actions(5814);
	v->a[114587] = 1;
	v->a[114588] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[114589] = actions(5820);
	v->a[114590] = 1;
	v->a[114591] = anon_sym_DQUOTE;
	v->a[114592] = actions(5824);
	v->a[114593] = 1;
	v->a[114594] = aux_sym_number_token1;
	v->a[114595] = actions(5826);
	v->a[114596] = 1;
	v->a[114597] = aux_sym_number_token2;
	v->a[114598] = actions(5828);
	v->a[114599] = 1;
	small_parse_table_5730(v);
}

/* EOF small_parse_table_1145.c */
