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
	v->a[18300] = anon_sym_AMP_GT_GT;
	v->a[18301] = anon_sym_LT_AMP;
	v->a[18302] = anon_sym_GT_AMP;
	v->a[18303] = anon_sym_GT_PIPE;
	v->a[18304] = anon_sym_LT_AMP_DASH;
	v->a[18305] = anon_sym_GT_AMP_DASH;
	v->a[18306] = anon_sym_LT_LT;
	v->a[18307] = anon_sym_LT_LT_DASH;
	v->a[18308] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18309] = anon_sym_DOLLAR;
	v->a[18310] = sym__special_character;
	v->a[18311] = anon_sym_DQUOTE;
	v->a[18312] = sym_raw_string;
	v->a[18313] = aux_sym_number_token1;
	v->a[18314] = aux_sym_number_token2;
	v->a[18315] = anon_sym_DOLLAR_LBRACE;
	v->a[18316] = anon_sym_DOLLAR_LPAREN;
	v->a[18317] = anon_sym_BQUOTE;
	v->a[18318] = anon_sym_DOLLAR_BQUOTE;
	v->a[18319] = sym_word;
	small_parse_table_916(v);
}

void	small_parse_table_916(t_small_parse_table_array *v)
{
	v->a[18320] = 4;
	v->a[18321] = actions(57);
	v->a[18322] = 1;
	v->a[18323] = sym_comment;
	v->a[18324] = actions(1693);
	v->a[18325] = 1;
	v->a[18326] = anon_sym_BQUOTE;
	v->a[18327] = actions(1691);
	v->a[18328] = 16;
	v->a[18329] = sym_file_descriptor;
	v->a[18330] = sym_variable_name;
	v->a[18331] = sym_test_operator;
	v->a[18332] = sym__brace_start;
	v->a[18333] = anon_sym_LPAREN;
	v->a[18334] = anon_sym_LBRACE;
	v->a[18335] = anon_sym_GT_GT;
	v->a[18336] = anon_sym_AMP_GT_GT;
	v->a[18337] = anon_sym_GT_PIPE;
	v->a[18338] = anon_sym_LT_AMP_DASH;
	v->a[18339] = anon_sym_GT_AMP_DASH;
	small_parse_table_917(v);
}

void	small_parse_table_917(t_small_parse_table_array *v)
{
	v->a[18340] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18341] = anon_sym_DQUOTE;
	v->a[18342] = sym_raw_string;
	v->a[18343] = anon_sym_DOLLAR_LBRACE;
	v->a[18344] = anon_sym_DOLLAR_BQUOTE;
	v->a[18345] = actions(1689);
	v->a[18346] = 26;
	v->a[18347] = anon_sym_for;
	v->a[18348] = anon_sym_select;
	v->a[18349] = anon_sym_while;
	v->a[18350] = anon_sym_until;
	v->a[18351] = anon_sym_if;
	v->a[18352] = anon_sym_case;
	v->a[18353] = anon_sym_function;
	v->a[18354] = anon_sym_BANG;
	v->a[18355] = anon_sym_declare;
	v->a[18356] = anon_sym_typeset;
	v->a[18357] = anon_sym_export;
	v->a[18358] = anon_sym_readonly;
	v->a[18359] = anon_sym_local;
	small_parse_table_918(v);
}

void	small_parse_table_918(t_small_parse_table_array *v)
{
	v->a[18360] = anon_sym_unset;
	v->a[18361] = anon_sym_unsetenv;
	v->a[18362] = anon_sym_LT;
	v->a[18363] = anon_sym_GT;
	v->a[18364] = anon_sym_AMP_GT;
	v->a[18365] = anon_sym_LT_AMP;
	v->a[18366] = anon_sym_GT_AMP;
	v->a[18367] = anon_sym_DOLLAR;
	v->a[18368] = sym__special_character;
	v->a[18369] = aux_sym_number_token1;
	v->a[18370] = aux_sym_number_token2;
	v->a[18371] = anon_sym_DOLLAR_LPAREN;
	v->a[18372] = sym_word;
	v->a[18373] = 9;
	v->a[18374] = actions(3);
	v->a[18375] = 1;
	v->a[18376] = sym_comment;
	v->a[18377] = actions(2632);
	v->a[18378] = 1;
	v->a[18379] = aux_sym_heredoc_redirect_token1;
	small_parse_table_919(v);
}

void	small_parse_table_919(t_small_parse_table_array *v)
{
	v->a[18380] = actions(2714);
	v->a[18381] = 1;
	v->a[18382] = sym_variable_name;
	v->a[18383] = actions(2516);
	v->a[18384] = 2;
	v->a[18385] = anon_sym_PIPE;
	v->a[18386] = anon_sym_PIPE_AMP;
	v->a[18387] = state(1989);
	v->a[18388] = 2;
	v->a[18389] = sym_variable_assignment;
	v->a[18390] = aux_sym_variable_assignments_repeat1;
	v->a[18391] = actions(2526);
	v->a[18392] = 3;
	v->a[18393] = sym_file_descriptor;
	v->a[18394] = sym_test_operator;
	v->a[18395] = sym__brace_start;
	v->a[18396] = state(1983);
	v->a[18397] = 3;
	v->a[18398] = sym_file_redirect;
	v->a[18399] = sym_heredoc_redirect;
	small_parse_table_920(v);
}

/* EOF small_parse_table_183.c */
