/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_664.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3320(t_small_parse_table_array *v)
{
	v->a[66400] = sym_file_redirect;
	v->a[66401] = sym_heredoc_redirect;
	v->a[66402] = aux_sym_redirected_statement_repeat1;
	v->a[66403] = actions(2119);
	v->a[66404] = 7;
	v->a[66405] = anon_sym_PIPE;
	v->a[66406] = anon_sym_RPAREN;
	v->a[66407] = anon_sym_SEMI_SEMI;
	v->a[66408] = anon_sym_AMP_AMP;
	v->a[66409] = anon_sym_PIPE_PIPE;
	v->a[66410] = anon_sym_AMP;
	v->a[66411] = anon_sym_SEMI;
	v->a[66412] = actions(2039);
	v->a[66413] = 8;
	v->a[66414] = anon_sym_LT;
	v->a[66415] = anon_sym_GT;
	v->a[66416] = anon_sym_GT_GT;
	v->a[66417] = anon_sym_AMP_GT;
	v->a[66418] = anon_sym_AMP_GT_GT;
	v->a[66419] = anon_sym_LT_AMP;
	small_parse_table_3321(v);
}

void	small_parse_table_3321(t_small_parse_table_array *v)
{
	v->a[66420] = anon_sym_GT_AMP;
	v->a[66421] = anon_sym_GT_PIPE;
	v->a[66422] = 6;
	v->a[66423] = actions(3);
	v->a[66424] = 1;
	v->a[66425] = sym_comment;
	v->a[66426] = actions(2101);
	v->a[66427] = 1;
	v->a[66428] = aux_sym_concatenation_token1;
	v->a[66429] = actions(2103);
	v->a[66430] = 1;
	v->a[66431] = sym__concat;
	v->a[66432] = state(1129);
	v->a[66433] = 1;
	v->a[66434] = aux_sym_concatenation_repeat1;
	v->a[66435] = actions(548);
	v->a[66436] = 3;
	v->a[66437] = sym_file_descriptor;
	v->a[66438] = ts_builtin_sym_end;
	v->a[66439] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3322(v);
}

void	small_parse_table_3322(t_small_parse_table_array *v)
{
	v->a[66440] = actions(546);
	v->a[66441] = 18;
	v->a[66442] = anon_sym_PIPE;
	v->a[66443] = anon_sym_SEMI_SEMI;
	v->a[66444] = anon_sym_AMP_AMP;
	v->a[66445] = anon_sym_PIPE_PIPE;
	v->a[66446] = anon_sym_LT;
	v->a[66447] = anon_sym_GT;
	v->a[66448] = anon_sym_GT_GT;
	v->a[66449] = anon_sym_AMP_GT;
	v->a[66450] = anon_sym_AMP_GT_GT;
	v->a[66451] = anon_sym_LT_AMP;
	v->a[66452] = anon_sym_GT_AMP;
	v->a[66453] = anon_sym_GT_PIPE;
	v->a[66454] = anon_sym_LT_AMP_DASH;
	v->a[66455] = anon_sym_GT_AMP_DASH;
	v->a[66456] = anon_sym_LT_LT;
	v->a[66457] = anon_sym_LT_LT_DASH;
	v->a[66458] = anon_sym_AMP;
	v->a[66459] = anon_sym_SEMI;
	small_parse_table_3323(v);
}

void	small_parse_table_3323(t_small_parse_table_array *v)
{
	v->a[66460] = 6;
	v->a[66461] = actions(3);
	v->a[66462] = 1;
	v->a[66463] = sym_comment;
	v->a[66464] = actions(2051);
	v->a[66465] = 1;
	v->a[66466] = aux_sym_concatenation_token1;
	v->a[66467] = actions(2141);
	v->a[66468] = 1;
	v->a[66469] = sym__concat;
	v->a[66470] = state(1167);
	v->a[66471] = 1;
	v->a[66472] = aux_sym_concatenation_repeat1;
	v->a[66473] = actions(961);
	v->a[66474] = 2;
	v->a[66475] = sym_file_descriptor;
	v->a[66476] = sym_variable_name;
	v->a[66477] = actions(957);
	v->a[66478] = 19;
	v->a[66479] = anon_sym_LT;
	small_parse_table_3324(v);
}

void	small_parse_table_3324(t_small_parse_table_array *v)
{
	v->a[66480] = anon_sym_GT;
	v->a[66481] = anon_sym_GT_GT;
	v->a[66482] = anon_sym_AMP_GT;
	v->a[66483] = anon_sym_AMP_GT_GT;
	v->a[66484] = anon_sym_LT_AMP;
	v->a[66485] = anon_sym_GT_AMP;
	v->a[66486] = anon_sym_GT_PIPE;
	v->a[66487] = anon_sym_LT_AMP_DASH;
	v->a[66488] = anon_sym_GT_AMP_DASH;
	v->a[66489] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66490] = anon_sym_DOLLAR;
	v->a[66491] = anon_sym_DQUOTE;
	v->a[66492] = sym_raw_string;
	v->a[66493] = sym_number;
	v->a[66494] = anon_sym_DOLLAR_LBRACE;
	v->a[66495] = anon_sym_DOLLAR_LPAREN;
	v->a[66496] = anon_sym_BQUOTE;
	v->a[66497] = sym_word;
	v->a[66498] = 11;
	v->a[66499] = actions(3);
	small_parse_table_3325(v);
}

/* EOF small_parse_table_664.c */
