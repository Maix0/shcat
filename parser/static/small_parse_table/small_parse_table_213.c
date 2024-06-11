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
	v->a[21300] = anon_sym_GT_AMP_DASH;
	v->a[21301] = anon_sym_LT_LT;
	v->a[21302] = anon_sym_LT_LT_DASH;
	v->a[21303] = aux_sym_heredoc_redirect_token1;
	v->a[21304] = anon_sym_AMP;
	v->a[21305] = anon_sym_SEMI;
	v->a[21306] = 6;
	v->a[21307] = actions(3);
	v->a[21308] = 1;
	v->a[21309] = sym_comment;
	v->a[21310] = actions(393);
	v->a[21311] = 1;
	v->a[21312] = sym_variable_name;
	v->a[21313] = actions(379);
	v->a[21314] = 2;
	v->a[21315] = sym_file_descriptor;
	v->a[21316] = sym__bare_dollar;
	v->a[21317] = actions(391);
	v->a[21318] = 2;
	v->a[21319] = aux_sym__simple_variable_name_token1;
	small_parse_table_1066(v);
}

void	small_parse_table_1066(t_small_parse_table_array *v)
{
	v->a[21320] = aux_sym__multiline_variable_name_token1;
	v->a[21321] = actions(389);
	v->a[21322] = 9;
	v->a[21323] = anon_sym_BANG;
	v->a[21324] = anon_sym_DASH;
	v->a[21325] = anon_sym_STAR;
	v->a[21326] = anon_sym_QMARK;
	v->a[21327] = anon_sym_DOLLAR;
	v->a[21328] = anon_sym_POUND;
	v->a[21329] = anon_sym_AT;
	v->a[21330] = anon_sym_0;
	v->a[21331] = anon_sym__;
	v->a[21332] = actions(381);
	v->a[21333] = 25;
	v->a[21334] = anon_sym_LPAREN;
	v->a[21335] = anon_sym_PIPE;
	v->a[21336] = anon_sym_AMP_AMP;
	v->a[21337] = anon_sym_PIPE_PIPE;
	v->a[21338] = anon_sym_LT;
	v->a[21339] = anon_sym_GT;
	small_parse_table_1067(v);
}

void	small_parse_table_1067(t_small_parse_table_array *v)
{
	v->a[21340] = anon_sym_GT_GT;
	v->a[21341] = anon_sym_AMP_GT;
	v->a[21342] = anon_sym_AMP_GT_GT;
	v->a[21343] = anon_sym_LT_AMP;
	v->a[21344] = anon_sym_GT_AMP;
	v->a[21345] = anon_sym_GT_PIPE;
	v->a[21346] = anon_sym_LT_AMP_DASH;
	v->a[21347] = anon_sym_GT_AMP_DASH;
	v->a[21348] = anon_sym_LT_LT;
	v->a[21349] = anon_sym_LT_LT_DASH;
	v->a[21350] = aux_sym_heredoc_redirect_token1;
	v->a[21351] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21352] = anon_sym_DQUOTE;
	v->a[21353] = sym_raw_string;
	v->a[21354] = sym_number;
	v->a[21355] = anon_sym_DOLLAR_LBRACE;
	v->a[21356] = anon_sym_DOLLAR_LPAREN;
	v->a[21357] = anon_sym_BQUOTE;
	v->a[21358] = sym_word;
	v->a[21359] = 15;
	small_parse_table_1068(v);
}

void	small_parse_table_1068(t_small_parse_table_array *v)
{
	v->a[21360] = actions(3);
	v->a[21361] = 1;
	v->a[21362] = sym_comment;
	v->a[21363] = actions(17);
	v->a[21364] = 1;
	v->a[21365] = anon_sym_LPAREN;
	v->a[21366] = actions(493);
	v->a[21367] = 1;
	v->a[21368] = sym_file_descriptor;
	v->a[21369] = actions(497);
	v->a[21370] = 1;
	v->a[21371] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21372] = actions(499);
	v->a[21373] = 1;
	v->a[21374] = anon_sym_DOLLAR;
	v->a[21375] = actions(501);
	v->a[21376] = 1;
	v->a[21377] = anon_sym_DQUOTE;
	v->a[21378] = actions(503);
	v->a[21379] = 1;
	small_parse_table_1069(v);
}

void	small_parse_table_1069(t_small_parse_table_array *v)
{
	v->a[21380] = anon_sym_DOLLAR_LBRACE;
	v->a[21381] = actions(505);
	v->a[21382] = 1;
	v->a[21383] = anon_sym_DOLLAR_LPAREN;
	v->a[21384] = actions(509);
	v->a[21385] = 1;
	v->a[21386] = sym__bare_dollar;
	v->a[21387] = state(219);
	v->a[21388] = 1;
	v->a[21389] = aux_sym_command_repeat2;
	v->a[21390] = state(729);
	v->a[21391] = 1;
	v->a[21392] = sym_concatenation;
	v->a[21393] = state(1333);
	v->a[21394] = 1;
	v->a[21395] = sym_subshell;
	v->a[21396] = actions(511);
	v->a[21397] = 3;
	v->a[21398] = sym_raw_string;
	v->a[21399] = sym_number;
	small_parse_table_1070(v);
}

/* EOF small_parse_table_213.c */
