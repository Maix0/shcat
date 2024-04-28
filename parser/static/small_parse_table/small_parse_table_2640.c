/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2640.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13200(t_small_parse_table_array *v)
{
	v->a[264000] = aux_sym_number_token2;
	v->a[264001] = anon_sym_DOLLAR_LBRACE;
	v->a[264002] = anon_sym_DOLLAR_LPAREN;
	v->a[264003] = anon_sym_BQUOTE;
	v->a[264004] = anon_sym_DOLLAR_BQUOTE;
	v->a[264005] = anon_sym_LT_LPAREN;
	v->a[264006] = anon_sym_GT_LPAREN;
	v->a[264007] = sym_word;
	v->a[264008] = 16;
	v->a[264009] = actions(3);
	v->a[264010] = 1;
	v->a[264011] = sym_comment;
	v->a[264012] = actions(11760);
	v->a[264013] = 1;
	v->a[264014] = anon_sym_BANG2;
	v->a[264015] = actions(11764);
	v->a[264016] = 1;
	v->a[264017] = anon_sym_DOLLAR_LPAREN;
	v->a[264018] = actions(11766);
	v->a[264019] = 1;
	small_parse_table_13201(v);
}

void	small_parse_table_13201(t_small_parse_table_array *v)
{
	v->a[264020] = anon_sym_BQUOTE;
	v->a[264021] = actions(11768);
	v->a[264022] = 1;
	v->a[264023] = anon_sym_DOLLAR_BQUOTE;
	v->a[264024] = actions(11770);
	v->a[264025] = 1;
	v->a[264026] = aux_sym__simple_variable_name_token1;
	v->a[264027] = actions(11772);
	v->a[264028] = 1;
	v->a[264029] = sym_variable_name;
	v->a[264030] = actions(12052);
	v->a[264031] = 1;
	v->a[264032] = anon_sym_RBRACE3;
	v->a[264033] = state(3532);
	v->a[264034] = 1;
	v->a[264035] = sym_subscript;
	v->a[264036] = state(6428);
	v->a[264037] = 1;
	v->a[264038] = aux_sym__expansion_body_repeat1;
	v->a[264039] = state(6472);
	small_parse_table_13202(v);
}

void	small_parse_table_13202(t_small_parse_table_array *v)
{
	v->a[264040] = 1;
	v->a[264041] = sym_command_substitution;
	v->a[264042] = state(7398);
	v->a[264043] = 1;
	v->a[264044] = sym__expansion_body;
	v->a[264045] = actions(11762);
	v->a[264046] = 2;
	v->a[264047] = anon_sym_POUND2;
	v->a[264048] = anon_sym_EQ2;
	v->a[264049] = actions(8050);
	v->a[264050] = 3;
	v->a[264051] = sym__external_expansion_sym_hash;
	v->a[264052] = sym__external_expansion_sym_bang;
	v->a[264053] = sym__external_expansion_sym_equal;
	v->a[264054] = actions(11754);
	v->a[264055] = 4;
	v->a[264056] = anon_sym_DASH;
	v->a[264057] = anon_sym_STAR;
	v->a[264058] = anon_sym_QMARK;
	v->a[264059] = anon_sym_AT2;
	small_parse_table_13203(v);
}

void	small_parse_table_13203(t_small_parse_table_array *v)
{
	v->a[264060] = actions(11756);
	v->a[264061] = 5;
	v->a[264062] = anon_sym_BANG;
	v->a[264063] = anon_sym_DOLLAR;
	v->a[264064] = anon_sym_POUND;
	v->a[264065] = anon_sym_0;
	v->a[264066] = anon_sym__;
	v->a[264067] = 16;
	v->a[264068] = actions(3);
	v->a[264069] = 1;
	v->a[264070] = sym_comment;
	v->a[264071] = actions(11760);
	v->a[264072] = 1;
	v->a[264073] = anon_sym_BANG2;
	v->a[264074] = actions(11764);
	v->a[264075] = 1;
	v->a[264076] = anon_sym_DOLLAR_LPAREN;
	v->a[264077] = actions(11766);
	v->a[264078] = 1;
	v->a[264079] = anon_sym_BQUOTE;
	small_parse_table_13204(v);
}

void	small_parse_table_13204(t_small_parse_table_array *v)
{
	v->a[264080] = actions(11768);
	v->a[264081] = 1;
	v->a[264082] = anon_sym_DOLLAR_BQUOTE;
	v->a[264083] = actions(11770);
	v->a[264084] = 1;
	v->a[264085] = aux_sym__simple_variable_name_token1;
	v->a[264086] = actions(11772);
	v->a[264087] = 1;
	v->a[264088] = sym_variable_name;
	v->a[264089] = actions(12054);
	v->a[264090] = 1;
	v->a[264091] = anon_sym_RBRACE3;
	v->a[264092] = state(3532);
	v->a[264093] = 1;
	v->a[264094] = sym_subscript;
	v->a[264095] = state(6428);
	v->a[264096] = 1;
	v->a[264097] = aux_sym__expansion_body_repeat1;
	v->a[264098] = state(6472);
	v->a[264099] = 1;
	small_parse_table_13205(v);
}

/* EOF small_parse_table_2640.c */
