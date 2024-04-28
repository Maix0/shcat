/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2604.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13020(t_small_parse_table_array *v)
{
	v->a[260400] = actions(11754);
	v->a[260401] = 4;
	v->a[260402] = anon_sym_DASH;
	v->a[260403] = anon_sym_STAR;
	v->a[260404] = anon_sym_QMARK;
	v->a[260405] = anon_sym_AT2;
	v->a[260406] = actions(11756);
	v->a[260407] = 5;
	v->a[260408] = anon_sym_BANG;
	v->a[260409] = anon_sym_DOLLAR;
	v->a[260410] = anon_sym_POUND;
	v->a[260411] = anon_sym_0;
	v->a[260412] = anon_sym__;
	v->a[260413] = 16;
	v->a[260414] = actions(3);
	v->a[260415] = 1;
	v->a[260416] = sym_comment;
	v->a[260417] = actions(11760);
	v->a[260418] = 1;
	v->a[260419] = anon_sym_BANG2;
	small_parse_table_13021(v);
}

void	small_parse_table_13021(t_small_parse_table_array *v)
{
	v->a[260420] = actions(11764);
	v->a[260421] = 1;
	v->a[260422] = anon_sym_DOLLAR_LPAREN;
	v->a[260423] = actions(11766);
	v->a[260424] = 1;
	v->a[260425] = anon_sym_BQUOTE;
	v->a[260426] = actions(11768);
	v->a[260427] = 1;
	v->a[260428] = anon_sym_DOLLAR_BQUOTE;
	v->a[260429] = actions(11770);
	v->a[260430] = 1;
	v->a[260431] = aux_sym__simple_variable_name_token1;
	v->a[260432] = actions(11772);
	v->a[260433] = 1;
	v->a[260434] = sym_variable_name;
	v->a[260435] = actions(11968);
	v->a[260436] = 1;
	v->a[260437] = anon_sym_RBRACE3;
	v->a[260438] = state(3532);
	v->a[260439] = 1;
	small_parse_table_13022(v);
}

void	small_parse_table_13022(t_small_parse_table_array *v)
{
	v->a[260440] = sym_subscript;
	v->a[260441] = state(6428);
	v->a[260442] = 1;
	v->a[260443] = aux_sym__expansion_body_repeat1;
	v->a[260444] = state(6472);
	v->a[260445] = 1;
	v->a[260446] = sym_command_substitution;
	v->a[260447] = state(7162);
	v->a[260448] = 1;
	v->a[260449] = sym__expansion_body;
	v->a[260450] = actions(11762);
	v->a[260451] = 2;
	v->a[260452] = anon_sym_POUND2;
	v->a[260453] = anon_sym_EQ2;
	v->a[260454] = actions(8050);
	v->a[260455] = 3;
	v->a[260456] = sym__external_expansion_sym_hash;
	v->a[260457] = sym__external_expansion_sym_bang;
	v->a[260458] = sym__external_expansion_sym_equal;
	v->a[260459] = actions(11754);
	small_parse_table_13023(v);
}

void	small_parse_table_13023(t_small_parse_table_array *v)
{
	v->a[260460] = 4;
	v->a[260461] = anon_sym_DASH;
	v->a[260462] = anon_sym_STAR;
	v->a[260463] = anon_sym_QMARK;
	v->a[260464] = anon_sym_AT2;
	v->a[260465] = actions(11756);
	v->a[260466] = 5;
	v->a[260467] = anon_sym_BANG;
	v->a[260468] = anon_sym_DOLLAR;
	v->a[260469] = anon_sym_POUND;
	v->a[260470] = anon_sym_0;
	v->a[260471] = anon_sym__;
	v->a[260472] = 6;
	v->a[260473] = actions(3);
	v->a[260474] = 1;
	v->a[260475] = sym_comment;
	v->a[260476] = actions(11651);
	v->a[260477] = 1;
	v->a[260478] = aux_sym_concatenation_token1;
	v->a[260479] = actions(11653);
	small_parse_table_13024(v);
}

void	small_parse_table_13024(t_small_parse_table_array *v)
{
	v->a[260480] = 1;
	v->a[260481] = sym__concat;
	v->a[260482] = state(4630);
	v->a[260483] = 1;
	v->a[260484] = aux_sym_concatenation_repeat1;
	v->a[260485] = actions(5723);
	v->a[260486] = 3;
	v->a[260487] = sym_file_descriptor;
	v->a[260488] = ts_builtin_sym_end;
	v->a[260489] = aux_sym_heredoc_redirect_token1;
	v->a[260490] = actions(5721);
	v->a[260491] = 19;
	v->a[260492] = anon_sym_SEMI;
	v->a[260493] = anon_sym_PIPE_PIPE;
	v->a[260494] = anon_sym_AMP_AMP;
	v->a[260495] = anon_sym_PIPE;
	v->a[260496] = anon_sym_AMP;
	v->a[260497] = anon_sym_LT;
	v->a[260498] = anon_sym_GT;
	v->a[260499] = anon_sym_LT_LT;
	small_parse_table_13025(v);
}

/* EOF small_parse_table_2604.c */
