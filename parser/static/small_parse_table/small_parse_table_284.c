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
	v->a[28400] = actions(1022);
	v->a[28401] = 1;
	v->a[28402] = anon_sym_BQUOTE;
	v->a[28403] = actions(1024);
	v->a[28404] = 1;
	v->a[28405] = sym_file_descriptor;
	v->a[28406] = actions(1077);
	v->a[28407] = 1;
	v->a[28408] = aux_sym_heredoc_redirect_token1;
	v->a[28409] = state(1334);
	v->a[28410] = 1;
	v->a[28411] = aux_sym__heredoc_command;
	v->a[28412] = state(1722);
	v->a[28413] = 1;
	v->a[28414] = sym_concatenation;
	v->a[28415] = state(1929);
	v->a[28416] = 1;
	v->a[28417] = sym__heredoc_expression;
	v->a[28418] = state(2032);
	v->a[28419] = 1;
	small_parse_table_1421(v);
}

void	small_parse_table_1421(t_small_parse_table_array *v)
{
	v->a[28420] = sym__heredoc_pipeline;
	v->a[28421] = actions(1006);
	v->a[28422] = 2;
	v->a[28423] = anon_sym_AMP_AMP;
	v->a[28424] = anon_sym_PIPE_PIPE;
	v->a[28425] = state(1469);
	v->a[28426] = 2;
	v->a[28427] = sym_file_redirect;
	v->a[28428] = aux_sym_redirected_statement_repeat2;
	v->a[28429] = actions(1002);
	v->a[28430] = 3;
	v->a[28431] = sym_raw_string;
	v->a[28432] = sym_number;
	v->a[28433] = sym_word;
	v->a[28434] = state(1516);
	v->a[28435] = 5;
	v->a[28436] = sym_arithmetic_expansion;
	v->a[28437] = sym_string;
	v->a[28438] = sym_simple_expansion;
	v->a[28439] = sym_expansion;
	small_parse_table_1422(v);
}

void	small_parse_table_1422(t_small_parse_table_array *v)
{
	v->a[28440] = sym_command_substitution;
	v->a[28441] = actions(1008);
	v->a[28442] = 7;
	v->a[28443] = anon_sym_LT;
	v->a[28444] = anon_sym_GT;
	v->a[28445] = anon_sym_GT_GT;
	v->a[28446] = anon_sym_LT_AMP;
	v->a[28447] = anon_sym_GT_AMP;
	v->a[28448] = anon_sym_GT_PIPE;
	v->a[28449] = anon_sym_LT_GT;
	v->a[28450] = 12;
	v->a[28451] = actions(3);
	v->a[28452] = 1;
	v->a[28453] = sym_comment;
	v->a[28454] = actions(782);
	v->a[28455] = 1;
	v->a[28456] = anon_sym_PIPE;
	v->a[28457] = actions(792);
	v->a[28458] = 1;
	v->a[28459] = sym_file_descriptor;
	small_parse_table_1423(v);
}

void	small_parse_table_1423(t_small_parse_table_array *v)
{
	v->a[28460] = actions(797);
	v->a[28461] = 1;
	v->a[28462] = anon_sym_BQUOTE;
	v->a[28463] = actions(1061);
	v->a[28464] = 1;
	v->a[28465] = sym_variable_name;
	v->a[28466] = state(793);
	v->a[28467] = 1;
	v->a[28468] = sym_terminator;
	v->a[28469] = actions(790);
	v->a[28470] = 2;
	v->a[28471] = anon_sym_LT_LT;
	v->a[28472] = anon_sym_LT_LT_DASH;
	v->a[28473] = actions(1059);
	v->a[28474] = 2;
	v->a[28475] = anon_sym_AMP_AMP;
	v->a[28476] = anon_sym_PIPE_PIPE;
	v->a[28477] = state(1115);
	v->a[28478] = 2;
	v->a[28479] = sym_variable_assignment;
	small_parse_table_1424(v);
}

void	small_parse_table_1424(t_small_parse_table_array *v)
{
	v->a[28480] = aux_sym__variable_assignments_repeat1;
	v->a[28481] = actions(786);
	v->a[28482] = 3;
	v->a[28483] = anon_sym_SEMI_SEMI;
	v->a[28484] = aux_sym_heredoc_redirect_token1;
	v->a[28485] = anon_sym_SEMI;
	v->a[28486] = state(1062);
	v->a[28487] = 3;
	v->a[28488] = sym_file_redirect;
	v->a[28489] = sym_heredoc_redirect;
	v->a[28490] = aux_sym_redirected_statement_repeat1;
	v->a[28491] = actions(780);
	v->a[28492] = 15;
	v->a[28493] = anon_sym_LT;
	v->a[28494] = anon_sym_GT;
	v->a[28495] = anon_sym_GT_GT;
	v->a[28496] = anon_sym_LT_AMP;
	v->a[28497] = anon_sym_GT_AMP;
	v->a[28498] = anon_sym_GT_PIPE;
	v->a[28499] = anon_sym_LT_GT;
	small_parse_table_1425(v);
}

/* EOF small_parse_table_284.c */
