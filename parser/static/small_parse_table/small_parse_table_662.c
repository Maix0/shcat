/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_662.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3310(t_small_parse_table_array *v)
{
	v->a[66200] = sym_raw_string;
	v->a[66201] = sym_number;
	v->a[66202] = sym__comment_word;
	v->a[66203] = sym_word;
	v->a[66204] = state(827);
	v->a[66205] = 5;
	v->a[66206] = sym_arithmetic_expansion;
	v->a[66207] = sym_string;
	v->a[66208] = sym_simple_expansion;
	v->a[66209] = sym_expansion;
	v->a[66210] = sym_command_substitution;
	v->a[66211] = 10;
	v->a[66212] = actions(3);
	v->a[66213] = 1;
	v->a[66214] = sym_comment;
	v->a[66215] = actions(55);
	v->a[66216] = 1;
	v->a[66217] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66218] = actions(59);
	v->a[66219] = 1;
	small_parse_table_3311(v);
}

void	small_parse_table_3311(t_small_parse_table_array *v)
{
	v->a[66220] = anon_sym_DQUOTE;
	v->a[66221] = actions(63);
	v->a[66222] = 1;
	v->a[66223] = anon_sym_DOLLAR_LBRACE;
	v->a[66224] = actions(65);
	v->a[66225] = 1;
	v->a[66226] = anon_sym_DOLLAR_LPAREN;
	v->a[66227] = actions(67);
	v->a[66228] = 1;
	v->a[66229] = anon_sym_BQUOTE;
	v->a[66230] = actions(2440);
	v->a[66231] = 1;
	v->a[66232] = anon_sym_DOLLAR;
	v->a[66233] = actions(2442);
	v->a[66234] = 1;
	v->a[66235] = sym__bare_dollar;
	v->a[66236] = actions(2438);
	v->a[66237] = 5;
	v->a[66238] = aux_sym_concatenation_token1;
	v->a[66239] = sym_raw_string;
	small_parse_table_3312(v);
}

void	small_parse_table_3312(t_small_parse_table_array *v)
{
	v->a[66240] = sym_number;
	v->a[66241] = sym__comment_word;
	v->a[66242] = sym_word;
	v->a[66243] = state(398);
	v->a[66244] = 5;
	v->a[66245] = sym_arithmetic_expansion;
	v->a[66246] = sym_string;
	v->a[66247] = sym_simple_expansion;
	v->a[66248] = sym_expansion;
	v->a[66249] = sym_command_substitution;
	v->a[66250] = 10;
	v->a[66251] = actions(3);
	v->a[66252] = 1;
	v->a[66253] = sym_comment;
	v->a[66254] = actions(2446);
	v->a[66255] = 1;
	v->a[66256] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66257] = actions(2448);
	v->a[66258] = 1;
	v->a[66259] = anon_sym_DOLLAR;
	small_parse_table_3313(v);
}

void	small_parse_table_3313(t_small_parse_table_array *v)
{
	v->a[66260] = actions(2450);
	v->a[66261] = 1;
	v->a[66262] = anon_sym_DQUOTE;
	v->a[66263] = actions(2452);
	v->a[66264] = 1;
	v->a[66265] = anon_sym_DOLLAR_LBRACE;
	v->a[66266] = actions(2454);
	v->a[66267] = 1;
	v->a[66268] = anon_sym_DOLLAR_LPAREN;
	v->a[66269] = actions(2456);
	v->a[66270] = 1;
	v->a[66271] = anon_sym_BQUOTE;
	v->a[66272] = actions(2458);
	v->a[66273] = 1;
	v->a[66274] = sym__bare_dollar;
	v->a[66275] = actions(2444);
	v->a[66276] = 5;
	v->a[66277] = aux_sym_concatenation_token1;
	v->a[66278] = sym_raw_string;
	v->a[66279] = sym_number;
	small_parse_table_3314(v);
}

void	small_parse_table_3314(t_small_parse_table_array *v)
{
	v->a[66280] = sym__comment_word;
	v->a[66281] = sym_word;
	v->a[66282] = state(538);
	v->a[66283] = 5;
	v->a[66284] = sym_arithmetic_expansion;
	v->a[66285] = sym_string;
	v->a[66286] = sym_simple_expansion;
	v->a[66287] = sym_expansion;
	v->a[66288] = sym_command_substitution;
	v->a[66289] = 10;
	v->a[66290] = actions(3);
	v->a[66291] = 1;
	v->a[66292] = sym_comment;
	v->a[66293] = actions(2462);
	v->a[66294] = 1;
	v->a[66295] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66296] = actions(2464);
	v->a[66297] = 1;
	v->a[66298] = anon_sym_DOLLAR;
	v->a[66299] = actions(2466);
	small_parse_table_3315(v);
}

/* EOF small_parse_table_662.c */
