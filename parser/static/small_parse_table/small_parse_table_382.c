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
	v->a[38200] = anon_sym_CARET;
	v->a[38201] = actions(1114);
	v->a[38202] = 1;
	v->a[38203] = anon_sym_AMP;
	v->a[38204] = actions(1126);
	v->a[38205] = 1;
	v->a[38206] = anon_sym_PIPE_PIPE;
	v->a[38207] = actions(1128);
	v->a[38208] = 1;
	v->a[38209] = anon_sym_QMARK;
	v->a[38210] = actions(1155);
	v->a[38211] = 1;
	v->a[38212] = anon_sym_EQ;
	v->a[38213] = actions(1441);
	v->a[38214] = 1;
	v->a[38215] = anon_sym_RPAREN_RPAREN;
	v->a[38216] = actions(1082);
	v->a[38217] = 2;
	v->a[38218] = anon_sym_LT;
	v->a[38219] = anon_sym_GT;
	small_parse_table_1911(v);
}

void	small_parse_table_1911(t_small_parse_table_array *v)
{
	v->a[38220] = actions(1084);
	v->a[38221] = 2;
	v->a[38222] = anon_sym_GT_GT;
	v->a[38223] = anon_sym_LT_LT;
	v->a[38224] = actions(1086);
	v->a[38225] = 2;
	v->a[38226] = anon_sym_LT_EQ;
	v->a[38227] = anon_sym_GT_EQ;
	v->a[38228] = actions(1088);
	v->a[38229] = 2;
	v->a[38230] = anon_sym_PLUS;
	v->a[38231] = anon_sym_DASH;
	v->a[38232] = actions(1092);
	v->a[38233] = 2;
	v->a[38234] = anon_sym_PLUS_PLUS2;
	v->a[38235] = anon_sym_DASH_DASH2;
	v->a[38236] = actions(1116);
	v->a[38237] = 2;
	v->a[38238] = anon_sym_EQ_EQ;
	v->a[38239] = anon_sym_BANG_EQ;
	small_parse_table_1912(v);
}

void	small_parse_table_1912(t_small_parse_table_array *v)
{
	v->a[38240] = actions(1090);
	v->a[38241] = 3;
	v->a[38242] = anon_sym_STAR;
	v->a[38243] = anon_sym_SLASH;
	v->a[38244] = anon_sym_PERCENT;
	v->a[38245] = actions(1288);
	v->a[38246] = 10;
	v->a[38247] = anon_sym_PLUS_EQ;
	v->a[38248] = anon_sym_DASH_EQ;
	v->a[38249] = anon_sym_STAR_EQ;
	v->a[38250] = anon_sym_SLASH_EQ;
	v->a[38251] = anon_sym_PERCENT_EQ;
	v->a[38252] = anon_sym_LT_LT_EQ;
	v->a[38253] = anon_sym_GT_GT_EQ;
	v->a[38254] = anon_sym_AMP_EQ;
	v->a[38255] = anon_sym_CARET_EQ;
	v->a[38256] = anon_sym_PIPE_EQ;
	v->a[38257] = 5;
	v->a[38258] = actions(3);
	v->a[38259] = 1;
	small_parse_table_1913(v);
}

void	small_parse_table_1913(t_small_parse_table_array *v)
{
	v->a[38260] = sym_comment;
	v->a[38261] = state(734);
	v->a[38262] = 1;
	v->a[38263] = sym_concatenation;
	v->a[38264] = actions(717);
	v->a[38265] = 2;
	v->a[38266] = sym_file_descriptor;
	v->a[38267] = sym_variable_name;
	v->a[38268] = state(907);
	v->a[38269] = 5;
	v->a[38270] = sym_arithmetic_expansion;
	v->a[38271] = sym_string;
	v->a[38272] = sym_simple_expansion;
	v->a[38273] = sym_expansion;
	v->a[38274] = sym_command_substitution;
	v->a[38275] = actions(719);
	v->a[38276] = 25;
	v->a[38277] = anon_sym_PIPE;
	v->a[38278] = anon_sym_AMP_AMP;
	v->a[38279] = anon_sym_PIPE_PIPE;
	small_parse_table_1914(v);
}

void	small_parse_table_1914(t_small_parse_table_array *v)
{
	v->a[38280] = anon_sym_LT;
	v->a[38281] = anon_sym_GT;
	v->a[38282] = anon_sym_GT_GT;
	v->a[38283] = anon_sym_AMP_GT;
	v->a[38284] = anon_sym_AMP_GT_GT;
	v->a[38285] = anon_sym_LT_AMP;
	v->a[38286] = anon_sym_GT_AMP;
	v->a[38287] = anon_sym_GT_PIPE;
	v->a[38288] = anon_sym_LT_AMP_DASH;
	v->a[38289] = anon_sym_GT_AMP_DASH;
	v->a[38290] = anon_sym_LT_LT;
	v->a[38291] = anon_sym_LT_LT_DASH;
	v->a[38292] = aux_sym_heredoc_redirect_token1;
	v->a[38293] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38294] = anon_sym_DOLLAR;
	v->a[38295] = anon_sym_DQUOTE;
	v->a[38296] = sym_raw_string;
	v->a[38297] = sym_number;
	v->a[38298] = anon_sym_DOLLAR_LBRACE;
	v->a[38299] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1915(v);
}

/* EOF small_parse_table_382.c */
