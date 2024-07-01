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
	v->a[65400] = 5;
	v->a[65401] = actions(3);
	v->a[65402] = 1;
	v->a[65403] = sym_comment;
	v->a[65404] = actions(2156);
	v->a[65405] = 1;
	v->a[65406] = sym_variable_name;
	v->a[65407] = actions(2067);
	v->a[65408] = 2;
	v->a[65409] = sym_file_descriptor;
	v->a[65410] = aux_sym_heredoc_redirect_token1;
	v->a[65411] = state(1158);
	v->a[65412] = 2;
	v->a[65413] = sym_variable_assignment;
	v->a[65414] = aux_sym__variable_assignments_repeat1;
	v->a[65415] = actions(2069);
	v->a[65416] = 17;
	v->a[65417] = anon_sym_esac;
	v->a[65418] = anon_sym_PIPE;
	v->a[65419] = anon_sym_SEMI_SEMI;
	small_parse_table_3271(v);
}

void	small_parse_table_3271(t_small_parse_table_array *v)
{
	v->a[65420] = anon_sym_AMP_AMP;
	v->a[65421] = anon_sym_PIPE_PIPE;
	v->a[65422] = anon_sym_LT;
	v->a[65423] = anon_sym_GT;
	v->a[65424] = anon_sym_GT_GT;
	v->a[65425] = anon_sym_LT_AMP;
	v->a[65426] = anon_sym_GT_AMP;
	v->a[65427] = anon_sym_GT_PIPE;
	v->a[65428] = anon_sym_LT_AMP_DASH;
	v->a[65429] = anon_sym_GT_AMP_DASH;
	v->a[65430] = anon_sym_LT_LT;
	v->a[65431] = anon_sym_LT_LT_DASH;
	v->a[65432] = anon_sym_AMP;
	v->a[65433] = anon_sym_SEMI;
	v->a[65434] = 8;
	v->a[65435] = actions(3);
	v->a[65436] = 1;
	v->a[65437] = sym_comment;
	v->a[65438] = actions(2074);
	v->a[65439] = 1;
	small_parse_table_3272(v);
}

void	small_parse_table_3272(t_small_parse_table_array *v)
{
	v->a[65440] = aux_sym_heredoc_redirect_token1;
	v->a[65441] = actions(2168);
	v->a[65442] = 1;
	v->a[65443] = sym_file_descriptor;
	v->a[65444] = actions(2162);
	v->a[65445] = 2;
	v->a[65446] = anon_sym_LT_AMP_DASH;
	v->a[65447] = anon_sym_GT_AMP_DASH;
	v->a[65448] = actions(2165);
	v->a[65449] = 2;
	v->a[65450] = anon_sym_LT_LT;
	v->a[65451] = anon_sym_LT_LT_DASH;
	v->a[65452] = state(1159);
	v->a[65453] = 3;
	v->a[65454] = sym_file_redirect;
	v->a[65455] = sym_heredoc_redirect;
	v->a[65456] = aux_sym_redirected_statement_repeat1;
	v->a[65457] = actions(2159);
	v->a[65458] = 6;
	v->a[65459] = anon_sym_LT;
	small_parse_table_3273(v);
}

void	small_parse_table_3273(t_small_parse_table_array *v)
{
	v->a[65460] = anon_sym_GT;
	v->a[65461] = anon_sym_GT_GT;
	v->a[65462] = anon_sym_LT_AMP;
	v->a[65463] = anon_sym_GT_AMP;
	v->a[65464] = anon_sym_GT_PIPE;
	v->a[65465] = actions(2076);
	v->a[65466] = 7;
	v->a[65467] = anon_sym_esac;
	v->a[65468] = anon_sym_PIPE;
	v->a[65469] = anon_sym_SEMI_SEMI;
	v->a[65470] = anon_sym_AMP_AMP;
	v->a[65471] = anon_sym_PIPE_PIPE;
	v->a[65472] = anon_sym_AMP;
	v->a[65473] = anon_sym_SEMI;
	v->a[65474] = 8;
	v->a[65475] = actions(3);
	v->a[65476] = 1;
	v->a[65477] = sym_comment;
	v->a[65478] = actions(2031);
	v->a[65479] = 1;
	small_parse_table_3274(v);
}

void	small_parse_table_3274(t_small_parse_table_array *v)
{
	v->a[65480] = sym_file_descriptor;
	v->a[65481] = actions(754);
	v->a[65482] = 2;
	v->a[65483] = anon_sym_LT_LT;
	v->a[65484] = anon_sym_LT_LT_DASH;
	v->a[65485] = actions(2027);
	v->a[65486] = 2;
	v->a[65487] = anon_sym_LT_AMP_DASH;
	v->a[65488] = anon_sym_GT_AMP_DASH;
	v->a[65489] = actions(2116);
	v->a[65490] = 2;
	v->a[65491] = ts_builtin_sym_end;
	v->a[65492] = aux_sym_heredoc_redirect_token1;
	v->a[65493] = state(1103);
	v->a[65494] = 3;
	v->a[65495] = sym_file_redirect;
	v->a[65496] = sym_heredoc_redirect;
	v->a[65497] = aux_sym_redirected_statement_repeat1;
	v->a[65498] = actions(2025);
	v->a[65499] = 6;
	small_parse_table_3275(v);
}

/* EOF small_parse_table_654.c */
