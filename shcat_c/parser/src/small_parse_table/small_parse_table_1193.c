/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1193.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5965(t_small_parse_table_array *v)
{
	v->a[119300] = anon_sym_SEMI_SEMI;
	v->a[119301] = anon_sym_PIPE_AMP;
	v->a[119302] = anon_sym_AMP_GT;
	v->a[119303] = anon_sym_AMP_GT_GT;
	v->a[119304] = anon_sym_LT_AMP;
	v->a[119305] = anon_sym_GT_AMP;
	v->a[119306] = anon_sym_GT_PIPE;
	v->a[119307] = anon_sym_LT_AMP_DASH;
	v->a[119308] = anon_sym_GT_AMP_DASH;
	v->a[119309] = anon_sym_LT_LT_DASH;
	v->a[119310] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[119311] = anon_sym_DOLLAR_LBRACK;
	v->a[119312] = anon_sym_DOLLAR;
	v->a[119313] = sym__special_character;
	v->a[119314] = anon_sym_DQUOTE;
	v->a[119315] = sym_raw_string;
	v->a[119316] = sym_ansi_c_string;
	v->a[119317] = aux_sym_number_token1;
	v->a[119318] = aux_sym_number_token2;
	v->a[119319] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_5966(v);
}

void	small_parse_table_5966(t_small_parse_table_array *v)
{
	v->a[119320] = anon_sym_DOLLAR_LPAREN;
	v->a[119321] = anon_sym_BQUOTE;
	v->a[119322] = anon_sym_DOLLAR_BQUOTE;
	v->a[119323] = anon_sym_LT_LPAREN;
	v->a[119324] = anon_sym_GT_LPAREN;
	v->a[119325] = aux_sym__simple_variable_name_token1;
	v->a[119326] = sym_word;
	v->a[119327] = 5;
	v->a[119328] = actions(3);
	v->a[119329] = 1;
	v->a[119330] = sym_comment;
	v->a[119331] = actions(6443);
	v->a[119332] = 1;
	v->a[119333] = sym__special_character;
	v->a[119334] = state(2316);
	v->a[119335] = 1;
	v->a[119336] = aux_sym__literal_repeat1;
	v->a[119337] = actions(5395);
	v->a[119338] = 5;
	v->a[119339] = sym_file_descriptor;
	small_parse_table_5967(v);
}

void	small_parse_table_5967(t_small_parse_table_array *v)
{
	v->a[119340] = sym_test_operator;
	v->a[119341] = sym__brace_start;
	v->a[119342] = ts_builtin_sym_end;
	v->a[119343] = aux_sym_heredoc_redirect_token1;
	v->a[119344] = actions(5393);
	v->a[119345] = 35;
	v->a[119346] = anon_sym_LPAREN_LPAREN;
	v->a[119347] = anon_sym_SEMI;
	v->a[119348] = anon_sym_PIPE_PIPE;
	v->a[119349] = anon_sym_AMP_AMP;
	v->a[119350] = anon_sym_PIPE;
	v->a[119351] = anon_sym_AMP;
	v->a[119352] = anon_sym_LT;
	v->a[119353] = anon_sym_GT;
	v->a[119354] = anon_sym_LT_LT;
	v->a[119355] = anon_sym_GT_GT;
	v->a[119356] = anon_sym_SEMI_SEMI;
	v->a[119357] = anon_sym_PIPE_AMP;
	v->a[119358] = anon_sym_AMP_GT;
	v->a[119359] = anon_sym_AMP_GT_GT;
	small_parse_table_5968(v);
}

void	small_parse_table_5968(t_small_parse_table_array *v)
{
	v->a[119360] = anon_sym_LT_AMP;
	v->a[119361] = anon_sym_GT_AMP;
	v->a[119362] = anon_sym_GT_PIPE;
	v->a[119363] = anon_sym_LT_AMP_DASH;
	v->a[119364] = anon_sym_GT_AMP_DASH;
	v->a[119365] = anon_sym_LT_LT_DASH;
	v->a[119366] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[119367] = anon_sym_DOLLAR_LBRACK;
	v->a[119368] = anon_sym_DOLLAR;
	v->a[119369] = anon_sym_DQUOTE;
	v->a[119370] = sym_raw_string;
	v->a[119371] = sym_ansi_c_string;
	v->a[119372] = aux_sym_number_token1;
	v->a[119373] = aux_sym_number_token2;
	v->a[119374] = anon_sym_DOLLAR_LBRACE;
	v->a[119375] = anon_sym_DOLLAR_LPAREN;
	v->a[119376] = anon_sym_BQUOTE;
	v->a[119377] = anon_sym_DOLLAR_BQUOTE;
	v->a[119378] = anon_sym_LT_LPAREN;
	v->a[119379] = anon_sym_GT_LPAREN;
	small_parse_table_5969(v);
}

void	small_parse_table_5969(t_small_parse_table_array *v)
{
	v->a[119380] = sym_word;
	v->a[119381] = 6;
	v->a[119382] = actions(3);
	v->a[119383] = 1;
	v->a[119384] = sym_comment;
	v->a[119385] = actions(5638);
	v->a[119386] = 1;
	v->a[119387] = aux_sym_concatenation_token1;
	v->a[119388] = actions(5640);
	v->a[119389] = 1;
	v->a[119390] = sym__concat;
	v->a[119391] = state(2290);
	v->a[119392] = 1;
	v->a[119393] = aux_sym_concatenation_repeat1;
	v->a[119394] = actions(5069);
	v->a[119395] = 5;
	v->a[119396] = sym_file_descriptor;
	v->a[119397] = sym_variable_name;
	v->a[119398] = sym_test_operator;
	v->a[119399] = sym__brace_start;
	small_parse_table_5970(v);
}

/* EOF small_parse_table_1193.c */
