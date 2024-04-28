/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1935.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9675(t_small_parse_table_array *v)
{
	v->a[193500] = aux_sym__heredoc_command;
	v->a[193501] = state(5351);
	v->a[193502] = 1;
	v->a[193503] = aux_sym__literal_repeat1;
	v->a[193504] = state(5456);
	v->a[193505] = 1;
	v->a[193506] = sym_concatenation;
	v->a[193507] = actions(3715);
	v->a[193508] = 2;
	v->a[193509] = anon_sym_LPAREN_LPAREN;
	v->a[193510] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[193511] = actions(3749);
	v->a[193512] = 2;
	v->a[193513] = anon_sym_LT_LPAREN;
	v->a[193514] = anon_sym_GT_LPAREN;
	v->a[193515] = actions(3713);
	v->a[193516] = 3;
	v->a[193517] = sym_raw_string;
	v->a[193518] = sym_ansi_c_string;
	v->a[193519] = sym_word;
	small_parse_table_9676(v);
}

void	small_parse_table_9676(t_small_parse_table_array *v)
{
	v->a[193520] = state(5062);
	v->a[193521] = 9;
	v->a[193522] = sym_arithmetic_expansion;
	v->a[193523] = sym_brace_expression;
	v->a[193524] = sym_string;
	v->a[193525] = sym_translated_string;
	v->a[193526] = sym_number;
	v->a[193527] = sym_simple_expansion;
	v->a[193528] = sym_expansion;
	v->a[193529] = sym_command_substitution;
	v->a[193530] = sym_process_substitution;
	v->a[193531] = 21;
	v->a[193532] = actions(71);
	v->a[193533] = 1;
	v->a[193534] = sym_comment;
	v->a[193535] = actions(8565);
	v->a[193536] = 1;
	v->a[193537] = sym_word;
	v->a[193538] = actions(8571);
	v->a[193539] = 1;
	small_parse_table_9677(v);
}

void	small_parse_table_9677(t_small_parse_table_array *v)
{
	v->a[193540] = anon_sym_DOLLAR_LBRACK;
	v->a[193541] = actions(8573);
	v->a[193542] = 1;
	v->a[193543] = anon_sym_DOLLAR;
	v->a[193544] = actions(8575);
	v->a[193545] = 1;
	v->a[193546] = sym__special_character;
	v->a[193547] = actions(8577);
	v->a[193548] = 1;
	v->a[193549] = anon_sym_DQUOTE;
	v->a[193550] = actions(8581);
	v->a[193551] = 1;
	v->a[193552] = aux_sym_number_token1;
	v->a[193553] = actions(8583);
	v->a[193554] = 1;
	v->a[193555] = aux_sym_number_token2;
	v->a[193556] = actions(8585);
	v->a[193557] = 1;
	v->a[193558] = anon_sym_DOLLAR_LBRACE;
	v->a[193559] = actions(8587);
	small_parse_table_9678(v);
}

void	small_parse_table_9678(t_small_parse_table_array *v)
{
	v->a[193560] = 1;
	v->a[193561] = anon_sym_DOLLAR_LPAREN;
	v->a[193562] = actions(8589);
	v->a[193563] = 1;
	v->a[193564] = anon_sym_BQUOTE;
	v->a[193565] = actions(8591);
	v->a[193566] = 1;
	v->a[193567] = anon_sym_DOLLAR_BQUOTE;
	v->a[193568] = actions(8595);
	v->a[193569] = 1;
	v->a[193570] = sym_test_operator;
	v->a[193571] = actions(8597);
	v->a[193572] = 1;
	v->a[193573] = sym__brace_start;
	v->a[193574] = actions(8637);
	v->a[193575] = 1;
	v->a[193576] = anon_sym_RPAREN;
	v->a[193577] = state(5365);
	v->a[193578] = 1;
	v->a[193579] = aux_sym__literal_repeat1;
	small_parse_table_9679(v);
}

void	small_parse_table_9679(t_small_parse_table_array *v)
{
	v->a[193580] = actions(8567);
	v->a[193581] = 2;
	v->a[193582] = anon_sym_LPAREN_LPAREN;
	v->a[193583] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[193584] = actions(8579);
	v->a[193585] = 2;
	v->a[193586] = sym_raw_string;
	v->a[193587] = sym_ansi_c_string;
	v->a[193588] = actions(8593);
	v->a[193589] = 2;
	v->a[193590] = anon_sym_LT_LPAREN;
	v->a[193591] = anon_sym_GT_LPAREN;
	v->a[193592] = state(3568);
	v->a[193593] = 2;
	v->a[193594] = sym_concatenation;
	v->a[193595] = aux_sym_for_statement_repeat1;
	v->a[193596] = state(5045);
	v->a[193597] = 9;
	v->a[193598] = sym_arithmetic_expansion;
	v->a[193599] = sym_brace_expression;
	small_parse_table_9680(v);
}

/* EOF small_parse_table_1935.c */
