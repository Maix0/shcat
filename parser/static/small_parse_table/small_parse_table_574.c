/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_574.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2870(t_small_parse_table_array *v)
{
	v->a[57400] = sym_raw_string;
	v->a[57401] = sym_number;
	v->a[57402] = sym_word;
	v->a[57403] = state(1772);
	v->a[57404] = 5;
	v->a[57405] = sym_arithmetic_expansion;
	v->a[57406] = sym_string;
	v->a[57407] = sym_simple_expansion;
	v->a[57408] = sym_expansion;
	v->a[57409] = sym_command_substitution;
	v->a[57410] = 11;
	v->a[57411] = actions(3);
	v->a[57412] = 1;
	v->a[57413] = sym_comment;
	v->a[57414] = actions(782);
	v->a[57415] = 1;
	v->a[57416] = anon_sym_PIPE;
	v->a[57417] = actions(784);
	v->a[57418] = 1;
	v->a[57419] = anon_sym_BQUOTE;
	small_parse_table_2871(v);
}

void	small_parse_table_2871(t_small_parse_table_array *v)
{
	v->a[57420] = actions(1888);
	v->a[57421] = 1;
	v->a[57422] = aux_sym_heredoc_redirect_token1;
	v->a[57423] = actions(1890);
	v->a[57424] = 1;
	v->a[57425] = sym_file_descriptor;
	v->a[57426] = state(807);
	v->a[57427] = 1;
	v->a[57428] = sym_terminator;
	v->a[57429] = actions(786);
	v->a[57430] = 2;
	v->a[57431] = anon_sym_SEMI_SEMI;
	v->a[57432] = anon_sym_SEMI;
	v->a[57433] = actions(790);
	v->a[57434] = 2;
	v->a[57435] = anon_sym_LT_LT;
	v->a[57436] = anon_sym_LT_LT_DASH;
	v->a[57437] = actions(1059);
	v->a[57438] = 2;
	v->a[57439] = anon_sym_AMP_AMP;
	small_parse_table_2872(v);
}

void	small_parse_table_2872(t_small_parse_table_array *v)
{
	v->a[57440] = anon_sym_PIPE_PIPE;
	v->a[57441] = state(1062);
	v->a[57442] = 3;
	v->a[57443] = sym_file_redirect;
	v->a[57444] = sym_heredoc_redirect;
	v->a[57445] = aux_sym_redirected_statement_repeat1;
	v->a[57446] = actions(1886);
	v->a[57447] = 7;
	v->a[57448] = anon_sym_LT;
	v->a[57449] = anon_sym_GT;
	v->a[57450] = anon_sym_GT_GT;
	v->a[57451] = anon_sym_LT_AMP;
	v->a[57452] = anon_sym_GT_AMP;
	v->a[57453] = anon_sym_GT_PIPE;
	v->a[57454] = anon_sym_LT_GT;
	v->a[57455] = 3;
	v->a[57456] = actions(3);
	v->a[57457] = 1;
	v->a[57458] = sym_comment;
	v->a[57459] = actions(599);
	small_parse_table_2873(v);
}

void	small_parse_table_2873(t_small_parse_table_array *v)
{
	v->a[57460] = 3;
	v->a[57461] = sym_file_descriptor;
	v->a[57462] = sym__concat;
	v->a[57463] = sym_variable_name;
	v->a[57464] = actions(597);
	v->a[57465] = 17;
	v->a[57466] = anon_sym_LT;
	v->a[57467] = anon_sym_GT;
	v->a[57468] = anon_sym_GT_GT;
	v->a[57469] = anon_sym_LT_AMP;
	v->a[57470] = anon_sym_GT_AMP;
	v->a[57471] = anon_sym_GT_PIPE;
	v->a[57472] = anon_sym_LT_GT;
	v->a[57473] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57474] = aux_sym_concatenation_token1;
	v->a[57475] = anon_sym_DOLLAR;
	v->a[57476] = anon_sym_DQUOTE;
	v->a[57477] = sym_raw_string;
	v->a[57478] = sym_number;
	v->a[57479] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2874(v);
}

void	small_parse_table_2874(t_small_parse_table_array *v)
{
	v->a[57480] = anon_sym_DOLLAR_LPAREN;
	v->a[57481] = anon_sym_BQUOTE;
	v->a[57482] = sym_word;
	v->a[57483] = 10;
	v->a[57484] = actions(3);
	v->a[57485] = 1;
	v->a[57486] = sym_comment;
	v->a[57487] = actions(782);
	v->a[57488] = 1;
	v->a[57489] = anon_sym_PIPE;
	v->a[57490] = actions(1943);
	v->a[57491] = 1;
	v->a[57492] = aux_sym_heredoc_redirect_token1;
	v->a[57493] = actions(1945);
	v->a[57494] = 1;
	v->a[57495] = sym_file_descriptor;
	v->a[57496] = state(687);
	v->a[57497] = 1;
	v->a[57498] = sym_terminator;
	v->a[57499] = actions(790);
	small_parse_table_2875(v);
}

/* EOF small_parse_table_574.c */
