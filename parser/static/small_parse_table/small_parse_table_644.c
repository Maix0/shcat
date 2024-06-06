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
	v->a[64400] = 1;
	v->a[64401] = sym_comment;
	v->a[64402] = actions(4165);
	v->a[64403] = 1;
	v->a[64404] = aux_sym_concatenation_token1;
	v->a[64405] = actions(4167);
	v->a[64406] = 1;
	v->a[64407] = sym__concat;
	v->a[64408] = state(1373);
	v->a[64409] = 1;
	v->a[64410] = aux_sym_concatenation_repeat1;
	v->a[64411] = actions(2694);
	v->a[64412] = 13;
	v->a[64413] = anon_sym_PIPE;
	v->a[64414] = anon_sym_LT;
	v->a[64415] = anon_sym_GT;
	v->a[64416] = anon_sym_AMP_GT;
	v->a[64417] = anon_sym_LT_AMP;
	v->a[64418] = anon_sym_GT_AMP;
	v->a[64419] = anon_sym_LT_LT;
	small_parse_table_3221(v);
}

void	small_parse_table_3221(t_small_parse_table_array *v)
{
	v->a[64420] = anon_sym_DOLLAR;
	v->a[64421] = aux_sym_number_token1;
	v->a[64422] = aux_sym_number_token2;
	v->a[64423] = anon_sym_DOLLAR_LPAREN;
	v->a[64424] = anon_sym_BQUOTE;
	v->a[64425] = sym_word;
	v->a[64426] = actions(2696);
	v->a[64427] = 19;
	v->a[64428] = sym_file_descriptor;
	v->a[64429] = sym_test_operator;
	v->a[64430] = sym__bare_dollar;
	v->a[64431] = sym__brace_start;
	v->a[64432] = anon_sym_PIPE_AMP;
	v->a[64433] = anon_sym_AMP_AMP;
	v->a[64434] = anon_sym_PIPE_PIPE;
	v->a[64435] = anon_sym_GT_GT;
	v->a[64436] = anon_sym_AMP_GT_GT;
	v->a[64437] = anon_sym_GT_PIPE;
	v->a[64438] = anon_sym_LT_AMP_DASH;
	v->a[64439] = anon_sym_GT_AMP_DASH;
	small_parse_table_3222(v);
}

void	small_parse_table_3222(t_small_parse_table_array *v)
{
	v->a[64440] = anon_sym_LT_LT_DASH;
	v->a[64441] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64442] = sym__special_character;
	v->a[64443] = anon_sym_DQUOTE;
	v->a[64444] = sym_raw_string;
	v->a[64445] = anon_sym_DOLLAR_LBRACE;
	v->a[64446] = anon_sym_DOLLAR_BQUOTE;
	v->a[64447] = 19;
	v->a[64448] = actions(57);
	v->a[64449] = 1;
	v->a[64450] = sym_comment;
	v->a[64451] = actions(4120);
	v->a[64452] = 1;
	v->a[64453] = anon_sym_PIPE;
	v->a[64454] = actions(4122);
	v->a[64455] = 1;
	v->a[64456] = anon_sym_AMP_AMP;
	v->a[64457] = actions(4124);
	v->a[64458] = 1;
	v->a[64459] = anon_sym_PIPE_PIPE;
	small_parse_table_3223(v);
}

void	small_parse_table_3223(t_small_parse_table_array *v)
{
	v->a[64460] = actions(4126);
	v->a[64461] = 1;
	v->a[64462] = anon_sym_EQ;
	v->a[64463] = actions(4132);
	v->a[64464] = 1;
	v->a[64465] = anon_sym_COMMA;
	v->a[64466] = actions(4138);
	v->a[64467] = 1;
	v->a[64468] = anon_sym_CARET;
	v->a[64469] = actions(4140);
	v->a[64470] = 1;
	v->a[64471] = anon_sym_AMP;
	v->a[64472] = actions(4150);
	v->a[64473] = 1;
	v->a[64474] = anon_sym_QMARK;
	v->a[64475] = actions(4169);
	v->a[64476] = 1;
	v->a[64477] = anon_sym_RPAREN_RPAREN;
	v->a[64478] = state(3468);
	v->a[64479] = 1;
	small_parse_table_3224(v);
}

void	small_parse_table_3224(t_small_parse_table_array *v)
{
	v->a[64480] = aux_sym_arithmetic_expansion_repeat1;
	v->a[64481] = actions(4128);
	v->a[64482] = 2;
	v->a[64483] = anon_sym_LT;
	v->a[64484] = anon_sym_GT;
	v->a[64485] = actions(4130);
	v->a[64486] = 2;
	v->a[64487] = anon_sym_GT_GT;
	v->a[64488] = anon_sym_LT_LT;
	v->a[64489] = actions(4142);
	v->a[64490] = 2;
	v->a[64491] = anon_sym_EQ_EQ;
	v->a[64492] = anon_sym_BANG_EQ;
	v->a[64493] = actions(4144);
	v->a[64494] = 2;
	v->a[64495] = anon_sym_LT_EQ;
	v->a[64496] = anon_sym_GT_EQ;
	v->a[64497] = actions(4146);
	v->a[64498] = 2;
	v->a[64499] = anon_sym_PLUS;
	small_parse_table_3225(v);
}

/* EOF small_parse_table_644.c */
