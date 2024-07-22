/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_393.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1965(t_small_parse_table_array *v)
{
	v->a[39300] = anon_sym_GT_PIPE;
	v->a[39301] = anon_sym_LT_GT;
	v->a[39302] = anon_sym_LT_LT;
	v->a[39303] = anon_sym_LT_LT_DASH;
	v->a[39304] = aux_sym_heredoc_redirect_token1;
	v->a[39305] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39306] = aux_sym_concatenation_token1;
	v->a[39307] = anon_sym_DOLLAR;
	v->a[39308] = anon_sym_DQUOTE;
	v->a[39309] = sym_raw_string;
	v->a[39310] = sym_number;
	v->a[39311] = anon_sym_DOLLAR_LBRACE;
	v->a[39312] = anon_sym_DOLLAR_LPAREN;
	v->a[39313] = anon_sym_BQUOTE;
	v->a[39314] = sym_word;
	v->a[39315] = anon_sym_SEMI;
	v->a[39316] = 7;
	v->a[39317] = actions(3);
	v->a[39318] = 1;
	v->a[39319] = sym_comment;
	small_parse_table_1966(v);
}

void	small_parse_table_1966(t_small_parse_table_array *v)
{
	v->a[39320] = actions(1075);
	v->a[39321] = 1;
	v->a[39322] = sym_file_descriptor;
	v->a[39323] = actions(1435);
	v->a[39324] = 1;
	v->a[39325] = sym_variable_name;
	v->a[39326] = state(1370);
	v->a[39327] = 2;
	v->a[39328] = sym_variable_assignment;
	v->a[39329] = aux_sym__variable_assignments_repeat1;
	v->a[39330] = state(1371);
	v->a[39331] = 3;
	v->a[39332] = sym_file_redirect;
	v->a[39333] = sym_heredoc_redirect;
	v->a[39334] = aux_sym_redirected_statement_repeat1;
	v->a[39335] = actions(780);
	v->a[39336] = 9;
	v->a[39337] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39338] = anon_sym_DOLLAR;
	v->a[39339] = anon_sym_DQUOTE;
	small_parse_table_1967(v);
}

void	small_parse_table_1967(t_small_parse_table_array *v)
{
	v->a[39340] = sym_raw_string;
	v->a[39341] = sym_number;
	v->a[39342] = anon_sym_DOLLAR_LBRACE;
	v->a[39343] = anon_sym_DOLLAR_LPAREN;
	v->a[39344] = anon_sym_BQUOTE;
	v->a[39345] = sym_word;
	v->a[39346] = actions(782);
	v->a[39347] = 12;
	v->a[39348] = anon_sym_PIPE;
	v->a[39349] = anon_sym_AMP_AMP;
	v->a[39350] = anon_sym_PIPE_PIPE;
	v->a[39351] = anon_sym_LT;
	v->a[39352] = anon_sym_GT;
	v->a[39353] = anon_sym_GT_GT;
	v->a[39354] = anon_sym_LT_AMP;
	v->a[39355] = anon_sym_GT_AMP;
	v->a[39356] = anon_sym_GT_PIPE;
	v->a[39357] = anon_sym_LT_GT;
	v->a[39358] = anon_sym_LT_LT;
	v->a[39359] = anon_sym_LT_LT_DASH;
	small_parse_table_1968(v);
}

void	small_parse_table_1968(t_small_parse_table_array *v)
{
	v->a[39360] = 16;
	v->a[39361] = actions(3);
	v->a[39362] = 1;
	v->a[39363] = sym_comment;
	v->a[39364] = actions(107);
	v->a[39365] = 1;
	v->a[39366] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39367] = actions(109);
	v->a[39368] = 1;
	v->a[39369] = anon_sym_DOLLAR;
	v->a[39370] = actions(111);
	v->a[39371] = 1;
	v->a[39372] = anon_sym_DQUOTE;
	v->a[39373] = actions(115);
	v->a[39374] = 1;
	v->a[39375] = anon_sym_DOLLAR_LBRACE;
	v->a[39376] = actions(117);
	v->a[39377] = 1;
	v->a[39378] = anon_sym_DOLLAR_LPAREN;
	v->a[39379] = actions(119);
	small_parse_table_1969(v);
}

void	small_parse_table_1969(t_small_parse_table_array *v)
{
	v->a[39380] = 1;
	v->a[39381] = anon_sym_BQUOTE;
	v->a[39382] = actions(359);
	v->a[39383] = 1;
	v->a[39384] = sym_variable_name;
	v->a[39385] = actions(1095);
	v->a[39386] = 1;
	v->a[39387] = sym_file_descriptor;
	v->a[39388] = state(166);
	v->a[39389] = 1;
	v->a[39390] = sym_command_name;
	v->a[39391] = state(598);
	v->a[39392] = 1;
	v->a[39393] = sym_concatenation;
	v->a[39394] = state(1203);
	v->a[39395] = 1;
	v->a[39396] = sym_file_redirect;
	v->a[39397] = state(968);
	v->a[39398] = 2;
	v->a[39399] = sym_variable_assignment;
	small_parse_table_1970(v);
}

/* EOF small_parse_table_393.c */
