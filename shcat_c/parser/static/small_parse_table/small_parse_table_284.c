/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_284.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1420(t_small_parse_table_array *v)
{
	v->a[28400] = anon_sym_BQUOTE;
	v->a[28401] = anon_sym_DOLLAR_BQUOTE;
	v->a[28402] = anon_sym_LT_LPAREN;
	v->a[28403] = anon_sym_GT_LPAREN;
	v->a[28404] = sym_word;
	v->a[28405] = 10;
	v->a[28406] = actions(3);
	v->a[28407] = 1;
	v->a[28408] = sym_comment;
	v->a[28409] = actions(4272);
	v->a[28410] = 1;
	v->a[28411] = aux_sym_heredoc_redirect_token1;
	v->a[28412] = actions(4386);
	v->a[28413] = 1;
	v->a[28414] = sym_variable_name;
	v->a[28415] = state(6772);
	v->a[28416] = 1;
	v->a[28417] = sym_subscript;
	v->a[28418] = actions(4253);
	v->a[28419] = 2;
	small_parse_table_1421(v);
}

void	small_parse_table_1421(t_small_parse_table_array *v)
{
	v->a[28420] = anon_sym_PIPE;
	v->a[28421] = anon_sym_PIPE_AMP;
	v->a[28422] = state(4358);
	v->a[28423] = 2;
	v->a[28424] = sym_variable_assignment;
	v->a[28425] = aux_sym_variable_assignments_repeat1;
	v->a[28426] = actions(4261);
	v->a[28427] = 3;
	v->a[28428] = sym_file_descriptor;
	v->a[28429] = sym_test_operator;
	v->a[28430] = sym__brace_start;
	v->a[28431] = state(4455);
	v->a[28432] = 3;
	v->a[28433] = sym_file_redirect;
	v->a[28434] = sym_heredoc_redirect;
	v->a[28435] = aux_sym_redirected_statement_repeat1;
	v->a[28436] = actions(4270);
	v->a[28437] = 9;
	v->a[28438] = anon_sym_SEMI;
	v->a[28439] = anon_sym_PIPE_PIPE;
	small_parse_table_1422(v);
}

void	small_parse_table_1422(t_small_parse_table_array *v)
{
	v->a[28440] = anon_sym_AMP_AMP;
	v->a[28441] = anon_sym_AMP;
	v->a[28442] = anon_sym_LT_LT;
	v->a[28443] = anon_sym_SEMI_SEMI;
	v->a[28444] = anon_sym_SEMI_AMP;
	v->a[28445] = anon_sym_SEMI_SEMI_AMP;
	v->a[28446] = anon_sym_LT_LT_DASH;
	v->a[28447] = actions(4247);
	v->a[28448] = 28;
	v->a[28449] = anon_sym_LPAREN_LPAREN;
	v->a[28450] = anon_sym_LT;
	v->a[28451] = anon_sym_GT;
	v->a[28452] = anon_sym_GT_GT;
	v->a[28453] = anon_sym_AMP_GT;
	v->a[28454] = anon_sym_AMP_GT_GT;
	v->a[28455] = anon_sym_LT_AMP;
	v->a[28456] = anon_sym_GT_AMP;
	v->a[28457] = anon_sym_GT_PIPE;
	v->a[28458] = anon_sym_LT_AMP_DASH;
	v->a[28459] = anon_sym_GT_AMP_DASH;
	small_parse_table_1423(v);
}

void	small_parse_table_1423(t_small_parse_table_array *v)
{
	v->a[28460] = anon_sym_LT_LT_LT;
	v->a[28461] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28462] = anon_sym_DOLLAR_LBRACK;
	v->a[28463] = anon_sym_DOLLAR;
	v->a[28464] = sym__special_character;
	v->a[28465] = anon_sym_DQUOTE;
	v->a[28466] = sym_raw_string;
	v->a[28467] = sym_ansi_c_string;
	v->a[28468] = aux_sym_number_token1;
	v->a[28469] = aux_sym_number_token2;
	v->a[28470] = anon_sym_DOLLAR_LBRACE;
	v->a[28471] = anon_sym_DOLLAR_LPAREN;
	v->a[28472] = anon_sym_BQUOTE;
	v->a[28473] = anon_sym_DOLLAR_BQUOTE;
	v->a[28474] = anon_sym_LT_LPAREN;
	v->a[28475] = anon_sym_GT_LPAREN;
	v->a[28476] = sym_word;
	v->a[28477] = 8;
	v->a[28478] = actions(3);
	v->a[28479] = 1;
	small_parse_table_1424(v);
}

void	small_parse_table_1424(t_small_parse_table_array *v)
{
	v->a[28480] = sym_comment;
	v->a[28481] = actions(4397);
	v->a[28482] = 1;
	v->a[28483] = anon_sym_DQUOTE;
	v->a[28484] = actions(4401);
	v->a[28485] = 1;
	v->a[28486] = sym_variable_name;
	v->a[28487] = state(2412);
	v->a[28488] = 1;
	v->a[28489] = sym_string;
	v->a[28490] = actions(4399);
	v->a[28491] = 2;
	v->a[28492] = aux_sym__simple_variable_name_token1;
	v->a[28493] = aux_sym__multiline_variable_name_token1;
	v->a[28494] = actions(1235);
	v->a[28495] = 3;
	v->a[28496] = sym_file_descriptor;
	v->a[28497] = sym_test_operator;
	v->a[28498] = sym__brace_start;
	v->a[28499] = actions(4395);
	small_parse_table_1425(v);
}

/* EOF small_parse_table_284.c */
