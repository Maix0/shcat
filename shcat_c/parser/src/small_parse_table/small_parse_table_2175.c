/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2175.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10875(t_small_parse_table_array *v)
{
	v->a[217500] = 1;
	v->a[217501] = sym__brace_start;
	v->a[217502] = actions(10062);
	v->a[217503] = 1;
	v->a[217504] = anon_sym_DOLLAR_LBRACK;
	v->a[217505] = actions(10064);
	v->a[217506] = 1;
	v->a[217507] = sym__special_character;
	v->a[217508] = actions(10066);
	v->a[217509] = 1;
	v->a[217510] = anon_sym_DQUOTE;
	v->a[217511] = actions(10070);
	v->a[217512] = 1;
	v->a[217513] = anon_sym_DOLLAR_LBRACE;
	v->a[217514] = actions(10072);
	v->a[217515] = 1;
	v->a[217516] = anon_sym_BQUOTE;
	v->a[217517] = actions(10074);
	v->a[217518] = 1;
	v->a[217519] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_10876(v);
}

void	small_parse_table_10876(t_small_parse_table_array *v)
{
	v->a[217520] = actions(10368);
	v->a[217521] = 1;
	v->a[217522] = sym_word;
	v->a[217523] = actions(10372);
	v->a[217524] = 1;
	v->a[217525] = sym_test_operator;
	v->a[217526] = state(4704);
	v->a[217527] = 1;
	v->a[217528] = aux_sym__literal_repeat1;
	v->a[217529] = state(5106);
	v->a[217530] = 1;
	v->a[217531] = sym_concatenation;
	v->a[217532] = actions(10060);
	v->a[217533] = 2;
	v->a[217534] = anon_sym_LPAREN_LPAREN;
	v->a[217535] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[217536] = actions(10076);
	v->a[217537] = 2;
	v->a[217538] = anon_sym_LT_LPAREN;
	v->a[217539] = anon_sym_GT_LPAREN;
	small_parse_table_10877(v);
}

void	small_parse_table_10877(t_small_parse_table_array *v)
{
	v->a[217540] = actions(10370);
	v->a[217541] = 2;
	v->a[217542] = sym_raw_string;
	v->a[217543] = sym_ansi_c_string;
	v->a[217544] = state(4579);
	v->a[217545] = 9;
	v->a[217546] = sym_arithmetic_expansion;
	v->a[217547] = sym_brace_expression;
	v->a[217548] = sym_string;
	v->a[217549] = sym_translated_string;
	v->a[217550] = sym_number;
	v->a[217551] = sym_simple_expansion;
	v->a[217552] = sym_expansion;
	v->a[217553] = sym_command_substitution;
	v->a[217554] = sym_process_substitution;
	v->a[217555] = 18;
	v->a[217556] = actions(3);
	v->a[217557] = 1;
	v->a[217558] = sym_comment;
	v->a[217559] = actions(3793);
	small_parse_table_10878(v);
}

void	small_parse_table_10878(t_small_parse_table_array *v)
{
	v->a[217560] = 1;
	v->a[217561] = aux_sym_number_token1;
	v->a[217562] = actions(3795);
	v->a[217563] = 1;
	v->a[217564] = aux_sym_number_token2;
	v->a[217565] = actions(3799);
	v->a[217566] = 1;
	v->a[217567] = anon_sym_DOLLAR_LPAREN;
	v->a[217568] = actions(3809);
	v->a[217569] = 1;
	v->a[217570] = sym__brace_start;
	v->a[217571] = actions(9636);
	v->a[217572] = 1;
	v->a[217573] = anon_sym_DOLLAR_LBRACK;
	v->a[217574] = actions(9640);
	v->a[217575] = 1;
	v->a[217576] = anon_sym_DQUOTE;
	v->a[217577] = actions(9644);
	v->a[217578] = 1;
	v->a[217579] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_10879(v);
}

void	small_parse_table_10879(t_small_parse_table_array *v)
{
	v->a[217580] = actions(9646);
	v->a[217581] = 1;
	v->a[217582] = anon_sym_BQUOTE;
	v->a[217583] = actions(9648);
	v->a[217584] = 1;
	v->a[217585] = anon_sym_DOLLAR_BQUOTE;
	v->a[217586] = actions(9872);
	v->a[217587] = 1;
	v->a[217588] = sym_word;
	v->a[217589] = actions(9880);
	v->a[217590] = 1;
	v->a[217591] = sym__comment_word;
	v->a[217592] = actions(10374);
	v->a[217593] = 1;
	v->a[217594] = anon_sym_DOLLAR;
	v->a[217595] = actions(9634);
	v->a[217596] = 2;
	v->a[217597] = anon_sym_LPAREN_LPAREN;
	v->a[217598] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[217599] = actions(9650);
	small_parse_table_10880(v);
}

/* EOF small_parse_table_2175.c */
