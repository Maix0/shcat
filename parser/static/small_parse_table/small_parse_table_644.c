/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_644.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3220(t_small_parse_table_array *v)
{
	v->a[64400] = 2;
	v->a[64401] = anon_sym_AMP_AMP;
	v->a[64402] = anon_sym_PIPE_PIPE;
	v->a[64403] = state(1353);
	v->a[64404] = 3;
	v->a[64405] = sym_file_redirect;
	v->a[64406] = sym_heredoc_redirect;
	v->a[64407] = aux_sym_redirected_statement_repeat1;
	v->a[64408] = actions(2425);
	v->a[64409] = 7;
	v->a[64410] = anon_sym_LT;
	v->a[64411] = anon_sym_GT;
	v->a[64412] = anon_sym_GT_GT;
	v->a[64413] = anon_sym_LT_AMP;
	v->a[64414] = anon_sym_GT_AMP;
	v->a[64415] = anon_sym_GT_PIPE;
	v->a[64416] = anon_sym_LT_GT;
	v->a[64417] = 10;
	v->a[64418] = actions(3);
	v->a[64419] = 1;
	small_parse_table_3221(v);
}

void	small_parse_table_3221(t_small_parse_table_array *v)
{
	v->a[64420] = sym_comment;
	v->a[64421] = actions(1504);
	v->a[64422] = 1;
	v->a[64423] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64424] = actions(1506);
	v->a[64425] = 1;
	v->a[64426] = anon_sym_DOLLAR;
	v->a[64427] = actions(1508);
	v->a[64428] = 1;
	v->a[64429] = anon_sym_DQUOTE;
	v->a[64430] = actions(1510);
	v->a[64431] = 1;
	v->a[64432] = anon_sym_DOLLAR_LBRACE;
	v->a[64433] = actions(1512);
	v->a[64434] = 1;
	v->a[64435] = anon_sym_DOLLAR_LPAREN;
	v->a[64436] = actions(1514);
	v->a[64437] = 1;
	v->a[64438] = anon_sym_BQUOTE;
	v->a[64439] = actions(2433);
	small_parse_table_3222(v);
}

void	small_parse_table_3222(t_small_parse_table_array *v)
{
	v->a[64440] = 1;
	v->a[64441] = sym__bare_dollar;
	v->a[64442] = actions(2431);
	v->a[64443] = 5;
	v->a[64444] = aux_sym_concatenation_token1;
	v->a[64445] = sym_raw_string;
	v->a[64446] = sym_number;
	v->a[64447] = sym__comment_word;
	v->a[64448] = sym_word;
	v->a[64449] = state(927);
	v->a[64450] = 5;
	v->a[64451] = sym_arithmetic_expansion;
	v->a[64452] = sym_string;
	v->a[64453] = sym_simple_expansion;
	v->a[64454] = sym_expansion;
	v->a[64455] = sym_command_substitution;
	v->a[64456] = 10;
	v->a[64457] = actions(3);
	v->a[64458] = 1;
	v->a[64459] = sym_comment;
	small_parse_table_3223(v);
}

void	small_parse_table_3223(t_small_parse_table_array *v)
{
	v->a[64460] = actions(903);
	v->a[64461] = 1;
	v->a[64462] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64463] = actions(907);
	v->a[64464] = 1;
	v->a[64465] = anon_sym_DQUOTE;
	v->a[64466] = actions(909);
	v->a[64467] = 1;
	v->a[64468] = anon_sym_DOLLAR_LBRACE;
	v->a[64469] = actions(911);
	v->a[64470] = 1;
	v->a[64471] = anon_sym_DOLLAR_LPAREN;
	v->a[64472] = actions(913);
	v->a[64473] = 1;
	v->a[64474] = anon_sym_BQUOTE;
	v->a[64475] = actions(2437);
	v->a[64476] = 1;
	v->a[64477] = anon_sym_DOLLAR;
	v->a[64478] = actions(2439);
	v->a[64479] = 1;
	small_parse_table_3224(v);
}

void	small_parse_table_3224(t_small_parse_table_array *v)
{
	v->a[64480] = sym__bare_dollar;
	v->a[64481] = actions(2435);
	v->a[64482] = 5;
	v->a[64483] = aux_sym_concatenation_token1;
	v->a[64484] = sym_raw_string;
	v->a[64485] = sym_number;
	v->a[64486] = sym__comment_word;
	v->a[64487] = sym_word;
	v->a[64488] = state(624);
	v->a[64489] = 5;
	v->a[64490] = sym_arithmetic_expansion;
	v->a[64491] = sym_string;
	v->a[64492] = sym_simple_expansion;
	v->a[64493] = sym_expansion;
	v->a[64494] = sym_command_substitution;
	v->a[64495] = 5;
	v->a[64496] = actions(501);
	v->a[64497] = 1;
	v->a[64498] = sym_comment;
	v->a[64499] = state(1243);
	small_parse_table_3225(v);
}

/* EOF small_parse_table_644.c */
