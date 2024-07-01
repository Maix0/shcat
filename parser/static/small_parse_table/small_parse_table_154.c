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
	v->a[15400] = 1;
	v->a[15401] = anon_sym_LBRACE;
	v->a[15402] = actions(21);
	v->a[15403] = 1;
	v->a[15404] = anon_sym_BANG;
	v->a[15405] = actions(25);
	v->a[15406] = 1;
	v->a[15407] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15408] = actions(27);
	v->a[15409] = 1;
	v->a[15410] = anon_sym_DOLLAR;
	v->a[15411] = actions(29);
	v->a[15412] = 1;
	v->a[15413] = anon_sym_DQUOTE;
	v->a[15414] = actions(33);
	v->a[15415] = 1;
	v->a[15416] = anon_sym_DOLLAR_LBRACE;
	v->a[15417] = actions(35);
	v->a[15418] = 1;
	v->a[15419] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_771(v);
}

void	small_parse_table_771(t_small_parse_table_array *v)
{
	v->a[15420] = actions(37);
	v->a[15421] = 1;
	v->a[15422] = anon_sym_BQUOTE;
	v->a[15423] = actions(39);
	v->a[15424] = 1;
	v->a[15425] = sym_file_descriptor;
	v->a[15426] = actions(41);
	v->a[15427] = 1;
	v->a[15428] = sym_variable_name;
	v->a[15429] = state(118);
	v->a[15430] = 1;
	v->a[15431] = aux_sym__statements_repeat1;
	v->a[15432] = state(171);
	v->a[15433] = 1;
	v->a[15434] = sym_command_name;
	v->a[15435] = state(237);
	v->a[15436] = 1;
	v->a[15437] = sym_variable_assignment;
	v->a[15438] = state(588);
	v->a[15439] = 1;
	small_parse_table_772(v);
}

void	small_parse_table_772(t_small_parse_table_array *v)
{
	v->a[15440] = sym_concatenation;
	v->a[15441] = state(661);
	v->a[15442] = 1;
	v->a[15443] = aux_sym_command_repeat1;
	v->a[15444] = state(671);
	v->a[15445] = 1;
	v->a[15446] = sym_file_redirect;
	v->a[15447] = state(925);
	v->a[15448] = 1;
	v->a[15449] = sym_command;
	v->a[15450] = state(950);
	v->a[15451] = 1;
	v->a[15452] = sym_redirected_statement;
	v->a[15453] = state(951);
	v->a[15454] = 1;
	v->a[15455] = sym_for_statement;
	v->a[15456] = state(952);
	v->a[15457] = 1;
	v->a[15458] = sym_while_statement;
	v->a[15459] = state(958);
	small_parse_table_773(v);
}

void	small_parse_table_773(t_small_parse_table_array *v)
{
	v->a[15460] = 1;
	v->a[15461] = sym_if_statement;
	v->a[15462] = state(959);
	v->a[15463] = 1;
	v->a[15464] = sym_case_statement;
	v->a[15465] = state(960);
	v->a[15466] = 1;
	v->a[15467] = sym_function_definition;
	v->a[15468] = state(961);
	v->a[15469] = 1;
	v->a[15470] = sym_compound_statement;
	v->a[15471] = state(962);
	v->a[15472] = 1;
	v->a[15473] = sym_subshell;
	v->a[15474] = state(963);
	v->a[15475] = 1;
	v->a[15476] = sym_list;
	v->a[15477] = state(979);
	v->a[15478] = 1;
	v->a[15479] = sym_negated_command;
	small_parse_table_774(v);
}

void	small_parse_table_774(t_small_parse_table_array *v)
{
	v->a[15480] = state(988);
	v->a[15481] = 1;
	v->a[15482] = sym__variable_assignments;
	v->a[15483] = state(1055);
	v->a[15484] = 1;
	v->a[15485] = sym_pipeline;
	v->a[15486] = state(1195);
	v->a[15487] = 1;
	v->a[15488] = aux_sym_redirected_statement_repeat2;
	v->a[15489] = state(1915);
	v->a[15490] = 1;
	v->a[15491] = sym__statement_not_pipeline;
	v->a[15492] = actions(11);
	v->a[15493] = 2;
	v->a[15494] = anon_sym_while;
	v->a[15495] = anon_sym_until;
	v->a[15496] = actions(31);
	v->a[15497] = 2;
	v->a[15498] = sym_raw_string;
	v->a[15499] = sym_number;
	small_parse_table_775(v);
}

/* EOF small_parse_table_154.c */
