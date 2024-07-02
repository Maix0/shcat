/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_283.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1415(t_small_parse_table_array *v)
{
	v->a[28300] = anon_sym_SLASH_EQ;
	v->a[28301] = anon_sym_PERCENT_EQ;
	v->a[28302] = anon_sym_LT_LT_EQ;
	v->a[28303] = anon_sym_GT_GT_EQ;
	v->a[28304] = anon_sym_AMP_EQ;
	v->a[28305] = anon_sym_CARET_EQ;
	v->a[28306] = anon_sym_PIPE_EQ;
	v->a[28307] = 11;
	v->a[28308] = actions(3);
	v->a[28309] = 1;
	v->a[28310] = sym_comment;
	v->a[28311] = actions(692);
	v->a[28312] = 1;
	v->a[28313] = anon_sym_PIPE;
	v->a[28314] = actions(702);
	v->a[28315] = 1;
	v->a[28316] = sym_file_descriptor;
	v->a[28317] = actions(916);
	v->a[28318] = 1;
	v->a[28319] = sym_variable_name;
	small_parse_table_1416(v);
}

void	small_parse_table_1416(t_small_parse_table_array *v)
{
	v->a[28320] = state(715);
	v->a[28321] = 1;
	v->a[28322] = sym_terminator;
	v->a[28323] = actions(700);
	v->a[28324] = 2;
	v->a[28325] = anon_sym_LT_LT;
	v->a[28326] = anon_sym_LT_LT_DASH;
	v->a[28327] = actions(914);
	v->a[28328] = 2;
	v->a[28329] = anon_sym_AMP_AMP;
	v->a[28330] = anon_sym_PIPE_PIPE;
	v->a[28331] = state(1181);
	v->a[28332] = 2;
	v->a[28333] = sym_variable_assignment;
	v->a[28334] = aux_sym__variable_assignments_repeat1;
	v->a[28335] = state(1134);
	v->a[28336] = 3;
	v->a[28337] = sym_file_redirect;
	v->a[28338] = sym_heredoc_redirect;
	v->a[28339] = aux_sym_redirected_statement_repeat1;
	small_parse_table_1417(v);
}

void	small_parse_table_1417(t_small_parse_table_array *v)
{
	v->a[28340] = actions(1033);
	v->a[28341] = 4;
	v->a[28342] = anon_sym_SEMI_SEMI;
	v->a[28343] = aux_sym_heredoc_redirect_token1;
	v->a[28344] = anon_sym_AMP;
	v->a[28345] = anon_sym_SEMI;
	v->a[28346] = actions(690);
	v->a[28347] = 16;
	v->a[28348] = anon_sym_LT;
	v->a[28349] = anon_sym_GT;
	v->a[28350] = anon_sym_GT_GT;
	v->a[28351] = anon_sym_LT_AMP;
	v->a[28352] = anon_sym_GT_AMP;
	v->a[28353] = anon_sym_GT_PIPE;
	v->a[28354] = anon_sym_LT_GT;
	v->a[28355] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28356] = anon_sym_DOLLAR;
	v->a[28357] = anon_sym_DQUOTE;
	v->a[28358] = sym_raw_string;
	v->a[28359] = sym_number;
	small_parse_table_1418(v);
}

void	small_parse_table_1418(t_small_parse_table_array *v)
{
	v->a[28360] = anon_sym_DOLLAR_LBRACE;
	v->a[28361] = anon_sym_DOLLAR_LPAREN;
	v->a[28362] = anon_sym_BQUOTE;
	v->a[28363] = sym_word;
	v->a[28364] = 7;
	v->a[28365] = actions(3);
	v->a[28366] = 1;
	v->a[28367] = sym_comment;
	v->a[28368] = actions(704);
	v->a[28369] = 1;
	v->a[28370] = sym_variable_name;
	v->a[28371] = actions(921);
	v->a[28372] = 1;
	v->a[28373] = sym_file_descriptor;
	v->a[28374] = state(1078);
	v->a[28375] = 2;
	v->a[28376] = sym_variable_assignment;
	v->a[28377] = aux_sym__variable_assignments_repeat1;
	v->a[28378] = state(1031);
	v->a[28379] = 3;
	small_parse_table_1419(v);
}

void	small_parse_table_1419(t_small_parse_table_array *v)
{
	v->a[28380] = sym_file_redirect;
	v->a[28381] = sym_heredoc_redirect;
	v->a[28382] = aux_sym_redirected_statement_repeat1;
	v->a[28383] = actions(690);
	v->a[28384] = 9;
	v->a[28385] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28386] = anon_sym_DOLLAR;
	v->a[28387] = anon_sym_DQUOTE;
	v->a[28388] = sym_raw_string;
	v->a[28389] = sym_number;
	v->a[28390] = anon_sym_DOLLAR_LBRACE;
	v->a[28391] = anon_sym_DOLLAR_LPAREN;
	v->a[28392] = anon_sym_BQUOTE;
	v->a[28393] = sym_word;
	v->a[28394] = actions(692);
	v->a[28395] = 17;
	v->a[28396] = anon_sym_PIPE;
	v->a[28397] = anon_sym_RPAREN;
	v->a[28398] = anon_sym_SEMI_SEMI;
	v->a[28399] = anon_sym_AMP_AMP;
	small_parse_table_1420(v);
}

/* EOF small_parse_table_283.c */
