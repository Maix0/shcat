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
	v->a[99500] = anon_sym_LT_AMP_DASH;
	v->a[99501] = anon_sym_GT_AMP_DASH;
	v->a[99502] = anon_sym_LT_LT;
	v->a[99503] = anon_sym_LT_LT_DASH;
	v->a[99504] = anon_sym_AMP;
	v->a[99505] = anon_sym_BQUOTE;
	v->a[99506] = anon_sym_SEMI;
	v->a[99507] = 19;
	v->a[99508] = actions(3);
	v->a[99509] = 1;
	v->a[99510] = sym_comment;
	v->a[99511] = actions(5407);
	v->a[99512] = 1;
	v->a[99513] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[99514] = actions(5409);
	v->a[99515] = 1;
	v->a[99516] = anon_sym_DOLLAR;
	v->a[99517] = actions(5413);
	v->a[99518] = 1;
	v->a[99519] = anon_sym_DQUOTE;
	small_parse_table_4976(v);
}

void	small_parse_table_4976(t_small_parse_table_array *v)
{
	v->a[99520] = actions(5417);
	v->a[99521] = 1;
	v->a[99522] = aux_sym_number_token1;
	v->a[99523] = actions(5419);
	v->a[99524] = 1;
	v->a[99525] = aux_sym_number_token2;
	v->a[99526] = actions(5421);
	v->a[99527] = 1;
	v->a[99528] = anon_sym_DOLLAR_LBRACE;
	v->a[99529] = actions(5423);
	v->a[99530] = 1;
	v->a[99531] = anon_sym_DOLLAR_LPAREN;
	v->a[99532] = actions(5425);
	v->a[99533] = 1;
	v->a[99534] = anon_sym_BQUOTE;
	v->a[99535] = actions(5427);
	v->a[99536] = 1;
	v->a[99537] = anon_sym_DOLLAR_BQUOTE;
	v->a[99538] = actions(5429);
	v->a[99539] = 1;
	small_parse_table_4977(v);
}

void	small_parse_table_4977(t_small_parse_table_array *v)
{
	v->a[99540] = sym__comment_word;
	v->a[99541] = actions(5431);
	v->a[99542] = 1;
	v->a[99543] = sym__empty_value;
	v->a[99544] = actions(5433);
	v->a[99545] = 1;
	v->a[99546] = sym__brace_start;
	v->a[99547] = actions(5590);
	v->a[99548] = 1;
	v->a[99549] = sym_word;
	v->a[99550] = actions(5592);
	v->a[99551] = 1;
	v->a[99552] = sym__special_character;
	v->a[99553] = state(1916);
	v->a[99554] = 1;
	v->a[99555] = aux_sym__literal_repeat1;
	v->a[99556] = state(2141);
	v->a[99557] = 1;
	v->a[99558] = sym_concatenation;
	v->a[99559] = actions(5594);
	small_parse_table_4978(v);
}

void	small_parse_table_4978(t_small_parse_table_array *v)
{
	v->a[99560] = 2;
	v->a[99561] = sym_test_operator;
	v->a[99562] = sym_raw_string;
	v->a[99563] = state(1949);
	v->a[99564] = 7;
	v->a[99565] = sym_arithmetic_expansion;
	v->a[99566] = sym_brace_expression;
	v->a[99567] = sym_string;
	v->a[99568] = sym_number;
	v->a[99569] = sym_simple_expansion;
	v->a[99570] = sym_expansion;
	v->a[99571] = sym_command_substitution;
	v->a[99572] = 6;
	v->a[99573] = actions(3);
	v->a[99574] = 1;
	v->a[99575] = sym_comment;
	v->a[99576] = actions(5267);
	v->a[99577] = 1;
	v->a[99578] = aux_sym_concatenation_token1;
	v->a[99579] = actions(5596);
	small_parse_table_4979(v);
}

void	small_parse_table_4979(t_small_parse_table_array *v)
{
	v->a[99580] = 1;
	v->a[99581] = sym__concat;
	v->a[99582] = state(1910);
	v->a[99583] = 1;
	v->a[99584] = aux_sym_concatenation_repeat1;
	v->a[99585] = actions(2696);
	v->a[99586] = 2;
	v->a[99587] = sym_file_descriptor;
	v->a[99588] = aux_sym_heredoc_redirect_token1;
	v->a[99589] = actions(2694);
	v->a[99590] = 20;
	v->a[99591] = anon_sym_PIPE;
	v->a[99592] = anon_sym_RPAREN;
	v->a[99593] = anon_sym_SEMI_SEMI;
	v->a[99594] = anon_sym_PIPE_AMP;
	v->a[99595] = anon_sym_AMP_AMP;
	v->a[99596] = anon_sym_PIPE_PIPE;
	v->a[99597] = anon_sym_LT;
	v->a[99598] = anon_sym_GT;
	v->a[99599] = anon_sym_GT_GT;
	small_parse_table_4980(v);
}

/* EOF small_parse_table_995.c */
