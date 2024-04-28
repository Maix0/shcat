/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2564.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12820(t_small_parse_table_array *v)
{
	v->a[256400] = anon_sym_LT_AMP;
	v->a[256401] = anon_sym_GT_AMP;
	v->a[256402] = anon_sym_GT_PIPE;
	v->a[256403] = anon_sym_LT_AMP_DASH;
	v->a[256404] = anon_sym_GT_AMP_DASH;
	v->a[256405] = anon_sym_LT_LT_DASH;
	v->a[256406] = anon_sym_LT_LT_LT;
	v->a[256407] = 3;
	v->a[256408] = actions(3);
	v->a[256409] = 1;
	v->a[256410] = sym_comment;
	v->a[256411] = actions(11830);
	v->a[256412] = 2;
	v->a[256413] = sym_file_descriptor;
	v->a[256414] = aux_sym_heredoc_redirect_token1;
	v->a[256415] = actions(11828);
	v->a[256416] = 23;
	v->a[256417] = anon_sym_SEMI;
	v->a[256418] = anon_sym_PIPE_PIPE;
	v->a[256419] = anon_sym_AMP_AMP;
	small_parse_table_12821(v);
}

void	small_parse_table_12821(t_small_parse_table_array *v)
{
	v->a[256420] = anon_sym_PIPE;
	v->a[256421] = anon_sym_AMP;
	v->a[256422] = anon_sym_LT;
	v->a[256423] = anon_sym_GT;
	v->a[256424] = anon_sym_LT_LT;
	v->a[256425] = anon_sym_GT_GT;
	v->a[256426] = anon_sym_esac;
	v->a[256427] = anon_sym_SEMI_SEMI;
	v->a[256428] = anon_sym_SEMI_AMP;
	v->a[256429] = anon_sym_SEMI_SEMI_AMP;
	v->a[256430] = anon_sym_PIPE_AMP;
	v->a[256431] = anon_sym_AMP_GT;
	v->a[256432] = anon_sym_AMP_GT_GT;
	v->a[256433] = anon_sym_LT_AMP;
	v->a[256434] = anon_sym_GT_AMP;
	v->a[256435] = anon_sym_GT_PIPE;
	v->a[256436] = anon_sym_LT_AMP_DASH;
	v->a[256437] = anon_sym_GT_AMP_DASH;
	v->a[256438] = anon_sym_LT_LT_DASH;
	v->a[256439] = anon_sym_LT_LT_LT;
	small_parse_table_12822(v);
}

void	small_parse_table_12822(t_small_parse_table_array *v)
{
	v->a[256440] = 16;
	v->a[256441] = actions(3);
	v->a[256442] = 1;
	v->a[256443] = sym_comment;
	v->a[256444] = actions(11760);
	v->a[256445] = 1;
	v->a[256446] = anon_sym_BANG2;
	v->a[256447] = actions(11764);
	v->a[256448] = 1;
	v->a[256449] = anon_sym_DOLLAR_LPAREN;
	v->a[256450] = actions(11766);
	v->a[256451] = 1;
	v->a[256452] = anon_sym_BQUOTE;
	v->a[256453] = actions(11768);
	v->a[256454] = 1;
	v->a[256455] = anon_sym_DOLLAR_BQUOTE;
	v->a[256456] = actions(11770);
	v->a[256457] = 1;
	v->a[256458] = aux_sym__simple_variable_name_token1;
	v->a[256459] = actions(11772);
	small_parse_table_12823(v);
}

void	small_parse_table_12823(t_small_parse_table_array *v)
{
	v->a[256460] = 1;
	v->a[256461] = sym_variable_name;
	v->a[256462] = actions(11832);
	v->a[256463] = 1;
	v->a[256464] = anon_sym_RBRACE3;
	v->a[256465] = state(3532);
	v->a[256466] = 1;
	v->a[256467] = sym_subscript;
	v->a[256468] = state(6428);
	v->a[256469] = 1;
	v->a[256470] = aux_sym__expansion_body_repeat1;
	v->a[256471] = state(6472);
	v->a[256472] = 1;
	v->a[256473] = sym_command_substitution;
	v->a[256474] = state(6984);
	v->a[256475] = 1;
	v->a[256476] = sym__expansion_body;
	v->a[256477] = actions(11762);
	v->a[256478] = 2;
	v->a[256479] = anon_sym_POUND2;
	small_parse_table_12824(v);
}

void	small_parse_table_12824(t_small_parse_table_array *v)
{
	v->a[256480] = anon_sym_EQ2;
	v->a[256481] = actions(8050);
	v->a[256482] = 3;
	v->a[256483] = sym__external_expansion_sym_hash;
	v->a[256484] = sym__external_expansion_sym_bang;
	v->a[256485] = sym__external_expansion_sym_equal;
	v->a[256486] = actions(11754);
	v->a[256487] = 4;
	v->a[256488] = anon_sym_DASH;
	v->a[256489] = anon_sym_STAR;
	v->a[256490] = anon_sym_QMARK;
	v->a[256491] = anon_sym_AT2;
	v->a[256492] = actions(11756);
	v->a[256493] = 5;
	v->a[256494] = anon_sym_BANG;
	v->a[256495] = anon_sym_DOLLAR;
	v->a[256496] = anon_sym_POUND;
	v->a[256497] = anon_sym_0;
	v->a[256498] = anon_sym__;
	v->a[256499] = 8;
	small_parse_table_12825(v);
}

/* EOF small_parse_table_2564.c */
