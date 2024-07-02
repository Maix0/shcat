/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_223.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1115(t_small_parse_table_array *v)
{
	v->a[22300] = sym_string;
	v->a[22301] = sym_simple_expansion;
	v->a[22302] = sym_expansion;
	v->a[22303] = sym_command_substitution;
	v->a[22304] = actions(520);
	v->a[22305] = 16;
	v->a[22306] = anon_sym_PIPE;
	v->a[22307] = anon_sym_SEMI_SEMI;
	v->a[22308] = anon_sym_AMP_AMP;
	v->a[22309] = anon_sym_PIPE_PIPE;
	v->a[22310] = anon_sym_LT;
	v->a[22311] = anon_sym_GT;
	v->a[22312] = anon_sym_GT_GT;
	v->a[22313] = anon_sym_LT_AMP;
	v->a[22314] = anon_sym_GT_AMP;
	v->a[22315] = anon_sym_GT_PIPE;
	v->a[22316] = anon_sym_LT_GT;
	v->a[22317] = anon_sym_LT_LT;
	v->a[22318] = anon_sym_LT_LT_DASH;
	v->a[22319] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1116(v);
}

void	small_parse_table_1116(t_small_parse_table_array *v)
{
	v->a[22320] = anon_sym_AMP;
	v->a[22321] = anon_sym_SEMI;
	v->a[22322] = 6;
	v->a[22323] = actions(3);
	v->a[22324] = 1;
	v->a[22325] = sym_comment;
	v->a[22326] = actions(753);
	v->a[22327] = 1;
	v->a[22328] = sym_variable_name;
	v->a[22329] = actions(361);
	v->a[22330] = 2;
	v->a[22331] = sym_file_descriptor;
	v->a[22332] = sym__bare_dollar;
	v->a[22333] = actions(751);
	v->a[22334] = 2;
	v->a[22335] = aux_sym__simple_variable_name_token1;
	v->a[22336] = aux_sym__multiline_variable_name_token1;
	v->a[22337] = actions(749);
	v->a[22338] = 9;
	v->a[22339] = anon_sym_BANG;
	small_parse_table_1117(v);
}

void	small_parse_table_1117(t_small_parse_table_array *v)
{
	v->a[22340] = anon_sym_DASH;
	v->a[22341] = anon_sym_STAR;
	v->a[22342] = anon_sym_QMARK;
	v->a[22343] = anon_sym_DOLLAR;
	v->a[22344] = anon_sym_POUND;
	v->a[22345] = anon_sym_AT;
	v->a[22346] = anon_sym_0;
	v->a[22347] = anon_sym__;
	v->a[22348] = actions(363);
	v->a[22349] = 20;
	v->a[22350] = anon_sym_PIPE;
	v->a[22351] = anon_sym_AMP_AMP;
	v->a[22352] = anon_sym_PIPE_PIPE;
	v->a[22353] = anon_sym_LT;
	v->a[22354] = anon_sym_GT;
	v->a[22355] = anon_sym_GT_GT;
	v->a[22356] = anon_sym_LT_AMP;
	v->a[22357] = anon_sym_GT_AMP;
	v->a[22358] = anon_sym_GT_PIPE;
	v->a[22359] = anon_sym_LT_GT;
	small_parse_table_1118(v);
}

void	small_parse_table_1118(t_small_parse_table_array *v)
{
	v->a[22360] = anon_sym_LT_LT;
	v->a[22361] = anon_sym_LT_LT_DASH;
	v->a[22362] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22363] = anon_sym_DQUOTE;
	v->a[22364] = sym_raw_string;
	v->a[22365] = sym_number;
	v->a[22366] = anon_sym_DOLLAR_LBRACE;
	v->a[22367] = anon_sym_DOLLAR_LPAREN;
	v->a[22368] = anon_sym_BQUOTE;
	v->a[22369] = sym_word;
	v->a[22370] = 3;
	v->a[22371] = actions(680);
	v->a[22372] = 1;
	v->a[22373] = sym_comment;
	v->a[22374] = actions(755);
	v->a[22375] = 13;
	v->a[22376] = anon_sym_PIPE;
	v->a[22377] = anon_sym_EQ;
	v->a[22378] = anon_sym_LT;
	v->a[22379] = anon_sym_GT;
	small_parse_table_1119(v);
}

void	small_parse_table_1119(t_small_parse_table_array *v)
{
	v->a[22380] = anon_sym_GT_GT;
	v->a[22381] = anon_sym_LT_LT;
	v->a[22382] = anon_sym_CARET;
	v->a[22383] = anon_sym_AMP;
	v->a[22384] = anon_sym_PLUS;
	v->a[22385] = anon_sym_DASH;
	v->a[22386] = anon_sym_STAR;
	v->a[22387] = anon_sym_SLASH;
	v->a[22388] = anon_sym_PERCENT;
	v->a[22389] = actions(757);
	v->a[22390] = 21;
	v->a[22391] = anon_sym_AMP_AMP;
	v->a[22392] = anon_sym_PIPE_PIPE;
	v->a[22393] = anon_sym_RPAREN_RPAREN;
	v->a[22394] = anon_sym_PLUS_EQ;
	v->a[22395] = anon_sym_DASH_EQ;
	v->a[22396] = anon_sym_STAR_EQ;
	v->a[22397] = anon_sym_SLASH_EQ;
	v->a[22398] = anon_sym_PERCENT_EQ;
	v->a[22399] = anon_sym_LT_LT_EQ;
	small_parse_table_1120(v);
}

/* EOF small_parse_table_223.c */
