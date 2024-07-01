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
	v->a[42301] = anon_sym_DOLLAR_LBRACE;
	v->a[42302] = actions(117);
	v->a[42303] = 1;
	v->a[42304] = anon_sym_DOLLAR_LPAREN;
	v->a[42305] = actions(119);
	v->a[42306] = 1;
	v->a[42307] = anon_sym_BQUOTE;
	v->a[42308] = actions(359);
	v->a[42309] = 1;
	v->a[42310] = sym_variable_name;
	v->a[42311] = actions(1152);
	v->a[42312] = 1;
	v->a[42313] = sym_file_descriptor;
	v->a[42314] = state(177);
	v->a[42315] = 1;
	v->a[42316] = sym_command_name;
	v->a[42317] = state(592);
	v->a[42318] = 1;
	v->a[42319] = sym_concatenation;
	small_parse_table_2116(v);
}

void	small_parse_table_2116(t_small_parse_table_array *v)
{
	v->a[42320] = state(1225);
	v->a[42321] = 1;
	v->a[42322] = sym_file_redirect;
	v->a[42323] = state(1024);
	v->a[42324] = 2;
	v->a[42325] = sym_variable_assignment;
	v->a[42326] = aux_sym_command_repeat1;
	v->a[42327] = actions(113);
	v->a[42328] = 3;
	v->a[42329] = sym_raw_string;
	v->a[42330] = sym_number;
	v->a[42331] = sym_word;
	v->a[42332] = state(359);
	v->a[42333] = 5;
	v->a[42334] = sym_arithmetic_expansion;
	v->a[42335] = sym_string;
	v->a[42336] = sym_simple_expansion;
	v->a[42337] = sym_expansion;
	v->a[42338] = sym_command_substitution;
	v->a[42339] = actions(1150);
	small_parse_table_2117(v);
}

void	small_parse_table_2117(t_small_parse_table_array *v)
{
	v->a[42340] = 7;
	v->a[42341] = anon_sym_LT;
	v->a[42342] = anon_sym_GT;
	v->a[42343] = anon_sym_GT_GT;
	v->a[42344] = anon_sym_LT_AMP;
	v->a[42345] = anon_sym_GT_AMP;
	v->a[42346] = anon_sym_GT_PIPE;
	v->a[42347] = anon_sym_LT_GT;
	v->a[42348] = 7;
	v->a[42349] = actions(3);
	v->a[42350] = 1;
	v->a[42351] = sym_comment;
	v->a[42352] = actions(1432);
	v->a[42353] = 1;
	v->a[42354] = sym_file_descriptor;
	v->a[42355] = actions(1435);
	v->a[42356] = 1;
	v->a[42357] = sym_variable_name;
	v->a[42358] = actions(1499);
	v->a[42359] = 1;
	small_parse_table_2118(v);
}

void	small_parse_table_2118(t_small_parse_table_array *v)
{
	v->a[42360] = anon_sym_RPAREN;
	v->a[42361] = actions(1429);
	v->a[42362] = 7;
	v->a[42363] = anon_sym_LT;
	v->a[42364] = anon_sym_GT;
	v->a[42365] = anon_sym_GT_GT;
	v->a[42366] = anon_sym_LT_AMP;
	v->a[42367] = anon_sym_GT_AMP;
	v->a[42368] = anon_sym_GT_PIPE;
	v->a[42369] = anon_sym_LT_GT;
	v->a[42370] = actions(1422);
	v->a[42371] = 9;
	v->a[42372] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42373] = anon_sym_DOLLAR;
	v->a[42374] = anon_sym_DQUOTE;
	v->a[42375] = sym_raw_string;
	v->a[42376] = sym_number;
	v->a[42377] = anon_sym_DOLLAR_LBRACE;
	v->a[42378] = anon_sym_DOLLAR_LPAREN;
	v->a[42379] = anon_sym_BQUOTE;
	small_parse_table_2119(v);
}

void	small_parse_table_2119(t_small_parse_table_array *v)
{
	v->a[42380] = sym_word;
	v->a[42381] = actions(1424);
	v->a[42382] = 9;
	v->a[42383] = anon_sym_PIPE;
	v->a[42384] = anon_sym_SEMI_SEMI;
	v->a[42385] = anon_sym_AMP_AMP;
	v->a[42386] = anon_sym_PIPE_PIPE;
	v->a[42387] = anon_sym_LT_LT;
	v->a[42388] = anon_sym_LT_LT_DASH;
	v->a[42389] = aux_sym_heredoc_redirect_token1;
	v->a[42390] = anon_sym_AMP;
	v->a[42391] = anon_sym_SEMI;
	v->a[42392] = 4;
	v->a[42393] = actions(3);
	v->a[42394] = 1;
	v->a[42395] = sym_comment;
	v->a[42396] = actions(1439);
	v->a[42397] = 2;
	v->a[42398] = anon_sym_RPAREN;
	v->a[42399] = anon_sym_SEMI_SEMI;
	small_parse_table_2120(v);
}

/* EOF small_parse_table_423.c */
