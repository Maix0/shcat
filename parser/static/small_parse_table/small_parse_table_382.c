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
	v->a[38200] = anon_sym_SEMI;
	v->a[38201] = 12;
	v->a[38202] = actions(3);
	v->a[38203] = 1;
	v->a[38204] = sym_comment;
	v->a[38205] = actions(499);
	v->a[38206] = 1;
	v->a[38207] = sym_file_descriptor;
	v->a[38208] = actions(1375);
	v->a[38209] = 1;
	v->a[38210] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38211] = actions(1378);
	v->a[38212] = 1;
	v->a[38213] = anon_sym_DOLLAR;
	v->a[38214] = actions(1381);
	v->a[38215] = 1;
	v->a[38216] = anon_sym_DQUOTE;
	v->a[38217] = actions(1384);
	v->a[38218] = 1;
	v->a[38219] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1911(v);
}

void	small_parse_table_1911(t_small_parse_table_array *v)
{
	v->a[38220] = actions(1387);
	v->a[38221] = 1;
	v->a[38222] = anon_sym_DOLLAR_LPAREN;
	v->a[38223] = actions(1390);
	v->a[38224] = 1;
	v->a[38225] = anon_sym_BQUOTE;
	v->a[38226] = state(561);
	v->a[38227] = 2;
	v->a[38228] = sym_concatenation;
	v->a[38229] = aux_sym_for_statement_repeat1;
	v->a[38230] = actions(1372);
	v->a[38231] = 3;
	v->a[38232] = sym_raw_string;
	v->a[38233] = sym_number;
	v->a[38234] = sym_word;
	v->a[38235] = state(852);
	v->a[38236] = 5;
	v->a[38237] = sym_arithmetic_expansion;
	v->a[38238] = sym_string;
	v->a[38239] = sym_simple_expansion;
	small_parse_table_1912(v);
}

void	small_parse_table_1912(t_small_parse_table_array *v)
{
	v->a[38240] = sym_expansion;
	v->a[38241] = sym_command_substitution;
	v->a[38242] = actions(504);
	v->a[38243] = 12;
	v->a[38244] = anon_sym_PIPE;
	v->a[38245] = anon_sym_AMP_AMP;
	v->a[38246] = anon_sym_PIPE_PIPE;
	v->a[38247] = anon_sym_LT;
	v->a[38248] = anon_sym_GT;
	v->a[38249] = anon_sym_GT_GT;
	v->a[38250] = anon_sym_LT_AMP;
	v->a[38251] = anon_sym_GT_AMP;
	v->a[38252] = anon_sym_GT_PIPE;
	v->a[38253] = anon_sym_LT_GT;
	v->a[38254] = anon_sym_LT_LT;
	v->a[38255] = anon_sym_LT_LT_DASH;
	v->a[38256] = 3;
	v->a[38257] = actions(3);
	v->a[38258] = 1;
	v->a[38259] = sym_comment;
	small_parse_table_1913(v);
}

void	small_parse_table_1913(t_small_parse_table_array *v)
{
	v->a[38260] = actions(908);
	v->a[38261] = 2;
	v->a[38262] = sym_file_descriptor;
	v->a[38263] = sym__concat;
	v->a[38264] = actions(906);
	v->a[38265] = 27;
	v->a[38266] = anon_sym_esac;
	v->a[38267] = anon_sym_PIPE;
	v->a[38268] = anon_sym_SEMI_SEMI;
	v->a[38269] = anon_sym_AMP_AMP;
	v->a[38270] = anon_sym_PIPE_PIPE;
	v->a[38271] = anon_sym_LT;
	v->a[38272] = anon_sym_GT;
	v->a[38273] = anon_sym_GT_GT;
	v->a[38274] = anon_sym_LT_AMP;
	v->a[38275] = anon_sym_GT_AMP;
	v->a[38276] = anon_sym_GT_PIPE;
	v->a[38277] = anon_sym_LT_GT;
	v->a[38278] = anon_sym_LT_LT;
	v->a[38279] = anon_sym_LT_LT_DASH;
	small_parse_table_1914(v);
}

void	small_parse_table_1914(t_small_parse_table_array *v)
{
	v->a[38280] = aux_sym_heredoc_redirect_token1;
	v->a[38281] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38282] = anon_sym_AMP;
	v->a[38283] = aux_sym_concatenation_token1;
	v->a[38284] = anon_sym_DOLLAR;
	v->a[38285] = anon_sym_DQUOTE;
	v->a[38286] = sym_raw_string;
	v->a[38287] = sym_number;
	v->a[38288] = anon_sym_DOLLAR_LBRACE;
	v->a[38289] = anon_sym_DOLLAR_LPAREN;
	v->a[38290] = anon_sym_BQUOTE;
	v->a[38291] = sym_word;
	v->a[38292] = anon_sym_SEMI;
	v->a[38293] = 3;
	v->a[38294] = actions(3);
	v->a[38295] = 1;
	v->a[38296] = sym_comment;
	v->a[38297] = actions(770);
	v->a[38298] = 3;
	v->a[38299] = sym_file_descriptor;
	small_parse_table_1915(v);
}

/* EOF small_parse_table_382.c */
