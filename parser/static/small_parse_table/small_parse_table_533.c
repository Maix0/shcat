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
	v->a[53300] = sym_raw_string;
	v->a[53301] = sym_number;
	v->a[53302] = sym__comment_word;
	v->a[53303] = sym_word;
	v->a[53304] = state(508);
	v->a[53305] = 5;
	v->a[53306] = sym_arithmetic_expansion;
	v->a[53307] = sym_string;
	v->a[53308] = sym_simple_expansion;
	v->a[53309] = sym_expansion;
	v->a[53310] = sym_command_substitution;
	v->a[53311] = 12;
	v->a[53312] = actions(3);
	v->a[53313] = 1;
	v->a[53314] = sym_comment;
	v->a[53315] = actions(930);
	v->a[53316] = 1;
	v->a[53317] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53318] = actions(932);
	v->a[53319] = 1;
	small_parse_table_2666(v);
}

void	small_parse_table_2666(t_small_parse_table_array *v)
{
	v->a[53320] = anon_sym_DOLLAR;
	v->a[53321] = actions(934);
	v->a[53322] = 1;
	v->a[53323] = anon_sym_DQUOTE;
	v->a[53324] = actions(936);
	v->a[53325] = 1;
	v->a[53326] = anon_sym_DOLLAR_LBRACE;
	v->a[53327] = actions(938);
	v->a[53328] = 1;
	v->a[53329] = anon_sym_DOLLAR_LPAREN;
	v->a[53330] = actions(940);
	v->a[53331] = 1;
	v->a[53332] = anon_sym_BQUOTE;
	v->a[53333] = actions(1948);
	v->a[53334] = 1;
	v->a[53335] = aux_sym_heredoc_redirect_token1;
	v->a[53336] = state(1095);
	v->a[53337] = 1;
	v->a[53338] = aux_sym__heredoc_command;
	v->a[53339] = state(1465);
	small_parse_table_2667(v);
}

void	small_parse_table_2667(t_small_parse_table_array *v)
{
	v->a[53340] = 1;
	v->a[53341] = sym_concatenation;
	v->a[53342] = actions(920);
	v->a[53343] = 3;
	v->a[53344] = sym_raw_string;
	v->a[53345] = sym_number;
	v->a[53346] = sym_word;
	v->a[53347] = state(1287);
	v->a[53348] = 5;
	v->a[53349] = sym_arithmetic_expansion;
	v->a[53350] = sym_string;
	v->a[53351] = sym_simple_expansion;
	v->a[53352] = sym_expansion;
	v->a[53353] = sym_command_substitution;
	v->a[53354] = 10;
	v->a[53355] = actions(3);
	v->a[53356] = 1;
	v->a[53357] = sym_comment;
	v->a[53358] = actions(1952);
	v->a[53359] = 1;
	small_parse_table_2668(v);
}

void	small_parse_table_2668(t_small_parse_table_array *v)
{
	v->a[53360] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53361] = actions(1954);
	v->a[53362] = 1;
	v->a[53363] = anon_sym_DOLLAR;
	v->a[53364] = actions(1956);
	v->a[53365] = 1;
	v->a[53366] = anon_sym_DQUOTE;
	v->a[53367] = actions(1958);
	v->a[53368] = 1;
	v->a[53369] = anon_sym_DOLLAR_LBRACE;
	v->a[53370] = actions(1960);
	v->a[53371] = 1;
	v->a[53372] = anon_sym_DOLLAR_LPAREN;
	v->a[53373] = actions(1962);
	v->a[53374] = 1;
	v->a[53375] = anon_sym_BQUOTE;
	v->a[53376] = actions(1964);
	v->a[53377] = 1;
	v->a[53378] = sym__bare_dollar;
	v->a[53379] = actions(1950);
	small_parse_table_2669(v);
}

void	small_parse_table_2669(t_small_parse_table_array *v)
{
	v->a[53380] = 5;
	v->a[53381] = aux_sym_concatenation_token1;
	v->a[53382] = sym_raw_string;
	v->a[53383] = sym_number;
	v->a[53384] = sym__comment_word;
	v->a[53385] = sym_word;
	v->a[53386] = state(458);
	v->a[53387] = 5;
	v->a[53388] = sym_arithmetic_expansion;
	v->a[53389] = sym_string;
	v->a[53390] = sym_simple_expansion;
	v->a[53391] = sym_expansion;
	v->a[53392] = sym_command_substitution;
	v->a[53393] = 12;
	v->a[53394] = actions(3);
	v->a[53395] = 1;
	v->a[53396] = sym_comment;
	v->a[53397] = actions(930);
	v->a[53398] = 1;
	v->a[53399] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2670(v);
}

/* EOF small_parse_table_533.c */
