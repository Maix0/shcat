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
	v->a[46400] = 1;
	v->a[46401] = sym_variable_name;
	v->a[46402] = actions(1256);
	v->a[46403] = 1;
	v->a[46404] = sym_file_descriptor;
	v->a[46405] = state(187);
	v->a[46406] = 1;
	v->a[46407] = sym_command_name;
	v->a[46408] = state(650);
	v->a[46409] = 1;
	v->a[46410] = sym_concatenation;
	v->a[46411] = state(1385);
	v->a[46412] = 1;
	v->a[46413] = sym_file_redirect;
	v->a[46414] = actions(1254);
	v->a[46415] = 2;
	v->a[46416] = anon_sym_LT_AMP_DASH;
	v->a[46417] = anon_sym_GT_AMP_DASH;
	v->a[46418] = state(1132);
	v->a[46419] = 2;
	small_parse_table_2321(v);
}

void	small_parse_table_2321(t_small_parse_table_array *v)
{
	v->a[46420] = sym_variable_assignment;
	v->a[46421] = aux_sym_command_repeat1;
	v->a[46422] = actions(65);
	v->a[46423] = 3;
	v->a[46424] = sym_raw_string;
	v->a[46425] = sym_number;
	v->a[46426] = sym_word;
	v->a[46427] = state(443);
	v->a[46428] = 5;
	v->a[46429] = sym_arithmetic_expansion;
	v->a[46430] = sym_string;
	v->a[46431] = sym_simple_expansion;
	v->a[46432] = sym_expansion;
	v->a[46433] = sym_command_substitution;
	v->a[46434] = actions(1252);
	v->a[46435] = 6;
	v->a[46436] = anon_sym_LT;
	v->a[46437] = anon_sym_GT;
	v->a[46438] = anon_sym_GT_GT;
	v->a[46439] = anon_sym_LT_AMP;
	small_parse_table_2322(v);
}

void	small_parse_table_2322(t_small_parse_table_array *v)
{
	v->a[46440] = anon_sym_GT_AMP;
	v->a[46441] = anon_sym_GT_PIPE;
	v->a[46442] = 5;
	v->a[46443] = actions(3);
	v->a[46444] = 1;
	v->a[46445] = sym_comment;
	v->a[46446] = actions(690);
	v->a[46447] = 1;
	v->a[46448] = sym_variable_name;
	v->a[46449] = actions(1555);
	v->a[46450] = 1;
	v->a[46451] = sym_file_descriptor;
	v->a[46452] = actions(678);
	v->a[46453] = 9;
	v->a[46454] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46455] = anon_sym_DOLLAR;
	v->a[46456] = anon_sym_DQUOTE;
	v->a[46457] = sym_raw_string;
	v->a[46458] = sym_number;
	v->a[46459] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2323(v);
}

void	small_parse_table_2323(t_small_parse_table_array *v)
{
	v->a[46460] = anon_sym_DOLLAR_LPAREN;
	v->a[46461] = anon_sym_BQUOTE;
	v->a[46462] = sym_word;
	v->a[46463] = actions(1553);
	v->a[46464] = 18;
	v->a[46465] = anon_sym_PIPE;
	v->a[46466] = anon_sym_RPAREN;
	v->a[46467] = anon_sym_SEMI_SEMI;
	v->a[46468] = anon_sym_AMP_AMP;
	v->a[46469] = anon_sym_PIPE_PIPE;
	v->a[46470] = anon_sym_LT;
	v->a[46471] = anon_sym_GT;
	v->a[46472] = anon_sym_GT_GT;
	v->a[46473] = anon_sym_LT_AMP;
	v->a[46474] = anon_sym_GT_AMP;
	v->a[46475] = anon_sym_GT_PIPE;
	v->a[46476] = anon_sym_LT_AMP_DASH;
	v->a[46477] = anon_sym_GT_AMP_DASH;
	v->a[46478] = anon_sym_LT_LT;
	v->a[46479] = anon_sym_LT_LT_DASH;
	small_parse_table_2324(v);
}

void	small_parse_table_2324(t_small_parse_table_array *v)
{
	v->a[46480] = aux_sym_heredoc_redirect_token1;
	v->a[46481] = anon_sym_AMP;
	v->a[46482] = anon_sym_SEMI;
	v->a[46483] = 3;
	v->a[46484] = actions(3);
	v->a[46485] = 1;
	v->a[46486] = sym_comment;
	v->a[46487] = actions(575);
	v->a[46488] = 2;
	v->a[46489] = sym_file_descriptor;
	v->a[46490] = sym_variable_name;
	v->a[46491] = actions(573);
	v->a[46492] = 27;
	v->a[46493] = anon_sym_PIPE;
	v->a[46494] = anon_sym_RPAREN;
	v->a[46495] = anon_sym_SEMI_SEMI;
	v->a[46496] = anon_sym_AMP_AMP;
	v->a[46497] = anon_sym_PIPE_PIPE;
	v->a[46498] = anon_sym_LT;
	v->a[46499] = anon_sym_GT;
	small_parse_table_2325(v);
}

/* EOF small_parse_table_464.c */
