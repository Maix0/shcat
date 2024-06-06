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
	v->a[15400] = actions(2541);
	v->a[15401] = 1;
	v->a[15402] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15403] = actions(2543);
	v->a[15404] = 1;
	v->a[15405] = anon_sym_DOLLAR;
	v->a[15406] = actions(2545);
	v->a[15407] = 1;
	v->a[15408] = sym__special_character;
	v->a[15409] = actions(2547);
	v->a[15410] = 1;
	v->a[15411] = anon_sym_DQUOTE;
	v->a[15412] = actions(2551);
	v->a[15413] = 1;
	v->a[15414] = aux_sym_number_token1;
	v->a[15415] = actions(2553);
	v->a[15416] = 1;
	v->a[15417] = aux_sym_number_token2;
	v->a[15418] = actions(2555);
	v->a[15419] = 1;
	small_parse_table_771(v);
}

void	small_parse_table_771(t_small_parse_table_array *v)
{
	v->a[15420] = anon_sym_DOLLAR_LBRACE;
	v->a[15421] = actions(2557);
	v->a[15422] = 1;
	v->a[15423] = anon_sym_DOLLAR_LPAREN;
	v->a[15424] = actions(2559);
	v->a[15425] = 1;
	v->a[15426] = anon_sym_BQUOTE;
	v->a[15427] = actions(2561);
	v->a[15428] = 1;
	v->a[15429] = anon_sym_DOLLAR_BQUOTE;
	v->a[15430] = actions(2565);
	v->a[15431] = 1;
	v->a[15432] = sym_variable_name;
	v->a[15433] = actions(2567);
	v->a[15434] = 1;
	v->a[15435] = sym__brace_start;
	v->a[15436] = actions(2628);
	v->a[15437] = 1;
	v->a[15438] = aux_sym__simple_variable_name_token1;
	v->a[15439] = state(1522);
	small_parse_table_772(v);
}

void	small_parse_table_772(t_small_parse_table_array *v)
{
	v->a[15440] = 1;
	v->a[15441] = aux_sym__literal_repeat1;
	v->a[15442] = actions(2549);
	v->a[15443] = 2;
	v->a[15444] = sym_test_operator;
	v->a[15445] = sym_raw_string;
	v->a[15446] = state(448);
	v->a[15447] = 3;
	v->a[15448] = sym_variable_assignment;
	v->a[15449] = sym_concatenation;
	v->a[15450] = aux_sym_declaration_command_repeat1;
	v->a[15451] = actions(820);
	v->a[15452] = 7;
	v->a[15453] = anon_sym_PIPE;
	v->a[15454] = anon_sym_LT;
	v->a[15455] = anon_sym_GT;
	v->a[15456] = anon_sym_AMP_GT;
	v->a[15457] = anon_sym_LT_AMP;
	v->a[15458] = anon_sym_GT_AMP;
	v->a[15459] = anon_sym_LT_LT;
	small_parse_table_773(v);
}

void	small_parse_table_773(t_small_parse_table_array *v)
{
	v->a[15460] = state(1350);
	v->a[15461] = 7;
	v->a[15462] = sym_arithmetic_expansion;
	v->a[15463] = sym_brace_expression;
	v->a[15464] = sym_string;
	v->a[15465] = sym_number;
	v->a[15466] = sym_simple_expansion;
	v->a[15467] = sym_expansion;
	v->a[15468] = sym_command_substitution;
	v->a[15469] = actions(822);
	v->a[15470] = 10;
	v->a[15471] = sym_file_descriptor;
	v->a[15472] = anon_sym_PIPE_AMP;
	v->a[15473] = anon_sym_AMP_AMP;
	v->a[15474] = anon_sym_PIPE_PIPE;
	v->a[15475] = anon_sym_GT_GT;
	v->a[15476] = anon_sym_AMP_GT_GT;
	v->a[15477] = anon_sym_GT_PIPE;
	v->a[15478] = anon_sym_LT_AMP_DASH;
	v->a[15479] = anon_sym_GT_AMP_DASH;
	small_parse_table_774(v);
}

void	small_parse_table_774(t_small_parse_table_array *v)
{
	v->a[15480] = anon_sym_LT_LT_DASH;
	v->a[15481] = 9;
	v->a[15482] = actions(3);
	v->a[15483] = 1;
	v->a[15484] = sym_comment;
	v->a[15485] = actions(2528);
	v->a[15486] = 1;
	v->a[15487] = sym_variable_name;
	v->a[15488] = actions(2632);
	v->a[15489] = 1;
	v->a[15490] = aux_sym_heredoc_redirect_token1;
	v->a[15491] = actions(2516);
	v->a[15492] = 2;
	v->a[15493] = anon_sym_PIPE;
	v->a[15494] = anon_sym_PIPE_AMP;
	v->a[15495] = state(1886);
	v->a[15496] = 2;
	v->a[15497] = sym_variable_assignment;
	v->a[15498] = aux_sym_variable_assignments_repeat1;
	v->a[15499] = actions(2526);
	small_parse_table_775(v);
}

/* EOF small_parse_table_154.c */
