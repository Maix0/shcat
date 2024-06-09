/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_920.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4600(t_small_parse_table_array *v)
{
	v->a[92000] = sym__concat;
	v->a[92001] = aux_sym_concatenation_token1;
	v->a[92002] = 3;
	v->a[92003] = actions(3);
	v->a[92004] = 1;
	v->a[92005] = sym_comment;
	v->a[92006] = actions(1241);
	v->a[92007] = 2;
	v->a[92008] = sym_regex;
	v->a[92009] = aux_sym_expansion_regex_token1;
	v->a[92010] = actions(1239);
	v->a[92011] = 4;
	v->a[92012] = anon_sym_RPAREN;
	v->a[92013] = anon_sym_RBRACE;
	v->a[92014] = anon_sym_DQUOTE;
	v->a[92015] = sym_raw_string;
	v->a[92016] = 3;
	v->a[92017] = actions(1299);
	v->a[92018] = 1;
	v->a[92019] = anon_sym_DOLLAR;
	small_parse_table_4601(v);
}

void	small_parse_table_4601(t_small_parse_table_array *v)
{
	v->a[92020] = actions(1404);
	v->a[92021] = 1;
	v->a[92022] = sym_comment;
	v->a[92023] = actions(1301);
	v->a[92024] = 5;
	v->a[92025] = sym_heredoc_content;
	v->a[92026] = sym_heredoc_end;
	v->a[92027] = anon_sym_DOLLAR_LBRACE;
	v->a[92028] = anon_sym_DOLLAR_LPAREN;
	v->a[92029] = anon_sym_BQUOTE;
	v->a[92030] = 6;
	v->a[92031] = actions(1404);
	v->a[92032] = 1;
	v->a[92033] = sym_comment;
	v->a[92034] = actions(4176);
	v->a[92035] = 1;
	v->a[92036] = anon_sym_elif;
	v->a[92037] = actions(4178);
	v->a[92038] = 1;
	v->a[92039] = anon_sym_else;
	small_parse_table_4602(v);
}

void	small_parse_table_4602(t_small_parse_table_array *v)
{
	v->a[92040] = actions(4194);
	v->a[92041] = 1;
	v->a[92042] = anon_sym_fi;
	v->a[92043] = state(2144);
	v->a[92044] = 1;
	v->a[92045] = sym_else_clause;
	v->a[92046] = state(1918);
	v->a[92047] = 2;
	v->a[92048] = sym_elif_clause;
	v->a[92049] = aux_sym_if_statement_repeat1;
	v->a[92050] = 6;
	v->a[92051] = actions(1404);
	v->a[92052] = 1;
	v->a[92053] = sym_comment;
	v->a[92054] = actions(4176);
	v->a[92055] = 1;
	v->a[92056] = anon_sym_elif;
	v->a[92057] = actions(4178);
	v->a[92058] = 1;
	v->a[92059] = anon_sym_else;
	small_parse_table_4603(v);
}

void	small_parse_table_4603(t_small_parse_table_array *v)
{
	v->a[92060] = actions(4196);
	v->a[92061] = 1;
	v->a[92062] = anon_sym_fi;
	v->a[92063] = state(2227);
	v->a[92064] = 1;
	v->a[92065] = sym_else_clause;
	v->a[92066] = state(1918);
	v->a[92067] = 2;
	v->a[92068] = sym_elif_clause;
	v->a[92069] = aux_sym_if_statement_repeat1;
	v->a[92070] = 3;
	v->a[92071] = actions(1186);
	v->a[92072] = 1;
	v->a[92073] = anon_sym_DOLLAR;
	v->a[92074] = actions(1404);
	v->a[92075] = 1;
	v->a[92076] = sym_comment;
	v->a[92077] = actions(1188);
	v->a[92078] = 5;
	v->a[92079] = sym_heredoc_content;
	small_parse_table_4604(v);
}

void	small_parse_table_4604(t_small_parse_table_array *v)
{
	v->a[92080] = sym_heredoc_end;
	v->a[92081] = anon_sym_DOLLAR_LBRACE;
	v->a[92082] = anon_sym_DOLLAR_LPAREN;
	v->a[92083] = anon_sym_BQUOTE;
	v->a[92084] = 3;
	v->a[92085] = actions(3);
	v->a[92086] = 1;
	v->a[92087] = sym_comment;
	v->a[92088] = actions(1247);
	v->a[92089] = 2;
	v->a[92090] = sym_regex;
	v->a[92091] = aux_sym_expansion_regex_token1;
	v->a[92092] = actions(1249);
	v->a[92093] = 4;
	v->a[92094] = anon_sym_RPAREN;
	v->a[92095] = anon_sym_RBRACE;
	v->a[92096] = anon_sym_DQUOTE;
	v->a[92097] = sym_raw_string;
	v->a[92098] = 6;
	v->a[92099] = actions(1404);
	small_parse_table_4605(v);
}

/* EOF small_parse_table_920.c */
