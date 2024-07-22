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
	v->a[49200] = sym_arithmetic_postfix_expression;
	v->a[49201] = sym_arithmetic_parenthesized_expression;
	v->a[49202] = sym_command_substitution;
	v->a[49203] = 18;
	v->a[49204] = actions(3);
	v->a[49205] = 1;
	v->a[49206] = sym_comment;
	v->a[49207] = actions(1720);
	v->a[49208] = 1;
	v->a[49209] = anon_sym_LPAREN;
	v->a[49210] = actions(1724);
	v->a[49211] = 1;
	v->a[49212] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49213] = actions(1726);
	v->a[49214] = 1;
	v->a[49215] = anon_sym_DOLLAR;
	v->a[49216] = actions(1728);
	v->a[49217] = 1;
	v->a[49218] = anon_sym_DQUOTE;
	v->a[49219] = actions(1730);
	small_parse_table_2461(v);
}

void	small_parse_table_2461(t_small_parse_table_array *v)
{
	v->a[49220] = 1;
	v->a[49221] = anon_sym_DOLLAR_LBRACE;
	v->a[49222] = actions(1732);
	v->a[49223] = 1;
	v->a[49224] = anon_sym_DOLLAR_LPAREN;
	v->a[49225] = actions(1734);
	v->a[49226] = 1;
	v->a[49227] = anon_sym_BQUOTE;
	v->a[49228] = actions(1736);
	v->a[49229] = 1;
	v->a[49230] = sym_extglob_pattern;
	v->a[49231] = actions(1772);
	v->a[49232] = 1;
	v->a[49233] = anon_sym_esac;
	v->a[49234] = state(935);
	v->a[49235] = 1;
	v->a[49236] = sym_terminator;
	v->a[49237] = state(1012);
	v->a[49238] = 1;
	v->a[49239] = aux_sym_case_statement_repeat1;
	small_parse_table_2462(v);
}

void	small_parse_table_2462(t_small_parse_table_array *v)
{
	v->a[49240] = state(1682);
	v->a[49241] = 1;
	v->a[49242] = sym_case_item;
	v->a[49243] = state(1951);
	v->a[49244] = 1;
	v->a[49245] = sym__case_item_last;
	v->a[49246] = state(1877);
	v->a[49247] = 2;
	v->a[49248] = sym_concatenation;
	v->a[49249] = sym__extglob_blob;
	v->a[49250] = actions(1716);
	v->a[49251] = 3;
	v->a[49252] = sym_raw_string;
	v->a[49253] = sym_number;
	v->a[49254] = sym_word;
	v->a[49255] = actions(1722);
	v->a[49256] = 3;
	v->a[49257] = anon_sym_SEMI_SEMI;
	v->a[49258] = aux_sym_heredoc_redirect_token1;
	v->a[49259] = anon_sym_SEMI;
	small_parse_table_2463(v);
}

void	small_parse_table_2463(t_small_parse_table_array *v)
{
	v->a[49260] = state(1772);
	v->a[49261] = 5;
	v->a[49262] = sym_arithmetic_expansion;
	v->a[49263] = sym_string;
	v->a[49264] = sym_simple_expansion;
	v->a[49265] = sym_expansion;
	v->a[49266] = sym_command_substitution;
	v->a[49267] = 15;
	v->a[49268] = actions(501);
	v->a[49269] = 1;
	v->a[49270] = sym_comment;
	v->a[49271] = actions(1469);
	v->a[49272] = 1;
	v->a[49273] = anon_sym_LPAREN;
	v->a[49274] = actions(1471);
	v->a[49275] = 1;
	v->a[49276] = anon_sym_BANG;
	v->a[49277] = actions(1479);
	v->a[49278] = 1;
	v->a[49279] = anon_sym_TILDE;
	small_parse_table_2464(v);
}

void	small_parse_table_2464(t_small_parse_table_array *v)
{
	v->a[49280] = actions(1481);
	v->a[49281] = 1;
	v->a[49282] = anon_sym_DOLLAR;
	v->a[49283] = actions(1483);
	v->a[49284] = 1;
	v->a[49285] = anon_sym_DQUOTE;
	v->a[49286] = actions(1487);
	v->a[49287] = 1;
	v->a[49288] = anon_sym_DOLLAR_LBRACE;
	v->a[49289] = actions(1489);
	v->a[49290] = 1;
	v->a[49291] = anon_sym_DOLLAR_LPAREN;
	v->a[49292] = actions(1491);
	v->a[49293] = 1;
	v->a[49294] = anon_sym_BQUOTE;
	v->a[49295] = actions(1493);
	v->a[49296] = 1;
	v->a[49297] = sym_variable_name;
	v->a[49298] = actions(1475);
	v->a[49299] = 2;
	small_parse_table_2465(v);
}

/* EOF small_parse_table_492.c */
