/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1094.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5470(t_small_parse_table_array *v)
{
	v->a[109400] = actions(1171);
	v->a[109401] = 1;
	v->a[109402] = sym_word;
	v->a[109403] = actions(1173);
	v->a[109404] = 1;
	v->a[109405] = anon_sym_BANG;
	v->a[109406] = actions(1179);
	v->a[109407] = 1;
	v->a[109408] = anon_sym_TILDE;
	v->a[109409] = actions(1181);
	v->a[109410] = 1;
	v->a[109411] = sym__special_character;
	v->a[109412] = actions(1185);
	v->a[109413] = 1;
	v->a[109414] = sym_test_operator;
	v->a[109415] = actions(3060);
	v->a[109416] = 1;
	v->a[109417] = anon_sym_BQUOTE;
	v->a[109418] = state(2484);
	v->a[109419] = 1;
	small_parse_table_5471(v);
}

void	small_parse_table_5471(t_small_parse_table_array *v)
{
	v->a[109420] = aux_sym__literal_repeat1;
	v->a[109421] = state(3108);
	v->a[109422] = 1;
	v->a[109423] = sym__expression;
	v->a[109424] = actions(1129);
	v->a[109425] = 2;
	v->a[109426] = anon_sym_LPAREN_LPAREN;
	v->a[109427] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[109428] = actions(1165);
	v->a[109429] = 2;
	v->a[109430] = anon_sym_LT_LPAREN;
	v->a[109431] = anon_sym_GT_LPAREN;
	v->a[109432] = actions(1175);
	v->a[109433] = 2;
	v->a[109434] = anon_sym_PLUS_PLUS2;
	v->a[109435] = anon_sym_DASH_DASH2;
	v->a[109436] = actions(1177);
	v->a[109437] = 2;
	v->a[109438] = anon_sym_DASH2;
	v->a[109439] = anon_sym_PLUS2;
	small_parse_table_5472(v);
}

void	small_parse_table_5472(t_small_parse_table_array *v)
{
	v->a[109440] = actions(1183);
	v->a[109441] = 2;
	v->a[109442] = sym_raw_string;
	v->a[109443] = sym_ansi_c_string;
	v->a[109444] = state(2594);
	v->a[109445] = 6;
	v->a[109446] = sym_binary_expression;
	v->a[109447] = sym_ternary_expression;
	v->a[109448] = sym_unary_expression;
	v->a[109449] = sym_postfix_expression;
	v->a[109450] = sym_parenthesized_expression;
	v->a[109451] = sym_concatenation;
	v->a[109452] = state(2456);
	v->a[109453] = 9;
	v->a[109454] = sym_arithmetic_expansion;
	v->a[109455] = sym_brace_expression;
	v->a[109456] = sym_string;
	v->a[109457] = sym_translated_string;
	v->a[109458] = sym_number;
	v->a[109459] = sym_simple_expansion;
	small_parse_table_5473(v);
}

void	small_parse_table_5473(t_small_parse_table_array *v)
{
	v->a[109460] = sym_expansion;
	v->a[109461] = sym_command_substitution;
	v->a[109462] = sym_process_substitution;
	v->a[109463] = 6;
	v->a[109464] = actions(71);
	v->a[109465] = 1;
	v->a[109466] = sym_comment;
	v->a[109467] = state(3545);
	v->a[109468] = 1;
	v->a[109469] = aux_sym__literal_repeat1;
	v->a[109470] = state(3556);
	v->a[109471] = 1;
	v->a[109472] = sym_concatenation;
	v->a[109473] = state(3471);
	v->a[109474] = 9;
	v->a[109475] = sym_arithmetic_expansion;
	v->a[109476] = sym_brace_expression;
	v->a[109477] = sym_string;
	v->a[109478] = sym_translated_string;
	v->a[109479] = sym_number;
	small_parse_table_5474(v);
}

void	small_parse_table_5474(t_small_parse_table_array *v)
{
	v->a[109480] = sym_simple_expansion;
	v->a[109481] = sym_expansion;
	v->a[109482] = sym_command_substitution;
	v->a[109483] = sym_process_substitution;
	v->a[109484] = actions(2494);
	v->a[109485] = 10;
	v->a[109486] = anon_sym_LT;
	v->a[109487] = anon_sym_GT;
	v->a[109488] = anon_sym_AMP_GT;
	v->a[109489] = anon_sym_LT_AMP;
	v->a[109490] = anon_sym_GT_AMP;
	v->a[109491] = anon_sym_DOLLAR;
	v->a[109492] = aux_sym_number_token1;
	v->a[109493] = aux_sym_number_token2;
	v->a[109494] = anon_sym_DOLLAR_LPAREN;
	v->a[109495] = sym_word;
	v->a[109496] = actions(2496);
	v->a[109497] = 22;
	v->a[109498] = sym_file_descriptor;
	v->a[109499] = sym_variable_name;
	small_parse_table_5475(v);
}

/* EOF small_parse_table_1094.c */
