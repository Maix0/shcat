/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2584.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12920(t_small_parse_table_array *v)
{
	v->a[258400] = anon_sym_AMP_GT_GT;
	v->a[258401] = anon_sym_LT_AMP;
	v->a[258402] = anon_sym_GT_AMP;
	v->a[258403] = anon_sym_GT_PIPE;
	v->a[258404] = anon_sym_LT_AMP_DASH;
	v->a[258405] = anon_sym_GT_AMP_DASH;
	v->a[258406] = anon_sym_LT_LT_DASH;
	v->a[258407] = anon_sym_BQUOTE;
	v->a[258408] = 6;
	v->a[258409] = actions(3);
	v->a[258410] = 1;
	v->a[258411] = sym_comment;
	v->a[258412] = actions(11651);
	v->a[258413] = 1;
	v->a[258414] = aux_sym_concatenation_token1;
	v->a[258415] = actions(11653);
	v->a[258416] = 1;
	v->a[258417] = sym__concat;
	v->a[258418] = state(4634);
	v->a[258419] = 1;
	small_parse_table_12921(v);
}

void	small_parse_table_12921(t_small_parse_table_array *v)
{
	v->a[258420] = aux_sym_concatenation_repeat1;
	v->a[258421] = actions(5697);
	v->a[258422] = 2;
	v->a[258423] = sym_file_descriptor;
	v->a[258424] = aux_sym_heredoc_redirect_token1;
	v->a[258425] = actions(5695);
	v->a[258426] = 20;
	v->a[258427] = anon_sym_SEMI;
	v->a[258428] = anon_sym_PIPE_PIPE;
	v->a[258429] = anon_sym_AMP_AMP;
	v->a[258430] = anon_sym_PIPE;
	v->a[258431] = anon_sym_AMP;
	v->a[258432] = anon_sym_LT;
	v->a[258433] = anon_sym_GT;
	v->a[258434] = anon_sym_LT_LT;
	v->a[258435] = anon_sym_GT_GT;
	v->a[258436] = anon_sym_RPAREN;
	v->a[258437] = anon_sym_SEMI_SEMI;
	v->a[258438] = anon_sym_PIPE_AMP;
	v->a[258439] = anon_sym_AMP_GT;
	small_parse_table_12922(v);
}

void	small_parse_table_12922(t_small_parse_table_array *v)
{
	v->a[258440] = anon_sym_AMP_GT_GT;
	v->a[258441] = anon_sym_LT_AMP;
	v->a[258442] = anon_sym_GT_AMP;
	v->a[258443] = anon_sym_GT_PIPE;
	v->a[258444] = anon_sym_LT_AMP_DASH;
	v->a[258445] = anon_sym_GT_AMP_DASH;
	v->a[258446] = anon_sym_LT_LT_DASH;
	v->a[258447] = 16;
	v->a[258448] = actions(3);
	v->a[258449] = 1;
	v->a[258450] = sym_comment;
	v->a[258451] = actions(11760);
	v->a[258452] = 1;
	v->a[258453] = anon_sym_BANG2;
	v->a[258454] = actions(11764);
	v->a[258455] = 1;
	v->a[258456] = anon_sym_DOLLAR_LPAREN;
	v->a[258457] = actions(11766);
	v->a[258458] = 1;
	v->a[258459] = anon_sym_BQUOTE;
	small_parse_table_12923(v);
}

void	small_parse_table_12923(t_small_parse_table_array *v)
{
	v->a[258460] = actions(11768);
	v->a[258461] = 1;
	v->a[258462] = anon_sym_DOLLAR_BQUOTE;
	v->a[258463] = actions(11770);
	v->a[258464] = 1;
	v->a[258465] = aux_sym__simple_variable_name_token1;
	v->a[258466] = actions(11772);
	v->a[258467] = 1;
	v->a[258468] = sym_variable_name;
	v->a[258469] = actions(11901);
	v->a[258470] = 1;
	v->a[258471] = anon_sym_RBRACE3;
	v->a[258472] = state(3532);
	v->a[258473] = 1;
	v->a[258474] = sym_subscript;
	v->a[258475] = state(6428);
	v->a[258476] = 1;
	v->a[258477] = aux_sym__expansion_body_repeat1;
	v->a[258478] = state(6472);
	v->a[258479] = 1;
	small_parse_table_12924(v);
}

void	small_parse_table_12924(t_small_parse_table_array *v)
{
	v->a[258480] = sym_command_substitution;
	v->a[258481] = state(7257);
	v->a[258482] = 1;
	v->a[258483] = sym__expansion_body;
	v->a[258484] = actions(11762);
	v->a[258485] = 2;
	v->a[258486] = anon_sym_POUND2;
	v->a[258487] = anon_sym_EQ2;
	v->a[258488] = actions(8050);
	v->a[258489] = 3;
	v->a[258490] = sym__external_expansion_sym_hash;
	v->a[258491] = sym__external_expansion_sym_bang;
	v->a[258492] = sym__external_expansion_sym_equal;
	v->a[258493] = actions(11754);
	v->a[258494] = 4;
	v->a[258495] = anon_sym_DASH;
	v->a[258496] = anon_sym_STAR;
	v->a[258497] = anon_sym_QMARK;
	v->a[258498] = anon_sym_AT2;
	v->a[258499] = actions(11756);
	small_parse_table_12925(v);
}

/* EOF small_parse_table_2584.c */
