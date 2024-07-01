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
	v->a[45500] = actions(1582);
	v->a[45501] = 1;
	v->a[45502] = anon_sym_BQUOTE;
	v->a[45503] = actions(1584);
	v->a[45504] = 1;
	v->a[45505] = sym_variable_name;
	v->a[45506] = actions(1664);
	v->a[45507] = 1;
	v->a[45508] = anon_sym_RPAREN_RPAREN;
	v->a[45509] = actions(1566);
	v->a[45510] = 2;
	v->a[45511] = anon_sym_PLUS_PLUS;
	v->a[45512] = anon_sym_DASH_DASH;
	v->a[45513] = actions(1568);
	v->a[45514] = 2;
	v->a[45515] = anon_sym_DASH2;
	v->a[45516] = anon_sym_PLUS2;
	v->a[45517] = actions(1576);
	v->a[45518] = 2;
	v->a[45519] = sym_number;
	small_parse_table_2276(v);
}

void	small_parse_table_2276(t_small_parse_table_array *v)
{
	v->a[45520] = aux_sym__simple_variable_name_token1;
	v->a[45521] = state(255);
	v->a[45522] = 3;
	v->a[45523] = sym_string;
	v->a[45524] = sym_simple_expansion;
	v->a[45525] = sym_expansion;
	v->a[45526] = state(298);
	v->a[45527] = 8;
	v->a[45528] = sym__arithmetic_expression;
	v->a[45529] = sym_arithmetic_literal;
	v->a[45530] = sym_arithmetic_binary_expression;
	v->a[45531] = sym_arithmetic_ternary_expression;
	v->a[45532] = sym_arithmetic_unary_expression;
	v->a[45533] = sym_arithmetic_postfix_expression;
	v->a[45534] = sym_arithmetic_parenthesized_expression;
	v->a[45535] = sym_command_substitution;
	v->a[45536] = 12;
	v->a[45537] = actions(3);
	v->a[45538] = 1;
	v->a[45539] = sym_comment;
	small_parse_table_2277(v);
}

void	small_parse_table_2277(t_small_parse_table_array *v)
{
	v->a[45540] = actions(499);
	v->a[45541] = 1;
	v->a[45542] = sym_file_descriptor;
	v->a[45543] = actions(1669);
	v->a[45544] = 1;
	v->a[45545] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45546] = actions(1672);
	v->a[45547] = 1;
	v->a[45548] = anon_sym_DOLLAR;
	v->a[45549] = actions(1675);
	v->a[45550] = 1;
	v->a[45551] = anon_sym_DQUOTE;
	v->a[45552] = actions(1678);
	v->a[45553] = 1;
	v->a[45554] = anon_sym_DOLLAR_LBRACE;
	v->a[45555] = actions(1681);
	v->a[45556] = 1;
	v->a[45557] = anon_sym_DOLLAR_LPAREN;
	v->a[45558] = actions(1684);
	v->a[45559] = 1;
	small_parse_table_2278(v);
}

void	small_parse_table_2278(t_small_parse_table_array *v)
{
	v->a[45560] = anon_sym_BQUOTE;
	v->a[45561] = state(732);
	v->a[45562] = 2;
	v->a[45563] = sym_concatenation;
	v->a[45564] = aux_sym_for_statement_repeat1;
	v->a[45565] = actions(1666);
	v->a[45566] = 3;
	v->a[45567] = sym_raw_string;
	v->a[45568] = sym_number;
	v->a[45569] = sym_word;
	v->a[45570] = state(915);
	v->a[45571] = 5;
	v->a[45572] = sym_arithmetic_expansion;
	v->a[45573] = sym_string;
	v->a[45574] = sym_simple_expansion;
	v->a[45575] = sym_expansion;
	v->a[45576] = sym_command_substitution;
	v->a[45577] = actions(504);
	v->a[45578] = 10;
	v->a[45579] = anon_sym_AMP_AMP;
	small_parse_table_2279(v);
}

void	small_parse_table_2279(t_small_parse_table_array *v)
{
	v->a[45580] = anon_sym_PIPE_PIPE;
	v->a[45581] = anon_sym_LT;
	v->a[45582] = anon_sym_GT;
	v->a[45583] = anon_sym_GT_GT;
	v->a[45584] = anon_sym_LT_AMP;
	v->a[45585] = anon_sym_GT_AMP;
	v->a[45586] = anon_sym_GT_PIPE;
	v->a[45587] = anon_sym_LT_GT;
	v->a[45588] = aux_sym_heredoc_redirect_token1;
	v->a[45589] = 16;
	v->a[45590] = actions(664);
	v->a[45591] = 1;
	v->a[45592] = sym_comment;
	v->a[45593] = actions(1560);
	v->a[45594] = 1;
	v->a[45595] = anon_sym_LPAREN;
	v->a[45596] = actions(1562);
	v->a[45597] = 1;
	v->a[45598] = anon_sym_BANG;
	v->a[45599] = actions(1570);
	small_parse_table_2280(v);
}

/* EOF small_parse_table_455.c */
