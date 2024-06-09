/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_600.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3000(t_small_parse_table_array *v)
{
	v->a[60000] = anon_sym_PIPE;
	v->a[60001] = anon_sym_AMP_AMP;
	v->a[60002] = anon_sym_PIPE_PIPE;
	v->a[60003] = anon_sym_LT;
	v->a[60004] = anon_sym_GT;
	v->a[60005] = anon_sym_GT_GT;
	v->a[60006] = anon_sym_AMP_GT;
	v->a[60007] = anon_sym_AMP_GT_GT;
	v->a[60008] = anon_sym_LT_AMP;
	v->a[60009] = anon_sym_GT_AMP;
	v->a[60010] = anon_sym_GT_PIPE;
	v->a[60011] = anon_sym_LT_AMP_DASH;
	v->a[60012] = anon_sym_GT_AMP_DASH;
	v->a[60013] = anon_sym_LT_LT;
	v->a[60014] = anon_sym_LT_LT_DASH;
	v->a[60015] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60016] = aux_sym_concatenation_token1;
	v->a[60017] = anon_sym_DOLLAR;
	v->a[60018] = anon_sym_DQUOTE;
	v->a[60019] = sym_raw_string;
	small_parse_table_3001(v);
}

void	small_parse_table_3001(t_small_parse_table_array *v)
{
	v->a[60020] = aux_sym_number_token1;
	v->a[60021] = aux_sym_number_token2;
	v->a[60022] = anon_sym_DOLLAR_LBRACE;
	v->a[60023] = anon_sym_DOLLAR_LPAREN;
	v->a[60024] = anon_sym_BQUOTE;
	v->a[60025] = sym_word;
	v->a[60026] = 17;
	v->a[60027] = actions(1404);
	v->a[60028] = 1;
	v->a[60029] = sym_comment;
	v->a[60030] = actions(1979);
	v->a[60031] = 1;
	v->a[60032] = anon_sym_LPAREN;
	v->a[60033] = actions(1981);
	v->a[60034] = 1;
	v->a[60035] = anon_sym_BANG;
	v->a[60036] = actions(1989);
	v->a[60037] = 1;
	v->a[60038] = anon_sym_TILDE;
	v->a[60039] = actions(1991);
	small_parse_table_3002(v);
}

void	small_parse_table_3002(t_small_parse_table_array *v)
{
	v->a[60040] = 1;
	v->a[60041] = anon_sym_DOLLAR;
	v->a[60042] = actions(1993);
	v->a[60043] = 1;
	v->a[60044] = anon_sym_DQUOTE;
	v->a[60045] = actions(1995);
	v->a[60046] = 1;
	v->a[60047] = aux_sym_number_token1;
	v->a[60048] = actions(1997);
	v->a[60049] = 1;
	v->a[60050] = aux_sym_number_token2;
	v->a[60051] = actions(1999);
	v->a[60052] = 1;
	v->a[60053] = anon_sym_DOLLAR_LBRACE;
	v->a[60054] = actions(2001);
	v->a[60055] = 1;
	v->a[60056] = anon_sym_DOLLAR_LPAREN;
	v->a[60057] = actions(2003);
	v->a[60058] = 1;
	v->a[60059] = anon_sym_BQUOTE;
	small_parse_table_3003(v);
}

void	small_parse_table_3003(t_small_parse_table_array *v)
{
	v->a[60060] = actions(2005);
	v->a[60061] = 1;
	v->a[60062] = aux_sym__simple_variable_name_token1;
	v->a[60063] = actions(2007);
	v->a[60064] = 1;
	v->a[60065] = sym_variable_name;
	v->a[60066] = actions(1985);
	v->a[60067] = 2;
	v->a[60068] = anon_sym_PLUS_PLUS;
	v->a[60069] = anon_sym_DASH_DASH;
	v->a[60070] = actions(1987);
	v->a[60071] = 2;
	v->a[60072] = anon_sym_DASH2;
	v->a[60073] = anon_sym_PLUS2;
	v->a[60074] = state(530);
	v->a[60075] = 4;
	v->a[60076] = sym_string;
	v->a[60077] = sym_number;
	v->a[60078] = sym_simple_expansion;
	v->a[60079] = sym_expansion;
	small_parse_table_3004(v);
}

void	small_parse_table_3004(t_small_parse_table_array *v)
{
	v->a[60080] = state(410);
	v->a[60081] = 8;
	v->a[60082] = sym__arithmetic_expression;
	v->a[60083] = sym_arithmetic_literal;
	v->a[60084] = sym_arithmetic_binary_expression;
	v->a[60085] = sym_arithmetic_ternary_expression;
	v->a[60086] = sym_arithmetic_unary_expression;
	v->a[60087] = sym_arithmetic_postfix_expression;
	v->a[60088] = sym_arithmetic_parenthesized_expression;
	v->a[60089] = sym_command_substitution;
	v->a[60090] = 3;
	v->a[60091] = actions(3);
	v->a[60092] = 1;
	v->a[60093] = sym_comment;
	v->a[60094] = actions(1315);
	v->a[60095] = 2;
	v->a[60096] = sym_file_descriptor;
	v->a[60097] = sym__concat;
	v->a[60098] = actions(1313);
	v->a[60099] = 26;
	small_parse_table_3005(v);
}

/* EOF small_parse_table_600.c */
