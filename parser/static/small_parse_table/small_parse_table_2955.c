/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2955.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14775(t_small_parse_table_array *v)
{
	v->a[295500] = 1;
	v->a[295501] = anon_sym_DOLLAR_LPAREN;
	v->a[295502] = actions(13072);
	v->a[295503] = 1;
	v->a[295504] = anon_sym_BQUOTE;
	v->a[295505] = actions(13074);
	v->a[295506] = 1;
	v->a[295507] = anon_sym_DOLLAR_BQUOTE;
	v->a[295508] = actions(13204);
	v->a[295509] = 1;
	v->a[295510] = anon_sym_DOLLAR;
	v->a[295511] = actions(13206);
	v->a[295512] = 1;
	v->a[295513] = anon_sym_DQUOTE;
	v->a[295514] = state(5848);
	v->a[295515] = 1;
	v->a[295516] = aux_sym_string_repeat1;
	v->a[295517] = actions(13058);
	v->a[295518] = 2;
	v->a[295519] = anon_sym_LPAREN_LPAREN;
	small_parse_table_14776(v);
}

void	small_parse_table_14776(t_small_parse_table_array *v)
{
	v->a[295520] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[295521] = state(6127);
	v->a[295522] = 4;
	v->a[295523] = sym_arithmetic_expansion;
	v->a[295524] = sym_simple_expansion;
	v->a[295525] = sym_expansion;
	v->a[295526] = sym_command_substitution;
	v->a[295527] = 12;
	v->a[295528] = actions(3);
	v->a[295529] = 1;
	v->a[295530] = sym_comment;
	v->a[295531] = actions(13060);
	v->a[295532] = 1;
	v->a[295533] = anon_sym_DOLLAR_LBRACK;
	v->a[295534] = actions(13066);
	v->a[295535] = 1;
	v->a[295536] = sym_string_content;
	v->a[295537] = actions(13068);
	v->a[295538] = 1;
	v->a[295539] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_14777(v);
}

void	small_parse_table_14777(t_small_parse_table_array *v)
{
	v->a[295540] = actions(13070);
	v->a[295541] = 1;
	v->a[295542] = anon_sym_DOLLAR_LPAREN;
	v->a[295543] = actions(13072);
	v->a[295544] = 1;
	v->a[295545] = anon_sym_BQUOTE;
	v->a[295546] = actions(13074);
	v->a[295547] = 1;
	v->a[295548] = anon_sym_DOLLAR_BQUOTE;
	v->a[295549] = actions(13208);
	v->a[295550] = 1;
	v->a[295551] = anon_sym_DOLLAR;
	v->a[295552] = actions(13210);
	v->a[295553] = 1;
	v->a[295554] = anon_sym_DQUOTE;
	v->a[295555] = state(5732);
	v->a[295556] = 1;
	v->a[295557] = aux_sym_string_repeat1;
	v->a[295558] = actions(13058);
	v->a[295559] = 2;
	small_parse_table_14778(v);
}

void	small_parse_table_14778(t_small_parse_table_array *v)
{
	v->a[295560] = anon_sym_LPAREN_LPAREN;
	v->a[295561] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[295562] = state(6127);
	v->a[295563] = 4;
	v->a[295564] = sym_arithmetic_expansion;
	v->a[295565] = sym_simple_expansion;
	v->a[295566] = sym_expansion;
	v->a[295567] = sym_command_substitution;
	v->a[295568] = 12;
	v->a[295569] = actions(3);
	v->a[295570] = 1;
	v->a[295571] = sym_comment;
	v->a[295572] = actions(13060);
	v->a[295573] = 1;
	v->a[295574] = anon_sym_DOLLAR_LBRACK;
	v->a[295575] = actions(13066);
	v->a[295576] = 1;
	v->a[295577] = sym_string_content;
	v->a[295578] = actions(13068);
	v->a[295579] = 1;
	small_parse_table_14779(v);
}

void	small_parse_table_14779(t_small_parse_table_array *v)
{
	v->a[295580] = anon_sym_DOLLAR_LBRACE;
	v->a[295581] = actions(13070);
	v->a[295582] = 1;
	v->a[295583] = anon_sym_DOLLAR_LPAREN;
	v->a[295584] = actions(13072);
	v->a[295585] = 1;
	v->a[295586] = anon_sym_BQUOTE;
	v->a[295587] = actions(13074);
	v->a[295588] = 1;
	v->a[295589] = anon_sym_DOLLAR_BQUOTE;
	v->a[295590] = actions(13212);
	v->a[295591] = 1;
	v->a[295592] = anon_sym_DOLLAR;
	v->a[295593] = actions(13214);
	v->a[295594] = 1;
	v->a[295595] = anon_sym_DQUOTE;
	v->a[295596] = state(5768);
	v->a[295597] = 1;
	v->a[295598] = aux_sym_string_repeat1;
	v->a[295599] = actions(13058);
	small_parse_table_14780(v);
}

/* EOF small_parse_table_2955.c */
