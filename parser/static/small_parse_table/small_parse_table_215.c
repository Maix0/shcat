/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_215.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1075(t_small_parse_table_array *v)
{
	v->a[21500] = aux_sym_heredoc_redirect_token1;
	v->a[21501] = anon_sym_AMP;
	v->a[21502] = anon_sym_SEMI;
	v->a[21503] = 15;
	v->a[21504] = actions(3);
	v->a[21505] = 1;
	v->a[21506] = sym_comment;
	v->a[21507] = actions(17);
	v->a[21508] = 1;
	v->a[21509] = anon_sym_LPAREN;
	v->a[21510] = actions(471);
	v->a[21511] = 1;
	v->a[21512] = sym_file_descriptor;
	v->a[21513] = actions(497);
	v->a[21514] = 1;
	v->a[21515] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21516] = actions(499);
	v->a[21517] = 1;
	v->a[21518] = anon_sym_DOLLAR;
	v->a[21519] = actions(501);
	small_parse_table_1076(v);
}

void	small_parse_table_1076(t_small_parse_table_array *v)
{
	v->a[21520] = 1;
	v->a[21521] = anon_sym_DQUOTE;
	v->a[21522] = actions(503);
	v->a[21523] = 1;
	v->a[21524] = anon_sym_DOLLAR_LBRACE;
	v->a[21525] = actions(505);
	v->a[21526] = 1;
	v->a[21527] = anon_sym_DOLLAR_LPAREN;
	v->a[21528] = actions(509);
	v->a[21529] = 1;
	v->a[21530] = sym__bare_dollar;
	v->a[21531] = state(228);
	v->a[21532] = 1;
	v->a[21533] = aux_sym_command_repeat2;
	v->a[21534] = state(729);
	v->a[21535] = 1;
	v->a[21536] = sym_concatenation;
	v->a[21537] = state(1436);
	v->a[21538] = 1;
	v->a[21539] = sym_subshell;
	small_parse_table_1077(v);
}

void	small_parse_table_1077(t_small_parse_table_array *v)
{
	v->a[21540] = actions(511);
	v->a[21541] = 3;
	v->a[21542] = sym_raw_string;
	v->a[21543] = sym_number;
	v->a[21544] = sym_word;
	v->a[21545] = state(519);
	v->a[21546] = 5;
	v->a[21547] = sym_arithmetic_expansion;
	v->a[21548] = sym_string;
	v->a[21549] = sym_simple_expansion;
	v->a[21550] = sym_expansion;
	v->a[21551] = sym_command_substitution;
	v->a[21552] = actions(457);
	v->a[21553] = 20;
	v->a[21554] = anon_sym_PIPE;
	v->a[21555] = anon_sym_SEMI_SEMI;
	v->a[21556] = anon_sym_AMP_AMP;
	v->a[21557] = anon_sym_PIPE_PIPE;
	v->a[21558] = anon_sym_LT;
	v->a[21559] = anon_sym_GT;
	small_parse_table_1078(v);
}

void	small_parse_table_1078(t_small_parse_table_array *v)
{
	v->a[21560] = anon_sym_GT_GT;
	v->a[21561] = anon_sym_AMP_GT;
	v->a[21562] = anon_sym_AMP_GT_GT;
	v->a[21563] = anon_sym_LT_AMP;
	v->a[21564] = anon_sym_GT_AMP;
	v->a[21565] = anon_sym_GT_PIPE;
	v->a[21566] = anon_sym_LT_AMP_DASH;
	v->a[21567] = anon_sym_GT_AMP_DASH;
	v->a[21568] = anon_sym_LT_LT;
	v->a[21569] = anon_sym_LT_LT_DASH;
	v->a[21570] = aux_sym_heredoc_redirect_token1;
	v->a[21571] = anon_sym_AMP;
	v->a[21572] = anon_sym_BQUOTE;
	v->a[21573] = anon_sym_SEMI;
	v->a[21574] = 14;
	v->a[21575] = actions(3);
	v->a[21576] = 1;
	v->a[21577] = sym_comment;
	v->a[21578] = actions(518);
	v->a[21579] = 1;
	small_parse_table_1079(v);
}

void	small_parse_table_1079(t_small_parse_table_array *v)
{
	v->a[21580] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21581] = actions(521);
	v->a[21582] = 1;
	v->a[21583] = anon_sym_DOLLAR;
	v->a[21584] = actions(524);
	v->a[21585] = 1;
	v->a[21586] = anon_sym_DQUOTE;
	v->a[21587] = actions(527);
	v->a[21588] = 1;
	v->a[21589] = anon_sym_DOLLAR_LBRACE;
	v->a[21590] = actions(530);
	v->a[21591] = 1;
	v->a[21592] = anon_sym_DOLLAR_LPAREN;
	v->a[21593] = actions(533);
	v->a[21594] = 1;
	v->a[21595] = anon_sym_BQUOTE;
	v->a[21596] = actions(536);
	v->a[21597] = 1;
	v->a[21598] = sym_file_descriptor;
	v->a[21599] = actions(538);
	small_parse_table_1080(v);
}

/* EOF small_parse_table_215.c */
