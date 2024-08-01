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
	v->a[47300] = aux_sym_heredoc_redirect_token1;
	v->a[47301] = state(1038);
	v->a[47302] = 2;
	v->a[47303] = sym_file_redirect;
	v->a[47304] = aux_sym_redirected_statement_repeat2;
	v->a[47305] = actions(2168);
	v->a[47306] = 3;
	v->a[47307] = anon_sym_LT;
	v->a[47308] = anon_sym_GT;
	v->a[47309] = anon_sym_GT_GT;
	v->a[47310] = actions(2080);
	v->a[47311] = 7;
	v->a[47312] = anon_sym_esac;
	v->a[47313] = anon_sym_PIPE;
	v->a[47314] = anon_sym_SEMI_SEMI;
	v->a[47315] = anon_sym_AMP_AMP;
	v->a[47316] = anon_sym_PIPE_PIPE;
	v->a[47317] = anon_sym_LT_LT;
	v->a[47318] = anon_sym_SEMI;
	v->a[47319] = 3;
	small_parse_table_2366(v);
}

void	small_parse_table_2366(t_small_parse_table_array *v)
{
	v->a[47320] = actions(3);
	v->a[47321] = 1;
	v->a[47322] = sym_comment;
	v->a[47323] = actions(1274);
	v->a[47324] = 2;
	v->a[47325] = ts_builtin_sym_end;
	v->a[47326] = aux_sym_heredoc_redirect_token1;
	v->a[47327] = actions(1276);
	v->a[47328] = 11;
	v->a[47329] = anon_sym_PIPE;
	v->a[47330] = anon_sym_RPAREN;
	v->a[47331] = anon_sym_SEMI_SEMI;
	v->a[47332] = anon_sym_AMP_AMP;
	v->a[47333] = anon_sym_PIPE_PIPE;
	v->a[47334] = anon_sym_LT;
	v->a[47335] = anon_sym_GT;
	v->a[47336] = anon_sym_GT_GT;
	v->a[47337] = anon_sym_LT_LT;
	v->a[47338] = anon_sym_BQUOTE;
	v->a[47339] = anon_sym_SEMI;
	small_parse_table_2367(v);
}

void	small_parse_table_2367(t_small_parse_table_array *v)
{
	v->a[47340] = 6;
	v->a[47341] = actions(3);
	v->a[47342] = 1;
	v->a[47343] = sym_comment;
	v->a[47344] = actions(597);
	v->a[47345] = 1;
	v->a[47346] = anon_sym_LT_LT;
	v->a[47347] = actions(1938);
	v->a[47348] = 1;
	v->a[47349] = aux_sym_heredoc_redirect_token1;
	v->a[47350] = actions(1924);
	v->a[47351] = 3;
	v->a[47352] = anon_sym_LT;
	v->a[47353] = anon_sym_GT;
	v->a[47354] = anon_sym_GT_GT;
	v->a[47355] = state(1033);
	v->a[47356] = 3;
	v->a[47357] = sym_file_redirect;
	v->a[47358] = sym_heredoc_redirect;
	v->a[47359] = aux_sym_redirected_statement_repeat1;
	small_parse_table_2368(v);
}

void	small_parse_table_2368(t_small_parse_table_array *v)
{
	v->a[47360] = actions(1936);
	v->a[47361] = 5;
	v->a[47362] = anon_sym_PIPE;
	v->a[47363] = anon_sym_SEMI_SEMI;
	v->a[47364] = anon_sym_AMP_AMP;
	v->a[47365] = anon_sym_PIPE_PIPE;
	v->a[47366] = anon_sym_SEMI;
	v->a[47367] = 6;
	v->a[47368] = actions(3);
	v->a[47369] = 1;
	v->a[47370] = sym_comment;
	v->a[47371] = actions(2013);
	v->a[47372] = 1;
	v->a[47373] = sym_string_content;
	v->a[47374] = actions(2017);
	v->a[47375] = 1;
	v->a[47376] = sym_variable_name;
	v->a[47377] = actions(2171);
	v->a[47378] = 1;
	v->a[47379] = anon_sym_DQUOTE;
	small_parse_table_2369(v);
}

void	small_parse_table_2369(t_small_parse_table_array *v)
{
	v->a[47380] = actions(2015);
	v->a[47381] = 2;
	v->a[47382] = aux_sym__simple_variable_name_token1;
	v->a[47383] = aux_sym__multiline_variable_name_token1;
	v->a[47384] = actions(2009);
	v->a[47385] = 8;
	v->a[47386] = anon_sym_BANG;
	v->a[47387] = anon_sym_DASH;
	v->a[47388] = anon_sym_STAR;
	v->a[47389] = anon_sym_QMARK;
	v->a[47390] = anon_sym_DOLLAR;
	v->a[47391] = anon_sym_POUND;
	v->a[47392] = anon_sym_AT;
	v->a[47393] = anon_sym_0;
	v->a[47394] = 6;
	v->a[47395] = actions(3);
	v->a[47396] = 1;
	v->a[47397] = sym_comment;
	v->a[47398] = actions(2013);
	v->a[47399] = 1;
	small_parse_table_2370(v);
}

/* EOF small_parse_table_473.c */
