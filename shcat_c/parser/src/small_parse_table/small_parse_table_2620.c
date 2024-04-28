/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2620.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13100(t_small_parse_table_array *v)
{
	v->a[262000] = sym__external_expansion_sym_hash;
	v->a[262001] = sym__external_expansion_sym_bang;
	v->a[262002] = sym__external_expansion_sym_equal;
	v->a[262003] = actions(11754);
	v->a[262004] = 4;
	v->a[262005] = anon_sym_DASH;
	v->a[262006] = anon_sym_STAR;
	v->a[262007] = anon_sym_QMARK;
	v->a[262008] = anon_sym_AT2;
	v->a[262009] = actions(11756);
	v->a[262010] = 5;
	v->a[262011] = anon_sym_BANG;
	v->a[262012] = anon_sym_DOLLAR;
	v->a[262013] = anon_sym_POUND;
	v->a[262014] = anon_sym_0;
	v->a[262015] = anon_sym__;
	v->a[262016] = 16;
	v->a[262017] = actions(3);
	v->a[262018] = 1;
	v->a[262019] = sym_comment;
	small_parse_table_13101(v);
}

void	small_parse_table_13101(t_small_parse_table_array *v)
{
	v->a[262020] = actions(11760);
	v->a[262021] = 1;
	v->a[262022] = anon_sym_BANG2;
	v->a[262023] = actions(11764);
	v->a[262024] = 1;
	v->a[262025] = anon_sym_DOLLAR_LPAREN;
	v->a[262026] = actions(11766);
	v->a[262027] = 1;
	v->a[262028] = anon_sym_BQUOTE;
	v->a[262029] = actions(11768);
	v->a[262030] = 1;
	v->a[262031] = anon_sym_DOLLAR_BQUOTE;
	v->a[262032] = actions(11770);
	v->a[262033] = 1;
	v->a[262034] = aux_sym__simple_variable_name_token1;
	v->a[262035] = actions(11772);
	v->a[262036] = 1;
	v->a[262037] = sym_variable_name;
	v->a[262038] = actions(12015);
	v->a[262039] = 1;
	small_parse_table_13102(v);
}

void	small_parse_table_13102(t_small_parse_table_array *v)
{
	v->a[262040] = anon_sym_RBRACE3;
	v->a[262041] = state(3532);
	v->a[262042] = 1;
	v->a[262043] = sym_subscript;
	v->a[262044] = state(6428);
	v->a[262045] = 1;
	v->a[262046] = aux_sym__expansion_body_repeat1;
	v->a[262047] = state(6472);
	v->a[262048] = 1;
	v->a[262049] = sym_command_substitution;
	v->a[262050] = state(7331);
	v->a[262051] = 1;
	v->a[262052] = sym__expansion_body;
	v->a[262053] = actions(11762);
	v->a[262054] = 2;
	v->a[262055] = anon_sym_POUND2;
	v->a[262056] = anon_sym_EQ2;
	v->a[262057] = actions(8050);
	v->a[262058] = 3;
	v->a[262059] = sym__external_expansion_sym_hash;
	small_parse_table_13103(v);
}

void	small_parse_table_13103(t_small_parse_table_array *v)
{
	v->a[262060] = sym__external_expansion_sym_bang;
	v->a[262061] = sym__external_expansion_sym_equal;
	v->a[262062] = actions(11754);
	v->a[262063] = 4;
	v->a[262064] = anon_sym_DASH;
	v->a[262065] = anon_sym_STAR;
	v->a[262066] = anon_sym_QMARK;
	v->a[262067] = anon_sym_AT2;
	v->a[262068] = actions(11756);
	v->a[262069] = 5;
	v->a[262070] = anon_sym_BANG;
	v->a[262071] = anon_sym_DOLLAR;
	v->a[262072] = anon_sym_POUND;
	v->a[262073] = anon_sym_0;
	v->a[262074] = anon_sym__;
	v->a[262075] = 3;
	v->a[262076] = actions(3);
	v->a[262077] = 1;
	v->a[262078] = sym_comment;
	v->a[262079] = actions(1338);
	small_parse_table_13104(v);
}

void	small_parse_table_13104(t_small_parse_table_array *v)
{
	v->a[262080] = 4;
	v->a[262081] = sym__concat;
	v->a[262082] = sym_test_operator;
	v->a[262083] = sym__brace_start;
	v->a[262084] = aux_sym_heredoc_redirect_token1;
	v->a[262085] = actions(1336);
	v->a[262086] = 21;
	v->a[262087] = anon_sym_LPAREN_LPAREN;
	v->a[262088] = anon_sym_SEMI;
	v->a[262089] = anon_sym_AMP;
	v->a[262090] = anon_sym_SEMI_SEMI;
	v->a[262091] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[262092] = anon_sym_DOLLAR_LBRACK;
	v->a[262093] = aux_sym_concatenation_token1;
	v->a[262094] = anon_sym_DOLLAR;
	v->a[262095] = sym__special_character;
	v->a[262096] = anon_sym_DQUOTE;
	v->a[262097] = sym_raw_string;
	v->a[262098] = sym_ansi_c_string;
	v->a[262099] = aux_sym_number_token1;
	small_parse_table_13105(v);
}

/* EOF small_parse_table_2620.c */
