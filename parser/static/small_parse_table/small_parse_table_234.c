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
	v->a[23400] = 2;
	v->a[23401] = sym_file_descriptor;
	v->a[23402] = sym_variable_name;
	v->a[23403] = state(341);
	v->a[23404] = 5;
	v->a[23405] = sym_arithmetic_expansion;
	v->a[23406] = sym_string;
	v->a[23407] = sym_simple_expansion;
	v->a[23408] = sym_expansion;
	v->a[23409] = sym_command_substitution;
	v->a[23410] = actions(758);
	v->a[23411] = 29;
	v->a[23412] = anon_sym_esac;
	v->a[23413] = anon_sym_PIPE;
	v->a[23414] = anon_sym_SEMI_SEMI;
	v->a[23415] = anon_sym_AMP_AMP;
	v->a[23416] = anon_sym_PIPE_PIPE;
	v->a[23417] = anon_sym_LT;
	v->a[23418] = anon_sym_GT;
	v->a[23419] = anon_sym_GT_GT;
	small_parse_table_1171(v);
}

void	small_parse_table_1171(t_small_parse_table_array *v)
{
	v->a[23420] = anon_sym_AMP_GT;
	v->a[23421] = anon_sym_AMP_GT_GT;
	v->a[23422] = anon_sym_LT_AMP;
	v->a[23423] = anon_sym_GT_AMP;
	v->a[23424] = anon_sym_GT_PIPE;
	v->a[23425] = anon_sym_LT_AMP_DASH;
	v->a[23426] = anon_sym_GT_AMP_DASH;
	v->a[23427] = anon_sym_LT_LT;
	v->a[23428] = anon_sym_LT_LT_DASH;
	v->a[23429] = aux_sym_heredoc_redirect_token1;
	v->a[23430] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23431] = anon_sym_AMP;
	v->a[23432] = anon_sym_DOLLAR;
	v->a[23433] = anon_sym_DQUOTE;
	v->a[23434] = sym_raw_string;
	v->a[23435] = sym_number;
	v->a[23436] = anon_sym_DOLLAR_LBRACE;
	v->a[23437] = anon_sym_DOLLAR_LPAREN;
	v->a[23438] = anon_sym_BQUOTE;
	v->a[23439] = sym_word;
	small_parse_table_1172(v);
}

void	small_parse_table_1172(t_small_parse_table_array *v)
{
	v->a[23440] = anon_sym_SEMI;
	v->a[23441] = 5;
	v->a[23442] = actions(3);
	v->a[23443] = 1;
	v->a[23444] = sym_comment;
	v->a[23445] = state(683);
	v->a[23446] = 1;
	v->a[23447] = sym_concatenation;
	v->a[23448] = actions(754);
	v->a[23449] = 2;
	v->a[23450] = sym_file_descriptor;
	v->a[23451] = sym_variable_name;
	v->a[23452] = state(340);
	v->a[23453] = 5;
	v->a[23454] = sym_arithmetic_expansion;
	v->a[23455] = sym_string;
	v->a[23456] = sym_simple_expansion;
	v->a[23457] = sym_expansion;
	v->a[23458] = sym_command_substitution;
	v->a[23459] = actions(756);
	small_parse_table_1173(v);
}

void	small_parse_table_1173(t_small_parse_table_array *v)
{
	v->a[23460] = 29;
	v->a[23461] = anon_sym_esac;
	v->a[23462] = anon_sym_PIPE;
	v->a[23463] = anon_sym_SEMI_SEMI;
	v->a[23464] = anon_sym_AMP_AMP;
	v->a[23465] = anon_sym_PIPE_PIPE;
	v->a[23466] = anon_sym_LT;
	v->a[23467] = anon_sym_GT;
	v->a[23468] = anon_sym_GT_GT;
	v->a[23469] = anon_sym_AMP_GT;
	v->a[23470] = anon_sym_AMP_GT_GT;
	v->a[23471] = anon_sym_LT_AMP;
	v->a[23472] = anon_sym_GT_AMP;
	v->a[23473] = anon_sym_GT_PIPE;
	v->a[23474] = anon_sym_LT_AMP_DASH;
	v->a[23475] = anon_sym_GT_AMP_DASH;
	v->a[23476] = anon_sym_LT_LT;
	v->a[23477] = anon_sym_LT_LT_DASH;
	v->a[23478] = aux_sym_heredoc_redirect_token1;
	v->a[23479] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1174(v);
}

void	small_parse_table_1174(t_small_parse_table_array *v)
{
	v->a[23480] = anon_sym_AMP;
	v->a[23481] = anon_sym_DOLLAR;
	v->a[23482] = anon_sym_DQUOTE;
	v->a[23483] = sym_raw_string;
	v->a[23484] = sym_number;
	v->a[23485] = anon_sym_DOLLAR_LBRACE;
	v->a[23486] = anon_sym_DOLLAR_LPAREN;
	v->a[23487] = anon_sym_BQUOTE;
	v->a[23488] = sym_word;
	v->a[23489] = anon_sym_SEMI;
	v->a[23490] = 5;
	v->a[23491] = actions(3);
	v->a[23492] = 1;
	v->a[23493] = sym_comment;
	v->a[23494] = actions(538);
	v->a[23495] = 2;
	v->a[23496] = sym_file_descriptor;
	v->a[23497] = sym_variable_name;
	v->a[23498] = state(212);
	v->a[23499] = 2;
	small_parse_table_1175(v);
}

/* EOF small_parse_table_234.c */
