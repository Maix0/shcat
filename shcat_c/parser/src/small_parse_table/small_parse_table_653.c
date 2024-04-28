/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_653.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3265(t_small_parse_table_array *v)
{
	v->a[65300] = actions(5662);
	v->a[65301] = 1;
	v->a[65302] = sym__special_character;
	v->a[65303] = state(1433);
	v->a[65304] = 1;
	v->a[65305] = aux_sym__literal_repeat1;
	v->a[65306] = actions(5723);
	v->a[65307] = 5;
	v->a[65308] = sym_file_descriptor;
	v->a[65309] = sym_variable_name;
	v->a[65310] = sym_test_operator;
	v->a[65311] = sym__brace_start;
	v->a[65312] = aux_sym_heredoc_redirect_token1;
	v->a[65313] = actions(5721);
	v->a[65314] = 39;
	v->a[65315] = anon_sym_LPAREN_LPAREN;
	v->a[65316] = anon_sym_SEMI;
	v->a[65317] = anon_sym_PIPE_PIPE;
	v->a[65318] = anon_sym_AMP_AMP;
	v->a[65319] = anon_sym_PIPE;
	small_parse_table_3266(v);
}

void	small_parse_table_3266(t_small_parse_table_array *v)
{
	v->a[65320] = anon_sym_AMP;
	v->a[65321] = anon_sym_LT;
	v->a[65322] = anon_sym_GT;
	v->a[65323] = anon_sym_LT_LT;
	v->a[65324] = anon_sym_GT_GT;
	v->a[65325] = anon_sym_esac;
	v->a[65326] = anon_sym_SEMI_SEMI;
	v->a[65327] = anon_sym_SEMI_AMP;
	v->a[65328] = anon_sym_SEMI_SEMI_AMP;
	v->a[65329] = anon_sym_PIPE_AMP;
	v->a[65330] = anon_sym_AMP_GT;
	v->a[65331] = anon_sym_AMP_GT_GT;
	v->a[65332] = anon_sym_LT_AMP;
	v->a[65333] = anon_sym_GT_AMP;
	v->a[65334] = anon_sym_GT_PIPE;
	v->a[65335] = anon_sym_LT_AMP_DASH;
	v->a[65336] = anon_sym_GT_AMP_DASH;
	v->a[65337] = anon_sym_LT_LT_DASH;
	v->a[65338] = anon_sym_LT_LT_LT;
	v->a[65339] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3267(v);
}

void	small_parse_table_3267(t_small_parse_table_array *v)
{
	v->a[65340] = anon_sym_DOLLAR_LBRACK;
	v->a[65341] = anon_sym_DOLLAR;
	v->a[65342] = anon_sym_DQUOTE;
	v->a[65343] = sym_raw_string;
	v->a[65344] = sym_ansi_c_string;
	v->a[65345] = aux_sym_number_token1;
	v->a[65346] = aux_sym_number_token2;
	v->a[65347] = anon_sym_DOLLAR_LBRACE;
	v->a[65348] = anon_sym_DOLLAR_LPAREN;
	v->a[65349] = anon_sym_BQUOTE;
	v->a[65350] = anon_sym_DOLLAR_BQUOTE;
	v->a[65351] = anon_sym_LT_LPAREN;
	v->a[65352] = anon_sym_GT_LPAREN;
	v->a[65353] = sym_word;
	v->a[65354] = 3;
	v->a[65355] = actions(3);
	v->a[65356] = 1;
	v->a[65357] = sym_comment;
	v->a[65358] = actions(1298);
	v->a[65359] = 6;
	small_parse_table_3268(v);
}

void	small_parse_table_3268(t_small_parse_table_array *v)
{
	v->a[65360] = sym_file_descriptor;
	v->a[65361] = sym__concat;
	v->a[65362] = sym_variable_name;
	v->a[65363] = sym_test_operator;
	v->a[65364] = sym__brace_start;
	v->a[65365] = aux_sym_heredoc_redirect_token1;
	v->a[65366] = actions(1296);
	v->a[65367] = 40;
	v->a[65368] = anon_sym_LPAREN_LPAREN;
	v->a[65369] = anon_sym_SEMI;
	v->a[65370] = anon_sym_PIPE_PIPE;
	v->a[65371] = anon_sym_AMP_AMP;
	v->a[65372] = anon_sym_PIPE;
	v->a[65373] = anon_sym_AMP;
	v->a[65374] = anon_sym_LT;
	v->a[65375] = anon_sym_GT;
	v->a[65376] = anon_sym_LT_LT;
	v->a[65377] = anon_sym_GT_GT;
	v->a[65378] = anon_sym_SEMI_SEMI;
	v->a[65379] = anon_sym_SEMI_AMP;
	small_parse_table_3269(v);
}

void	small_parse_table_3269(t_small_parse_table_array *v)
{
	v->a[65380] = anon_sym_SEMI_SEMI_AMP;
	v->a[65381] = anon_sym_PIPE_AMP;
	v->a[65382] = anon_sym_AMP_GT;
	v->a[65383] = anon_sym_AMP_GT_GT;
	v->a[65384] = anon_sym_LT_AMP;
	v->a[65385] = anon_sym_GT_AMP;
	v->a[65386] = anon_sym_GT_PIPE;
	v->a[65387] = anon_sym_LT_AMP_DASH;
	v->a[65388] = anon_sym_GT_AMP_DASH;
	v->a[65389] = anon_sym_LT_LT_DASH;
	v->a[65390] = anon_sym_LT_LT_LT;
	v->a[65391] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65392] = anon_sym_DOLLAR_LBRACK;
	v->a[65393] = aux_sym_concatenation_token1;
	v->a[65394] = anon_sym_DOLLAR;
	v->a[65395] = sym__special_character;
	v->a[65396] = anon_sym_DQUOTE;
	v->a[65397] = sym_raw_string;
	v->a[65398] = sym_ansi_c_string;
	v->a[65399] = aux_sym_number_token1;
	small_parse_table_3270(v);
}

/* EOF small_parse_table_653.c */
