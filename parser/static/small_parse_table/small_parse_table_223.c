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
	v->a[22300] = anon_sym_LT_LT;
	v->a[22301] = anon_sym_LT_LT_DASH;
	v->a[22302] = aux_sym_heredoc_redirect_token1;
	v->a[22303] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22304] = anon_sym_AMP;
	v->a[22305] = anon_sym_DOLLAR;
	v->a[22306] = anon_sym_DQUOTE;
	v->a[22307] = sym_raw_string;
	v->a[22308] = sym_number;
	v->a[22309] = anon_sym_DOLLAR_LBRACE;
	v->a[22310] = anon_sym_DOLLAR_LPAREN;
	v->a[22311] = anon_sym_BQUOTE;
	v->a[22312] = sym_word;
	v->a[22313] = anon_sym_SEMI;
	v->a[22314] = 6;
	v->a[22315] = actions(3);
	v->a[22316] = 1;
	v->a[22317] = sym_comment;
	v->a[22318] = actions(411);
	v->a[22319] = 1;
	small_parse_table_1116(v);
}

void	small_parse_table_1116(t_small_parse_table_array *v)
{
	v->a[22320] = sym_variable_name;
	v->a[22321] = actions(385);
	v->a[22322] = 2;
	v->a[22323] = sym_file_descriptor;
	v->a[22324] = sym__bare_dollar;
	v->a[22325] = actions(409);
	v->a[22326] = 2;
	v->a[22327] = aux_sym__simple_variable_name_token1;
	v->a[22328] = aux_sym__multiline_variable_name_token1;
	v->a[22329] = actions(407);
	v->a[22330] = 9;
	v->a[22331] = anon_sym_BANG;
	v->a[22332] = anon_sym_DASH;
	v->a[22333] = anon_sym_STAR;
	v->a[22334] = anon_sym_QMARK;
	v->a[22335] = anon_sym_DOLLAR;
	v->a[22336] = anon_sym_POUND;
	v->a[22337] = anon_sym_AT;
	v->a[22338] = anon_sym_0;
	v->a[22339] = anon_sym__;
	small_parse_table_1117(v);
}

void	small_parse_table_1117(t_small_parse_table_array *v)
{
	v->a[22340] = actions(379);
	v->a[22341] = 24;
	v->a[22342] = anon_sym_PIPE;
	v->a[22343] = anon_sym_AMP_AMP;
	v->a[22344] = anon_sym_PIPE_PIPE;
	v->a[22345] = anon_sym_LT;
	v->a[22346] = anon_sym_GT;
	v->a[22347] = anon_sym_GT_GT;
	v->a[22348] = anon_sym_AMP_GT;
	v->a[22349] = anon_sym_AMP_GT_GT;
	v->a[22350] = anon_sym_LT_AMP;
	v->a[22351] = anon_sym_GT_AMP;
	v->a[22352] = anon_sym_GT_PIPE;
	v->a[22353] = anon_sym_LT_AMP_DASH;
	v->a[22354] = anon_sym_GT_AMP_DASH;
	v->a[22355] = anon_sym_LT_LT;
	v->a[22356] = anon_sym_LT_LT_DASH;
	v->a[22357] = aux_sym_heredoc_redirect_token1;
	v->a[22358] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22359] = anon_sym_DQUOTE;
	small_parse_table_1118(v);
}

void	small_parse_table_1118(t_small_parse_table_array *v)
{
	v->a[22360] = sym_raw_string;
	v->a[22361] = sym_number;
	v->a[22362] = anon_sym_DOLLAR_LBRACE;
	v->a[22363] = anon_sym_DOLLAR_LPAREN;
	v->a[22364] = anon_sym_BQUOTE;
	v->a[22365] = sym_word;
	v->a[22366] = 5;
	v->a[22367] = actions(3);
	v->a[22368] = 1;
	v->a[22369] = sym_comment;
	v->a[22370] = actions(548);
	v->a[22371] = 2;
	v->a[22372] = sym_file_descriptor;
	v->a[22373] = sym_variable_name;
	v->a[22374] = state(211);
	v->a[22375] = 2;
	v->a[22376] = sym_concatenation;
	v->a[22377] = aux_sym_for_statement_repeat1;
	v->a[22378] = state(361);
	v->a[22379] = 5;
	small_parse_table_1119(v);
}

void	small_parse_table_1119(t_small_parse_table_array *v)
{
	v->a[22380] = sym_arithmetic_expansion;
	v->a[22381] = sym_string;
	v->a[22382] = sym_simple_expansion;
	v->a[22383] = sym_expansion;
	v->a[22384] = sym_command_substitution;
	v->a[22385] = actions(546);
	v->a[22386] = 29;
	v->a[22387] = anon_sym_esac;
	v->a[22388] = anon_sym_PIPE;
	v->a[22389] = anon_sym_SEMI_SEMI;
	v->a[22390] = anon_sym_AMP_AMP;
	v->a[22391] = anon_sym_PIPE_PIPE;
	v->a[22392] = anon_sym_LT;
	v->a[22393] = anon_sym_GT;
	v->a[22394] = anon_sym_GT_GT;
	v->a[22395] = anon_sym_AMP_GT;
	v->a[22396] = anon_sym_AMP_GT_GT;
	v->a[22397] = anon_sym_LT_AMP;
	v->a[22398] = anon_sym_GT_AMP;
	v->a[22399] = anon_sym_GT_PIPE;
	small_parse_table_1120(v);
}

/* EOF small_parse_table_223.c */
