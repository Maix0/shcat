/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_494.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2470(t_small_parse_table_array *v)
{
	v->a[49400] = anon_sym_PLUS_PLUS;
	v->a[49401] = anon_sym_DASH_DASH;
	v->a[49402] = actions(1568);
	v->a[49403] = 2;
	v->a[49404] = anon_sym_DASH2;
	v->a[49405] = anon_sym_PLUS2;
	v->a[49406] = actions(1576);
	v->a[49407] = 2;
	v->a[49408] = sym_number;
	v->a[49409] = aux_sym__simple_variable_name_token1;
	v->a[49410] = state(255);
	v->a[49411] = 3;
	v->a[49412] = sym_string;
	v->a[49413] = sym_simple_expansion;
	v->a[49414] = sym_expansion;
	v->a[49415] = state(218);
	v->a[49416] = 8;
	v->a[49417] = sym__arithmetic_expression;
	v->a[49418] = sym_arithmetic_literal;
	v->a[49419] = sym_arithmetic_binary_expression;
	small_parse_table_2471(v);
}

void	small_parse_table_2471(t_small_parse_table_array *v)
{
	v->a[49420] = sym_arithmetic_ternary_expression;
	v->a[49421] = sym_arithmetic_unary_expression;
	v->a[49422] = sym_arithmetic_postfix_expression;
	v->a[49423] = sym_arithmetic_parenthesized_expression;
	v->a[49424] = sym_command_substitution;
	v->a[49425] = 4;
	v->a[49426] = actions(3);
	v->a[49427] = 1;
	v->a[49428] = sym_comment;
	v->a[49429] = actions(1439);
	v->a[49430] = 1;
	v->a[49431] = anon_sym_BQUOTE;
	v->a[49432] = actions(1441);
	v->a[49433] = 2;
	v->a[49434] = sym_file_descriptor;
	v->a[49435] = sym_variable_name;
	v->a[49436] = actions(1437);
	v->a[49437] = 23;
	v->a[49438] = anon_sym_for;
	v->a[49439] = anon_sym_while;
	small_parse_table_2472(v);
}

void	small_parse_table_2472(t_small_parse_table_array *v)
{
	v->a[49440] = anon_sym_until;
	v->a[49441] = anon_sym_if;
	v->a[49442] = anon_sym_case;
	v->a[49443] = anon_sym_LPAREN;
	v->a[49444] = anon_sym_LBRACE;
	v->a[49445] = anon_sym_BANG;
	v->a[49446] = anon_sym_LT;
	v->a[49447] = anon_sym_GT;
	v->a[49448] = anon_sym_GT_GT;
	v->a[49449] = anon_sym_LT_AMP;
	v->a[49450] = anon_sym_GT_AMP;
	v->a[49451] = anon_sym_GT_PIPE;
	v->a[49452] = anon_sym_LT_GT;
	v->a[49453] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49454] = anon_sym_DOLLAR;
	v->a[49455] = anon_sym_DQUOTE;
	v->a[49456] = sym_raw_string;
	v->a[49457] = sym_number;
	v->a[49458] = anon_sym_DOLLAR_LBRACE;
	v->a[49459] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2473(v);
}

void	small_parse_table_2473(t_small_parse_table_array *v)
{
	v->a[49460] = sym_word;
	v->a[49461] = 15;
	v->a[49462] = actions(664);
	v->a[49463] = 1;
	v->a[49464] = sym_comment;
	v->a[49465] = actions(1740);
	v->a[49466] = 1;
	v->a[49467] = anon_sym_LPAREN;
	v->a[49468] = actions(1742);
	v->a[49469] = 1;
	v->a[49470] = anon_sym_BANG;
	v->a[49471] = actions(1748);
	v->a[49472] = 1;
	v->a[49473] = anon_sym_TILDE;
	v->a[49474] = actions(1750);
	v->a[49475] = 1;
	v->a[49476] = anon_sym_DOLLAR;
	v->a[49477] = actions(1752);
	v->a[49478] = 1;
	v->a[49479] = anon_sym_DQUOTE;
	small_parse_table_2474(v);
}

void	small_parse_table_2474(t_small_parse_table_array *v)
{
	v->a[49480] = actions(1756);
	v->a[49481] = 1;
	v->a[49482] = anon_sym_DOLLAR_LBRACE;
	v->a[49483] = actions(1758);
	v->a[49484] = 1;
	v->a[49485] = anon_sym_DOLLAR_LPAREN;
	v->a[49486] = actions(1760);
	v->a[49487] = 1;
	v->a[49488] = anon_sym_BQUOTE;
	v->a[49489] = actions(1762);
	v->a[49490] = 1;
	v->a[49491] = sym_variable_name;
	v->a[49492] = actions(1744);
	v->a[49493] = 2;
	v->a[49494] = anon_sym_PLUS_PLUS;
	v->a[49495] = anon_sym_DASH_DASH;
	v->a[49496] = actions(1746);
	v->a[49497] = 2;
	v->a[49498] = anon_sym_DASH2;
	v->a[49499] = anon_sym_PLUS2;
	small_parse_table_2475(v);
}

/* EOF small_parse_table_494.c */
