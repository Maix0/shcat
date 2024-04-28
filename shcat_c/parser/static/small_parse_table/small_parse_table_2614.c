/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2614.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13070(t_small_parse_table_array *v)
{
	v->a[261400] = anon_sym_POUND;
	v->a[261401] = anon_sym_0;
	v->a[261402] = anon_sym__;
	v->a[261403] = 16;
	v->a[261404] = actions(3);
	v->a[261405] = 1;
	v->a[261406] = sym_comment;
	v->a[261407] = actions(11760);
	v->a[261408] = 1;
	v->a[261409] = anon_sym_BANG2;
	v->a[261410] = actions(11764);
	v->a[261411] = 1;
	v->a[261412] = anon_sym_DOLLAR_LPAREN;
	v->a[261413] = actions(11766);
	v->a[261414] = 1;
	v->a[261415] = anon_sym_BQUOTE;
	v->a[261416] = actions(11768);
	v->a[261417] = 1;
	v->a[261418] = anon_sym_DOLLAR_BQUOTE;
	v->a[261419] = actions(11770);
	small_parse_table_13071(v);
}

void	small_parse_table_13071(t_small_parse_table_array *v)
{
	v->a[261420] = 1;
	v->a[261421] = aux_sym__simple_variable_name_token1;
	v->a[261422] = actions(11772);
	v->a[261423] = 1;
	v->a[261424] = sym_variable_name;
	v->a[261425] = actions(11999);
	v->a[261426] = 1;
	v->a[261427] = anon_sym_RBRACE3;
	v->a[261428] = state(3532);
	v->a[261429] = 1;
	v->a[261430] = sym_subscript;
	v->a[261431] = state(6428);
	v->a[261432] = 1;
	v->a[261433] = aux_sym__expansion_body_repeat1;
	v->a[261434] = state(6472);
	v->a[261435] = 1;
	v->a[261436] = sym_command_substitution;
	v->a[261437] = state(7437);
	v->a[261438] = 1;
	v->a[261439] = sym__expansion_body;
	small_parse_table_13072(v);
}

void	small_parse_table_13072(t_small_parse_table_array *v)
{
	v->a[261440] = actions(11762);
	v->a[261441] = 2;
	v->a[261442] = anon_sym_POUND2;
	v->a[261443] = anon_sym_EQ2;
	v->a[261444] = actions(8050);
	v->a[261445] = 3;
	v->a[261446] = sym__external_expansion_sym_hash;
	v->a[261447] = sym__external_expansion_sym_bang;
	v->a[261448] = sym__external_expansion_sym_equal;
	v->a[261449] = actions(11754);
	v->a[261450] = 4;
	v->a[261451] = anon_sym_DASH;
	v->a[261452] = anon_sym_STAR;
	v->a[261453] = anon_sym_QMARK;
	v->a[261454] = anon_sym_AT2;
	v->a[261455] = actions(11756);
	v->a[261456] = 5;
	v->a[261457] = anon_sym_BANG;
	v->a[261458] = anon_sym_DOLLAR;
	v->a[261459] = anon_sym_POUND;
	small_parse_table_13073(v);
}

void	small_parse_table_13073(t_small_parse_table_array *v)
{
	v->a[261460] = anon_sym_0;
	v->a[261461] = anon_sym__;
	v->a[261462] = 3;
	v->a[261463] = actions(3);
	v->a[261464] = 1;
	v->a[261465] = sym_comment;
	v->a[261466] = actions(1322);
	v->a[261467] = 3;
	v->a[261468] = sym_file_descriptor;
	v->a[261469] = sym__concat;
	v->a[261470] = aux_sym_heredoc_redirect_token1;
	v->a[261471] = actions(1320);
	v->a[261472] = 22;
	v->a[261473] = anon_sym_SEMI;
	v->a[261474] = anon_sym_PIPE_PIPE;
	v->a[261475] = anon_sym_AMP_AMP;
	v->a[261476] = anon_sym_PIPE;
	v->a[261477] = anon_sym_AMP;
	v->a[261478] = anon_sym_LT;
	v->a[261479] = anon_sym_GT;
	small_parse_table_13074(v);
}

void	small_parse_table_13074(t_small_parse_table_array *v)
{
	v->a[261480] = anon_sym_LT_LT;
	v->a[261481] = anon_sym_GT_GT;
	v->a[261482] = anon_sym_SEMI_SEMI;
	v->a[261483] = anon_sym_SEMI_AMP;
	v->a[261484] = anon_sym_SEMI_SEMI_AMP;
	v->a[261485] = anon_sym_PIPE_AMP;
	v->a[261486] = anon_sym_AMP_GT;
	v->a[261487] = anon_sym_AMP_GT_GT;
	v->a[261488] = anon_sym_LT_AMP;
	v->a[261489] = anon_sym_GT_AMP;
	v->a[261490] = anon_sym_GT_PIPE;
	v->a[261491] = anon_sym_LT_AMP_DASH;
	v->a[261492] = anon_sym_GT_AMP_DASH;
	v->a[261493] = anon_sym_LT_LT_DASH;
	v->a[261494] = aux_sym_concatenation_token1;
	v->a[261495] = 6;
	v->a[261496] = actions(3);
	v->a[261497] = 1;
	v->a[261498] = sym_comment;
	v->a[261499] = actions(11512);
	small_parse_table_13075(v);
}

/* EOF small_parse_table_2614.c */
