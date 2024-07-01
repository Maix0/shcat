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
	v->a[22300] = actions(536);
	v->a[22301] = 1;
	v->a[22302] = sym_file_descriptor;
	v->a[22303] = actions(657);
	v->a[22304] = 1;
	v->a[22305] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22306] = actions(660);
	v->a[22307] = 1;
	v->a[22308] = anon_sym_DOLLAR;
	v->a[22309] = actions(663);
	v->a[22310] = 1;
	v->a[22311] = anon_sym_DQUOTE;
	v->a[22312] = actions(666);
	v->a[22313] = 1;
	v->a[22314] = anon_sym_DOLLAR_LBRACE;
	v->a[22315] = actions(669);
	v->a[22316] = 1;
	v->a[22317] = anon_sym_DOLLAR_LPAREN;
	v->a[22318] = actions(672);
	v->a[22319] = 1;
	small_parse_table_1116(v);
}

void	small_parse_table_1116(t_small_parse_table_array *v)
{
	v->a[22320] = anon_sym_BQUOTE;
	v->a[22321] = actions(675);
	v->a[22322] = 1;
	v->a[22323] = sym__bare_dollar;
	v->a[22324] = state(211);
	v->a[22325] = 1;
	v->a[22326] = aux_sym_command_repeat2;
	v->a[22327] = state(718);
	v->a[22328] = 1;
	v->a[22329] = sym_concatenation;
	v->a[22330] = actions(654);
	v->a[22331] = 3;
	v->a[22332] = sym_raw_string;
	v->a[22333] = sym_number;
	v->a[22334] = sym_word;
	v->a[22335] = state(448);
	v->a[22336] = 5;
	v->a[22337] = sym_arithmetic_expansion;
	v->a[22338] = sym_string;
	v->a[22339] = sym_simple_expansion;
	small_parse_table_1117(v);
}

void	small_parse_table_1117(t_small_parse_table_array *v)
{
	v->a[22340] = sym_expansion;
	v->a[22341] = sym_command_substitution;
	v->a[22342] = actions(516);
	v->a[22343] = 18;
	v->a[22344] = anon_sym_PIPE;
	v->a[22345] = anon_sym_RPAREN;
	v->a[22346] = anon_sym_SEMI_SEMI;
	v->a[22347] = anon_sym_AMP_AMP;
	v->a[22348] = anon_sym_PIPE_PIPE;
	v->a[22349] = anon_sym_LT;
	v->a[22350] = anon_sym_GT;
	v->a[22351] = anon_sym_GT_GT;
	v->a[22352] = anon_sym_LT_AMP;
	v->a[22353] = anon_sym_GT_AMP;
	v->a[22354] = anon_sym_GT_PIPE;
	v->a[22355] = anon_sym_LT_AMP_DASH;
	v->a[22356] = anon_sym_GT_AMP_DASH;
	v->a[22357] = anon_sym_LT_LT;
	v->a[22358] = anon_sym_LT_LT_DASH;
	v->a[22359] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1118(v);
}

void	small_parse_table_1118(t_small_parse_table_array *v)
{
	v->a[22360] = anon_sym_AMP;
	v->a[22361] = anon_sym_SEMI;
	v->a[22362] = 5;
	v->a[22363] = actions(3);
	v->a[22364] = 1;
	v->a[22365] = sym_comment;
	v->a[22366] = actions(575);
	v->a[22367] = 2;
	v->a[22368] = sym_file_descriptor;
	v->a[22369] = sym_variable_name;
	v->a[22370] = state(223);
	v->a[22371] = 2;
	v->a[22372] = sym_concatenation;
	v->a[22373] = aux_sym_for_statement_repeat1;
	v->a[22374] = state(507);
	v->a[22375] = 5;
	v->a[22376] = sym_arithmetic_expansion;
	v->a[22377] = sym_string;
	v->a[22378] = sym_simple_expansion;
	v->a[22379] = sym_expansion;
	small_parse_table_1119(v);
}

void	small_parse_table_1119(t_small_parse_table_array *v)
{
	v->a[22380] = sym_command_substitution;
	v->a[22381] = actions(573);
	v->a[22382] = 26;
	v->a[22383] = anon_sym_PIPE;
	v->a[22384] = anon_sym_SEMI_SEMI;
	v->a[22385] = anon_sym_AMP_AMP;
	v->a[22386] = anon_sym_PIPE_PIPE;
	v->a[22387] = anon_sym_LT;
	v->a[22388] = anon_sym_GT;
	v->a[22389] = anon_sym_GT_GT;
	v->a[22390] = anon_sym_LT_AMP;
	v->a[22391] = anon_sym_GT_AMP;
	v->a[22392] = anon_sym_GT_PIPE;
	v->a[22393] = anon_sym_LT_AMP_DASH;
	v->a[22394] = anon_sym_GT_AMP_DASH;
	v->a[22395] = anon_sym_LT_LT;
	v->a[22396] = anon_sym_LT_LT_DASH;
	v->a[22397] = aux_sym_heredoc_redirect_token1;
	v->a[22398] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22399] = anon_sym_AMP;
	small_parse_table_1120(v);
}

/* EOF small_parse_table_223.c */
