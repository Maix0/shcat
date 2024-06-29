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
	v->a[15400] = actions(67);
	v->a[15401] = 1;
	v->a[15402] = anon_sym_DOLLAR_LBRACE;
	v->a[15403] = actions(69);
	v->a[15404] = 1;
	v->a[15405] = anon_sym_DOLLAR_LPAREN;
	v->a[15406] = actions(71);
	v->a[15407] = 1;
	v->a[15408] = anon_sym_BQUOTE;
	v->a[15409] = actions(73);
	v->a[15410] = 1;
	v->a[15411] = sym_file_descriptor;
	v->a[15412] = actions(75);
	v->a[15413] = 1;
	v->a[15414] = sym_variable_name;
	v->a[15415] = state(49);
	v->a[15416] = 1;
	v->a[15417] = aux_sym__terminated_statement;
	v->a[15418] = state(191);
	v->a[15419] = 1;
	small_parse_table_771(v);
}

void	small_parse_table_771(t_small_parse_table_array *v)
{
	v->a[15420] = sym_command_name;
	v->a[15421] = state(281);
	v->a[15422] = 1;
	v->a[15423] = sym_variable_assignment;
	v->a[15424] = state(624);
	v->a[15425] = 1;
	v->a[15426] = sym_concatenation;
	v->a[15427] = state(726);
	v->a[15428] = 1;
	v->a[15429] = sym_file_redirect;
	v->a[15430] = state(733);
	v->a[15431] = 1;
	v->a[15432] = aux_sym_command_repeat1;
	v->a[15433] = state(1200);
	v->a[15434] = 1;
	v->a[15435] = sym_pipeline;
	v->a[15436] = state(1307);
	v->a[15437] = 1;
	v->a[15438] = aux_sym_redirected_statement_repeat2;
	v->a[15439] = state(2117);
	small_parse_table_772(v);
}

void	small_parse_table_772(t_small_parse_table_array *v)
{
	v->a[15440] = 1;
	v->a[15441] = sym__statement_not_pipeline;
	v->a[15442] = actions(11);
	v->a[15443] = 2;
	v->a[15444] = anon_sym_while;
	v->a[15445] = anon_sym_until;
	v->a[15446] = actions(57);
	v->a[15447] = 2;
	v->a[15448] = anon_sym_LT_AMP_DASH;
	v->a[15449] = anon_sym_GT_AMP_DASH;
	v->a[15450] = actions(65);
	v->a[15451] = 2;
	v->a[15452] = sym_raw_string;
	v->a[15453] = sym_number;
	v->a[15454] = state(420);
	v->a[15455] = 5;
	v->a[15456] = sym_arithmetic_expansion;
	v->a[15457] = sym_string;
	v->a[15458] = sym_simple_expansion;
	v->a[15459] = sym_expansion;
	small_parse_table_773(v);
}

void	small_parse_table_773(t_small_parse_table_array *v)
{
	v->a[15460] = sym_command_substitution;
	v->a[15461] = actions(55);
	v->a[15462] = 8;
	v->a[15463] = anon_sym_LT;
	v->a[15464] = anon_sym_GT;
	v->a[15465] = anon_sym_GT_GT;
	v->a[15466] = anon_sym_AMP_GT;
	v->a[15467] = anon_sym_AMP_GT_GT;
	v->a[15468] = anon_sym_LT_AMP;
	v->a[15469] = anon_sym_GT_AMP;
	v->a[15470] = anon_sym_GT_PIPE;
	v->a[15471] = state(1141);
	v->a[15472] = 12;
	v->a[15473] = sym_redirected_statement;
	v->a[15474] = sym_for_statement;
	v->a[15475] = sym_while_statement;
	v->a[15476] = sym_if_statement;
	v->a[15477] = sym_case_statement;
	v->a[15478] = sym_function_definition;
	v->a[15479] = sym_compound_statement;
	small_parse_table_774(v);
}

void	small_parse_table_774(t_small_parse_table_array *v)
{
	v->a[15480] = sym_subshell;
	v->a[15481] = sym_list;
	v->a[15482] = sym_negated_command;
	v->a[15483] = sym_command;
	v->a[15484] = sym__variable_assignments;
	v->a[15485] = 31;
	v->a[15486] = actions(3);
	v->a[15487] = 1;
	v->a[15488] = sym_comment;
	v->a[15489] = actions(9);
	v->a[15490] = 1;
	v->a[15491] = anon_sym_for;
	v->a[15492] = actions(13);
	v->a[15493] = 1;
	v->a[15494] = anon_sym_if;
	v->a[15495] = actions(15);
	v->a[15496] = 1;
	v->a[15497] = anon_sym_case;
	v->a[15498] = actions(17);
	v->a[15499] = 1;
	small_parse_table_775(v);
}

/* EOF small_parse_table_154.c */
