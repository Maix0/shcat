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
	v->a[21500] = actions(3);
	v->a[21501] = 1;
	v->a[21502] = sym_comment;
	v->a[21503] = actions(413);
	v->a[21504] = 1;
	v->a[21505] = sym_file_descriptor;
	v->a[21506] = actions(513);
	v->a[21507] = 1;
	v->a[21508] = sym_variable_name;
	v->a[21509] = actions(511);
	v->a[21510] = 2;
	v->a[21511] = aux_sym__simple_variable_name_token1;
	v->a[21512] = aux_sym__multiline_variable_name_token1;
	v->a[21513] = actions(509);
	v->a[21514] = 9;
	v->a[21515] = anon_sym_BANG;
	v->a[21516] = anon_sym_DASH;
	v->a[21517] = anon_sym_STAR;
	v->a[21518] = anon_sym_QMARK;
	v->a[21519] = anon_sym_DOLLAR;
	small_parse_table_1076(v);
}

void	small_parse_table_1076(t_small_parse_table_array *v)
{
	v->a[21520] = anon_sym_POUND;
	v->a[21521] = anon_sym_AT;
	v->a[21522] = anon_sym_0;
	v->a[21523] = anon_sym__;
	v->a[21524] = actions(407);
	v->a[21525] = 29;
	v->a[21526] = anon_sym_esac;
	v->a[21527] = anon_sym_PIPE;
	v->a[21528] = anon_sym_SEMI_SEMI;
	v->a[21529] = anon_sym_AMP_AMP;
	v->a[21530] = anon_sym_PIPE_PIPE;
	v->a[21531] = anon_sym_LT;
	v->a[21532] = anon_sym_GT;
	v->a[21533] = anon_sym_GT_GT;
	v->a[21534] = anon_sym_AMP_GT;
	v->a[21535] = anon_sym_AMP_GT_GT;
	v->a[21536] = anon_sym_LT_AMP;
	v->a[21537] = anon_sym_GT_AMP;
	v->a[21538] = anon_sym_GT_PIPE;
	v->a[21539] = anon_sym_LT_AMP_DASH;
	small_parse_table_1077(v);
}

void	small_parse_table_1077(t_small_parse_table_array *v)
{
	v->a[21540] = anon_sym_GT_AMP_DASH;
	v->a[21541] = anon_sym_LT_LT;
	v->a[21542] = anon_sym_LT_LT_DASH;
	v->a[21543] = aux_sym_heredoc_redirect_token1;
	v->a[21544] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21545] = anon_sym_AMP;
	v->a[21546] = anon_sym_DQUOTE;
	v->a[21547] = sym_raw_string;
	v->a[21548] = aux_sym_number_token1;
	v->a[21549] = aux_sym_number_token2;
	v->a[21550] = anon_sym_DOLLAR_LBRACE;
	v->a[21551] = anon_sym_DOLLAR_LPAREN;
	v->a[21552] = anon_sym_BQUOTE;
	v->a[21553] = sym_word;
	v->a[21554] = anon_sym_SEMI;
	v->a[21555] = 18;
	v->a[21556] = actions(3);
	v->a[21557] = 1;
	v->a[21558] = sym_comment;
	v->a[21559] = actions(17);
	small_parse_table_1078(v);
}

void	small_parse_table_1078(t_small_parse_table_array *v)
{
	v->a[21560] = 1;
	v->a[21561] = anon_sym_LPAREN;
	v->a[21562] = actions(485);
	v->a[21563] = 1;
	v->a[21564] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21565] = actions(487);
	v->a[21566] = 1;
	v->a[21567] = anon_sym_DOLLAR;
	v->a[21568] = actions(489);
	v->a[21569] = 1;
	v->a[21570] = anon_sym_DQUOTE;
	v->a[21571] = actions(491);
	v->a[21572] = 1;
	v->a[21573] = aux_sym_number_token1;
	v->a[21574] = actions(493);
	v->a[21575] = 1;
	v->a[21576] = aux_sym_number_token2;
	v->a[21577] = actions(495);
	v->a[21578] = 1;
	v->a[21579] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1079(v);
}

void	small_parse_table_1079(t_small_parse_table_array *v)
{
	v->a[21580] = actions(497);
	v->a[21581] = 1;
	v->a[21582] = anon_sym_DOLLAR_LPAREN;
	v->a[21583] = actions(499);
	v->a[21584] = 1;
	v->a[21585] = anon_sym_BQUOTE;
	v->a[21586] = actions(501);
	v->a[21587] = 1;
	v->a[21588] = sym__bare_dollar;
	v->a[21589] = actions(517);
	v->a[21590] = 1;
	v->a[21591] = sym_file_descriptor;
	v->a[21592] = state(198);
	v->a[21593] = 1;
	v->a[21594] = aux_sym_command_repeat2;
	v->a[21595] = state(753);
	v->a[21596] = 1;
	v->a[21597] = sym_concatenation;
	v->a[21598] = state(1188);
	v->a[21599] = 1;
	small_parse_table_1080(v);
}

/* EOF small_parse_table_215.c */
