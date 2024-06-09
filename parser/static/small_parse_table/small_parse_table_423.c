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
	v->a[42300] = actions(41);
	v->a[42301] = 1;
	v->a[42302] = anon_sym_DOLLAR_LPAREN;
	v->a[42303] = actions(43);
	v->a[42304] = 1;
	v->a[42305] = anon_sym_BQUOTE;
	v->a[42306] = actions(405);
	v->a[42307] = 1;
	v->a[42308] = sym_variable_name;
	v->a[42309] = actions(1102);
	v->a[42310] = 1;
	v->a[42311] = sym_file_descriptor;
	v->a[42312] = state(184);
	v->a[42313] = 1;
	v->a[42314] = sym_command_name;
	v->a[42315] = state(565);
	v->a[42316] = 1;
	v->a[42317] = sym_concatenation;
	v->a[42318] = state(1237);
	v->a[42319] = 1;
	small_parse_table_2116(v);
}

void	small_parse_table_2116(t_small_parse_table_array *v)
{
	v->a[42320] = sym_file_redirect;
	v->a[42321] = actions(33);
	v->a[42322] = 2;
	v->a[42323] = sym_raw_string;
	v->a[42324] = sym_word;
	v->a[42325] = actions(1100);
	v->a[42326] = 2;
	v->a[42327] = anon_sym_LT_AMP_DASH;
	v->a[42328] = anon_sym_GT_AMP_DASH;
	v->a[42329] = state(996);
	v->a[42330] = 2;
	v->a[42331] = sym_variable_assignment;
	v->a[42332] = aux_sym_command_repeat1;
	v->a[42333] = state(311);
	v->a[42334] = 6;
	v->a[42335] = sym_arithmetic_expansion;
	v->a[42336] = sym_string;
	v->a[42337] = sym_number;
	v->a[42338] = sym_simple_expansion;
	v->a[42339] = sym_expansion;
	small_parse_table_2117(v);
}

void	small_parse_table_2117(t_small_parse_table_array *v)
{
	v->a[42340] = sym_command_substitution;
	v->a[42341] = actions(1098);
	v->a[42342] = 8;
	v->a[42343] = anon_sym_LT;
	v->a[42344] = anon_sym_GT;
	v->a[42345] = anon_sym_GT_GT;
	v->a[42346] = anon_sym_AMP_GT;
	v->a[42347] = anon_sym_AMP_GT_GT;
	v->a[42348] = anon_sym_LT_AMP;
	v->a[42349] = anon_sym_GT_AMP;
	v->a[42350] = anon_sym_GT_PIPE;
	v->a[42351] = 17;
	v->a[42352] = actions(1404);
	v->a[42353] = 1;
	v->a[42354] = sym_comment;
	v->a[42355] = actions(1418);
	v->a[42356] = 1;
	v->a[42357] = anon_sym_AMP;
	v->a[42358] = actions(1420);
	v->a[42359] = 1;
	small_parse_table_2118(v);
}

void	small_parse_table_2118(t_small_parse_table_array *v)
{
	v->a[42360] = anon_sym_PIPE;
	v->a[42361] = actions(1422);
	v->a[42362] = 1;
	v->a[42363] = anon_sym_AMP_AMP;
	v->a[42364] = actions(1424);
	v->a[42365] = 1;
	v->a[42366] = anon_sym_PIPE_PIPE;
	v->a[42367] = actions(1426);
	v->a[42368] = 1;
	v->a[42369] = anon_sym_EQ;
	v->a[42370] = actions(1428);
	v->a[42371] = 1;
	v->a[42372] = anon_sym_CARET;
	v->a[42373] = actions(1430);
	v->a[42374] = 1;
	v->a[42375] = anon_sym_QMARK;
	v->a[42376] = actions(1596);
	v->a[42377] = 1;
	v->a[42378] = anon_sym_RPAREN_RPAREN;
	v->a[42379] = actions(1402);
	small_parse_table_2119(v);
}

void	small_parse_table_2119(t_small_parse_table_array *v)
{
	v->a[42380] = 2;
	v->a[42381] = anon_sym_PLUS_PLUS2;
	v->a[42382] = anon_sym_DASH_DASH2;
	v->a[42383] = actions(1408);
	v->a[42384] = 2;
	v->a[42385] = anon_sym_LT;
	v->a[42386] = anon_sym_GT;
	v->a[42387] = actions(1410);
	v->a[42388] = 2;
	v->a[42389] = anon_sym_GT_GT;
	v->a[42390] = anon_sym_LT_LT;
	v->a[42391] = actions(1412);
	v->a[42392] = 2;
	v->a[42393] = anon_sym_LT_EQ;
	v->a[42394] = anon_sym_GT_EQ;
	v->a[42395] = actions(1414);
	v->a[42396] = 2;
	v->a[42397] = anon_sym_PLUS;
	v->a[42398] = anon_sym_DASH;
	v->a[42399] = actions(1416);
	small_parse_table_2120(v);
}

/* EOF small_parse_table_423.c */
