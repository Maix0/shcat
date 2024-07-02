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
	v->a[66200] = 1;
	v->a[66201] = anon_sym_BQUOTE;
	v->a[66202] = actions(2486);
	v->a[66203] = 1;
	v->a[66204] = sym__bare_dollar;
	v->a[66205] = actions(2472);
	v->a[66206] = 5;
	v->a[66207] = aux_sym_concatenation_token1;
	v->a[66208] = sym_raw_string;
	v->a[66209] = sym_number;
	v->a[66210] = sym__comment_word;
	v->a[66211] = sym_word;
	v->a[66212] = state(880);
	v->a[66213] = 5;
	v->a[66214] = sym_arithmetic_expansion;
	v->a[66215] = sym_string;
	v->a[66216] = sym_simple_expansion;
	v->a[66217] = sym_expansion;
	v->a[66218] = sym_command_substitution;
	v->a[66219] = 12;
	small_parse_table_3311(v);
}

void	small_parse_table_3311(t_small_parse_table_array *v)
{
	v->a[66220] = actions(3);
	v->a[66221] = 1;
	v->a[66222] = sym_comment;
	v->a[66223] = actions(1067);
	v->a[66224] = 1;
	v->a[66225] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66226] = actions(1069);
	v->a[66227] = 1;
	v->a[66228] = anon_sym_DOLLAR;
	v->a[66229] = actions(1071);
	v->a[66230] = 1;
	v->a[66231] = anon_sym_DQUOTE;
	v->a[66232] = actions(1073);
	v->a[66233] = 1;
	v->a[66234] = anon_sym_DOLLAR_LBRACE;
	v->a[66235] = actions(1075);
	v->a[66236] = 1;
	v->a[66237] = anon_sym_DOLLAR_LPAREN;
	v->a[66238] = actions(1077);
	v->a[66239] = 1;
	small_parse_table_3312(v);
}

void	small_parse_table_3312(t_small_parse_table_array *v)
{
	v->a[66240] = anon_sym_BQUOTE;
	v->a[66241] = actions(2488);
	v->a[66242] = 1;
	v->a[66243] = aux_sym_heredoc_redirect_token1;
	v->a[66244] = state(1331);
	v->a[66245] = 1;
	v->a[66246] = aux_sym__heredoc_command;
	v->a[66247] = state(1725);
	v->a[66248] = 1;
	v->a[66249] = sym_concatenation;
	v->a[66250] = actions(1057);
	v->a[66251] = 3;
	v->a[66252] = sym_raw_string;
	v->a[66253] = sym_number;
	v->a[66254] = sym_word;
	v->a[66255] = state(1589);
	v->a[66256] = 5;
	v->a[66257] = sym_arithmetic_expansion;
	v->a[66258] = sym_string;
	v->a[66259] = sym_simple_expansion;
	small_parse_table_3313(v);
}

void	small_parse_table_3313(t_small_parse_table_array *v)
{
	v->a[66260] = sym_expansion;
	v->a[66261] = sym_command_substitution;
	v->a[66262] = 10;
	v->a[66263] = actions(3);
	v->a[66264] = 1;
	v->a[66265] = sym_comment;
	v->a[66266] = actions(2492);
	v->a[66267] = 1;
	v->a[66268] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66269] = actions(2494);
	v->a[66270] = 1;
	v->a[66271] = anon_sym_DOLLAR;
	v->a[66272] = actions(2496);
	v->a[66273] = 1;
	v->a[66274] = anon_sym_DQUOTE;
	v->a[66275] = actions(2498);
	v->a[66276] = 1;
	v->a[66277] = anon_sym_DOLLAR_LBRACE;
	v->a[66278] = actions(2500);
	v->a[66279] = 1;
	small_parse_table_3314(v);
}

void	small_parse_table_3314(t_small_parse_table_array *v)
{
	v->a[66280] = anon_sym_DOLLAR_LPAREN;
	v->a[66281] = actions(2502);
	v->a[66282] = 1;
	v->a[66283] = anon_sym_BQUOTE;
	v->a[66284] = actions(2504);
	v->a[66285] = 1;
	v->a[66286] = sym__bare_dollar;
	v->a[66287] = actions(2490);
	v->a[66288] = 5;
	v->a[66289] = aux_sym_concatenation_token1;
	v->a[66290] = sym_raw_string;
	v->a[66291] = sym_number;
	v->a[66292] = sym__comment_word;
	v->a[66293] = sym_word;
	v->a[66294] = state(1759);
	v->a[66295] = 5;
	v->a[66296] = sym_arithmetic_expansion;
	v->a[66297] = sym_string;
	v->a[66298] = sym_simple_expansion;
	v->a[66299] = sym_expansion;
	small_parse_table_3315(v);
}

/* EOF small_parse_table_662.c */
