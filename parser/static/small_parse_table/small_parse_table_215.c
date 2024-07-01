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
	v->a[21500] = sym_number;
	v->a[21501] = anon_sym_DOLLAR_LBRACE;
	v->a[21502] = anon_sym_DOLLAR_LPAREN;
	v->a[21503] = anon_sym_BQUOTE;
	v->a[21504] = sym_word;
	v->a[21505] = anon_sym_SEMI;
	v->a[21506] = 5;
	v->a[21507] = actions(3);
	v->a[21508] = 1;
	v->a[21509] = sym_comment;
	v->a[21510] = actions(575);
	v->a[21511] = 2;
	v->a[21512] = sym_file_descriptor;
	v->a[21513] = sym_variable_name;
	v->a[21514] = state(203);
	v->a[21515] = 2;
	v->a[21516] = sym_concatenation;
	v->a[21517] = aux_sym_for_statement_repeat1;
	v->a[21518] = state(462);
	v->a[21519] = 5;
	small_parse_table_1076(v);
}

void	small_parse_table_1076(t_small_parse_table_array *v)
{
	v->a[21520] = sym_arithmetic_expansion;
	v->a[21521] = sym_string;
	v->a[21522] = sym_simple_expansion;
	v->a[21523] = sym_expansion;
	v->a[21524] = sym_command_substitution;
	v->a[21525] = actions(573);
	v->a[21526] = 27;
	v->a[21527] = anon_sym_esac;
	v->a[21528] = anon_sym_PIPE;
	v->a[21529] = anon_sym_SEMI_SEMI;
	v->a[21530] = anon_sym_AMP_AMP;
	v->a[21531] = anon_sym_PIPE_PIPE;
	v->a[21532] = anon_sym_LT;
	v->a[21533] = anon_sym_GT;
	v->a[21534] = anon_sym_GT_GT;
	v->a[21535] = anon_sym_LT_AMP;
	v->a[21536] = anon_sym_GT_AMP;
	v->a[21537] = anon_sym_GT_PIPE;
	v->a[21538] = anon_sym_LT_AMP_DASH;
	v->a[21539] = anon_sym_GT_AMP_DASH;
	small_parse_table_1077(v);
}

void	small_parse_table_1077(t_small_parse_table_array *v)
{
	v->a[21540] = anon_sym_LT_LT;
	v->a[21541] = anon_sym_LT_LT_DASH;
	v->a[21542] = aux_sym_heredoc_redirect_token1;
	v->a[21543] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21544] = anon_sym_AMP;
	v->a[21545] = anon_sym_DOLLAR;
	v->a[21546] = anon_sym_DQUOTE;
	v->a[21547] = sym_raw_string;
	v->a[21548] = sym_number;
	v->a[21549] = anon_sym_DOLLAR_LBRACE;
	v->a[21550] = anon_sym_DOLLAR_LPAREN;
	v->a[21551] = anon_sym_BQUOTE;
	v->a[21552] = sym_word;
	v->a[21553] = anon_sym_SEMI;
	v->a[21554] = 12;
	v->a[21555] = actions(3);
	v->a[21556] = 1;
	v->a[21557] = sym_comment;
	v->a[21558] = actions(584);
	v->a[21559] = 1;
	small_parse_table_1078(v);
}

void	small_parse_table_1078(t_small_parse_table_array *v)
{
	v->a[21560] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21561] = actions(587);
	v->a[21562] = 1;
	v->a[21563] = anon_sym_DOLLAR;
	v->a[21564] = actions(590);
	v->a[21565] = 1;
	v->a[21566] = anon_sym_DQUOTE;
	v->a[21567] = actions(593);
	v->a[21568] = 1;
	v->a[21569] = anon_sym_DOLLAR_LBRACE;
	v->a[21570] = actions(596);
	v->a[21571] = 1;
	v->a[21572] = anon_sym_DOLLAR_LPAREN;
	v->a[21573] = actions(599);
	v->a[21574] = 1;
	v->a[21575] = anon_sym_BQUOTE;
	v->a[21576] = state(198);
	v->a[21577] = 2;
	v->a[21578] = sym_concatenation;
	v->a[21579] = aux_sym_for_statement_repeat1;
	small_parse_table_1079(v);
}

void	small_parse_table_1079(t_small_parse_table_array *v)
{
	v->a[21580] = actions(577);
	v->a[21581] = 3;
	v->a[21582] = sym_file_descriptor;
	v->a[21583] = sym_variable_name;
	v->a[21584] = ts_builtin_sym_end;
	v->a[21585] = actions(579);
	v->a[21586] = 3;
	v->a[21587] = sym_raw_string;
	v->a[21588] = sym_number;
	v->a[21589] = sym_word;
	v->a[21590] = state(456);
	v->a[21591] = 5;
	v->a[21592] = sym_arithmetic_expansion;
	v->a[21593] = sym_string;
	v->a[21594] = sym_simple_expansion;
	v->a[21595] = sym_expansion;
	v->a[21596] = sym_command_substitution;
	v->a[21597] = actions(582);
	v->a[21598] = 17;
	v->a[21599] = anon_sym_PIPE;
	small_parse_table_1080(v);
}

/* EOF small_parse_table_215.c */
