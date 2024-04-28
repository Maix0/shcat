/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1914.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9570(t_small_parse_table_array *v)
{
	v->a[191400] = 1;
	v->a[191401] = anon_sym_RBRACE3;
	v->a[191402] = actions(8546);
	v->a[191403] = 1;
	v->a[191404] = anon_sym_AT;
	v->a[191405] = state(6465);
	v->a[191406] = 1;
	v->a[191407] = aux_sym__expansion_body_repeat1;
	v->a[191408] = state(7232);
	v->a[191409] = 1;
	v->a[191410] = sym__expansion_operator;
	v->a[191411] = state(7233);
	v->a[191412] = 1;
	v->a[191413] = sym__expansion_max_length;
	v->a[191414] = state(7234);
	v->a[191415] = 1;
	v->a[191416] = sym__expansion_regex_removal;
	v->a[191417] = state(7235);
	v->a[191418] = 1;
	v->a[191419] = sym__expansion_regex_replacement;
	small_parse_table_9571(v);
}

void	small_parse_table_9571(t_small_parse_table_array *v)
{
	v->a[191420] = state(7236);
	v->a[191421] = 1;
	v->a[191422] = sym__expansion_regex;
	v->a[191423] = state(7237);
	v->a[191424] = 1;
	v->a[191425] = sym__expansion_expression;
	v->a[191426] = actions(8028);
	v->a[191427] = 2;
	v->a[191428] = anon_sym_COMMA;
	v->a[191429] = anon_sym_CARET;
	v->a[191430] = actions(8048);
	v->a[191431] = 2;
	v->a[191432] = anon_sym_COMMA_COMMA;
	v->a[191433] = anon_sym_CARET_CARET;
	v->a[191434] = actions(8036);
	v->a[191435] = 3;
	v->a[191436] = sym__immediate_double_hash;
	v->a[191437] = anon_sym_POUND;
	v->a[191438] = anon_sym_PERCENT_PERCENT;
	v->a[191439] = actions(8046);
	small_parse_table_9572(v);
}

void	small_parse_table_9572(t_small_parse_table_array *v)
{
	v->a[191440] = 3;
	v->a[191441] = anon_sym_SLASH_SLASH;
	v->a[191442] = anon_sym_SLASH_POUND;
	v->a[191443] = anon_sym_SLASH_PERCENT;
	v->a[191444] = actions(8050);
	v->a[191445] = 3;
	v->a[191446] = sym__external_expansion_sym_hash;
	v->a[191447] = sym__external_expansion_sym_bang;
	v->a[191448] = sym__external_expansion_sym_equal;
	v->a[191449] = actions(8044);
	v->a[191450] = 8;
	v->a[191451] = anon_sym_EQ2;
	v->a[191452] = anon_sym_COLON_EQ;
	v->a[191453] = anon_sym_DASH3;
	v->a[191454] = anon_sym_COLON_DASH;
	v->a[191455] = anon_sym_PLUS3;
	v->a[191456] = anon_sym_COLON_PLUS;
	v->a[191457] = anon_sym_QMARK2;
	v->a[191458] = anon_sym_COLON_QMARK;
	v->a[191459] = 19;
	small_parse_table_9573(v);
}

void	small_parse_table_9573(t_small_parse_table_array *v)
{
	v->a[191460] = actions(3);
	v->a[191461] = 1;
	v->a[191462] = sym_comment;
	v->a[191463] = actions(8030);
	v->a[191464] = 1;
	v->a[191465] = anon_sym_SLASH;
	v->a[191466] = actions(8032);
	v->a[191467] = 1;
	v->a[191468] = anon_sym_PERCENT;
	v->a[191469] = actions(8034);
	v->a[191470] = 1;
	v->a[191471] = anon_sym_COLON;
	v->a[191472] = actions(8546);
	v->a[191473] = 1;
	v->a[191474] = anon_sym_AT;
	v->a[191475] = actions(8548);
	v->a[191476] = 1;
	v->a[191477] = anon_sym_RBRACE3;
	v->a[191478] = state(6477);
	v->a[191479] = 1;
	small_parse_table_9574(v);
}

void	small_parse_table_9574(t_small_parse_table_array *v)
{
	v->a[191480] = aux_sym__expansion_body_repeat1;
	v->a[191481] = state(6876);
	v->a[191482] = 1;
	v->a[191483] = sym__expansion_max_length;
	v->a[191484] = state(7218);
	v->a[191485] = 1;
	v->a[191486] = sym__expansion_operator;
	v->a[191487] = state(7220);
	v->a[191488] = 1;
	v->a[191489] = sym__expansion_regex_removal;
	v->a[191490] = state(7221);
	v->a[191491] = 1;
	v->a[191492] = sym__expansion_regex_replacement;
	v->a[191493] = state(7222);
	v->a[191494] = 1;
	v->a[191495] = sym__expansion_regex;
	v->a[191496] = state(7223);
	v->a[191497] = 1;
	v->a[191498] = sym__expansion_expression;
	v->a[191499] = actions(8028);
	small_parse_table_9575(v);
}

/* EOF small_parse_table_1914.c */
