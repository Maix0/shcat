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
	v->a[23400] = anon_sym_BQUOTE;
	v->a[23401] = sym_word;
	v->a[23402] = anon_sym_SEMI;
	v->a[23403] = 3;
	v->a[23404] = actions(3);
	v->a[23405] = 1;
	v->a[23406] = sym_comment;
	v->a[23407] = actions(1050);
	v->a[23408] = 2;
	v->a[23409] = sym__concat;
	v->a[23410] = sym__bare_dollar;
	v->a[23411] = actions(1052);
	v->a[23412] = 21;
	v->a[23413] = anon_sym_esac;
	v->a[23414] = anon_sym_PIPE;
	v->a[23415] = anon_sym_SEMI_SEMI;
	v->a[23416] = anon_sym_AMP_AMP;
	v->a[23417] = anon_sym_PIPE_PIPE;
	v->a[23418] = anon_sym_LT;
	v->a[23419] = anon_sym_GT;
	small_parse_table_1171(v);
}

void	small_parse_table_1171(t_small_parse_table_array *v)
{
	v->a[23420] = anon_sym_GT_GT;
	v->a[23421] = anon_sym_LT_LT;
	v->a[23422] = aux_sym_heredoc_redirect_token1;
	v->a[23423] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23424] = aux_sym_concatenation_token1;
	v->a[23425] = anon_sym_DOLLAR;
	v->a[23426] = anon_sym_DQUOTE;
	v->a[23427] = sym_raw_string;
	v->a[23428] = sym_number;
	v->a[23429] = anon_sym_DOLLAR_LBRACE;
	v->a[23430] = anon_sym_DOLLAR_LPAREN;
	v->a[23431] = anon_sym_BQUOTE;
	v->a[23432] = sym_word;
	v->a[23433] = anon_sym_SEMI;
	v->a[23434] = 11;
	v->a[23435] = actions(3);
	v->a[23436] = 1;
	v->a[23437] = sym_comment;
	v->a[23438] = actions(1065);
	v->a[23439] = 1;
	small_parse_table_1172(v);
}

void	small_parse_table_1172(t_small_parse_table_array *v)
{
	v->a[23440] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23441] = actions(1068);
	v->a[23442] = 1;
	v->a[23443] = anon_sym_DOLLAR;
	v->a[23444] = actions(1071);
	v->a[23445] = 1;
	v->a[23446] = anon_sym_DQUOTE;
	v->a[23447] = actions(1074);
	v->a[23448] = 1;
	v->a[23449] = anon_sym_DOLLAR_LBRACE;
	v->a[23450] = actions(1077);
	v->a[23451] = 1;
	v->a[23452] = anon_sym_DOLLAR_LPAREN;
	v->a[23453] = actions(1080);
	v->a[23454] = 1;
	v->a[23455] = anon_sym_BQUOTE;
	v->a[23456] = state(313);
	v->a[23457] = 2;
	v->a[23458] = sym_concatenation;
	v->a[23459] = aux_sym_for_statement_repeat1;
	small_parse_table_1173(v);
}

void	small_parse_table_1173(t_small_parse_table_array *v)
{
	v->a[23460] = actions(1062);
	v->a[23461] = 3;
	v->a[23462] = sym_raw_string;
	v->a[23463] = sym_number;
	v->a[23464] = sym_word;
	v->a[23465] = state(607);
	v->a[23466] = 5;
	v->a[23467] = sym_arithmetic_expansion;
	v->a[23468] = sym_string;
	v->a[23469] = sym_simple_expansion;
	v->a[23470] = sym_expansion;
	v->a[23471] = sym_command_substitution;
	v->a[23472] = actions(428);
	v->a[23473] = 7;
	v->a[23474] = anon_sym_PIPE;
	v->a[23475] = anon_sym_AMP_AMP;
	v->a[23476] = anon_sym_PIPE_PIPE;
	v->a[23477] = anon_sym_LT;
	v->a[23478] = anon_sym_GT;
	v->a[23479] = anon_sym_GT_GT;
	small_parse_table_1174(v);
}

void	small_parse_table_1174(t_small_parse_table_array *v)
{
	v->a[23480] = anon_sym_LT_LT;
	v->a[23481] = 3;
	v->a[23482] = actions(3);
	v->a[23483] = 1;
	v->a[23484] = sym_comment;
	v->a[23485] = actions(1050);
	v->a[23486] = 3;
	v->a[23487] = sym__concat;
	v->a[23488] = sym_variable_name;
	v->a[23489] = ts_builtin_sym_end;
	v->a[23490] = actions(1052);
	v->a[23491] = 20;
	v->a[23492] = anon_sym_PIPE;
	v->a[23493] = anon_sym_SEMI_SEMI;
	v->a[23494] = anon_sym_AMP_AMP;
	v->a[23495] = anon_sym_PIPE_PIPE;
	v->a[23496] = anon_sym_LT;
	v->a[23497] = anon_sym_GT;
	v->a[23498] = anon_sym_GT_GT;
	v->a[23499] = anon_sym_LT_LT;
	small_parse_table_1175(v);
}

/* EOF small_parse_table_234.c */
