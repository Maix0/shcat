/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_367.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1835(t_small_parse_table_array *v)
{
	v->a[36700] = sym_word;
	v->a[36701] = state(909);
	v->a[36702] = 5;
	v->a[36703] = sym_arithmetic_expansion;
	v->a[36704] = sym_string;
	v->a[36705] = sym_simple_expansion;
	v->a[36706] = sym_expansion;
	v->a[36707] = sym_command_substitution;
	v->a[36708] = 10;
	v->a[36709] = actions(3);
	v->a[36710] = 1;
	v->a[36711] = sym_comment;
	v->a[36712] = actions(1479);
	v->a[36713] = 1;
	v->a[36714] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36715] = actions(1483);
	v->a[36716] = 1;
	v->a[36717] = anon_sym_DQUOTE;
	v->a[36718] = actions(1485);
	v->a[36719] = 1;
	small_parse_table_1836(v);
}

void	small_parse_table_1836(t_small_parse_table_array *v)
{
	v->a[36720] = anon_sym_DOLLAR_LBRACE;
	v->a[36721] = actions(1487);
	v->a[36722] = 1;
	v->a[36723] = anon_sym_DOLLAR_LPAREN;
	v->a[36724] = actions(1489);
	v->a[36725] = 1;
	v->a[36726] = anon_sym_BQUOTE;
	v->a[36727] = actions(1491);
	v->a[36728] = 1;
	v->a[36729] = sym__bare_dollar;
	v->a[36730] = actions(1519);
	v->a[36731] = 1;
	v->a[36732] = anon_sym_DOLLAR;
	v->a[36733] = actions(1477);
	v->a[36734] = 5;
	v->a[36735] = aux_sym_concatenation_token1;
	v->a[36736] = sym_raw_string;
	v->a[36737] = sym_number;
	v->a[36738] = sym__comment_word;
	v->a[36739] = sym_word;
	small_parse_table_1837(v);
}

void	small_parse_table_1837(t_small_parse_table_array *v)
{
	v->a[36740] = state(353);
	v->a[36741] = 5;
	v->a[36742] = sym_arithmetic_expansion;
	v->a[36743] = sym_string;
	v->a[36744] = sym_simple_expansion;
	v->a[36745] = sym_expansion;
	v->a[36746] = sym_command_substitution;
	v->a[36747] = 10;
	v->a[36748] = actions(3);
	v->a[36749] = 1;
	v->a[36750] = sym_comment;
	v->a[36751] = actions(704);
	v->a[36752] = 1;
	v->a[36753] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36754] = actions(708);
	v->a[36755] = 1;
	v->a[36756] = anon_sym_DQUOTE;
	v->a[36757] = actions(710);
	v->a[36758] = 1;
	v->a[36759] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1838(v);
}

void	small_parse_table_1838(t_small_parse_table_array *v)
{
	v->a[36760] = actions(712);
	v->a[36761] = 1;
	v->a[36762] = anon_sym_DOLLAR_LPAREN;
	v->a[36763] = actions(714);
	v->a[36764] = 1;
	v->a[36765] = anon_sym_BQUOTE;
	v->a[36766] = actions(1523);
	v->a[36767] = 1;
	v->a[36768] = anon_sym_DOLLAR;
	v->a[36769] = actions(1525);
	v->a[36770] = 1;
	v->a[36771] = sym__bare_dollar;
	v->a[36772] = actions(1521);
	v->a[36773] = 5;
	v->a[36774] = aux_sym_concatenation_token1;
	v->a[36775] = sym_raw_string;
	v->a[36776] = sym_number;
	v->a[36777] = sym__comment_word;
	v->a[36778] = sym_word;
	v->a[36779] = state(474);
	small_parse_table_1839(v);
}

void	small_parse_table_1839(t_small_parse_table_array *v)
{
	v->a[36780] = 5;
	v->a[36781] = sym_arithmetic_expansion;
	v->a[36782] = sym_string;
	v->a[36783] = sym_simple_expansion;
	v->a[36784] = sym_expansion;
	v->a[36785] = sym_command_substitution;
	v->a[36786] = 10;
	v->a[36787] = actions(3);
	v->a[36788] = 1;
	v->a[36789] = sym_comment;
	v->a[36790] = actions(655);
	v->a[36791] = 1;
	v->a[36792] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36793] = actions(659);
	v->a[36794] = 1;
	v->a[36795] = anon_sym_DQUOTE;
	v->a[36796] = actions(661);
	v->a[36797] = 1;
	v->a[36798] = anon_sym_DOLLAR_LBRACE;
	v->a[36799] = actions(663);
	small_parse_table_1840(v);
}

/* EOF small_parse_table_367.c */
