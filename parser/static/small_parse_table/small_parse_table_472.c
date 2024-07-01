/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_472.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2360(t_small_parse_table_array *v)
{
	v->a[47200] = anon_sym_LT;
	v->a[47201] = anon_sym_GT;
	v->a[47202] = anon_sym_GT_GT;
	v->a[47203] = anon_sym_LT_AMP;
	v->a[47204] = anon_sym_GT_AMP;
	v->a[47205] = anon_sym_GT_PIPE;
	v->a[47206] = anon_sym_LT_AMP_DASH;
	v->a[47207] = anon_sym_GT_AMP_DASH;
	v->a[47208] = actions(1520);
	v->a[47209] = 9;
	v->a[47210] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47211] = anon_sym_DOLLAR;
	v->a[47212] = anon_sym_DQUOTE;
	v->a[47213] = sym_raw_string;
	v->a[47214] = sym_number;
	v->a[47215] = anon_sym_DOLLAR_LBRACE;
	v->a[47216] = anon_sym_DOLLAR_LPAREN;
	v->a[47217] = anon_sym_BQUOTE;
	v->a[47218] = sym_word;
	v->a[47219] = actions(1522);
	small_parse_table_2361(v);
}

void	small_parse_table_2361(t_small_parse_table_array *v)
{
	v->a[47220] = 9;
	v->a[47221] = anon_sym_PIPE;
	v->a[47222] = anon_sym_SEMI_SEMI;
	v->a[47223] = anon_sym_AMP_AMP;
	v->a[47224] = anon_sym_PIPE_PIPE;
	v->a[47225] = anon_sym_LT_LT;
	v->a[47226] = anon_sym_LT_LT_DASH;
	v->a[47227] = aux_sym_heredoc_redirect_token1;
	v->a[47228] = anon_sym_AMP;
	v->a[47229] = anon_sym_SEMI;
	v->a[47230] = 6;
	v->a[47231] = actions(3);
	v->a[47232] = 1;
	v->a[47233] = sym_comment;
	v->a[47234] = actions(379);
	v->a[47235] = 1;
	v->a[47236] = sym_file_descriptor;
	v->a[47237] = actions(1630);
	v->a[47238] = 1;
	v->a[47239] = sym_variable_name;
	small_parse_table_2362(v);
}

void	small_parse_table_2362(t_small_parse_table_array *v)
{
	v->a[47240] = actions(1628);
	v->a[47241] = 2;
	v->a[47242] = aux_sym__simple_variable_name_token1;
	v->a[47243] = aux_sym__multiline_variable_name_token1;
	v->a[47244] = actions(1626);
	v->a[47245] = 9;
	v->a[47246] = anon_sym_BANG;
	v->a[47247] = anon_sym_DASH;
	v->a[47248] = anon_sym_STAR;
	v->a[47249] = anon_sym_QMARK;
	v->a[47250] = anon_sym_DOLLAR;
	v->a[47251] = anon_sym_POUND;
	v->a[47252] = anon_sym_AT;
	v->a[47253] = anon_sym_0;
	v->a[47254] = anon_sym__;
	v->a[47255] = actions(381);
	v->a[47256] = 16;
	v->a[47257] = anon_sym_LT;
	v->a[47258] = anon_sym_GT;
	v->a[47259] = anon_sym_GT_GT;
	small_parse_table_2363(v);
}

void	small_parse_table_2363(t_small_parse_table_array *v)
{
	v->a[47260] = anon_sym_LT_AMP;
	v->a[47261] = anon_sym_GT_AMP;
	v->a[47262] = anon_sym_GT_PIPE;
	v->a[47263] = anon_sym_LT_AMP_DASH;
	v->a[47264] = anon_sym_GT_AMP_DASH;
	v->a[47265] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47266] = anon_sym_DQUOTE;
	v->a[47267] = sym_raw_string;
	v->a[47268] = sym_number;
	v->a[47269] = anon_sym_DOLLAR_LBRACE;
	v->a[47270] = anon_sym_DOLLAR_LPAREN;
	v->a[47271] = anon_sym_BQUOTE;
	v->a[47272] = sym_word;
	v->a[47273] = 7;
	v->a[47274] = actions(3);
	v->a[47275] = 1;
	v->a[47276] = sym_comment;
	v->a[47277] = actions(1530);
	v->a[47278] = 1;
	v->a[47279] = sym_file_descriptor;
	small_parse_table_2364(v);
}

void	small_parse_table_2364(t_small_parse_table_array *v)
{
	v->a[47280] = actions(1533);
	v->a[47281] = 1;
	v->a[47282] = sym_variable_name;
	v->a[47283] = actions(1632);
	v->a[47284] = 1;
	v->a[47285] = anon_sym_RPAREN;
	v->a[47286] = actions(1527);
	v->a[47287] = 8;
	v->a[47288] = anon_sym_LT;
	v->a[47289] = anon_sym_GT;
	v->a[47290] = anon_sym_GT_GT;
	v->a[47291] = anon_sym_LT_AMP;
	v->a[47292] = anon_sym_GT_AMP;
	v->a[47293] = anon_sym_GT_PIPE;
	v->a[47294] = anon_sym_LT_AMP_DASH;
	v->a[47295] = anon_sym_GT_AMP_DASH;
	v->a[47296] = actions(1520);
	v->a[47297] = 9;
	v->a[47298] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47299] = anon_sym_DOLLAR;
	small_parse_table_2365(v);
}

/* EOF small_parse_table_472.c */
