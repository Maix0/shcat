/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_284.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1420(t_small_parse_table_array *v)
{
	v->a[28400] = state(1151);
	v->a[28401] = 2;
	v->a[28402] = sym_variable_assignment;
	v->a[28403] = aux_sym_variable_assignments_repeat1;
	v->a[28404] = actions(1077);
	v->a[28405] = 3;
	v->a[28406] = aux_sym_heredoc_redirect_token1;
	v->a[28407] = anon_sym_AMP;
	v->a[28408] = anon_sym_SEMI;
	v->a[28409] = state(1160);
	v->a[28410] = 3;
	v->a[28411] = sym_file_redirect;
	v->a[28412] = sym_heredoc_redirect;
	v->a[28413] = aux_sym_redirected_statement_repeat1;
	v->a[28414] = actions(1000);
	v->a[28415] = 20;
	v->a[28416] = anon_sym_LT;
	v->a[28417] = anon_sym_GT;
	v->a[28418] = anon_sym_GT_GT;
	v->a[28419] = anon_sym_AMP_GT;
	small_parse_table_1421(v);
}

void	small_parse_table_1421(t_small_parse_table_array *v)
{
	v->a[28420] = anon_sym_AMP_GT_GT;
	v->a[28421] = anon_sym_LT_AMP;
	v->a[28422] = anon_sym_GT_AMP;
	v->a[28423] = anon_sym_GT_PIPE;
	v->a[28424] = anon_sym_LT_AMP_DASH;
	v->a[28425] = anon_sym_GT_AMP_DASH;
	v->a[28426] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28427] = anon_sym_DOLLAR;
	v->a[28428] = anon_sym_DQUOTE;
	v->a[28429] = sym_raw_string;
	v->a[28430] = aux_sym_number_token1;
	v->a[28431] = aux_sym_number_token2;
	v->a[28432] = anon_sym_DOLLAR_LBRACE;
	v->a[28433] = anon_sym_DOLLAR_LPAREN;
	v->a[28434] = anon_sym_BQUOTE;
	v->a[28435] = sym_word;
	v->a[28436] = 6;
	v->a[28437] = actions(3);
	v->a[28438] = 1;
	v->a[28439] = sym_comment;
	small_parse_table_1422(v);
}

void	small_parse_table_1422(t_small_parse_table_array *v)
{
	v->a[28440] = actions(1116);
	v->a[28441] = 1;
	v->a[28442] = aux_sym_concatenation_token1;
	v->a[28443] = actions(1119);
	v->a[28444] = 1;
	v->a[28445] = sym__concat;
	v->a[28446] = state(284);
	v->a[28447] = 1;
	v->a[28448] = aux_sym_concatenation_repeat1;
	v->a[28449] = actions(1112);
	v->a[28450] = 3;
	v->a[28451] = sym_file_descriptor;
	v->a[28452] = sym__bare_dollar;
	v->a[28453] = ts_builtin_sym_end;
	v->a[28454] = actions(1114);
	v->a[28455] = 30;
	v->a[28456] = anon_sym_LPAREN;
	v->a[28457] = anon_sym_PIPE;
	v->a[28458] = anon_sym_SEMI_SEMI;
	v->a[28459] = anon_sym_AMP_AMP;
	small_parse_table_1423(v);
}

void	small_parse_table_1423(t_small_parse_table_array *v)
{
	v->a[28460] = anon_sym_PIPE_PIPE;
	v->a[28461] = anon_sym_LT;
	v->a[28462] = anon_sym_GT;
	v->a[28463] = anon_sym_GT_GT;
	v->a[28464] = anon_sym_AMP_GT;
	v->a[28465] = anon_sym_AMP_GT_GT;
	v->a[28466] = anon_sym_LT_AMP;
	v->a[28467] = anon_sym_GT_AMP;
	v->a[28468] = anon_sym_GT_PIPE;
	v->a[28469] = anon_sym_LT_AMP_DASH;
	v->a[28470] = anon_sym_GT_AMP_DASH;
	v->a[28471] = anon_sym_LT_LT;
	v->a[28472] = anon_sym_LT_LT_DASH;
	v->a[28473] = aux_sym_heredoc_redirect_token1;
	v->a[28474] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28475] = anon_sym_AMP;
	v->a[28476] = anon_sym_DOLLAR;
	v->a[28477] = anon_sym_DQUOTE;
	v->a[28478] = sym_raw_string;
	v->a[28479] = aux_sym_number_token1;
	small_parse_table_1424(v);
}

void	small_parse_table_1424(t_small_parse_table_array *v)
{
	v->a[28480] = aux_sym_number_token2;
	v->a[28481] = anon_sym_DOLLAR_LBRACE;
	v->a[28482] = anon_sym_DOLLAR_LPAREN;
	v->a[28483] = anon_sym_BQUOTE;
	v->a[28484] = sym_word;
	v->a[28485] = anon_sym_SEMI;
	v->a[28486] = 10;
	v->a[28487] = actions(3);
	v->a[28488] = 1;
	v->a[28489] = sym_comment;
	v->a[28490] = actions(1002);
	v->a[28491] = 1;
	v->a[28492] = anon_sym_PIPE;
	v->a[28493] = actions(1006);
	v->a[28494] = 1;
	v->a[28495] = sym_file_descriptor;
	v->a[28496] = actions(1095);
	v->a[28497] = 1;
	v->a[28498] = sym_variable_name;
	v->a[28499] = actions(1062);
	small_parse_table_1425(v);
}

/* EOF small_parse_table_284.c */
