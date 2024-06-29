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
	v->a[46400] = sym_string;
	v->a[46401] = sym_simple_expansion;
	v->a[46402] = sym_expansion;
	v->a[46403] = sym_command_substitution;
	v->a[46404] = actions(756);
	v->a[46405] = 15;
	v->a[46406] = anon_sym_PIPE;
	v->a[46407] = anon_sym_AMP_AMP;
	v->a[46408] = anon_sym_PIPE_PIPE;
	v->a[46409] = anon_sym_LT;
	v->a[46410] = anon_sym_GT;
	v->a[46411] = anon_sym_GT_GT;
	v->a[46412] = anon_sym_AMP_GT;
	v->a[46413] = anon_sym_AMP_GT_GT;
	v->a[46414] = anon_sym_LT_AMP;
	v->a[46415] = anon_sym_GT_AMP;
	v->a[46416] = anon_sym_GT_PIPE;
	v->a[46417] = anon_sym_LT_AMP_DASH;
	v->a[46418] = anon_sym_GT_AMP_DASH;
	v->a[46419] = anon_sym_LT_LT;
	small_parse_table_2321(v);
}

void	small_parse_table_2321(t_small_parse_table_array *v)
{
	v->a[46420] = anon_sym_LT_LT_DASH;
	v->a[46421] = 3;
	v->a[46422] = actions(3);
	v->a[46423] = 1;
	v->a[46424] = sym_comment;
	v->a[46425] = actions(1580);
	v->a[46426] = 2;
	v->a[46427] = sym_file_descriptor;
	v->a[46428] = sym__bare_dollar;
	v->a[46429] = actions(1578);
	v->a[46430] = 29;
	v->a[46431] = anon_sym_esac;
	v->a[46432] = anon_sym_PIPE;
	v->a[46433] = anon_sym_SEMI_SEMI;
	v->a[46434] = anon_sym_AMP_AMP;
	v->a[46435] = anon_sym_PIPE_PIPE;
	v->a[46436] = anon_sym_LT;
	v->a[46437] = anon_sym_GT;
	v->a[46438] = anon_sym_GT_GT;
	v->a[46439] = anon_sym_AMP_GT;
	small_parse_table_2322(v);
}

void	small_parse_table_2322(t_small_parse_table_array *v)
{
	v->a[46440] = anon_sym_AMP_GT_GT;
	v->a[46441] = anon_sym_LT_AMP;
	v->a[46442] = anon_sym_GT_AMP;
	v->a[46443] = anon_sym_GT_PIPE;
	v->a[46444] = anon_sym_LT_AMP_DASH;
	v->a[46445] = anon_sym_GT_AMP_DASH;
	v->a[46446] = anon_sym_LT_LT;
	v->a[46447] = anon_sym_LT_LT_DASH;
	v->a[46448] = aux_sym_heredoc_redirect_token1;
	v->a[46449] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46450] = anon_sym_AMP;
	v->a[46451] = anon_sym_DOLLAR;
	v->a[46452] = anon_sym_DQUOTE;
	v->a[46453] = sym_raw_string;
	v->a[46454] = sym_number;
	v->a[46455] = anon_sym_DOLLAR_LBRACE;
	v->a[46456] = anon_sym_DOLLAR_LPAREN;
	v->a[46457] = anon_sym_BQUOTE;
	v->a[46458] = sym_word;
	v->a[46459] = anon_sym_SEMI;
	small_parse_table_2323(v);
}

void	small_parse_table_2323(t_small_parse_table_array *v)
{
	v->a[46460] = 4;
	v->a[46461] = actions(3);
	v->a[46462] = 1;
	v->a[46463] = sym_comment;
	v->a[46464] = actions(1524);
	v->a[46465] = 2;
	v->a[46466] = sym_file_descriptor;
	v->a[46467] = sym_variable_name;
	v->a[46468] = actions(1582);
	v->a[46469] = 2;
	v->a[46470] = anon_sym_esac;
	v->a[46471] = anon_sym_SEMI_SEMI;
	v->a[46472] = actions(1520);
	v->a[46473] = 27;
	v->a[46474] = anon_sym_for;
	v->a[46475] = anon_sym_while;
	v->a[46476] = anon_sym_until;
	v->a[46477] = anon_sym_if;
	v->a[46478] = anon_sym_case;
	v->a[46479] = anon_sym_LPAREN;
	small_parse_table_2324(v);
}

void	small_parse_table_2324(t_small_parse_table_array *v)
{
	v->a[46480] = anon_sym_LBRACE;
	v->a[46481] = anon_sym_BANG;
	v->a[46482] = anon_sym_LT;
	v->a[46483] = anon_sym_GT;
	v->a[46484] = anon_sym_GT_GT;
	v->a[46485] = anon_sym_AMP_GT;
	v->a[46486] = anon_sym_AMP_GT_GT;
	v->a[46487] = anon_sym_LT_AMP;
	v->a[46488] = anon_sym_GT_AMP;
	v->a[46489] = anon_sym_GT_PIPE;
	v->a[46490] = anon_sym_LT_AMP_DASH;
	v->a[46491] = anon_sym_GT_AMP_DASH;
	v->a[46492] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46493] = anon_sym_DOLLAR;
	v->a[46494] = anon_sym_DQUOTE;
	v->a[46495] = sym_raw_string;
	v->a[46496] = sym_number;
	v->a[46497] = anon_sym_DOLLAR_LBRACE;
	v->a[46498] = anon_sym_DOLLAR_LPAREN;
	v->a[46499] = anon_sym_BQUOTE;
	small_parse_table_2325(v);
}

/* EOF small_parse_table_464.c */
