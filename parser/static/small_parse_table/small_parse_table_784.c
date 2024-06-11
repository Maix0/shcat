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
	v->a[78400] = 3;
	v->a[78401] = sym_file_redirect;
	v->a[78402] = sym_heredoc_redirect;
	v->a[78403] = aux_sym_redirected_statement_repeat1;
	v->a[78404] = actions(2596);
	v->a[78405] = 8;
	v->a[78406] = anon_sym_LT;
	v->a[78407] = anon_sym_GT;
	v->a[78408] = anon_sym_GT_GT;
	v->a[78409] = anon_sym_AMP_GT;
	v->a[78410] = anon_sym_AMP_GT_GT;
	v->a[78411] = anon_sym_LT_AMP;
	v->a[78412] = anon_sym_GT_AMP;
	v->a[78413] = anon_sym_GT_PIPE;
	v->a[78414] = 16;
	v->a[78415] = actions(3);
	v->a[78416] = 1;
	v->a[78417] = sym_comment;
	v->a[78418] = actions(1959);
	v->a[78419] = 1;
	small_parse_table_3921(v);
}

void	small_parse_table_3921(t_small_parse_table_array *v)
{
	v->a[78420] = anon_sym_LPAREN;
	v->a[78421] = actions(1963);
	v->a[78422] = 1;
	v->a[78423] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78424] = actions(1965);
	v->a[78425] = 1;
	v->a[78426] = anon_sym_DOLLAR;
	v->a[78427] = actions(1967);
	v->a[78428] = 1;
	v->a[78429] = anon_sym_DQUOTE;
	v->a[78430] = actions(1969);
	v->a[78431] = 1;
	v->a[78432] = anon_sym_DOLLAR_LBRACE;
	v->a[78433] = actions(1971);
	v->a[78434] = 1;
	v->a[78435] = anon_sym_DOLLAR_LPAREN;
	v->a[78436] = actions(1973);
	v->a[78437] = 1;
	v->a[78438] = anon_sym_BQUOTE;
	v->a[78439] = actions(1975);
	small_parse_table_3922(v);
}

void	small_parse_table_3922(t_small_parse_table_array *v)
{
	v->a[78440] = 1;
	v->a[78441] = sym_extglob_pattern;
	v->a[78442] = actions(1989);
	v->a[78443] = 1;
	v->a[78444] = anon_sym_esac;
	v->a[78445] = state(1501);
	v->a[78446] = 1;
	v->a[78447] = aux_sym_case_statement_repeat1;
	v->a[78448] = state(2080);
	v->a[78449] = 1;
	v->a[78450] = sym_case_item;
	v->a[78451] = state(2329);
	v->a[78452] = 1;
	v->a[78453] = sym__case_item_last;
	v->a[78454] = state(2224);
	v->a[78455] = 2;
	v->a[78456] = sym_concatenation;
	v->a[78457] = sym__extglob_blob;
	v->a[78458] = actions(1955);
	v->a[78459] = 3;
	small_parse_table_3923(v);
}

void	small_parse_table_3923(t_small_parse_table_array *v)
{
	v->a[78460] = sym_raw_string;
	v->a[78461] = sym_number;
	v->a[78462] = sym_word;
	v->a[78463] = state(2157);
	v->a[78464] = 5;
	v->a[78465] = sym_arithmetic_expansion;
	v->a[78466] = sym_string;
	v->a[78467] = sym_simple_expansion;
	v->a[78468] = sym_expansion;
	v->a[78469] = sym_command_substitution;
	v->a[78470] = 5;
	v->a[78471] = actions(3);
	v->a[78472] = 1;
	v->a[78473] = sym_comment;
	v->a[78474] = actions(2903);
	v->a[78475] = 1;
	v->a[78476] = anon_sym_PIPE;
	v->a[78477] = state(1457);
	v->a[78478] = 1;
	v->a[78479] = aux_sym_pipeline_repeat1;
	small_parse_table_3924(v);
}

void	small_parse_table_3924(t_small_parse_table_array *v)
{
	v->a[78480] = actions(2316);
	v->a[78481] = 2;
	v->a[78482] = sym_file_descriptor;
	v->a[78483] = aux_sym_heredoc_redirect_token1;
	v->a[78484] = actions(2321);
	v->a[78485] = 18;
	v->a[78486] = anon_sym_RPAREN;
	v->a[78487] = anon_sym_SEMI_SEMI;
	v->a[78488] = anon_sym_AMP_AMP;
	v->a[78489] = anon_sym_PIPE_PIPE;
	v->a[78490] = anon_sym_LT;
	v->a[78491] = anon_sym_GT;
	v->a[78492] = anon_sym_GT_GT;
	v->a[78493] = anon_sym_AMP_GT;
	v->a[78494] = anon_sym_AMP_GT_GT;
	v->a[78495] = anon_sym_LT_AMP;
	v->a[78496] = anon_sym_GT_AMP;
	v->a[78497] = anon_sym_GT_PIPE;
	v->a[78498] = anon_sym_LT_AMP_DASH;
	v->a[78499] = anon_sym_GT_AMP_DASH;
	small_parse_table_3925(v);
}

/* EOF small_parse_table_784.c */
