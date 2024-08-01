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
	v->a[21500] = anon_sym_SEMI;
	v->a[21501] = 13;
	v->a[21502] = actions(3);
	v->a[21503] = 1;
	v->a[21504] = sym_comment;
	v->a[21505] = actions(315);
	v->a[21506] = 1;
	v->a[21507] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21508] = actions(317);
	v->a[21509] = 1;
	v->a[21510] = anon_sym_DOLLAR;
	v->a[21511] = actions(319);
	v->a[21512] = 1;
	v->a[21513] = anon_sym_DQUOTE;
	v->a[21514] = actions(323);
	v->a[21515] = 1;
	v->a[21516] = anon_sym_DOLLAR_LBRACE;
	v->a[21517] = actions(325);
	v->a[21518] = 1;
	v->a[21519] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1076(v);
}

void	small_parse_table_1076(t_small_parse_table_array *v)
{
	v->a[21520] = actions(327);
	v->a[21521] = 1;
	v->a[21522] = anon_sym_BQUOTE;
	v->a[21523] = actions(915);
	v->a[21524] = 1;
	v->a[21525] = sym__bare_dollar;
	v->a[21526] = state(269);
	v->a[21527] = 1;
	v->a[21528] = aux_sym_command_repeat2;
	v->a[21529] = state(775);
	v->a[21530] = 1;
	v->a[21531] = sym_concatenation;
	v->a[21532] = actions(913);
	v->a[21533] = 3;
	v->a[21534] = sym_raw_string;
	v->a[21535] = sym_number;
	v->a[21536] = sym_word;
	v->a[21537] = state(600);
	v->a[21538] = 5;
	v->a[21539] = sym_arithmetic_expansion;
	small_parse_table_1077(v);
}

void	small_parse_table_1077(t_small_parse_table_array *v)
{
	v->a[21540] = sym_string;
	v->a[21541] = sym_simple_expansion;
	v->a[21542] = sym_expansion;
	v->a[21543] = sym_command_substitution;
	v->a[21544] = actions(411);
	v->a[21545] = 7;
	v->a[21546] = anon_sym_PIPE;
	v->a[21547] = anon_sym_AMP_AMP;
	v->a[21548] = anon_sym_PIPE_PIPE;
	v->a[21549] = anon_sym_LT;
	v->a[21550] = anon_sym_GT;
	v->a[21551] = anon_sym_GT_GT;
	v->a[21552] = anon_sym_LT_LT;
	v->a[21553] = 13;
	v->a[21554] = actions(3);
	v->a[21555] = 1;
	v->a[21556] = sym_comment;
	v->a[21557] = actions(315);
	v->a[21558] = 1;
	v->a[21559] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1078(v);
}

void	small_parse_table_1078(t_small_parse_table_array *v)
{
	v->a[21560] = actions(317);
	v->a[21561] = 1;
	v->a[21562] = anon_sym_DOLLAR;
	v->a[21563] = actions(319);
	v->a[21564] = 1;
	v->a[21565] = anon_sym_DQUOTE;
	v->a[21566] = actions(323);
	v->a[21567] = 1;
	v->a[21568] = anon_sym_DOLLAR_LBRACE;
	v->a[21569] = actions(325);
	v->a[21570] = 1;
	v->a[21571] = anon_sym_DOLLAR_LPAREN;
	v->a[21572] = actions(327);
	v->a[21573] = 1;
	v->a[21574] = anon_sym_BQUOTE;
	v->a[21575] = actions(915);
	v->a[21576] = 1;
	v->a[21577] = sym__bare_dollar;
	v->a[21578] = state(269);
	v->a[21579] = 1;
	small_parse_table_1079(v);
}

void	small_parse_table_1079(t_small_parse_table_array *v)
{
	v->a[21580] = aux_sym_command_repeat2;
	v->a[21581] = state(775);
	v->a[21582] = 1;
	v->a[21583] = sym_concatenation;
	v->a[21584] = actions(913);
	v->a[21585] = 3;
	v->a[21586] = sym_raw_string;
	v->a[21587] = sym_number;
	v->a[21588] = sym_word;
	v->a[21589] = state(600);
	v->a[21590] = 5;
	v->a[21591] = sym_arithmetic_expansion;
	v->a[21592] = sym_string;
	v->a[21593] = sym_simple_expansion;
	v->a[21594] = sym_expansion;
	v->a[21595] = sym_command_substitution;
	v->a[21596] = actions(403);
	v->a[21597] = 7;
	v->a[21598] = anon_sym_PIPE;
	v->a[21599] = anon_sym_AMP_AMP;
	small_parse_table_1080(v);
}

/* EOF small_parse_table_215.c */
