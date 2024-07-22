/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_483.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2415(t_small_parse_table_array *v)
{
	v->a[48300] = state(1877);
	v->a[48301] = 2;
	v->a[48302] = sym_concatenation;
	v->a[48303] = sym__extglob_blob;
	v->a[48304] = actions(1716);
	v->a[48305] = 3;
	v->a[48306] = sym_raw_string;
	v->a[48307] = sym_number;
	v->a[48308] = sym_word;
	v->a[48309] = actions(1722);
	v->a[48310] = 3;
	v->a[48311] = anon_sym_SEMI_SEMI;
	v->a[48312] = aux_sym_heredoc_redirect_token1;
	v->a[48313] = anon_sym_SEMI;
	v->a[48314] = state(1772);
	v->a[48315] = 5;
	v->a[48316] = sym_arithmetic_expansion;
	v->a[48317] = sym_string;
	v->a[48318] = sym_simple_expansion;
	v->a[48319] = sym_expansion;
	small_parse_table_2416(v);
}

void	small_parse_table_2416(t_small_parse_table_array *v)
{
	v->a[48320] = sym_command_substitution;
	v->a[48321] = 4;
	v->a[48322] = actions(3);
	v->a[48323] = 1;
	v->a[48324] = sym_comment;
	v->a[48325] = actions(1410);
	v->a[48326] = 1;
	v->a[48327] = anon_sym_BQUOTE;
	v->a[48328] = actions(1412);
	v->a[48329] = 2;
	v->a[48330] = sym_file_descriptor;
	v->a[48331] = sym_variable_name;
	v->a[48332] = actions(1408);
	v->a[48333] = 23;
	v->a[48334] = anon_sym_for;
	v->a[48335] = anon_sym_while;
	v->a[48336] = anon_sym_until;
	v->a[48337] = anon_sym_if;
	v->a[48338] = anon_sym_case;
	v->a[48339] = anon_sym_LPAREN;
	small_parse_table_2417(v);
}

void	small_parse_table_2417(t_small_parse_table_array *v)
{
	v->a[48340] = anon_sym_LBRACE;
	v->a[48341] = anon_sym_BANG;
	v->a[48342] = anon_sym_LT;
	v->a[48343] = anon_sym_GT;
	v->a[48344] = anon_sym_GT_GT;
	v->a[48345] = anon_sym_LT_AMP;
	v->a[48346] = anon_sym_GT_AMP;
	v->a[48347] = anon_sym_GT_PIPE;
	v->a[48348] = anon_sym_LT_GT;
	v->a[48349] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48350] = anon_sym_DOLLAR;
	v->a[48351] = anon_sym_DQUOTE;
	v->a[48352] = sym_raw_string;
	v->a[48353] = sym_number;
	v->a[48354] = anon_sym_DOLLAR_LBRACE;
	v->a[48355] = anon_sym_DOLLAR_LPAREN;
	v->a[48356] = sym_word;
	v->a[48357] = 4;
	v->a[48358] = actions(3);
	v->a[48359] = 1;
	small_parse_table_2418(v);
}

void	small_parse_table_2418(t_small_parse_table_array *v)
{
	v->a[48360] = sym_comment;
	v->a[48361] = actions(1410);
	v->a[48362] = 1;
	v->a[48363] = anon_sym_BQUOTE;
	v->a[48364] = actions(1412);
	v->a[48365] = 2;
	v->a[48366] = sym_file_descriptor;
	v->a[48367] = sym_variable_name;
	v->a[48368] = actions(1408);
	v->a[48369] = 23;
	v->a[48370] = anon_sym_for;
	v->a[48371] = anon_sym_while;
	v->a[48372] = anon_sym_until;
	v->a[48373] = anon_sym_if;
	v->a[48374] = anon_sym_case;
	v->a[48375] = anon_sym_LPAREN;
	v->a[48376] = anon_sym_LBRACE;
	v->a[48377] = anon_sym_BANG;
	v->a[48378] = anon_sym_LT;
	v->a[48379] = anon_sym_GT;
	small_parse_table_2419(v);
}

void	small_parse_table_2419(t_small_parse_table_array *v)
{
	v->a[48380] = anon_sym_GT_GT;
	v->a[48381] = anon_sym_LT_AMP;
	v->a[48382] = anon_sym_GT_AMP;
	v->a[48383] = anon_sym_GT_PIPE;
	v->a[48384] = anon_sym_LT_GT;
	v->a[48385] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48386] = anon_sym_DOLLAR;
	v->a[48387] = anon_sym_DQUOTE;
	v->a[48388] = sym_raw_string;
	v->a[48389] = sym_number;
	v->a[48390] = anon_sym_DOLLAR_LBRACE;
	v->a[48391] = anon_sym_DOLLAR_LPAREN;
	v->a[48392] = sym_word;
	v->a[48393] = 4;
	v->a[48394] = actions(3);
	v->a[48395] = 1;
	v->a[48396] = sym_comment;
	v->a[48397] = actions(1410);
	v->a[48398] = 1;
	v->a[48399] = anon_sym_BQUOTE;
	small_parse_table_2420(v);
}

/* EOF small_parse_table_483.c */
