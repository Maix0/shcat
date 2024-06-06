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
	v->a[28400] = sym_test_operator;
	v->a[28401] = sym__brace_start;
	v->a[28402] = aux_sym_heredoc_redirect_token1;
	v->a[28403] = actions(3123);
	v->a[28404] = 35;
	v->a[28405] = anon_sym_PIPE;
	v->a[28406] = anon_sym_SEMI_SEMI;
	v->a[28407] = anon_sym_SEMI_AMP;
	v->a[28408] = anon_sym_SEMI_SEMI_AMP;
	v->a[28409] = anon_sym_PIPE_AMP;
	v->a[28410] = anon_sym_AMP_AMP;
	v->a[28411] = anon_sym_PIPE_PIPE;
	v->a[28412] = anon_sym_LT;
	v->a[28413] = anon_sym_GT;
	v->a[28414] = anon_sym_GT_GT;
	v->a[28415] = anon_sym_AMP_GT;
	v->a[28416] = anon_sym_AMP_GT_GT;
	v->a[28417] = anon_sym_LT_AMP;
	v->a[28418] = anon_sym_GT_AMP;
	v->a[28419] = anon_sym_GT_PIPE;
	small_parse_table_1421(v);
}

void	small_parse_table_1421(t_small_parse_table_array *v)
{
	v->a[28420] = anon_sym_LT_AMP_DASH;
	v->a[28421] = anon_sym_GT_AMP_DASH;
	v->a[28422] = anon_sym_LT_LT;
	v->a[28423] = anon_sym_LT_LT_DASH;
	v->a[28424] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28425] = anon_sym_AMP;
	v->a[28426] = aux_sym_concatenation_token1;
	v->a[28427] = anon_sym_DOLLAR;
	v->a[28428] = sym__special_character;
	v->a[28429] = anon_sym_DQUOTE;
	v->a[28430] = sym_raw_string;
	v->a[28431] = aux_sym_number_token1;
	v->a[28432] = aux_sym_number_token2;
	v->a[28433] = anon_sym_DOLLAR_LBRACE;
	v->a[28434] = anon_sym_DOLLAR_LPAREN;
	v->a[28435] = anon_sym_BQUOTE;
	v->a[28436] = anon_sym_DOLLAR_BQUOTE;
	v->a[28437] = aux_sym__simple_variable_name_token1;
	v->a[28438] = sym_word;
	v->a[28439] = anon_sym_SEMI;
	small_parse_table_1422(v);
}

void	small_parse_table_1422(t_small_parse_table_array *v)
{
	v->a[28440] = 6;
	v->a[28441] = actions(3);
	v->a[28442] = 1;
	v->a[28443] = sym_comment;
	v->a[28444] = actions(3288);
	v->a[28445] = 1;
	v->a[28446] = aux_sym_concatenation_token1;
	v->a[28447] = actions(3322);
	v->a[28448] = 1;
	v->a[28449] = sym__concat;
	v->a[28450] = state(640);
	v->a[28451] = 1;
	v->a[28452] = aux_sym_concatenation_repeat1;
	v->a[28453] = actions(2696);
	v->a[28454] = 6;
	v->a[28455] = sym_file_descriptor;
	v->a[28456] = sym_test_operator;
	v->a[28457] = sym__bare_dollar;
	v->a[28458] = sym__brace_start;
	v->a[28459] = ts_builtin_sym_end;
	small_parse_table_1423(v);
}

void	small_parse_table_1423(t_small_parse_table_array *v)
{
	v->a[28460] = aux_sym_heredoc_redirect_token1;
	v->a[28461] = actions(2694);
	v->a[28462] = 32;
	v->a[28463] = anon_sym_LPAREN;
	v->a[28464] = anon_sym_PIPE;
	v->a[28465] = anon_sym_SEMI_SEMI;
	v->a[28466] = anon_sym_PIPE_AMP;
	v->a[28467] = anon_sym_AMP_AMP;
	v->a[28468] = anon_sym_PIPE_PIPE;
	v->a[28469] = anon_sym_LT;
	v->a[28470] = anon_sym_GT;
	v->a[28471] = anon_sym_GT_GT;
	v->a[28472] = anon_sym_AMP_GT;
	v->a[28473] = anon_sym_AMP_GT_GT;
	v->a[28474] = anon_sym_LT_AMP;
	v->a[28475] = anon_sym_GT_AMP;
	v->a[28476] = anon_sym_GT_PIPE;
	v->a[28477] = anon_sym_LT_AMP_DASH;
	v->a[28478] = anon_sym_GT_AMP_DASH;
	v->a[28479] = anon_sym_LT_LT;
	small_parse_table_1424(v);
}

void	small_parse_table_1424(t_small_parse_table_array *v)
{
	v->a[28480] = anon_sym_LT_LT_DASH;
	v->a[28481] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28482] = anon_sym_AMP;
	v->a[28483] = anon_sym_DOLLAR;
	v->a[28484] = sym__special_character;
	v->a[28485] = anon_sym_DQUOTE;
	v->a[28486] = sym_raw_string;
	v->a[28487] = aux_sym_number_token1;
	v->a[28488] = aux_sym_number_token2;
	v->a[28489] = anon_sym_DOLLAR_LBRACE;
	v->a[28490] = anon_sym_DOLLAR_LPAREN;
	v->a[28491] = anon_sym_BQUOTE;
	v->a[28492] = anon_sym_DOLLAR_BQUOTE;
	v->a[28493] = sym_word;
	v->a[28494] = anon_sym_SEMI;
	v->a[28495] = 3;
	v->a[28496] = actions(3);
	v->a[28497] = 1;
	v->a[28498] = sym_comment;
	v->a[28499] = actions(2908);
	small_parse_table_1425(v);
}

/* EOF small_parse_table_284.c */
