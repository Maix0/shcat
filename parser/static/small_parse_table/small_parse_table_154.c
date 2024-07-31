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
	v->a[15400] = actions(202);
	v->a[15401] = 1;
	v->a[15402] = sym_word;
	v->a[15403] = actions(204);
	v->a[15404] = 1;
	v->a[15405] = anon_sym_BANG;
	v->a[15406] = state(272);
	v->a[15407] = 1;
	v->a[15408] = sym_command_name;
	v->a[15409] = state(310);
	v->a[15410] = 1;
	v->a[15411] = sym_variable_assignment;
	v->a[15412] = state(486);
	v->a[15413] = 1;
	v->a[15414] = aux_sym_command_repeat1;
	v->a[15415] = state(602);
	v->a[15416] = 1;
	v->a[15417] = sym_concatenation;
	v->a[15418] = state(636);
	v->a[15419] = 1;
	small_parse_table_771(v);
}

void	small_parse_table_771(t_small_parse_table_array *v)
{
	v->a[15420] = sym_file_redirect;
	v->a[15421] = state(1006);
	v->a[15422] = 1;
	v->a[15423] = aux_sym_redirected_statement_repeat2;
	v->a[15424] = state(1237);
	v->a[15425] = 1;
	v->a[15426] = sym_pipeline;
	v->a[15427] = actions(11);
	v->a[15428] = 2;
	v->a[15429] = anon_sym_while;
	v->a[15430] = anon_sym_until;
	v->a[15431] = actions(59);
	v->a[15432] = 2;
	v->a[15433] = sym_raw_string;
	v->a[15434] = sym_number;
	v->a[15435] = state(425);
	v->a[15436] = 5;
	v->a[15437] = sym_arithmetic_expansion;
	v->a[15438] = sym_string;
	v->a[15439] = sym_simple_expansion;
	small_parse_table_772(v);
}

void	small_parse_table_772(t_small_parse_table_array *v)
{
	v->a[15440] = sym_expansion;
	v->a[15441] = sym_command_substitution;
	v->a[15442] = actions(51);
	v->a[15443] = 7;
	v->a[15444] = anon_sym_LT;
	v->a[15445] = anon_sym_GT;
	v->a[15446] = anon_sym_GT_GT;
	v->a[15447] = anon_sym_LT_AMP;
	v->a[15448] = anon_sym_GT_AMP;
	v->a[15449] = anon_sym_GT_PIPE;
	v->a[15450] = anon_sym_LT_GT;
	v->a[15451] = state(934);
	v->a[15452] = 13;
	v->a[15453] = sym__statement_not_pipeline;
	v->a[15454] = sym_redirected_statement;
	v->a[15455] = sym_for_statement;
	v->a[15456] = sym_while_statement;
	v->a[15457] = sym_if_statement;
	v->a[15458] = sym_case_statement;
	v->a[15459] = sym_function_definition;
	small_parse_table_773(v);
}

void	small_parse_table_773(t_small_parse_table_array *v)
{
	v->a[15460] = sym_compound_statement;
	v->a[15461] = sym_subshell;
	v->a[15462] = sym_list;
	v->a[15463] = sym_negated_command;
	v->a[15464] = sym_command;
	v->a[15465] = sym__variable_assignments;
	v->a[15466] = 23;
	v->a[15467] = actions(3);
	v->a[15468] = 1;
	v->a[15469] = sym_comment;
	v->a[15470] = actions(9);
	v->a[15471] = 1;
	v->a[15472] = anon_sym_for;
	v->a[15473] = actions(13);
	v->a[15474] = 1;
	v->a[15475] = anon_sym_if;
	v->a[15476] = actions(17);
	v->a[15477] = 1;
	v->a[15478] = anon_sym_LPAREN;
	v->a[15479] = actions(19);
	small_parse_table_774(v);
}

void	small_parse_table_774(t_small_parse_table_array *v)
{
	v->a[15480] = 1;
	v->a[15481] = anon_sym_LBRACE;
	v->a[15482] = actions(53);
	v->a[15483] = 1;
	v->a[15484] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15485] = actions(55);
	v->a[15486] = 1;
	v->a[15487] = anon_sym_DOLLAR;
	v->a[15488] = actions(57);
	v->a[15489] = 1;
	v->a[15490] = anon_sym_DQUOTE;
	v->a[15491] = actions(61);
	v->a[15492] = 1;
	v->a[15493] = anon_sym_DOLLAR_LBRACE;
	v->a[15494] = actions(63);
	v->a[15495] = 1;
	v->a[15496] = anon_sym_DOLLAR_LPAREN;
	v->a[15497] = actions(65);
	v->a[15498] = 1;
	v->a[15499] = anon_sym_BQUOTE;
	small_parse_table_775(v);
}

/* EOF small_parse_table_154.c */
