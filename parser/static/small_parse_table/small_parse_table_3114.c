/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3114.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15570(t_small_parse_table_array *v)
{
	v->a[311400] = sym_expansion;
	v->a[311401] = sym_command_substitution;
	v->a[311402] = 6;
	v->a[311403] = actions(71);
	v->a[311404] = 1;
	v->a[311405] = sym_comment;
	v->a[311406] = actions(10944);
	v->a[311407] = 1;
	v->a[311408] = anon_sym_DOLLAR_LBRACE;
	v->a[311409] = actions(10946);
	v->a[311410] = 1;
	v->a[311411] = anon_sym_BQUOTE;
	v->a[311412] = actions(10948);
	v->a[311413] = 1;
	v->a[311414] = anon_sym_DOLLAR_BQUOTE;
	v->a[311415] = actions(14554);
	v->a[311416] = 1;
	v->a[311417] = anon_sym_DOLLAR_LPAREN;
	v->a[311418] = state(1875);
	v->a[311419] = 2;
	small_parse_table_15571(v);
}

void	small_parse_table_15571(t_small_parse_table_array *v)
{
	v->a[311420] = sym_expansion;
	v->a[311421] = sym_command_substitution;
	v->a[311422] = 6;
	v->a[311423] = actions(71);
	v->a[311424] = 1;
	v->a[311425] = sym_comment;
	v->a[311426] = actions(4165);
	v->a[311427] = 1;
	v->a[311428] = anon_sym_DOLLAR_LBRACE;
	v->a[311429] = actions(4169);
	v->a[311430] = 1;
	v->a[311431] = anon_sym_BQUOTE;
	v->a[311432] = actions(4171);
	v->a[311433] = 1;
	v->a[311434] = anon_sym_DOLLAR_BQUOTE;
	v->a[311435] = actions(14556);
	v->a[311436] = 1;
	v->a[311437] = anon_sym_DOLLAR_LPAREN;
	v->a[311438] = state(2444);
	v->a[311439] = 2;
	small_parse_table_15572(v);
}

void	small_parse_table_15572(t_small_parse_table_array *v)
{
	v->a[311440] = sym_expansion;
	v->a[311441] = sym_command_substitution;
	v->a[311442] = 3;
	v->a[311443] = actions(71);
	v->a[311444] = 1;
	v->a[311445] = sym_comment;
	v->a[311446] = actions(14512);
	v->a[311447] = 1;
	v->a[311448] = anon_sym_RBRACE3;
	v->a[311449] = actions(14437);
	v->a[311450] = 5;
	v->a[311451] = anon_sym_PLUS;
	v->a[311452] = anon_sym_DASH;
	v->a[311453] = anon_sym_STAR;
	v->a[311454] = anon_sym_SLASH;
	v->a[311455] = anon_sym_PERCENT;
	v->a[311456] = 6;
	v->a[311457] = actions(3);
	v->a[311458] = 1;
	v->a[311459] = sym_comment;
	small_parse_table_15573(v);
}

void	small_parse_table_15573(t_small_parse_table_array *v)
{
	v->a[311460] = actions(14500);
	v->a[311461] = 1;
	v->a[311462] = anon_sym_COMMA;
	v->a[311463] = actions(14560);
	v->a[311464] = 1;
	v->a[311465] = aux_sym_heredoc_redirect_token1;
	v->a[311466] = state(4742);
	v->a[311467] = 1;
	v->a[311468] = sym__c_terminator;
	v->a[311469] = state(6280);
	v->a[311470] = 1;
	v->a[311471] = aux_sym__for_body_repeat1;
	v->a[311472] = actions(14558);
	v->a[311473] = 2;
	v->a[311474] = anon_sym_SEMI;
	v->a[311475] = anon_sym_AMP;
	v->a[311476] = 3;
	v->a[311477] = actions(71);
	v->a[311478] = 1;
	v->a[311479] = sym_comment;
	small_parse_table_15574(v);
}

void	small_parse_table_15574(t_small_parse_table_array *v)
{
	v->a[311480] = actions(14562);
	v->a[311481] = 1;
	v->a[311482] = anon_sym_RBRACE3;
	v->a[311483] = actions(14449);
	v->a[311484] = 5;
	v->a[311485] = anon_sym_PLUS;
	v->a[311486] = anon_sym_DASH;
	v->a[311487] = anon_sym_STAR;
	v->a[311488] = anon_sym_SLASH;
	v->a[311489] = anon_sym_PERCENT;
	v->a[311490] = 6;
	v->a[311491] = actions(71);
	v->a[311492] = 1;
	v->a[311493] = sym_comment;
	v->a[311494] = actions(14564);
	v->a[311495] = 1;
	v->a[311496] = anon_sym_PIPE;
	v->a[311497] = actions(14566);
	v->a[311498] = 1;
	v->a[311499] = anon_sym_RPAREN;
	small_parse_table_15575(v);
}

/* EOF small_parse_table_3114.c */
