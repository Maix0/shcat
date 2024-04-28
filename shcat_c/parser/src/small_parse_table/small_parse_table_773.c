/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_773.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3865(t_small_parse_table_array *v)
{
	v->a[77300] = sym__concat;
	v->a[77301] = sym_variable_name;
	v->a[77302] = sym_test_operator;
	v->a[77303] = sym__brace_start;
	v->a[77304] = aux_sym_heredoc_redirect_token1;
	v->a[77305] = actions(1296);
	v->a[77306] = 39;
	v->a[77307] = anon_sym_LPAREN_LPAREN;
	v->a[77308] = anon_sym_SEMI;
	v->a[77309] = anon_sym_PIPE_PIPE;
	v->a[77310] = anon_sym_AMP_AMP;
	v->a[77311] = anon_sym_PIPE;
	v->a[77312] = anon_sym_AMP;
	v->a[77313] = anon_sym_LT;
	v->a[77314] = anon_sym_GT;
	v->a[77315] = anon_sym_LT_LT;
	v->a[77316] = anon_sym_GT_GT;
	v->a[77317] = anon_sym_RPAREN;
	v->a[77318] = anon_sym_SEMI_SEMI;
	v->a[77319] = anon_sym_PIPE_AMP;
	small_parse_table_3866(v);
}

void	small_parse_table_3866(t_small_parse_table_array *v)
{
	v->a[77320] = anon_sym_AMP_GT;
	v->a[77321] = anon_sym_AMP_GT_GT;
	v->a[77322] = anon_sym_LT_AMP;
	v->a[77323] = anon_sym_GT_AMP;
	v->a[77324] = anon_sym_GT_PIPE;
	v->a[77325] = anon_sym_LT_AMP_DASH;
	v->a[77326] = anon_sym_GT_AMP_DASH;
	v->a[77327] = anon_sym_LT_LT_DASH;
	v->a[77328] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77329] = anon_sym_DOLLAR_LBRACK;
	v->a[77330] = aux_sym_concatenation_token1;
	v->a[77331] = anon_sym_DOLLAR;
	v->a[77332] = sym__special_character;
	v->a[77333] = anon_sym_DQUOTE;
	v->a[77334] = sym_raw_string;
	v->a[77335] = sym_ansi_c_string;
	v->a[77336] = aux_sym_number_token1;
	v->a[77337] = aux_sym_number_token2;
	v->a[77338] = anon_sym_DOLLAR_LBRACE;
	v->a[77339] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3867(v);
}

void	small_parse_table_3867(t_small_parse_table_array *v)
{
	v->a[77340] = anon_sym_BQUOTE;
	v->a[77341] = anon_sym_DOLLAR_BQUOTE;
	v->a[77342] = anon_sym_LT_LPAREN;
	v->a[77343] = anon_sym_GT_LPAREN;
	v->a[77344] = aux_sym__simple_variable_name_token1;
	v->a[77345] = sym_word;
	v->a[77346] = 6;
	v->a[77347] = actions(3);
	v->a[77348] = 1;
	v->a[77349] = sym_comment;
	v->a[77350] = actions(5758);
	v->a[77351] = 1;
	v->a[77352] = aux_sym_concatenation_token1;
	v->a[77353] = actions(5839);
	v->a[77354] = 1;
	v->a[77355] = sym__concat;
	v->a[77356] = state(1659);
	v->a[77357] = 1;
	v->a[77358] = aux_sym_concatenation_repeat1;
	v->a[77359] = actions(1288);
	small_parse_table_3868(v);
}

void	small_parse_table_3868(t_small_parse_table_array *v)
{
	v->a[77360] = 4;
	v->a[77361] = sym_file_descriptor;
	v->a[77362] = sym_test_operator;
	v->a[77363] = sym__brace_start;
	v->a[77364] = aux_sym_heredoc_redirect_token1;
	v->a[77365] = actions(1286);
	v->a[77366] = 38;
	v->a[77367] = anon_sym_LPAREN_LPAREN;
	v->a[77368] = anon_sym_SEMI;
	v->a[77369] = anon_sym_PIPE_PIPE;
	v->a[77370] = anon_sym_AMP_AMP;
	v->a[77371] = anon_sym_PIPE;
	v->a[77372] = anon_sym_AMP;
	v->a[77373] = anon_sym_LT;
	v->a[77374] = anon_sym_GT;
	v->a[77375] = anon_sym_LT_LT;
	v->a[77376] = anon_sym_GT_GT;
	v->a[77377] = anon_sym_SEMI_SEMI;
	v->a[77378] = anon_sym_SEMI_AMP;
	v->a[77379] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_3869(v);
}

void	small_parse_table_3869(t_small_parse_table_array *v)
{
	v->a[77380] = anon_sym_PIPE_AMP;
	v->a[77381] = anon_sym_AMP_GT;
	v->a[77382] = anon_sym_AMP_GT_GT;
	v->a[77383] = anon_sym_LT_AMP;
	v->a[77384] = anon_sym_GT_AMP;
	v->a[77385] = anon_sym_GT_PIPE;
	v->a[77386] = anon_sym_LT_AMP_DASH;
	v->a[77387] = anon_sym_GT_AMP_DASH;
	v->a[77388] = anon_sym_LT_LT_DASH;
	v->a[77389] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77390] = anon_sym_DOLLAR_LBRACK;
	v->a[77391] = anon_sym_DOLLAR;
	v->a[77392] = sym__special_character;
	v->a[77393] = anon_sym_DQUOTE;
	v->a[77394] = sym_raw_string;
	v->a[77395] = sym_ansi_c_string;
	v->a[77396] = aux_sym_number_token1;
	v->a[77397] = aux_sym_number_token2;
	v->a[77398] = anon_sym_DOLLAR_LBRACE;
	v->a[77399] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3870(v);
}

/* EOF small_parse_table_773.c */
