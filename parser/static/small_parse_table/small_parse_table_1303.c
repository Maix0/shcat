/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1303.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6515(t_small_parse_table_array *v)
{
	v->a[130300] = sym__special_character;
	v->a[130301] = state(2830);
	v->a[130302] = 1;
	v->a[130303] = aux_sym__literal_repeat1;
	v->a[130304] = actions(3549);
	v->a[130305] = 2;
	v->a[130306] = sym_file_descriptor;
	v->a[130307] = aux_sym_heredoc_redirect_token1;
	v->a[130308] = actions(3547);
	v->a[130309] = 12;
	v->a[130310] = anon_sym_AMP_AMP;
	v->a[130311] = anon_sym_PIPE_PIPE;
	v->a[130312] = anon_sym_LT;
	v->a[130313] = anon_sym_GT;
	v->a[130314] = anon_sym_GT_GT;
	v->a[130315] = anon_sym_AMP_GT;
	v->a[130316] = anon_sym_AMP_GT_GT;
	v->a[130317] = anon_sym_LT_AMP;
	v->a[130318] = anon_sym_GT_AMP;
	v->a[130319] = anon_sym_GT_PIPE;
	small_parse_table_6516(v);
}

void	small_parse_table_6516(t_small_parse_table_array *v)
{
	v->a[130320] = anon_sym_LT_AMP_DASH;
	v->a[130321] = anon_sym_GT_AMP_DASH;
	v->a[130322] = 3;
	v->a[130323] = actions(57);
	v->a[130324] = 1;
	v->a[130325] = sym_comment;
	v->a[130326] = actions(7438);
	v->a[130327] = 5;
	v->a[130328] = anon_sym_DOLLAR;
	v->a[130329] = aux_sym_number_token1;
	v->a[130330] = aux_sym_number_token2;
	v->a[130331] = anon_sym_DOLLAR_LPAREN;
	v->a[130332] = sym_word;
	v->a[130333] = actions(7440);
	v->a[130334] = 11;
	v->a[130335] = sym_test_operator;
	v->a[130336] = sym_extglob_pattern;
	v->a[130337] = sym__brace_start;
	v->a[130338] = anon_sym_LPAREN;
	v->a[130339] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_6517(v);
}

void	small_parse_table_6517(t_small_parse_table_array *v)
{
	v->a[130340] = sym__special_character;
	v->a[130341] = anon_sym_DQUOTE;
	v->a[130342] = sym_raw_string;
	v->a[130343] = anon_sym_DOLLAR_LBRACE;
	v->a[130344] = anon_sym_BQUOTE;
	v->a[130345] = anon_sym_DOLLAR_BQUOTE;
	v->a[130346] = 13;
	v->a[130347] = actions(57);
	v->a[130348] = 1;
	v->a[130349] = sym_comment;
	v->a[130350] = actions(4340);
	v->a[130351] = 1;
	v->a[130352] = anon_sym_DOLLAR;
	v->a[130353] = actions(4558);
	v->a[130354] = 1;
	v->a[130355] = anon_sym_BQUOTE;
	v->a[130356] = actions(4560);
	v->a[130357] = 1;
	v->a[130358] = anon_sym_DOLLAR_BQUOTE;
	v->a[130359] = actions(7453);
	small_parse_table_6518(v);
}

void	small_parse_table_6518(t_small_parse_table_array *v)
{
	v->a[130360] = 1;
	v->a[130361] = anon_sym_DQUOTE;
	v->a[130362] = actions(7455);
	v->a[130363] = 1;
	v->a[130364] = anon_sym_DOLLAR_LBRACE;
	v->a[130365] = actions(7457);
	v->a[130366] = 1;
	v->a[130367] = anon_sym_RBRACE3;
	v->a[130368] = actions(7459);
	v->a[130369] = 1;
	v->a[130370] = anon_sym_DOLLAR_LPAREN;
	v->a[130371] = actions(7461);
	v->a[130372] = 1;
	v->a[130373] = sym_variable_name;
	v->a[130374] = state(3898);
	v->a[130375] = 1;
	v->a[130376] = sym__concatenation_in_expansion;
	v->a[130377] = state(3450);
	v->a[130378] = 2;
	v->a[130379] = sym_string;
	small_parse_table_6519(v);
}

void	small_parse_table_6519(t_small_parse_table_array *v)
{
	v->a[130380] = sym_expansion;
	v->a[130381] = state(3474);
	v->a[130382] = 2;
	v->a[130383] = sym_simple_expansion;
	v->a[130384] = sym_command_substitution;
	v->a[130385] = actions(7451);
	v->a[130386] = 3;
	v->a[130387] = sym__expansion_word;
	v->a[130388] = sym_raw_string;
	v->a[130389] = sym_word;
	v->a[130390] = 3;
	v->a[130391] = actions(3);
	v->a[130392] = 1;
	v->a[130393] = sym_comment;
	v->a[130394] = actions(3117);
	v->a[130395] = 3;
	v->a[130396] = sym_file_descriptor;
	v->a[130397] = sym__concat;
	v->a[130398] = aux_sym_heredoc_redirect_token1;
	v->a[130399] = actions(3115);
	small_parse_table_6520(v);
}

/* EOF small_parse_table_1303.c */
