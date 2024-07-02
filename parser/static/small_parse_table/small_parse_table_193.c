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
	v->a[19300] = anon_sym_LPAREN;
	v->a[19301] = actions(459);
	v->a[19302] = 1;
	v->a[19303] = sym_file_descriptor;
	v->a[19304] = actions(463);
	v->a[19305] = 1;
	v->a[19306] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19307] = actions(465);
	v->a[19308] = 1;
	v->a[19309] = anon_sym_DOLLAR;
	v->a[19310] = actions(467);
	v->a[19311] = 1;
	v->a[19312] = anon_sym_DQUOTE;
	v->a[19313] = actions(469);
	v->a[19314] = 1;
	v->a[19315] = anon_sym_DOLLAR_LBRACE;
	v->a[19316] = actions(471);
	v->a[19317] = 1;
	v->a[19318] = anon_sym_DOLLAR_LPAREN;
	v->a[19319] = actions(473);
	small_parse_table_966(v);
}

void	small_parse_table_966(t_small_parse_table_array *v)
{
	v->a[19320] = 1;
	v->a[19321] = anon_sym_BQUOTE;
	v->a[19322] = actions(475);
	v->a[19323] = 1;
	v->a[19324] = sym__bare_dollar;
	v->a[19325] = state(198);
	v->a[19326] = 1;
	v->a[19327] = aux_sym_command_repeat2;
	v->a[19328] = state(662);
	v->a[19329] = 1;
	v->a[19330] = sym_concatenation;
	v->a[19331] = state(1135);
	v->a[19332] = 1;
	v->a[19333] = sym_subshell;
	v->a[19334] = actions(461);
	v->a[19335] = 3;
	v->a[19336] = sym_raw_string;
	v->a[19337] = sym_number;
	v->a[19338] = sym_word;
	v->a[19339] = state(430);
	small_parse_table_967(v);
}

void	small_parse_table_967(t_small_parse_table_array *v)
{
	v->a[19340] = 5;
	v->a[19341] = sym_arithmetic_expansion;
	v->a[19342] = sym_string;
	v->a[19343] = sym_simple_expansion;
	v->a[19344] = sym_expansion;
	v->a[19345] = sym_command_substitution;
	v->a[19346] = actions(457);
	v->a[19347] = 17;
	v->a[19348] = anon_sym_PIPE;
	v->a[19349] = anon_sym_RPAREN;
	v->a[19350] = anon_sym_SEMI_SEMI;
	v->a[19351] = anon_sym_AMP_AMP;
	v->a[19352] = anon_sym_PIPE_PIPE;
	v->a[19353] = anon_sym_LT;
	v->a[19354] = anon_sym_GT;
	v->a[19355] = anon_sym_GT_GT;
	v->a[19356] = anon_sym_LT_AMP;
	v->a[19357] = anon_sym_GT_AMP;
	v->a[19358] = anon_sym_GT_PIPE;
	v->a[19359] = anon_sym_LT_GT;
	small_parse_table_968(v);
}

void	small_parse_table_968(t_small_parse_table_array *v)
{
	v->a[19360] = anon_sym_LT_LT;
	v->a[19361] = anon_sym_LT_LT_DASH;
	v->a[19362] = aux_sym_heredoc_redirect_token1;
	v->a[19363] = anon_sym_AMP;
	v->a[19364] = anon_sym_SEMI;
	v->a[19365] = 6;
	v->a[19366] = actions(3);
	v->a[19367] = 1;
	v->a[19368] = sym_comment;
	v->a[19369] = actions(361);
	v->a[19370] = 1;
	v->a[19371] = sym_file_descriptor;
	v->a[19372] = actions(417);
	v->a[19373] = 1;
	v->a[19374] = sym_variable_name;
	v->a[19375] = actions(415);
	v->a[19376] = 2;
	v->a[19377] = aux_sym__simple_variable_name_token1;
	v->a[19378] = aux_sym__multiline_variable_name_token1;
	v->a[19379] = actions(413);
	small_parse_table_969(v);
}

void	small_parse_table_969(t_small_parse_table_array *v)
{
	v->a[19380] = 9;
	v->a[19381] = anon_sym_BANG;
	v->a[19382] = anon_sym_DASH;
	v->a[19383] = anon_sym_STAR;
	v->a[19384] = anon_sym_QMARK;
	v->a[19385] = anon_sym_DOLLAR;
	v->a[19386] = anon_sym_POUND;
	v->a[19387] = anon_sym_AT;
	v->a[19388] = anon_sym_0;
	v->a[19389] = anon_sym__;
	v->a[19390] = actions(363);
	v->a[19391] = 24;
	v->a[19392] = anon_sym_PIPE;
	v->a[19393] = anon_sym_SEMI_SEMI;
	v->a[19394] = anon_sym_AMP_AMP;
	v->a[19395] = anon_sym_PIPE_PIPE;
	v->a[19396] = anon_sym_LT;
	v->a[19397] = anon_sym_GT;
	v->a[19398] = anon_sym_GT_GT;
	v->a[19399] = anon_sym_LT_AMP;
	small_parse_table_970(v);
}

/* EOF small_parse_table_193.c */
