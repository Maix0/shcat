/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_560.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2800(t_small_parse_table_array *v)
{
	v->a[56000] = actions(1843);
	v->a[56001] = 1;
	v->a[56002] = anon_sym_DOLLAR;
	v->a[56003] = actions(1845);
	v->a[56004] = 1;
	v->a[56005] = anon_sym_DQUOTE;
	v->a[56006] = actions(1849);
	v->a[56007] = 1;
	v->a[56008] = anon_sym_DOLLAR_LBRACE;
	v->a[56009] = actions(1851);
	v->a[56010] = 1;
	v->a[56011] = anon_sym_DOLLAR_LPAREN;
	v->a[56012] = actions(1853);
	v->a[56013] = 1;
	v->a[56014] = anon_sym_BQUOTE;
	v->a[56015] = actions(1855);
	v->a[56016] = 1;
	v->a[56017] = sym_variable_name;
	v->a[56018] = actions(1907);
	v->a[56019] = 1;
	small_parse_table_2801(v);
}

void	small_parse_table_2801(t_small_parse_table_array *v)
{
	v->a[56020] = anon_sym_RPAREN_RPAREN;
	v->a[56021] = actions(1837);
	v->a[56022] = 2;
	v->a[56023] = anon_sym_PLUS_PLUS;
	v->a[56024] = anon_sym_DASH_DASH;
	v->a[56025] = actions(1839);
	v->a[56026] = 2;
	v->a[56027] = anon_sym_DASH2;
	v->a[56028] = anon_sym_PLUS2;
	v->a[56029] = actions(1847);
	v->a[56030] = 2;
	v->a[56031] = sym_number;
	v->a[56032] = aux_sym__simple_variable_name_token1;
	v->a[56033] = state(370);
	v->a[56034] = 3;
	v->a[56035] = sym_string;
	v->a[56036] = sym_simple_expansion;
	v->a[56037] = sym_expansion;
	v->a[56038] = state(591);
	v->a[56039] = 8;
	small_parse_table_2802(v);
}

void	small_parse_table_2802(t_small_parse_table_array *v)
{
	v->a[56040] = sym__arithmetic_expression;
	v->a[56041] = sym_arithmetic_literal;
	v->a[56042] = sym_arithmetic_binary_expression;
	v->a[56043] = sym_arithmetic_ternary_expression;
	v->a[56044] = sym_arithmetic_unary_expression;
	v->a[56045] = sym_arithmetic_postfix_expression;
	v->a[56046] = sym_arithmetic_parenthesized_expression;
	v->a[56047] = sym_command_substitution;
	v->a[56048] = 16;
	v->a[56049] = actions(1074);
	v->a[56050] = 1;
	v->a[56051] = sym_comment;
	v->a[56052] = actions(1831);
	v->a[56053] = 1;
	v->a[56054] = anon_sym_LPAREN;
	v->a[56055] = actions(1833);
	v->a[56056] = 1;
	v->a[56057] = anon_sym_BANG;
	v->a[56058] = actions(1841);
	v->a[56059] = 1;
	small_parse_table_2803(v);
}

void	small_parse_table_2803(t_small_parse_table_array *v)
{
	v->a[56060] = anon_sym_TILDE;
	v->a[56061] = actions(1843);
	v->a[56062] = 1;
	v->a[56063] = anon_sym_DOLLAR;
	v->a[56064] = actions(1845);
	v->a[56065] = 1;
	v->a[56066] = anon_sym_DQUOTE;
	v->a[56067] = actions(1849);
	v->a[56068] = 1;
	v->a[56069] = anon_sym_DOLLAR_LBRACE;
	v->a[56070] = actions(1851);
	v->a[56071] = 1;
	v->a[56072] = anon_sym_DOLLAR_LPAREN;
	v->a[56073] = actions(1853);
	v->a[56074] = 1;
	v->a[56075] = anon_sym_BQUOTE;
	v->a[56076] = actions(1855);
	v->a[56077] = 1;
	v->a[56078] = sym_variable_name;
	v->a[56079] = actions(1909);
	small_parse_table_2804(v);
}

void	small_parse_table_2804(t_small_parse_table_array *v)
{
	v->a[56080] = 1;
	v->a[56081] = anon_sym_RPAREN_RPAREN;
	v->a[56082] = actions(1837);
	v->a[56083] = 2;
	v->a[56084] = anon_sym_PLUS_PLUS;
	v->a[56085] = anon_sym_DASH_DASH;
	v->a[56086] = actions(1839);
	v->a[56087] = 2;
	v->a[56088] = anon_sym_DASH2;
	v->a[56089] = anon_sym_PLUS2;
	v->a[56090] = actions(1847);
	v->a[56091] = 2;
	v->a[56092] = sym_number;
	v->a[56093] = aux_sym__simple_variable_name_token1;
	v->a[56094] = state(370);
	v->a[56095] = 3;
	v->a[56096] = sym_string;
	v->a[56097] = sym_simple_expansion;
	v->a[56098] = sym_expansion;
	v->a[56099] = state(453);
	small_parse_table_2805(v);
}

/* EOF small_parse_table_560.c */
