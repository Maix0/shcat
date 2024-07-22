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
	v->a[23400] = actions(411);
	v->a[23401] = 1;
	v->a[23402] = anon_sym_DOLLAR_LBRACE;
	v->a[23403] = actions(413);
	v->a[23404] = 1;
	v->a[23405] = anon_sym_DOLLAR_LPAREN;
	v->a[23406] = actions(415);
	v->a[23407] = 1;
	v->a[23408] = anon_sym_BQUOTE;
	v->a[23409] = actions(419);
	v->a[23410] = 1;
	v->a[23411] = sym__bare_dollar;
	v->a[23412] = actions(519);
	v->a[23413] = 1;
	v->a[23414] = sym_file_descriptor;
	v->a[23415] = state(253);
	v->a[23416] = 1;
	v->a[23417] = aux_sym_command_repeat2;
	v->a[23418] = state(674);
	v->a[23419] = 1;
	small_parse_table_1171(v);
}

void	small_parse_table_1171(t_small_parse_table_array *v)
{
	v->a[23420] = sym_concatenation;
	v->a[23421] = actions(493);
	v->a[23422] = 3;
	v->a[23423] = sym_raw_string;
	v->a[23424] = sym_number;
	v->a[23425] = sym_word;
	v->a[23426] = state(495);
	v->a[23427] = 5;
	v->a[23428] = sym_arithmetic_expansion;
	v->a[23429] = sym_string;
	v->a[23430] = sym_simple_expansion;
	v->a[23431] = sym_expansion;
	v->a[23432] = sym_command_substitution;
	v->a[23433] = actions(517);
	v->a[23434] = 15;
	v->a[23435] = anon_sym_PIPE;
	v->a[23436] = anon_sym_SEMI_SEMI;
	v->a[23437] = anon_sym_AMP_AMP;
	v->a[23438] = anon_sym_PIPE_PIPE;
	v->a[23439] = anon_sym_LT;
	small_parse_table_1172(v);
}

void	small_parse_table_1172(t_small_parse_table_array *v)
{
	v->a[23440] = anon_sym_GT;
	v->a[23441] = anon_sym_GT_GT;
	v->a[23442] = anon_sym_LT_AMP;
	v->a[23443] = anon_sym_GT_AMP;
	v->a[23444] = anon_sym_GT_PIPE;
	v->a[23445] = anon_sym_LT_GT;
	v->a[23446] = anon_sym_LT_LT;
	v->a[23447] = anon_sym_LT_LT_DASH;
	v->a[23448] = aux_sym_heredoc_redirect_token1;
	v->a[23449] = anon_sym_SEMI;
	v->a[23450] = 6;
	v->a[23451] = actions(3);
	v->a[23452] = 1;
	v->a[23453] = sym_comment;
	v->a[23454] = actions(367);
	v->a[23455] = 1;
	v->a[23456] = sym_file_descriptor;
	v->a[23457] = actions(491);
	v->a[23458] = 1;
	v->a[23459] = sym_variable_name;
	small_parse_table_1173(v);
}

void	small_parse_table_1173(t_small_parse_table_array *v)
{
	v->a[23460] = actions(489);
	v->a[23461] = 2;
	v->a[23462] = aux_sym__simple_variable_name_token1;
	v->a[23463] = aux_sym__multiline_variable_name_token1;
	v->a[23464] = actions(487);
	v->a[23465] = 8;
	v->a[23466] = anon_sym_BANG;
	v->a[23467] = anon_sym_DASH;
	v->a[23468] = anon_sym_STAR;
	v->a[23469] = anon_sym_QMARK;
	v->a[23470] = anon_sym_DOLLAR;
	v->a[23471] = anon_sym_POUND;
	v->a[23472] = anon_sym_AT;
	v->a[23473] = anon_sym_0;
	v->a[23474] = actions(361);
	v->a[23475] = 21;
	v->a[23476] = anon_sym_PIPE;
	v->a[23477] = anon_sym_AMP_AMP;
	v->a[23478] = anon_sym_PIPE_PIPE;
	v->a[23479] = anon_sym_LT;
	small_parse_table_1174(v);
}

void	small_parse_table_1174(t_small_parse_table_array *v)
{
	v->a[23480] = anon_sym_GT;
	v->a[23481] = anon_sym_GT_GT;
	v->a[23482] = anon_sym_LT_AMP;
	v->a[23483] = anon_sym_GT_AMP;
	v->a[23484] = anon_sym_GT_PIPE;
	v->a[23485] = anon_sym_LT_GT;
	v->a[23486] = anon_sym_LT_LT;
	v->a[23487] = anon_sym_LT_LT_DASH;
	v->a[23488] = aux_sym_heredoc_redirect_token1;
	v->a[23489] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23490] = anon_sym_DQUOTE;
	v->a[23491] = sym_raw_string;
	v->a[23492] = sym_number;
	v->a[23493] = anon_sym_DOLLAR_LBRACE;
	v->a[23494] = anon_sym_DOLLAR_LPAREN;
	v->a[23495] = anon_sym_BQUOTE;
	v->a[23496] = sym_word;
	v->a[23497] = 12;
	v->a[23498] = actions(3);
	v->a[23499] = 1;
	small_parse_table_1175(v);
}

/* EOF small_parse_table_234.c */
