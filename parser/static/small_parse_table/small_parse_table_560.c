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
	v->a[56000] = sym_string;
	v->a[56001] = sym_number;
	v->a[56002] = sym_simple_expansion;
	v->a[56003] = sym_expansion;
	v->a[56004] = state(568);
	v->a[56005] = 8;
	v->a[56006] = sym__arithmetic_expression;
	v->a[56007] = sym_arithmetic_literal;
	v->a[56008] = sym_arithmetic_binary_expression;
	v->a[56009] = sym_arithmetic_ternary_expression;
	v->a[56010] = sym_arithmetic_unary_expression;
	v->a[56011] = sym_arithmetic_postfix_expression;
	v->a[56012] = sym_arithmetic_parenthesized_expression;
	v->a[56013] = sym_command_substitution;
	v->a[56014] = 18;
	v->a[56015] = actions(1404);
	v->a[56016] = 1;
	v->a[56017] = sym_comment;
	v->a[56018] = actions(1979);
	v->a[56019] = 1;
	small_parse_table_2801(v);
}

void	small_parse_table_2801(t_small_parse_table_array *v)
{
	v->a[56020] = anon_sym_LPAREN;
	v->a[56021] = actions(1981);
	v->a[56022] = 1;
	v->a[56023] = anon_sym_BANG;
	v->a[56024] = actions(1989);
	v->a[56025] = 1;
	v->a[56026] = anon_sym_TILDE;
	v->a[56027] = actions(1991);
	v->a[56028] = 1;
	v->a[56029] = anon_sym_DOLLAR;
	v->a[56030] = actions(1993);
	v->a[56031] = 1;
	v->a[56032] = anon_sym_DQUOTE;
	v->a[56033] = actions(1995);
	v->a[56034] = 1;
	v->a[56035] = aux_sym_number_token1;
	v->a[56036] = actions(1997);
	v->a[56037] = 1;
	v->a[56038] = aux_sym_number_token2;
	v->a[56039] = actions(1999);
	small_parse_table_2802(v);
}

void	small_parse_table_2802(t_small_parse_table_array *v)
{
	v->a[56040] = 1;
	v->a[56041] = anon_sym_DOLLAR_LBRACE;
	v->a[56042] = actions(2001);
	v->a[56043] = 1;
	v->a[56044] = anon_sym_DOLLAR_LPAREN;
	v->a[56045] = actions(2003);
	v->a[56046] = 1;
	v->a[56047] = anon_sym_BQUOTE;
	v->a[56048] = actions(2005);
	v->a[56049] = 1;
	v->a[56050] = aux_sym__simple_variable_name_token1;
	v->a[56051] = actions(2007);
	v->a[56052] = 1;
	v->a[56053] = sym_variable_name;
	v->a[56054] = actions(2067);
	v->a[56055] = 1;
	v->a[56056] = anon_sym_RPAREN_RPAREN;
	v->a[56057] = actions(1985);
	v->a[56058] = 2;
	v->a[56059] = anon_sym_PLUS_PLUS;
	small_parse_table_2803(v);
}

void	small_parse_table_2803(t_small_parse_table_array *v)
{
	v->a[56060] = anon_sym_DASH_DASH;
	v->a[56061] = actions(1987);
	v->a[56062] = 2;
	v->a[56063] = anon_sym_DASH2;
	v->a[56064] = anon_sym_PLUS2;
	v->a[56065] = state(530);
	v->a[56066] = 4;
	v->a[56067] = sym_string;
	v->a[56068] = sym_number;
	v->a[56069] = sym_simple_expansion;
	v->a[56070] = sym_expansion;
	v->a[56071] = state(597);
	v->a[56072] = 8;
	v->a[56073] = sym__arithmetic_expression;
	v->a[56074] = sym_arithmetic_literal;
	v->a[56075] = sym_arithmetic_binary_expression;
	v->a[56076] = sym_arithmetic_ternary_expression;
	v->a[56077] = sym_arithmetic_unary_expression;
	v->a[56078] = sym_arithmetic_postfix_expression;
	v->a[56079] = sym_arithmetic_parenthesized_expression;
	small_parse_table_2804(v);
}

void	small_parse_table_2804(t_small_parse_table_array *v)
{
	v->a[56080] = sym_command_substitution;
	v->a[56081] = 3;
	v->a[56082] = actions(3);
	v->a[56083] = 1;
	v->a[56084] = sym_comment;
	v->a[56085] = actions(1255);
	v->a[56086] = 3;
	v->a[56087] = sym_file_descriptor;
	v->a[56088] = sym__concat;
	v->a[56089] = sym_variable_name;
	v->a[56090] = actions(1257);
	v->a[56091] = 26;
	v->a[56092] = anon_sym_PIPE;
	v->a[56093] = anon_sym_AMP_AMP;
	v->a[56094] = anon_sym_PIPE_PIPE;
	v->a[56095] = anon_sym_LT;
	v->a[56096] = anon_sym_GT;
	v->a[56097] = anon_sym_GT_GT;
	v->a[56098] = anon_sym_AMP_GT;
	v->a[56099] = anon_sym_AMP_GT_GT;
	small_parse_table_2805(v);
}

/* EOF small_parse_table_560.c */
