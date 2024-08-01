/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_380.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1900(t_small_parse_table_array *v)
{
	v->a[38000] = actions(1605);
	v->a[38001] = 1;
	v->a[38002] = anon_sym_DOLLAR_LPAREN;
	v->a[38003] = actions(1607);
	v->a[38004] = 1;
	v->a[38005] = anon_sym_BQUOTE;
	v->a[38006] = actions(1721);
	v->a[38007] = 1;
	v->a[38008] = sym__bare_dollar;
	v->a[38009] = actions(1719);
	v->a[38010] = 5;
	v->a[38011] = aux_sym_concatenation_token1;
	v->a[38012] = sym_raw_string;
	v->a[38013] = sym_number;
	v->a[38014] = sym__comment_word;
	v->a[38015] = sym_word;
	v->a[38016] = state(669);
	v->a[38017] = 5;
	v->a[38018] = sym_arithmetic_expansion;
	v->a[38019] = sym_string;
	small_parse_table_1901(v);
}

void	small_parse_table_1901(t_small_parse_table_array *v)
{
	v->a[38020] = sym_simple_expansion;
	v->a[38021] = sym_expansion;
	v->a[38022] = sym_command_substitution;
	v->a[38023] = 10;
	v->a[38024] = actions(3);
	v->a[38025] = 1;
	v->a[38026] = sym_comment;
	v->a[38027] = actions(1625);
	v->a[38028] = 1;
	v->a[38029] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38030] = actions(1627);
	v->a[38031] = 1;
	v->a[38032] = anon_sym_DOLLAR;
	v->a[38033] = actions(1629);
	v->a[38034] = 1;
	v->a[38035] = anon_sym_DQUOTE;
	v->a[38036] = actions(1631);
	v->a[38037] = 1;
	v->a[38038] = anon_sym_DOLLAR_LBRACE;
	v->a[38039] = actions(1633);
	small_parse_table_1902(v);
}

void	small_parse_table_1902(t_small_parse_table_array *v)
{
	v->a[38040] = 1;
	v->a[38041] = anon_sym_DOLLAR_LPAREN;
	v->a[38042] = actions(1635);
	v->a[38043] = 1;
	v->a[38044] = anon_sym_BQUOTE;
	v->a[38045] = actions(1701);
	v->a[38046] = 1;
	v->a[38047] = sym__bare_dollar;
	v->a[38048] = actions(1697);
	v->a[38049] = 5;
	v->a[38050] = aux_sym_concatenation_token1;
	v->a[38051] = sym_raw_string;
	v->a[38052] = sym_number;
	v->a[38053] = sym__comment_word;
	v->a[38054] = sym_word;
	v->a[38055] = state(311);
	v->a[38056] = 5;
	v->a[38057] = sym_arithmetic_expansion;
	v->a[38058] = sym_string;
	v->a[38059] = sym_simple_expansion;
	small_parse_table_1903(v);
}

void	small_parse_table_1903(t_small_parse_table_array *v)
{
	v->a[38060] = sym_expansion;
	v->a[38061] = sym_command_substitution;
	v->a[38062] = 10;
	v->a[38063] = actions(3);
	v->a[38064] = 1;
	v->a[38065] = sym_comment;
	v->a[38066] = actions(1597);
	v->a[38067] = 1;
	v->a[38068] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38069] = actions(1601);
	v->a[38070] = 1;
	v->a[38071] = anon_sym_DQUOTE;
	v->a[38072] = actions(1603);
	v->a[38073] = 1;
	v->a[38074] = anon_sym_DOLLAR_LBRACE;
	v->a[38075] = actions(1605);
	v->a[38076] = 1;
	v->a[38077] = anon_sym_DOLLAR_LPAREN;
	v->a[38078] = actions(1607);
	v->a[38079] = 1;
	small_parse_table_1904(v);
}

void	small_parse_table_1904(t_small_parse_table_array *v)
{
	v->a[38080] = anon_sym_BQUOTE;
	v->a[38081] = actions(1721);
	v->a[38082] = 1;
	v->a[38083] = sym__bare_dollar;
	v->a[38084] = actions(1723);
	v->a[38085] = 1;
	v->a[38086] = anon_sym_DOLLAR;
	v->a[38087] = actions(1719);
	v->a[38088] = 5;
	v->a[38089] = aux_sym_concatenation_token1;
	v->a[38090] = sym_raw_string;
	v->a[38091] = sym_number;
	v->a[38092] = sym__comment_word;
	v->a[38093] = sym_word;
	v->a[38094] = state(669);
	v->a[38095] = 5;
	v->a[38096] = sym_arithmetic_expansion;
	v->a[38097] = sym_string;
	v->a[38098] = sym_simple_expansion;
	v->a[38099] = sym_expansion;
	small_parse_table_1905(v);
}

/* EOF small_parse_table_380.c */
