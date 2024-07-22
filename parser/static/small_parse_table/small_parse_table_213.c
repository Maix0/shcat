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
	v->a[21300] = anon_sym_DOLLAR_LBRACE;
	v->a[21301] = actions(711);
	v->a[21302] = 1;
	v->a[21303] = anon_sym_DOLLAR_LPAREN;
	v->a[21304] = actions(714);
	v->a[21305] = 1;
	v->a[21306] = anon_sym_BQUOTE;
	v->a[21307] = state(215);
	v->a[21308] = 2;
	v->a[21309] = sym_concatenation;
	v->a[21310] = aux_sym_for_statement_repeat1;
	v->a[21311] = actions(648);
	v->a[21312] = 3;
	v->a[21313] = sym_file_descriptor;
	v->a[21314] = sym_variable_name;
	v->a[21315] = ts_builtin_sym_end;
	v->a[21316] = actions(696);
	v->a[21317] = 3;
	v->a[21318] = sym_raw_string;
	v->a[21319] = sym_number;
	small_parse_table_1066(v);
}

void	small_parse_table_1066(t_small_parse_table_array *v)
{
	v->a[21320] = sym_word;
	v->a[21321] = state(387);
	v->a[21322] = 5;
	v->a[21323] = sym_arithmetic_expansion;
	v->a[21324] = sym_string;
	v->a[21325] = sym_simple_expansion;
	v->a[21326] = sym_expansion;
	v->a[21327] = sym_command_substitution;
	v->a[21328] = actions(628);
	v->a[21329] = 15;
	v->a[21330] = anon_sym_PIPE;
	v->a[21331] = anon_sym_SEMI_SEMI;
	v->a[21332] = anon_sym_AMP_AMP;
	v->a[21333] = anon_sym_PIPE_PIPE;
	v->a[21334] = anon_sym_LT;
	v->a[21335] = anon_sym_GT;
	v->a[21336] = anon_sym_GT_GT;
	v->a[21337] = anon_sym_LT_AMP;
	v->a[21338] = anon_sym_GT_AMP;
	v->a[21339] = anon_sym_GT_PIPE;
	small_parse_table_1067(v);
}

void	small_parse_table_1067(t_small_parse_table_array *v)
{
	v->a[21340] = anon_sym_LT_GT;
	v->a[21341] = anon_sym_LT_LT;
	v->a[21342] = anon_sym_LT_LT_DASH;
	v->a[21343] = aux_sym_heredoc_redirect_token1;
	v->a[21344] = anon_sym_SEMI;
	v->a[21345] = 3;
	v->a[21346] = actions(501);
	v->a[21347] = 1;
	v->a[21348] = sym_comment;
	v->a[21349] = actions(717);
	v->a[21350] = 13;
	v->a[21351] = anon_sym_PIPE;
	v->a[21352] = anon_sym_EQ;
	v->a[21353] = anon_sym_LT;
	v->a[21354] = anon_sym_GT;
	v->a[21355] = anon_sym_GT_GT;
	v->a[21356] = anon_sym_LT_LT;
	v->a[21357] = anon_sym_CARET;
	v->a[21358] = anon_sym_AMP;
	v->a[21359] = anon_sym_PLUS;
	small_parse_table_1068(v);
}

void	small_parse_table_1068(t_small_parse_table_array *v)
{
	v->a[21360] = anon_sym_DASH;
	v->a[21361] = anon_sym_STAR;
	v->a[21362] = anon_sym_SLASH;
	v->a[21363] = anon_sym_PERCENT;
	v->a[21364] = actions(719);
	v->a[21365] = 21;
	v->a[21366] = anon_sym_AMP_AMP;
	v->a[21367] = anon_sym_PIPE_PIPE;
	v->a[21368] = anon_sym_RPAREN_RPAREN;
	v->a[21369] = anon_sym_PLUS_EQ;
	v->a[21370] = anon_sym_DASH_EQ;
	v->a[21371] = anon_sym_STAR_EQ;
	v->a[21372] = anon_sym_SLASH_EQ;
	v->a[21373] = anon_sym_PERCENT_EQ;
	v->a[21374] = anon_sym_LT_LT_EQ;
	v->a[21375] = anon_sym_GT_GT_EQ;
	v->a[21376] = anon_sym_AMP_EQ;
	v->a[21377] = anon_sym_CARET_EQ;
	v->a[21378] = anon_sym_PIPE_EQ;
	v->a[21379] = anon_sym_EQ_EQ;
	small_parse_table_1069(v);
}

void	small_parse_table_1069(t_small_parse_table_array *v)
{
	v->a[21380] = anon_sym_BANG_EQ;
	v->a[21381] = anon_sym_LT_EQ;
	v->a[21382] = anon_sym_GT_EQ;
	v->a[21383] = anon_sym_QMARK;
	v->a[21384] = anon_sym_COLON;
	v->a[21385] = anon_sym_PLUS_PLUS2;
	v->a[21386] = anon_sym_DASH_DASH2;
	v->a[21387] = 12;
	v->a[21388] = actions(501);
	v->a[21389] = 1;
	v->a[21390] = sym_comment;
	v->a[21391] = actions(664);
	v->a[21392] = 1;
	v->a[21393] = anon_sym_CARET;
	v->a[21394] = actions(666);
	v->a[21395] = 1;
	v->a[21396] = anon_sym_AMP;
	v->a[21397] = actions(495);
	v->a[21398] = 2;
	v->a[21399] = anon_sym_PIPE;
	small_parse_table_1070(v);
}

/* EOF small_parse_table_213.c */
