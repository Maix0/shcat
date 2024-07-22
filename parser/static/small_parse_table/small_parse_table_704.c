/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_704.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3520(t_small_parse_table_array *v)
{
	v->a[70400] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70401] = actions(905);
	v->a[70402] = 1;
	v->a[70403] = anon_sym_DOLLAR;
	v->a[70404] = actions(907);
	v->a[70405] = 1;
	v->a[70406] = anon_sym_DQUOTE;
	v->a[70407] = actions(909);
	v->a[70408] = 1;
	v->a[70409] = anon_sym_DOLLAR_LBRACE;
	v->a[70410] = actions(911);
	v->a[70411] = 1;
	v->a[70412] = anon_sym_DOLLAR_LPAREN;
	v->a[70413] = actions(913);
	v->a[70414] = 1;
	v->a[70415] = anon_sym_BQUOTE;
	v->a[70416] = state(273);
	v->a[70417] = 2;
	v->a[70418] = sym_concatenation;
	v->a[70419] = aux_sym_for_statement_repeat1;
	small_parse_table_3521(v);
}

void	small_parse_table_3521(t_small_parse_table_array *v)
{
	v->a[70420] = actions(901);
	v->a[70421] = 3;
	v->a[70422] = sym_raw_string;
	v->a[70423] = sym_number;
	v->a[70424] = sym_word;
	v->a[70425] = state(492);
	v->a[70426] = 5;
	v->a[70427] = sym_arithmetic_expansion;
	v->a[70428] = sym_string;
	v->a[70429] = sym_simple_expansion;
	v->a[70430] = sym_expansion;
	v->a[70431] = sym_command_substitution;
	v->a[70432] = 3;
	v->a[70433] = actions(501);
	v->a[70434] = 1;
	v->a[70435] = sym_comment;
	v->a[70436] = actions(1160);
	v->a[70437] = 4;
	v->a[70438] = anon_sym_PIPE;
	v->a[70439] = anon_sym_LT;
	small_parse_table_3522(v);
}

void	small_parse_table_3522(t_small_parse_table_array *v)
{
	v->a[70440] = anon_sym_GT;
	v->a[70441] = anon_sym_LT_LT;
	v->a[70442] = actions(1162);
	v->a[70443] = 12;
	v->a[70444] = sym_file_descriptor;
	v->a[70445] = sym__concat;
	v->a[70446] = sym_variable_name;
	v->a[70447] = anon_sym_AMP_AMP;
	v->a[70448] = anon_sym_PIPE_PIPE;
	v->a[70449] = anon_sym_GT_GT;
	v->a[70450] = anon_sym_LT_AMP;
	v->a[70451] = anon_sym_GT_AMP;
	v->a[70452] = anon_sym_GT_PIPE;
	v->a[70453] = anon_sym_LT_GT;
	v->a[70454] = anon_sym_LT_LT_DASH;
	v->a[70455] = aux_sym_concatenation_token1;
	v->a[70456] = 10;
	v->a[70457] = actions(3);
	v->a[70458] = 1;
	v->a[70459] = sym_comment;
	small_parse_table_3523(v);
}

void	small_parse_table_3523(t_small_parse_table_array *v)
{
	v->a[70460] = actions(1364);
	v->a[70461] = 1;
	v->a[70462] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70463] = actions(1366);
	v->a[70464] = 1;
	v->a[70465] = anon_sym_DOLLAR;
	v->a[70466] = actions(1368);
	v->a[70467] = 1;
	v->a[70468] = anon_sym_DQUOTE;
	v->a[70469] = actions(1370);
	v->a[70470] = 1;
	v->a[70471] = anon_sym_DOLLAR_LBRACE;
	v->a[70472] = actions(1372);
	v->a[70473] = 1;
	v->a[70474] = anon_sym_DOLLAR_LPAREN;
	v->a[70475] = actions(1374);
	v->a[70476] = 1;
	v->a[70477] = anon_sym_BQUOTE;
	v->a[70478] = state(498);
	v->a[70479] = 2;
	small_parse_table_3524(v);
}

void	small_parse_table_3524(t_small_parse_table_array *v)
{
	v->a[70480] = sym_concatenation;
	v->a[70481] = aux_sym_for_statement_repeat1;
	v->a[70482] = actions(1362);
	v->a[70483] = 3;
	v->a[70484] = sym_raw_string;
	v->a[70485] = sym_number;
	v->a[70486] = sym_word;
	v->a[70487] = state(873);
	v->a[70488] = 5;
	v->a[70489] = sym_arithmetic_expansion;
	v->a[70490] = sym_string;
	v->a[70491] = sym_simple_expansion;
	v->a[70492] = sym_expansion;
	v->a[70493] = sym_command_substitution;
	v->a[70494] = 10;
	v->a[70495] = actions(3);
	v->a[70496] = 1;
	v->a[70497] = sym_comment;
	v->a[70498] = actions(1012);
	v->a[70499] = 1;
	small_parse_table_3525(v);
}

/* EOF small_parse_table_704.c */
