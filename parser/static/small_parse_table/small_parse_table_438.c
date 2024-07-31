/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_438.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2190(t_small_parse_table_array *v)
{
	v->a[43800] = 1;
	v->a[43801] = anon_sym_DOLLAR;
	v->a[43802] = actions(1550);
	v->a[43803] = 1;
	v->a[43804] = anon_sym_DQUOTE;
	v->a[43805] = actions(1554);
	v->a[43806] = 1;
	v->a[43807] = anon_sym_DOLLAR_LBRACE;
	v->a[43808] = actions(1556);
	v->a[43809] = 1;
	v->a[43810] = sym_variable_name;
	v->a[43811] = actions(1544);
	v->a[43812] = 2;
	v->a[43813] = anon_sym_PLUS_PLUS;
	v->a[43814] = anon_sym_DASH_DASH;
	v->a[43815] = actions(1546);
	v->a[43816] = 2;
	v->a[43817] = anon_sym_DASH2;
	v->a[43818] = anon_sym_PLUS2;
	v->a[43819] = actions(1552);
	small_parse_table_2191(v);
}

void	small_parse_table_2191(t_small_parse_table_array *v)
{
	v->a[43820] = 2;
	v->a[43821] = sym_number;
	v->a[43822] = aux_sym__simple_variable_name_token1;
	v->a[43823] = state(157);
	v->a[43824] = 3;
	v->a[43825] = sym_string;
	v->a[43826] = sym_simple_expansion;
	v->a[43827] = sym_expansion;
	v->a[43828] = state(246);
	v->a[43829] = 7;
	v->a[43830] = sym__arithmetic_expression;
	v->a[43831] = sym_arithmetic_literal;
	v->a[43832] = sym_arithmetic_binary_expression;
	v->a[43833] = sym_arithmetic_ternary_expression;
	v->a[43834] = sym_arithmetic_unary_expression;
	v->a[43835] = sym_arithmetic_postfix_expression;
	v->a[43836] = sym_arithmetic_parenthesized_expression;
	v->a[43837] = 5;
	v->a[43838] = actions(3);
	v->a[43839] = 1;
	small_parse_table_2192(v);
}

void	small_parse_table_2192(t_small_parse_table_array *v)
{
	v->a[43840] = sym_comment;
	v->a[43841] = actions(1577);
	v->a[43842] = 1;
	v->a[43843] = aux_sym_concatenation_token1;
	v->a[43844] = actions(1587);
	v->a[43845] = 1;
	v->a[43846] = sym__concat;
	v->a[43847] = state(656);
	v->a[43848] = 1;
	v->a[43849] = aux_sym_concatenation_repeat1;
	v->a[43850] = actions(997);
	v->a[43851] = 19;
	v->a[43852] = anon_sym_AMP_AMP;
	v->a[43853] = anon_sym_PIPE_PIPE;
	v->a[43854] = anon_sym_LT;
	v->a[43855] = anon_sym_GT;
	v->a[43856] = anon_sym_GT_GT;
	v->a[43857] = anon_sym_LT_AMP;
	v->a[43858] = anon_sym_GT_AMP;
	v->a[43859] = anon_sym_GT_PIPE;
	small_parse_table_2193(v);
}

void	small_parse_table_2193(t_small_parse_table_array *v)
{
	v->a[43860] = anon_sym_LT_GT;
	v->a[43861] = aux_sym_heredoc_redirect_token1;
	v->a[43862] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43863] = anon_sym_DOLLAR;
	v->a[43864] = anon_sym_DQUOTE;
	v->a[43865] = sym_raw_string;
	v->a[43866] = sym_number;
	v->a[43867] = anon_sym_DOLLAR_LBRACE;
	v->a[43868] = anon_sym_DOLLAR_LPAREN;
	v->a[43869] = anon_sym_BQUOTE;
	v->a[43870] = sym_word;
	v->a[43871] = 12;
	v->a[43872] = actions(407);
	v->a[43873] = 1;
	v->a[43874] = sym_comment;
	v->a[43875] = actions(1540);
	v->a[43876] = 1;
	v->a[43877] = anon_sym_LPAREN;
	v->a[43878] = actions(1542);
	v->a[43879] = 1;
	small_parse_table_2194(v);
}

void	small_parse_table_2194(t_small_parse_table_array *v)
{
	v->a[43880] = anon_sym_BANG;
	v->a[43881] = actions(1548);
	v->a[43882] = 1;
	v->a[43883] = anon_sym_DOLLAR;
	v->a[43884] = actions(1550);
	v->a[43885] = 1;
	v->a[43886] = anon_sym_DQUOTE;
	v->a[43887] = actions(1554);
	v->a[43888] = 1;
	v->a[43889] = anon_sym_DOLLAR_LBRACE;
	v->a[43890] = actions(1556);
	v->a[43891] = 1;
	v->a[43892] = sym_variable_name;
	v->a[43893] = actions(1544);
	v->a[43894] = 2;
	v->a[43895] = anon_sym_PLUS_PLUS;
	v->a[43896] = anon_sym_DASH_DASH;
	v->a[43897] = actions(1546);
	v->a[43898] = 2;
	v->a[43899] = anon_sym_DASH2;
	small_parse_table_2195(v);
}

/* EOF small_parse_table_438.c */
