/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_990.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4950(t_small_parse_table_array *v)
{
	v->a[99000] = 2;
	v->a[99001] = sym__concat;
	v->a[99002] = aux_sym_heredoc_redirect_token1;
	v->a[99003] = actions(1161);
	v->a[99004] = 5;
	v->a[99005] = anon_sym_in;
	v->a[99006] = anon_sym_SEMI_SEMI;
	v->a[99007] = anon_sym_AMP;
	v->a[99008] = aux_sym_concatenation_token1;
	v->a[99009] = anon_sym_SEMI;
	v->a[99010] = 2;
	v->a[99011] = actions(3);
	v->a[99012] = 1;
	v->a[99013] = sym_comment;
	v->a[99014] = actions(3990);
	v->a[99015] = 7;
	v->a[99016] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[99017] = anon_sym_DOLLAR;
	v->a[99018] = anon_sym_DQUOTE;
	v->a[99019] = sym_string_content;
	small_parse_table_4951(v);
}

void	small_parse_table_4951(t_small_parse_table_array *v)
{
	v->a[99020] = anon_sym_DOLLAR_LBRACE;
	v->a[99021] = anon_sym_DOLLAR_LPAREN;
	v->a[99022] = anon_sym_BQUOTE;
	v->a[99023] = 3;
	v->a[99024] = actions(3);
	v->a[99025] = 1;
	v->a[99026] = sym_comment;
	v->a[99027] = actions(1100);
	v->a[99028] = 2;
	v->a[99029] = sym__concat;
	v->a[99030] = aux_sym_heredoc_redirect_token1;
	v->a[99031] = actions(1102);
	v->a[99032] = 5;
	v->a[99033] = anon_sym_in;
	v->a[99034] = anon_sym_SEMI_SEMI;
	v->a[99035] = anon_sym_AMP;
	v->a[99036] = aux_sym_concatenation_token1;
	v->a[99037] = anon_sym_SEMI;
	v->a[99038] = 3;
	v->a[99039] = actions(3);
	small_parse_table_4952(v);
}

void	small_parse_table_4952(t_small_parse_table_array *v)
{
	v->a[99040] = 1;
	v->a[99041] = sym_comment;
	v->a[99042] = actions(1163);
	v->a[99043] = 2;
	v->a[99044] = sym_regex;
	v->a[99045] = aux_sym_expansion_regex_token1;
	v->a[99046] = actions(1161);
	v->a[99047] = 4;
	v->a[99048] = anon_sym_RPAREN;
	v->a[99049] = anon_sym_RBRACE;
	v->a[99050] = anon_sym_DQUOTE;
	v->a[99051] = sym_raw_string;
	v->a[99052] = 3;
	v->a[99053] = actions(3);
	v->a[99054] = 1;
	v->a[99055] = sym_comment;
	v->a[99056] = actions(1153);
	v->a[99057] = 2;
	v->a[99058] = sym_regex;
	v->a[99059] = aux_sym_expansion_regex_token1;
	small_parse_table_4953(v);
}

void	small_parse_table_4953(t_small_parse_table_array *v)
{
	v->a[99060] = actions(1151);
	v->a[99061] = 4;
	v->a[99062] = anon_sym_RPAREN;
	v->a[99063] = anon_sym_RBRACE;
	v->a[99064] = anon_sym_DQUOTE;
	v->a[99065] = sym_raw_string;
	v->a[99066] = 3;
	v->a[99067] = actions(1074);
	v->a[99068] = 1;
	v->a[99069] = anon_sym_DOLLAR;
	v->a[99070] = actions(1094);
	v->a[99071] = 1;
	v->a[99072] = sym_comment;
	v->a[99073] = actions(1076);
	v->a[99074] = 5;
	v->a[99075] = sym_heredoc_content;
	v->a[99076] = sym_heredoc_end;
	v->a[99077] = anon_sym_DOLLAR_LBRACE;
	v->a[99078] = anon_sym_DOLLAR_LPAREN;
	v->a[99079] = anon_sym_BQUOTE;
	small_parse_table_4954(v);
}

void	small_parse_table_4954(t_small_parse_table_array *v)
{
	v->a[99080] = 3;
	v->a[99081] = actions(1094);
	v->a[99082] = 1;
	v->a[99083] = sym_comment;
	v->a[99084] = actions(1149);
	v->a[99085] = 1;
	v->a[99086] = anon_sym_DOLLAR;
	v->a[99087] = actions(1147);
	v->a[99088] = 5;
	v->a[99089] = sym_heredoc_content;
	v->a[99090] = sym_heredoc_end;
	v->a[99091] = anon_sym_DOLLAR_LBRACE;
	v->a[99092] = anon_sym_DOLLAR_LPAREN;
	v->a[99093] = anon_sym_BQUOTE;
	v->a[99094] = 3;
	v->a[99095] = actions(1094);
	v->a[99096] = 1;
	v->a[99097] = sym_comment;
	v->a[99098] = actions(1139);
	v->a[99099] = 1;
	small_parse_table_4955(v);
}

/* EOF small_parse_table_990.c */
