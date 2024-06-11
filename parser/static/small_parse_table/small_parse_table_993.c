/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_993.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4965(t_small_parse_table_array *v)
{
	v->a[99300] = state(2172);
	v->a[99301] = 2;
	v->a[99302] = sym_elif_clause;
	v->a[99303] = aux_sym_if_statement_repeat1;
	v->a[99304] = 3;
	v->a[99305] = actions(1094);
	v->a[99306] = 1;
	v->a[99307] = sym_comment;
	v->a[99308] = actions(1203);
	v->a[99309] = 1;
	v->a[99310] = anon_sym_DOLLAR;
	v->a[99311] = actions(1205);
	v->a[99312] = 5;
	v->a[99313] = sym_heredoc_content;
	v->a[99314] = sym_heredoc_end;
	v->a[99315] = anon_sym_DOLLAR_LBRACE;
	v->a[99316] = anon_sym_DOLLAR_LPAREN;
	v->a[99317] = anon_sym_BQUOTE;
	v->a[99318] = 6;
	v->a[99319] = actions(1094);
	small_parse_table_4966(v);
}

void	small_parse_table_4966(t_small_parse_table_array *v)
{
	v->a[99320] = 1;
	v->a[99321] = sym_comment;
	v->a[99322] = actions(4430);
	v->a[99323] = 1;
	v->a[99324] = anon_sym_PIPE;
	v->a[99325] = actions(4452);
	v->a[99326] = 1;
	v->a[99327] = anon_sym_RPAREN;
	v->a[99328] = state(2170);
	v->a[99329] = 1;
	v->a[99330] = aux_sym_concatenation_repeat1;
	v->a[99331] = state(2225);
	v->a[99332] = 1;
	v->a[99333] = aux_sym__case_item_last_repeat1;
	v->a[99334] = actions(4434);
	v->a[99335] = 2;
	v->a[99336] = sym__concat;
	v->a[99337] = aux_sym_concatenation_token1;
	v->a[99338] = 3;
	v->a[99339] = actions(1094);
	small_parse_table_4967(v);
}

void	small_parse_table_4967(t_small_parse_table_array *v)
{
	v->a[99340] = 1;
	v->a[99341] = sym_comment;
	v->a[99342] = actions(1179);
	v->a[99343] = 1;
	v->a[99344] = anon_sym_DOLLAR;
	v->a[99345] = actions(1177);
	v->a[99346] = 5;
	v->a[99347] = sym_heredoc_content;
	v->a[99348] = sym_heredoc_end;
	v->a[99349] = anon_sym_DOLLAR_LBRACE;
	v->a[99350] = anon_sym_DOLLAR_LPAREN;
	v->a[99351] = anon_sym_BQUOTE;
	v->a[99352] = 6;
	v->a[99353] = actions(1094);
	v->a[99354] = 1;
	v->a[99355] = sym_comment;
	v->a[99356] = actions(4438);
	v->a[99357] = 1;
	v->a[99358] = anon_sym_elif;
	v->a[99359] = actions(4440);
	small_parse_table_4968(v);
}

void	small_parse_table_4968(t_small_parse_table_array *v)
{
	v->a[99360] = 1;
	v->a[99361] = anon_sym_else;
	v->a[99362] = actions(4454);
	v->a[99363] = 1;
	v->a[99364] = anon_sym_fi;
	v->a[99365] = state(2453);
	v->a[99366] = 1;
	v->a[99367] = sym_else_clause;
	v->a[99368] = state(2172);
	v->a[99369] = 2;
	v->a[99370] = sym_elif_clause;
	v->a[99371] = aux_sym_if_statement_repeat1;
	v->a[99372] = 3;
	v->a[99373] = actions(3);
	v->a[99374] = 1;
	v->a[99375] = sym_comment;
	v->a[99376] = actions(4458);
	v->a[99377] = 2;
	v->a[99378] = sym_regex;
	v->a[99379] = aux_sym_expansion_regex_token1;
	small_parse_table_4969(v);
}

void	small_parse_table_4969(t_small_parse_table_array *v)
{
	v->a[99380] = actions(4456);
	v->a[99381] = 4;
	v->a[99382] = anon_sym_RPAREN;
	v->a[99383] = anon_sym_RBRACE;
	v->a[99384] = anon_sym_DQUOTE;
	v->a[99385] = sym_raw_string;
	v->a[99386] = 6;
	v->a[99387] = actions(1094);
	v->a[99388] = 1;
	v->a[99389] = sym_comment;
	v->a[99390] = actions(4430);
	v->a[99391] = 1;
	v->a[99392] = anon_sym_PIPE;
	v->a[99393] = actions(4460);
	v->a[99394] = 1;
	v->a[99395] = anon_sym_RPAREN;
	v->a[99396] = state(2170);
	v->a[99397] = 1;
	v->a[99398] = aux_sym_concatenation_repeat1;
	v->a[99399] = state(2235);
	small_parse_table_4970(v);
}

/* EOF small_parse_table_993.c */
