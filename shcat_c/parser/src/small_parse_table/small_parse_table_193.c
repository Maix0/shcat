/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_193.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_965(t_small_parse_table_array *v)
{
	v->a[19300] = 1;
	v->a[19301] = aux_sym__simple_variable_name_token1;
	v->a[19302] = actions(3770);
	v->a[19303] = 1;
	v->a[19304] = sym_test_operator;
	v->a[19305] = state(1966);
	v->a[19306] = 1;
	v->a[19307] = aux_sym__literal_repeat1;
	v->a[19308] = actions(2442);
	v->a[19309] = 2;
	v->a[19310] = sym_file_descriptor;
	v->a[19311] = aux_sym_heredoc_redirect_token1;
	v->a[19312] = actions(3533);
	v->a[19313] = 2;
	v->a[19314] = anon_sym_LPAREN_LPAREN;
	v->a[19315] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19316] = actions(3566);
	v->a[19317] = 2;
	v->a[19318] = anon_sym_LT_LPAREN;
	v->a[19319] = anon_sym_GT_LPAREN;
	small_parse_table_966(v);
}

void	small_parse_table_966(t_small_parse_table_array *v)
{
	v->a[19320] = state(731);
	v->a[19321] = 2;
	v->a[19322] = sym_concatenation;
	v->a[19323] = aux_sym_unset_command_repeat1;
	v->a[19324] = actions(3761);
	v->a[19325] = 3;
	v->a[19326] = sym_raw_string;
	v->a[19327] = sym_ansi_c_string;
	v->a[19328] = sym_word;
	v->a[19329] = state(1902);
	v->a[19330] = 9;
	v->a[19331] = sym_arithmetic_expansion;
	v->a[19332] = sym_brace_expression;
	v->a[19333] = sym_string;
	v->a[19334] = sym_translated_string;
	v->a[19335] = sym_number;
	v->a[19336] = sym_simple_expansion;
	v->a[19337] = sym_expansion;
	v->a[19338] = sym_command_substitution;
	v->a[19339] = sym_process_substitution;
	small_parse_table_967(v);
}

void	small_parse_table_967(t_small_parse_table_array *v)
{
	v->a[19340] = actions(2440);
	v->a[19341] = 19;
	v->a[19342] = anon_sym_SEMI;
	v->a[19343] = anon_sym_PIPE_PIPE;
	v->a[19344] = anon_sym_AMP_AMP;
	v->a[19345] = anon_sym_PIPE;
	v->a[19346] = anon_sym_AMP;
	v->a[19347] = anon_sym_LT;
	v->a[19348] = anon_sym_GT;
	v->a[19349] = anon_sym_LT_LT;
	v->a[19350] = anon_sym_GT_GT;
	v->a[19351] = anon_sym_SEMI_SEMI;
	v->a[19352] = anon_sym_PIPE_AMP;
	v->a[19353] = anon_sym_AMP_GT;
	v->a[19354] = anon_sym_AMP_GT_GT;
	v->a[19355] = anon_sym_LT_AMP;
	v->a[19356] = anon_sym_GT_AMP;
	v->a[19357] = anon_sym_GT_PIPE;
	v->a[19358] = anon_sym_LT_AMP_DASH;
	v->a[19359] = anon_sym_GT_AMP_DASH;
	small_parse_table_968(v);
}

void	small_parse_table_968(t_small_parse_table_array *v)
{
	v->a[19360] = anon_sym_LT_LT_DASH;
	v->a[19361] = 8;
	v->a[19362] = actions(3);
	v->a[19363] = 1;
	v->a[19364] = sym_comment;
	v->a[19365] = actions(3775);
	v->a[19366] = 1;
	v->a[19367] = anon_sym_DQUOTE;
	v->a[19368] = actions(3779);
	v->a[19369] = 1;
	v->a[19370] = sym_variable_name;
	v->a[19371] = state(2093);
	v->a[19372] = 1;
	v->a[19373] = sym_string;
	v->a[19374] = actions(3777);
	v->a[19375] = 2;
	v->a[19376] = aux_sym__simple_variable_name_token1;
	v->a[19377] = aux_sym__multiline_variable_name_token1;
	v->a[19378] = actions(1235);
	v->a[19379] = 4;
	small_parse_table_969(v);
}

void	small_parse_table_969(t_small_parse_table_array *v)
{
	v->a[19380] = sym_file_descriptor;
	v->a[19381] = sym_test_operator;
	v->a[19382] = sym__bare_dollar;
	v->a[19383] = sym__brace_start;
	v->a[19384] = actions(3773);
	v->a[19385] = 9;
	v->a[19386] = anon_sym_DASH;
	v->a[19387] = anon_sym_STAR;
	v->a[19388] = anon_sym_BANG;
	v->a[19389] = anon_sym_QMARK;
	v->a[19390] = anon_sym_DOLLAR;
	v->a[19391] = anon_sym_POUND;
	v->a[19392] = anon_sym_AT2;
	v->a[19393] = anon_sym_0;
	v->a[19394] = anon_sym__;
	v->a[19395] = actions(1227);
	v->a[19396] = 35;
	v->a[19397] = anon_sym_LPAREN_LPAREN;
	v->a[19398] = anon_sym_PIPE_PIPE;
	v->a[19399] = anon_sym_AMP_AMP;
	small_parse_table_970(v);
}

/* EOF small_parse_table_193.c */
