/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1483.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7415(t_small_parse_table_array *v)
{
	v->a[148300] = anon_sym_PLUS;
	v->a[148301] = anon_sym_DASH;
	v->a[148302] = anon_sym_STAR;
	v->a[148303] = anon_sym_SLASH;
	v->a[148304] = anon_sym_PERCENT;
	v->a[148305] = anon_sym_STAR_STAR;
	v->a[148306] = actions(6862);
	v->a[148307] = 24;
	v->a[148308] = sym__concat;
	v->a[148309] = sym_test_operator;
	v->a[148310] = anon_sym_PLUS_PLUS;
	v->a[148311] = anon_sym_DASH_DASH;
	v->a[148312] = anon_sym_PLUS_EQ;
	v->a[148313] = anon_sym_DASH_EQ;
	v->a[148314] = anon_sym_STAR_EQ;
	v->a[148315] = anon_sym_SLASH_EQ;
	v->a[148316] = anon_sym_PERCENT_EQ;
	v->a[148317] = anon_sym_STAR_STAR_EQ;
	v->a[148318] = anon_sym_LT_LT_EQ;
	v->a[148319] = anon_sym_GT_GT_EQ;
	small_parse_table_7416(v);
}

void	small_parse_table_7416(t_small_parse_table_array *v)
{
	v->a[148320] = anon_sym_AMP_EQ;
	v->a[148321] = anon_sym_CARET_EQ;
	v->a[148322] = anon_sym_PIPE_EQ;
	v->a[148323] = anon_sym_PIPE_PIPE;
	v->a[148324] = anon_sym_AMP_AMP;
	v->a[148325] = anon_sym_EQ_EQ;
	v->a[148326] = anon_sym_BANG_EQ;
	v->a[148327] = anon_sym_LT_EQ;
	v->a[148328] = anon_sym_GT_EQ;
	v->a[148329] = anon_sym_RBRACK;
	v->a[148330] = anon_sym_EQ_TILDE;
	v->a[148331] = anon_sym_QMARK;
	v->a[148332] = 5;
	v->a[148333] = actions(71);
	v->a[148334] = 1;
	v->a[148335] = sym_comment;
	v->a[148336] = actions(7057);
	v->a[148337] = 1;
	v->a[148338] = sym__special_character;
	v->a[148339] = state(2806);
	small_parse_table_7417(v);
}

void	small_parse_table_7417(t_small_parse_table_array *v)
{
	v->a[148340] = 1;
	v->a[148341] = aux_sym__literal_repeat1;
	v->a[148342] = actions(1362);
	v->a[148343] = 12;
	v->a[148344] = anon_sym_PIPE;
	v->a[148345] = anon_sym_LT;
	v->a[148346] = anon_sym_GT;
	v->a[148347] = anon_sym_LT_LT;
	v->a[148348] = anon_sym_AMP_GT;
	v->a[148349] = anon_sym_LT_AMP;
	v->a[148350] = anon_sym_GT_AMP;
	v->a[148351] = anon_sym_DOLLAR;
	v->a[148352] = aux_sym_number_token1;
	v->a[148353] = aux_sym_number_token2;
	v->a[148354] = anon_sym_DOLLAR_LPAREN;
	v->a[148355] = sym_word;
	v->a[148356] = actions(1364);
	v->a[148357] = 24;
	v->a[148358] = sym_file_descriptor;
	v->a[148359] = sym_test_operator;
	small_parse_table_7418(v);
}

void	small_parse_table_7418(t_small_parse_table_array *v)
{
	v->a[148360] = sym__brace_start;
	v->a[148361] = anon_sym_LPAREN_LPAREN;
	v->a[148362] = anon_sym_PIPE_PIPE;
	v->a[148363] = anon_sym_AMP_AMP;
	v->a[148364] = anon_sym_GT_GT;
	v->a[148365] = anon_sym_PIPE_AMP;
	v->a[148366] = anon_sym_RBRACK;
	v->a[148367] = anon_sym_AMP_GT_GT;
	v->a[148368] = anon_sym_GT_PIPE;
	v->a[148369] = anon_sym_LT_AMP_DASH;
	v->a[148370] = anon_sym_GT_AMP_DASH;
	v->a[148371] = anon_sym_LT_LT_DASH;
	v->a[148372] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[148373] = anon_sym_DOLLAR_LBRACK;
	v->a[148374] = anon_sym_DQUOTE;
	v->a[148375] = sym_raw_string;
	v->a[148376] = sym_ansi_c_string;
	v->a[148377] = anon_sym_DOLLAR_LBRACE;
	v->a[148378] = anon_sym_BQUOTE;
	v->a[148379] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_7419(v);
}

void	small_parse_table_7419(t_small_parse_table_array *v)
{
	v->a[148380] = anon_sym_LT_LPAREN;
	v->a[148381] = anon_sym_GT_LPAREN;
	v->a[148382] = 3;
	v->a[148383] = actions(71);
	v->a[148384] = 1;
	v->a[148385] = sym_comment;
	v->a[148386] = actions(5770);
	v->a[148387] = 13;
	v->a[148388] = anon_sym_PIPE;
	v->a[148389] = anon_sym_LT;
	v->a[148390] = anon_sym_GT;
	v->a[148391] = anon_sym_LT_LT;
	v->a[148392] = anon_sym_AMP_GT;
	v->a[148393] = anon_sym_LT_AMP;
	v->a[148394] = anon_sym_GT_AMP;
	v->a[148395] = anon_sym_DOLLAR;
	v->a[148396] = aux_sym_number_token1;
	v->a[148397] = aux_sym_number_token2;
	v->a[148398] = anon_sym_DOLLAR_LPAREN;
	v->a[148399] = aux_sym__simple_variable_name_token1;
	small_parse_table_7420(v);
}

/* EOF small_parse_table_1483.c */
