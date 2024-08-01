/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_492.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2460(t_small_parse_table_array *v)
{
	v->a[49200] = anon_sym_SEMI_SEMI;
	v->a[49201] = anon_sym_AMP_AMP;
	v->a[49202] = anon_sym_PIPE_PIPE;
	v->a[49203] = anon_sym_LT;
	v->a[49204] = anon_sym_GT;
	v->a[49205] = anon_sym_GT_GT;
	v->a[49206] = anon_sym_LT_LT;
	v->a[49207] = anon_sym_SEMI;
	v->a[49208] = 5;
	v->a[49209] = actions(3);
	v->a[49210] = 1;
	v->a[49211] = sym_comment;
	v->a[49212] = actions(2078);
	v->a[49213] = 1;
	v->a[49214] = aux_sym_heredoc_redirect_token1;
	v->a[49215] = state(1109);
	v->a[49216] = 2;
	v->a[49217] = sym_file_redirect;
	v->a[49218] = aux_sym_redirected_statement_repeat2;
	v->a[49219] = actions(2359);
	small_parse_table_2461(v);
}

void	small_parse_table_2461(t_small_parse_table_array *v)
{
	v->a[49220] = 3;
	v->a[49221] = anon_sym_LT;
	v->a[49222] = anon_sym_GT;
	v->a[49223] = anon_sym_GT_GT;
	v->a[49224] = actions(2080);
	v->a[49225] = 6;
	v->a[49226] = anon_sym_PIPE;
	v->a[49227] = anon_sym_SEMI_SEMI;
	v->a[49228] = anon_sym_AMP_AMP;
	v->a[49229] = anon_sym_PIPE_PIPE;
	v->a[49230] = anon_sym_LT_LT;
	v->a[49231] = anon_sym_SEMI;
	v->a[49232] = 8;
	v->a[49233] = actions(3);
	v->a[49234] = 1;
	v->a[49235] = sym_comment;
	v->a[49236] = actions(2277);
	v->a[49237] = 1;
	v->a[49238] = anon_sym_POUND;
	v->a[49239] = actions(2279);
	small_parse_table_2462(v);
}

void	small_parse_table_2462(t_small_parse_table_array *v)
{
	v->a[49240] = 1;
	v->a[49241] = aux_sym__simple_variable_name_token1;
	v->a[49242] = actions(2281);
	v->a[49243] = 1;
	v->a[49244] = anon_sym_0;
	v->a[49245] = actions(2283);
	v->a[49246] = 1;
	v->a[49247] = sym_variable_name;
	v->a[49248] = actions(2362);
	v->a[49249] = 1;
	v->a[49250] = anon_sym_RBRACE;
	v->a[49251] = state(1746);
	v->a[49252] = 1;
	v->a[49253] = sym__expansion_body;
	v->a[49254] = actions(2275);
	v->a[49255] = 6;
	v->a[49256] = anon_sym_BANG;
	v->a[49257] = anon_sym_DASH;
	v->a[49258] = anon_sym_STAR;
	v->a[49259] = anon_sym_QMARK;
	small_parse_table_2463(v);
}

void	small_parse_table_2463(t_small_parse_table_array *v)
{
	v->a[49260] = anon_sym_DOLLAR;
	v->a[49261] = anon_sym_AT;
	v->a[49262] = 10;
	v->a[49263] = actions(3);
	v->a[49264] = 1;
	v->a[49265] = sym_comment;
	v->a[49266] = actions(2293);
	v->a[49267] = 1;
	v->a[49268] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49269] = actions(2299);
	v->a[49270] = 1;
	v->a[49271] = sym_string_content;
	v->a[49272] = actions(2301);
	v->a[49273] = 1;
	v->a[49274] = anon_sym_DOLLAR_LBRACE;
	v->a[49275] = actions(2303);
	v->a[49276] = 1;
	v->a[49277] = anon_sym_DOLLAR_LPAREN;
	v->a[49278] = actions(2305);
	v->a[49279] = 1;
	small_parse_table_2464(v);
}

void	small_parse_table_2464(t_small_parse_table_array *v)
{
	v->a[49280] = anon_sym_BQUOTE;
	v->a[49281] = actions(2364);
	v->a[49282] = 1;
	v->a[49283] = anon_sym_DOLLAR;
	v->a[49284] = actions(2366);
	v->a[49285] = 1;
	v->a[49286] = anon_sym_DQUOTE;
	v->a[49287] = state(1097);
	v->a[49288] = 1;
	v->a[49289] = aux_sym_string_repeat1;
	v->a[49290] = state(1394);
	v->a[49291] = 4;
	v->a[49292] = sym_arithmetic_expansion;
	v->a[49293] = sym_simple_expansion;
	v->a[49294] = sym_expansion;
	v->a[49295] = sym_command_substitution;
	v->a[49296] = 10;
	v->a[49297] = actions(3);
	v->a[49298] = 1;
	v->a[49299] = sym_comment;
	small_parse_table_2465(v);
}

/* EOF small_parse_table_492.c */
