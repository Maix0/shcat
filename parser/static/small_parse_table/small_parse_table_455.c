/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_455.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2275(t_small_parse_table_array *v)
{
	v->a[45500] = anon_sym_BQUOTE;
	v->a[45501] = sym_word;
	v->a[45502] = 16;
	v->a[45503] = actions(680);
	v->a[45504] = 1;
	v->a[45505] = sym_comment;
	v->a[45506] = actions(1574);
	v->a[45507] = 1;
	v->a[45508] = anon_sym_LPAREN;
	v->a[45509] = actions(1576);
	v->a[45510] = 1;
	v->a[45511] = anon_sym_BANG;
	v->a[45512] = actions(1584);
	v->a[45513] = 1;
	v->a[45514] = anon_sym_TILDE;
	v->a[45515] = actions(1586);
	v->a[45516] = 1;
	v->a[45517] = anon_sym_DOLLAR;
	v->a[45518] = actions(1588);
	v->a[45519] = 1;
	small_parse_table_2276(v);
}

void	small_parse_table_2276(t_small_parse_table_array *v)
{
	v->a[45520] = anon_sym_DQUOTE;
	v->a[45521] = actions(1592);
	v->a[45522] = 1;
	v->a[45523] = anon_sym_DOLLAR_LBRACE;
	v->a[45524] = actions(1594);
	v->a[45525] = 1;
	v->a[45526] = anon_sym_DOLLAR_LPAREN;
	v->a[45527] = actions(1596);
	v->a[45528] = 1;
	v->a[45529] = anon_sym_BQUOTE;
	v->a[45530] = actions(1598);
	v->a[45531] = 1;
	v->a[45532] = sym_variable_name;
	v->a[45533] = actions(1659);
	v->a[45534] = 1;
	v->a[45535] = anon_sym_RPAREN_RPAREN;
	v->a[45536] = actions(1580);
	v->a[45537] = 2;
	v->a[45538] = anon_sym_PLUS_PLUS;
	v->a[45539] = anon_sym_DASH_DASH;
	small_parse_table_2277(v);
}

void	small_parse_table_2277(t_small_parse_table_array *v)
{
	v->a[45540] = actions(1582);
	v->a[45541] = 2;
	v->a[45542] = anon_sym_DASH2;
	v->a[45543] = anon_sym_PLUS2;
	v->a[45544] = actions(1590);
	v->a[45545] = 2;
	v->a[45546] = sym_number;
	v->a[45547] = aux_sym__simple_variable_name_token1;
	v->a[45548] = state(238);
	v->a[45549] = 3;
	v->a[45550] = sym_string;
	v->a[45551] = sym_simple_expansion;
	v->a[45552] = sym_expansion;
	v->a[45553] = state(341);
	v->a[45554] = 8;
	v->a[45555] = sym__arithmetic_expression;
	v->a[45556] = sym_arithmetic_literal;
	v->a[45557] = sym_arithmetic_binary_expression;
	v->a[45558] = sym_arithmetic_ternary_expression;
	v->a[45559] = sym_arithmetic_unary_expression;
	small_parse_table_2278(v);
}

void	small_parse_table_2278(t_small_parse_table_array *v)
{
	v->a[45560] = sym_arithmetic_postfix_expression;
	v->a[45561] = sym_arithmetic_parenthesized_expression;
	v->a[45562] = sym_command_substitution;
	v->a[45563] = 4;
	v->a[45564] = actions(3);
	v->a[45565] = 1;
	v->a[45566] = sym_comment;
	v->a[45567] = actions(1661);
	v->a[45568] = 1;
	v->a[45569] = ts_builtin_sym_end;
	v->a[45570] = actions(1426);
	v->a[45571] = 2;
	v->a[45572] = sym_file_descriptor;
	v->a[45573] = sym_variable_name;
	v->a[45574] = actions(1422);
	v->a[45575] = 24;
	v->a[45576] = anon_sym_for;
	v->a[45577] = anon_sym_while;
	v->a[45578] = anon_sym_until;
	v->a[45579] = anon_sym_if;
	small_parse_table_2279(v);
}

void	small_parse_table_2279(t_small_parse_table_array *v)
{
	v->a[45580] = anon_sym_case;
	v->a[45581] = anon_sym_LPAREN;
	v->a[45582] = anon_sym_LBRACE;
	v->a[45583] = anon_sym_BANG;
	v->a[45584] = anon_sym_LT;
	v->a[45585] = anon_sym_GT;
	v->a[45586] = anon_sym_GT_GT;
	v->a[45587] = anon_sym_LT_AMP;
	v->a[45588] = anon_sym_GT_AMP;
	v->a[45589] = anon_sym_GT_PIPE;
	v->a[45590] = anon_sym_LT_GT;
	v->a[45591] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45592] = anon_sym_DOLLAR;
	v->a[45593] = anon_sym_DQUOTE;
	v->a[45594] = sym_raw_string;
	v->a[45595] = sym_number;
	v->a[45596] = anon_sym_DOLLAR_LBRACE;
	v->a[45597] = anon_sym_DOLLAR_LPAREN;
	v->a[45598] = anon_sym_BQUOTE;
	v->a[45599] = sym_word;
	small_parse_table_2280(v);
}

/* EOF small_parse_table_455.c */
