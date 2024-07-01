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
	v->a[53300] = 2;
	v->a[53301] = anon_sym_PLUS_PLUS;
	v->a[53302] = anon_sym_DASH_DASH;
	v->a[53303] = actions(1752);
	v->a[53304] = 2;
	v->a[53305] = anon_sym_DASH2;
	v->a[53306] = anon_sym_PLUS2;
	v->a[53307] = actions(1760);
	v->a[53308] = 2;
	v->a[53309] = sym_number;
	v->a[53310] = aux_sym__simple_variable_name_token1;
	v->a[53311] = state(271);
	v->a[53312] = 3;
	v->a[53313] = sym_string;
	v->a[53314] = sym_simple_expansion;
	v->a[53315] = sym_expansion;
	v->a[53316] = state(340);
	v->a[53317] = 8;
	v->a[53318] = sym__arithmetic_expression;
	v->a[53319] = sym_arithmetic_literal;
	small_parse_table_2666(v);
}

void	small_parse_table_2666(t_small_parse_table_array *v)
{
	v->a[53320] = sym_arithmetic_binary_expression;
	v->a[53321] = sym_arithmetic_ternary_expression;
	v->a[53322] = sym_arithmetic_unary_expression;
	v->a[53323] = sym_arithmetic_postfix_expression;
	v->a[53324] = sym_arithmetic_parenthesized_expression;
	v->a[53325] = sym_command_substitution;
	v->a[53326] = 3;
	v->a[53327] = actions(3);
	v->a[53328] = 1;
	v->a[53329] = sym_comment;
	v->a[53330] = actions(1009);
	v->a[53331] = 3;
	v->a[53332] = sym_file_descriptor;
	v->a[53333] = sym__concat;
	v->a[53334] = sym__bare_dollar;
	v->a[53335] = actions(1007);
	v->a[53336] = 24;
	v->a[53337] = anon_sym_LPAREN;
	v->a[53338] = anon_sym_PIPE;
	v->a[53339] = anon_sym_AMP_AMP;
	small_parse_table_2667(v);
}

void	small_parse_table_2667(t_small_parse_table_array *v)
{
	v->a[53340] = anon_sym_PIPE_PIPE;
	v->a[53341] = anon_sym_LT;
	v->a[53342] = anon_sym_GT;
	v->a[53343] = anon_sym_GT_GT;
	v->a[53344] = anon_sym_LT_AMP;
	v->a[53345] = anon_sym_GT_AMP;
	v->a[53346] = anon_sym_GT_PIPE;
	v->a[53347] = anon_sym_LT_AMP_DASH;
	v->a[53348] = anon_sym_GT_AMP_DASH;
	v->a[53349] = anon_sym_LT_LT;
	v->a[53350] = anon_sym_LT_LT_DASH;
	v->a[53351] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53352] = aux_sym_concatenation_token1;
	v->a[53353] = anon_sym_DOLLAR;
	v->a[53354] = anon_sym_DQUOTE;
	v->a[53355] = sym_raw_string;
	v->a[53356] = sym_number;
	v->a[53357] = anon_sym_DOLLAR_LBRACE;
	v->a[53358] = anon_sym_DOLLAR_LPAREN;
	v->a[53359] = anon_sym_BQUOTE;
	small_parse_table_2668(v);
}

void	small_parse_table_2668(t_small_parse_table_array *v)
{
	v->a[53360] = sym_word;
	v->a[53361] = 4;
	v->a[53362] = actions(3);
	v->a[53363] = 1;
	v->a[53364] = sym_comment;
	v->a[53365] = actions(1605);
	v->a[53366] = 1;
	v->a[53367] = anon_sym_BQUOTE;
	v->a[53368] = actions(1577);
	v->a[53369] = 2;
	v->a[53370] = sym_file_descriptor;
	v->a[53371] = sym_variable_name;
	v->a[53372] = actions(1573);
	v->a[53373] = 24;
	v->a[53374] = anon_sym_for;
	v->a[53375] = anon_sym_while;
	v->a[53376] = anon_sym_until;
	v->a[53377] = anon_sym_if;
	v->a[53378] = anon_sym_case;
	v->a[53379] = anon_sym_LPAREN;
	small_parse_table_2669(v);
}

void	small_parse_table_2669(t_small_parse_table_array *v)
{
	v->a[53380] = anon_sym_LBRACE;
	v->a[53381] = anon_sym_BANG;
	v->a[53382] = anon_sym_LT;
	v->a[53383] = anon_sym_GT;
	v->a[53384] = anon_sym_GT_GT;
	v->a[53385] = anon_sym_LT_AMP;
	v->a[53386] = anon_sym_GT_AMP;
	v->a[53387] = anon_sym_GT_PIPE;
	v->a[53388] = anon_sym_LT_AMP_DASH;
	v->a[53389] = anon_sym_GT_AMP_DASH;
	v->a[53390] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53391] = anon_sym_DOLLAR;
	v->a[53392] = anon_sym_DQUOTE;
	v->a[53393] = sym_raw_string;
	v->a[53394] = sym_number;
	v->a[53395] = anon_sym_DOLLAR_LBRACE;
	v->a[53396] = anon_sym_DOLLAR_LPAREN;
	v->a[53397] = sym_word;
	v->a[53398] = 16;
	v->a[53399] = actions(870);
	small_parse_table_2670(v);
}

/* EOF small_parse_table_533.c */
