/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_473.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2365(t_small_parse_table_array *v)
{
	v->a[47300] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47301] = anon_sym_AMP;
	v->a[47302] = anon_sym_DOLLAR;
	v->a[47303] = anon_sym_DQUOTE;
	v->a[47304] = sym_raw_string;
	v->a[47305] = sym_number;
	v->a[47306] = anon_sym_DOLLAR_LBRACE;
	v->a[47307] = anon_sym_DOLLAR_LPAREN;
	v->a[47308] = anon_sym_BQUOTE;
	v->a[47309] = sym_word;
	v->a[47310] = anon_sym_SEMI;
	v->a[47311] = 7;
	v->a[47312] = actions(3);
	v->a[47313] = 1;
	v->a[47314] = sym_comment;
	v->a[47315] = actions(1536);
	v->a[47316] = 1;
	v->a[47317] = sym_file_descriptor;
	v->a[47318] = actions(1539);
	v->a[47319] = 1;
	small_parse_table_2366(v);
}

void	small_parse_table_2366(t_small_parse_table_array *v)
{
	v->a[47320] = sym_variable_name;
	v->a[47321] = actions(1622);
	v->a[47322] = 1;
	v->a[47323] = anon_sym_RPAREN;
	v->a[47324] = actions(1526);
	v->a[47325] = 9;
	v->a[47326] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47327] = anon_sym_DOLLAR;
	v->a[47328] = anon_sym_DQUOTE;
	v->a[47329] = sym_raw_string;
	v->a[47330] = sym_number;
	v->a[47331] = anon_sym_DOLLAR_LBRACE;
	v->a[47332] = anon_sym_DOLLAR_LPAREN;
	v->a[47333] = anon_sym_BQUOTE;
	v->a[47334] = sym_word;
	v->a[47335] = actions(1528);
	v->a[47336] = 9;
	v->a[47337] = anon_sym_PIPE;
	v->a[47338] = anon_sym_SEMI_SEMI;
	v->a[47339] = anon_sym_AMP_AMP;
	small_parse_table_2367(v);
}

void	small_parse_table_2367(t_small_parse_table_array *v)
{
	v->a[47340] = anon_sym_PIPE_PIPE;
	v->a[47341] = anon_sym_LT_LT;
	v->a[47342] = anon_sym_LT_LT_DASH;
	v->a[47343] = aux_sym_heredoc_redirect_token1;
	v->a[47344] = anon_sym_AMP;
	v->a[47345] = anon_sym_SEMI;
	v->a[47346] = actions(1533);
	v->a[47347] = 10;
	v->a[47348] = anon_sym_LT;
	v->a[47349] = anon_sym_GT;
	v->a[47350] = anon_sym_GT_GT;
	v->a[47351] = anon_sym_AMP_GT;
	v->a[47352] = anon_sym_AMP_GT_GT;
	v->a[47353] = anon_sym_LT_AMP;
	v->a[47354] = anon_sym_GT_AMP;
	v->a[47355] = anon_sym_GT_PIPE;
	v->a[47356] = anon_sym_LT_AMP_DASH;
	v->a[47357] = anon_sym_GT_AMP_DASH;
	v->a[47358] = 8;
	v->a[47359] = actions(3);
	small_parse_table_2368(v);
}

void	small_parse_table_2368(t_small_parse_table_array *v)
{
	v->a[47360] = 1;
	v->a[47361] = sym_comment;
	v->a[47362] = actions(766);
	v->a[47363] = 1;
	v->a[47364] = anon_sym_PIPE;
	v->a[47365] = actions(774);
	v->a[47366] = 1;
	v->a[47367] = sym_file_descriptor;
	v->a[47368] = actions(1625);
	v->a[47369] = 1;
	v->a[47370] = sym_variable_name;
	v->a[47371] = state(1432);
	v->a[47372] = 2;
	v->a[47373] = sym_variable_assignment;
	v->a[47374] = aux_sym__variable_assignments_repeat1;
	v->a[47375] = state(1433);
	v->a[47376] = 3;
	v->a[47377] = sym_file_redirect;
	v->a[47378] = sym_heredoc_redirect;
	v->a[47379] = aux_sym_redirected_statement_repeat1;
	small_parse_table_2369(v);
}

void	small_parse_table_2369(t_small_parse_table_array *v)
{
	v->a[47380] = actions(900);
	v->a[47381] = 4;
	v->a[47382] = anon_sym_AMP_AMP;
	v->a[47383] = anon_sym_PIPE_PIPE;
	v->a[47384] = anon_sym_LT_LT;
	v->a[47385] = anon_sym_LT_LT_DASH;
	v->a[47386] = actions(762);
	v->a[47387] = 19;
	v->a[47388] = anon_sym_LT;
	v->a[47389] = anon_sym_GT;
	v->a[47390] = anon_sym_GT_GT;
	v->a[47391] = anon_sym_AMP_GT;
	v->a[47392] = anon_sym_AMP_GT_GT;
	v->a[47393] = anon_sym_LT_AMP;
	v->a[47394] = anon_sym_GT_AMP;
	v->a[47395] = anon_sym_GT_PIPE;
	v->a[47396] = anon_sym_LT_AMP_DASH;
	v->a[47397] = anon_sym_GT_AMP_DASH;
	v->a[47398] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47399] = anon_sym_DOLLAR;
	small_parse_table_2370(v);
}

/* EOF small_parse_table_473.c */
