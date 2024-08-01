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
	v->a[15400] = sym_file_redirect;
	v->a[15401] = state(555);
	v->a[15402] = 1;
	v->a[15403] = sym_concatenation;
	v->a[15404] = state(831);
	v->a[15405] = 1;
	v->a[15406] = sym_variable_assignment;
	v->a[15407] = state(1012);
	v->a[15408] = 1;
	v->a[15409] = aux_sym_redirected_statement_repeat2;
	v->a[15410] = actions(11);
	v->a[15411] = 2;
	v->a[15412] = anon_sym_while;
	v->a[15413] = anon_sym_until;
	v->a[15414] = actions(212);
	v->a[15415] = 3;
	v->a[15416] = anon_sym_LT;
	v->a[15417] = anon_sym_GT;
	v->a[15418] = anon_sym_GT_GT;
	v->a[15419] = actions(214);
	small_parse_table_771(v);
}

void	small_parse_table_771(t_small_parse_table_array *v)
{
	v->a[15420] = 3;
	v->a[15421] = sym_raw_string;
	v->a[15422] = sym_number;
	v->a[15423] = sym_word;
	v->a[15424] = state(277);
	v->a[15425] = 5;
	v->a[15426] = sym_arithmetic_expansion;
	v->a[15427] = sym_string;
	v->a[15428] = sym_simple_expansion;
	v->a[15429] = sym_expansion;
	v->a[15430] = sym_command_substitution;
	v->a[15431] = state(1008);
	v->a[15432] = 7;
	v->a[15433] = sym_for_statement;
	v->a[15434] = sym_while_statement;
	v->a[15435] = sym_if_statement;
	v->a[15436] = sym_compound_statement;
	v->a[15437] = sym_subshell;
	v->a[15438] = sym_command;
	v->a[15439] = sym__variable_assignments;
	small_parse_table_772(v);
}

void	small_parse_table_772(t_small_parse_table_array *v)
{
	v->a[15440] = 23;
	v->a[15441] = actions(3);
	v->a[15442] = 1;
	v->a[15443] = sym_comment;
	v->a[15444] = actions(9);
	v->a[15445] = 1;
	v->a[15446] = anon_sym_for;
	v->a[15447] = actions(13);
	v->a[15448] = 1;
	v->a[15449] = anon_sym_if;
	v->a[15450] = actions(17);
	v->a[15451] = 1;
	v->a[15452] = anon_sym_LPAREN;
	v->a[15453] = actions(19);
	v->a[15454] = 1;
	v->a[15455] = anon_sym_LBRACE;
	v->a[15456] = actions(25);
	v->a[15457] = 1;
	v->a[15458] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15459] = actions(27);
	small_parse_table_773(v);
}

void	small_parse_table_773(t_small_parse_table_array *v)
{
	v->a[15460] = 1;
	v->a[15461] = anon_sym_DOLLAR;
	v->a[15462] = actions(29);
	v->a[15463] = 1;
	v->a[15464] = anon_sym_DQUOTE;
	v->a[15465] = actions(33);
	v->a[15466] = 1;
	v->a[15467] = anon_sym_DOLLAR_LBRACE;
	v->a[15468] = actions(35);
	v->a[15469] = 1;
	v->a[15470] = anon_sym_DOLLAR_LPAREN;
	v->a[15471] = actions(37);
	v->a[15472] = 1;
	v->a[15473] = anon_sym_BQUOTE;
	v->a[15474] = actions(341);
	v->a[15475] = 1;
	v->a[15476] = sym_variable_name;
	v->a[15477] = state(166);
	v->a[15478] = 1;
	v->a[15479] = sym_command_name;
	small_parse_table_774(v);
}

void	small_parse_table_774(t_small_parse_table_array *v)
{
	v->a[15480] = state(398);
	v->a[15481] = 1;
	v->a[15482] = aux_sym_command_repeat1;
	v->a[15483] = state(549);
	v->a[15484] = 1;
	v->a[15485] = sym_concatenation;
	v->a[15486] = state(556);
	v->a[15487] = 1;
	v->a[15488] = sym_file_redirect;
	v->a[15489] = state(888);
	v->a[15490] = 1;
	v->a[15491] = sym_variable_assignment;
	v->a[15492] = state(1010);
	v->a[15493] = 1;
	v->a[15494] = aux_sym_redirected_statement_repeat2;
	v->a[15495] = actions(11);
	v->a[15496] = 2;
	v->a[15497] = anon_sym_while;
	v->a[15498] = anon_sym_until;
	v->a[15499] = actions(23);
	small_parse_table_775(v);
}

/* EOF small_parse_table_154.c */
