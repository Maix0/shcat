/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_382.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1910(t_small_parse_table_array *v)
{
	v->a[38200] = sym__bare_dollar;
	v->a[38201] = actions(1689);
	v->a[38202] = 1;
	v->a[38203] = anon_sym_DOLLAR;
	v->a[38204] = actions(1503);
	v->a[38205] = 5;
	v->a[38206] = aux_sym_concatenation_token1;
	v->a[38207] = sym_raw_string;
	v->a[38208] = sym_number;
	v->a[38209] = sym__comment_word;
	v->a[38210] = sym_word;
	v->a[38211] = state(909);
	v->a[38212] = 5;
	v->a[38213] = sym_arithmetic_expansion;
	v->a[38214] = sym_string;
	v->a[38215] = sym_simple_expansion;
	v->a[38216] = sym_expansion;
	v->a[38217] = sym_command_substitution;
	v->a[38218] = 12;
	v->a[38219] = actions(3);
	small_parse_table_1911(v);
}

void	small_parse_table_1911(t_small_parse_table_array *v)
{
	v->a[38220] = 1;
	v->a[38221] = sym_comment;
	v->a[38222] = actions(1736);
	v->a[38223] = 1;
	v->a[38224] = aux_sym_heredoc_redirect_token1;
	v->a[38225] = actions(1738);
	v->a[38226] = 1;
	v->a[38227] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38228] = actions(1741);
	v->a[38229] = 1;
	v->a[38230] = anon_sym_DOLLAR;
	v->a[38231] = actions(1744);
	v->a[38232] = 1;
	v->a[38233] = anon_sym_DQUOTE;
	v->a[38234] = actions(1747);
	v->a[38235] = 1;
	v->a[38236] = anon_sym_DOLLAR_LBRACE;
	v->a[38237] = actions(1750);
	v->a[38238] = 1;
	v->a[38239] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1912(v);
}

void	small_parse_table_1912(t_small_parse_table_array *v)
{
	v->a[38240] = actions(1753);
	v->a[38241] = 1;
	v->a[38242] = anon_sym_BQUOTE;
	v->a[38243] = state(742);
	v->a[38244] = 1;
	v->a[38245] = aux_sym__heredoc_command;
	v->a[38246] = state(1296);
	v->a[38247] = 1;
	v->a[38248] = sym_concatenation;
	v->a[38249] = actions(1733);
	v->a[38250] = 3;
	v->a[38251] = sym_raw_string;
	v->a[38252] = sym_number;
	v->a[38253] = sym_word;
	v->a[38254] = state(1011);
	v->a[38255] = 5;
	v->a[38256] = sym_arithmetic_expansion;
	v->a[38257] = sym_string;
	v->a[38258] = sym_simple_expansion;
	v->a[38259] = sym_expansion;
	small_parse_table_1913(v);
}

void	small_parse_table_1913(t_small_parse_table_array *v)
{
	v->a[38260] = sym_command_substitution;
	v->a[38261] = 10;
	v->a[38262] = actions(3);
	v->a[38263] = 1;
	v->a[38264] = sym_comment;
	v->a[38265] = actions(53);
	v->a[38266] = 1;
	v->a[38267] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38268] = actions(55);
	v->a[38269] = 1;
	v->a[38270] = anon_sym_DOLLAR;
	v->a[38271] = actions(57);
	v->a[38272] = 1;
	v->a[38273] = anon_sym_DQUOTE;
	v->a[38274] = actions(61);
	v->a[38275] = 1;
	v->a[38276] = anon_sym_DOLLAR_LBRACE;
	v->a[38277] = actions(63);
	v->a[38278] = 1;
	v->a[38279] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1914(v);
}

void	small_parse_table_1914(t_small_parse_table_array *v)
{
	v->a[38280] = actions(65);
	v->a[38281] = 1;
	v->a[38282] = anon_sym_BQUOTE;
	v->a[38283] = actions(1501);
	v->a[38284] = 1;
	v->a[38285] = sym__bare_dollar;
	v->a[38286] = actions(1497);
	v->a[38287] = 5;
	v->a[38288] = aux_sym_concatenation_token1;
	v->a[38289] = sym_raw_string;
	v->a[38290] = sym_number;
	v->a[38291] = sym__comment_word;
	v->a[38292] = sym_word;
	v->a[38293] = state(403);
	v->a[38294] = 5;
	v->a[38295] = sym_arithmetic_expansion;
	v->a[38296] = sym_string;
	v->a[38297] = sym_simple_expansion;
	v->a[38298] = sym_expansion;
	v->a[38299] = sym_command_substitution;
	small_parse_table_1915(v);
}

/* EOF small_parse_table_382.c */
