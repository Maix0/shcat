/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1965.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9825(t_small_parse_table_array *v)
{
	v->a[196500] = actions(8567);
	v->a[196501] = 2;
	v->a[196502] = anon_sym_LPAREN_LPAREN;
	v->a[196503] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[196504] = actions(8579);
	v->a[196505] = 2;
	v->a[196506] = sym_raw_string;
	v->a[196507] = sym_ansi_c_string;
	v->a[196508] = actions(8593);
	v->a[196509] = 2;
	v->a[196510] = anon_sym_LT_LPAREN;
	v->a[196511] = anon_sym_GT_LPAREN;
	v->a[196512] = state(3604);
	v->a[196513] = 2;
	v->a[196514] = sym_concatenation;
	v->a[196515] = aux_sym_for_statement_repeat1;
	v->a[196516] = state(5045);
	v->a[196517] = 9;
	v->a[196518] = sym_arithmetic_expansion;
	v->a[196519] = sym_brace_expression;
	small_parse_table_9826(v);
}

void	small_parse_table_9826(t_small_parse_table_array *v)
{
	v->a[196520] = sym_string;
	v->a[196521] = sym_translated_string;
	v->a[196522] = sym_number;
	v->a[196523] = sym_simple_expansion;
	v->a[196524] = sym_expansion;
	v->a[196525] = sym_command_substitution;
	v->a[196526] = sym_process_substitution;
	v->a[196527] = 21;
	v->a[196528] = actions(71);
	v->a[196529] = 1;
	v->a[196530] = sym_comment;
	v->a[196531] = actions(8565);
	v->a[196532] = 1;
	v->a[196533] = sym_word;
	v->a[196534] = actions(8571);
	v->a[196535] = 1;
	v->a[196536] = anon_sym_DOLLAR_LBRACK;
	v->a[196537] = actions(8573);
	v->a[196538] = 1;
	v->a[196539] = anon_sym_DOLLAR;
	small_parse_table_9827(v);
}

void	small_parse_table_9827(t_small_parse_table_array *v)
{
	v->a[196540] = actions(8575);
	v->a[196541] = 1;
	v->a[196542] = sym__special_character;
	v->a[196543] = actions(8577);
	v->a[196544] = 1;
	v->a[196545] = anon_sym_DQUOTE;
	v->a[196546] = actions(8581);
	v->a[196547] = 1;
	v->a[196548] = aux_sym_number_token1;
	v->a[196549] = actions(8583);
	v->a[196550] = 1;
	v->a[196551] = aux_sym_number_token2;
	v->a[196552] = actions(8585);
	v->a[196553] = 1;
	v->a[196554] = anon_sym_DOLLAR_LBRACE;
	v->a[196555] = actions(8587);
	v->a[196556] = 1;
	v->a[196557] = anon_sym_DOLLAR_LPAREN;
	v->a[196558] = actions(8589);
	v->a[196559] = 1;
	small_parse_table_9828(v);
}

void	small_parse_table_9828(t_small_parse_table_array *v)
{
	v->a[196560] = anon_sym_BQUOTE;
	v->a[196561] = actions(8591);
	v->a[196562] = 1;
	v->a[196563] = anon_sym_DOLLAR_BQUOTE;
	v->a[196564] = actions(8595);
	v->a[196565] = 1;
	v->a[196566] = sym_test_operator;
	v->a[196567] = actions(8597);
	v->a[196568] = 1;
	v->a[196569] = sym__brace_start;
	v->a[196570] = actions(8814);
	v->a[196571] = 1;
	v->a[196572] = anon_sym_RPAREN;
	v->a[196573] = state(5365);
	v->a[196574] = 1;
	v->a[196575] = aux_sym__literal_repeat1;
	v->a[196576] = actions(8567);
	v->a[196577] = 2;
	v->a[196578] = anon_sym_LPAREN_LPAREN;
	v->a[196579] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_9829(v);
}

void	small_parse_table_9829(t_small_parse_table_array *v)
{
	v->a[196580] = actions(8579);
	v->a[196581] = 2;
	v->a[196582] = sym_raw_string;
	v->a[196583] = sym_ansi_c_string;
	v->a[196584] = actions(8593);
	v->a[196585] = 2;
	v->a[196586] = anon_sym_LT_LPAREN;
	v->a[196587] = anon_sym_GT_LPAREN;
	v->a[196588] = state(3610);
	v->a[196589] = 2;
	v->a[196590] = sym_concatenation;
	v->a[196591] = aux_sym_for_statement_repeat1;
	v->a[196592] = state(5045);
	v->a[196593] = 9;
	v->a[196594] = sym_arithmetic_expansion;
	v->a[196595] = sym_brace_expression;
	v->a[196596] = sym_string;
	v->a[196597] = sym_translated_string;
	v->a[196598] = sym_number;
	v->a[196599] = sym_simple_expansion;
	small_parse_table_9830(v);
}

/* EOF small_parse_table_1965.c */
