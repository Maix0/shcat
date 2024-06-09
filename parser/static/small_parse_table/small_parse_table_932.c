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
	v->a[93200] = 5;
	v->a[93201] = actions(1404);
	v->a[93202] = 1;
	v->a[93203] = sym_comment;
	v->a[93204] = actions(4374);
	v->a[93205] = 1;
	v->a[93206] = anon_sym_DOLLAR_LBRACE;
	v->a[93207] = actions(4376);
	v->a[93208] = 1;
	v->a[93209] = anon_sym_DOLLAR_LPAREN;
	v->a[93210] = actions(4378);
	v->a[93211] = 1;
	v->a[93212] = anon_sym_BQUOTE;
	v->a[93213] = state(853);
	v->a[93214] = 2;
	v->a[93215] = sym_expansion;
	v->a[93216] = sym_command_substitution;
	v->a[93217] = 5;
	v->a[93218] = actions(1404);
	v->a[93219] = 1;
	small_parse_table_4661(v);
}

void	small_parse_table_4661(t_small_parse_table_array *v)
{
	v->a[93220] = sym_comment;
	v->a[93221] = actions(4208);
	v->a[93222] = 1;
	v->a[93223] = sym__heredoc_body_beginning;
	v->a[93224] = actions(4216);
	v->a[93225] = 1;
	v->a[93226] = sym_simple_heredoc_body;
	v->a[93227] = state(2119);
	v->a[93228] = 1;
	v->a[93229] = sym_heredoc_body;
	v->a[93230] = state(1572);
	v->a[93231] = 2;
	v->a[93232] = sym__heredoc_body;
	v->a[93233] = sym__simple_heredoc_body;
	v->a[93234] = 2;
	v->a[93235] = actions(1404);
	v->a[93236] = 1;
	v->a[93237] = sym_comment;
	v->a[93238] = actions(1192);
	v->a[93239] = 5;
	small_parse_table_4662(v);
}

void	small_parse_table_4662(t_small_parse_table_array *v)
{
	v->a[93240] = sym__concat;
	v->a[93241] = anon_sym_PIPE;
	v->a[93242] = anon_sym_RPAREN;
	v->a[93243] = anon_sym_RBRACE;
	v->a[93244] = aux_sym_concatenation_token1;
	v->a[93245] = 5;
	v->a[93246] = actions(1404);
	v->a[93247] = 1;
	v->a[93248] = sym_comment;
	v->a[93249] = actions(2095);
	v->a[93250] = 1;
	v->a[93251] = anon_sym_DOLLAR_LBRACE;
	v->a[93252] = actions(2097);
	v->a[93253] = 1;
	v->a[93254] = anon_sym_DOLLAR_LPAREN;
	v->a[93255] = actions(2099);
	v->a[93256] = 1;
	v->a[93257] = anon_sym_BQUOTE;
	v->a[93258] = state(608);
	v->a[93259] = 2;
	small_parse_table_4663(v);
}

void	small_parse_table_4663(t_small_parse_table_array *v)
{
	v->a[93260] = sym_expansion;
	v->a[93261] = sym_command_substitution;
	v->a[93262] = 5;
	v->a[93263] = actions(1404);
	v->a[93264] = 1;
	v->a[93265] = sym_comment;
	v->a[93266] = actions(4208);
	v->a[93267] = 1;
	v->a[93268] = sym__heredoc_body_beginning;
	v->a[93269] = actions(4216);
	v->a[93270] = 1;
	v->a[93271] = sym_simple_heredoc_body;
	v->a[93272] = state(2119);
	v->a[93273] = 1;
	v->a[93274] = sym_heredoc_body;
	v->a[93275] = state(1550);
	v->a[93276] = 2;
	v->a[93277] = sym__heredoc_body;
	v->a[93278] = sym__simple_heredoc_body;
	v->a[93279] = 5;
	small_parse_table_4664(v);
}

void	small_parse_table_4664(t_small_parse_table_array *v)
{
	v->a[93280] = actions(1404);
	v->a[93281] = 1;
	v->a[93282] = sym_comment;
	v->a[93283] = actions(4380);
	v->a[93284] = 1;
	v->a[93285] = anon_sym_DOLLAR_LBRACE;
	v->a[93286] = actions(4382);
	v->a[93287] = 1;
	v->a[93288] = anon_sym_DOLLAR_LPAREN;
	v->a[93289] = actions(4384);
	v->a[93290] = 1;
	v->a[93291] = anon_sym_BQUOTE;
	v->a[93292] = state(395);
	v->a[93293] = 2;
	v->a[93294] = sym_expansion;
	v->a[93295] = sym_command_substitution;
	v->a[93296] = 5;
	v->a[93297] = actions(1404);
	v->a[93298] = 1;
	v->a[93299] = sym_comment;
	small_parse_table_4665(v);
}

/* EOF small_parse_table_932.c */
