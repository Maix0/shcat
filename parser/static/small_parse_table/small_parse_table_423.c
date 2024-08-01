/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_423.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2115(t_small_parse_table_array *v)
{
	v->a[42300] = 1;
	v->a[42301] = anon_sym_LT_LT;
	v->a[42302] = actions(586);
	v->a[42303] = 1;
	v->a[42304] = anon_sym_SEMI;
	v->a[42305] = actions(1878);
	v->a[42306] = 1;
	v->a[42307] = aux_sym_heredoc_redirect_token1;
	v->a[42308] = state(373);
	v->a[42309] = 1;
	v->a[42310] = sym_terminator;
	v->a[42311] = actions(582);
	v->a[42312] = 2;
	v->a[42313] = anon_sym_AMP_AMP;
	v->a[42314] = anon_sym_PIPE_PIPE;
	v->a[42315] = actions(591);
	v->a[42316] = 2;
	v->a[42317] = anon_sym_esac;
	v->a[42318] = anon_sym_SEMI_SEMI;
	v->a[42319] = actions(1876);
	small_parse_table_2116(v);
}

void	small_parse_table_2116(t_small_parse_table_array *v)
{
	v->a[42320] = 3;
	v->a[42321] = anon_sym_LT;
	v->a[42322] = anon_sym_GT;
	v->a[42323] = anon_sym_GT_GT;
	v->a[42324] = state(971);
	v->a[42325] = 3;
	v->a[42326] = sym_file_redirect;
	v->a[42327] = sym_heredoc_redirect;
	v->a[42328] = aux_sym_redirected_statement_repeat1;
	v->a[42329] = 7;
	v->a[42330] = actions(3);
	v->a[42331] = 1;
	v->a[42332] = sym_comment;
	v->a[42333] = actions(937);
	v->a[42334] = 1;
	v->a[42335] = anon_sym_PERCENT;
	v->a[42336] = actions(1894);
	v->a[42337] = 1;
	v->a[42338] = anon_sym_RBRACE;
	v->a[42339] = state(1589);
	small_parse_table_2117(v);
}

void	small_parse_table_2117(t_small_parse_table_array *v)
{
	v->a[42340] = 1;
	v->a[42341] = sym__expansion_regex;
	v->a[42342] = state(1590);
	v->a[42343] = 1;
	v->a[42344] = sym__expansion_expression;
	v->a[42345] = actions(943);
	v->a[42346] = 3;
	v->a[42347] = sym__immediate_double_hash;
	v->a[42348] = anon_sym_POUND;
	v->a[42349] = anon_sym_PERCENT_PERCENT;
	v->a[42350] = actions(941);
	v->a[42351] = 8;
	v->a[42352] = anon_sym_COLON_DASH;
	v->a[42353] = anon_sym_DASH3;
	v->a[42354] = anon_sym_COLON_EQ;
	v->a[42355] = anon_sym_EQ2;
	v->a[42356] = anon_sym_COLON_QMARK;
	v->a[42357] = anon_sym_QMARK2;
	v->a[42358] = anon_sym_COLON_PLUS;
	v->a[42359] = anon_sym_PLUS3;
	small_parse_table_2118(v);
}

void	small_parse_table_2118(t_small_parse_table_array *v)
{
	v->a[42360] = 6;
	v->a[42361] = actions(3);
	v->a[42362] = 1;
	v->a[42363] = sym_comment;
	v->a[42364] = actions(1890);
	v->a[42365] = 1;
	v->a[42366] = aux_sym_concatenation_token1;
	v->a[42367] = actions(1892);
	v->a[42368] = 1;
	v->a[42369] = sym__concat;
	v->a[42370] = state(895);
	v->a[42371] = 1;
	v->a[42372] = aux_sym_concatenation_repeat1;
	v->a[42373] = actions(917);
	v->a[42374] = 3;
	v->a[42375] = sym_variable_name;
	v->a[42376] = ts_builtin_sym_end;
	v->a[42377] = aux_sym_heredoc_redirect_token1;
	v->a[42378] = actions(919);
	v->a[42379] = 9;
	small_parse_table_2119(v);
}

void	small_parse_table_2119(t_small_parse_table_array *v)
{
	v->a[42380] = anon_sym_PIPE;
	v->a[42381] = anon_sym_SEMI_SEMI;
	v->a[42382] = anon_sym_AMP_AMP;
	v->a[42383] = anon_sym_PIPE_PIPE;
	v->a[42384] = anon_sym_LT;
	v->a[42385] = anon_sym_GT;
	v->a[42386] = anon_sym_GT_GT;
	v->a[42387] = anon_sym_LT_LT;
	v->a[42388] = anon_sym_SEMI;
	v->a[42389] = 7;
	v->a[42390] = actions(3);
	v->a[42391] = 1;
	v->a[42392] = sym_comment;
	v->a[42393] = actions(937);
	v->a[42394] = 1;
	v->a[42395] = anon_sym_PERCENT;
	v->a[42396] = actions(1896);
	v->a[42397] = 1;
	v->a[42398] = anon_sym_RBRACE;
	v->a[42399] = state(1591);
	small_parse_table_2120(v);
}

/* EOF small_parse_table_423.c */
