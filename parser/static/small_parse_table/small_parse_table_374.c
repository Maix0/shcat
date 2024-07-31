/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_374.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1870(t_small_parse_table_array *v)
{
	v->a[37400] = anon_sym_do;
	v->a[37401] = anon_sym_if;
	v->a[37402] = anon_sym_case;
	v->a[37403] = anon_sym_LPAREN;
	v->a[37404] = anon_sym_LBRACE;
	v->a[37405] = anon_sym_BANG;
	v->a[37406] = anon_sym_LT;
	v->a[37407] = anon_sym_GT;
	v->a[37408] = anon_sym_GT_GT;
	v->a[37409] = anon_sym_LT_AMP;
	v->a[37410] = anon_sym_GT_AMP;
	v->a[37411] = anon_sym_GT_PIPE;
	v->a[37412] = anon_sym_LT_GT;
	v->a[37413] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37414] = anon_sym_DOLLAR;
	v->a[37415] = anon_sym_DQUOTE;
	v->a[37416] = sym_raw_string;
	v->a[37417] = sym_number;
	v->a[37418] = anon_sym_DOLLAR_LBRACE;
	v->a[37419] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1871(v);
}

void	small_parse_table_1871(t_small_parse_table_array *v)
{
	v->a[37420] = anon_sym_BQUOTE;
	v->a[37421] = sym_word;
	v->a[37422] = 18;
	v->a[37423] = actions(3);
	v->a[37424] = 1;
	v->a[37425] = sym_comment;
	v->a[37426] = actions(1337);
	v->a[37427] = 1;
	v->a[37428] = anon_sym_LPAREN;
	v->a[37429] = actions(1341);
	v->a[37430] = 1;
	v->a[37431] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37432] = actions(1343);
	v->a[37433] = 1;
	v->a[37434] = anon_sym_DOLLAR;
	v->a[37435] = actions(1345);
	v->a[37436] = 1;
	v->a[37437] = anon_sym_DQUOTE;
	v->a[37438] = actions(1347);
	v->a[37439] = 1;
	small_parse_table_1872(v);
}

void	small_parse_table_1872(t_small_parse_table_array *v)
{
	v->a[37440] = anon_sym_DOLLAR_LBRACE;
	v->a[37441] = actions(1349);
	v->a[37442] = 1;
	v->a[37443] = anon_sym_DOLLAR_LPAREN;
	v->a[37444] = actions(1351);
	v->a[37445] = 1;
	v->a[37446] = anon_sym_BQUOTE;
	v->a[37447] = actions(1353);
	v->a[37448] = 1;
	v->a[37449] = sym_extglob_pattern;
	v->a[37450] = actions(1420);
	v->a[37451] = 1;
	v->a[37452] = anon_sym_esac;
	v->a[37453] = state(746);
	v->a[37454] = 1;
	v->a[37455] = sym_terminator;
	v->a[37456] = state(806);
	v->a[37457] = 1;
	v->a[37458] = aux_sym_case_statement_repeat1;
	v->a[37459] = state(1432);
	small_parse_table_1873(v);
}

void	small_parse_table_1873(t_small_parse_table_array *v)
{
	v->a[37460] = 1;
	v->a[37461] = sym_case_item;
	v->a[37462] = state(1781);
	v->a[37463] = 1;
	v->a[37464] = sym__case_item_last;
	v->a[37465] = state(1594);
	v->a[37466] = 2;
	v->a[37467] = sym_concatenation;
	v->a[37468] = sym__extglob_blob;
	v->a[37469] = actions(1333);
	v->a[37470] = 3;
	v->a[37471] = sym_raw_string;
	v->a[37472] = sym_number;
	v->a[37473] = sym_word;
	v->a[37474] = actions(1339);
	v->a[37475] = 3;
	v->a[37476] = anon_sym_SEMI_SEMI;
	v->a[37477] = aux_sym_heredoc_redirect_token1;
	v->a[37478] = anon_sym_SEMI;
	v->a[37479] = state(1520);
	small_parse_table_1874(v);
}

void	small_parse_table_1874(t_small_parse_table_array *v)
{
	v->a[37480] = 5;
	v->a[37481] = sym_arithmetic_expansion;
	v->a[37482] = sym_string;
	v->a[37483] = sym_simple_expansion;
	v->a[37484] = sym_expansion;
	v->a[37485] = sym_command_substitution;
	v->a[37486] = 3;
	v->a[37487] = actions(3);
	v->a[37488] = 1;
	v->a[37489] = sym_comment;
	v->a[37490] = actions(1077);
	v->a[37491] = 1;
	v->a[37492] = sym__bare_dollar;
	v->a[37493] = actions(1079);
	v->a[37494] = 25;
	v->a[37495] = anon_sym_PIPE;
	v->a[37496] = anon_sym_RPAREN;
	v->a[37497] = anon_sym_SEMI_SEMI;
	v->a[37498] = anon_sym_AMP_AMP;
	v->a[37499] = anon_sym_PIPE_PIPE;
	small_parse_table_1875(v);
}

/* EOF small_parse_table_374.c */
