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
	v->a[23400] = sym_arithmetic_expansion;
	v->a[23401] = sym_string;
	v->a[23402] = sym_simple_expansion;
	v->a[23403] = sym_expansion;
	v->a[23404] = sym_command_substitution;
	v->a[23405] = actions(715);
	v->a[23406] = 29;
	v->a[23407] = anon_sym_esac;
	v->a[23408] = anon_sym_PIPE;
	v->a[23409] = anon_sym_SEMI_SEMI;
	v->a[23410] = anon_sym_AMP_AMP;
	v->a[23411] = anon_sym_PIPE_PIPE;
	v->a[23412] = anon_sym_LT;
	v->a[23413] = anon_sym_GT;
	v->a[23414] = anon_sym_GT_GT;
	v->a[23415] = anon_sym_AMP_GT;
	v->a[23416] = anon_sym_AMP_GT_GT;
	v->a[23417] = anon_sym_LT_AMP;
	v->a[23418] = anon_sym_GT_AMP;
	v->a[23419] = anon_sym_GT_PIPE;
	small_parse_table_1171(v);
}

void	small_parse_table_1171(t_small_parse_table_array *v)
{
	v->a[23420] = anon_sym_LT_AMP_DASH;
	v->a[23421] = anon_sym_GT_AMP_DASH;
	v->a[23422] = anon_sym_LT_LT;
	v->a[23423] = anon_sym_LT_LT_DASH;
	v->a[23424] = aux_sym_heredoc_redirect_token1;
	v->a[23425] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23426] = anon_sym_AMP;
	v->a[23427] = anon_sym_DOLLAR;
	v->a[23428] = anon_sym_DQUOTE;
	v->a[23429] = sym_raw_string;
	v->a[23430] = sym_number;
	v->a[23431] = anon_sym_DOLLAR_LBRACE;
	v->a[23432] = anon_sym_DOLLAR_LPAREN;
	v->a[23433] = anon_sym_BQUOTE;
	v->a[23434] = sym_word;
	v->a[23435] = anon_sym_SEMI;
	v->a[23436] = 14;
	v->a[23437] = actions(3);
	v->a[23438] = 1;
	v->a[23439] = sym_comment;
	small_parse_table_1172(v);
}

void	small_parse_table_1172(t_small_parse_table_array *v)
{
	v->a[23440] = actions(536);
	v->a[23441] = 1;
	v->a[23442] = sym_file_descriptor;
	v->a[23443] = actions(587);
	v->a[23444] = 1;
	v->a[23445] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23446] = actions(590);
	v->a[23447] = 1;
	v->a[23448] = anon_sym_DOLLAR;
	v->a[23449] = actions(593);
	v->a[23450] = 1;
	v->a[23451] = anon_sym_DQUOTE;
	v->a[23452] = actions(596);
	v->a[23453] = 1;
	v->a[23454] = anon_sym_DOLLAR_LBRACE;
	v->a[23455] = actions(599);
	v->a[23456] = 1;
	v->a[23457] = anon_sym_DOLLAR_LPAREN;
	v->a[23458] = actions(602);
	v->a[23459] = 1;
	small_parse_table_1173(v);
}

void	small_parse_table_1173(t_small_parse_table_array *v)
{
	v->a[23460] = anon_sym_BQUOTE;
	v->a[23461] = actions(605);
	v->a[23462] = 1;
	v->a[23463] = sym__bare_dollar;
	v->a[23464] = state(224);
	v->a[23465] = 1;
	v->a[23466] = aux_sym_command_repeat2;
	v->a[23467] = state(729);
	v->a[23468] = 1;
	v->a[23469] = sym_concatenation;
	v->a[23470] = actions(721);
	v->a[23471] = 3;
	v->a[23472] = sym_raw_string;
	v->a[23473] = sym_number;
	v->a[23474] = sym_word;
	v->a[23475] = state(519);
	v->a[23476] = 5;
	v->a[23477] = sym_arithmetic_expansion;
	v->a[23478] = sym_string;
	v->a[23479] = sym_simple_expansion;
	small_parse_table_1174(v);
}

void	small_parse_table_1174(t_small_parse_table_array *v)
{
	v->a[23480] = sym_expansion;
	v->a[23481] = sym_command_substitution;
	v->a[23482] = actions(516);
	v->a[23483] = 19;
	v->a[23484] = anon_sym_PIPE;
	v->a[23485] = anon_sym_SEMI_SEMI;
	v->a[23486] = anon_sym_AMP_AMP;
	v->a[23487] = anon_sym_PIPE_PIPE;
	v->a[23488] = anon_sym_LT;
	v->a[23489] = anon_sym_GT;
	v->a[23490] = anon_sym_GT_GT;
	v->a[23491] = anon_sym_AMP_GT;
	v->a[23492] = anon_sym_AMP_GT_GT;
	v->a[23493] = anon_sym_LT_AMP;
	v->a[23494] = anon_sym_GT_AMP;
	v->a[23495] = anon_sym_GT_PIPE;
	v->a[23496] = anon_sym_LT_AMP_DASH;
	v->a[23497] = anon_sym_GT_AMP_DASH;
	v->a[23498] = anon_sym_LT_LT;
	v->a[23499] = anon_sym_LT_LT_DASH;
	small_parse_table_1175(v);
}

/* EOF small_parse_table_234.c */
