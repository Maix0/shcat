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
	v->a[49200] = 26;
	v->a[49201] = anon_sym_for;
	v->a[49202] = anon_sym_while;
	v->a[49203] = anon_sym_until;
	v->a[49204] = anon_sym_if;
	v->a[49205] = anon_sym_case;
	v->a[49206] = anon_sym_LPAREN;
	v->a[49207] = anon_sym_LBRACE;
	v->a[49208] = anon_sym_RBRACE;
	v->a[49209] = anon_sym_BANG;
	v->a[49210] = anon_sym_LT;
	v->a[49211] = anon_sym_GT;
	v->a[49212] = anon_sym_GT_GT;
	v->a[49213] = anon_sym_LT_AMP;
	v->a[49214] = anon_sym_GT_AMP;
	v->a[49215] = anon_sym_GT_PIPE;
	v->a[49216] = anon_sym_LT_AMP_DASH;
	v->a[49217] = anon_sym_GT_AMP_DASH;
	v->a[49218] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49219] = anon_sym_DOLLAR;
	small_parse_table_2461(v);
}

void	small_parse_table_2461(t_small_parse_table_array *v)
{
	v->a[49220] = anon_sym_DQUOTE;
	v->a[49221] = sym_raw_string;
	v->a[49222] = sym_number;
	v->a[49223] = anon_sym_DOLLAR_LBRACE;
	v->a[49224] = anon_sym_DOLLAR_LPAREN;
	v->a[49225] = anon_sym_BQUOTE;
	v->a[49226] = sym_word;
	v->a[49227] = 6;
	v->a[49228] = actions(3);
	v->a[49229] = 1;
	v->a[49230] = sym_comment;
	v->a[49231] = actions(1230);
	v->a[49232] = 1;
	v->a[49233] = aux_sym_concatenation_token1;
	v->a[49234] = actions(1232);
	v->a[49235] = 1;
	v->a[49236] = sym__concat;
	v->a[49237] = state(775);
	v->a[49238] = 1;
	v->a[49239] = aux_sym_concatenation_repeat1;
	small_parse_table_2462(v);
}

void	small_parse_table_2462(t_small_parse_table_array *v)
{
	v->a[49240] = actions(1238);
	v->a[49241] = 2;
	v->a[49242] = sym_file_descriptor;
	v->a[49243] = sym_variable_name;
	v->a[49244] = actions(1234);
	v->a[49245] = 23;
	v->a[49246] = anon_sym_PIPE;
	v->a[49247] = anon_sym_AMP_AMP;
	v->a[49248] = anon_sym_PIPE_PIPE;
	v->a[49249] = anon_sym_LT;
	v->a[49250] = anon_sym_GT;
	v->a[49251] = anon_sym_GT_GT;
	v->a[49252] = anon_sym_LT_AMP;
	v->a[49253] = anon_sym_GT_AMP;
	v->a[49254] = anon_sym_GT_PIPE;
	v->a[49255] = anon_sym_LT_AMP_DASH;
	v->a[49256] = anon_sym_GT_AMP_DASH;
	v->a[49257] = anon_sym_LT_LT;
	v->a[49258] = anon_sym_LT_LT_DASH;
	v->a[49259] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2463(v);
}

void	small_parse_table_2463(t_small_parse_table_array *v)
{
	v->a[49260] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49261] = anon_sym_DOLLAR;
	v->a[49262] = anon_sym_DQUOTE;
	v->a[49263] = sym_raw_string;
	v->a[49264] = sym_number;
	v->a[49265] = anon_sym_DOLLAR_LBRACE;
	v->a[49266] = anon_sym_DOLLAR_LPAREN;
	v->a[49267] = anon_sym_BQUOTE;
	v->a[49268] = sym_word;
	v->a[49269] = 4;
	v->a[49270] = actions(3);
	v->a[49271] = 1;
	v->a[49272] = sym_comment;
	v->a[49273] = actions(1686);
	v->a[49274] = 1;
	v->a[49275] = ts_builtin_sym_end;
	v->a[49276] = actions(1577);
	v->a[49277] = 2;
	v->a[49278] = sym_file_descriptor;
	v->a[49279] = sym_variable_name;
	small_parse_table_2464(v);
}

void	small_parse_table_2464(t_small_parse_table_array *v)
{
	v->a[49280] = actions(1573);
	v->a[49281] = 25;
	v->a[49282] = anon_sym_for;
	v->a[49283] = anon_sym_while;
	v->a[49284] = anon_sym_until;
	v->a[49285] = anon_sym_if;
	v->a[49286] = anon_sym_case;
	v->a[49287] = anon_sym_LPAREN;
	v->a[49288] = anon_sym_LBRACE;
	v->a[49289] = anon_sym_BANG;
	v->a[49290] = anon_sym_LT;
	v->a[49291] = anon_sym_GT;
	v->a[49292] = anon_sym_GT_GT;
	v->a[49293] = anon_sym_LT_AMP;
	v->a[49294] = anon_sym_GT_AMP;
	v->a[49295] = anon_sym_GT_PIPE;
	v->a[49296] = anon_sym_LT_AMP_DASH;
	v->a[49297] = anon_sym_GT_AMP_DASH;
	v->a[49298] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49299] = anon_sym_DOLLAR;
	small_parse_table_2465(v);
}

/* EOF small_parse_table_492.c */
