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
	v->a[21300] = actions(876);
	v->a[21301] = 1;
	v->a[21302] = anon_sym_LPAREN;
	v->a[21303] = state(422);
	v->a[21304] = 1;
	v->a[21305] = aux_sym_concatenation_repeat1;
	v->a[21306] = actions(833);
	v->a[21307] = 19;
	v->a[21308] = anon_sym_PIPE;
	v->a[21309] = anon_sym_SEMI_SEMI;
	v->a[21310] = anon_sym_AMP_AMP;
	v->a[21311] = anon_sym_PIPE_PIPE;
	v->a[21312] = anon_sym_LT;
	v->a[21313] = anon_sym_GT;
	v->a[21314] = anon_sym_GT_GT;
	v->a[21315] = anon_sym_LT_LT;
	v->a[21316] = aux_sym_heredoc_redirect_token1;
	v->a[21317] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21318] = anon_sym_DOLLAR;
	v->a[21319] = anon_sym_DQUOTE;
	small_parse_table_1066(v);
}

void	small_parse_table_1066(t_small_parse_table_array *v)
{
	v->a[21320] = sym_raw_string;
	v->a[21321] = sym_number;
	v->a[21322] = anon_sym_DOLLAR_LBRACE;
	v->a[21323] = anon_sym_DOLLAR_LPAREN;
	v->a[21324] = anon_sym_BQUOTE;
	v->a[21325] = sym_word;
	v->a[21326] = anon_sym_SEMI;
	v->a[21327] = 6;
	v->a[21328] = actions(3);
	v->a[21329] = 1;
	v->a[21330] = sym_comment;
	v->a[21331] = actions(882);
	v->a[21332] = 1;
	v->a[21333] = aux_sym_concatenation_token1;
	v->a[21334] = actions(884);
	v->a[21335] = 1;
	v->a[21336] = sym__concat;
	v->a[21337] = state(291);
	v->a[21338] = 1;
	v->a[21339] = aux_sym_concatenation_repeat1;
	small_parse_table_1067(v);
}

void	small_parse_table_1067(t_small_parse_table_array *v)
{
	v->a[21340] = actions(878);
	v->a[21341] = 2;
	v->a[21342] = sym_variable_name;
	v->a[21343] = ts_builtin_sym_end;
	v->a[21344] = actions(880);
	v->a[21345] = 19;
	v->a[21346] = anon_sym_PIPE;
	v->a[21347] = anon_sym_SEMI_SEMI;
	v->a[21348] = anon_sym_AMP_AMP;
	v->a[21349] = anon_sym_PIPE_PIPE;
	v->a[21350] = anon_sym_LT;
	v->a[21351] = anon_sym_GT;
	v->a[21352] = anon_sym_GT_GT;
	v->a[21353] = anon_sym_LT_LT;
	v->a[21354] = aux_sym_heredoc_redirect_token1;
	v->a[21355] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21356] = anon_sym_DOLLAR;
	v->a[21357] = anon_sym_DQUOTE;
	v->a[21358] = sym_raw_string;
	v->a[21359] = sym_number;
	small_parse_table_1068(v);
}

void	small_parse_table_1068(t_small_parse_table_array *v)
{
	v->a[21360] = anon_sym_DOLLAR_LBRACE;
	v->a[21361] = anon_sym_DOLLAR_LPAREN;
	v->a[21362] = anon_sym_BQUOTE;
	v->a[21363] = sym_word;
	v->a[21364] = anon_sym_SEMI;
	v->a[21365] = 11;
	v->a[21366] = actions(3);
	v->a[21367] = 1;
	v->a[21368] = sym_comment;
	v->a[21369] = actions(704);
	v->a[21370] = 1;
	v->a[21371] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21372] = actions(706);
	v->a[21373] = 1;
	v->a[21374] = anon_sym_DOLLAR;
	v->a[21375] = actions(708);
	v->a[21376] = 1;
	v->a[21377] = anon_sym_DQUOTE;
	v->a[21378] = actions(710);
	v->a[21379] = 1;
	small_parse_table_1069(v);
}

void	small_parse_table_1069(t_small_parse_table_array *v)
{
	v->a[21380] = anon_sym_DOLLAR_LBRACE;
	v->a[21381] = actions(712);
	v->a[21382] = 1;
	v->a[21383] = anon_sym_DOLLAR_LPAREN;
	v->a[21384] = actions(714);
	v->a[21385] = 1;
	v->a[21386] = anon_sym_BQUOTE;
	v->a[21387] = state(256);
	v->a[21388] = 2;
	v->a[21389] = sym_concatenation;
	v->a[21390] = aux_sym_for_statement_repeat1;
	v->a[21391] = actions(886);
	v->a[21392] = 3;
	v->a[21393] = sym_raw_string;
	v->a[21394] = sym_number;
	v->a[21395] = sym_word;
	v->a[21396] = state(593);
	v->a[21397] = 5;
	v->a[21398] = sym_arithmetic_expansion;
	v->a[21399] = sym_string;
	small_parse_table_1070(v);
}

/* EOF small_parse_table_213.c */
