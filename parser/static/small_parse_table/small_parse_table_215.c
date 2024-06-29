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
	v->a[21501] = 16;
	v->a[21502] = actions(3);
	v->a[21503] = 1;
	v->a[21504] = sym_comment;
	v->a[21505] = actions(17);
	v->a[21506] = 1;
	v->a[21507] = anon_sym_LPAREN;
	v->a[21508] = actions(477);
	v->a[21509] = 1;
	v->a[21510] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21511] = actions(479);
	v->a[21512] = 1;
	v->a[21513] = anon_sym_DOLLAR;
	v->a[21514] = actions(481);
	v->a[21515] = 1;
	v->a[21516] = anon_sym_DQUOTE;
	v->a[21517] = actions(483);
	v->a[21518] = 1;
	v->a[21519] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1076(v);
}

void	small_parse_table_1076(t_small_parse_table_array *v)
{
	v->a[21520] = actions(485);
	v->a[21521] = 1;
	v->a[21522] = anon_sym_DOLLAR_LPAREN;
	v->a[21523] = actions(487);
	v->a[21524] = 1;
	v->a[21525] = anon_sym_BQUOTE;
	v->a[21526] = actions(489);
	v->a[21527] = 1;
	v->a[21528] = sym__bare_dollar;
	v->a[21529] = actions(491);
	v->a[21530] = 1;
	v->a[21531] = sym_file_descriptor;
	v->a[21532] = state(243);
	v->a[21533] = 1;
	v->a[21534] = aux_sym_command_repeat2;
	v->a[21535] = state(712);
	v->a[21536] = 1;
	v->a[21537] = sym_concatenation;
	v->a[21538] = state(1263);
	v->a[21539] = 1;
	small_parse_table_1077(v);
}

void	small_parse_table_1077(t_small_parse_table_array *v)
{
	v->a[21540] = sym_subshell;
	v->a[21541] = actions(511);
	v->a[21542] = 3;
	v->a[21543] = sym_raw_string;
	v->a[21544] = sym_number;
	v->a[21545] = sym_word;
	v->a[21546] = state(479);
	v->a[21547] = 5;
	v->a[21548] = sym_arithmetic_expansion;
	v->a[21549] = sym_string;
	v->a[21550] = sym_simple_expansion;
	v->a[21551] = sym_expansion;
	v->a[21552] = sym_command_substitution;
	v->a[21553] = actions(493);
	v->a[21554] = 19;
	v->a[21555] = anon_sym_PIPE;
	v->a[21556] = anon_sym_SEMI_SEMI;
	v->a[21557] = anon_sym_AMP_AMP;
	v->a[21558] = anon_sym_PIPE_PIPE;
	v->a[21559] = anon_sym_LT;
	small_parse_table_1078(v);
}

void	small_parse_table_1078(t_small_parse_table_array *v)
{
	v->a[21560] = anon_sym_GT;
	v->a[21561] = anon_sym_GT_GT;
	v->a[21562] = anon_sym_AMP_GT;
	v->a[21563] = anon_sym_AMP_GT_GT;
	v->a[21564] = anon_sym_LT_AMP;
	v->a[21565] = anon_sym_GT_AMP;
	v->a[21566] = anon_sym_GT_PIPE;
	v->a[21567] = anon_sym_LT_AMP_DASH;
	v->a[21568] = anon_sym_GT_AMP_DASH;
	v->a[21569] = anon_sym_LT_LT;
	v->a[21570] = anon_sym_LT_LT_DASH;
	v->a[21571] = aux_sym_heredoc_redirect_token1;
	v->a[21572] = anon_sym_AMP;
	v->a[21573] = anon_sym_SEMI;
	v->a[21574] = 12;
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
	v->a[21597] = 2;
	v->a[21598] = sym_file_descriptor;
	v->a[21599] = sym_variable_name;
	small_parse_table_1080(v);
}

/* EOF small_parse_table_215.c */
