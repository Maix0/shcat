/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2654.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13270(t_small_parse_table_array *v)
{
	v->a[265400] = anon_sym_EQ2;
	v->a[265401] = actions(8050);
	v->a[265402] = 3;
	v->a[265403] = sym__external_expansion_sym_hash;
	v->a[265404] = sym__external_expansion_sym_bang;
	v->a[265405] = sym__external_expansion_sym_equal;
	v->a[265406] = actions(11754);
	v->a[265407] = 4;
	v->a[265408] = anon_sym_DASH;
	v->a[265409] = anon_sym_STAR;
	v->a[265410] = anon_sym_QMARK;
	v->a[265411] = anon_sym_AT2;
	v->a[265412] = actions(11756);
	v->a[265413] = 5;
	v->a[265414] = anon_sym_BANG;
	v->a[265415] = anon_sym_DOLLAR;
	v->a[265416] = anon_sym_POUND;
	v->a[265417] = anon_sym_0;
	v->a[265418] = anon_sym__;
	v->a[265419] = 3;
	small_parse_table_13271(v);
}

void	small_parse_table_13271(t_small_parse_table_array *v)
{
	v->a[265420] = actions(3);
	v->a[265421] = 1;
	v->a[265422] = sym_comment;
	v->a[265423] = actions(11739);
	v->a[265424] = 2;
	v->a[265425] = sym_file_descriptor;
	v->a[265426] = aux_sym_heredoc_redirect_token1;
	v->a[265427] = actions(11741);
	v->a[265428] = 23;
	v->a[265429] = anon_sym_SEMI;
	v->a[265430] = anon_sym_PIPE_PIPE;
	v->a[265431] = anon_sym_AMP_AMP;
	v->a[265432] = anon_sym_PIPE;
	v->a[265433] = anon_sym_AMP;
	v->a[265434] = anon_sym_LT;
	v->a[265435] = anon_sym_GT;
	v->a[265436] = anon_sym_LT_LT;
	v->a[265437] = anon_sym_GT_GT;
	v->a[265438] = anon_sym_esac;
	v->a[265439] = anon_sym_SEMI_SEMI;
	small_parse_table_13272(v);
}

void	small_parse_table_13272(t_small_parse_table_array *v)
{
	v->a[265440] = anon_sym_SEMI_AMP;
	v->a[265441] = anon_sym_SEMI_SEMI_AMP;
	v->a[265442] = anon_sym_PIPE_AMP;
	v->a[265443] = anon_sym_AMP_GT;
	v->a[265444] = anon_sym_AMP_GT_GT;
	v->a[265445] = anon_sym_LT_AMP;
	v->a[265446] = anon_sym_GT_AMP;
	v->a[265447] = anon_sym_GT_PIPE;
	v->a[265448] = anon_sym_LT_AMP_DASH;
	v->a[265449] = anon_sym_GT_AMP_DASH;
	v->a[265450] = anon_sym_LT_LT_DASH;
	v->a[265451] = anon_sym_LT_LT_LT;
	v->a[265452] = 16;
	v->a[265453] = actions(3);
	v->a[265454] = 1;
	v->a[265455] = sym_comment;
	v->a[265456] = actions(11760);
	v->a[265457] = 1;
	v->a[265458] = anon_sym_BANG2;
	v->a[265459] = actions(11764);
	small_parse_table_13273(v);
}

void	small_parse_table_13273(t_small_parse_table_array *v)
{
	v->a[265460] = 1;
	v->a[265461] = anon_sym_DOLLAR_LPAREN;
	v->a[265462] = actions(11766);
	v->a[265463] = 1;
	v->a[265464] = anon_sym_BQUOTE;
	v->a[265465] = actions(11768);
	v->a[265466] = 1;
	v->a[265467] = anon_sym_DOLLAR_BQUOTE;
	v->a[265468] = actions(11770);
	v->a[265469] = 1;
	v->a[265470] = aux_sym__simple_variable_name_token1;
	v->a[265471] = actions(11772);
	v->a[265472] = 1;
	v->a[265473] = sym_variable_name;
	v->a[265474] = actions(12084);
	v->a[265475] = 1;
	v->a[265476] = anon_sym_RBRACE3;
	v->a[265477] = state(3532);
	v->a[265478] = 1;
	v->a[265479] = sym_subscript;
	small_parse_table_13274(v);
}

void	small_parse_table_13274(t_small_parse_table_array *v)
{
	v->a[265480] = state(6428);
	v->a[265481] = 1;
	v->a[265482] = aux_sym__expansion_body_repeat1;
	v->a[265483] = state(6472);
	v->a[265484] = 1;
	v->a[265485] = sym_command_substitution;
	v->a[265486] = state(7131);
	v->a[265487] = 1;
	v->a[265488] = sym__expansion_body;
	v->a[265489] = actions(11762);
	v->a[265490] = 2;
	v->a[265491] = anon_sym_POUND2;
	v->a[265492] = anon_sym_EQ2;
	v->a[265493] = actions(8050);
	v->a[265494] = 3;
	v->a[265495] = sym__external_expansion_sym_hash;
	v->a[265496] = sym__external_expansion_sym_bang;
	v->a[265497] = sym__external_expansion_sym_equal;
	v->a[265498] = actions(11754);
	v->a[265499] = 4;
	small_parse_table_13275(v);
}

/* EOF small_parse_table_2654.c */
