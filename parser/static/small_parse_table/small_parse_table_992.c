/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_992.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4960(t_small_parse_table_array *v)
{
	v->a[99200] = actions(1124);
	v->a[99201] = 2;
	v->a[99202] = sym_regex;
	v->a[99203] = aux_sym_expansion_regex_token1;
	v->a[99204] = actions(1122);
	v->a[99205] = 4;
	v->a[99206] = anon_sym_RPAREN;
	v->a[99207] = anon_sym_RBRACE;
	v->a[99208] = anon_sym_DQUOTE;
	v->a[99209] = sym_raw_string;
	v->a[99210] = 3;
	v->a[99211] = actions(3);
	v->a[99212] = 1;
	v->a[99213] = sym_comment;
	v->a[99214] = actions(1187);
	v->a[99215] = 2;
	v->a[99216] = sym_regex;
	v->a[99217] = aux_sym_expansion_regex_token1;
	v->a[99218] = actions(1185);
	v->a[99219] = 4;
	small_parse_table_4961(v);
}

void	small_parse_table_4961(t_small_parse_table_array *v)
{
	v->a[99220] = anon_sym_RPAREN;
	v->a[99221] = anon_sym_RBRACE;
	v->a[99222] = anon_sym_DQUOTE;
	v->a[99223] = sym_raw_string;
	v->a[99224] = 6;
	v->a[99225] = actions(1094);
	v->a[99226] = 1;
	v->a[99227] = sym_comment;
	v->a[99228] = actions(4438);
	v->a[99229] = 1;
	v->a[99230] = anon_sym_elif;
	v->a[99231] = actions(4440);
	v->a[99232] = 1;
	v->a[99233] = anon_sym_else;
	v->a[99234] = actions(4444);
	v->a[99235] = 1;
	v->a[99236] = anon_sym_fi;
	v->a[99237] = state(2277);
	v->a[99238] = 1;
	v->a[99239] = sym_else_clause;
	small_parse_table_4962(v);
}

void	small_parse_table_4962(t_small_parse_table_array *v)
{
	v->a[99240] = state(2172);
	v->a[99241] = 2;
	v->a[99242] = sym_elif_clause;
	v->a[99243] = aux_sym_if_statement_repeat1;
	v->a[99244] = 6;
	v->a[99245] = actions(1094);
	v->a[99246] = 1;
	v->a[99247] = sym_comment;
	v->a[99248] = actions(4430);
	v->a[99249] = 1;
	v->a[99250] = anon_sym_PIPE;
	v->a[99251] = actions(4446);
	v->a[99252] = 1;
	v->a[99253] = anon_sym_RPAREN;
	v->a[99254] = state(2170);
	v->a[99255] = 1;
	v->a[99256] = aux_sym_concatenation_repeat1;
	v->a[99257] = state(2228);
	v->a[99258] = 1;
	v->a[99259] = aux_sym__case_item_last_repeat1;
	small_parse_table_4963(v);
}

void	small_parse_table_4963(t_small_parse_table_array *v)
{
	v->a[99260] = actions(4434);
	v->a[99261] = 2;
	v->a[99262] = sym__concat;
	v->a[99263] = aux_sym_concatenation_token1;
	v->a[99264] = 6;
	v->a[99265] = actions(1094);
	v->a[99266] = 1;
	v->a[99267] = sym_comment;
	v->a[99268] = actions(4438);
	v->a[99269] = 1;
	v->a[99270] = anon_sym_elif;
	v->a[99271] = actions(4440);
	v->a[99272] = 1;
	v->a[99273] = anon_sym_else;
	v->a[99274] = actions(4448);
	v->a[99275] = 1;
	v->a[99276] = anon_sym_fi;
	v->a[99277] = state(2438);
	v->a[99278] = 1;
	v->a[99279] = sym_else_clause;
	small_parse_table_4964(v);
}

void	small_parse_table_4964(t_small_parse_table_array *v)
{
	v->a[99280] = state(2172);
	v->a[99281] = 2;
	v->a[99282] = sym_elif_clause;
	v->a[99283] = aux_sym_if_statement_repeat1;
	v->a[99284] = 6;
	v->a[99285] = actions(1094);
	v->a[99286] = 1;
	v->a[99287] = sym_comment;
	v->a[99288] = actions(4438);
	v->a[99289] = 1;
	v->a[99290] = anon_sym_elif;
	v->a[99291] = actions(4440);
	v->a[99292] = 1;
	v->a[99293] = anon_sym_else;
	v->a[99294] = actions(4450);
	v->a[99295] = 1;
	v->a[99296] = anon_sym_fi;
	v->a[99297] = state(2316);
	v->a[99298] = 1;
	v->a[99299] = sym_else_clause;
	small_parse_table_4965(v);
}

/* EOF small_parse_table_992.c */
