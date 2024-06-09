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
	v->a[57400] = 1;
	v->a[57401] = aux_sym_number_token1;
	v->a[57402] = actions(2127);
	v->a[57403] = 1;
	v->a[57404] = aux_sym_number_token2;
	v->a[57405] = actions(2129);
	v->a[57406] = 1;
	v->a[57407] = anon_sym_DOLLAR_LBRACE;
	v->a[57408] = actions(2131);
	v->a[57409] = 1;
	v->a[57410] = anon_sym_DOLLAR_LPAREN;
	v->a[57411] = actions(2133);
	v->a[57412] = 1;
	v->a[57413] = anon_sym_BQUOTE;
	v->a[57414] = actions(2135);
	v->a[57415] = 1;
	v->a[57416] = sym_extglob_pattern;
	v->a[57417] = state(1124);
	v->a[57418] = 1;
	v->a[57419] = aux_sym_case_statement_repeat1;
	small_parse_table_2871(v);
}

void	small_parse_table_2871(t_small_parse_table_array *v)
{
	v->a[57420] = state(1786);
	v->a[57421] = 1;
	v->a[57422] = sym_case_item;
	v->a[57423] = state(2079);
	v->a[57424] = 1;
	v->a[57425] = sym__case_item_last;
	v->a[57426] = actions(2111);
	v->a[57427] = 2;
	v->a[57428] = sym_raw_string;
	v->a[57429] = sym_word;
	v->a[57430] = state(2016);
	v->a[57431] = 2;
	v->a[57432] = sym_concatenation;
	v->a[57433] = sym__extglob_blob;
	v->a[57434] = actions(2117);
	v->a[57435] = 4;
	v->a[57436] = anon_sym_SEMI_SEMI;
	v->a[57437] = aux_sym_heredoc_redirect_token1;
	v->a[57438] = anon_sym_AMP;
	v->a[57439] = anon_sym_SEMI;
	small_parse_table_2872(v);
}

void	small_parse_table_2872(t_small_parse_table_array *v)
{
	v->a[57440] = state(1896);
	v->a[57441] = 6;
	v->a[57442] = sym_arithmetic_expansion;
	v->a[57443] = sym_string;
	v->a[57444] = sym_number;
	v->a[57445] = sym_simple_expansion;
	v->a[57446] = sym_expansion;
	v->a[57447] = sym_command_substitution;
	v->a[57448] = 3;
	v->a[57449] = actions(3);
	v->a[57450] = 1;
	v->a[57451] = sym_comment;
	v->a[57452] = actions(1251);
	v->a[57453] = 2;
	v->a[57454] = sym_file_descriptor;
	v->a[57455] = sym__concat;
	v->a[57456] = actions(1253);
	v->a[57457] = 26;
	v->a[57458] = anon_sym_PIPE;
	v->a[57459] = anon_sym_AMP_AMP;
	small_parse_table_2873(v);
}

void	small_parse_table_2873(t_small_parse_table_array *v)
{
	v->a[57460] = anon_sym_PIPE_PIPE;
	v->a[57461] = anon_sym_LT;
	v->a[57462] = anon_sym_GT;
	v->a[57463] = anon_sym_GT_GT;
	v->a[57464] = anon_sym_AMP_GT;
	v->a[57465] = anon_sym_AMP_GT_GT;
	v->a[57466] = anon_sym_LT_AMP;
	v->a[57467] = anon_sym_GT_AMP;
	v->a[57468] = anon_sym_GT_PIPE;
	v->a[57469] = anon_sym_LT_AMP_DASH;
	v->a[57470] = anon_sym_GT_AMP_DASH;
	v->a[57471] = anon_sym_LT_LT;
	v->a[57472] = anon_sym_LT_LT_DASH;
	v->a[57473] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57474] = aux_sym_concatenation_token1;
	v->a[57475] = anon_sym_DOLLAR;
	v->a[57476] = anon_sym_DQUOTE;
	v->a[57477] = sym_raw_string;
	v->a[57478] = aux_sym_number_token1;
	v->a[57479] = aux_sym_number_token2;
	small_parse_table_2874(v);
}

void	small_parse_table_2874(t_small_parse_table_array *v)
{
	v->a[57480] = anon_sym_DOLLAR_LBRACE;
	v->a[57481] = anon_sym_DOLLAR_LPAREN;
	v->a[57482] = anon_sym_BQUOTE;
	v->a[57483] = sym_word;
	v->a[57484] = 3;
	v->a[57485] = actions(3);
	v->a[57486] = 1;
	v->a[57487] = sym_comment;
	v->a[57488] = actions(1194);
	v->a[57489] = 2;
	v->a[57490] = sym_file_descriptor;
	v->a[57491] = sym__concat;
	v->a[57492] = actions(1196);
	v->a[57493] = 26;
	v->a[57494] = anon_sym_PIPE;
	v->a[57495] = anon_sym_AMP_AMP;
	v->a[57496] = anon_sym_PIPE_PIPE;
	v->a[57497] = anon_sym_LT;
	v->a[57498] = anon_sym_GT;
	v->a[57499] = anon_sym_GT_GT;
	small_parse_table_2875(v);
}

/* EOF small_parse_table_574.c */
