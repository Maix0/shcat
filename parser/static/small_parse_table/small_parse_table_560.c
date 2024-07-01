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
	v->a[56000] = anon_sym_GT_AMP_DASH;
	v->a[56001] = anon_sym_LT_LT;
	v->a[56002] = anon_sym_LT_LT_DASH;
	v->a[56003] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56004] = aux_sym_concatenation_token1;
	v->a[56005] = anon_sym_DOLLAR;
	v->a[56006] = anon_sym_DQUOTE;
	v->a[56007] = sym_raw_string;
	v->a[56008] = sym_number;
	v->a[56009] = anon_sym_DOLLAR_LBRACE;
	v->a[56010] = anon_sym_DOLLAR_LPAREN;
	v->a[56011] = anon_sym_BQUOTE;
	v->a[56012] = sym_word;
	v->a[56013] = 15;
	v->a[56014] = actions(870);
	v->a[56015] = 1;
	v->a[56016] = sym_comment;
	v->a[56017] = actions(1921);
	v->a[56018] = 1;
	v->a[56019] = anon_sym_LPAREN;
	small_parse_table_2801(v);
}

void	small_parse_table_2801(t_small_parse_table_array *v)
{
	v->a[56020] = actions(1923);
	v->a[56021] = 1;
	v->a[56022] = anon_sym_BANG;
	v->a[56023] = actions(1929);
	v->a[56024] = 1;
	v->a[56025] = anon_sym_TILDE;
	v->a[56026] = actions(1931);
	v->a[56027] = 1;
	v->a[56028] = anon_sym_DOLLAR;
	v->a[56029] = actions(1933);
	v->a[56030] = 1;
	v->a[56031] = anon_sym_DQUOTE;
	v->a[56032] = actions(1937);
	v->a[56033] = 1;
	v->a[56034] = anon_sym_DOLLAR_LBRACE;
	v->a[56035] = actions(1939);
	v->a[56036] = 1;
	v->a[56037] = anon_sym_DOLLAR_LPAREN;
	v->a[56038] = actions(1941);
	v->a[56039] = 1;
	small_parse_table_2802(v);
}

void	small_parse_table_2802(t_small_parse_table_array *v)
{
	v->a[56040] = anon_sym_BQUOTE;
	v->a[56041] = actions(1943);
	v->a[56042] = 1;
	v->a[56043] = sym_variable_name;
	v->a[56044] = actions(1925);
	v->a[56045] = 2;
	v->a[56046] = anon_sym_PLUS_PLUS;
	v->a[56047] = anon_sym_DASH_DASH;
	v->a[56048] = actions(1927);
	v->a[56049] = 2;
	v->a[56050] = anon_sym_DASH2;
	v->a[56051] = anon_sym_PLUS2;
	v->a[56052] = actions(1935);
	v->a[56053] = 2;
	v->a[56054] = sym_number;
	v->a[56055] = aux_sym__simple_variable_name_token1;
	v->a[56056] = state(334);
	v->a[56057] = 3;
	v->a[56058] = sym_string;
	v->a[56059] = sym_simple_expansion;
	small_parse_table_2803(v);
}

void	small_parse_table_2803(t_small_parse_table_array *v)
{
	v->a[56060] = sym_expansion;
	v->a[56061] = state(347);
	v->a[56062] = 8;
	v->a[56063] = sym__arithmetic_expression;
	v->a[56064] = sym_arithmetic_literal;
	v->a[56065] = sym_arithmetic_binary_expression;
	v->a[56066] = sym_arithmetic_ternary_expression;
	v->a[56067] = sym_arithmetic_unary_expression;
	v->a[56068] = sym_arithmetic_postfix_expression;
	v->a[56069] = sym_arithmetic_parenthesized_expression;
	v->a[56070] = sym_command_substitution;
	v->a[56071] = 15;
	v->a[56072] = actions(870);
	v->a[56073] = 1;
	v->a[56074] = sym_comment;
	v->a[56075] = actions(1921);
	v->a[56076] = 1;
	v->a[56077] = anon_sym_LPAREN;
	v->a[56078] = actions(1923);
	v->a[56079] = 1;
	small_parse_table_2804(v);
}

void	small_parse_table_2804(t_small_parse_table_array *v)
{
	v->a[56080] = anon_sym_BANG;
	v->a[56081] = actions(1929);
	v->a[56082] = 1;
	v->a[56083] = anon_sym_TILDE;
	v->a[56084] = actions(1931);
	v->a[56085] = 1;
	v->a[56086] = anon_sym_DOLLAR;
	v->a[56087] = actions(1933);
	v->a[56088] = 1;
	v->a[56089] = anon_sym_DQUOTE;
	v->a[56090] = actions(1937);
	v->a[56091] = 1;
	v->a[56092] = anon_sym_DOLLAR_LBRACE;
	v->a[56093] = actions(1939);
	v->a[56094] = 1;
	v->a[56095] = anon_sym_DOLLAR_LPAREN;
	v->a[56096] = actions(1941);
	v->a[56097] = 1;
	v->a[56098] = anon_sym_BQUOTE;
	v->a[56099] = actions(1943);
	small_parse_table_2805(v);
}

/* EOF small_parse_table_560.c */
