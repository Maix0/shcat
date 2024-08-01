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
	v->a[47200] = 1;
	v->a[47201] = sym_variable_name;
	v->a[47202] = actions(2164);
	v->a[47203] = 1;
	v->a[47204] = anon_sym_DQUOTE;
	v->a[47205] = actions(2015);
	v->a[47206] = 2;
	v->a[47207] = aux_sym__simple_variable_name_token1;
	v->a[47208] = aux_sym__multiline_variable_name_token1;
	v->a[47209] = actions(2009);
	v->a[47210] = 8;
	v->a[47211] = anon_sym_BANG;
	v->a[47212] = anon_sym_DASH;
	v->a[47213] = anon_sym_STAR;
	v->a[47214] = anon_sym_QMARK;
	v->a[47215] = anon_sym_DOLLAR;
	v->a[47216] = anon_sym_POUND;
	v->a[47217] = anon_sym_AT;
	v->a[47218] = anon_sym_0;
	v->a[47219] = 4;
	small_parse_table_2361(v);
}

void	small_parse_table_2361(t_small_parse_table_array *v)
{
	v->a[47220] = actions(3);
	v->a[47221] = 1;
	v->a[47222] = sym_comment;
	v->a[47223] = actions(827);
	v->a[47224] = 1;
	v->a[47225] = aux_sym_heredoc_redirect_token1;
	v->a[47226] = state(1040);
	v->a[47227] = 3;
	v->a[47228] = sym_file_redirect;
	v->a[47229] = sym_heredoc_redirect;
	v->a[47230] = aux_sym_redirected_statement_repeat1;
	v->a[47231] = actions(816);
	v->a[47232] = 9;
	v->a[47233] = anon_sym_PIPE;
	v->a[47234] = anon_sym_SEMI_SEMI;
	v->a[47235] = anon_sym_AMP_AMP;
	v->a[47236] = anon_sym_PIPE_PIPE;
	v->a[47237] = anon_sym_LT;
	v->a[47238] = anon_sym_GT;
	v->a[47239] = anon_sym_GT_GT;
	small_parse_table_2362(v);
}

void	small_parse_table_2362(t_small_parse_table_array *v)
{
	v->a[47240] = anon_sym_LT_LT;
	v->a[47241] = anon_sym_SEMI;
	v->a[47242] = 6;
	v->a[47243] = actions(3);
	v->a[47244] = 1;
	v->a[47245] = sym_comment;
	v->a[47246] = actions(2013);
	v->a[47247] = 1;
	v->a[47248] = sym_string_content;
	v->a[47249] = actions(2017);
	v->a[47250] = 1;
	v->a[47251] = sym_variable_name;
	v->a[47252] = actions(2166);
	v->a[47253] = 1;
	v->a[47254] = anon_sym_DQUOTE;
	v->a[47255] = actions(2015);
	v->a[47256] = 2;
	v->a[47257] = aux_sym__simple_variable_name_token1;
	v->a[47258] = aux_sym__multiline_variable_name_token1;
	v->a[47259] = actions(2009);
	small_parse_table_2363(v);
}

void	small_parse_table_2363(t_small_parse_table_array *v)
{
	v->a[47260] = 8;
	v->a[47261] = anon_sym_BANG;
	v->a[47262] = anon_sym_DASH;
	v->a[47263] = anon_sym_STAR;
	v->a[47264] = anon_sym_QMARK;
	v->a[47265] = anon_sym_DOLLAR;
	v->a[47266] = anon_sym_POUND;
	v->a[47267] = anon_sym_AT;
	v->a[47268] = anon_sym_0;
	v->a[47269] = 5;
	v->a[47270] = actions(3);
	v->a[47271] = 1;
	v->a[47272] = sym_comment;
	v->a[47273] = actions(580);
	v->a[47274] = 1;
	v->a[47275] = anon_sym_PIPE;
	v->a[47276] = actions(827);
	v->a[47277] = 1;
	v->a[47278] = aux_sym_heredoc_redirect_token1;
	v->a[47279] = state(1040);
	small_parse_table_2364(v);
}

void	small_parse_table_2364(t_small_parse_table_array *v)
{
	v->a[47280] = 3;
	v->a[47281] = sym_file_redirect;
	v->a[47282] = sym_heredoc_redirect;
	v->a[47283] = aux_sym_redirected_statement_repeat1;
	v->a[47284] = actions(816);
	v->a[47285] = 8;
	v->a[47286] = anon_sym_SEMI_SEMI;
	v->a[47287] = anon_sym_AMP_AMP;
	v->a[47288] = anon_sym_PIPE_PIPE;
	v->a[47289] = anon_sym_LT;
	v->a[47290] = anon_sym_GT;
	v->a[47291] = anon_sym_GT_GT;
	v->a[47292] = anon_sym_LT_LT;
	v->a[47293] = anon_sym_SEMI;
	v->a[47294] = 5;
	v->a[47295] = actions(3);
	v->a[47296] = 1;
	v->a[47297] = sym_comment;
	v->a[47298] = actions(2078);
	v->a[47299] = 1;
	small_parse_table_2365(v);
}

/* EOF small_parse_table_472.c */
