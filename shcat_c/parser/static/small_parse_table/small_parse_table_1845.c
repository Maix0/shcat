/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1845.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9225(t_small_parse_table_array *v)
{
	v->a[184500] = sym_concatenation;
	v->a[184501] = sym__extglob_blob;
	v->a[184502] = state(6303);
	v->a[184503] = 9;
	v->a[184504] = sym_arithmetic_expansion;
	v->a[184505] = sym_brace_expression;
	v->a[184506] = sym_string;
	v->a[184507] = sym_translated_string;
	v->a[184508] = sym_number;
	v->a[184509] = sym_simple_expansion;
	v->a[184510] = sym_expansion;
	v->a[184511] = sym_command_substitution;
	v->a[184512] = sym_process_substitution;
	v->a[184513] = 24;
	v->a[184514] = actions(71);
	v->a[184515] = 1;
	v->a[184516] = sym_comment;
	v->a[184517] = actions(6474);
	v->a[184518] = 1;
	v->a[184519] = sym_word;
	small_parse_table_9226(v);
}

void	small_parse_table_9226(t_small_parse_table_array *v)
{
	v->a[184520] = actions(6480);
	v->a[184521] = 1;
	v->a[184522] = anon_sym_LPAREN;
	v->a[184523] = actions(6488);
	v->a[184524] = 1;
	v->a[184525] = anon_sym_DOLLAR;
	v->a[184526] = actions(6494);
	v->a[184527] = 1;
	v->a[184528] = aux_sym_number_token1;
	v->a[184529] = actions(6496);
	v->a[184530] = 1;
	v->a[184531] = aux_sym_number_token2;
	v->a[184532] = actions(6500);
	v->a[184533] = 1;
	v->a[184534] = anon_sym_DOLLAR_LPAREN;
	v->a[184535] = actions(6508);
	v->a[184536] = 1;
	v->a[184537] = sym_test_operator;
	v->a[184538] = actions(6510);
	v->a[184539] = 1;
	small_parse_table_9227(v);
}

void	small_parse_table_9227(t_small_parse_table_array *v)
{
	v->a[184540] = sym_extglob_pattern;
	v->a[184541] = actions(6512);
	v->a[184542] = 1;
	v->a[184543] = sym__brace_start;
	v->a[184544] = actions(7226);
	v->a[184545] = 1;
	v->a[184546] = anon_sym_DOLLAR_LBRACK;
	v->a[184547] = actions(7228);
	v->a[184548] = 1;
	v->a[184549] = sym__special_character;
	v->a[184550] = actions(7230);
	v->a[184551] = 1;
	v->a[184552] = anon_sym_DQUOTE;
	v->a[184553] = actions(7234);
	v->a[184554] = 1;
	v->a[184555] = anon_sym_DOLLAR_LBRACE;
	v->a[184556] = actions(7236);
	v->a[184557] = 1;
	v->a[184558] = anon_sym_BQUOTE;
	v->a[184559] = actions(7238);
	small_parse_table_9228(v);
}

void	small_parse_table_9228(t_small_parse_table_array *v)
{
	v->a[184560] = 1;
	v->a[184561] = anon_sym_DOLLAR_BQUOTE;
	v->a[184562] = state(6426);
	v->a[184563] = 1;
	v->a[184564] = aux_sym__literal_repeat1;
	v->a[184565] = state(7495);
	v->a[184566] = 1;
	v->a[184567] = sym_last_case_item;
	v->a[184568] = actions(7224);
	v->a[184569] = 2;
	v->a[184570] = anon_sym_LPAREN_LPAREN;
	v->a[184571] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[184572] = actions(7232);
	v->a[184573] = 2;
	v->a[184574] = sym_raw_string;
	v->a[184575] = sym_ansi_c_string;
	v->a[184576] = actions(7240);
	v->a[184577] = 2;
	v->a[184578] = anon_sym_LT_LPAREN;
	v->a[184579] = anon_sym_GT_LPAREN;
	small_parse_table_9229(v);
}

void	small_parse_table_9229(t_small_parse_table_array *v)
{
	v->a[184580] = state(3477);
	v->a[184581] = 2;
	v->a[184582] = sym_case_item;
	v->a[184583] = aux_sym_case_statement_repeat1;
	v->a[184584] = state(6695);
	v->a[184585] = 2;
	v->a[184586] = sym_concatenation;
	v->a[184587] = sym__extglob_blob;
	v->a[184588] = state(6303);
	v->a[184589] = 9;
	v->a[184590] = sym_arithmetic_expansion;
	v->a[184591] = sym_brace_expression;
	v->a[184592] = sym_string;
	v->a[184593] = sym_translated_string;
	v->a[184594] = sym_number;
	v->a[184595] = sym_simple_expansion;
	v->a[184596] = sym_expansion;
	v->a[184597] = sym_command_substitution;
	v->a[184598] = sym_process_substitution;
	v->a[184599] = 8;
	small_parse_table_9230(v);
}

/* EOF small_parse_table_1845.c */
