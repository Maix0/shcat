/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1170.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5850(t_small_parse_table_array *v)
{
	v->a[117000] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117001] = actions(169);
	v->a[117002] = 1;
	v->a[117003] = anon_sym_DQUOTE;
	v->a[117004] = actions(173);
	v->a[117005] = 1;
	v->a[117006] = aux_sym_number_token1;
	v->a[117007] = actions(175);
	v->a[117008] = 1;
	v->a[117009] = aux_sym_number_token2;
	v->a[117010] = actions(177);
	v->a[117011] = 1;
	v->a[117012] = anon_sym_DOLLAR_LBRACE;
	v->a[117013] = actions(179);
	v->a[117014] = 1;
	v->a[117015] = anon_sym_DOLLAR_LPAREN;
	v->a[117016] = actions(181);
	v->a[117017] = 1;
	v->a[117018] = anon_sym_BQUOTE;
	v->a[117019] = actions(183);
	small_parse_table_5851(v);
}

void	small_parse_table_5851(t_small_parse_table_array *v)
{
	v->a[117020] = 1;
	v->a[117021] = anon_sym_DOLLAR_BQUOTE;
	v->a[117022] = actions(189);
	v->a[117023] = 1;
	v->a[117024] = sym__brace_start;
	v->a[117025] = actions(6454);
	v->a[117026] = 1;
	v->a[117027] = sym_word;
	v->a[117028] = actions(6456);
	v->a[117029] = 1;
	v->a[117030] = sym__special_character;
	v->a[117031] = actions(6460);
	v->a[117032] = 1;
	v->a[117033] = sym__comment_word;
	v->a[117034] = actions(6871);
	v->a[117035] = 1;
	v->a[117036] = anon_sym_DOLLAR;
	v->a[117037] = actions(6458);
	v->a[117038] = 3;
	v->a[117039] = sym_test_operator;
	small_parse_table_5852(v);
}

void	small_parse_table_5852(t_small_parse_table_array *v)
{
	v->a[117040] = sym__bare_dollar;
	v->a[117041] = sym_raw_string;
	v->a[117042] = state(560);
	v->a[117043] = 7;
	v->a[117044] = sym_arithmetic_expansion;
	v->a[117045] = sym_brace_expression;
	v->a[117046] = sym_string;
	v->a[117047] = sym_number;
	v->a[117048] = sym_simple_expansion;
	v->a[117049] = sym_expansion;
	v->a[117050] = sym_command_substitution;
	v->a[117051] = 16;
	v->a[117052] = actions(3);
	v->a[117053] = 1;
	v->a[117054] = sym_comment;
	v->a[117055] = actions(1402);
	v->a[117056] = 1;
	v->a[117057] = aux_sym_number_token1;
	v->a[117058] = actions(1404);
	v->a[117059] = 1;
	small_parse_table_5853(v);
}

void	small_parse_table_5853(t_small_parse_table_array *v)
{
	v->a[117060] = aux_sym_number_token2;
	v->a[117061] = actions(1408);
	v->a[117062] = 1;
	v->a[117063] = anon_sym_DOLLAR_LPAREN;
	v->a[117064] = actions(1418);
	v->a[117065] = 1;
	v->a[117066] = sym__brace_start;
	v->a[117067] = actions(6360);
	v->a[117068] = 1;
	v->a[117069] = sym_word;
	v->a[117070] = actions(6362);
	v->a[117071] = 1;
	v->a[117072] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117073] = actions(6364);
	v->a[117074] = 1;
	v->a[117075] = sym__special_character;
	v->a[117076] = actions(6366);
	v->a[117077] = 1;
	v->a[117078] = anon_sym_DQUOTE;
	v->a[117079] = actions(6370);
	small_parse_table_5854(v);
}

void	small_parse_table_5854(t_small_parse_table_array *v)
{
	v->a[117080] = 1;
	v->a[117081] = anon_sym_DOLLAR_LBRACE;
	v->a[117082] = actions(6372);
	v->a[117083] = 1;
	v->a[117084] = anon_sym_BQUOTE;
	v->a[117085] = actions(6374);
	v->a[117086] = 1;
	v->a[117087] = anon_sym_DOLLAR_BQUOTE;
	v->a[117088] = actions(6376);
	v->a[117089] = 1;
	v->a[117090] = sym__comment_word;
	v->a[117091] = actions(6873);
	v->a[117092] = 1;
	v->a[117093] = anon_sym_DOLLAR;
	v->a[117094] = actions(6368);
	v->a[117095] = 3;
	v->a[117096] = sym_test_operator;
	v->a[117097] = sym__bare_dollar;
	v->a[117098] = sym_raw_string;
	v->a[117099] = state(813);
	small_parse_table_5855(v);
}

/* EOF small_parse_table_1170.c */
