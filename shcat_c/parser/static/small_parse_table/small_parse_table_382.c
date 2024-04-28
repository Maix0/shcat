/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_382.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1910(t_small_parse_table_array *v)
{
	v->a[38200] = anon_sym_GT_AMP;
	v->a[38201] = anon_sym_GT_PIPE;
	v->a[38202] = anon_sym_LT_AMP_DASH;
	v->a[38203] = anon_sym_GT_AMP_DASH;
	v->a[38204] = anon_sym_LT_LT_DASH;
	v->a[38205] = anon_sym_LT_LT_LT;
	v->a[38206] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38207] = anon_sym_DOLLAR_LBRACK;
	v->a[38208] = anon_sym_DOLLAR;
	v->a[38209] = sym__special_character;
	v->a[38210] = anon_sym_DQUOTE;
	v->a[38211] = sym_raw_string;
	v->a[38212] = sym_ansi_c_string;
	v->a[38213] = aux_sym_number_token1;
	v->a[38214] = aux_sym_number_token2;
	v->a[38215] = anon_sym_DOLLAR_LBRACE;
	v->a[38216] = anon_sym_DOLLAR_LPAREN;
	v->a[38217] = anon_sym_BQUOTE;
	v->a[38218] = anon_sym_DOLLAR_BQUOTE;
	v->a[38219] = anon_sym_LT_LPAREN;
	small_parse_table_1911(v);
}

void	small_parse_table_1911(t_small_parse_table_array *v)
{
	v->a[38220] = anon_sym_GT_LPAREN;
	v->a[38221] = sym_word;
	v->a[38222] = 23;
	v->a[38223] = actions(71);
	v->a[38224] = 1;
	v->a[38225] = sym_comment;
	v->a[38226] = actions(4994);
	v->a[38227] = 1;
	v->a[38228] = sym_word;
	v->a[38229] = actions(5000);
	v->a[38230] = 1;
	v->a[38231] = anon_sym_DOLLAR_LBRACK;
	v->a[38232] = actions(5003);
	v->a[38233] = 1;
	v->a[38234] = anon_sym_DOLLAR;
	v->a[38235] = actions(5006);
	v->a[38236] = 1;
	v->a[38237] = sym__special_character;
	v->a[38238] = actions(5009);
	v->a[38239] = 1;
	small_parse_table_1912(v);
}

void	small_parse_table_1912(t_small_parse_table_array *v)
{
	v->a[38240] = anon_sym_DQUOTE;
	v->a[38241] = actions(5015);
	v->a[38242] = 1;
	v->a[38243] = aux_sym_number_token1;
	v->a[38244] = actions(5018);
	v->a[38245] = 1;
	v->a[38246] = aux_sym_number_token2;
	v->a[38247] = actions(5021);
	v->a[38248] = 1;
	v->a[38249] = anon_sym_DOLLAR_LBRACE;
	v->a[38250] = actions(5024);
	v->a[38251] = 1;
	v->a[38252] = anon_sym_DOLLAR_LPAREN;
	v->a[38253] = actions(5027);
	v->a[38254] = 1;
	v->a[38255] = anon_sym_BQUOTE;
	v->a[38256] = actions(5030);
	v->a[38257] = 1;
	v->a[38258] = anon_sym_DOLLAR_BQUOTE;
	v->a[38259] = actions(5036);
	small_parse_table_1913(v);
}

void	small_parse_table_1913(t_small_parse_table_array *v)
{
	v->a[38260] = 1;
	v->a[38261] = aux_sym__simple_variable_name_token1;
	v->a[38262] = actions(5039);
	v->a[38263] = 1;
	v->a[38264] = sym_test_operator;
	v->a[38265] = actions(5042);
	v->a[38266] = 1;
	v->a[38267] = sym__brace_start;
	v->a[38268] = state(2939);
	v->a[38269] = 1;
	v->a[38270] = aux_sym__literal_repeat1;
	v->a[38271] = actions(4997);
	v->a[38272] = 2;
	v->a[38273] = anon_sym_LPAREN_LPAREN;
	v->a[38274] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38275] = actions(5012);
	v->a[38276] = 2;
	v->a[38277] = sym_raw_string;
	v->a[38278] = sym_ansi_c_string;
	v->a[38279] = actions(5033);
	small_parse_table_1914(v);
}

void	small_parse_table_1914(t_small_parse_table_array *v)
{
	v->a[38280] = 2;
	v->a[38281] = anon_sym_LT_LPAREN;
	v->a[38282] = anon_sym_GT_LPAREN;
	v->a[38283] = state(979);
	v->a[38284] = 2;
	v->a[38285] = sym_concatenation;
	v->a[38286] = aux_sym_unset_command_repeat1;
	v->a[38287] = actions(2440);
	v->a[38288] = 7;
	v->a[38289] = anon_sym_PIPE;
	v->a[38290] = anon_sym_LT;
	v->a[38291] = anon_sym_GT;
	v->a[38292] = anon_sym_LT_LT;
	v->a[38293] = anon_sym_AMP_GT;
	v->a[38294] = anon_sym_LT_AMP;
	v->a[38295] = anon_sym_GT_AMP;
	v->a[38296] = state(2539);
	v->a[38297] = 9;
	v->a[38298] = sym_arithmetic_expansion;
	v->a[38299] = sym_brace_expression;
	small_parse_table_1915(v);
}

/* EOF small_parse_table_382.c */
