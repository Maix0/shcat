/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1885.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9425(t_small_parse_table_array *v)
{
	v->a[188500] = sym_comment;
	v->a[188501] = actions(7781);
	v->a[188502] = 1;
	v->a[188503] = anon_sym_LPAREN;
	v->a[188504] = actions(7783);
	v->a[188505] = 1;
	v->a[188506] = anon_sym_DOLLAR_LBRACK;
	v->a[188507] = actions(7785);
	v->a[188508] = 1;
	v->a[188509] = anon_sym_DOLLAR;
	v->a[188510] = actions(7787);
	v->a[188511] = 1;
	v->a[188512] = sym__special_character;
	v->a[188513] = actions(7789);
	v->a[188514] = 1;
	v->a[188515] = anon_sym_DQUOTE;
	v->a[188516] = actions(7793);
	v->a[188517] = 1;
	v->a[188518] = aux_sym_number_token1;
	v->a[188519] = actions(7795);
	small_parse_table_9426(v);
}

void	small_parse_table_9426(t_small_parse_table_array *v)
{
	v->a[188520] = 1;
	v->a[188521] = aux_sym_number_token2;
	v->a[188522] = actions(7797);
	v->a[188523] = 1;
	v->a[188524] = anon_sym_DOLLAR_LBRACE;
	v->a[188525] = actions(7801);
	v->a[188526] = 1;
	v->a[188527] = anon_sym_DOLLAR_LPAREN;
	v->a[188528] = actions(7803);
	v->a[188529] = 1;
	v->a[188530] = anon_sym_BQUOTE;
	v->a[188531] = actions(7805);
	v->a[188532] = 1;
	v->a[188533] = anon_sym_DOLLAR_BQUOTE;
	v->a[188534] = actions(7809);
	v->a[188535] = 1;
	v->a[188536] = sym_variable_name;
	v->a[188537] = actions(7815);
	v->a[188538] = 1;
	v->a[188539] = sym__brace_start;
	small_parse_table_9427(v);
}

void	small_parse_table_9427(t_small_parse_table_array *v)
{
	v->a[188540] = actions(7942);
	v->a[188541] = 1;
	v->a[188542] = sym_word;
	v->a[188543] = actions(7946);
	v->a[188544] = 1;
	v->a[188545] = anon_sym_RBRACE3;
	v->a[188546] = actions(7948);
	v->a[188547] = 1;
	v->a[188548] = sym_test_operator;
	v->a[188549] = actions(7950);
	v->a[188550] = 1;
	v->a[188551] = sym__expansion_word;
	v->a[188552] = state(6314);
	v->a[188553] = 1;
	v->a[188554] = sym_command_substitution;
	v->a[188555] = state(6488);
	v->a[188556] = 1;
	v->a[188557] = aux_sym__literal_repeat1;
	v->a[188558] = actions(7779);
	v->a[188559] = 2;
	small_parse_table_9428(v);
}

void	small_parse_table_9428(t_small_parse_table_array *v)
{
	v->a[188560] = anon_sym_LPAREN_LPAREN;
	v->a[188561] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[188562] = actions(7807);
	v->a[188563] = 2;
	v->a[188564] = anon_sym_LT_LPAREN;
	v->a[188565] = anon_sym_GT_LPAREN;
	v->a[188566] = actions(7944);
	v->a[188567] = 2;
	v->a[188568] = sym_raw_string;
	v->a[188569] = sym_ansi_c_string;
	v->a[188570] = state(6449);
	v->a[188571] = 5;
	v->a[188572] = sym_string;
	v->a[188573] = sym_array;
	v->a[188574] = sym_simple_expansion;
	v->a[188575] = sym_expansion;
	v->a[188576] = sym_process_substitution;
	v->a[188577] = state(6787);
	v->a[188578] = 5;
	v->a[188579] = sym_arithmetic_expansion;
	small_parse_table_9429(v);
}

void	small_parse_table_9429(t_small_parse_table_array *v)
{
	v->a[188580] = sym_brace_expression;
	v->a[188581] = sym_translated_string;
	v->a[188582] = sym_number;
	v->a[188583] = sym__concatenation_in_expansion;
	v->a[188584] = 23;
	v->a[188585] = actions(3);
	v->a[188586] = 1;
	v->a[188587] = sym_comment;
	v->a[188588] = actions(7952);
	v->a[188589] = 1;
	v->a[188590] = sym_word;
	v->a[188591] = actions(7956);
	v->a[188592] = 1;
	v->a[188593] = anon_sym_LPAREN;
	v->a[188594] = actions(7958);
	v->a[188595] = 1;
	v->a[188596] = anon_sym_DOLLAR_LBRACK;
	v->a[188597] = actions(7960);
	v->a[188598] = 1;
	v->a[188599] = anon_sym_DOLLAR;
	small_parse_table_9430(v);
}

/* EOF small_parse_table_1885.c */
