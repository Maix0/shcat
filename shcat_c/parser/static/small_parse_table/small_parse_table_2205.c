/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2205.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11025(t_small_parse_table_array *v)
{
	v->a[220500] = 1;
	v->a[220501] = sym_word;
	v->a[220502] = actions(10546);
	v->a[220503] = 1;
	v->a[220504] = sym__comment_word;
	v->a[220505] = actions(10060);
	v->a[220506] = 2;
	v->a[220507] = anon_sym_LPAREN_LPAREN;
	v->a[220508] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[220509] = actions(10076);
	v->a[220510] = 2;
	v->a[220511] = anon_sym_LT_LPAREN;
	v->a[220512] = anon_sym_GT_LPAREN;
	v->a[220513] = actions(10542);
	v->a[220514] = 2;
	v->a[220515] = sym_test_operator;
	v->a[220516] = sym__special_character;
	v->a[220517] = actions(10544);
	v->a[220518] = 3;
	v->a[220519] = sym__bare_dollar;
	small_parse_table_11026(v);
}

void	small_parse_table_11026(t_small_parse_table_array *v)
{
	v->a[220520] = sym_raw_string;
	v->a[220521] = sym_ansi_c_string;
	v->a[220522] = state(4831);
	v->a[220523] = 9;
	v->a[220524] = sym_arithmetic_expansion;
	v->a[220525] = sym_brace_expression;
	v->a[220526] = sym_string;
	v->a[220527] = sym_translated_string;
	v->a[220528] = sym_number;
	v->a[220529] = sym_simple_expansion;
	v->a[220530] = sym_expansion;
	v->a[220531] = sym_command_substitution;
	v->a[220532] = sym_process_substitution;
	v->a[220533] = 18;
	v->a[220534] = actions(3);
	v->a[220535] = 1;
	v->a[220536] = sym_comment;
	v->a[220537] = actions(2574);
	v->a[220538] = 1;
	v->a[220539] = anon_sym_DOLLAR;
	small_parse_table_11027(v);
}

void	small_parse_table_11027(t_small_parse_table_array *v)
{
	v->a[220540] = actions(2580);
	v->a[220541] = 1;
	v->a[220542] = aux_sym_number_token1;
	v->a[220543] = actions(2582);
	v->a[220544] = 1;
	v->a[220545] = aux_sym_number_token2;
	v->a[220546] = actions(2586);
	v->a[220547] = 1;
	v->a[220548] = anon_sym_DOLLAR_LPAREN;
	v->a[220549] = actions(2596);
	v->a[220550] = 1;
	v->a[220551] = sym__brace_start;
	v->a[220552] = actions(9064);
	v->a[220553] = 1;
	v->a[220554] = anon_sym_DOLLAR_LBRACK;
	v->a[220555] = actions(9068);
	v->a[220556] = 1;
	v->a[220557] = anon_sym_DQUOTE;
	v->a[220558] = actions(9072);
	v->a[220559] = 1;
	small_parse_table_11028(v);
}

void	small_parse_table_11028(t_small_parse_table_array *v)
{
	v->a[220560] = anon_sym_DOLLAR_LBRACE;
	v->a[220561] = actions(9074);
	v->a[220562] = 1;
	v->a[220563] = anon_sym_BQUOTE;
	v->a[220564] = actions(9076);
	v->a[220565] = 1;
	v->a[220566] = anon_sym_DOLLAR_BQUOTE;
	v->a[220567] = actions(10548);
	v->a[220568] = 1;
	v->a[220569] = sym_word;
	v->a[220570] = actions(10554);
	v->a[220571] = 1;
	v->a[220572] = sym__comment_word;
	v->a[220573] = actions(9062);
	v->a[220574] = 2;
	v->a[220575] = anon_sym_LPAREN_LPAREN;
	v->a[220576] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[220577] = actions(9078);
	v->a[220578] = 2;
	v->a[220579] = anon_sym_LT_LPAREN;
	small_parse_table_11029(v);
}

void	small_parse_table_11029(t_small_parse_table_array *v)
{
	v->a[220580] = anon_sym_GT_LPAREN;
	v->a[220581] = actions(10550);
	v->a[220582] = 2;
	v->a[220583] = sym_test_operator;
	v->a[220584] = sym__special_character;
	v->a[220585] = actions(10552);
	v->a[220586] = 3;
	v->a[220587] = sym__bare_dollar;
	v->a[220588] = sym_raw_string;
	v->a[220589] = sym_ansi_c_string;
	v->a[220590] = state(1669);
	v->a[220591] = 9;
	v->a[220592] = sym_arithmetic_expansion;
	v->a[220593] = sym_brace_expression;
	v->a[220594] = sym_string;
	v->a[220595] = sym_translated_string;
	v->a[220596] = sym_number;
	v->a[220597] = sym_simple_expansion;
	v->a[220598] = sym_expansion;
	v->a[220599] = sym_command_substitution;
	small_parse_table_11030(v);
}

/* EOF small_parse_table_2205.c */
