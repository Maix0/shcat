/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2195.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10975(t_small_parse_table_array *v)
{
	v->a[219500] = sym_process_substitution;
	v->a[219501] = 18;
	v->a[219502] = actions(3);
	v->a[219503] = 1;
	v->a[219504] = sym_comment;
	v->a[219505] = actions(47);
	v->a[219506] = 1;
	v->a[219507] = anon_sym_DOLLAR_LBRACK;
	v->a[219508] = actions(53);
	v->a[219509] = 1;
	v->a[219510] = anon_sym_DQUOTE;
	v->a[219511] = actions(57);
	v->a[219512] = 1;
	v->a[219513] = aux_sym_number_token1;
	v->a[219514] = actions(59);
	v->a[219515] = 1;
	v->a[219516] = aux_sym_number_token2;
	v->a[219517] = actions(61);
	v->a[219518] = 1;
	v->a[219519] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_10976(v);
}

void	small_parse_table_10976(t_small_parse_table_array *v)
{
	v->a[219520] = actions(63);
	v->a[219521] = 1;
	v->a[219522] = anon_sym_DOLLAR_LPAREN;
	v->a[219523] = actions(65);
	v->a[219524] = 1;
	v->a[219525] = anon_sym_BQUOTE;
	v->a[219526] = actions(67);
	v->a[219527] = 1;
	v->a[219528] = anon_sym_DOLLAR_BQUOTE;
	v->a[219529] = actions(79);
	v->a[219530] = 1;
	v->a[219531] = sym__brace_start;
	v->a[219532] = actions(10448);
	v->a[219533] = 1;
	v->a[219534] = sym_word;
	v->a[219535] = actions(10450);
	v->a[219536] = 1;
	v->a[219537] = anon_sym_DOLLAR;
	v->a[219538] = actions(10456);
	v->a[219539] = 1;
	small_parse_table_10977(v);
}

void	small_parse_table_10977(t_small_parse_table_array *v)
{
	v->a[219540] = sym__comment_word;
	v->a[219541] = actions(45);
	v->a[219542] = 2;
	v->a[219543] = anon_sym_LPAREN_LPAREN;
	v->a[219544] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[219545] = actions(69);
	v->a[219546] = 2;
	v->a[219547] = anon_sym_LT_LPAREN;
	v->a[219548] = anon_sym_GT_LPAREN;
	v->a[219549] = actions(10452);
	v->a[219550] = 2;
	v->a[219551] = sym_test_operator;
	v->a[219552] = sym__special_character;
	v->a[219553] = actions(10454);
	v->a[219554] = 3;
	v->a[219555] = sym__bare_dollar;
	v->a[219556] = sym_raw_string;
	v->a[219557] = sym_ansi_c_string;
	v->a[219558] = state(1083);
	v->a[219559] = 9;
	small_parse_table_10978(v);
}

void	small_parse_table_10978(t_small_parse_table_array *v)
{
	v->a[219560] = sym_arithmetic_expansion;
	v->a[219561] = sym_brace_expression;
	v->a[219562] = sym_string;
	v->a[219563] = sym_translated_string;
	v->a[219564] = sym_number;
	v->a[219565] = sym_simple_expansion;
	v->a[219566] = sym_expansion;
	v->a[219567] = sym_command_substitution;
	v->a[219568] = sym_process_substitution;
	v->a[219569] = 18;
	v->a[219570] = actions(3);
	v->a[219571] = 1;
	v->a[219572] = sym_comment;
	v->a[219573] = actions(1141);
	v->a[219574] = 1;
	v->a[219575] = anon_sym_DOLLAR_LBRACK;
	v->a[219576] = actions(1149);
	v->a[219577] = 1;
	v->a[219578] = anon_sym_DQUOTE;
	v->a[219579] = actions(1153);
	small_parse_table_10979(v);
}

void	small_parse_table_10979(t_small_parse_table_array *v)
{
	v->a[219580] = 1;
	v->a[219581] = aux_sym_number_token1;
	v->a[219582] = actions(1155);
	v->a[219583] = 1;
	v->a[219584] = aux_sym_number_token2;
	v->a[219585] = actions(1157);
	v->a[219586] = 1;
	v->a[219587] = anon_sym_DOLLAR_LBRACE;
	v->a[219588] = actions(1159);
	v->a[219589] = 1;
	v->a[219590] = anon_sym_DOLLAR_LPAREN;
	v->a[219591] = actions(1163);
	v->a[219592] = 1;
	v->a[219593] = anon_sym_DOLLAR_BQUOTE;
	v->a[219594] = actions(1169);
	v->a[219595] = 1;
	v->a[219596] = sym__brace_start;
	v->a[219597] = actions(3060);
	v->a[219598] = 1;
	v->a[219599] = anon_sym_BQUOTE;
	small_parse_table_10980(v);
}

/* EOF small_parse_table_2195.c */
