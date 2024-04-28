/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2220.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11100(t_small_parse_table_array *v)
{
	v->a[222000] = actions(7964);
	v->a[222001] = 1;
	v->a[222002] = anon_sym_DQUOTE;
	v->a[222003] = actions(7968);
	v->a[222004] = 1;
	v->a[222005] = aux_sym_number_token1;
	v->a[222006] = actions(7970);
	v->a[222007] = 1;
	v->a[222008] = aux_sym_number_token2;
	v->a[222009] = actions(7972);
	v->a[222010] = 1;
	v->a[222011] = anon_sym_DOLLAR_LBRACE;
	v->a[222012] = actions(7974);
	v->a[222013] = 1;
	v->a[222014] = anon_sym_DOLLAR_LPAREN;
	v->a[222015] = actions(7976);
	v->a[222016] = 1;
	v->a[222017] = anon_sym_BQUOTE;
	v->a[222018] = actions(7978);
	v->a[222019] = 1;
	small_parse_table_11101(v);
}

void	small_parse_table_11101(t_small_parse_table_array *v)
{
	v->a[222020] = anon_sym_DOLLAR_BQUOTE;
	v->a[222021] = actions(7988);
	v->a[222022] = 1;
	v->a[222023] = sym__brace_start;
	v->a[222024] = actions(9860);
	v->a[222025] = 1;
	v->a[222026] = sym_word;
	v->a[222027] = actions(9868);
	v->a[222028] = 1;
	v->a[222029] = sym__comment_word;
	v->a[222030] = actions(10616);
	v->a[222031] = 1;
	v->a[222032] = anon_sym_DOLLAR;
	v->a[222033] = actions(7954);
	v->a[222034] = 2;
	v->a[222035] = anon_sym_LPAREN_LPAREN;
	v->a[222036] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[222037] = actions(7980);
	v->a[222038] = 2;
	v->a[222039] = anon_sym_LT_LPAREN;
	small_parse_table_11102(v);
}

void	small_parse_table_11102(t_small_parse_table_array *v)
{
	v->a[222040] = anon_sym_GT_LPAREN;
	v->a[222041] = actions(9864);
	v->a[222042] = 2;
	v->a[222043] = sym_test_operator;
	v->a[222044] = sym__special_character;
	v->a[222045] = actions(9866);
	v->a[222046] = 3;
	v->a[222047] = sym__bare_dollar;
	v->a[222048] = sym_raw_string;
	v->a[222049] = sym_ansi_c_string;
	v->a[222050] = state(4357);
	v->a[222051] = 9;
	v->a[222052] = sym_arithmetic_expansion;
	v->a[222053] = sym_brace_expression;
	v->a[222054] = sym_string;
	v->a[222055] = sym_translated_string;
	v->a[222056] = sym_number;
	v->a[222057] = sym_simple_expansion;
	v->a[222058] = sym_expansion;
	v->a[222059] = sym_command_substitution;
	small_parse_table_11103(v);
}

void	small_parse_table_11103(t_small_parse_table_array *v)
{
	v->a[222060] = sym_process_substitution;
	v->a[222061] = 21;
	v->a[222062] = actions(71);
	v->a[222063] = 1;
	v->a[222064] = sym_comment;
	v->a[222065] = actions(9364);
	v->a[222066] = 1;
	v->a[222067] = anon_sym_LPAREN;
	v->a[222068] = actions(9366);
	v->a[222069] = 1;
	v->a[222070] = anon_sym_BANG;
	v->a[222071] = actions(9372);
	v->a[222072] = 1;
	v->a[222073] = anon_sym_TILDE;
	v->a[222074] = actions(9374);
	v->a[222075] = 1;
	v->a[222076] = anon_sym_DOLLAR;
	v->a[222077] = actions(9376);
	v->a[222078] = 1;
	v->a[222079] = anon_sym_DQUOTE;
	small_parse_table_11104(v);
}

void	small_parse_table_11104(t_small_parse_table_array *v)
{
	v->a[222080] = actions(9378);
	v->a[222081] = 1;
	v->a[222082] = aux_sym_number_token1;
	v->a[222083] = actions(9380);
	v->a[222084] = 1;
	v->a[222085] = aux_sym_number_token2;
	v->a[222086] = actions(9382);
	v->a[222087] = 1;
	v->a[222088] = anon_sym_DOLLAR_LBRACE;
	v->a[222089] = actions(9384);
	v->a[222090] = 1;
	v->a[222091] = anon_sym_DOLLAR_LPAREN;
	v->a[222092] = actions(9386);
	v->a[222093] = 1;
	v->a[222094] = anon_sym_BQUOTE;
	v->a[222095] = actions(9388);
	v->a[222096] = 1;
	v->a[222097] = anon_sym_DOLLAR_BQUOTE;
	v->a[222098] = actions(9392);
	v->a[222099] = 1;
	small_parse_table_11105(v);
}

/* EOF small_parse_table_2220.c */
