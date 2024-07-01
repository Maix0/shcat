/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_805.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4025(t_small_parse_table_array *v)
{
	v->a[80500] = actions(3589);
	v->a[80501] = 1;
	v->a[80502] = anon_sym_fi;
	v->a[80503] = state(2065);
	v->a[80504] = 1;
	v->a[80505] = sym_else_clause;
	v->a[80506] = state(1818);
	v->a[80507] = 2;
	v->a[80508] = sym_elif_clause;
	v->a[80509] = aux_sym_if_statement_repeat1;
	v->a[80510] = 3;
	v->a[80511] = actions(660);
	v->a[80512] = 1;
	v->a[80513] = anon_sym_DOLLAR;
	v->a[80514] = actions(664);
	v->a[80515] = 1;
	v->a[80516] = sym_comment;
	v->a[80517] = actions(662);
	v->a[80518] = 5;
	v->a[80519] = sym_heredoc_content;
	small_parse_table_4026(v);
}

void	small_parse_table_4026(t_small_parse_table_array *v)
{
	v->a[80520] = sym_heredoc_end;
	v->a[80521] = anon_sym_DOLLAR_LBRACE;
	v->a[80522] = anon_sym_DOLLAR_LPAREN;
	v->a[80523] = anon_sym_BQUOTE;
	v->a[80524] = 3;
	v->a[80525] = actions(664);
	v->a[80526] = 1;
	v->a[80527] = sym_comment;
	v->a[80528] = actions(751);
	v->a[80529] = 1;
	v->a[80530] = anon_sym_DOLLAR;
	v->a[80531] = actions(753);
	v->a[80532] = 5;
	v->a[80533] = sym_heredoc_content;
	v->a[80534] = sym_heredoc_end;
	v->a[80535] = anon_sym_DOLLAR_LBRACE;
	v->a[80536] = anon_sym_DOLLAR_LPAREN;
	v->a[80537] = anon_sym_BQUOTE;
	v->a[80538] = 3;
	v->a[80539] = actions(660);
	small_parse_table_4027(v);
}

void	small_parse_table_4027(t_small_parse_table_array *v)
{
	v->a[80540] = 1;
	v->a[80541] = anon_sym_DOLLAR;
	v->a[80542] = actions(664);
	v->a[80543] = 1;
	v->a[80544] = sym_comment;
	v->a[80545] = actions(662);
	v->a[80546] = 5;
	v->a[80547] = sym_heredoc_content;
	v->a[80548] = sym_heredoc_end;
	v->a[80549] = anon_sym_DOLLAR_LBRACE;
	v->a[80550] = anon_sym_DOLLAR_LPAREN;
	v->a[80551] = anon_sym_BQUOTE;
	v->a[80552] = 6;
	v->a[80553] = actions(664);
	v->a[80554] = 1;
	v->a[80555] = sym_comment;
	v->a[80556] = actions(3579);
	v->a[80557] = 1;
	v->a[80558] = anon_sym_elif;
	v->a[80559] = actions(3581);
	small_parse_table_4028(v);
}

void	small_parse_table_4028(t_small_parse_table_array *v)
{
	v->a[80560] = 1;
	v->a[80561] = anon_sym_else;
	v->a[80562] = actions(3591);
	v->a[80563] = 1;
	v->a[80564] = anon_sym_fi;
	v->a[80565] = state(1922);
	v->a[80566] = 1;
	v->a[80567] = sym_else_clause;
	v->a[80568] = state(1818);
	v->a[80569] = 2;
	v->a[80570] = sym_elif_clause;
	v->a[80571] = aux_sym_if_statement_repeat1;
	v->a[80572] = 5;
	v->a[80573] = actions(3);
	v->a[80574] = 1;
	v->a[80575] = sym_comment;
	v->a[80576] = actions(3442);
	v->a[80577] = 1;
	v->a[80578] = aux_sym_heredoc_redirect_token1;
	v->a[80579] = actions(3593);
	small_parse_table_4029(v);
}

void	small_parse_table_4029(t_small_parse_table_array *v)
{
	v->a[80580] = 1;
	v->a[80581] = anon_sym_in;
	v->a[80582] = state(1916);
	v->a[80583] = 1;
	v->a[80584] = sym_terminator;
	v->a[80585] = actions(1893);
	v->a[80586] = 3;
	v->a[80587] = anon_sym_SEMI_SEMI;
	v->a[80588] = anon_sym_AMP;
	v->a[80589] = anon_sym_SEMI;
	v->a[80590] = 6;
	v->a[80591] = actions(664);
	v->a[80592] = 1;
	v->a[80593] = sym_comment;
	v->a[80594] = actions(3579);
	v->a[80595] = 1;
	v->a[80596] = anon_sym_elif;
	v->a[80597] = actions(3581);
	v->a[80598] = 1;
	v->a[80599] = anon_sym_else;
	small_parse_table_4030(v);
}

/* EOF small_parse_table_805.c */
