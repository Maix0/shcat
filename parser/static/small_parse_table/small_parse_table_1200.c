/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1200.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6000(t_small_parse_table_array *v)
{
	v->a[120000] = anon_sym_DOLLAR_BQUOTE;
	v->a[120001] = actions(6827);
	v->a[120002] = 1;
	v->a[120003] = sym__comment_word;
	v->a[120004] = actions(6999);
	v->a[120005] = 1;
	v->a[120006] = anon_sym_DOLLAR;
	v->a[120007] = actions(6819);
	v->a[120008] = 3;
	v->a[120009] = sym_test_operator;
	v->a[120010] = sym__bare_dollar;
	v->a[120011] = sym_raw_string;
	v->a[120012] = state(2035);
	v->a[120013] = 7;
	v->a[120014] = sym_arithmetic_expansion;
	v->a[120015] = sym_brace_expression;
	v->a[120016] = sym_string;
	v->a[120017] = sym_number;
	v->a[120018] = sym_simple_expansion;
	v->a[120019] = sym_expansion;
	small_parse_table_6001(v);
}

void	small_parse_table_6001(t_small_parse_table_array *v)
{
	v->a[120020] = sym_command_substitution;
	v->a[120021] = 16;
	v->a[120022] = actions(3);
	v->a[120023] = 1;
	v->a[120024] = sym_comment;
	v->a[120025] = actions(1254);
	v->a[120026] = 1;
	v->a[120027] = anon_sym_DOLLAR;
	v->a[120028] = actions(1260);
	v->a[120029] = 1;
	v->a[120030] = aux_sym_number_token1;
	v->a[120031] = actions(1262);
	v->a[120032] = 1;
	v->a[120033] = aux_sym_number_token2;
	v->a[120034] = actions(1266);
	v->a[120035] = 1;
	v->a[120036] = anon_sym_DOLLAR_LPAREN;
	v->a[120037] = actions(1276);
	v->a[120038] = 1;
	v->a[120039] = sym__brace_start;
	small_parse_table_6002(v);
}

void	small_parse_table_6002(t_small_parse_table_array *v)
{
	v->a[120040] = actions(6879);
	v->a[120041] = 1;
	v->a[120042] = sym_word;
	v->a[120043] = actions(6881);
	v->a[120044] = 1;
	v->a[120045] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120046] = actions(6885);
	v->a[120047] = 1;
	v->a[120048] = sym__special_character;
	v->a[120049] = actions(6887);
	v->a[120050] = 1;
	v->a[120051] = anon_sym_DQUOTE;
	v->a[120052] = actions(6891);
	v->a[120053] = 1;
	v->a[120054] = anon_sym_DOLLAR_LBRACE;
	v->a[120055] = actions(6893);
	v->a[120056] = 1;
	v->a[120057] = anon_sym_BQUOTE;
	v->a[120058] = actions(6895);
	v->a[120059] = 1;
	small_parse_table_6003(v);
}

void	small_parse_table_6003(t_small_parse_table_array *v)
{
	v->a[120060] = anon_sym_DOLLAR_BQUOTE;
	v->a[120061] = actions(6897);
	v->a[120062] = 1;
	v->a[120063] = sym__comment_word;
	v->a[120064] = actions(6889);
	v->a[120065] = 3;
	v->a[120066] = sym_test_operator;
	v->a[120067] = sym__bare_dollar;
	v->a[120068] = sym_raw_string;
	v->a[120069] = state(1005);
	v->a[120070] = 7;
	v->a[120071] = sym_arithmetic_expansion;
	v->a[120072] = sym_brace_expression;
	v->a[120073] = sym_string;
	v->a[120074] = sym_number;
	v->a[120075] = sym_simple_expansion;
	v->a[120076] = sym_expansion;
	v->a[120077] = sym_command_substitution;
	v->a[120078] = 16;
	v->a[120079] = actions(3);
	small_parse_table_6004(v);
}

void	small_parse_table_6004(t_small_parse_table_array *v)
{
	v->a[120080] = 1;
	v->a[120081] = sym_comment;
	v->a[120082] = actions(3889);
	v->a[120083] = 1;
	v->a[120084] = aux_sym_number_token1;
	v->a[120085] = actions(3891);
	v->a[120086] = 1;
	v->a[120087] = aux_sym_number_token2;
	v->a[120088] = actions(3895);
	v->a[120089] = 1;
	v->a[120090] = anon_sym_DOLLAR_LPAREN;
	v->a[120091] = actions(3903);
	v->a[120092] = 1;
	v->a[120093] = sym__brace_start;
	v->a[120094] = actions(6475);
	v->a[120095] = 1;
	v->a[120096] = sym_word;
	v->a[120097] = actions(6477);
	v->a[120098] = 1;
	v->a[120099] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_6005(v);
}

/* EOF small_parse_table_1200.c */
