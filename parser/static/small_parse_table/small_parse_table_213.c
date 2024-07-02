/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_213.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1065(t_small_parse_table_array *v)
{
	v->a[21300] = anon_sym_DQUOTE;
	v->a[21301] = sym_raw_string;
	v->a[21302] = sym_number;
	v->a[21303] = anon_sym_DOLLAR_LBRACE;
	v->a[21304] = anon_sym_DOLLAR_LPAREN;
	v->a[21305] = anon_sym_BQUOTE;
	v->a[21306] = sym_word;
	v->a[21307] = anon_sym_SEMI;
	v->a[21308] = 3;
	v->a[21309] = actions(680);
	v->a[21310] = 1;
	v->a[21311] = sym_comment;
	v->a[21312] = actions(711);
	v->a[21313] = 13;
	v->a[21314] = anon_sym_PIPE;
	v->a[21315] = anon_sym_EQ;
	v->a[21316] = anon_sym_LT;
	v->a[21317] = anon_sym_GT;
	v->a[21318] = anon_sym_GT_GT;
	v->a[21319] = anon_sym_LT_LT;
	small_parse_table_1066(v);
}

void	small_parse_table_1066(t_small_parse_table_array *v)
{
	v->a[21320] = anon_sym_CARET;
	v->a[21321] = anon_sym_AMP;
	v->a[21322] = anon_sym_PLUS;
	v->a[21323] = anon_sym_DASH;
	v->a[21324] = anon_sym_STAR;
	v->a[21325] = anon_sym_SLASH;
	v->a[21326] = anon_sym_PERCENT;
	v->a[21327] = actions(713);
	v->a[21328] = 21;
	v->a[21329] = anon_sym_AMP_AMP;
	v->a[21330] = anon_sym_PIPE_PIPE;
	v->a[21331] = anon_sym_RPAREN_RPAREN;
	v->a[21332] = anon_sym_PLUS_EQ;
	v->a[21333] = anon_sym_DASH_EQ;
	v->a[21334] = anon_sym_STAR_EQ;
	v->a[21335] = anon_sym_SLASH_EQ;
	v->a[21336] = anon_sym_PERCENT_EQ;
	v->a[21337] = anon_sym_LT_LT_EQ;
	v->a[21338] = anon_sym_GT_GT_EQ;
	v->a[21339] = anon_sym_AMP_EQ;
	small_parse_table_1067(v);
}

void	small_parse_table_1067(t_small_parse_table_array *v)
{
	v->a[21340] = anon_sym_CARET_EQ;
	v->a[21341] = anon_sym_PIPE_EQ;
	v->a[21342] = anon_sym_EQ_EQ;
	v->a[21343] = anon_sym_BANG_EQ;
	v->a[21344] = anon_sym_LT_EQ;
	v->a[21345] = anon_sym_GT_EQ;
	v->a[21346] = anon_sym_QMARK;
	v->a[21347] = anon_sym_COLON;
	v->a[21348] = anon_sym_PLUS_PLUS2;
	v->a[21349] = anon_sym_DASH_DASH2;
	v->a[21350] = 12;
	v->a[21351] = actions(3);
	v->a[21352] = 1;
	v->a[21353] = sym_comment;
	v->a[21354] = actions(692);
	v->a[21355] = 1;
	v->a[21356] = anon_sym_PIPE;
	v->a[21357] = actions(702);
	v->a[21358] = 1;
	v->a[21359] = sym_file_descriptor;
	small_parse_table_1068(v);
}

void	small_parse_table_1068(t_small_parse_table_array *v)
{
	v->a[21360] = actions(715);
	v->a[21361] = 1;
	v->a[21362] = ts_builtin_sym_end;
	v->a[21363] = actions(721);
	v->a[21364] = 1;
	v->a[21365] = sym_variable_name;
	v->a[21366] = state(720);
	v->a[21367] = 1;
	v->a[21368] = sym_terminator;
	v->a[21369] = actions(700);
	v->a[21370] = 2;
	v->a[21371] = anon_sym_LT_LT;
	v->a[21372] = anon_sym_LT_LT_DASH;
	v->a[21373] = actions(719);
	v->a[21374] = 2;
	v->a[21375] = anon_sym_AMP_AMP;
	v->a[21376] = anon_sym_PIPE_PIPE;
	v->a[21377] = state(1047);
	v->a[21378] = 2;
	v->a[21379] = sym_variable_assignment;
	small_parse_table_1069(v);
}

void	small_parse_table_1069(t_small_parse_table_array *v)
{
	v->a[21380] = aux_sym__variable_assignments_repeat1;
	v->a[21381] = state(1086);
	v->a[21382] = 3;
	v->a[21383] = sym_file_redirect;
	v->a[21384] = sym_heredoc_redirect;
	v->a[21385] = aux_sym_redirected_statement_repeat1;
	v->a[21386] = actions(717);
	v->a[21387] = 4;
	v->a[21388] = anon_sym_SEMI_SEMI;
	v->a[21389] = aux_sym_heredoc_redirect_token1;
	v->a[21390] = anon_sym_AMP;
	v->a[21391] = anon_sym_SEMI;
	v->a[21392] = actions(690);
	v->a[21393] = 16;
	v->a[21394] = anon_sym_LT;
	v->a[21395] = anon_sym_GT;
	v->a[21396] = anon_sym_GT_GT;
	v->a[21397] = anon_sym_LT_AMP;
	v->a[21398] = anon_sym_GT_AMP;
	v->a[21399] = anon_sym_GT_PIPE;
	small_parse_table_1070(v);
}

/* EOF small_parse_table_213.c */
