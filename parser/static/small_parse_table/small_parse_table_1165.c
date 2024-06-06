/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1165.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5825(t_small_parse_table_array *v)
{
	v->a[116500] = actions(3);
	v->a[116501] = 1;
	v->a[116502] = sym_comment;
	v->a[116503] = actions(1011);
	v->a[116504] = 1;
	v->a[116505] = anon_sym_DOLLAR;
	v->a[116506] = actions(1017);
	v->a[116507] = 1;
	v->a[116508] = aux_sym_number_token1;
	v->a[116509] = actions(1019);
	v->a[116510] = 1;
	v->a[116511] = aux_sym_number_token2;
	v->a[116512] = actions(1023);
	v->a[116513] = 1;
	v->a[116514] = anon_sym_DOLLAR_LPAREN;
	v->a[116515] = actions(1035);
	v->a[116516] = 1;
	v->a[116517] = sym__brace_start;
	v->a[116518] = actions(5763);
	v->a[116519] = 1;
	small_parse_table_5826(v);
}

void	small_parse_table_5826(t_small_parse_table_array *v)
{
	v->a[116520] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[116521] = actions(5767);
	v->a[116522] = 1;
	v->a[116523] = anon_sym_DQUOTE;
	v->a[116524] = actions(5771);
	v->a[116525] = 1;
	v->a[116526] = anon_sym_DOLLAR_LBRACE;
	v->a[116527] = actions(5773);
	v->a[116528] = 1;
	v->a[116529] = anon_sym_BQUOTE;
	v->a[116530] = actions(5775);
	v->a[116531] = 1;
	v->a[116532] = anon_sym_DOLLAR_BQUOTE;
	v->a[116533] = actions(6731);
	v->a[116534] = 1;
	v->a[116535] = sym_word;
	v->a[116536] = actions(6735);
	v->a[116537] = 1;
	v->a[116538] = sym__special_character;
	v->a[116539] = actions(6739);
	small_parse_table_5827(v);
}

void	small_parse_table_5827(t_small_parse_table_array *v)
{
	v->a[116540] = 1;
	v->a[116541] = sym__comment_word;
	v->a[116542] = actions(6737);
	v->a[116543] = 3;
	v->a[116544] = sym_test_operator;
	v->a[116545] = sym__bare_dollar;
	v->a[116546] = sym_raw_string;
	v->a[116547] = state(872);
	v->a[116548] = 7;
	v->a[116549] = sym_arithmetic_expansion;
	v->a[116550] = sym_brace_expression;
	v->a[116551] = sym_string;
	v->a[116552] = sym_number;
	v->a[116553] = sym_simple_expansion;
	v->a[116554] = sym_expansion;
	v->a[116555] = sym_command_substitution;
	v->a[116556] = 16;
	v->a[116557] = actions(3);
	v->a[116558] = 1;
	v->a[116559] = sym_comment;
	small_parse_table_5828(v);
}

void	small_parse_table_5828(t_small_parse_table_array *v)
{
	v->a[116560] = actions(1017);
	v->a[116561] = 1;
	v->a[116562] = aux_sym_number_token1;
	v->a[116563] = actions(1019);
	v->a[116564] = 1;
	v->a[116565] = aux_sym_number_token2;
	v->a[116566] = actions(1023);
	v->a[116567] = 1;
	v->a[116568] = anon_sym_DOLLAR_LPAREN;
	v->a[116569] = actions(1035);
	v->a[116570] = 1;
	v->a[116571] = sym__brace_start;
	v->a[116572] = actions(5763);
	v->a[116573] = 1;
	v->a[116574] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[116575] = actions(5767);
	v->a[116576] = 1;
	v->a[116577] = anon_sym_DQUOTE;
	v->a[116578] = actions(5771);
	v->a[116579] = 1;
	small_parse_table_5829(v);
}

void	small_parse_table_5829(t_small_parse_table_array *v)
{
	v->a[116580] = anon_sym_DOLLAR_LBRACE;
	v->a[116581] = actions(5773);
	v->a[116582] = 1;
	v->a[116583] = anon_sym_BQUOTE;
	v->a[116584] = actions(5775);
	v->a[116585] = 1;
	v->a[116586] = anon_sym_DOLLAR_BQUOTE;
	v->a[116587] = actions(6731);
	v->a[116588] = 1;
	v->a[116589] = sym_word;
	v->a[116590] = actions(6735);
	v->a[116591] = 1;
	v->a[116592] = sym__special_character;
	v->a[116593] = actions(6739);
	v->a[116594] = 1;
	v->a[116595] = sym__comment_word;
	v->a[116596] = actions(6857);
	v->a[116597] = 1;
	v->a[116598] = anon_sym_DOLLAR;
	v->a[116599] = actions(6737);
	small_parse_table_5830(v);
}

/* EOF small_parse_table_1165.c */
