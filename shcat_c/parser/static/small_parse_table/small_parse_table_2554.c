/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2554.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12770(t_small_parse_table_array *v)
{
	v->a[255400] = anon_sym_GT_AMP;
	v->a[255401] = anon_sym_GT_PIPE;
	v->a[255402] = anon_sym_LT_AMP_DASH;
	v->a[255403] = anon_sym_GT_AMP_DASH;
	v->a[255404] = anon_sym_LT_LT_DASH;
	v->a[255405] = anon_sym_BQUOTE;
	v->a[255406] = 3;
	v->a[255407] = actions(3);
	v->a[255408] = 1;
	v->a[255409] = sym_comment;
	v->a[255410] = actions(11750);
	v->a[255411] = 3;
	v->a[255412] = sym_file_descriptor;
	v->a[255413] = ts_builtin_sym_end;
	v->a[255414] = aux_sym_heredoc_redirect_token1;
	v->a[255415] = actions(11752);
	v->a[255416] = 22;
	v->a[255417] = anon_sym_SEMI;
	v->a[255418] = anon_sym_PIPE_PIPE;
	v->a[255419] = anon_sym_AMP_AMP;
	small_parse_table_12771(v);
}

void	small_parse_table_12771(t_small_parse_table_array *v)
{
	v->a[255420] = anon_sym_PIPE;
	v->a[255421] = anon_sym_AMP;
	v->a[255422] = anon_sym_LT;
	v->a[255423] = anon_sym_GT;
	v->a[255424] = anon_sym_LT_LT;
	v->a[255425] = anon_sym_GT_GT;
	v->a[255426] = anon_sym_RPAREN;
	v->a[255427] = anon_sym_SEMI_SEMI;
	v->a[255428] = anon_sym_PIPE_AMP;
	v->a[255429] = anon_sym_AMP_GT;
	v->a[255430] = anon_sym_AMP_GT_GT;
	v->a[255431] = anon_sym_LT_AMP;
	v->a[255432] = anon_sym_GT_AMP;
	v->a[255433] = anon_sym_GT_PIPE;
	v->a[255434] = anon_sym_LT_AMP_DASH;
	v->a[255435] = anon_sym_GT_AMP_DASH;
	v->a[255436] = anon_sym_LT_LT_DASH;
	v->a[255437] = anon_sym_LT_LT_LT;
	v->a[255438] = anon_sym_BQUOTE;
	v->a[255439] = 16;
	small_parse_table_12772(v);
}

void	small_parse_table_12772(t_small_parse_table_array *v)
{
	v->a[255440] = actions(3);
	v->a[255441] = 1;
	v->a[255442] = sym_comment;
	v->a[255443] = actions(11758);
	v->a[255444] = 1;
	v->a[255445] = anon_sym_RBRACE3;
	v->a[255446] = actions(11760);
	v->a[255447] = 1;
	v->a[255448] = anon_sym_BANG2;
	v->a[255449] = actions(11764);
	v->a[255450] = 1;
	v->a[255451] = anon_sym_DOLLAR_LPAREN;
	v->a[255452] = actions(11766);
	v->a[255453] = 1;
	v->a[255454] = anon_sym_BQUOTE;
	v->a[255455] = actions(11768);
	v->a[255456] = 1;
	v->a[255457] = anon_sym_DOLLAR_BQUOTE;
	v->a[255458] = actions(11770);
	v->a[255459] = 1;
	small_parse_table_12773(v);
}

void	small_parse_table_12773(t_small_parse_table_array *v)
{
	v->a[255460] = aux_sym__simple_variable_name_token1;
	v->a[255461] = actions(11772);
	v->a[255462] = 1;
	v->a[255463] = sym_variable_name;
	v->a[255464] = state(3532);
	v->a[255465] = 1;
	v->a[255466] = sym_subscript;
	v->a[255467] = state(6428);
	v->a[255468] = 1;
	v->a[255469] = aux_sym__expansion_body_repeat1;
	v->a[255470] = state(6472);
	v->a[255471] = 1;
	v->a[255472] = sym_command_substitution;
	v->a[255473] = state(6908);
	v->a[255474] = 1;
	v->a[255475] = sym__expansion_body;
	v->a[255476] = actions(11762);
	v->a[255477] = 2;
	v->a[255478] = anon_sym_POUND2;
	v->a[255479] = anon_sym_EQ2;
	small_parse_table_12774(v);
}

void	small_parse_table_12774(t_small_parse_table_array *v)
{
	v->a[255480] = actions(8050);
	v->a[255481] = 3;
	v->a[255482] = sym__external_expansion_sym_hash;
	v->a[255483] = sym__external_expansion_sym_bang;
	v->a[255484] = sym__external_expansion_sym_equal;
	v->a[255485] = actions(11754);
	v->a[255486] = 4;
	v->a[255487] = anon_sym_DASH;
	v->a[255488] = anon_sym_STAR;
	v->a[255489] = anon_sym_QMARK;
	v->a[255490] = anon_sym_AT2;
	v->a[255491] = actions(11756);
	v->a[255492] = 5;
	v->a[255493] = anon_sym_BANG;
	v->a[255494] = anon_sym_DOLLAR;
	v->a[255495] = anon_sym_POUND;
	v->a[255496] = anon_sym_0;
	v->a[255497] = anon_sym__;
	v->a[255498] = 8;
	v->a[255499] = actions(3);
	small_parse_table_12775(v);
}

/* EOF small_parse_table_2554.c */
