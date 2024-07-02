/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_414.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2070(t_small_parse_table_array *v)
{
	v->a[41400] = sym_file_redirect;
	v->a[41401] = state(1055);
	v->a[41402] = 2;
	v->a[41403] = sym_variable_assignment;
	v->a[41404] = aux_sym_command_repeat1;
	v->a[41405] = actions(217);
	v->a[41406] = 3;
	v->a[41407] = sym_raw_string;
	v->a[41408] = sym_number;
	v->a[41409] = sym_word;
	v->a[41410] = state(347);
	v->a[41411] = 5;
	v->a[41412] = sym_arithmetic_expansion;
	v->a[41413] = sym_string;
	v->a[41414] = sym_simple_expansion;
	v->a[41415] = sym_expansion;
	v->a[41416] = sym_command_substitution;
	v->a[41417] = actions(1162);
	v->a[41418] = 7;
	v->a[41419] = anon_sym_LT;
	small_parse_table_2071(v);
}

void	small_parse_table_2071(t_small_parse_table_array *v)
{
	v->a[41420] = anon_sym_GT;
	v->a[41421] = anon_sym_GT_GT;
	v->a[41422] = anon_sym_LT_AMP;
	v->a[41423] = anon_sym_GT_AMP;
	v->a[41424] = anon_sym_GT_PIPE;
	v->a[41425] = anon_sym_LT_GT;
	v->a[41426] = 5;
	v->a[41427] = actions(3);
	v->a[41428] = 1;
	v->a[41429] = sym_comment;
	v->a[41430] = actions(702);
	v->a[41431] = 1;
	v->a[41432] = sym_variable_name;
	v->a[41433] = actions(1457);
	v->a[41434] = 1;
	v->a[41435] = sym_file_descriptor;
	v->a[41436] = actions(690);
	v->a[41437] = 9;
	v->a[41438] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41439] = anon_sym_DOLLAR;
	small_parse_table_2072(v);
}

void	small_parse_table_2072(t_small_parse_table_array *v)
{
	v->a[41440] = anon_sym_DQUOTE;
	v->a[41441] = sym_raw_string;
	v->a[41442] = sym_number;
	v->a[41443] = anon_sym_DOLLAR_LBRACE;
	v->a[41444] = anon_sym_DOLLAR_LPAREN;
	v->a[41445] = anon_sym_BQUOTE;
	v->a[41446] = sym_word;
	v->a[41447] = actions(1459);
	v->a[41448] = 17;
	v->a[41449] = anon_sym_PIPE;
	v->a[41450] = anon_sym_RPAREN;
	v->a[41451] = anon_sym_SEMI_SEMI;
	v->a[41452] = anon_sym_AMP_AMP;
	v->a[41453] = anon_sym_PIPE_PIPE;
	v->a[41454] = anon_sym_LT;
	v->a[41455] = anon_sym_GT;
	v->a[41456] = anon_sym_GT_GT;
	v->a[41457] = anon_sym_LT_AMP;
	v->a[41458] = anon_sym_GT_AMP;
	v->a[41459] = anon_sym_GT_PIPE;
	small_parse_table_2073(v);
}

void	small_parse_table_2073(t_small_parse_table_array *v)
{
	v->a[41460] = anon_sym_LT_GT;
	v->a[41461] = anon_sym_LT_LT;
	v->a[41462] = anon_sym_LT_LT_DASH;
	v->a[41463] = aux_sym_heredoc_redirect_token1;
	v->a[41464] = anon_sym_AMP;
	v->a[41465] = anon_sym_SEMI;
	v->a[41466] = 4;
	v->a[41467] = actions(3);
	v->a[41468] = 1;
	v->a[41469] = sym_comment;
	v->a[41470] = actions(1424);
	v->a[41471] = 2;
	v->a[41472] = anon_sym_esac;
	v->a[41473] = anon_sym_SEMI_SEMI;
	v->a[41474] = actions(1426);
	v->a[41475] = 2;
	v->a[41476] = sym_file_descriptor;
	v->a[41477] = sym_variable_name;
	v->a[41478] = actions(1422);
	v->a[41479] = 24;
	small_parse_table_2074(v);
}

void	small_parse_table_2074(t_small_parse_table_array *v)
{
	v->a[41480] = anon_sym_for;
	v->a[41481] = anon_sym_while;
	v->a[41482] = anon_sym_until;
	v->a[41483] = anon_sym_if;
	v->a[41484] = anon_sym_case;
	v->a[41485] = anon_sym_LPAREN;
	v->a[41486] = anon_sym_LBRACE;
	v->a[41487] = anon_sym_BANG;
	v->a[41488] = anon_sym_LT;
	v->a[41489] = anon_sym_GT;
	v->a[41490] = anon_sym_GT_GT;
	v->a[41491] = anon_sym_LT_AMP;
	v->a[41492] = anon_sym_GT_AMP;
	v->a[41493] = anon_sym_GT_PIPE;
	v->a[41494] = anon_sym_LT_GT;
	v->a[41495] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41496] = anon_sym_DOLLAR;
	v->a[41497] = anon_sym_DQUOTE;
	v->a[41498] = sym_raw_string;
	v->a[41499] = sym_number;
	small_parse_table_2075(v);
}

/* EOF small_parse_table_414.c */
