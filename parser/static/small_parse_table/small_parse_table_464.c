/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_464.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2320(t_small_parse_table_array *v)
{
	v->a[46400] = aux_sym__multiline_variable_name_token1;
	v->a[46401] = actions(1017);
	v->a[46402] = 8;
	v->a[46403] = anon_sym_BANG;
	v->a[46404] = anon_sym_DASH;
	v->a[46405] = anon_sym_STAR;
	v->a[46406] = anon_sym_QMARK;
	v->a[46407] = anon_sym_DOLLAR;
	v->a[46408] = anon_sym_POUND;
	v->a[46409] = anon_sym_AT;
	v->a[46410] = anon_sym_0;
	v->a[46411] = actions(345);
	v->a[46412] = 9;
	v->a[46413] = aux_sym_heredoc_redirect_token1;
	v->a[46414] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46415] = anon_sym_DQUOTE;
	v->a[46416] = sym_raw_string;
	v->a[46417] = sym_number;
	v->a[46418] = anon_sym_DOLLAR_LBRACE;
	v->a[46419] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2321(v);
}

void	small_parse_table_2321(t_small_parse_table_array *v)
{
	v->a[46420] = anon_sym_BQUOTE;
	v->a[46421] = sym_word;
	v->a[46422] = 14;
	v->a[46423] = actions(3);
	v->a[46424] = 1;
	v->a[46425] = sym_comment;
	v->a[46426] = actions(1642);
	v->a[46427] = 1;
	v->a[46428] = anon_sym_LPAREN;
	v->a[46429] = actions(1645);
	v->a[46430] = 1;
	v->a[46431] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46432] = actions(1648);
	v->a[46433] = 1;
	v->a[46434] = anon_sym_DOLLAR;
	v->a[46435] = actions(1651);
	v->a[46436] = 1;
	v->a[46437] = anon_sym_DQUOTE;
	v->a[46438] = actions(1654);
	v->a[46439] = 1;
	small_parse_table_2322(v);
}

void	small_parse_table_2322(t_small_parse_table_array *v)
{
	v->a[46440] = anon_sym_DOLLAR_LBRACE;
	v->a[46441] = actions(1657);
	v->a[46442] = 1;
	v->a[46443] = anon_sym_DOLLAR_LPAREN;
	v->a[46444] = actions(1660);
	v->a[46445] = 1;
	v->a[46446] = anon_sym_BQUOTE;
	v->a[46447] = actions(1663);
	v->a[46448] = 1;
	v->a[46449] = sym_extglob_pattern;
	v->a[46450] = state(839);
	v->a[46451] = 1;
	v->a[46452] = aux_sym_case_statement_repeat1;
	v->a[46453] = state(1432);
	v->a[46454] = 1;
	v->a[46455] = sym_case_item;
	v->a[46456] = state(1575);
	v->a[46457] = 2;
	v->a[46458] = sym_concatenation;
	v->a[46459] = sym__extglob_blob;
	small_parse_table_2323(v);
}

void	small_parse_table_2323(t_small_parse_table_array *v)
{
	v->a[46460] = actions(1639);
	v->a[46461] = 3;
	v->a[46462] = sym_raw_string;
	v->a[46463] = sym_number;
	v->a[46464] = sym_word;
	v->a[46465] = state(1507);
	v->a[46466] = 5;
	v->a[46467] = sym_arithmetic_expansion;
	v->a[46468] = sym_string;
	v->a[46469] = sym_simple_expansion;
	v->a[46470] = sym_expansion;
	v->a[46471] = sym_command_substitution;
	v->a[46472] = 10;
	v->a[46473] = actions(3);
	v->a[46474] = 1;
	v->a[46475] = sym_comment;
	v->a[46476] = actions(746);
	v->a[46477] = 1;
	v->a[46478] = anon_sym_PIPE;
	v->a[46479] = actions(752);
	small_parse_table_2324(v);
}

void	small_parse_table_2324(t_small_parse_table_array *v)
{
	v->a[46480] = 1;
	v->a[46481] = anon_sym_SEMI;
	v->a[46482] = actions(1595);
	v->a[46483] = 1;
	v->a[46484] = aux_sym_heredoc_redirect_token1;
	v->a[46485] = state(513);
	v->a[46486] = 1;
	v->a[46487] = sym_terminator;
	v->a[46488] = actions(748);
	v->a[46489] = 2;
	v->a[46490] = anon_sym_AMP_AMP;
	v->a[46491] = anon_sym_PIPE_PIPE;
	v->a[46492] = actions(750);
	v->a[46493] = 2;
	v->a[46494] = anon_sym_LT_LT;
	v->a[46495] = anon_sym_LT_LT_DASH;
	v->a[46496] = actions(842);
	v->a[46497] = 2;
	v->a[46498] = anon_sym_esac;
	v->a[46499] = anon_sym_SEMI_SEMI;
	small_parse_table_2325(v);
}

/* EOF small_parse_table_464.c */
