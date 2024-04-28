/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2155.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10775(t_small_parse_table_array *v)
{
	v->a[215500] = anon_sym_DOLLAR_LBRACK;
	v->a[215501] = actions(8948);
	v->a[215502] = 1;
	v->a[215503] = anon_sym_DQUOTE;
	v->a[215504] = actions(8952);
	v->a[215505] = 1;
	v->a[215506] = anon_sym_DOLLAR_LBRACE;
	v->a[215507] = actions(8954);
	v->a[215508] = 1;
	v->a[215509] = anon_sym_BQUOTE;
	v->a[215510] = actions(8956);
	v->a[215511] = 1;
	v->a[215512] = anon_sym_DOLLAR_BQUOTE;
	v->a[215513] = actions(10290);
	v->a[215514] = 1;
	v->a[215515] = sym_word;
	v->a[215516] = actions(10296);
	v->a[215517] = 1;
	v->a[215518] = sym__comment_word;
	v->a[215519] = actions(8942);
	small_parse_table_10776(v);
}

void	small_parse_table_10776(t_small_parse_table_array *v)
{
	v->a[215520] = 2;
	v->a[215521] = anon_sym_LPAREN_LPAREN;
	v->a[215522] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[215523] = actions(8958);
	v->a[215524] = 2;
	v->a[215525] = anon_sym_LT_LPAREN;
	v->a[215526] = anon_sym_GT_LPAREN;
	v->a[215527] = actions(10292);
	v->a[215528] = 2;
	v->a[215529] = sym_test_operator;
	v->a[215530] = sym__special_character;
	v->a[215531] = actions(10294);
	v->a[215532] = 3;
	v->a[215533] = sym__bare_dollar;
	v->a[215534] = sym_raw_string;
	v->a[215535] = sym_ansi_c_string;
	v->a[215536] = state(3415);
	v->a[215537] = 9;
	v->a[215538] = sym_arithmetic_expansion;
	v->a[215539] = sym_brace_expression;
	small_parse_table_10777(v);
}

void	small_parse_table_10777(t_small_parse_table_array *v)
{
	v->a[215540] = sym_string;
	v->a[215541] = sym_translated_string;
	v->a[215542] = sym_number;
	v->a[215543] = sym_simple_expansion;
	v->a[215544] = sym_expansion;
	v->a[215545] = sym_command_substitution;
	v->a[215546] = sym_process_substitution;
	v->a[215547] = 21;
	v->a[215548] = actions(71);
	v->a[215549] = 1;
	v->a[215550] = sym_comment;
	v->a[215551] = actions(3064);
	v->a[215552] = 1;
	v->a[215553] = sym_variable_name;
	v->a[215554] = actions(9278);
	v->a[215555] = 1;
	v->a[215556] = anon_sym_LPAREN;
	v->a[215557] = actions(9280);
	v->a[215558] = 1;
	v->a[215559] = anon_sym_BANG;
	small_parse_table_10778(v);
}

void	small_parse_table_10778(t_small_parse_table_array *v)
{
	v->a[215560] = actions(9286);
	v->a[215561] = 1;
	v->a[215562] = anon_sym_TILDE;
	v->a[215563] = actions(9288);
	v->a[215564] = 1;
	v->a[215565] = anon_sym_DOLLAR;
	v->a[215566] = actions(9290);
	v->a[215567] = 1;
	v->a[215568] = anon_sym_DQUOTE;
	v->a[215569] = actions(9292);
	v->a[215570] = 1;
	v->a[215571] = aux_sym_number_token1;
	v->a[215572] = actions(9294);
	v->a[215573] = 1;
	v->a[215574] = aux_sym_number_token2;
	v->a[215575] = actions(9296);
	v->a[215576] = 1;
	v->a[215577] = anon_sym_DOLLAR_LBRACE;
	v->a[215578] = actions(9298);
	v->a[215579] = 1;
	small_parse_table_10779(v);
}

void	small_parse_table_10779(t_small_parse_table_array *v)
{
	v->a[215580] = anon_sym_DOLLAR_LPAREN;
	v->a[215581] = actions(9300);
	v->a[215582] = 1;
	v->a[215583] = anon_sym_BQUOTE;
	v->a[215584] = actions(9302);
	v->a[215585] = 1;
	v->a[215586] = anon_sym_DOLLAR_BQUOTE;
	v->a[215587] = actions(10298);
	v->a[215588] = 1;
	v->a[215589] = aux_sym__simple_variable_name_token1;
	v->a[215590] = state(2801);
	v->a[215591] = 1;
	v->a[215592] = sym__arithmetic_binary_expression;
	v->a[215593] = state(2803);
	v->a[215594] = 1;
	v->a[215595] = sym__arithmetic_ternary_expression;
	v->a[215596] = state(2809);
	v->a[215597] = 1;
	v->a[215598] = sym__arithmetic_unary_expression;
	v->a[215599] = state(2825);
	small_parse_table_10780(v);
}

/* EOF small_parse_table_2155.c */
