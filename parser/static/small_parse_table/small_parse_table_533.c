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
	v->a[53300] = actions(1782);
	v->a[53301] = 1;
	v->a[53302] = anon_sym_BQUOTE;
	v->a[53303] = state(1730);
	v->a[53304] = 1;
	v->a[53305] = sym_concatenation;
	v->a[53306] = actions(1770);
	v->a[53307] = 3;
	v->a[53308] = sym_raw_string;
	v->a[53309] = sym_number;
	v->a[53310] = sym_word;
	v->a[53311] = state(1486);
	v->a[53312] = 5;
	v->a[53313] = sym_arithmetic_expansion;
	v->a[53314] = sym_string;
	v->a[53315] = sym_simple_expansion;
	v->a[53316] = sym_expansion;
	v->a[53317] = sym_command_substitution;
	v->a[53318] = actions(756);
	v->a[53319] = 13;
	small_parse_table_2666(v);
}

void	small_parse_table_2666(t_small_parse_table_array *v)
{
	v->a[53320] = anon_sym_AMP_AMP;
	v->a[53321] = anon_sym_PIPE_PIPE;
	v->a[53322] = anon_sym_LT;
	v->a[53323] = anon_sym_GT;
	v->a[53324] = anon_sym_GT_GT;
	v->a[53325] = anon_sym_AMP_GT;
	v->a[53326] = anon_sym_AMP_GT_GT;
	v->a[53327] = anon_sym_LT_AMP;
	v->a[53328] = anon_sym_GT_AMP;
	v->a[53329] = anon_sym_GT_PIPE;
	v->a[53330] = anon_sym_LT_AMP_DASH;
	v->a[53331] = anon_sym_GT_AMP_DASH;
	v->a[53332] = aux_sym_heredoc_redirect_token1;
	v->a[53333] = 4;
	v->a[53334] = actions(3);
	v->a[53335] = 1;
	v->a[53336] = sym_comment;
	v->a[53337] = actions(1522);
	v->a[53338] = 1;
	v->a[53339] = anon_sym_BQUOTE;
	small_parse_table_2667(v);
}

void	small_parse_table_2667(t_small_parse_table_array *v)
{
	v->a[53340] = actions(1524);
	v->a[53341] = 2;
	v->a[53342] = sym_file_descriptor;
	v->a[53343] = sym_variable_name;
	v->a[53344] = actions(1520);
	v->a[53345] = 26;
	v->a[53346] = anon_sym_for;
	v->a[53347] = anon_sym_while;
	v->a[53348] = anon_sym_until;
	v->a[53349] = anon_sym_if;
	v->a[53350] = anon_sym_case;
	v->a[53351] = anon_sym_LPAREN;
	v->a[53352] = anon_sym_LBRACE;
	v->a[53353] = anon_sym_BANG;
	v->a[53354] = anon_sym_LT;
	v->a[53355] = anon_sym_GT;
	v->a[53356] = anon_sym_GT_GT;
	v->a[53357] = anon_sym_AMP_GT;
	v->a[53358] = anon_sym_AMP_GT_GT;
	v->a[53359] = anon_sym_LT_AMP;
	small_parse_table_2668(v);
}

void	small_parse_table_2668(t_small_parse_table_array *v)
{
	v->a[53360] = anon_sym_GT_AMP;
	v->a[53361] = anon_sym_GT_PIPE;
	v->a[53362] = anon_sym_LT_AMP_DASH;
	v->a[53363] = anon_sym_GT_AMP_DASH;
	v->a[53364] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53365] = anon_sym_DOLLAR;
	v->a[53366] = anon_sym_DQUOTE;
	v->a[53367] = sym_raw_string;
	v->a[53368] = sym_number;
	v->a[53369] = anon_sym_DOLLAR_LBRACE;
	v->a[53370] = anon_sym_DOLLAR_LPAREN;
	v->a[53371] = sym_word;
	v->a[53372] = 4;
	v->a[53373] = actions(3);
	v->a[53374] = 1;
	v->a[53375] = sym_comment;
	v->a[53376] = actions(1522);
	v->a[53377] = 1;
	v->a[53378] = anon_sym_BQUOTE;
	v->a[53379] = actions(1524);
	small_parse_table_2669(v);
}

void	small_parse_table_2669(t_small_parse_table_array *v)
{
	v->a[53380] = 2;
	v->a[53381] = sym_file_descriptor;
	v->a[53382] = sym_variable_name;
	v->a[53383] = actions(1520);
	v->a[53384] = 26;
	v->a[53385] = anon_sym_for;
	v->a[53386] = anon_sym_while;
	v->a[53387] = anon_sym_until;
	v->a[53388] = anon_sym_if;
	v->a[53389] = anon_sym_case;
	v->a[53390] = anon_sym_LPAREN;
	v->a[53391] = anon_sym_LBRACE;
	v->a[53392] = anon_sym_BANG;
	v->a[53393] = anon_sym_LT;
	v->a[53394] = anon_sym_GT;
	v->a[53395] = anon_sym_GT_GT;
	v->a[53396] = anon_sym_AMP_GT;
	v->a[53397] = anon_sym_AMP_GT_GT;
	v->a[53398] = anon_sym_LT_AMP;
	v->a[53399] = anon_sym_GT_AMP;
	small_parse_table_2670(v);
}

/* EOF small_parse_table_533.c */
