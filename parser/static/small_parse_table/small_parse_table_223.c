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
	v->a[22300] = actions(750);
	v->a[22301] = 2;
	v->a[22302] = anon_sym_LT_LT;
	v->a[22303] = anon_sym_LT_LT_DASH;
	v->a[22304] = actions(752);
	v->a[22305] = 2;
	v->a[22306] = aux_sym_heredoc_redirect_token1;
	v->a[22307] = anon_sym_SEMI;
	v->a[22308] = state(929);
	v->a[22309] = 2;
	v->a[22310] = sym_variable_assignment;
	v->a[22311] = aux_sym__variable_assignments_repeat1;
	v->a[22312] = state(931);
	v->a[22313] = 3;
	v->a[22314] = sym_file_redirect;
	v->a[22315] = sym_heredoc_redirect;
	v->a[22316] = aux_sym_redirected_statement_repeat1;
	v->a[22317] = actions(742);
	v->a[22318] = 16;
	v->a[22319] = anon_sym_LT;
	small_parse_table_1116(v);
}

void	small_parse_table_1116(t_small_parse_table_array *v)
{
	v->a[22320] = anon_sym_GT;
	v->a[22321] = anon_sym_GT_GT;
	v->a[22322] = anon_sym_LT_AMP;
	v->a[22323] = anon_sym_GT_AMP;
	v->a[22324] = anon_sym_GT_PIPE;
	v->a[22325] = anon_sym_LT_GT;
	v->a[22326] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22327] = anon_sym_DOLLAR;
	v->a[22328] = anon_sym_DQUOTE;
	v->a[22329] = sym_raw_string;
	v->a[22330] = sym_number;
	v->a[22331] = anon_sym_DOLLAR_LBRACE;
	v->a[22332] = anon_sym_DOLLAR_LPAREN;
	v->a[22333] = anon_sym_BQUOTE;
	v->a[22334] = sym_word;
	v->a[22335] = 11;
	v->a[22336] = actions(3);
	v->a[22337] = 1;
	v->a[22338] = sym_comment;
	v->a[22339] = actions(760);
	small_parse_table_1117(v);
}

void	small_parse_table_1117(t_small_parse_table_array *v)
{
	v->a[22340] = 1;
	v->a[22341] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22342] = actions(763);
	v->a[22343] = 1;
	v->a[22344] = anon_sym_DOLLAR;
	v->a[22345] = actions(766);
	v->a[22346] = 1;
	v->a[22347] = anon_sym_DQUOTE;
	v->a[22348] = actions(769);
	v->a[22349] = 1;
	v->a[22350] = anon_sym_DOLLAR_LBRACE;
	v->a[22351] = actions(772);
	v->a[22352] = 1;
	v->a[22353] = anon_sym_DOLLAR_LPAREN;
	v->a[22354] = actions(775);
	v->a[22355] = 1;
	v->a[22356] = anon_sym_BQUOTE;
	v->a[22357] = state(256);
	v->a[22358] = 2;
	v->a[22359] = sym_concatenation;
	small_parse_table_1118(v);
}

void	small_parse_table_1118(t_small_parse_table_array *v)
{
	v->a[22360] = aux_sym_for_statement_repeat1;
	v->a[22361] = actions(757);
	v->a[22362] = 3;
	v->a[22363] = sym_raw_string;
	v->a[22364] = sym_number;
	v->a[22365] = sym_word;
	v->a[22366] = state(412);
	v->a[22367] = 5;
	v->a[22368] = sym_arithmetic_expansion;
	v->a[22369] = sym_string;
	v->a[22370] = sym_simple_expansion;
	v->a[22371] = sym_expansion;
	v->a[22372] = sym_command_substitution;
	v->a[22373] = actions(618);
	v->a[22374] = 16;
	v->a[22375] = anon_sym_esac;
	v->a[22376] = anon_sym_PIPE;
	v->a[22377] = anon_sym_SEMI_SEMI;
	v->a[22378] = anon_sym_AMP_AMP;
	v->a[22379] = anon_sym_PIPE_PIPE;
	small_parse_table_1119(v);
}

void	small_parse_table_1119(t_small_parse_table_array *v)
{
	v->a[22380] = anon_sym_LT;
	v->a[22381] = anon_sym_GT;
	v->a[22382] = anon_sym_GT_GT;
	v->a[22383] = anon_sym_LT_AMP;
	v->a[22384] = anon_sym_GT_AMP;
	v->a[22385] = anon_sym_GT_PIPE;
	v->a[22386] = anon_sym_LT_GT;
	v->a[22387] = anon_sym_LT_LT;
	v->a[22388] = anon_sym_LT_LT_DASH;
	v->a[22389] = aux_sym_heredoc_redirect_token1;
	v->a[22390] = anon_sym_SEMI;
	v->a[22391] = 12;
	v->a[22392] = actions(3);
	v->a[22393] = 1;
	v->a[22394] = sym_comment;
	v->a[22395] = actions(53);
	v->a[22396] = 1;
	v->a[22397] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22398] = actions(55);
	v->a[22399] = 1;
	small_parse_table_1120(v);
}

/* EOF small_parse_table_223.c */
