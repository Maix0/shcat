/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_565.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2825(t_small_parse_table_array *v)
{
	v->a[56500] = actions(1845);
	v->a[56501] = 1;
	v->a[56502] = anon_sym_DQUOTE;
	v->a[56503] = actions(1849);
	v->a[56504] = 1;
	v->a[56505] = anon_sym_DOLLAR_LBRACE;
	v->a[56506] = actions(1851);
	v->a[56507] = 1;
	v->a[56508] = anon_sym_DOLLAR_LPAREN;
	v->a[56509] = actions(1853);
	v->a[56510] = 1;
	v->a[56511] = anon_sym_BQUOTE;
	v->a[56512] = actions(1855);
	v->a[56513] = 1;
	v->a[56514] = sym_variable_name;
	v->a[56515] = actions(1921);
	v->a[56516] = 1;
	v->a[56517] = anon_sym_RPAREN_RPAREN;
	v->a[56518] = actions(1837);
	v->a[56519] = 2;
	small_parse_table_2826(v);
}

void	small_parse_table_2826(t_small_parse_table_array *v)
{
	v->a[56520] = anon_sym_PLUS_PLUS;
	v->a[56521] = anon_sym_DASH_DASH;
	v->a[56522] = actions(1839);
	v->a[56523] = 2;
	v->a[56524] = anon_sym_DASH2;
	v->a[56525] = anon_sym_PLUS2;
	v->a[56526] = actions(1847);
	v->a[56527] = 2;
	v->a[56528] = sym_number;
	v->a[56529] = aux_sym__simple_variable_name_token1;
	v->a[56530] = state(370);
	v->a[56531] = 3;
	v->a[56532] = sym_string;
	v->a[56533] = sym_simple_expansion;
	v->a[56534] = sym_expansion;
	v->a[56535] = state(529);
	v->a[56536] = 8;
	v->a[56537] = sym__arithmetic_expression;
	v->a[56538] = sym_arithmetic_literal;
	v->a[56539] = sym_arithmetic_binary_expression;
	small_parse_table_2827(v);
}

void	small_parse_table_2827(t_small_parse_table_array *v)
{
	v->a[56540] = sym_arithmetic_ternary_expression;
	v->a[56541] = sym_arithmetic_unary_expression;
	v->a[56542] = sym_arithmetic_postfix_expression;
	v->a[56543] = sym_arithmetic_parenthesized_expression;
	v->a[56544] = sym_command_substitution;
	v->a[56545] = 16;
	v->a[56546] = actions(1074);
	v->a[56547] = 1;
	v->a[56548] = sym_comment;
	v->a[56549] = actions(1831);
	v->a[56550] = 1;
	v->a[56551] = anon_sym_LPAREN;
	v->a[56552] = actions(1833);
	v->a[56553] = 1;
	v->a[56554] = anon_sym_BANG;
	v->a[56555] = actions(1841);
	v->a[56556] = 1;
	v->a[56557] = anon_sym_TILDE;
	v->a[56558] = actions(1843);
	v->a[56559] = 1;
	small_parse_table_2828(v);
}

void	small_parse_table_2828(t_small_parse_table_array *v)
{
	v->a[56560] = anon_sym_DOLLAR;
	v->a[56561] = actions(1845);
	v->a[56562] = 1;
	v->a[56563] = anon_sym_DQUOTE;
	v->a[56564] = actions(1849);
	v->a[56565] = 1;
	v->a[56566] = anon_sym_DOLLAR_LBRACE;
	v->a[56567] = actions(1851);
	v->a[56568] = 1;
	v->a[56569] = anon_sym_DOLLAR_LPAREN;
	v->a[56570] = actions(1853);
	v->a[56571] = 1;
	v->a[56572] = anon_sym_BQUOTE;
	v->a[56573] = actions(1855);
	v->a[56574] = 1;
	v->a[56575] = sym_variable_name;
	v->a[56576] = actions(1923);
	v->a[56577] = 1;
	v->a[56578] = anon_sym_RPAREN_RPAREN;
	v->a[56579] = actions(1837);
	small_parse_table_2829(v);
}

void	small_parse_table_2829(t_small_parse_table_array *v)
{
	v->a[56580] = 2;
	v->a[56581] = anon_sym_PLUS_PLUS;
	v->a[56582] = anon_sym_DASH_DASH;
	v->a[56583] = actions(1839);
	v->a[56584] = 2;
	v->a[56585] = anon_sym_DASH2;
	v->a[56586] = anon_sym_PLUS2;
	v->a[56587] = actions(1847);
	v->a[56588] = 2;
	v->a[56589] = sym_number;
	v->a[56590] = aux_sym__simple_variable_name_token1;
	v->a[56591] = state(370);
	v->a[56592] = 3;
	v->a[56593] = sym_string;
	v->a[56594] = sym_simple_expansion;
	v->a[56595] = sym_expansion;
	v->a[56596] = state(505);
	v->a[56597] = 8;
	v->a[56598] = sym__arithmetic_expression;
	v->a[56599] = sym_arithmetic_literal;
	small_parse_table_2830(v);
}

/* EOF small_parse_table_565.c */
