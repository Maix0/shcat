/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_784.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3920(t_small_parse_table_array *v)
{
	v->a[78400] = 4;
	v->a[78401] = actions(870);
	v->a[78402] = 1;
	v->a[78403] = sym_comment;
	v->a[78404] = state(1520);
	v->a[78405] = 3;
	v->a[78406] = sym_file_redirect;
	v->a[78407] = sym_heredoc_redirect;
	v->a[78408] = aux_sym_redirected_statement_repeat1;
	v->a[78409] = actions(935);
	v->a[78410] = 6;
	v->a[78411] = anon_sym_PIPE;
	v->a[78412] = anon_sym_LT;
	v->a[78413] = anon_sym_GT;
	v->a[78414] = anon_sym_LT_AMP;
	v->a[78415] = anon_sym_GT_AMP;
	v->a[78416] = anon_sym_LT_LT;
	v->a[78417] = actions(984);
	v->a[78418] = 8;
	v->a[78419] = sym_file_descriptor;
	small_parse_table_3921(v);
}

void	small_parse_table_3921(t_small_parse_table_array *v)
{
	v->a[78420] = anon_sym_AMP_AMP;
	v->a[78421] = anon_sym_PIPE_PIPE;
	v->a[78422] = anon_sym_GT_GT;
	v->a[78423] = anon_sym_GT_PIPE;
	v->a[78424] = anon_sym_LT_AMP_DASH;
	v->a[78425] = anon_sym_GT_AMP_DASH;
	v->a[78426] = anon_sym_LT_LT_DASH;
	v->a[78427] = 10;
	v->a[78428] = actions(3);
	v->a[78429] = 1;
	v->a[78430] = sym_comment;
	v->a[78431] = actions(699);
	v->a[78432] = 1;
	v->a[78433] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78434] = actions(701);
	v->a[78435] = 1;
	v->a[78436] = anon_sym_DOLLAR;
	v->a[78437] = actions(703);
	v->a[78438] = 1;
	v->a[78439] = anon_sym_DQUOTE;
	small_parse_table_3922(v);
}

void	small_parse_table_3922(t_small_parse_table_array *v)
{
	v->a[78440] = actions(705);
	v->a[78441] = 1;
	v->a[78442] = anon_sym_DOLLAR_LBRACE;
	v->a[78443] = actions(707);
	v->a[78444] = 1;
	v->a[78445] = anon_sym_DOLLAR_LPAREN;
	v->a[78446] = actions(709);
	v->a[78447] = 1;
	v->a[78448] = anon_sym_BQUOTE;
	v->a[78449] = state(285);
	v->a[78450] = 2;
	v->a[78451] = sym_concatenation;
	v->a[78452] = aux_sym_for_statement_repeat1;
	v->a[78453] = actions(1001);
	v->a[78454] = 3;
	v->a[78455] = sym_raw_string;
	v->a[78456] = sym_number;
	v->a[78457] = sym_word;
	v->a[78458] = state(628);
	v->a[78459] = 5;
	small_parse_table_3923(v);
}

void	small_parse_table_3923(t_small_parse_table_array *v)
{
	v->a[78460] = sym_arithmetic_expansion;
	v->a[78461] = sym_string;
	v->a[78462] = sym_simple_expansion;
	v->a[78463] = sym_expansion;
	v->a[78464] = sym_command_substitution;
	v->a[78465] = 3;
	v->a[78466] = actions(870);
	v->a[78467] = 1;
	v->a[78468] = sym_comment;
	v->a[78469] = actions(1285);
	v->a[78470] = 6;
	v->a[78471] = anon_sym_PIPE;
	v->a[78472] = anon_sym_LT;
	v->a[78473] = anon_sym_GT;
	v->a[78474] = anon_sym_LT_AMP;
	v->a[78475] = anon_sym_GT_AMP;
	v->a[78476] = anon_sym_LT_LT;
	v->a[78477] = actions(1283);
	v->a[78478] = 10;
	v->a[78479] = sym_file_descriptor;
	small_parse_table_3924(v);
}

void	small_parse_table_3924(t_small_parse_table_array *v)
{
	v->a[78480] = sym__concat;
	v->a[78481] = anon_sym_AMP_AMP;
	v->a[78482] = anon_sym_PIPE_PIPE;
	v->a[78483] = anon_sym_GT_GT;
	v->a[78484] = anon_sym_GT_PIPE;
	v->a[78485] = anon_sym_LT_AMP_DASH;
	v->a[78486] = anon_sym_GT_AMP_DASH;
	v->a[78487] = anon_sym_LT_LT_DASH;
	v->a[78488] = aux_sym_concatenation_token1;
	v->a[78489] = 8;
	v->a[78490] = actions(870);
	v->a[78491] = 1;
	v->a[78492] = sym_comment;
	v->a[78493] = actions(3041);
	v->a[78494] = 1;
	v->a[78495] = sym_file_descriptor;
	v->a[78496] = actions(2218);
	v->a[78497] = 2;
	v->a[78498] = anon_sym_PIPE;
	v->a[78499] = anon_sym_LT_LT;
	small_parse_table_3925(v);
}

/* EOF small_parse_table_784.c */
