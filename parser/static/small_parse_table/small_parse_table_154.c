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
	v->a[15400] = sym_variable_name;
	v->a[15401] = state(59);
	v->a[15402] = 1;
	v->a[15403] = aux_sym__terminated_statement;
	v->a[15404] = state(189);
	v->a[15405] = 1;
	v->a[15406] = sym_command_name;
	v->a[15407] = state(249);
	v->a[15408] = 1;
	v->a[15409] = sym_variable_assignment;
	v->a[15410] = state(650);
	v->a[15411] = 1;
	v->a[15412] = sym_concatenation;
	v->a[15413] = state(712);
	v->a[15414] = 1;
	v->a[15415] = sym_file_redirect;
	v->a[15416] = state(713);
	v->a[15417] = 1;
	v->a[15418] = aux_sym_command_repeat1;
	v->a[15419] = state(1236);
	small_parse_table_771(v);
}

void	small_parse_table_771(t_small_parse_table_array *v)
{
	v->a[15420] = 1;
	v->a[15421] = sym_pipeline;
	v->a[15422] = state(1333);
	v->a[15423] = 1;
	v->a[15424] = aux_sym_redirected_statement_repeat2;
	v->a[15425] = state(2103);
	v->a[15426] = 1;
	v->a[15427] = sym__statement_not_pipeline;
	v->a[15428] = actions(11);
	v->a[15429] = 2;
	v->a[15430] = anon_sym_while;
	v->a[15431] = anon_sym_until;
	v->a[15432] = actions(57);
	v->a[15433] = 2;
	v->a[15434] = anon_sym_LT_AMP_DASH;
	v->a[15435] = anon_sym_GT_AMP_DASH;
	v->a[15436] = actions(65);
	v->a[15437] = 2;
	v->a[15438] = sym_raw_string;
	v->a[15439] = sym_number;
	small_parse_table_772(v);
}

void	small_parse_table_772(t_small_parse_table_array *v)
{
	v->a[15440] = state(443);
	v->a[15441] = 5;
	v->a[15442] = sym_arithmetic_expansion;
	v->a[15443] = sym_string;
	v->a[15444] = sym_simple_expansion;
	v->a[15445] = sym_expansion;
	v->a[15446] = sym_command_substitution;
	v->a[15447] = actions(55);
	v->a[15448] = 6;
	v->a[15449] = anon_sym_LT;
	v->a[15450] = anon_sym_GT;
	v->a[15451] = anon_sym_GT_GT;
	v->a[15452] = anon_sym_LT_AMP;
	v->a[15453] = anon_sym_GT_AMP;
	v->a[15454] = anon_sym_GT_PIPE;
	v->a[15455] = state(1157);
	v->a[15456] = 12;
	v->a[15457] = sym_redirected_statement;
	v->a[15458] = sym_for_statement;
	v->a[15459] = sym_while_statement;
	small_parse_table_773(v);
}

void	small_parse_table_773(t_small_parse_table_array *v)
{
	v->a[15460] = sym_if_statement;
	v->a[15461] = sym_case_statement;
	v->a[15462] = sym_function_definition;
	v->a[15463] = sym_compound_statement;
	v->a[15464] = sym_subshell;
	v->a[15465] = sym_list;
	v->a[15466] = sym_negated_command;
	v->a[15467] = sym_command;
	v->a[15468] = sym__variable_assignments;
	v->a[15469] = 31;
	v->a[15470] = actions(3);
	v->a[15471] = 1;
	v->a[15472] = sym_comment;
	v->a[15473] = actions(9);
	v->a[15474] = 1;
	v->a[15475] = anon_sym_for;
	v->a[15476] = actions(13);
	v->a[15477] = 1;
	v->a[15478] = anon_sym_if;
	v->a[15479] = actions(15);
	small_parse_table_774(v);
}

void	small_parse_table_774(t_small_parse_table_array *v)
{
	v->a[15480] = 1;
	v->a[15481] = anon_sym_case;
	v->a[15482] = actions(17);
	v->a[15483] = 1;
	v->a[15484] = anon_sym_LPAREN;
	v->a[15485] = actions(19);
	v->a[15486] = 1;
	v->a[15487] = anon_sym_LBRACE;
	v->a[15488] = actions(45);
	v->a[15489] = 1;
	v->a[15490] = sym_word;
	v->a[15491] = actions(53);
	v->a[15492] = 1;
	v->a[15493] = anon_sym_BANG;
	v->a[15494] = actions(59);
	v->a[15495] = 1;
	v->a[15496] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15497] = actions(61);
	v->a[15498] = 1;
	v->a[15499] = anon_sym_DOLLAR;
	small_parse_table_775(v);
}

/* EOF small_parse_table_154.c */
