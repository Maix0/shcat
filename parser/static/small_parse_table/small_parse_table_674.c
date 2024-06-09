/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_674.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3370(t_small_parse_table_array *v)
{
	v->a[67400] = anon_sym_LT_AMP;
	v->a[67401] = anon_sym_GT_AMP;
	v->a[67402] = anon_sym_GT_PIPE;
	v->a[67403] = 3;
	v->a[67404] = actions(3);
	v->a[67405] = 1;
	v->a[67406] = sym_comment;
	v->a[67407] = actions(1241);
	v->a[67408] = 3;
	v->a[67409] = sym_file_descriptor;
	v->a[67410] = sym__concat;
	v->a[67411] = aux_sym_heredoc_redirect_token1;
	v->a[67412] = actions(1239);
	v->a[67413] = 20;
	v->a[67414] = anon_sym_esac;
	v->a[67415] = anon_sym_PIPE;
	v->a[67416] = anon_sym_SEMI_SEMI;
	v->a[67417] = anon_sym_AMP_AMP;
	v->a[67418] = anon_sym_PIPE_PIPE;
	v->a[67419] = anon_sym_LT;
	small_parse_table_3371(v);
}

void	small_parse_table_3371(t_small_parse_table_array *v)
{
	v->a[67420] = anon_sym_GT;
	v->a[67421] = anon_sym_GT_GT;
	v->a[67422] = anon_sym_AMP_GT;
	v->a[67423] = anon_sym_AMP_GT_GT;
	v->a[67424] = anon_sym_LT_AMP;
	v->a[67425] = anon_sym_GT_AMP;
	v->a[67426] = anon_sym_GT_PIPE;
	v->a[67427] = anon_sym_LT_AMP_DASH;
	v->a[67428] = anon_sym_GT_AMP_DASH;
	v->a[67429] = anon_sym_LT_LT;
	v->a[67430] = anon_sym_LT_LT_DASH;
	v->a[67431] = anon_sym_AMP;
	v->a[67432] = aux_sym_concatenation_token1;
	v->a[67433] = anon_sym_SEMI;
	v->a[67434] = 17;
	v->a[67435] = actions(3);
	v->a[67436] = 1;
	v->a[67437] = sym_comment;
	v->a[67438] = actions(2115);
	v->a[67439] = 1;
	small_parse_table_3372(v);
}

void	small_parse_table_3372(t_small_parse_table_array *v)
{
	v->a[67440] = anon_sym_LPAREN;
	v->a[67441] = actions(2119);
	v->a[67442] = 1;
	v->a[67443] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67444] = actions(2121);
	v->a[67445] = 1;
	v->a[67446] = anon_sym_DOLLAR;
	v->a[67447] = actions(2123);
	v->a[67448] = 1;
	v->a[67449] = anon_sym_DQUOTE;
	v->a[67450] = actions(2125);
	v->a[67451] = 1;
	v->a[67452] = aux_sym_number_token1;
	v->a[67453] = actions(2127);
	v->a[67454] = 1;
	v->a[67455] = aux_sym_number_token2;
	v->a[67456] = actions(2129);
	v->a[67457] = 1;
	v->a[67458] = anon_sym_DOLLAR_LBRACE;
	v->a[67459] = actions(2131);
	small_parse_table_3373(v);
}

void	small_parse_table_3373(t_small_parse_table_array *v)
{
	v->a[67460] = 1;
	v->a[67461] = anon_sym_DOLLAR_LPAREN;
	v->a[67462] = actions(2133);
	v->a[67463] = 1;
	v->a[67464] = anon_sym_BQUOTE;
	v->a[67465] = actions(2135);
	v->a[67466] = 1;
	v->a[67467] = sym_extglob_pattern;
	v->a[67468] = state(1241);
	v->a[67469] = 1;
	v->a[67470] = aux_sym_case_statement_repeat1;
	v->a[67471] = state(1786);
	v->a[67472] = 1;
	v->a[67473] = sym_case_item;
	v->a[67474] = state(2135);
	v->a[67475] = 1;
	v->a[67476] = sym__case_item_last;
	v->a[67477] = actions(2111);
	v->a[67478] = 2;
	v->a[67479] = sym_raw_string;
	small_parse_table_3374(v);
}

void	small_parse_table_3374(t_small_parse_table_array *v)
{
	v->a[67480] = sym_word;
	v->a[67481] = state(2016);
	v->a[67482] = 2;
	v->a[67483] = sym_concatenation;
	v->a[67484] = sym__extglob_blob;
	v->a[67485] = state(1896);
	v->a[67486] = 6;
	v->a[67487] = sym_arithmetic_expansion;
	v->a[67488] = sym_string;
	v->a[67489] = sym_number;
	v->a[67490] = sym_simple_expansion;
	v->a[67491] = sym_expansion;
	v->a[67492] = sym_command_substitution;
	v->a[67493] = 17;
	v->a[67494] = actions(3);
	v->a[67495] = 1;
	v->a[67496] = sym_comment;
	v->a[67497] = actions(2115);
	v->a[67498] = 1;
	v->a[67499] = anon_sym_LPAREN;
	small_parse_table_3375(v);
}

/* EOF small_parse_table_674.c */
