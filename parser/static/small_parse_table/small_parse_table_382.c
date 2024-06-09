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
	v->a[38200] = sym_word;
	v->a[38201] = anon_sym_SEMI;
	v->a[38202] = 5;
	v->a[38203] = actions(3);
	v->a[38204] = 1;
	v->a[38205] = sym_comment;
	v->a[38206] = state(933);
	v->a[38207] = 1;
	v->a[38208] = sym_concatenation;
	v->a[38209] = actions(750);
	v->a[38210] = 2;
	v->a[38211] = sym_file_descriptor;
	v->a[38212] = sym_variable_name;
	v->a[38213] = state(803);
	v->a[38214] = 6;
	v->a[38215] = sym_arithmetic_expansion;
	v->a[38216] = sym_string;
	v->a[38217] = sym_number;
	v->a[38218] = sym_simple_expansion;
	v->a[38219] = sym_expansion;
	small_parse_table_1911(v);
}

void	small_parse_table_1911(t_small_parse_table_array *v)
{
	v->a[38220] = sym_command_substitution;
	v->a[38221] = actions(748);
	v->a[38222] = 25;
	v->a[38223] = anon_sym_PIPE;
	v->a[38224] = anon_sym_AMP_AMP;
	v->a[38225] = anon_sym_PIPE_PIPE;
	v->a[38226] = anon_sym_LT;
	v->a[38227] = anon_sym_GT;
	v->a[38228] = anon_sym_GT_GT;
	v->a[38229] = anon_sym_AMP_GT;
	v->a[38230] = anon_sym_AMP_GT_GT;
	v->a[38231] = anon_sym_LT_AMP;
	v->a[38232] = anon_sym_GT_AMP;
	v->a[38233] = anon_sym_GT_PIPE;
	v->a[38234] = anon_sym_LT_AMP_DASH;
	v->a[38235] = anon_sym_GT_AMP_DASH;
	v->a[38236] = anon_sym_LT_LT;
	v->a[38237] = anon_sym_LT_LT_DASH;
	v->a[38238] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38239] = anon_sym_DOLLAR;
	small_parse_table_1912(v);
}

void	small_parse_table_1912(t_small_parse_table_array *v)
{
	v->a[38240] = anon_sym_DQUOTE;
	v->a[38241] = sym_raw_string;
	v->a[38242] = aux_sym_number_token1;
	v->a[38243] = aux_sym_number_token2;
	v->a[38244] = anon_sym_DOLLAR_LBRACE;
	v->a[38245] = anon_sym_DOLLAR_LPAREN;
	v->a[38246] = anon_sym_BQUOTE;
	v->a[38247] = sym_word;
	v->a[38248] = 3;
	v->a[38249] = actions(3);
	v->a[38250] = 1;
	v->a[38251] = sym_comment;
	v->a[38252] = actions(1194);
	v->a[38253] = 3;
	v->a[38254] = sym_file_descriptor;
	v->a[38255] = sym__concat;
	v->a[38256] = sym__bare_dollar;
	v->a[38257] = actions(1196);
	v->a[38258] = 31;
	v->a[38259] = anon_sym_PIPE;
	small_parse_table_1913(v);
}

void	small_parse_table_1913(t_small_parse_table_array *v)
{
	v->a[38260] = anon_sym_RPAREN;
	v->a[38261] = anon_sym_SEMI_SEMI;
	v->a[38262] = anon_sym_AMP_AMP;
	v->a[38263] = anon_sym_PIPE_PIPE;
	v->a[38264] = anon_sym_LT;
	v->a[38265] = anon_sym_GT;
	v->a[38266] = anon_sym_GT_GT;
	v->a[38267] = anon_sym_AMP_GT;
	v->a[38268] = anon_sym_AMP_GT_GT;
	v->a[38269] = anon_sym_LT_AMP;
	v->a[38270] = anon_sym_GT_AMP;
	v->a[38271] = anon_sym_GT_PIPE;
	v->a[38272] = anon_sym_LT_AMP_DASH;
	v->a[38273] = anon_sym_GT_AMP_DASH;
	v->a[38274] = anon_sym_LT_LT;
	v->a[38275] = anon_sym_LT_LT_DASH;
	v->a[38276] = aux_sym_heredoc_redirect_token1;
	v->a[38277] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38278] = anon_sym_AMP;
	v->a[38279] = aux_sym_concatenation_token1;
	small_parse_table_1914(v);
}

void	small_parse_table_1914(t_small_parse_table_array *v)
{
	v->a[38280] = anon_sym_DOLLAR;
	v->a[38281] = anon_sym_DQUOTE;
	v->a[38282] = sym_raw_string;
	v->a[38283] = aux_sym_number_token1;
	v->a[38284] = aux_sym_number_token2;
	v->a[38285] = anon_sym_DOLLAR_LBRACE;
	v->a[38286] = anon_sym_DOLLAR_LPAREN;
	v->a[38287] = anon_sym_BQUOTE;
	v->a[38288] = sym_word;
	v->a[38289] = anon_sym_SEMI;
	v->a[38290] = 3;
	v->a[38291] = actions(3);
	v->a[38292] = 1;
	v->a[38293] = sym_comment;
	v->a[38294] = actions(1194);
	v->a[38295] = 3;
	v->a[38296] = sym_file_descriptor;
	v->a[38297] = sym__concat;
	v->a[38298] = sym_variable_name;
	v->a[38299] = actions(1196);
	small_parse_table_1915(v);
}

/* EOF small_parse_table_382.c */
