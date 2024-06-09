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
	v->a[15400] = state(141);
	v->a[15401] = 1;
	v->a[15402] = aux_sym__statements_repeat1;
	v->a[15403] = state(175);
	v->a[15404] = 1;
	v->a[15405] = sym_command_name;
	v->a[15406] = state(278);
	v->a[15407] = 1;
	v->a[15408] = sym_variable_assignment;
	v->a[15409] = state(567);
	v->a[15410] = 1;
	v->a[15411] = aux_sym_command_repeat1;
	v->a[15412] = state(582);
	v->a[15413] = 1;
	v->a[15414] = sym_concatenation;
	v->a[15415] = state(743);
	v->a[15416] = 1;
	v->a[15417] = sym_file_redirect;
	v->a[15418] = state(1100);
	v->a[15419] = 1;
	small_parse_table_771(v);
}

void	small_parse_table_771(t_small_parse_table_array *v)
{
	v->a[15420] = sym_pipeline;
	v->a[15421] = state(1196);
	v->a[15422] = 1;
	v->a[15423] = aux_sym_redirected_statement_repeat2;
	v->a[15424] = state(2037);
	v->a[15425] = 1;
	v->a[15426] = sym__statement_not_pipeline;
	v->a[15427] = state(2157);
	v->a[15428] = 1;
	v->a[15429] = sym__statements;
	v->a[15430] = actions(11);
	v->a[15431] = 2;
	v->a[15432] = anon_sym_while;
	v->a[15433] = anon_sym_until;
	v->a[15434] = actions(254);
	v->a[15435] = 2;
	v->a[15436] = anon_sym_LT_AMP_DASH;
	v->a[15437] = anon_sym_GT_AMP_DASH;
	v->a[15438] = state(295);
	v->a[15439] = 6;
	small_parse_table_772(v);
}

void	small_parse_table_772(t_small_parse_table_array *v)
{
	v->a[15440] = sym_arithmetic_expansion;
	v->a[15441] = sym_string;
	v->a[15442] = sym_number;
	v->a[15443] = sym_simple_expansion;
	v->a[15444] = sym_expansion;
	v->a[15445] = sym_command_substitution;
	v->a[15446] = actions(252);
	v->a[15447] = 8;
	v->a[15448] = anon_sym_LT;
	v->a[15449] = anon_sym_GT;
	v->a[15450] = anon_sym_GT_GT;
	v->a[15451] = anon_sym_AMP_GT;
	v->a[15452] = anon_sym_AMP_GT_GT;
	v->a[15453] = anon_sym_LT_AMP;
	v->a[15454] = anon_sym_GT_AMP;
	v->a[15455] = anon_sym_GT_PIPE;
	v->a[15456] = state(1031);
	v->a[15457] = 12;
	v->a[15458] = sym_redirected_statement;
	v->a[15459] = sym_for_statement;
	small_parse_table_773(v);
}

void	small_parse_table_773(t_small_parse_table_array *v)
{
	v->a[15460] = sym_while_statement;
	v->a[15461] = sym_if_statement;
	v->a[15462] = sym_case_statement;
	v->a[15463] = sym_function_definition;
	v->a[15464] = sym_compound_statement;
	v->a[15465] = sym_subshell;
	v->a[15466] = sym_list;
	v->a[15467] = sym_negated_command;
	v->a[15468] = sym_command;
	v->a[15469] = sym_variable_assignments;
	v->a[15470] = 34;
	v->a[15471] = actions(3);
	v->a[15472] = 1;
	v->a[15473] = sym_comment;
	v->a[15474] = actions(9);
	v->a[15475] = 1;
	v->a[15476] = anon_sym_for;
	v->a[15477] = actions(13);
	v->a[15478] = 1;
	v->a[15479] = anon_sym_if;
	small_parse_table_774(v);
}

void	small_parse_table_774(t_small_parse_table_array *v)
{
	v->a[15480] = actions(15);
	v->a[15481] = 1;
	v->a[15482] = anon_sym_case;
	v->a[15483] = actions(17);
	v->a[15484] = 1;
	v->a[15485] = anon_sym_LPAREN;
	v->a[15486] = actions(19);
	v->a[15487] = 1;
	v->a[15488] = anon_sym_LBRACE;
	v->a[15489] = actions(63);
	v->a[15490] = 1;
	v->a[15491] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15492] = actions(65);
	v->a[15493] = 1;
	v->a[15494] = anon_sym_DOLLAR;
	v->a[15495] = actions(67);
	v->a[15496] = 1;
	v->a[15497] = anon_sym_DQUOTE;
	v->a[15498] = actions(69);
	v->a[15499] = 1;
	small_parse_table_775(v);
}

/* EOF small_parse_table_154.c */
