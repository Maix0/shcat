/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_995.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4975(t_small_parse_table_array *v)
{
	v->a[99500] = anon_sym_DOLLAR_LPAREN;
	v->a[99501] = actions(385);
	v->a[99502] = 1;
	v->a[99503] = anon_sym_DOLLAR_BQUOTE;
	v->a[99504] = actions(389);
	v->a[99505] = 1;
	v->a[99506] = sym_test_operator;
	v->a[99507] = actions(391);
	v->a[99508] = 1;
	v->a[99509] = sym__brace_start;
	v->a[99510] = actions(5807);
	v->a[99511] = 1;
	v->a[99512] = sym__special_character;
	v->a[99513] = actions(5809);
	v->a[99514] = 1;
	v->a[99515] = anon_sym_BQUOTE;
	v->a[99516] = state(2641);
	v->a[99517] = 1;
	v->a[99518] = aux_sym__literal_repeat1;
	v->a[99519] = state(3011);
	small_parse_table_4976(v);
}

void	small_parse_table_4976(t_small_parse_table_array *v)
{
	v->a[99520] = 1;
	v->a[99521] = sym__expression;
	v->a[99522] = actions(183);
	v->a[99523] = 2;
	v->a[99524] = anon_sym_PLUS_PLUS2;
	v->a[99525] = anon_sym_DASH_DASH2;
	v->a[99526] = actions(185);
	v->a[99527] = 2;
	v->a[99528] = anon_sym_DASH2;
	v->a[99529] = anon_sym_PLUS2;
	v->a[99530] = actions(352);
	v->a[99531] = 2;
	v->a[99532] = anon_sym_LPAREN_LPAREN;
	v->a[99533] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[99534] = actions(373);
	v->a[99535] = 2;
	v->a[99536] = sym_raw_string;
	v->a[99537] = sym_ansi_c_string;
	v->a[99538] = actions(387);
	v->a[99539] = 2;
	small_parse_table_4977(v);
}

void	small_parse_table_4977(t_small_parse_table_array *v)
{
	v->a[99540] = anon_sym_LT_LPAREN;
	v->a[99541] = anon_sym_GT_LPAREN;
	v->a[99542] = state(3071);
	v->a[99543] = 6;
	v->a[99544] = sym_binary_expression;
	v->a[99545] = sym_ternary_expression;
	v->a[99546] = sym_unary_expression;
	v->a[99547] = sym_postfix_expression;
	v->a[99548] = sym_parenthesized_expression;
	v->a[99549] = sym_concatenation;
	v->a[99550] = state(2521);
	v->a[99551] = 9;
	v->a[99552] = sym_arithmetic_expansion;
	v->a[99553] = sym_brace_expression;
	v->a[99554] = sym_string;
	v->a[99555] = sym_translated_string;
	v->a[99556] = sym_number;
	v->a[99557] = sym_simple_expansion;
	v->a[99558] = sym_expansion;
	v->a[99559] = sym_command_substitution;
	small_parse_table_4978(v);
}

void	small_parse_table_4978(t_small_parse_table_array *v)
{
	v->a[99560] = sym_process_substitution;
	v->a[99561] = 3;
	v->a[99562] = actions(71);
	v->a[99563] = 1;
	v->a[99564] = sym_comment;
	v->a[99565] = actions(1332);
	v->a[99566] = 16;
	v->a[99567] = anon_sym_PIPE;
	v->a[99568] = anon_sym_EQ_EQ;
	v->a[99569] = anon_sym_LT;
	v->a[99570] = anon_sym_GT;
	v->a[99571] = anon_sym_LT_LT;
	v->a[99572] = anon_sym_LPAREN;
	v->a[99573] = anon_sym_EQ_TILDE;
	v->a[99574] = anon_sym_AMP_GT;
	v->a[99575] = anon_sym_LT_AMP;
	v->a[99576] = anon_sym_GT_AMP;
	v->a[99577] = anon_sym_DOLLAR;
	v->a[99578] = aux_sym_number_token1;
	v->a[99579] = aux_sym_number_token2;
	small_parse_table_4979(v);
}

void	small_parse_table_4979(t_small_parse_table_array *v)
{
	v->a[99580] = anon_sym_DOLLAR_LPAREN;
	v->a[99581] = anon_sym_BQUOTE;
	v->a[99582] = sym_word;
	v->a[99583] = actions(1334);
	v->a[99584] = 27;
	v->a[99585] = sym_file_descriptor;
	v->a[99586] = sym__concat;
	v->a[99587] = sym_test_operator;
	v->a[99588] = sym__bare_dollar;
	v->a[99589] = sym__brace_start;
	v->a[99590] = anon_sym_LPAREN_LPAREN;
	v->a[99591] = anon_sym_PIPE_PIPE;
	v->a[99592] = anon_sym_AMP_AMP;
	v->a[99593] = anon_sym_GT_GT;
	v->a[99594] = anon_sym_PIPE_AMP;
	v->a[99595] = anon_sym_AMP_GT_GT;
	v->a[99596] = anon_sym_GT_PIPE;
	v->a[99597] = anon_sym_LT_AMP_DASH;
	v->a[99598] = anon_sym_GT_AMP_DASH;
	v->a[99599] = anon_sym_LT_LT_DASH;
	small_parse_table_4980(v);
}

/* EOF small_parse_table_995.c */
