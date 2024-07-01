/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_905.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4525(t_small_parse_table_array *v)
{
	v->a[90500] = anon_sym_elif;
	v->a[90501] = actions(3982);
	v->a[90502] = 1;
	v->a[90503] = anon_sym_else;
	v->a[90504] = state(2153);
	v->a[90505] = 1;
	v->a[90506] = sym_else_clause;
	v->a[90507] = state(2052);
	v->a[90508] = 2;
	v->a[90509] = sym_elif_clause;
	v->a[90510] = aux_sym_if_statement_repeat1;
	v->a[90511] = 5;
	v->a[90512] = actions(3);
	v->a[90513] = 1;
	v->a[90514] = sym_comment;
	v->a[90515] = actions(3857);
	v->a[90516] = 1;
	v->a[90517] = anon_sym_in;
	v->a[90518] = actions(3859);
	v->a[90519] = 1;
	small_parse_table_4526(v);
}

void	small_parse_table_4526(t_small_parse_table_array *v)
{
	v->a[90520] = aux_sym_heredoc_redirect_token1;
	v->a[90521] = state(2197);
	v->a[90522] = 1;
	v->a[90523] = sym_terminator;
	v->a[90524] = actions(2262);
	v->a[90525] = 3;
	v->a[90526] = anon_sym_SEMI_SEMI;
	v->a[90527] = anon_sym_AMP;
	v->a[90528] = anon_sym_SEMI;
	v->a[90529] = 3;
	v->a[90530] = actions(3);
	v->a[90531] = 1;
	v->a[90532] = sym_comment;
	v->a[90533] = actions(1033);
	v->a[90534] = 2;
	v->a[90535] = sym_regex;
	v->a[90536] = aux_sym_expansion_regex_token1;
	v->a[90537] = actions(1031);
	v->a[90538] = 4;
	v->a[90539] = anon_sym_RPAREN;
	small_parse_table_4527(v);
}

void	small_parse_table_4527(t_small_parse_table_array *v)
{
	v->a[90540] = anon_sym_RBRACE;
	v->a[90541] = anon_sym_DQUOTE;
	v->a[90542] = sym_raw_string;
	v->a[90543] = 6;
	v->a[90544] = actions(870);
	v->a[90545] = 1;
	v->a[90546] = sym_comment;
	v->a[90547] = actions(3984);
	v->a[90548] = 1;
	v->a[90549] = anon_sym_PIPE;
	v->a[90550] = actions(3986);
	v->a[90551] = 1;
	v->a[90552] = anon_sym_RPAREN;
	v->a[90553] = state(2050);
	v->a[90554] = 1;
	v->a[90555] = aux_sym_concatenation_repeat1;
	v->a[90556] = state(2092);
	v->a[90557] = 1;
	v->a[90558] = aux_sym__case_item_last_repeat1;
	v->a[90559] = actions(3988);
	small_parse_table_4528(v);
}

void	small_parse_table_4528(t_small_parse_table_array *v)
{
	v->a[90560] = 2;
	v->a[90561] = sym__concat;
	v->a[90562] = aux_sym_concatenation_token1;
	v->a[90563] = 3;
	v->a[90564] = actions(3);
	v->a[90565] = 1;
	v->a[90566] = sym_comment;
	v->a[90567] = actions(1015);
	v->a[90568] = 2;
	v->a[90569] = sym_regex;
	v->a[90570] = aux_sym_expansion_regex_token1;
	v->a[90571] = actions(1013);
	v->a[90572] = 4;
	v->a[90573] = anon_sym_RPAREN;
	v->a[90574] = anon_sym_RBRACE;
	v->a[90575] = anon_sym_DQUOTE;
	v->a[90576] = sym_raw_string;
	v->a[90577] = 6;
	v->a[90578] = actions(870);
	v->a[90579] = 1;
	small_parse_table_4529(v);
}

void	small_parse_table_4529(t_small_parse_table_array *v)
{
	v->a[90580] = sym_comment;
	v->a[90581] = actions(3980);
	v->a[90582] = 1;
	v->a[90583] = anon_sym_elif;
	v->a[90584] = actions(3982);
	v->a[90585] = 1;
	v->a[90586] = anon_sym_else;
	v->a[90587] = actions(3990);
	v->a[90588] = 1;
	v->a[90589] = anon_sym_fi;
	v->a[90590] = state(2246);
	v->a[90591] = 1;
	v->a[90592] = sym_else_clause;
	v->a[90593] = state(2052);
	v->a[90594] = 2;
	v->a[90595] = sym_elif_clause;
	v->a[90596] = aux_sym_if_statement_repeat1;
	v->a[90597] = 3;
	v->a[90598] = actions(3);
	v->a[90599] = 1;
	small_parse_table_4530(v);
}

/* EOF small_parse_table_905.c */
