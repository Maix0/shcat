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
	v->a[21500] = anon_sym_DOLLAR_LBRACE;
	v->a[21501] = actions(3407);
	v->a[21502] = 1;
	v->a[21503] = anon_sym_DOLLAR_LPAREN;
	v->a[21504] = actions(3411);
	v->a[21505] = 1;
	v->a[21506] = anon_sym_DOLLAR_BQUOTE;
	v->a[21507] = actions(3417);
	v->a[21508] = 1;
	v->a[21509] = sym__brace_start;
	v->a[21510] = actions(3665);
	v->a[21511] = 1;
	v->a[21512] = sym__special_character;
	v->a[21513] = actions(3667);
	v->a[21514] = 1;
	v->a[21515] = sym_test_operator;
	v->a[21516] = state(2161);
	v->a[21517] = 1;
	v->a[21518] = aux_sym__literal_repeat1;
	v->a[21519] = actions(2074);
	small_parse_table_1076(v);
}

void	small_parse_table_1076(t_small_parse_table_array *v)
{
	v->a[21520] = 2;
	v->a[21521] = sym_file_descriptor;
	v->a[21522] = aux_sym_heredoc_redirect_token1;
	v->a[21523] = actions(3393);
	v->a[21524] = 2;
	v->a[21525] = anon_sym_LPAREN_LPAREN;
	v->a[21526] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21527] = actions(3413);
	v->a[21528] = 2;
	v->a[21529] = anon_sym_LT_LPAREN;
	v->a[21530] = anon_sym_GT_LPAREN;
	v->a[21531] = state(715);
	v->a[21532] = 2;
	v->a[21533] = sym_concatenation;
	v->a[21534] = aux_sym_for_statement_repeat1;
	v->a[21535] = actions(3663);
	v->a[21536] = 3;
	v->a[21537] = sym_raw_string;
	v->a[21538] = sym_ansi_c_string;
	v->a[21539] = sym_word;
	small_parse_table_1077(v);
}

void	small_parse_table_1077(t_small_parse_table_array *v)
{
	v->a[21540] = state(1918);
	v->a[21541] = 9;
	v->a[21542] = sym_arithmetic_expansion;
	v->a[21543] = sym_brace_expression;
	v->a[21544] = sym_string;
	v->a[21545] = sym_translated_string;
	v->a[21546] = sym_number;
	v->a[21547] = sym_simple_expansion;
	v->a[21548] = sym_expansion;
	v->a[21549] = sym_command_substitution;
	v->a[21550] = sym_process_substitution;
	v->a[21551] = actions(2072);
	v->a[21552] = 21;
	v->a[21553] = anon_sym_SEMI;
	v->a[21554] = anon_sym_PIPE_PIPE;
	v->a[21555] = anon_sym_AMP_AMP;
	v->a[21556] = anon_sym_PIPE;
	v->a[21557] = anon_sym_AMP;
	v->a[21558] = anon_sym_LT;
	v->a[21559] = anon_sym_GT;
	small_parse_table_1078(v);
}

void	small_parse_table_1078(t_small_parse_table_array *v)
{
	v->a[21560] = anon_sym_LT_LT;
	v->a[21561] = anon_sym_GT_GT;
	v->a[21562] = anon_sym_SEMI_SEMI;
	v->a[21563] = anon_sym_PIPE_AMP;
	v->a[21564] = anon_sym_AMP_GT;
	v->a[21565] = anon_sym_AMP_GT_GT;
	v->a[21566] = anon_sym_LT_AMP;
	v->a[21567] = anon_sym_GT_AMP;
	v->a[21568] = anon_sym_GT_PIPE;
	v->a[21569] = anon_sym_LT_AMP_DASH;
	v->a[21570] = anon_sym_GT_AMP_DASH;
	v->a[21571] = anon_sym_LT_LT_DASH;
	v->a[21572] = anon_sym_LT_LT_LT;
	v->a[21573] = anon_sym_BQUOTE;
	v->a[21574] = 20;
	v->a[21575] = actions(3);
	v->a[21576] = 1;
	v->a[21577] = sym_comment;
	v->a[21578] = actions(3115);
	v->a[21579] = 1;
	small_parse_table_1079(v);
}

void	small_parse_table_1079(t_small_parse_table_array *v)
{
	v->a[21580] = anon_sym_DQUOTE;
	v->a[21581] = actions(3395);
	v->a[21582] = 1;
	v->a[21583] = anon_sym_DOLLAR_LBRACK;
	v->a[21584] = actions(3397);
	v->a[21585] = 1;
	v->a[21586] = anon_sym_DOLLAR;
	v->a[21587] = actions(3401);
	v->a[21588] = 1;
	v->a[21589] = aux_sym_number_token1;
	v->a[21590] = actions(3403);
	v->a[21591] = 1;
	v->a[21592] = aux_sym_number_token2;
	v->a[21593] = actions(3405);
	v->a[21594] = 1;
	v->a[21595] = anon_sym_DOLLAR_LBRACE;
	v->a[21596] = actions(3407);
	v->a[21597] = 1;
	v->a[21598] = anon_sym_DOLLAR_LPAREN;
	v->a[21599] = actions(3411);
	small_parse_table_1080(v);
}

/* EOF small_parse_table_215.c */
