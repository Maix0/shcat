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
	v->a[64400] = actions(2115);
	v->a[64401] = 1;
	v->a[64402] = anon_sym_LPAREN;
	v->a[64403] = actions(2119);
	v->a[64404] = 1;
	v->a[64405] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64406] = actions(2121);
	v->a[64407] = 1;
	v->a[64408] = anon_sym_DOLLAR;
	v->a[64409] = actions(2123);
	v->a[64410] = 1;
	v->a[64411] = anon_sym_DQUOTE;
	v->a[64412] = actions(2125);
	v->a[64413] = 1;
	v->a[64414] = aux_sym_number_token1;
	v->a[64415] = actions(2127);
	v->a[64416] = 1;
	v->a[64417] = aux_sym_number_token2;
	v->a[64418] = actions(2129);
	v->a[64419] = 1;
	small_parse_table_3221(v);
}

void	small_parse_table_3221(t_small_parse_table_array *v)
{
	v->a[64420] = anon_sym_DOLLAR_LBRACE;
	v->a[64421] = actions(2131);
	v->a[64422] = 1;
	v->a[64423] = anon_sym_DOLLAR_LPAREN;
	v->a[64424] = actions(2133);
	v->a[64425] = 1;
	v->a[64426] = anon_sym_BQUOTE;
	v->a[64427] = actions(2135);
	v->a[64428] = 1;
	v->a[64429] = sym_extglob_pattern;
	v->a[64430] = actions(2320);
	v->a[64431] = 1;
	v->a[64432] = anon_sym_esac;
	v->a[64433] = state(1112);
	v->a[64434] = 1;
	v->a[64435] = aux_sym_case_statement_repeat1;
	v->a[64436] = state(1786);
	v->a[64437] = 1;
	v->a[64438] = sym_case_item;
	v->a[64439] = state(2127);
	small_parse_table_3222(v);
}

void	small_parse_table_3222(t_small_parse_table_array *v)
{
	v->a[64440] = 1;
	v->a[64441] = sym__case_item_last;
	v->a[64442] = actions(2111);
	v->a[64443] = 2;
	v->a[64444] = sym_raw_string;
	v->a[64445] = sym_word;
	v->a[64446] = state(2016);
	v->a[64447] = 2;
	v->a[64448] = sym_concatenation;
	v->a[64449] = sym__extglob_blob;
	v->a[64450] = state(1896);
	v->a[64451] = 6;
	v->a[64452] = sym_arithmetic_expansion;
	v->a[64453] = sym_string;
	v->a[64454] = sym_number;
	v->a[64455] = sym_simple_expansion;
	v->a[64456] = sym_expansion;
	v->a[64457] = sym_command_substitution;
	v->a[64458] = 6;
	v->a[64459] = actions(3);
	small_parse_table_3223(v);
}

void	small_parse_table_3223(t_small_parse_table_array *v)
{
	v->a[64460] = 1;
	v->a[64461] = sym_comment;
	v->a[64462] = actions(2261);
	v->a[64463] = 1;
	v->a[64464] = aux_sym_concatenation_token1;
	v->a[64465] = actions(2322);
	v->a[64466] = 1;
	v->a[64467] = sym__concat;
	v->a[64468] = state(973);
	v->a[64469] = 1;
	v->a[64470] = aux_sym_concatenation_repeat1;
	v->a[64471] = actions(1127);
	v->a[64472] = 2;
	v->a[64473] = sym_file_descriptor;
	v->a[64474] = aux_sym_heredoc_redirect_token1;
	v->a[64475] = actions(1129);
	v->a[64476] = 19;
	v->a[64477] = anon_sym_PIPE;
	v->a[64478] = anon_sym_SEMI_SEMI;
	v->a[64479] = anon_sym_AMP_AMP;
	small_parse_table_3224(v);
}

void	small_parse_table_3224(t_small_parse_table_array *v)
{
	v->a[64480] = anon_sym_PIPE_PIPE;
	v->a[64481] = anon_sym_LT;
	v->a[64482] = anon_sym_GT;
	v->a[64483] = anon_sym_GT_GT;
	v->a[64484] = anon_sym_AMP_GT;
	v->a[64485] = anon_sym_AMP_GT_GT;
	v->a[64486] = anon_sym_LT_AMP;
	v->a[64487] = anon_sym_GT_AMP;
	v->a[64488] = anon_sym_GT_PIPE;
	v->a[64489] = anon_sym_LT_AMP_DASH;
	v->a[64490] = anon_sym_GT_AMP_DASH;
	v->a[64491] = anon_sym_LT_LT;
	v->a[64492] = anon_sym_LT_LT_DASH;
	v->a[64493] = anon_sym_AMP;
	v->a[64494] = anon_sym_BQUOTE;
	v->a[64495] = anon_sym_SEMI;
	v->a[64496] = 11;
	v->a[64497] = actions(3);
	v->a[64498] = 1;
	v->a[64499] = sym_comment;
	small_parse_table_3225(v);
}

/* EOF small_parse_table_644.c */
