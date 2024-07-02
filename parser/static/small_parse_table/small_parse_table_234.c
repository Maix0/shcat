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
	v->a[23400] = state(259);
	v->a[23401] = 2;
	v->a[23402] = sym_concatenation;
	v->a[23403] = aux_sym_for_statement_repeat1;
	v->a[23404] = actions(768);
	v->a[23405] = 3;
	v->a[23406] = sym_raw_string;
	v->a[23407] = sym_number;
	v->a[23408] = sym_word;
	v->a[23409] = state(525);
	v->a[23410] = 5;
	v->a[23411] = sym_arithmetic_expansion;
	v->a[23412] = sym_string;
	v->a[23413] = sym_simple_expansion;
	v->a[23414] = sym_expansion;
	v->a[23415] = sym_command_substitution;
	v->a[23416] = actions(513);
	v->a[23417] = 16;
	v->a[23418] = anon_sym_PIPE;
	v->a[23419] = anon_sym_SEMI_SEMI;
	small_parse_table_1171(v);
}

void	small_parse_table_1171(t_small_parse_table_array *v)
{
	v->a[23420] = anon_sym_AMP_AMP;
	v->a[23421] = anon_sym_PIPE_PIPE;
	v->a[23422] = anon_sym_LT;
	v->a[23423] = anon_sym_GT;
	v->a[23424] = anon_sym_GT_GT;
	v->a[23425] = anon_sym_LT_AMP;
	v->a[23426] = anon_sym_GT_AMP;
	v->a[23427] = anon_sym_GT_PIPE;
	v->a[23428] = anon_sym_LT_GT;
	v->a[23429] = anon_sym_LT_LT;
	v->a[23430] = anon_sym_LT_LT_DASH;
	v->a[23431] = aux_sym_heredoc_redirect_token1;
	v->a[23432] = anon_sym_AMP;
	v->a[23433] = anon_sym_SEMI;
	v->a[23434] = 12;
	v->a[23435] = actions(3);
	v->a[23436] = 1;
	v->a[23437] = sym_comment;
	v->a[23438] = actions(515);
	v->a[23439] = 1;
	small_parse_table_1172(v);
}

void	small_parse_table_1172(t_small_parse_table_array *v)
{
	v->a[23440] = sym_file_descriptor;
	v->a[23441] = actions(850);
	v->a[23442] = 1;
	v->a[23443] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23444] = actions(852);
	v->a[23445] = 1;
	v->a[23446] = anon_sym_DOLLAR;
	v->a[23447] = actions(854);
	v->a[23448] = 1;
	v->a[23449] = anon_sym_DQUOTE;
	v->a[23450] = actions(856);
	v->a[23451] = 1;
	v->a[23452] = anon_sym_DOLLAR_LBRACE;
	v->a[23453] = actions(858);
	v->a[23454] = 1;
	v->a[23455] = anon_sym_DOLLAR_LPAREN;
	v->a[23456] = actions(860);
	v->a[23457] = 1;
	v->a[23458] = anon_sym_BQUOTE;
	v->a[23459] = state(253);
	small_parse_table_1173(v);
}

void	small_parse_table_1173(t_small_parse_table_array *v)
{
	v->a[23460] = 2;
	v->a[23461] = sym_concatenation;
	v->a[23462] = aux_sym_for_statement_repeat1;
	v->a[23463] = actions(848);
	v->a[23464] = 3;
	v->a[23465] = sym_raw_string;
	v->a[23466] = sym_number;
	v->a[23467] = sym_word;
	v->a[23468] = state(475);
	v->a[23469] = 5;
	v->a[23470] = sym_arithmetic_expansion;
	v->a[23471] = sym_string;
	v->a[23472] = sym_simple_expansion;
	v->a[23473] = sym_expansion;
	v->a[23474] = sym_command_substitution;
	v->a[23475] = actions(513);
	v->a[23476] = 17;
	v->a[23477] = anon_sym_esac;
	v->a[23478] = anon_sym_PIPE;
	v->a[23479] = anon_sym_SEMI_SEMI;
	small_parse_table_1174(v);
}

void	small_parse_table_1174(t_small_parse_table_array *v)
{
	v->a[23480] = anon_sym_AMP_AMP;
	v->a[23481] = anon_sym_PIPE_PIPE;
	v->a[23482] = anon_sym_LT;
	v->a[23483] = anon_sym_GT;
	v->a[23484] = anon_sym_GT_GT;
	v->a[23485] = anon_sym_LT_AMP;
	v->a[23486] = anon_sym_GT_AMP;
	v->a[23487] = anon_sym_GT_PIPE;
	v->a[23488] = anon_sym_LT_GT;
	v->a[23489] = anon_sym_LT_LT;
	v->a[23490] = anon_sym_LT_LT_DASH;
	v->a[23491] = aux_sym_heredoc_redirect_token1;
	v->a[23492] = anon_sym_AMP;
	v->a[23493] = anon_sym_SEMI;
	v->a[23494] = 12;
	v->a[23495] = actions(3);
	v->a[23496] = 1;
	v->a[23497] = sym_comment;
	v->a[23498] = actions(540);
	v->a[23499] = 1;
	small_parse_table_1175(v);
}

/* EOF small_parse_table_234.c */
