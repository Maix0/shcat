/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1865.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9325(t_small_parse_table_array *v)
{
	v->a[186500] = 1;
	v->a[186501] = sym__special_character;
	v->a[186502] = actions(7230);
	v->a[186503] = 1;
	v->a[186504] = anon_sym_DQUOTE;
	v->a[186505] = actions(7234);
	v->a[186506] = 1;
	v->a[186507] = anon_sym_DOLLAR_LBRACE;
	v->a[186508] = actions(7236);
	v->a[186509] = 1;
	v->a[186510] = anon_sym_BQUOTE;
	v->a[186511] = actions(7238);
	v->a[186512] = 1;
	v->a[186513] = anon_sym_DOLLAR_BQUOTE;
	v->a[186514] = state(6426);
	v->a[186515] = 1;
	v->a[186516] = aux_sym__literal_repeat1;
	v->a[186517] = state(7528);
	v->a[186518] = 1;
	v->a[186519] = sym_last_case_item;
	small_parse_table_9326(v);
}

void	small_parse_table_9326(t_small_parse_table_array *v)
{
	v->a[186520] = actions(7224);
	v->a[186521] = 2;
	v->a[186522] = anon_sym_LPAREN_LPAREN;
	v->a[186523] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[186524] = actions(7232);
	v->a[186525] = 2;
	v->a[186526] = sym_raw_string;
	v->a[186527] = sym_ansi_c_string;
	v->a[186528] = actions(7240);
	v->a[186529] = 2;
	v->a[186530] = anon_sym_LT_LPAREN;
	v->a[186531] = anon_sym_GT_LPAREN;
	v->a[186532] = state(3477);
	v->a[186533] = 2;
	v->a[186534] = sym_case_item;
	v->a[186535] = aux_sym_case_statement_repeat1;
	v->a[186536] = state(6695);
	v->a[186537] = 2;
	v->a[186538] = sym_concatenation;
	v->a[186539] = sym__extglob_blob;
	small_parse_table_9327(v);
}

void	small_parse_table_9327(t_small_parse_table_array *v)
{
	v->a[186540] = state(6303);
	v->a[186541] = 9;
	v->a[186542] = sym_arithmetic_expansion;
	v->a[186543] = sym_brace_expression;
	v->a[186544] = sym_string;
	v->a[186545] = sym_translated_string;
	v->a[186546] = sym_number;
	v->a[186547] = sym_simple_expansion;
	v->a[186548] = sym_expansion;
	v->a[186549] = sym_command_substitution;
	v->a[186550] = sym_process_substitution;
	v->a[186551] = 24;
	v->a[186552] = actions(71);
	v->a[186553] = 1;
	v->a[186554] = sym_comment;
	v->a[186555] = actions(6474);
	v->a[186556] = 1;
	v->a[186557] = sym_word;
	v->a[186558] = actions(6480);
	v->a[186559] = 1;
	small_parse_table_9328(v);
}

void	small_parse_table_9328(t_small_parse_table_array *v)
{
	v->a[186560] = anon_sym_LPAREN;
	v->a[186561] = actions(6488);
	v->a[186562] = 1;
	v->a[186563] = anon_sym_DOLLAR;
	v->a[186564] = actions(6494);
	v->a[186565] = 1;
	v->a[186566] = aux_sym_number_token1;
	v->a[186567] = actions(6496);
	v->a[186568] = 1;
	v->a[186569] = aux_sym_number_token2;
	v->a[186570] = actions(6500);
	v->a[186571] = 1;
	v->a[186572] = anon_sym_DOLLAR_LPAREN;
	v->a[186573] = actions(6508);
	v->a[186574] = 1;
	v->a[186575] = sym_test_operator;
	v->a[186576] = actions(6510);
	v->a[186577] = 1;
	v->a[186578] = sym_extglob_pattern;
	v->a[186579] = actions(6512);
	small_parse_table_9329(v);
}

void	small_parse_table_9329(t_small_parse_table_array *v)
{
	v->a[186580] = 1;
	v->a[186581] = sym__brace_start;
	v->a[186582] = actions(7226);
	v->a[186583] = 1;
	v->a[186584] = anon_sym_DOLLAR_LBRACK;
	v->a[186585] = actions(7228);
	v->a[186586] = 1;
	v->a[186587] = sym__special_character;
	v->a[186588] = actions(7230);
	v->a[186589] = 1;
	v->a[186590] = anon_sym_DQUOTE;
	v->a[186591] = actions(7234);
	v->a[186592] = 1;
	v->a[186593] = anon_sym_DOLLAR_LBRACE;
	v->a[186594] = actions(7236);
	v->a[186595] = 1;
	v->a[186596] = anon_sym_BQUOTE;
	v->a[186597] = actions(7238);
	v->a[186598] = 1;
	v->a[186599] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_9330(v);
}

/* EOF small_parse_table_1865.c */
