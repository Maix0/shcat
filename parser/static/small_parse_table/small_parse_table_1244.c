/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1244.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6220(t_small_parse_table_array *v)
{
	v->a[124400] = actions(2826);
	v->a[124401] = 7;
	v->a[124402] = anon_sym_PIPE;
	v->a[124403] = anon_sym_LT;
	v->a[124404] = anon_sym_GT;
	v->a[124405] = anon_sym_AMP_GT;
	v->a[124406] = anon_sym_LT_AMP;
	v->a[124407] = anon_sym_GT_AMP;
	v->a[124408] = anon_sym_LT_LT;
	v->a[124409] = actions(2828);
	v->a[124410] = 13;
	v->a[124411] = sym_file_descriptor;
	v->a[124412] = sym__concat;
	v->a[124413] = sym_variable_name;
	v->a[124414] = anon_sym_PIPE_AMP;
	v->a[124415] = anon_sym_AMP_AMP;
	v->a[124416] = anon_sym_PIPE_PIPE;
	v->a[124417] = anon_sym_GT_GT;
	v->a[124418] = anon_sym_AMP_GT_GT;
	v->a[124419] = anon_sym_GT_PIPE;
	small_parse_table_6221(v);
}

void	small_parse_table_6221(t_small_parse_table_array *v)
{
	v->a[124420] = anon_sym_LT_AMP_DASH;
	v->a[124421] = anon_sym_GT_AMP_DASH;
	v->a[124422] = anon_sym_LT_LT_DASH;
	v->a[124423] = aux_sym_concatenation_token1;
	v->a[124424] = 6;
	v->a[124425] = actions(57);
	v->a[124426] = 1;
	v->a[124427] = sym_comment;
	v->a[124428] = actions(7116);
	v->a[124429] = 1;
	v->a[124430] = aux_sym_concatenation_token1;
	v->a[124431] = actions(7139);
	v->a[124432] = 1;
	v->a[124433] = sym__concat;
	v->a[124434] = state(2616);
	v->a[124435] = 1;
	v->a[124436] = aux_sym_concatenation_repeat1;
	v->a[124437] = actions(2688);
	v->a[124438] = 7;
	v->a[124439] = anon_sym_PIPE;
	small_parse_table_6222(v);
}

void	small_parse_table_6222(t_small_parse_table_array *v)
{
	v->a[124440] = anon_sym_LT;
	v->a[124441] = anon_sym_GT;
	v->a[124442] = anon_sym_AMP_GT;
	v->a[124443] = anon_sym_LT_AMP;
	v->a[124444] = anon_sym_GT_AMP;
	v->a[124445] = anon_sym_LT_LT;
	v->a[124446] = actions(2690);
	v->a[124447] = 10;
	v->a[124448] = sym_file_descriptor;
	v->a[124449] = anon_sym_PIPE_AMP;
	v->a[124450] = anon_sym_AMP_AMP;
	v->a[124451] = anon_sym_PIPE_PIPE;
	v->a[124452] = anon_sym_GT_GT;
	v->a[124453] = anon_sym_AMP_GT_GT;
	v->a[124454] = anon_sym_GT_PIPE;
	v->a[124455] = anon_sym_LT_AMP_DASH;
	v->a[124456] = anon_sym_GT_AMP_DASH;
	v->a[124457] = anon_sym_LT_LT_DASH;
	v->a[124458] = 3;
	v->a[124459] = actions(3);
	small_parse_table_6223(v);
}

void	small_parse_table_6223(t_small_parse_table_array *v)
{
	v->a[124460] = 1;
	v->a[124461] = sym_comment;
	v->a[124462] = actions(3020);
	v->a[124463] = 4;
	v->a[124464] = sym__concat;
	v->a[124465] = sym_test_operator;
	v->a[124466] = sym__brace_start;
	v->a[124467] = aux_sym_heredoc_redirect_token1;
	v->a[124468] = actions(3018);
	v->a[124469] = 16;
	v->a[124470] = anon_sym_SEMI_SEMI;
	v->a[124471] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[124472] = anon_sym_AMP;
	v->a[124473] = aux_sym_concatenation_token1;
	v->a[124474] = anon_sym_DOLLAR;
	v->a[124475] = sym__special_character;
	v->a[124476] = anon_sym_DQUOTE;
	v->a[124477] = sym_raw_string;
	v->a[124478] = aux_sym_number_token1;
	v->a[124479] = aux_sym_number_token2;
	small_parse_table_6224(v);
}

void	small_parse_table_6224(t_small_parse_table_array *v)
{
	v->a[124480] = anon_sym_DOLLAR_LBRACE;
	v->a[124481] = anon_sym_DOLLAR_LPAREN;
	v->a[124482] = anon_sym_BQUOTE;
	v->a[124483] = anon_sym_DOLLAR_BQUOTE;
	v->a[124484] = sym_word;
	v->a[124485] = anon_sym_SEMI;
	v->a[124486] = 3;
	v->a[124487] = actions(57);
	v->a[124488] = 1;
	v->a[124489] = sym_comment;
	v->a[124490] = actions(3048);
	v->a[124491] = 7;
	v->a[124492] = anon_sym_PIPE;
	v->a[124493] = anon_sym_LT;
	v->a[124494] = anon_sym_GT;
	v->a[124495] = anon_sym_AMP_GT;
	v->a[124496] = anon_sym_LT_AMP;
	v->a[124497] = anon_sym_GT_AMP;
	v->a[124498] = anon_sym_LT_LT;
	v->a[124499] = actions(3050);
	small_parse_table_6225(v);
}

/* EOF small_parse_table_1244.c */
