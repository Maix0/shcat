/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_533.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2665(t_small_parse_table_array *v)
{
	v->a[53300] = actions(1857);
	v->a[53301] = 1;
	v->a[53302] = anon_sym_RPAREN;
	v->a[53303] = actions(1859);
	v->a[53304] = 1;
	v->a[53305] = anon_sym_RBRACE;
	v->a[53306] = actions(1862);
	v->a[53307] = 1;
	v->a[53308] = anon_sym_DQUOTE;
	v->a[53309] = actions(1864);
	v->a[53310] = 1;
	v->a[53311] = sym_raw_string;
	v->a[53312] = actions(1866);
	v->a[53313] = 1;
	v->a[53314] = aux_sym__expansion_regex_token1;
	v->a[53315] = actions(1868);
	v->a[53316] = 1;
	v->a[53317] = sym_regex;
	v->a[53318] = state(1969);
	v->a[53319] = 1;
	small_parse_table_2666(v);
}

void	small_parse_table_2666(t_small_parse_table_array *v)
{
	v->a[53320] = sym__expansion_expression;
	v->a[53321] = state(1987);
	v->a[53322] = 1;
	v->a[53323] = sym__expansion_regex;
	v->a[53324] = state(1738);
	v->a[53325] = 2;
	v->a[53326] = sym_string;
	v->a[53327] = aux_sym__expansion_regex_repeat1;
	v->a[53328] = actions(1819);
	v->a[53329] = 3;
	v->a[53330] = anon_sym_PERCENT;
	v->a[53331] = anon_sym_POUND;
	v->a[53332] = anon_sym_PERCENT_PERCENT;
	v->a[53333] = actions(1823);
	v->a[53334] = 8;
	v->a[53335] = anon_sym_COLON_DASH;
	v->a[53336] = anon_sym_DASH3;
	v->a[53337] = anon_sym_COLON_EQ;
	v->a[53338] = anon_sym_EQ2;
	v->a[53339] = anon_sym_COLON_QMARK;
	small_parse_table_2667(v);
}

void	small_parse_table_2667(t_small_parse_table_array *v)
{
	v->a[53340] = anon_sym_QMARK2;
	v->a[53341] = anon_sym_COLON_PLUS;
	v->a[53342] = anon_sym_PLUS3;
	v->a[53343] = 16;
	v->a[53344] = actions(3);
	v->a[53345] = 1;
	v->a[53346] = sym_comment;
	v->a[53347] = actions(1720);
	v->a[53348] = 1;
	v->a[53349] = anon_sym_LPAREN;
	v->a[53350] = actions(1724);
	v->a[53351] = 1;
	v->a[53352] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53353] = actions(1726);
	v->a[53354] = 1;
	v->a[53355] = anon_sym_DOLLAR;
	v->a[53356] = actions(1728);
	v->a[53357] = 1;
	v->a[53358] = anon_sym_DQUOTE;
	v->a[53359] = actions(1730);
	small_parse_table_2668(v);
}

void	small_parse_table_2668(t_small_parse_table_array *v)
{
	v->a[53360] = 1;
	v->a[53361] = anon_sym_DOLLAR_LBRACE;
	v->a[53362] = actions(1732);
	v->a[53363] = 1;
	v->a[53364] = anon_sym_DOLLAR_LPAREN;
	v->a[53365] = actions(1734);
	v->a[53366] = 1;
	v->a[53367] = anon_sym_BQUOTE;
	v->a[53368] = actions(1736);
	v->a[53369] = 1;
	v->a[53370] = sym_extglob_pattern;
	v->a[53371] = actions(1764);
	v->a[53372] = 1;
	v->a[53373] = anon_sym_esac;
	v->a[53374] = state(1018);
	v->a[53375] = 1;
	v->a[53376] = aux_sym_case_statement_repeat1;
	v->a[53377] = state(1682);
	v->a[53378] = 1;
	v->a[53379] = sym_case_item;
	small_parse_table_2669(v);
}

void	small_parse_table_2669(t_small_parse_table_array *v)
{
	v->a[53380] = state(2112);
	v->a[53381] = 1;
	v->a[53382] = sym__case_item_last;
	v->a[53383] = state(1877);
	v->a[53384] = 2;
	v->a[53385] = sym_concatenation;
	v->a[53386] = sym__extglob_blob;
	v->a[53387] = actions(1716);
	v->a[53388] = 3;
	v->a[53389] = sym_raw_string;
	v->a[53390] = sym_number;
	v->a[53391] = sym_word;
	v->a[53392] = state(1772);
	v->a[53393] = 5;
	v->a[53394] = sym_arithmetic_expansion;
	v->a[53395] = sym_string;
	v->a[53396] = sym_simple_expansion;
	v->a[53397] = sym_expansion;
	v->a[53398] = sym_command_substitution;
	v->a[53399] = 3;
	small_parse_table_2670(v);
}

/* EOF small_parse_table_533.c */
