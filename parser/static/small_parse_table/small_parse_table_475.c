/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_475.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2375(t_small_parse_table_array *v)
{
	v->a[47500] = sym_simple_expansion;
	v->a[47501] = sym_expansion;
	v->a[47502] = state(284);
	v->a[47503] = 8;
	v->a[47504] = sym__arithmetic_expression;
	v->a[47505] = sym_arithmetic_literal;
	v->a[47506] = sym_arithmetic_binary_expression;
	v->a[47507] = sym_arithmetic_ternary_expression;
	v->a[47508] = sym_arithmetic_unary_expression;
	v->a[47509] = sym_arithmetic_postfix_expression;
	v->a[47510] = sym_arithmetic_parenthesized_expression;
	v->a[47511] = sym_command_substitution;
	v->a[47512] = 3;
	v->a[47513] = actions(3);
	v->a[47514] = 1;
	v->a[47515] = sym_comment;
	v->a[47516] = actions(1289);
	v->a[47517] = 2;
	v->a[47518] = sym_file_descriptor;
	v->a[47519] = sym_variable_name;
	small_parse_table_2376(v);
}

void	small_parse_table_2376(t_small_parse_table_array *v)
{
	v->a[47520] = actions(1287);
	v->a[47521] = 25;
	v->a[47522] = anon_sym_for;
	v->a[47523] = anon_sym_while;
	v->a[47524] = anon_sym_until;
	v->a[47525] = anon_sym_if;
	v->a[47526] = anon_sym_fi;
	v->a[47527] = anon_sym_case;
	v->a[47528] = anon_sym_LPAREN;
	v->a[47529] = anon_sym_LBRACE;
	v->a[47530] = anon_sym_BANG;
	v->a[47531] = anon_sym_LT;
	v->a[47532] = anon_sym_GT;
	v->a[47533] = anon_sym_GT_GT;
	v->a[47534] = anon_sym_LT_AMP;
	v->a[47535] = anon_sym_GT_AMP;
	v->a[47536] = anon_sym_GT_PIPE;
	v->a[47537] = anon_sym_LT_GT;
	v->a[47538] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47539] = anon_sym_DOLLAR;
	small_parse_table_2377(v);
}

void	small_parse_table_2377(t_small_parse_table_array *v)
{
	v->a[47540] = anon_sym_DQUOTE;
	v->a[47541] = sym_raw_string;
	v->a[47542] = sym_number;
	v->a[47543] = anon_sym_DOLLAR_LBRACE;
	v->a[47544] = anon_sym_DOLLAR_LPAREN;
	v->a[47545] = anon_sym_BQUOTE;
	v->a[47546] = sym_word;
	v->a[47547] = 4;
	v->a[47548] = actions(3);
	v->a[47549] = 1;
	v->a[47550] = sym_comment;
	v->a[47551] = actions(1439);
	v->a[47552] = 1;
	v->a[47553] = anon_sym_BQUOTE;
	v->a[47554] = actions(1441);
	v->a[47555] = 2;
	v->a[47556] = sym_file_descriptor;
	v->a[47557] = sym_variable_name;
	v->a[47558] = actions(1437);
	v->a[47559] = 23;
	small_parse_table_2378(v);
}

void	small_parse_table_2378(t_small_parse_table_array *v)
{
	v->a[47560] = anon_sym_for;
	v->a[47561] = anon_sym_while;
	v->a[47562] = anon_sym_until;
	v->a[47563] = anon_sym_if;
	v->a[47564] = anon_sym_case;
	v->a[47565] = anon_sym_LPAREN;
	v->a[47566] = anon_sym_LBRACE;
	v->a[47567] = anon_sym_BANG;
	v->a[47568] = anon_sym_LT;
	v->a[47569] = anon_sym_GT;
	v->a[47570] = anon_sym_GT_GT;
	v->a[47571] = anon_sym_LT_AMP;
	v->a[47572] = anon_sym_GT_AMP;
	v->a[47573] = anon_sym_GT_PIPE;
	v->a[47574] = anon_sym_LT_GT;
	v->a[47575] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47576] = anon_sym_DOLLAR;
	v->a[47577] = anon_sym_DQUOTE;
	v->a[47578] = sym_raw_string;
	v->a[47579] = sym_number;
	small_parse_table_2379(v);
}

void	small_parse_table_2379(t_small_parse_table_array *v)
{
	v->a[47580] = anon_sym_DOLLAR_LBRACE;
	v->a[47581] = anon_sym_DOLLAR_LPAREN;
	v->a[47582] = sym_word;
	v->a[47583] = 4;
	v->a[47584] = actions(3);
	v->a[47585] = 1;
	v->a[47586] = sym_comment;
	v->a[47587] = actions(1439);
	v->a[47588] = 1;
	v->a[47589] = anon_sym_BQUOTE;
	v->a[47590] = actions(1441);
	v->a[47591] = 2;
	v->a[47592] = sym_file_descriptor;
	v->a[47593] = sym_variable_name;
	v->a[47594] = actions(1437);
	v->a[47595] = 23;
	v->a[47596] = anon_sym_for;
	v->a[47597] = anon_sym_while;
	v->a[47598] = anon_sym_until;
	v->a[47599] = anon_sym_if;
	small_parse_table_2380(v);
}

/* EOF small_parse_table_475.c */
