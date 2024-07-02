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
	v->a[49200] = anon_sym_LT_GT;
	v->a[49201] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49202] = anon_sym_DOLLAR;
	v->a[49203] = anon_sym_DQUOTE;
	v->a[49204] = sym_raw_string;
	v->a[49205] = sym_number;
	v->a[49206] = anon_sym_DOLLAR_LBRACE;
	v->a[49207] = anon_sym_DOLLAR_LPAREN;
	v->a[49208] = sym_word;
	v->a[49209] = 6;
	v->a[49210] = actions(3);
	v->a[49211] = 1;
	v->a[49212] = sym_comment;
	v->a[49213] = actions(1754);
	v->a[49214] = 1;
	v->a[49215] = aux_sym_concatenation_token1;
	v->a[49216] = actions(1758);
	v->a[49217] = 1;
	v->a[49218] = sym__concat;
	v->a[49219] = state(794);
	small_parse_table_2461(v);
}

void	small_parse_table_2461(t_small_parse_table_array *v)
{
	v->a[49220] = 1;
	v->a[49221] = aux_sym_concatenation_repeat1;
	v->a[49222] = actions(1158);
	v->a[49223] = 2;
	v->a[49224] = sym_file_descriptor;
	v->a[49225] = sym_variable_name;
	v->a[49226] = actions(1154);
	v->a[49227] = 21;
	v->a[49228] = anon_sym_PIPE;
	v->a[49229] = anon_sym_AMP_AMP;
	v->a[49230] = anon_sym_PIPE_PIPE;
	v->a[49231] = anon_sym_LT;
	v->a[49232] = anon_sym_GT;
	v->a[49233] = anon_sym_GT_GT;
	v->a[49234] = anon_sym_LT_AMP;
	v->a[49235] = anon_sym_GT_AMP;
	v->a[49236] = anon_sym_GT_PIPE;
	v->a[49237] = anon_sym_LT_GT;
	v->a[49238] = anon_sym_LT_LT;
	v->a[49239] = anon_sym_LT_LT_DASH;
	small_parse_table_2462(v);
}

void	small_parse_table_2462(t_small_parse_table_array *v)
{
	v->a[49240] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49241] = anon_sym_DOLLAR;
	v->a[49242] = anon_sym_DQUOTE;
	v->a[49243] = sym_raw_string;
	v->a[49244] = sym_number;
	v->a[49245] = anon_sym_DOLLAR_LBRACE;
	v->a[49246] = anon_sym_DOLLAR_LPAREN;
	v->a[49247] = anon_sym_BQUOTE;
	v->a[49248] = sym_word;
	v->a[49249] = 4;
	v->a[49250] = actions(3);
	v->a[49251] = 1;
	v->a[49252] = sym_comment;
	v->a[49253] = actions(1424);
	v->a[49254] = 1;
	v->a[49255] = anon_sym_BQUOTE;
	v->a[49256] = actions(1426);
	v->a[49257] = 2;
	v->a[49258] = sym_file_descriptor;
	v->a[49259] = sym_variable_name;
	small_parse_table_2463(v);
}

void	small_parse_table_2463(t_small_parse_table_array *v)
{
	v->a[49260] = actions(1422);
	v->a[49261] = 23;
	v->a[49262] = anon_sym_for;
	v->a[49263] = anon_sym_while;
	v->a[49264] = anon_sym_until;
	v->a[49265] = anon_sym_if;
	v->a[49266] = anon_sym_case;
	v->a[49267] = anon_sym_LPAREN;
	v->a[49268] = anon_sym_LBRACE;
	v->a[49269] = anon_sym_BANG;
	v->a[49270] = anon_sym_LT;
	v->a[49271] = anon_sym_GT;
	v->a[49272] = anon_sym_GT_GT;
	v->a[49273] = anon_sym_LT_AMP;
	v->a[49274] = anon_sym_GT_AMP;
	v->a[49275] = anon_sym_GT_PIPE;
	v->a[49276] = anon_sym_LT_GT;
	v->a[49277] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49278] = anon_sym_DOLLAR;
	v->a[49279] = anon_sym_DQUOTE;
	small_parse_table_2464(v);
}

void	small_parse_table_2464(t_small_parse_table_array *v)
{
	v->a[49280] = sym_raw_string;
	v->a[49281] = sym_number;
	v->a[49282] = anon_sym_DOLLAR_LBRACE;
	v->a[49283] = anon_sym_DOLLAR_LPAREN;
	v->a[49284] = sym_word;
	v->a[49285] = 4;
	v->a[49286] = actions(3);
	v->a[49287] = 1;
	v->a[49288] = sym_comment;
	v->a[49289] = actions(1424);
	v->a[49290] = 1;
	v->a[49291] = anon_sym_BQUOTE;
	v->a[49292] = actions(1426);
	v->a[49293] = 2;
	v->a[49294] = sym_file_descriptor;
	v->a[49295] = sym_variable_name;
	v->a[49296] = actions(1422);
	v->a[49297] = 23;
	v->a[49298] = anon_sym_for;
	v->a[49299] = anon_sym_while;
	small_parse_table_2465(v);
}

/* EOF small_parse_table_492.c */
