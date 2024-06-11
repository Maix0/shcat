/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_884.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4420(t_small_parse_table_array *v)
{
	v->a[88400] = actions(703);
	v->a[88401] = 1;
	v->a[88402] = anon_sym_DOLLAR;
	v->a[88403] = actions(705);
	v->a[88404] = 1;
	v->a[88405] = anon_sym_DQUOTE;
	v->a[88406] = actions(707);
	v->a[88407] = 1;
	v->a[88408] = anon_sym_DOLLAR_LBRACE;
	v->a[88409] = actions(709);
	v->a[88410] = 1;
	v->a[88411] = anon_sym_DOLLAR_LPAREN;
	v->a[88412] = actions(711);
	v->a[88413] = 1;
	v->a[88414] = anon_sym_BQUOTE;
	v->a[88415] = state(235);
	v->a[88416] = 2;
	v->a[88417] = sym_concatenation;
	v->a[88418] = aux_sym_for_statement_repeat1;
	v->a[88419] = actions(699);
	small_parse_table_4421(v);
}

void	small_parse_table_4421(t_small_parse_table_array *v)
{
	v->a[88420] = 3;
	v->a[88421] = sym_raw_string;
	v->a[88422] = sym_number;
	v->a[88423] = sym_word;
	v->a[88424] = state(517);
	v->a[88425] = 5;
	v->a[88426] = sym_arithmetic_expansion;
	v->a[88427] = sym_string;
	v->a[88428] = sym_simple_expansion;
	v->a[88429] = sym_expansion;
	v->a[88430] = sym_command_substitution;
	v->a[88431] = 3;
	v->a[88432] = actions(1094);
	v->a[88433] = 1;
	v->a[88434] = sym_comment;
	v->a[88435] = actions(2851);
	v->a[88436] = 7;
	v->a[88437] = anon_sym_PIPE;
	v->a[88438] = anon_sym_LT;
	v->a[88439] = anon_sym_GT;
	small_parse_table_4422(v);
}

void	small_parse_table_4422(t_small_parse_table_array *v)
{
	v->a[88440] = anon_sym_AMP_GT;
	v->a[88441] = anon_sym_LT_AMP;
	v->a[88442] = anon_sym_GT_AMP;
	v->a[88443] = anon_sym_LT_LT;
	v->a[88444] = actions(2849);
	v->a[88445] = 9;
	v->a[88446] = sym_file_descriptor;
	v->a[88447] = anon_sym_AMP_AMP;
	v->a[88448] = anon_sym_PIPE_PIPE;
	v->a[88449] = anon_sym_GT_GT;
	v->a[88450] = anon_sym_AMP_GT_GT;
	v->a[88451] = anon_sym_GT_PIPE;
	v->a[88452] = anon_sym_LT_AMP_DASH;
	v->a[88453] = anon_sym_GT_AMP_DASH;
	v->a[88454] = anon_sym_LT_LT_DASH;
	v->a[88455] = 3;
	v->a[88456] = actions(1094);
	v->a[88457] = 1;
	v->a[88458] = sym_comment;
	v->a[88459] = actions(2845);
	small_parse_table_4423(v);
}

void	small_parse_table_4423(t_small_parse_table_array *v)
{
	v->a[88460] = 7;
	v->a[88461] = anon_sym_PIPE;
	v->a[88462] = anon_sym_LT;
	v->a[88463] = anon_sym_GT;
	v->a[88464] = anon_sym_AMP_GT;
	v->a[88465] = anon_sym_LT_AMP;
	v->a[88466] = anon_sym_GT_AMP;
	v->a[88467] = anon_sym_LT_LT;
	v->a[88468] = actions(2843);
	v->a[88469] = 9;
	v->a[88470] = sym_file_descriptor;
	v->a[88471] = anon_sym_AMP_AMP;
	v->a[88472] = anon_sym_PIPE_PIPE;
	v->a[88473] = anon_sym_GT_GT;
	v->a[88474] = anon_sym_AMP_GT_GT;
	v->a[88475] = anon_sym_GT_PIPE;
	v->a[88476] = anon_sym_LT_AMP_DASH;
	v->a[88477] = anon_sym_GT_AMP_DASH;
	v->a[88478] = anon_sym_LT_LT_DASH;
	v->a[88479] = 10;
	small_parse_table_4424(v);
}

void	small_parse_table_4424(t_small_parse_table_array *v)
{
	v->a[88480] = actions(3);
	v->a[88481] = 1;
	v->a[88482] = sym_comment;
	v->a[88483] = actions(3377);
	v->a[88484] = 1;
	v->a[88485] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88486] = actions(3379);
	v->a[88487] = 1;
	v->a[88488] = anon_sym_DOLLAR;
	v->a[88489] = actions(3381);
	v->a[88490] = 1;
	v->a[88491] = anon_sym_DQUOTE;
	v->a[88492] = actions(3383);
	v->a[88493] = 1;
	v->a[88494] = anon_sym_DOLLAR_LBRACE;
	v->a[88495] = actions(3385);
	v->a[88496] = 1;
	v->a[88497] = anon_sym_DOLLAR_LPAREN;
	v->a[88498] = actions(3387);
	v->a[88499] = 1;
	small_parse_table_4425(v);
}

/* EOF small_parse_table_884.c */
