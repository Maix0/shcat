/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1354.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6770(t_small_parse_table_array *v)
{
	v->a[135400] = actions(7628);
	v->a[135401] = 1;
	v->a[135402] = anon_sym_DQUOTE;
	v->a[135403] = actions(7760);
	v->a[135404] = 1;
	v->a[135405] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135406] = actions(7766);
	v->a[135407] = 1;
	v->a[135408] = sym_string_content;
	v->a[135409] = actions(7768);
	v->a[135410] = 1;
	v->a[135411] = anon_sym_DOLLAR_LBRACE;
	v->a[135412] = actions(7770);
	v->a[135413] = 1;
	v->a[135414] = anon_sym_DOLLAR_LPAREN;
	v->a[135415] = actions(7772);
	v->a[135416] = 1;
	v->a[135417] = anon_sym_BQUOTE;
	v->a[135418] = actions(7774);
	v->a[135419] = 1;
	small_parse_table_6771(v);
}

void	small_parse_table_6771(t_small_parse_table_array *v)
{
	v->a[135420] = anon_sym_DOLLAR_BQUOTE;
	v->a[135421] = actions(7846);
	v->a[135422] = 1;
	v->a[135423] = anon_sym_DOLLAR;
	v->a[135424] = state(3061);
	v->a[135425] = 1;
	v->a[135426] = aux_sym_string_repeat1;
	v->a[135427] = state(3218);
	v->a[135428] = 4;
	v->a[135429] = sym_arithmetic_expansion;
	v->a[135430] = sym_simple_expansion;
	v->a[135431] = sym_expansion;
	v->a[135432] = sym_command_substitution;
	v->a[135433] = 7;
	v->a[135434] = actions(3);
	v->a[135435] = 1;
	v->a[135436] = sym_comment;
	v->a[135437] = actions(7754);
	v->a[135438] = 1;
	v->a[135439] = aux_sym__simple_variable_name_token1;
	small_parse_table_6772(v);
}

void	small_parse_table_6772(t_small_parse_table_array *v)
{
	v->a[135440] = actions(7758);
	v->a[135441] = 1;
	v->a[135442] = sym_variable_name;
	v->a[135443] = actions(7848);
	v->a[135444] = 1;
	v->a[135445] = anon_sym_RBRACE3;
	v->a[135446] = state(3746);
	v->a[135447] = 1;
	v->a[135448] = sym__expansion_body;
	v->a[135449] = actions(7756);
	v->a[135450] = 2;
	v->a[135451] = anon_sym_0;
	v->a[135452] = anon_sym__;
	v->a[135453] = actions(7750);
	v->a[135454] = 7;
	v->a[135455] = anon_sym_BANG;
	v->a[135456] = anon_sym_DASH;
	v->a[135457] = anon_sym_STAR;
	v->a[135458] = anon_sym_QMARK;
	v->a[135459] = anon_sym_DOLLAR;
	small_parse_table_6773(v);
}

void	small_parse_table_6773(t_small_parse_table_array *v)
{
	v->a[135460] = anon_sym_POUND;
	v->a[135461] = anon_sym_AT;
	v->a[135462] = 11;
	v->a[135463] = actions(3);
	v->a[135464] = 1;
	v->a[135465] = sym_comment;
	v->a[135466] = actions(7604);
	v->a[135467] = 1;
	v->a[135468] = anon_sym_DQUOTE;
	v->a[135469] = actions(7760);
	v->a[135470] = 1;
	v->a[135471] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135472] = actions(7766);
	v->a[135473] = 1;
	v->a[135474] = sym_string_content;
	v->a[135475] = actions(7768);
	v->a[135476] = 1;
	v->a[135477] = anon_sym_DOLLAR_LBRACE;
	v->a[135478] = actions(7770);
	v->a[135479] = 1;
	small_parse_table_6774(v);
}

void	small_parse_table_6774(t_small_parse_table_array *v)
{
	v->a[135480] = anon_sym_DOLLAR_LPAREN;
	v->a[135481] = actions(7772);
	v->a[135482] = 1;
	v->a[135483] = anon_sym_BQUOTE;
	v->a[135484] = actions(7774);
	v->a[135485] = 1;
	v->a[135486] = anon_sym_DOLLAR_BQUOTE;
	v->a[135487] = actions(7850);
	v->a[135488] = 1;
	v->a[135489] = anon_sym_DOLLAR;
	v->a[135490] = state(3061);
	v->a[135491] = 1;
	v->a[135492] = aux_sym_string_repeat1;
	v->a[135493] = state(3218);
	v->a[135494] = 4;
	v->a[135495] = sym_arithmetic_expansion;
	v->a[135496] = sym_simple_expansion;
	v->a[135497] = sym_expansion;
	v->a[135498] = sym_command_substitution;
	v->a[135499] = 11;
	small_parse_table_6775(v);
}

/* EOF small_parse_table_1354.c */
