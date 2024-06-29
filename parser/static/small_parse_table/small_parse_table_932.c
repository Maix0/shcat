/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_932.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4660(t_small_parse_table_array *v)
{
	v->a[93200] = aux_sym_heredoc_redirect_token1;
	v->a[93201] = actions(1116);
	v->a[93202] = 5;
	v->a[93203] = anon_sym_in;
	v->a[93204] = anon_sym_SEMI_SEMI;
	v->a[93205] = anon_sym_AMP;
	v->a[93206] = aux_sym_concatenation_token1;
	v->a[93207] = anon_sym_SEMI;
	v->a[93208] = 3;
	v->a[93209] = actions(3);
	v->a[93210] = 1;
	v->a[93211] = sym_comment;
	v->a[93212] = actions(1056);
	v->a[93213] = 2;
	v->a[93214] = sym__concat;
	v->a[93215] = aux_sym_heredoc_redirect_token1;
	v->a[93216] = actions(1058);
	v->a[93217] = 5;
	v->a[93218] = anon_sym_in;
	v->a[93219] = anon_sym_SEMI_SEMI;
	small_parse_table_4661(v);
}

void	small_parse_table_4661(t_small_parse_table_array *v)
{
	v->a[93220] = anon_sym_AMP;
	v->a[93221] = aux_sym_concatenation_token1;
	v->a[93222] = anon_sym_SEMI;
	v->a[93223] = 3;
	v->a[93224] = actions(3);
	v->a[93225] = 1;
	v->a[93226] = sym_comment;
	v->a[93227] = actions(1104);
	v->a[93228] = 2;
	v->a[93229] = sym__concat;
	v->a[93230] = aux_sym_heredoc_redirect_token1;
	v->a[93231] = actions(1102);
	v->a[93232] = 5;
	v->a[93233] = anon_sym_in;
	v->a[93234] = anon_sym_SEMI_SEMI;
	v->a[93235] = anon_sym_AMP;
	v->a[93236] = aux_sym_concatenation_token1;
	v->a[93237] = anon_sym_SEMI;
	v->a[93238] = 3;
	v->a[93239] = actions(3);
	small_parse_table_4662(v);
}

void	small_parse_table_4662(t_small_parse_table_array *v)
{
	v->a[93240] = 1;
	v->a[93241] = sym_comment;
	v->a[93242] = actions(1088);
	v->a[93243] = 2;
	v->a[93244] = sym__concat;
	v->a[93245] = aux_sym_heredoc_redirect_token1;
	v->a[93246] = actions(1086);
	v->a[93247] = 5;
	v->a[93248] = anon_sym_in;
	v->a[93249] = anon_sym_SEMI_SEMI;
	v->a[93250] = anon_sym_AMP;
	v->a[93251] = aux_sym_concatenation_token1;
	v->a[93252] = anon_sym_SEMI;
	v->a[93253] = 5;
	v->a[93254] = actions(3);
	v->a[93255] = 1;
	v->a[93256] = sym_comment;
	v->a[93257] = actions(3907);
	v->a[93258] = 1;
	v->a[93259] = aux_sym_heredoc_redirect_token1;
	small_parse_table_4663(v);
}

void	small_parse_table_4663(t_small_parse_table_array *v)
{
	v->a[93260] = actions(3978);
	v->a[93261] = 1;
	v->a[93262] = anon_sym_in;
	v->a[93263] = state(2114);
	v->a[93264] = 1;
	v->a[93265] = sym_terminator;
	v->a[93266] = actions(2481);
	v->a[93267] = 3;
	v->a[93268] = anon_sym_SEMI_SEMI;
	v->a[93269] = anon_sym_AMP;
	v->a[93270] = anon_sym_SEMI;
	v->a[93271] = 6;
	v->a[93272] = actions(1074);
	v->a[93273] = 1;
	v->a[93274] = sym_comment;
	v->a[93275] = actions(3980);
	v->a[93276] = 1;
	v->a[93277] = anon_sym_fi;
	v->a[93278] = actions(3982);
	v->a[93279] = 1;
	small_parse_table_4664(v);
}

void	small_parse_table_4664(t_small_parse_table_array *v)
{
	v->a[93280] = anon_sym_elif;
	v->a[93281] = actions(3984);
	v->a[93282] = 1;
	v->a[93283] = anon_sym_else;
	v->a[93284] = state(2230);
	v->a[93285] = 1;
	v->a[93286] = sym_else_clause;
	v->a[93287] = state(2065);
	v->a[93288] = 2;
	v->a[93289] = sym_elif_clause;
	v->a[93290] = aux_sym_if_statement_repeat1;
	v->a[93291] = 6;
	v->a[93292] = actions(1074);
	v->a[93293] = 1;
	v->a[93294] = sym_comment;
	v->a[93295] = actions(3986);
	v->a[93296] = 1;
	v->a[93297] = anon_sym_PIPE;
	v->a[93298] = actions(3988);
	v->a[93299] = 1;
	small_parse_table_4665(v);
}

/* EOF small_parse_table_932.c */
