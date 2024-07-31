/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_234.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1170(t_small_parse_table_array *v)
{
	v->a[23400] = actions(65);
	v->a[23401] = 1;
	v->a[23402] = anon_sym_BQUOTE;
	v->a[23403] = actions(535);
	v->a[23404] = 1;
	v->a[23405] = sym__bare_dollar;
	v->a[23406] = state(270);
	v->a[23407] = 1;
	v->a[23408] = aux_sym_command_repeat2;
	v->a[23409] = state(614);
	v->a[23410] = 1;
	v->a[23411] = sym_concatenation;
	v->a[23412] = actions(778);
	v->a[23413] = 3;
	v->a[23414] = sym_raw_string;
	v->a[23415] = sym_number;
	v->a[23416] = sym_word;
	v->a[23417] = state(449);
	v->a[23418] = 5;
	v->a[23419] = sym_arithmetic_expansion;
	small_parse_table_1171(v);
}

void	small_parse_table_1171(t_small_parse_table_array *v)
{
	v->a[23420] = sym_string;
	v->a[23421] = sym_simple_expansion;
	v->a[23422] = sym_expansion;
	v->a[23423] = sym_command_substitution;
	v->a[23424] = actions(537);
	v->a[23425] = 15;
	v->a[23426] = anon_sym_PIPE;
	v->a[23427] = anon_sym_SEMI_SEMI;
	v->a[23428] = anon_sym_AMP_AMP;
	v->a[23429] = anon_sym_PIPE_PIPE;
	v->a[23430] = anon_sym_LT;
	v->a[23431] = anon_sym_GT;
	v->a[23432] = anon_sym_GT_GT;
	v->a[23433] = anon_sym_LT_AMP;
	v->a[23434] = anon_sym_GT_AMP;
	v->a[23435] = anon_sym_GT_PIPE;
	v->a[23436] = anon_sym_LT_GT;
	v->a[23437] = anon_sym_LT_LT;
	v->a[23438] = anon_sym_LT_LT_DASH;
	v->a[23439] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1172(v);
}

void	small_parse_table_1172(t_small_parse_table_array *v)
{
	v->a[23440] = anon_sym_SEMI;
	v->a[23441] = 11;
	v->a[23442] = actions(3);
	v->a[23443] = 1;
	v->a[23444] = sym_comment;
	v->a[23445] = actions(746);
	v->a[23446] = 1;
	v->a[23447] = anon_sym_PIPE;
	v->a[23448] = actions(852);
	v->a[23449] = 1;
	v->a[23450] = sym_variable_name;
	v->a[23451] = actions(865);
	v->a[23452] = 1;
	v->a[23453] = ts_builtin_sym_end;
	v->a[23454] = state(625);
	v->a[23455] = 1;
	v->a[23456] = sym_terminator;
	v->a[23457] = actions(848);
	v->a[23458] = 2;
	v->a[23459] = anon_sym_AMP_AMP;
	small_parse_table_1173(v);
}

void	small_parse_table_1173(t_small_parse_table_array *v)
{
	v->a[23460] = anon_sym_PIPE_PIPE;
	v->a[23461] = actions(850);
	v->a[23462] = 2;
	v->a[23463] = anon_sym_LT_LT;
	v->a[23464] = anon_sym_LT_LT_DASH;
	v->a[23465] = state(919);
	v->a[23466] = 2;
	v->a[23467] = sym_variable_assignment;
	v->a[23468] = aux_sym__variable_assignments_repeat1;
	v->a[23469] = actions(846);
	v->a[23470] = 3;
	v->a[23471] = anon_sym_SEMI_SEMI;
	v->a[23472] = aux_sym_heredoc_redirect_token1;
	v->a[23473] = anon_sym_SEMI;
	v->a[23474] = state(924);
	v->a[23475] = 3;
	v->a[23476] = sym_file_redirect;
	v->a[23477] = sym_heredoc_redirect;
	v->a[23478] = aux_sym_redirected_statement_repeat1;
	v->a[23479] = actions(742);
	small_parse_table_1174(v);
}

void	small_parse_table_1174(t_small_parse_table_array *v)
{
	v->a[23480] = 16;
	v->a[23481] = anon_sym_LT;
	v->a[23482] = anon_sym_GT;
	v->a[23483] = anon_sym_GT_GT;
	v->a[23484] = anon_sym_LT_AMP;
	v->a[23485] = anon_sym_GT_AMP;
	v->a[23486] = anon_sym_GT_PIPE;
	v->a[23487] = anon_sym_LT_GT;
	v->a[23488] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23489] = anon_sym_DOLLAR;
	v->a[23490] = anon_sym_DQUOTE;
	v->a[23491] = sym_raw_string;
	v->a[23492] = sym_number;
	v->a[23493] = anon_sym_DOLLAR_LBRACE;
	v->a[23494] = anon_sym_DOLLAR_LPAREN;
	v->a[23495] = anon_sym_BQUOTE;
	v->a[23496] = sym_word;
	v->a[23497] = 11;
	v->a[23498] = actions(3);
	v->a[23499] = 1;
	small_parse_table_1175(v);
}

/* EOF small_parse_table_234.c */
