/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_154.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_770(t_small_parse_table_array *v)
{
	v->a[15400] = actions(71);
	v->a[15401] = 1;
	v->a[15402] = anon_sym_BQUOTE;
	v->a[15403] = actions(220);
	v->a[15404] = 1;
	v->a[15405] = sym_word;
	v->a[15406] = actions(222);
	v->a[15407] = 1;
	v->a[15408] = anon_sym_BANG;
	v->a[15409] = actions(230);
	v->a[15410] = 1;
	v->a[15411] = sym_file_descriptor;
	v->a[15412] = actions(232);
	v->a[15413] = 1;
	v->a[15414] = sym_variable_name;
	v->a[15415] = state(133);
	v->a[15416] = 1;
	v->a[15417] = aux_sym__statements_repeat1;
	v->a[15418] = state(184);
	v->a[15419] = 1;
	small_parse_table_771(v);
}

void	small_parse_table_771(t_small_parse_table_array *v)
{
	v->a[15420] = sym_command_name;
	v->a[15421] = state(245);
	v->a[15422] = 1;
	v->a[15423] = sym_variable_assignment;
	v->a[15424] = state(647);
	v->a[15425] = 1;
	v->a[15426] = sym_concatenation;
	v->a[15427] = state(738);
	v->a[15428] = 1;
	v->a[15429] = sym_file_redirect;
	v->a[15430] = state(828);
	v->a[15431] = 1;
	v->a[15432] = aux_sym_command_repeat1;
	v->a[15433] = state(1196);
	v->a[15434] = 1;
	v->a[15435] = sym_redirected_statement;
	v->a[15436] = state(1212);
	v->a[15437] = 1;
	v->a[15438] = sym_variable_assignments;
	v->a[15439] = state(1215);
	small_parse_table_772(v);
}

void	small_parse_table_772(t_small_parse_table_array *v)
{
	v->a[15440] = 1;
	v->a[15441] = sym_command;
	v->a[15442] = state(1237);
	v->a[15443] = 1;
	v->a[15444] = sym_negated_command;
	v->a[15445] = state(1240);
	v->a[15446] = 1;
	v->a[15447] = sym_list;
	v->a[15448] = state(1245);
	v->a[15449] = 1;
	v->a[15450] = sym_subshell;
	v->a[15451] = state(1257);
	v->a[15452] = 1;
	v->a[15453] = sym_compound_statement;
	v->a[15454] = state(1268);
	v->a[15455] = 1;
	v->a[15456] = sym_function_definition;
	v->a[15457] = state(1277);
	v->a[15458] = 1;
	v->a[15459] = sym_case_statement;
	small_parse_table_773(v);
}

void	small_parse_table_773(t_small_parse_table_array *v)
{
	v->a[15460] = state(1290);
	v->a[15461] = 1;
	v->a[15462] = sym_if_statement;
	v->a[15463] = state(1294);
	v->a[15464] = 1;
	v->a[15465] = sym_while_statement;
	v->a[15466] = state(1295);
	v->a[15467] = 1;
	v->a[15468] = sym_for_statement;
	v->a[15469] = state(1331);
	v->a[15470] = 1;
	v->a[15471] = aux_sym_redirected_statement_repeat2;
	v->a[15472] = state(1389);
	v->a[15473] = 1;
	v->a[15474] = sym_pipeline;
	v->a[15475] = state(2252);
	v->a[15476] = 1;
	v->a[15477] = sym__statement_not_pipeline;
	v->a[15478] = actions(11);
	v->a[15479] = 2;
	small_parse_table_774(v);
}

void	small_parse_table_774(t_small_parse_table_array *v)
{
	v->a[15480] = anon_sym_while;
	v->a[15481] = anon_sym_until;
	v->a[15482] = actions(226);
	v->a[15483] = 2;
	v->a[15484] = anon_sym_LT_AMP_DASH;
	v->a[15485] = anon_sym_GT_AMP_DASH;
	v->a[15486] = actions(228);
	v->a[15487] = 2;
	v->a[15488] = sym_raw_string;
	v->a[15489] = sym_number;
	v->a[15490] = state(294);
	v->a[15491] = 5;
	v->a[15492] = sym_arithmetic_expansion;
	v->a[15493] = sym_string;
	v->a[15494] = sym_simple_expansion;
	v->a[15495] = sym_expansion;
	v->a[15496] = sym_command_substitution;
	v->a[15497] = actions(224);
	v->a[15498] = 8;
	v->a[15499] = anon_sym_LT;
	small_parse_table_775(v);
}

/* EOF small_parse_table_154.c */
