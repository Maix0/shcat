/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1655.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8275(t_small_parse_table_array *v)
{
	v->a[165500] = anon_sym_BANG_EQ;
	v->a[165501] = anon_sym_LT_EQ;
	v->a[165502] = anon_sym_GT_EQ;
	v->a[165503] = anon_sym_EQ_TILDE;
	v->a[165504] = anon_sym_QMARK;
	v->a[165505] = 25;
	v->a[165506] = actions(71);
	v->a[165507] = 1;
	v->a[165508] = sym_comment;
	v->a[165509] = actions(6474);
	v->a[165510] = 1;
	v->a[165511] = sym_word;
	v->a[165512] = actions(6480);
	v->a[165513] = 1;
	v->a[165514] = anon_sym_LPAREN;
	v->a[165515] = actions(6488);
	v->a[165516] = 1;
	v->a[165517] = anon_sym_DOLLAR;
	v->a[165518] = actions(6494);
	v->a[165519] = 1;
	small_parse_table_8276(v);
}

void	small_parse_table_8276(t_small_parse_table_array *v)
{
	v->a[165520] = aux_sym_number_token1;
	v->a[165521] = actions(6496);
	v->a[165522] = 1;
	v->a[165523] = aux_sym_number_token2;
	v->a[165524] = actions(6500);
	v->a[165525] = 1;
	v->a[165526] = anon_sym_DOLLAR_LPAREN;
	v->a[165527] = actions(6508);
	v->a[165528] = 1;
	v->a[165529] = sym_test_operator;
	v->a[165530] = actions(6510);
	v->a[165531] = 1;
	v->a[165532] = sym_extglob_pattern;
	v->a[165533] = actions(6512);
	v->a[165534] = 1;
	v->a[165535] = sym__brace_start;
	v->a[165536] = actions(7226);
	v->a[165537] = 1;
	v->a[165538] = anon_sym_DOLLAR_LBRACK;
	v->a[165539] = actions(7228);
	small_parse_table_8277(v);
}

void	small_parse_table_8277(t_small_parse_table_array *v)
{
	v->a[165540] = 1;
	v->a[165541] = sym__special_character;
	v->a[165542] = actions(7230);
	v->a[165543] = 1;
	v->a[165544] = anon_sym_DQUOTE;
	v->a[165545] = actions(7234);
	v->a[165546] = 1;
	v->a[165547] = anon_sym_DOLLAR_LBRACE;
	v->a[165548] = actions(7236);
	v->a[165549] = 1;
	v->a[165550] = anon_sym_BQUOTE;
	v->a[165551] = actions(7238);
	v->a[165552] = 1;
	v->a[165553] = anon_sym_DOLLAR_BQUOTE;
	v->a[165554] = actions(7485);
	v->a[165555] = 1;
	v->a[165556] = anon_sym_esac;
	v->a[165557] = state(6426);
	v->a[165558] = 1;
	v->a[165559] = aux_sym__literal_repeat1;
	small_parse_table_8278(v);
}

void	small_parse_table_8278(t_small_parse_table_array *v)
{
	v->a[165560] = state(7494);
	v->a[165561] = 1;
	v->a[165562] = sym_last_case_item;
	v->a[165563] = actions(7224);
	v->a[165564] = 2;
	v->a[165565] = anon_sym_LPAREN_LPAREN;
	v->a[165566] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[165567] = actions(7232);
	v->a[165568] = 2;
	v->a[165569] = sym_raw_string;
	v->a[165570] = sym_ansi_c_string;
	v->a[165571] = actions(7240);
	v->a[165572] = 2;
	v->a[165573] = anon_sym_LT_LPAREN;
	v->a[165574] = anon_sym_GT_LPAREN;
	v->a[165575] = state(3422);
	v->a[165576] = 2;
	v->a[165577] = sym_case_item;
	v->a[165578] = aux_sym_case_statement_repeat1;
	v->a[165579] = state(6695);
	small_parse_table_8279(v);
}

void	small_parse_table_8279(t_small_parse_table_array *v)
{
	v->a[165580] = 2;
	v->a[165581] = sym_concatenation;
	v->a[165582] = sym__extglob_blob;
	v->a[165583] = state(6303);
	v->a[165584] = 9;
	v->a[165585] = sym_arithmetic_expansion;
	v->a[165586] = sym_brace_expression;
	v->a[165587] = sym_string;
	v->a[165588] = sym_translated_string;
	v->a[165589] = sym_number;
	v->a[165590] = sym_simple_expansion;
	v->a[165591] = sym_expansion;
	v->a[165592] = sym_command_substitution;
	v->a[165593] = sym_process_substitution;
	v->a[165594] = 6;
	v->a[165595] = actions(3);
	v->a[165596] = 1;
	v->a[165597] = sym_comment;
	v->a[165598] = actions(7475);
	v->a[165599] = 1;
	small_parse_table_8280(v);
}

/* EOF small_parse_table_1655.c */
