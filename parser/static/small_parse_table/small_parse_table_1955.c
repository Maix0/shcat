/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1955.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9775(t_small_parse_table_array *v)
{
	v->a[195500] = sym_test_operator;
	v->a[195501] = actions(8597);
	v->a[195502] = 1;
	v->a[195503] = sym__brace_start;
	v->a[195504] = actions(8742);
	v->a[195505] = 1;
	v->a[195506] = anon_sym_RPAREN;
	v->a[195507] = state(5365);
	v->a[195508] = 1;
	v->a[195509] = aux_sym__literal_repeat1;
	v->a[195510] = actions(8567);
	v->a[195511] = 2;
	v->a[195512] = anon_sym_LPAREN_LPAREN;
	v->a[195513] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[195514] = actions(8579);
	v->a[195515] = 2;
	v->a[195516] = sym_raw_string;
	v->a[195517] = sym_ansi_c_string;
	v->a[195518] = actions(8593);
	v->a[195519] = 2;
	small_parse_table_9776(v);
}

void	small_parse_table_9776(t_small_parse_table_array *v)
{
	v->a[195520] = anon_sym_LT_LPAREN;
	v->a[195521] = anon_sym_GT_LPAREN;
	v->a[195522] = state(3604);
	v->a[195523] = 2;
	v->a[195524] = sym_concatenation;
	v->a[195525] = aux_sym_for_statement_repeat1;
	v->a[195526] = state(5045);
	v->a[195527] = 9;
	v->a[195528] = sym_arithmetic_expansion;
	v->a[195529] = sym_brace_expression;
	v->a[195530] = sym_string;
	v->a[195531] = sym_translated_string;
	v->a[195532] = sym_number;
	v->a[195533] = sym_simple_expansion;
	v->a[195534] = sym_expansion;
	v->a[195535] = sym_command_substitution;
	v->a[195536] = sym_process_substitution;
	v->a[195537] = 21;
	v->a[195538] = actions(3);
	v->a[195539] = 1;
	small_parse_table_9777(v);
}

void	small_parse_table_9777(t_small_parse_table_array *v)
{
	v->a[195540] = sym_comment;
	v->a[195541] = actions(3729);
	v->a[195542] = 1;
	v->a[195543] = anon_sym_DOLLAR_LBRACK;
	v->a[195544] = actions(3731);
	v->a[195545] = 1;
	v->a[195546] = anon_sym_DOLLAR;
	v->a[195547] = actions(3733);
	v->a[195548] = 1;
	v->a[195549] = sym__special_character;
	v->a[195550] = actions(3735);
	v->a[195551] = 1;
	v->a[195552] = anon_sym_DQUOTE;
	v->a[195553] = actions(3737);
	v->a[195554] = 1;
	v->a[195555] = aux_sym_number_token1;
	v->a[195556] = actions(3739);
	v->a[195557] = 1;
	v->a[195558] = aux_sym_number_token2;
	v->a[195559] = actions(3741);
	small_parse_table_9778(v);
}

void	small_parse_table_9778(t_small_parse_table_array *v)
{
	v->a[195560] = 1;
	v->a[195561] = anon_sym_DOLLAR_LBRACE;
	v->a[195562] = actions(3743);
	v->a[195563] = 1;
	v->a[195564] = anon_sym_DOLLAR_LPAREN;
	v->a[195565] = actions(3745);
	v->a[195566] = 1;
	v->a[195567] = anon_sym_BQUOTE;
	v->a[195568] = actions(3747);
	v->a[195569] = 1;
	v->a[195570] = anon_sym_DOLLAR_BQUOTE;
	v->a[195571] = actions(3753);
	v->a[195572] = 1;
	v->a[195573] = sym_test_operator;
	v->a[195574] = actions(3755);
	v->a[195575] = 1;
	v->a[195576] = sym__brace_start;
	v->a[195577] = actions(8744);
	v->a[195578] = 1;
	v->a[195579] = aux_sym_heredoc_redirect_token1;
	small_parse_table_9779(v);
}

void	small_parse_table_9779(t_small_parse_table_array *v)
{
	v->a[195580] = state(3571);
	v->a[195581] = 1;
	v->a[195582] = aux_sym__heredoc_command;
	v->a[195583] = state(5351);
	v->a[195584] = 1;
	v->a[195585] = aux_sym__literal_repeat1;
	v->a[195586] = state(5456);
	v->a[195587] = 1;
	v->a[195588] = sym_concatenation;
	v->a[195589] = actions(3715);
	v->a[195590] = 2;
	v->a[195591] = anon_sym_LPAREN_LPAREN;
	v->a[195592] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[195593] = actions(3749);
	v->a[195594] = 2;
	v->a[195595] = anon_sym_LT_LPAREN;
	v->a[195596] = anon_sym_GT_LPAREN;
	v->a[195597] = actions(3713);
	v->a[195598] = 3;
	v->a[195599] = sym_raw_string;
	small_parse_table_9780(v);
}

/* EOF small_parse_table_1955.c */
