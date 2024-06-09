/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_654.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3270(t_small_parse_table_array *v)
{
	v->a[65400] = sym_file_descriptor;
	v->a[65401] = actions(1064);
	v->a[65402] = 1;
	v->a[65403] = sym_variable_name;
	v->a[65404] = state(1044);
	v->a[65405] = 2;
	v->a[65406] = sym_variable_assignment;
	v->a[65407] = aux_sym_variable_assignments_repeat1;
	v->a[65408] = actions(1000);
	v->a[65409] = 20;
	v->a[65410] = anon_sym_LT;
	v->a[65411] = anon_sym_GT;
	v->a[65412] = anon_sym_GT_GT;
	v->a[65413] = anon_sym_AMP_GT;
	v->a[65414] = anon_sym_AMP_GT_GT;
	v->a[65415] = anon_sym_LT_AMP;
	v->a[65416] = anon_sym_GT_AMP;
	v->a[65417] = anon_sym_GT_PIPE;
	v->a[65418] = anon_sym_LT_AMP_DASH;
	v->a[65419] = anon_sym_GT_AMP_DASH;
	small_parse_table_3271(v);
}

void	small_parse_table_3271(t_small_parse_table_array *v)
{
	v->a[65420] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65421] = anon_sym_DOLLAR;
	v->a[65422] = anon_sym_DQUOTE;
	v->a[65423] = sym_raw_string;
	v->a[65424] = aux_sym_number_token1;
	v->a[65425] = aux_sym_number_token2;
	v->a[65426] = anon_sym_DOLLAR_LBRACE;
	v->a[65427] = anon_sym_DOLLAR_LPAREN;
	v->a[65428] = anon_sym_BQUOTE;
	v->a[65429] = sym_word;
	v->a[65430] = 11;
	v->a[65431] = actions(3);
	v->a[65432] = 1;
	v->a[65433] = sym_comment;
	v->a[65434] = actions(1002);
	v->a[65435] = 1;
	v->a[65436] = anon_sym_PIPE;
	v->a[65437] = actions(1073);
	v->a[65438] = 1;
	v->a[65439] = anon_sym_BQUOTE;
	small_parse_table_3272(v);
}

void	small_parse_table_3272(t_small_parse_table_array *v)
{
	v->a[65440] = actions(2352);
	v->a[65441] = 1;
	v->a[65442] = sym_file_descriptor;
	v->a[65443] = actions(2360);
	v->a[65444] = 1;
	v->a[65445] = aux_sym_heredoc_redirect_token1;
	v->a[65446] = actions(1062);
	v->a[65447] = 2;
	v->a[65448] = anon_sym_LT_LT;
	v->a[65449] = anon_sym_LT_LT_DASH;
	v->a[65450] = actions(1143);
	v->a[65451] = 2;
	v->a[65452] = anon_sym_AMP_AMP;
	v->a[65453] = anon_sym_PIPE_PIPE;
	v->a[65454] = actions(2348);
	v->a[65455] = 2;
	v->a[65456] = anon_sym_LT_AMP_DASH;
	v->a[65457] = anon_sym_GT_AMP_DASH;
	v->a[65458] = actions(1163);
	v->a[65459] = 3;
	small_parse_table_3273(v);
}

void	small_parse_table_3273(t_small_parse_table_array *v)
{
	v->a[65460] = anon_sym_SEMI_SEMI;
	v->a[65461] = anon_sym_AMP;
	v->a[65462] = anon_sym_SEMI;
	v->a[65463] = state(1095);
	v->a[65464] = 3;
	v->a[65465] = sym_file_redirect;
	v->a[65466] = sym_heredoc_redirect;
	v->a[65467] = aux_sym_redirected_statement_repeat1;
	v->a[65468] = actions(2346);
	v->a[65469] = 8;
	v->a[65470] = anon_sym_LT;
	v->a[65471] = anon_sym_GT;
	v->a[65472] = anon_sym_GT_GT;
	v->a[65473] = anon_sym_AMP_GT;
	v->a[65474] = anon_sym_AMP_GT_GT;
	v->a[65475] = anon_sym_LT_AMP;
	v->a[65476] = anon_sym_GT_AMP;
	v->a[65477] = anon_sym_GT_PIPE;
	v->a[65478] = 18;
	v->a[65479] = actions(3);
	small_parse_table_3274(v);
}

void	small_parse_table_3274(t_small_parse_table_array *v)
{
	v->a[65480] = 1;
	v->a[65481] = sym_comment;
	v->a[65482] = actions(2115);
	v->a[65483] = 1;
	v->a[65484] = anon_sym_LPAREN;
	v->a[65485] = actions(2119);
	v->a[65486] = 1;
	v->a[65487] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65488] = actions(2121);
	v->a[65489] = 1;
	v->a[65490] = anon_sym_DOLLAR;
	v->a[65491] = actions(2123);
	v->a[65492] = 1;
	v->a[65493] = anon_sym_DQUOTE;
	v->a[65494] = actions(2125);
	v->a[65495] = 1;
	v->a[65496] = aux_sym_number_token1;
	v->a[65497] = actions(2127);
	v->a[65498] = 1;
	v->a[65499] = aux_sym_number_token2;
	small_parse_table_3275(v);
}

/* EOF small_parse_table_654.c */
