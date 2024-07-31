/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_535.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2675(t_small_parse_table_array *v)
{
	v->a[53500] = sym_word;
	v->a[53501] = state(352);
	v->a[53502] = 5;
	v->a[53503] = sym_arithmetic_expansion;
	v->a[53504] = sym_string;
	v->a[53505] = sym_simple_expansion;
	v->a[53506] = sym_expansion;
	v->a[53507] = sym_command_substitution;
	v->a[53508] = 10;
	v->a[53509] = actions(3);
	v->a[53510] = 1;
	v->a[53511] = sym_comment;
	v->a[53512] = actions(1151);
	v->a[53513] = 1;
	v->a[53514] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53515] = actions(1155);
	v->a[53516] = 1;
	v->a[53517] = anon_sym_DQUOTE;
	v->a[53518] = actions(1157);
	v->a[53519] = 1;
	small_parse_table_2676(v);
}

void	small_parse_table_2676(t_small_parse_table_array *v)
{
	v->a[53520] = anon_sym_DOLLAR_LBRACE;
	v->a[53521] = actions(1159);
	v->a[53522] = 1;
	v->a[53523] = anon_sym_DOLLAR_LPAREN;
	v->a[53524] = actions(1161);
	v->a[53525] = 1;
	v->a[53526] = anon_sym_BQUOTE;
	v->a[53527] = actions(1981);
	v->a[53528] = 1;
	v->a[53529] = anon_sym_DOLLAR;
	v->a[53530] = actions(1983);
	v->a[53531] = 1;
	v->a[53532] = sym__bare_dollar;
	v->a[53533] = actions(1979);
	v->a[53534] = 5;
	v->a[53535] = aux_sym_concatenation_token1;
	v->a[53536] = sym_raw_string;
	v->a[53537] = sym_number;
	v->a[53538] = sym__comment_word;
	v->a[53539] = sym_word;
	small_parse_table_2677(v);
}

void	small_parse_table_2677(t_small_parse_table_array *v)
{
	v->a[53540] = state(711);
	v->a[53541] = 5;
	v->a[53542] = sym_arithmetic_expansion;
	v->a[53543] = sym_string;
	v->a[53544] = sym_simple_expansion;
	v->a[53545] = sym_expansion;
	v->a[53546] = sym_command_substitution;
	v->a[53547] = 10;
	v->a[53548] = actions(3);
	v->a[53549] = 1;
	v->a[53550] = sym_comment;
	v->a[53551] = actions(886);
	v->a[53552] = 1;
	v->a[53553] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53554] = actions(890);
	v->a[53555] = 1;
	v->a[53556] = anon_sym_DQUOTE;
	v->a[53557] = actions(892);
	v->a[53558] = 1;
	v->a[53559] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2678(v);
}

void	small_parse_table_2678(t_small_parse_table_array *v)
{
	v->a[53560] = actions(894);
	v->a[53561] = 1;
	v->a[53562] = anon_sym_DOLLAR_LPAREN;
	v->a[53563] = actions(896);
	v->a[53564] = 1;
	v->a[53565] = anon_sym_BQUOTE;
	v->a[53566] = actions(1987);
	v->a[53567] = 1;
	v->a[53568] = anon_sym_DOLLAR;
	v->a[53569] = actions(1989);
	v->a[53570] = 1;
	v->a[53571] = sym__bare_dollar;
	v->a[53572] = actions(1985);
	v->a[53573] = 5;
	v->a[53574] = aux_sym_concatenation_token1;
	v->a[53575] = sym_raw_string;
	v->a[53576] = sym_number;
	v->a[53577] = sym__comment_word;
	v->a[53578] = sym_word;
	v->a[53579] = state(496);
	small_parse_table_2679(v);
}

void	small_parse_table_2679(t_small_parse_table_array *v)
{
	v->a[53580] = 5;
	v->a[53581] = sym_arithmetic_expansion;
	v->a[53582] = sym_string;
	v->a[53583] = sym_simple_expansion;
	v->a[53584] = sym_expansion;
	v->a[53585] = sym_command_substitution;
	v->a[53586] = 10;
	v->a[53587] = actions(3);
	v->a[53588] = 1;
	v->a[53589] = sym_comment;
	v->a[53590] = actions(1993);
	v->a[53591] = 1;
	v->a[53592] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53593] = actions(1995);
	v->a[53594] = 1;
	v->a[53595] = anon_sym_DOLLAR;
	v->a[53596] = actions(1997);
	v->a[53597] = 1;
	v->a[53598] = anon_sym_DQUOTE;
	v->a[53599] = actions(1999);
	small_parse_table_2680(v);
}

/* EOF small_parse_table_535.c */
