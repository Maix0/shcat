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
	v->a[66200] = 2;
	v->a[66201] = sym__concat;
	v->a[66202] = aux_sym_heredoc_redirect_token1;
	v->a[66203] = actions(455);
	v->a[66204] = 4;
	v->a[66205] = anon_sym_in;
	v->a[66206] = anon_sym_SEMI_SEMI;
	v->a[66207] = aux_sym_concatenation_token1;
	v->a[66208] = anon_sym_SEMI;
	v->a[66209] = 3;
	v->a[66210] = actions(3);
	v->a[66211] = 1;
	v->a[66212] = sym_comment;
	v->a[66213] = actions(453);
	v->a[66214] = 2;
	v->a[66215] = sym_regex;
	v->a[66216] = aux_sym__expansion_regex_token1;
	v->a[66217] = actions(451);
	v->a[66218] = 4;
	v->a[66219] = anon_sym_RPAREN;
	small_parse_table_3311(v);
}

void	small_parse_table_3311(t_small_parse_table_array *v)
{
	v->a[66220] = anon_sym_RBRACE;
	v->a[66221] = anon_sym_DQUOTE;
	v->a[66222] = sym_raw_string;
	v->a[66223] = 6;
	v->a[66224] = actions(407);
	v->a[66225] = 1;
	v->a[66226] = sym_comment;
	v->a[66227] = actions(2991);
	v->a[66228] = 1;
	v->a[66229] = anon_sym_elif;
	v->a[66230] = actions(2993);
	v->a[66231] = 1;
	v->a[66232] = anon_sym_else;
	v->a[66233] = actions(2997);
	v->a[66234] = 1;
	v->a[66235] = anon_sym_fi;
	v->a[66236] = state(1787);
	v->a[66237] = 1;
	v->a[66238] = sym_else_clause;
	v->a[66239] = state(1529);
	small_parse_table_3312(v);
}

void	small_parse_table_3312(t_small_parse_table_array *v)
{
	v->a[66240] = 2;
	v->a[66241] = sym_elif_clause;
	v->a[66242] = aux_sym_if_statement_repeat1;
	v->a[66243] = 6;
	v->a[66244] = actions(407);
	v->a[66245] = 1;
	v->a[66246] = sym_comment;
	v->a[66247] = actions(2999);
	v->a[66248] = 1;
	v->a[66249] = anon_sym_PIPE;
	v->a[66250] = actions(3001);
	v->a[66251] = 1;
	v->a[66252] = anon_sym_RPAREN;
	v->a[66253] = state(1536);
	v->a[66254] = 1;
	v->a[66255] = aux_sym_concatenation_repeat1;
	v->a[66256] = state(1593);
	v->a[66257] = 1;
	v->a[66258] = aux_sym__case_item_last_repeat1;
	v->a[66259] = actions(3003);
	small_parse_table_3313(v);
}

void	small_parse_table_3313(t_small_parse_table_array *v)
{
	v->a[66260] = 2;
	v->a[66261] = sym__concat;
	v->a[66262] = aux_sym_concatenation_token1;
	v->a[66263] = 3;
	v->a[66264] = actions(407);
	v->a[66265] = 1;
	v->a[66266] = sym_comment;
	v->a[66267] = actions(1145);
	v->a[66268] = 1;
	v->a[66269] = anon_sym_DOLLAR;
	v->a[66270] = actions(1147);
	v->a[66271] = 5;
	v->a[66272] = sym_heredoc_content;
	v->a[66273] = sym_heredoc_end;
	v->a[66274] = anon_sym_DOLLAR_LBRACE;
	v->a[66275] = anon_sym_DOLLAR_LPAREN;
	v->a[66276] = anon_sym_BQUOTE;
	v->a[66277] = 3;
	v->a[66278] = actions(407);
	v->a[66279] = 1;
	small_parse_table_3314(v);
}

void	small_parse_table_3314(t_small_parse_table_array *v)
{
	v->a[66280] = sym_comment;
	v->a[66281] = actions(471);
	v->a[66282] = 1;
	v->a[66283] = anon_sym_DOLLAR;
	v->a[66284] = actions(473);
	v->a[66285] = 5;
	v->a[66286] = sym_heredoc_content;
	v->a[66287] = sym_heredoc_end;
	v->a[66288] = anon_sym_DOLLAR_LBRACE;
	v->a[66289] = anon_sym_DOLLAR_LPAREN;
	v->a[66290] = anon_sym_BQUOTE;
	v->a[66291] = 3;
	v->a[66292] = actions(3);
	v->a[66293] = 1;
	v->a[66294] = sym_comment;
	v->a[66295] = actions(1165);
	v->a[66296] = 2;
	v->a[66297] = sym__concat;
	v->a[66298] = aux_sym_heredoc_redirect_token1;
	v->a[66299] = actions(1163);
	small_parse_table_3315(v);
}

/* EOF small_parse_table_662.c */
