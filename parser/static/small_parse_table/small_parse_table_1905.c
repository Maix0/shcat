/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1905.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9525(t_small_parse_table_array *v)
{
	v->a[190500] = 1;
	v->a[190501] = sym_word;
	v->a[190502] = actions(8342);
	v->a[190503] = 1;
	v->a[190504] = anon_sym_LPAREN;
	v->a[190505] = actions(8344);
	v->a[190506] = 1;
	v->a[190507] = anon_sym_DOLLAR_LBRACK;
	v->a[190508] = actions(8346);
	v->a[190509] = 1;
	v->a[190510] = sym__special_character;
	v->a[190511] = actions(8348);
	v->a[190512] = 1;
	v->a[190513] = anon_sym_DQUOTE;
	v->a[190514] = actions(8352);
	v->a[190515] = 1;
	v->a[190516] = anon_sym_DOLLAR_LBRACE;
	v->a[190517] = actions(8354);
	v->a[190518] = 1;
	v->a[190519] = anon_sym_BQUOTE;
	small_parse_table_9526(v);
}

void	small_parse_table_9526(t_small_parse_table_array *v)
{
	v->a[190520] = actions(8356);
	v->a[190521] = 1;
	v->a[190522] = anon_sym_DOLLAR_BQUOTE;
	v->a[190523] = actions(8360);
	v->a[190524] = 1;
	v->a[190525] = sym__comment_word;
	v->a[190526] = actions(8362);
	v->a[190527] = 1;
	v->a[190528] = sym__empty_value;
	v->a[190529] = actions(8364);
	v->a[190530] = 1;
	v->a[190531] = sym_test_operator;
	v->a[190532] = state(1929);
	v->a[190533] = 1;
	v->a[190534] = aux_sym__literal_repeat1;
	v->a[190535] = actions(8340);
	v->a[190536] = 2;
	v->a[190537] = anon_sym_LPAREN_LPAREN;
	v->a[190538] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[190539] = actions(8350);
	small_parse_table_9527(v);
}

void	small_parse_table_9527(t_small_parse_table_array *v)
{
	v->a[190540] = 2;
	v->a[190541] = sym_raw_string;
	v->a[190542] = sym_ansi_c_string;
	v->a[190543] = actions(8358);
	v->a[190544] = 2;
	v->a[190545] = anon_sym_LT_LPAREN;
	v->a[190546] = anon_sym_GT_LPAREN;
	v->a[190547] = state(1947);
	v->a[190548] = 2;
	v->a[190549] = sym_concatenation;
	v->a[190550] = sym_array;
	v->a[190551] = state(1337);
	v->a[190552] = 9;
	v->a[190553] = sym_arithmetic_expansion;
	v->a[190554] = sym_brace_expression;
	v->a[190555] = sym_string;
	v->a[190556] = sym_translated_string;
	v->a[190557] = sym_number;
	v->a[190558] = sym_simple_expansion;
	v->a[190559] = sym_expansion;
	small_parse_table_9528(v);
}

void	small_parse_table_9528(t_small_parse_table_array *v)
{
	v->a[190560] = sym_command_substitution;
	v->a[190561] = sym_process_substitution;
	v->a[190562] = 23;
	v->a[190563] = actions(3);
	v->a[190564] = 1;
	v->a[190565] = sym_comment;
	v->a[190566] = actions(8366);
	v->a[190567] = 1;
	v->a[190568] = sym_word;
	v->a[190569] = actions(8370);
	v->a[190570] = 1;
	v->a[190571] = anon_sym_LPAREN;
	v->a[190572] = actions(8372);
	v->a[190573] = 1;
	v->a[190574] = anon_sym_DOLLAR_LBRACK;
	v->a[190575] = actions(8374);
	v->a[190576] = 1;
	v->a[190577] = anon_sym_DOLLAR;
	v->a[190578] = actions(8376);
	v->a[190579] = 1;
	small_parse_table_9529(v);
}

void	small_parse_table_9529(t_small_parse_table_array *v)
{
	v->a[190580] = sym__special_character;
	v->a[190581] = actions(8378);
	v->a[190582] = 1;
	v->a[190583] = anon_sym_DQUOTE;
	v->a[190584] = actions(8382);
	v->a[190585] = 1;
	v->a[190586] = aux_sym_number_token1;
	v->a[190587] = actions(8384);
	v->a[190588] = 1;
	v->a[190589] = aux_sym_number_token2;
	v->a[190590] = actions(8386);
	v->a[190591] = 1;
	v->a[190592] = anon_sym_DOLLAR_LBRACE;
	v->a[190593] = actions(8388);
	v->a[190594] = 1;
	v->a[190595] = anon_sym_DOLLAR_LPAREN;
	v->a[190596] = actions(8390);
	v->a[190597] = 1;
	v->a[190598] = anon_sym_BQUOTE;
	v->a[190599] = actions(8392);
	small_parse_table_9530(v);
}

/* EOF small_parse_table_1905.c */
