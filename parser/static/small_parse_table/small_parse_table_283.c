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
	v->a[28300] = anon_sym_GT_GT_EQ;
	v->a[28301] = anon_sym_AMP_EQ;
	v->a[28302] = anon_sym_CARET_EQ;
	v->a[28303] = anon_sym_PIPE_EQ;
	v->a[28304] = anon_sym_EQ_EQ;
	v->a[28305] = anon_sym_BANG_EQ;
	v->a[28306] = anon_sym_LT_EQ;
	v->a[28307] = anon_sym_GT_EQ;
	v->a[28308] = anon_sym_QMARK;
	v->a[28309] = 6;
	v->a[28310] = actions(3);
	v->a[28311] = 1;
	v->a[28312] = sym_comment;
	v->a[28313] = actions(367);
	v->a[28314] = 1;
	v->a[28315] = sym_file_descriptor;
	v->a[28316] = actions(1029);
	v->a[28317] = 1;
	v->a[28318] = sym_variable_name;
	v->a[28319] = actions(1027);
	small_parse_table_1416(v);
}

void	small_parse_table_1416(t_small_parse_table_array *v)
{
	v->a[28320] = 2;
	v->a[28321] = aux_sym__simple_variable_name_token1;
	v->a[28322] = aux_sym__multiline_variable_name_token1;
	v->a[28323] = actions(1025);
	v->a[28324] = 9;
	v->a[28325] = anon_sym_BANG;
	v->a[28326] = anon_sym_DASH;
	v->a[28327] = anon_sym_STAR;
	v->a[28328] = anon_sym_QMARK;
	v->a[28329] = anon_sym_DOLLAR;
	v->a[28330] = anon_sym_POUND;
	v->a[28331] = anon_sym_AT;
	v->a[28332] = anon_sym_0;
	v->a[28333] = anon_sym__;
	v->a[28334] = actions(361);
	v->a[28335] = 20;
	v->a[28336] = anon_sym_PIPE;
	v->a[28337] = anon_sym_AMP_AMP;
	v->a[28338] = anon_sym_PIPE_PIPE;
	v->a[28339] = anon_sym_LT;
	small_parse_table_1417(v);
}

void	small_parse_table_1417(t_small_parse_table_array *v)
{
	v->a[28340] = anon_sym_GT;
	v->a[28341] = anon_sym_GT_GT;
	v->a[28342] = anon_sym_LT_AMP;
	v->a[28343] = anon_sym_GT_AMP;
	v->a[28344] = anon_sym_GT_PIPE;
	v->a[28345] = anon_sym_LT_GT;
	v->a[28346] = anon_sym_LT_LT;
	v->a[28347] = anon_sym_LT_LT_DASH;
	v->a[28348] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28349] = anon_sym_DQUOTE;
	v->a[28350] = sym_raw_string;
	v->a[28351] = sym_number;
	v->a[28352] = anon_sym_DOLLAR_LBRACE;
	v->a[28353] = anon_sym_DOLLAR_LPAREN;
	v->a[28354] = anon_sym_BQUOTE;
	v->a[28355] = sym_word;
	v->a[28356] = 17;
	v->a[28357] = actions(664);
	v->a[28358] = 1;
	v->a[28359] = sym_comment;
	small_parse_table_1418(v);
}

void	small_parse_table_1418(t_small_parse_table_array *v)
{
	v->a[28360] = actions(702);
	v->a[28361] = 1;
	v->a[28362] = anon_sym_CARET;
	v->a[28363] = actions(704);
	v->a[28364] = 1;
	v->a[28365] = anon_sym_AMP;
	v->a[28366] = actions(710);
	v->a[28367] = 1;
	v->a[28368] = anon_sym_PIPE;
	v->a[28369] = actions(712);
	v->a[28370] = 1;
	v->a[28371] = anon_sym_AMP_AMP;
	v->a[28372] = actions(714);
	v->a[28373] = 1;
	v->a[28374] = anon_sym_PIPE_PIPE;
	v->a[28375] = actions(716);
	v->a[28376] = 1;
	v->a[28377] = anon_sym_QMARK;
	v->a[28378] = actions(718);
	v->a[28379] = 1;
	small_parse_table_1419(v);
}

void	small_parse_table_1419(t_small_parse_table_array *v)
{
	v->a[28380] = anon_sym_EQ;
	v->a[28381] = actions(1031);
	v->a[28382] = 1;
	v->a[28383] = anon_sym_RPAREN_RPAREN;
	v->a[28384] = actions(684);
	v->a[28385] = 2;
	v->a[28386] = anon_sym_GT_GT;
	v->a[28387] = anon_sym_LT_LT;
	v->a[28388] = actions(686);
	v->a[28389] = 2;
	v->a[28390] = anon_sym_PLUS;
	v->a[28391] = anon_sym_DASH;
	v->a[28392] = actions(690);
	v->a[28393] = 2;
	v->a[28394] = anon_sym_PLUS_PLUS2;
	v->a[28395] = anon_sym_DASH_DASH2;
	v->a[28396] = actions(700);
	v->a[28397] = 2;
	v->a[28398] = anon_sym_LT;
	v->a[28399] = anon_sym_GT;
	small_parse_table_1420(v);
}

/* EOF small_parse_table_283.c */
