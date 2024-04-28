/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2265.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11325(t_small_parse_table_array *v)
{
	v->a[226500] = sym_string;
	v->a[226501] = sym_number;
	v->a[226502] = sym_simple_expansion;
	v->a[226503] = sym_expansion;
	v->a[226504] = sym_command_substitution;
	v->a[226505] = 20;
	v->a[226506] = actions(71);
	v->a[226507] = 1;
	v->a[226508] = sym_comment;
	v->a[226509] = actions(4080);
	v->a[226510] = 1;
	v->a[226511] = anon_sym_DOLLAR;
	v->a[226512] = actions(4086);
	v->a[226513] = 1;
	v->a[226514] = aux_sym_number_token1;
	v->a[226515] = actions(4088);
	v->a[226516] = 1;
	v->a[226517] = aux_sym_number_token2;
	v->a[226518] = actions(4092);
	v->a[226519] = 1;
	small_parse_table_11326(v);
}

void	small_parse_table_11326(t_small_parse_table_array *v)
{
	v->a[226520] = anon_sym_DOLLAR_LPAREN;
	v->a[226521] = actions(4102);
	v->a[226522] = 1;
	v->a[226523] = sym__brace_start;
	v->a[226524] = actions(9310);
	v->a[226525] = 1;
	v->a[226526] = anon_sym_DOLLAR_LBRACK;
	v->a[226527] = actions(9316);
	v->a[226528] = 1;
	v->a[226529] = anon_sym_DQUOTE;
	v->a[226530] = actions(9320);
	v->a[226531] = 1;
	v->a[226532] = anon_sym_DOLLAR_LBRACE;
	v->a[226533] = actions(9322);
	v->a[226534] = 1;
	v->a[226535] = anon_sym_BQUOTE;
	v->a[226536] = actions(9324);
	v->a[226537] = 1;
	v->a[226538] = anon_sym_DOLLAR_BQUOTE;
	v->a[226539] = actions(10760);
	small_parse_table_11327(v);
}

void	small_parse_table_11327(t_small_parse_table_array *v)
{
	v->a[226540] = 1;
	v->a[226541] = sym_word;
	v->a[226542] = actions(10762);
	v->a[226543] = 1;
	v->a[226544] = sym__special_character;
	v->a[226545] = actions(10766);
	v->a[226546] = 1;
	v->a[226547] = sym_test_operator;
	v->a[226548] = state(4500);
	v->a[226549] = 1;
	v->a[226550] = aux_sym__literal_repeat1;
	v->a[226551] = state(5029);
	v->a[226552] = 1;
	v->a[226553] = sym_concatenation;
	v->a[226554] = actions(9308);
	v->a[226555] = 2;
	v->a[226556] = anon_sym_LPAREN_LPAREN;
	v->a[226557] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[226558] = actions(9326);
	v->a[226559] = 2;
	small_parse_table_11328(v);
}

void	small_parse_table_11328(t_small_parse_table_array *v)
{
	v->a[226560] = anon_sym_LT_LPAREN;
	v->a[226561] = anon_sym_GT_LPAREN;
	v->a[226562] = actions(10764);
	v->a[226563] = 2;
	v->a[226564] = sym_raw_string;
	v->a[226565] = sym_ansi_c_string;
	v->a[226566] = state(4687);
	v->a[226567] = 9;
	v->a[226568] = sym_arithmetic_expansion;
	v->a[226569] = sym_brace_expression;
	v->a[226570] = sym_string;
	v->a[226571] = sym_translated_string;
	v->a[226572] = sym_number;
	v->a[226573] = sym_simple_expansion;
	v->a[226574] = sym_expansion;
	v->a[226575] = sym_command_substitution;
	v->a[226576] = sym_process_substitution;
	v->a[226577] = 21;
	v->a[226578] = actions(71);
	v->a[226579] = 1;
	small_parse_table_11329(v);
}

void	small_parse_table_11329(t_small_parse_table_array *v)
{
	v->a[226580] = sym_comment;
	v->a[226581] = actions(9364);
	v->a[226582] = 1;
	v->a[226583] = anon_sym_LPAREN;
	v->a[226584] = actions(9366);
	v->a[226585] = 1;
	v->a[226586] = anon_sym_BANG;
	v->a[226587] = actions(9372);
	v->a[226588] = 1;
	v->a[226589] = anon_sym_TILDE;
	v->a[226590] = actions(9374);
	v->a[226591] = 1;
	v->a[226592] = anon_sym_DOLLAR;
	v->a[226593] = actions(9376);
	v->a[226594] = 1;
	v->a[226595] = anon_sym_DQUOTE;
	v->a[226596] = actions(9378);
	v->a[226597] = 1;
	v->a[226598] = aux_sym_number_token1;
	v->a[226599] = actions(9380);
	small_parse_table_11330(v);
}

/* EOF small_parse_table_2265.c */
