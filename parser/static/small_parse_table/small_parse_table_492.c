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
	v->a[49200] = actions(1588);
	v->a[49201] = 1;
	v->a[49202] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49203] = actions(1590);
	v->a[49204] = 1;
	v->a[49205] = anon_sym_DOLLAR;
	v->a[49206] = actions(1592);
	v->a[49207] = 1;
	v->a[49208] = anon_sym_DQUOTE;
	v->a[49209] = actions(1594);
	v->a[49210] = 1;
	v->a[49211] = anon_sym_DOLLAR_LBRACE;
	v->a[49212] = actions(1596);
	v->a[49213] = 1;
	v->a[49214] = anon_sym_DOLLAR_LPAREN;
	v->a[49215] = actions(1598);
	v->a[49216] = 1;
	v->a[49217] = anon_sym_BQUOTE;
	v->a[49218] = state(1766);
	v->a[49219] = 1;
	small_parse_table_2461(v);
}

void	small_parse_table_2461(t_small_parse_table_array *v)
{
	v->a[49220] = sym_concatenation;
	v->a[49221] = actions(1603);
	v->a[49222] = 3;
	v->a[49223] = sym_raw_string;
	v->a[49224] = sym_number;
	v->a[49225] = sym_word;
	v->a[49226] = state(1558);
	v->a[49227] = 5;
	v->a[49228] = sym_arithmetic_expansion;
	v->a[49229] = sym_string;
	v->a[49230] = sym_simple_expansion;
	v->a[49231] = sym_expansion;
	v->a[49232] = sym_command_substitution;
	v->a[49233] = actions(719);
	v->a[49234] = 15;
	v->a[49235] = anon_sym_PIPE;
	v->a[49236] = anon_sym_AMP_AMP;
	v->a[49237] = anon_sym_PIPE_PIPE;
	v->a[49238] = anon_sym_LT;
	v->a[49239] = anon_sym_GT;
	small_parse_table_2462(v);
}

void	small_parse_table_2462(t_small_parse_table_array *v)
{
	v->a[49240] = anon_sym_GT_GT;
	v->a[49241] = anon_sym_AMP_GT;
	v->a[49242] = anon_sym_AMP_GT_GT;
	v->a[49243] = anon_sym_LT_AMP;
	v->a[49244] = anon_sym_GT_AMP;
	v->a[49245] = anon_sym_GT_PIPE;
	v->a[49246] = anon_sym_LT_AMP_DASH;
	v->a[49247] = anon_sym_GT_AMP_DASH;
	v->a[49248] = anon_sym_LT_LT;
	v->a[49249] = anon_sym_LT_LT_DASH;
	v->a[49250] = 4;
	v->a[49251] = actions(3);
	v->a[49252] = 1;
	v->a[49253] = sym_comment;
	v->a[49254] = actions(1554);
	v->a[49255] = 2;
	v->a[49256] = anon_sym_RPAREN;
	v->a[49257] = anon_sym_SEMI_SEMI;
	v->a[49258] = actions(1556);
	v->a[49259] = 2;
	small_parse_table_2463(v);
}

void	small_parse_table_2463(t_small_parse_table_array *v)
{
	v->a[49260] = sym_file_descriptor;
	v->a[49261] = sym_variable_name;
	v->a[49262] = actions(1552);
	v->a[49263] = 27;
	v->a[49264] = anon_sym_for;
	v->a[49265] = anon_sym_while;
	v->a[49266] = anon_sym_until;
	v->a[49267] = anon_sym_if;
	v->a[49268] = anon_sym_case;
	v->a[49269] = anon_sym_LPAREN;
	v->a[49270] = anon_sym_LBRACE;
	v->a[49271] = anon_sym_BANG;
	v->a[49272] = anon_sym_LT;
	v->a[49273] = anon_sym_GT;
	v->a[49274] = anon_sym_GT_GT;
	v->a[49275] = anon_sym_AMP_GT;
	v->a[49276] = anon_sym_AMP_GT_GT;
	v->a[49277] = anon_sym_LT_AMP;
	v->a[49278] = anon_sym_GT_AMP;
	v->a[49279] = anon_sym_GT_PIPE;
	small_parse_table_2464(v);
}

void	small_parse_table_2464(t_small_parse_table_array *v)
{
	v->a[49280] = anon_sym_LT_AMP_DASH;
	v->a[49281] = anon_sym_GT_AMP_DASH;
	v->a[49282] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49283] = anon_sym_DOLLAR;
	v->a[49284] = anon_sym_DQUOTE;
	v->a[49285] = sym_raw_string;
	v->a[49286] = sym_number;
	v->a[49287] = anon_sym_DOLLAR_LBRACE;
	v->a[49288] = anon_sym_DOLLAR_LPAREN;
	v->a[49289] = anon_sym_BQUOTE;
	v->a[49290] = sym_word;
	v->a[49291] = 7;
	v->a[49292] = actions(3);
	v->a[49293] = 1;
	v->a[49294] = sym_comment;
	v->a[49295] = actions(1565);
	v->a[49296] = 1;
	v->a[49297] = sym_file_descriptor;
	v->a[49298] = actions(1568);
	v->a[49299] = 1;
	small_parse_table_2465(v);
}

/* EOF small_parse_table_492.c */
