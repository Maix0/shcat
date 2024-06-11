/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_183.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_915(t_small_parse_table_array *v)
{
	v->a[18300] = 30;
	v->a[18301] = actions(3);
	v->a[18302] = 1;
	v->a[18303] = sym_comment;
	v->a[18304] = actions(9);
	v->a[18305] = 1;
	v->a[18306] = anon_sym_for;
	v->a[18307] = actions(13);
	v->a[18308] = 1;
	v->a[18309] = anon_sym_if;
	v->a[18310] = actions(15);
	v->a[18311] = 1;
	v->a[18312] = anon_sym_case;
	v->a[18313] = actions(17);
	v->a[18314] = 1;
	v->a[18315] = anon_sym_LPAREN;
	v->a[18316] = actions(19);
	v->a[18317] = 1;
	v->a[18318] = anon_sym_LBRACE;
	v->a[18319] = actions(59);
	small_parse_table_916(v);
}

void	small_parse_table_916(t_small_parse_table_array *v)
{
	v->a[18320] = 1;
	v->a[18321] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18322] = actions(61);
	v->a[18323] = 1;
	v->a[18324] = anon_sym_DOLLAR;
	v->a[18325] = actions(63);
	v->a[18326] = 1;
	v->a[18327] = anon_sym_DQUOTE;
	v->a[18328] = actions(67);
	v->a[18329] = 1;
	v->a[18330] = anon_sym_DOLLAR_LBRACE;
	v->a[18331] = actions(69);
	v->a[18332] = 1;
	v->a[18333] = anon_sym_DOLLAR_LPAREN;
	v->a[18334] = actions(71);
	v->a[18335] = 1;
	v->a[18336] = anon_sym_BQUOTE;
	v->a[18337] = actions(73);
	v->a[18338] = 1;
	v->a[18339] = sym_file_descriptor;
	small_parse_table_917(v);
}

void	small_parse_table_917(t_small_parse_table_array *v)
{
	v->a[18340] = actions(75);
	v->a[18341] = 1;
	v->a[18342] = sym_variable_name;
	v->a[18343] = actions(236);
	v->a[18344] = 1;
	v->a[18345] = sym_word;
	v->a[18346] = actions(238);
	v->a[18347] = 1;
	v->a[18348] = anon_sym_BANG;
	v->a[18349] = state(189);
	v->a[18350] = 1;
	v->a[18351] = sym_command_name;
	v->a[18352] = state(295);
	v->a[18353] = 1;
	v->a[18354] = sym_variable_assignment;
	v->a[18355] = state(647);
	v->a[18356] = 1;
	v->a[18357] = sym_concatenation;
	v->a[18358] = state(746);
	v->a[18359] = 1;
	small_parse_table_918(v);
}

void	small_parse_table_918(t_small_parse_table_array *v)
{
	v->a[18360] = aux_sym_command_repeat1;
	v->a[18361] = state(905);
	v->a[18362] = 1;
	v->a[18363] = sym_file_redirect;
	v->a[18364] = state(1249);
	v->a[18365] = 1;
	v->a[18366] = sym_pipeline;
	v->a[18367] = state(1429);
	v->a[18368] = 1;
	v->a[18369] = aux_sym_redirected_statement_repeat2;
	v->a[18370] = state(2271);
	v->a[18371] = 1;
	v->a[18372] = sym__statement_not_pipeline;
	v->a[18373] = actions(11);
	v->a[18374] = 2;
	v->a[18375] = anon_sym_while;
	v->a[18376] = anon_sym_until;
	v->a[18377] = actions(57);
	v->a[18378] = 2;
	v->a[18379] = anon_sym_LT_AMP_DASH;
	small_parse_table_919(v);
}

void	small_parse_table_919(t_small_parse_table_array *v)
{
	v->a[18380] = anon_sym_GT_AMP_DASH;
	v->a[18381] = actions(65);
	v->a[18382] = 2;
	v->a[18383] = sym_raw_string;
	v->a[18384] = sym_number;
	v->a[18385] = state(394);
	v->a[18386] = 5;
	v->a[18387] = sym_arithmetic_expansion;
	v->a[18388] = sym_string;
	v->a[18389] = sym_simple_expansion;
	v->a[18390] = sym_expansion;
	v->a[18391] = sym_command_substitution;
	v->a[18392] = actions(55);
	v->a[18393] = 8;
	v->a[18394] = anon_sym_LT;
	v->a[18395] = anon_sym_GT;
	v->a[18396] = anon_sym_GT_GT;
	v->a[18397] = anon_sym_AMP_GT;
	v->a[18398] = anon_sym_AMP_GT_GT;
	v->a[18399] = anon_sym_LT_AMP;
	small_parse_table_920(v);
}

/* EOF small_parse_table_183.c */
