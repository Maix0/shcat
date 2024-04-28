/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1484.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7420(t_small_parse_table_array *v)
{
	v->a[148400] = sym_word;
	v->a[148401] = actions(5772);
	v->a[148402] = 25;
	v->a[148403] = sym_file_descriptor;
	v->a[148404] = sym_variable_name;
	v->a[148405] = sym_test_operator;
	v->a[148406] = sym__brace_start;
	v->a[148407] = anon_sym_LPAREN_LPAREN;
	v->a[148408] = anon_sym_PIPE_PIPE;
	v->a[148409] = anon_sym_AMP_AMP;
	v->a[148410] = anon_sym_GT_GT;
	v->a[148411] = anon_sym_PIPE_AMP;
	v->a[148412] = anon_sym_AMP_GT_GT;
	v->a[148413] = anon_sym_GT_PIPE;
	v->a[148414] = anon_sym_LT_AMP_DASH;
	v->a[148415] = anon_sym_GT_AMP_DASH;
	v->a[148416] = anon_sym_LT_LT_DASH;
	v->a[148417] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[148418] = anon_sym_DOLLAR_LBRACK;
	v->a[148419] = sym__special_character;
	small_parse_table_7421(v);
}

void	small_parse_table_7421(t_small_parse_table_array *v)
{
	v->a[148420] = anon_sym_DQUOTE;
	v->a[148421] = sym_raw_string;
	v->a[148422] = sym_ansi_c_string;
	v->a[148423] = anon_sym_DOLLAR_LBRACE;
	v->a[148424] = anon_sym_BQUOTE;
	v->a[148425] = anon_sym_DOLLAR_BQUOTE;
	v->a[148426] = anon_sym_LT_LPAREN;
	v->a[148427] = anon_sym_GT_LPAREN;
	v->a[148428] = 5;
	v->a[148429] = actions(71);
	v->a[148430] = 1;
	v->a[148431] = sym_comment;
	v->a[148432] = actions(6732);
	v->a[148433] = 1;
	v->a[148434] = anon_sym_RBRACK;
	v->a[148435] = actions(7060);
	v->a[148436] = 1;
	v->a[148437] = sym__concat;
	v->a[148438] = actions(1273);
	v->a[148439] = 14;
	small_parse_table_7422(v);
}

void	small_parse_table_7422(t_small_parse_table_array *v)
{
	v->a[148440] = anon_sym_EQ;
	v->a[148441] = anon_sym_PIPE;
	v->a[148442] = anon_sym_CARET;
	v->a[148443] = anon_sym_AMP;
	v->a[148444] = anon_sym_LT;
	v->a[148445] = anon_sym_GT;
	v->a[148446] = anon_sym_LT_LT;
	v->a[148447] = anon_sym_GT_GT;
	v->a[148448] = anon_sym_PLUS;
	v->a[148449] = anon_sym_DASH;
	v->a[148450] = anon_sym_STAR;
	v->a[148451] = anon_sym_SLASH;
	v->a[148452] = anon_sym_PERCENT;
	v->a[148453] = anon_sym_STAR_STAR;
	v->a[148454] = actions(1369);
	v->a[148455] = 22;
	v->a[148456] = sym_test_operator;
	v->a[148457] = anon_sym_PLUS_PLUS;
	v->a[148458] = anon_sym_DASH_DASH;
	v->a[148459] = anon_sym_PLUS_EQ;
	small_parse_table_7423(v);
}

void	small_parse_table_7423(t_small_parse_table_array *v)
{
	v->a[148460] = anon_sym_DASH_EQ;
	v->a[148461] = anon_sym_STAR_EQ;
	v->a[148462] = anon_sym_SLASH_EQ;
	v->a[148463] = anon_sym_PERCENT_EQ;
	v->a[148464] = anon_sym_STAR_STAR_EQ;
	v->a[148465] = anon_sym_LT_LT_EQ;
	v->a[148466] = anon_sym_GT_GT_EQ;
	v->a[148467] = anon_sym_AMP_EQ;
	v->a[148468] = anon_sym_CARET_EQ;
	v->a[148469] = anon_sym_PIPE_EQ;
	v->a[148470] = anon_sym_PIPE_PIPE;
	v->a[148471] = anon_sym_AMP_AMP;
	v->a[148472] = anon_sym_EQ_EQ;
	v->a[148473] = anon_sym_BANG_EQ;
	v->a[148474] = anon_sym_LT_EQ;
	v->a[148475] = anon_sym_GT_EQ;
	v->a[148476] = anon_sym_EQ_TILDE;
	v->a[148477] = anon_sym_QMARK;
	v->a[148478] = 3;
	v->a[148479] = actions(71);
	small_parse_table_7424(v);
}

void	small_parse_table_7424(t_small_parse_table_array *v)
{
	v->a[148480] = 1;
	v->a[148481] = sym_comment;
	v->a[148482] = actions(7064);
	v->a[148483] = 14;
	v->a[148484] = anon_sym_EQ;
	v->a[148485] = anon_sym_PIPE;
	v->a[148486] = anon_sym_CARET;
	v->a[148487] = anon_sym_AMP;
	v->a[148488] = anon_sym_LT;
	v->a[148489] = anon_sym_GT;
	v->a[148490] = anon_sym_LT_LT;
	v->a[148491] = anon_sym_GT_GT;
	v->a[148492] = anon_sym_PLUS;
	v->a[148493] = anon_sym_DASH;
	v->a[148494] = anon_sym_STAR;
	v->a[148495] = anon_sym_SLASH;
	v->a[148496] = anon_sym_PERCENT;
	v->a[148497] = anon_sym_STAR_STAR;
	v->a[148498] = actions(7062);
	v->a[148499] = 24;
	small_parse_table_7425(v);
}

/* EOF small_parse_table_1484.c */
