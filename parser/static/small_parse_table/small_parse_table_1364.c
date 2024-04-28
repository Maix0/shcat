/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1364.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6820(t_small_parse_table_array *v)
{
	v->a[136400] = anon_sym_LT;
	v->a[136401] = anon_sym_GT;
	v->a[136402] = anon_sym_LT_LT;
	v->a[136403] = anon_sym_AMP_GT;
	v->a[136404] = anon_sym_LT_AMP;
	v->a[136405] = anon_sym_GT_AMP;
	v->a[136406] = anon_sym_DOLLAR;
	v->a[136407] = sym__special_character;
	v->a[136408] = aux_sym_number_token1;
	v->a[136409] = aux_sym_number_token2;
	v->a[136410] = anon_sym_DOLLAR_LPAREN;
	v->a[136411] = anon_sym_BQUOTE;
	v->a[136412] = sym_word;
	v->a[136413] = actions(1294);
	v->a[136414] = 25;
	v->a[136415] = sym_file_descriptor;
	v->a[136416] = sym__concat;
	v->a[136417] = sym_test_operator;
	v->a[136418] = sym__brace_start;
	v->a[136419] = anon_sym_LPAREN_LPAREN;
	small_parse_table_6821(v);
}

void	small_parse_table_6821(t_small_parse_table_array *v)
{
	v->a[136420] = anon_sym_PIPE_PIPE;
	v->a[136421] = anon_sym_AMP_AMP;
	v->a[136422] = anon_sym_GT_GT;
	v->a[136423] = anon_sym_PIPE_AMP;
	v->a[136424] = anon_sym_RBRACK;
	v->a[136425] = anon_sym_AMP_GT_GT;
	v->a[136426] = anon_sym_GT_PIPE;
	v->a[136427] = anon_sym_LT_AMP_DASH;
	v->a[136428] = anon_sym_GT_AMP_DASH;
	v->a[136429] = anon_sym_LT_LT_DASH;
	v->a[136430] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[136431] = anon_sym_DOLLAR_LBRACK;
	v->a[136432] = aux_sym_concatenation_token1;
	v->a[136433] = anon_sym_DQUOTE;
	v->a[136434] = sym_raw_string;
	v->a[136435] = sym_ansi_c_string;
	v->a[136436] = anon_sym_DOLLAR_LBRACE;
	v->a[136437] = anon_sym_DOLLAR_BQUOTE;
	v->a[136438] = anon_sym_LT_LPAREN;
	v->a[136439] = anon_sym_GT_LPAREN;
	small_parse_table_6822(v);
}

void	small_parse_table_6822(t_small_parse_table_array *v)
{
	v->a[136440] = 4;
	v->a[136441] = actions(71);
	v->a[136442] = 1;
	v->a[136443] = sym_comment;
	v->a[136444] = actions(6775);
	v->a[136445] = 1;
	v->a[136446] = sym_extglob_pattern;
	v->a[136447] = actions(6751);
	v->a[136448] = 14;
	v->a[136449] = anon_sym_EQ;
	v->a[136450] = anon_sym_PIPE;
	v->a[136451] = anon_sym_CARET;
	v->a[136452] = anon_sym_AMP;
	v->a[136453] = anon_sym_LT;
	v->a[136454] = anon_sym_GT;
	v->a[136455] = anon_sym_LT_LT;
	v->a[136456] = anon_sym_GT_GT;
	v->a[136457] = anon_sym_PLUS;
	v->a[136458] = anon_sym_DASH;
	v->a[136459] = anon_sym_STAR;
	small_parse_table_6823(v);
}

void	small_parse_table_6823(t_small_parse_table_array *v)
{
	v->a[136460] = anon_sym_SLASH;
	v->a[136461] = anon_sym_PERCENT;
	v->a[136462] = anon_sym_STAR_STAR;
	v->a[136463] = actions(6749);
	v->a[136464] = 24;
	v->a[136465] = sym__concat;
	v->a[136466] = sym_test_operator;
	v->a[136467] = anon_sym_PLUS_PLUS;
	v->a[136468] = anon_sym_DASH_DASH;
	v->a[136469] = anon_sym_PLUS_EQ;
	v->a[136470] = anon_sym_DASH_EQ;
	v->a[136471] = anon_sym_STAR_EQ;
	v->a[136472] = anon_sym_SLASH_EQ;
	v->a[136473] = anon_sym_PERCENT_EQ;
	v->a[136474] = anon_sym_STAR_STAR_EQ;
	v->a[136475] = anon_sym_LT_LT_EQ;
	v->a[136476] = anon_sym_GT_GT_EQ;
	v->a[136477] = anon_sym_AMP_EQ;
	v->a[136478] = anon_sym_CARET_EQ;
	v->a[136479] = anon_sym_PIPE_EQ;
	small_parse_table_6824(v);
}

void	small_parse_table_6824(t_small_parse_table_array *v)
{
	v->a[136480] = anon_sym_PIPE_PIPE;
	v->a[136481] = anon_sym_AMP_AMP;
	v->a[136482] = anon_sym_EQ_EQ;
	v->a[136483] = anon_sym_BANG_EQ;
	v->a[136484] = anon_sym_LT_EQ;
	v->a[136485] = anon_sym_GT_EQ;
	v->a[136486] = anon_sym_RBRACK;
	v->a[136487] = anon_sym_EQ_TILDE;
	v->a[136488] = anon_sym_QMARK;
	v->a[136489] = 5;
	v->a[136490] = actions(71);
	v->a[136491] = 1;
	v->a[136492] = sym_comment;
	v->a[136493] = actions(6777);
	v->a[136494] = 1;
	v->a[136495] = sym__special_character;
	v->a[136496] = state(2602);
	v->a[136497] = 1;
	v->a[136498] = aux_sym__literal_repeat1;
	v->a[136499] = actions(1362);
	small_parse_table_6825(v);
}

/* EOF small_parse_table_1364.c */
