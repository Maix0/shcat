/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_623.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3115(t_small_parse_table_array *v)
{
	v->a[62300] = actions(2179);
	v->a[62301] = 7;
	v->a[62302] = anon_sym_LT;
	v->a[62303] = anon_sym_GT;
	v->a[62304] = anon_sym_GT_GT;
	v->a[62305] = anon_sym_LT_AMP;
	v->a[62306] = anon_sym_GT_AMP;
	v->a[62307] = anon_sym_GT_PIPE;
	v->a[62308] = anon_sym_LT_GT;
	v->a[62309] = 3;
	v->a[62310] = actions(3);
	v->a[62311] = 1;
	v->a[62312] = sym_comment;
	v->a[62313] = actions(796);
	v->a[62314] = 3;
	v->a[62315] = sym_file_descriptor;
	v->a[62316] = sym__concat;
	v->a[62317] = sym_variable_name;
	v->a[62318] = actions(794);
	v->a[62319] = 17;
	small_parse_table_3116(v);
}

void	small_parse_table_3116(t_small_parse_table_array *v)
{
	v->a[62320] = anon_sym_LT;
	v->a[62321] = anon_sym_GT;
	v->a[62322] = anon_sym_GT_GT;
	v->a[62323] = anon_sym_LT_AMP;
	v->a[62324] = anon_sym_GT_AMP;
	v->a[62325] = anon_sym_GT_PIPE;
	v->a[62326] = anon_sym_LT_GT;
	v->a[62327] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62328] = aux_sym_concatenation_token1;
	v->a[62329] = anon_sym_DOLLAR;
	v->a[62330] = anon_sym_DQUOTE;
	v->a[62331] = sym_raw_string;
	v->a[62332] = sym_number;
	v->a[62333] = anon_sym_DOLLAR_LBRACE;
	v->a[62334] = anon_sym_DOLLAR_LPAREN;
	v->a[62335] = anon_sym_BQUOTE;
	v->a[62336] = sym_word;
	v->a[62337] = 5;
	v->a[62338] = actions(3);
	v->a[62339] = 1;
	small_parse_table_3117(v);
}

void	small_parse_table_3117(t_small_parse_table_array *v)
{
	v->a[62340] = sym_comment;
	v->a[62341] = actions(702);
	v->a[62342] = 1;
	v->a[62343] = sym_file_descriptor;
	v->a[62344] = actions(938);
	v->a[62345] = 1;
	v->a[62346] = sym_variable_name;
	v->a[62347] = state(1038);
	v->a[62348] = 2;
	v->a[62349] = sym_variable_assignment;
	v->a[62350] = aux_sym__variable_assignments_repeat1;
	v->a[62351] = actions(690);
	v->a[62352] = 16;
	v->a[62353] = anon_sym_LT;
	v->a[62354] = anon_sym_GT;
	v->a[62355] = anon_sym_GT_GT;
	v->a[62356] = anon_sym_LT_AMP;
	v->a[62357] = anon_sym_GT_AMP;
	v->a[62358] = anon_sym_GT_PIPE;
	v->a[62359] = anon_sym_LT_GT;
	small_parse_table_3118(v);
}

void	small_parse_table_3118(t_small_parse_table_array *v)
{
	v->a[62360] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62361] = anon_sym_DOLLAR;
	v->a[62362] = anon_sym_DQUOTE;
	v->a[62363] = sym_raw_string;
	v->a[62364] = sym_number;
	v->a[62365] = anon_sym_DOLLAR_LBRACE;
	v->a[62366] = anon_sym_DOLLAR_LPAREN;
	v->a[62367] = anon_sym_BQUOTE;
	v->a[62368] = sym_word;
	v->a[62369] = 3;
	v->a[62370] = actions(3);
	v->a[62371] = 1;
	v->a[62372] = sym_comment;
	v->a[62373] = actions(2185);
	v->a[62374] = 3;
	v->a[62375] = sym_file_descriptor;
	v->a[62376] = ts_builtin_sym_end;
	v->a[62377] = aux_sym_heredoc_redirect_token1;
	v->a[62378] = actions(2187);
	v->a[62379] = 17;
	small_parse_table_3119(v);
}

void	small_parse_table_3119(t_small_parse_table_array *v)
{
	v->a[62380] = anon_sym_PIPE;
	v->a[62381] = anon_sym_RPAREN;
	v->a[62382] = anon_sym_SEMI_SEMI;
	v->a[62383] = anon_sym_AMP_AMP;
	v->a[62384] = anon_sym_PIPE_PIPE;
	v->a[62385] = anon_sym_LT;
	v->a[62386] = anon_sym_GT;
	v->a[62387] = anon_sym_GT_GT;
	v->a[62388] = anon_sym_LT_AMP;
	v->a[62389] = anon_sym_GT_AMP;
	v->a[62390] = anon_sym_GT_PIPE;
	v->a[62391] = anon_sym_LT_GT;
	v->a[62392] = anon_sym_LT_LT;
	v->a[62393] = anon_sym_LT_LT_DASH;
	v->a[62394] = anon_sym_AMP;
	v->a[62395] = anon_sym_BQUOTE;
	v->a[62396] = anon_sym_SEMI;
	v->a[62397] = 3;
	v->a[62398] = actions(3);
	v->a[62399] = 1;
	small_parse_table_3120(v);
}

/* EOF small_parse_table_623.c */
