/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1374.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6870(t_small_parse_table_array *v)
{
	v->a[137400] = anon_sym_BANG;
	v->a[137401] = anon_sym_DASH;
	v->a[137402] = anon_sym_STAR;
	v->a[137403] = anon_sym_QMARK;
	v->a[137404] = anon_sym_DOLLAR;
	v->a[137405] = anon_sym_POUND;
	v->a[137406] = anon_sym_AT;
	v->a[137407] = 11;
	v->a[137408] = actions(3);
	v->a[137409] = 1;
	v->a[137410] = sym_comment;
	v->a[137411] = actions(7622);
	v->a[137412] = 1;
	v->a[137413] = anon_sym_DQUOTE;
	v->a[137414] = actions(7760);
	v->a[137415] = 1;
	v->a[137416] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[137417] = actions(7766);
	v->a[137418] = 1;
	v->a[137419] = sym_string_content;
	small_parse_table_6871(v);
}

void	small_parse_table_6871(t_small_parse_table_array *v)
{
	v->a[137420] = actions(7768);
	v->a[137421] = 1;
	v->a[137422] = anon_sym_DOLLAR_LBRACE;
	v->a[137423] = actions(7770);
	v->a[137424] = 1;
	v->a[137425] = anon_sym_DOLLAR_LPAREN;
	v->a[137426] = actions(7772);
	v->a[137427] = 1;
	v->a[137428] = anon_sym_BQUOTE;
	v->a[137429] = actions(7774);
	v->a[137430] = 1;
	v->a[137431] = anon_sym_DOLLAR_BQUOTE;
	v->a[137432] = actions(8019);
	v->a[137433] = 1;
	v->a[137434] = anon_sym_DOLLAR;
	v->a[137435] = state(3061);
	v->a[137436] = 1;
	v->a[137437] = aux_sym_string_repeat1;
	v->a[137438] = state(3218);
	v->a[137439] = 4;
	small_parse_table_6872(v);
}

void	small_parse_table_6872(t_small_parse_table_array *v)
{
	v->a[137440] = sym_arithmetic_expansion;
	v->a[137441] = sym_simple_expansion;
	v->a[137442] = sym_expansion;
	v->a[137443] = sym_command_substitution;
	v->a[137444] = 11;
	v->a[137445] = actions(3);
	v->a[137446] = 1;
	v->a[137447] = sym_comment;
	v->a[137448] = actions(7760);
	v->a[137449] = 1;
	v->a[137450] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[137451] = actions(7766);
	v->a[137452] = 1;
	v->a[137453] = sym_string_content;
	v->a[137454] = actions(7768);
	v->a[137455] = 1;
	v->a[137456] = anon_sym_DOLLAR_LBRACE;
	v->a[137457] = actions(7770);
	v->a[137458] = 1;
	v->a[137459] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_6873(v);
}

void	small_parse_table_6873(t_small_parse_table_array *v)
{
	v->a[137460] = actions(7772);
	v->a[137461] = 1;
	v->a[137462] = anon_sym_BQUOTE;
	v->a[137463] = actions(7774);
	v->a[137464] = 1;
	v->a[137465] = anon_sym_DOLLAR_BQUOTE;
	v->a[137466] = actions(8021);
	v->a[137467] = 1;
	v->a[137468] = anon_sym_DOLLAR;
	v->a[137469] = actions(8023);
	v->a[137470] = 1;
	v->a[137471] = anon_sym_DQUOTE;
	v->a[137472] = state(3070);
	v->a[137473] = 1;
	v->a[137474] = aux_sym_string_repeat1;
	v->a[137475] = state(3218);
	v->a[137476] = 4;
	v->a[137477] = sym_arithmetic_expansion;
	v->a[137478] = sym_simple_expansion;
	v->a[137479] = sym_expansion;
	small_parse_table_6874(v);
}

void	small_parse_table_6874(t_small_parse_table_array *v)
{
	v->a[137480] = sym_command_substitution;
	v->a[137481] = 7;
	v->a[137482] = actions(3);
	v->a[137483] = 1;
	v->a[137484] = sym_comment;
	v->a[137485] = actions(7754);
	v->a[137486] = 1;
	v->a[137487] = aux_sym__simple_variable_name_token1;
	v->a[137488] = actions(7758);
	v->a[137489] = 1;
	v->a[137490] = sym_variable_name;
	v->a[137491] = actions(8025);
	v->a[137492] = 1;
	v->a[137493] = anon_sym_RBRACE3;
	v->a[137494] = state(3879);
	v->a[137495] = 1;
	v->a[137496] = sym__expansion_body;
	v->a[137497] = actions(7756);
	v->a[137498] = 2;
	v->a[137499] = anon_sym_0;
	small_parse_table_6875(v);
}

/* EOF small_parse_table_1374.c */
