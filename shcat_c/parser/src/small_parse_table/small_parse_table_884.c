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
	v->a[88400] = anon_sym_AMP_GT;
	v->a[88401] = anon_sym_AMP_GT_GT;
	v->a[88402] = anon_sym_LT_AMP;
	v->a[88403] = anon_sym_GT_AMP;
	v->a[88404] = anon_sym_GT_PIPE;
	v->a[88405] = anon_sym_LT_AMP_DASH;
	v->a[88406] = anon_sym_GT_AMP_DASH;
	v->a[88407] = anon_sym_LT_LT_DASH;
	v->a[88408] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88409] = anon_sym_DOLLAR_LBRACK;
	v->a[88410] = anon_sym_DOLLAR;
	v->a[88411] = sym__special_character;
	v->a[88412] = anon_sym_DQUOTE;
	v->a[88413] = sym_raw_string;
	v->a[88414] = sym_ansi_c_string;
	v->a[88415] = aux_sym_number_token1;
	v->a[88416] = aux_sym_number_token2;
	v->a[88417] = anon_sym_DOLLAR_LBRACE;
	v->a[88418] = anon_sym_DOLLAR_LPAREN;
	v->a[88419] = anon_sym_BQUOTE;
	small_parse_table_4421(v);
}

void	small_parse_table_4421(t_small_parse_table_array *v)
{
	v->a[88420] = anon_sym_DOLLAR_BQUOTE;
	v->a[88421] = anon_sym_LT_LPAREN;
	v->a[88422] = anon_sym_GT_LPAREN;
	v->a[88423] = aux_sym__simple_variable_name_token1;
	v->a[88424] = sym_word;
	v->a[88425] = 3;
	v->a[88426] = actions(3);
	v->a[88427] = 1;
	v->a[88428] = sym_comment;
	v->a[88429] = actions(1310);
	v->a[88430] = 5;
	v->a[88431] = sym_file_descriptor;
	v->a[88432] = sym__concat;
	v->a[88433] = sym_test_operator;
	v->a[88434] = sym__brace_start;
	v->a[88435] = aux_sym_heredoc_redirect_token1;
	v->a[88436] = actions(1308);
	v->a[88437] = 39;
	v->a[88438] = anon_sym_LPAREN_LPAREN;
	v->a[88439] = anon_sym_SEMI;
	small_parse_table_4422(v);
}

void	small_parse_table_4422(t_small_parse_table_array *v)
{
	v->a[88440] = anon_sym_PIPE_PIPE;
	v->a[88441] = anon_sym_AMP_AMP;
	v->a[88442] = anon_sym_PIPE;
	v->a[88443] = anon_sym_AMP;
	v->a[88444] = anon_sym_LT;
	v->a[88445] = anon_sym_GT;
	v->a[88446] = anon_sym_LT_LT;
	v->a[88447] = anon_sym_GT_GT;
	v->a[88448] = anon_sym_RPAREN;
	v->a[88449] = anon_sym_SEMI_SEMI;
	v->a[88450] = anon_sym_PIPE_AMP;
	v->a[88451] = anon_sym_AMP_GT;
	v->a[88452] = anon_sym_AMP_GT_GT;
	v->a[88453] = anon_sym_LT_AMP;
	v->a[88454] = anon_sym_GT_AMP;
	v->a[88455] = anon_sym_GT_PIPE;
	v->a[88456] = anon_sym_LT_AMP_DASH;
	v->a[88457] = anon_sym_GT_AMP_DASH;
	v->a[88458] = anon_sym_LT_LT_DASH;
	v->a[88459] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4423(v);
}

void	small_parse_table_4423(t_small_parse_table_array *v)
{
	v->a[88460] = anon_sym_DOLLAR_LBRACK;
	v->a[88461] = aux_sym_concatenation_token1;
	v->a[88462] = anon_sym_DOLLAR;
	v->a[88463] = sym__special_character;
	v->a[88464] = anon_sym_DQUOTE;
	v->a[88465] = sym_raw_string;
	v->a[88466] = sym_ansi_c_string;
	v->a[88467] = aux_sym_number_token1;
	v->a[88468] = aux_sym_number_token2;
	v->a[88469] = anon_sym_DOLLAR_LBRACE;
	v->a[88470] = anon_sym_DOLLAR_LPAREN;
	v->a[88471] = anon_sym_BQUOTE;
	v->a[88472] = anon_sym_DOLLAR_BQUOTE;
	v->a[88473] = anon_sym_LT_LPAREN;
	v->a[88474] = anon_sym_GT_LPAREN;
	v->a[88475] = aux_sym__simple_variable_name_token1;
	v->a[88476] = sym_word;
	v->a[88477] = 3;
	v->a[88478] = actions(3);
	v->a[88479] = 1;
	small_parse_table_4424(v);
}

void	small_parse_table_4424(t_small_parse_table_array *v)
{
	v->a[88480] = sym_comment;
	v->a[88481] = actions(1306);
	v->a[88482] = 5;
	v->a[88483] = sym_file_descriptor;
	v->a[88484] = sym__concat;
	v->a[88485] = sym_test_operator;
	v->a[88486] = sym__brace_start;
	v->a[88487] = aux_sym_heredoc_redirect_token1;
	v->a[88488] = actions(1304);
	v->a[88489] = 39;
	v->a[88490] = anon_sym_LPAREN_LPAREN;
	v->a[88491] = anon_sym_SEMI;
	v->a[88492] = anon_sym_PIPE_PIPE;
	v->a[88493] = anon_sym_AMP_AMP;
	v->a[88494] = anon_sym_PIPE;
	v->a[88495] = anon_sym_AMP;
	v->a[88496] = anon_sym_LT;
	v->a[88497] = anon_sym_GT;
	v->a[88498] = anon_sym_LT_LT;
	v->a[88499] = anon_sym_GT_GT;
	small_parse_table_4425(v);
}

/* EOF small_parse_table_884.c */
