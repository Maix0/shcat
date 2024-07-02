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
	v->a[28400] = anon_sym_PIPE_PIPE;
	v->a[28401] = anon_sym_LT;
	v->a[28402] = anon_sym_GT;
	v->a[28403] = anon_sym_GT_GT;
	v->a[28404] = anon_sym_LT_AMP;
	v->a[28405] = anon_sym_GT_AMP;
	v->a[28406] = anon_sym_GT_PIPE;
	v->a[28407] = anon_sym_LT_GT;
	v->a[28408] = anon_sym_LT_LT;
	v->a[28409] = anon_sym_LT_LT_DASH;
	v->a[28410] = aux_sym_heredoc_redirect_token1;
	v->a[28411] = anon_sym_AMP;
	v->a[28412] = anon_sym_SEMI;
	v->a[28413] = 12;
	v->a[28414] = actions(3);
	v->a[28415] = 1;
	v->a[28416] = sym_comment;
	v->a[28417] = actions(511);
	v->a[28418] = 1;
	v->a[28419] = sym_file_descriptor;
	small_parse_table_1421(v);
}

void	small_parse_table_1421(t_small_parse_table_array *v)
{
	v->a[28420] = actions(821);
	v->a[28421] = 1;
	v->a[28422] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28423] = actions(823);
	v->a[28424] = 1;
	v->a[28425] = anon_sym_DOLLAR;
	v->a[28426] = actions(825);
	v->a[28427] = 1;
	v->a[28428] = anon_sym_DQUOTE;
	v->a[28429] = actions(827);
	v->a[28430] = 1;
	v->a[28431] = anon_sym_DOLLAR_LBRACE;
	v->a[28432] = actions(829);
	v->a[28433] = 1;
	v->a[28434] = anon_sym_DOLLAR_LPAREN;
	v->a[28435] = actions(831);
	v->a[28436] = 1;
	v->a[28437] = anon_sym_BQUOTE;
	v->a[28438] = state(274);
	v->a[28439] = 2;
	small_parse_table_1422(v);
}

void	small_parse_table_1422(t_small_parse_table_array *v)
{
	v->a[28440] = sym_concatenation;
	v->a[28441] = aux_sym_for_statement_repeat1;
	v->a[28442] = actions(919);
	v->a[28443] = 3;
	v->a[28444] = sym_raw_string;
	v->a[28445] = sym_number;
	v->a[28446] = sym_word;
	v->a[28447] = state(593);
	v->a[28448] = 5;
	v->a[28449] = sym_arithmetic_expansion;
	v->a[28450] = sym_string;
	v->a[28451] = sym_simple_expansion;
	v->a[28452] = sym_expansion;
	v->a[28453] = sym_command_substitution;
	v->a[28454] = actions(509);
	v->a[28455] = 16;
	v->a[28456] = anon_sym_PIPE;
	v->a[28457] = anon_sym_SEMI_SEMI;
	v->a[28458] = anon_sym_AMP_AMP;
	v->a[28459] = anon_sym_PIPE_PIPE;
	small_parse_table_1423(v);
}

void	small_parse_table_1423(t_small_parse_table_array *v)
{
	v->a[28460] = anon_sym_LT;
	v->a[28461] = anon_sym_GT;
	v->a[28462] = anon_sym_GT_GT;
	v->a[28463] = anon_sym_LT_AMP;
	v->a[28464] = anon_sym_GT_AMP;
	v->a[28465] = anon_sym_GT_PIPE;
	v->a[28466] = anon_sym_LT_GT;
	v->a[28467] = anon_sym_LT_LT;
	v->a[28468] = anon_sym_LT_LT_DASH;
	v->a[28469] = aux_sym_heredoc_redirect_token1;
	v->a[28470] = anon_sym_AMP;
	v->a[28471] = anon_sym_SEMI;
	v->a[28472] = 11;
	v->a[28473] = actions(3);
	v->a[28474] = 1;
	v->a[28475] = sym_comment;
	v->a[28476] = actions(692);
	v->a[28477] = 1;
	v->a[28478] = anon_sym_PIPE;
	v->a[28479] = actions(702);
	small_parse_table_1424(v);
}

void	small_parse_table_1424(t_small_parse_table_array *v)
{
	v->a[28480] = 1;
	v->a[28481] = sym_file_descriptor;
	v->a[28482] = actions(916);
	v->a[28483] = 1;
	v->a[28484] = sym_variable_name;
	v->a[28485] = state(747);
	v->a[28486] = 1;
	v->a[28487] = sym_terminator;
	v->a[28488] = actions(700);
	v->a[28489] = 2;
	v->a[28490] = anon_sym_LT_LT;
	v->a[28491] = anon_sym_LT_LT_DASH;
	v->a[28492] = actions(914);
	v->a[28493] = 2;
	v->a[28494] = anon_sym_AMP_AMP;
	v->a[28495] = anon_sym_PIPE_PIPE;
	v->a[28496] = state(1181);
	v->a[28497] = 2;
	v->a[28498] = sym_variable_assignment;
	v->a[28499] = aux_sym__variable_assignments_repeat1;
	small_parse_table_1425(v);
}

/* EOF small_parse_table_284.c */
