/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_664.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3320(t_small_parse_table_array *v)
{
	v->a[66400] = sym_string;
	v->a[66401] = sym_simple_expansion;
	v->a[66402] = sym_expansion;
	v->a[66403] = state(471);
	v->a[66404] = 8;
	v->a[66405] = sym__arithmetic_expression;
	v->a[66406] = sym_arithmetic_literal;
	v->a[66407] = sym_arithmetic_binary_expression;
	v->a[66408] = sym_arithmetic_ternary_expression;
	v->a[66409] = sym_arithmetic_unary_expression;
	v->a[66410] = sym_arithmetic_postfix_expression;
	v->a[66411] = sym_arithmetic_parenthesized_expression;
	v->a[66412] = sym_command_substitution;
	v->a[66413] = 15;
	v->a[66414] = actions(1094);
	v->a[66415] = 1;
	v->a[66416] = sym_comment;
	v->a[66417] = actions(1869);
	v->a[66418] = 1;
	v->a[66419] = anon_sym_LPAREN;
	small_parse_table_3321(v);
}

void	small_parse_table_3321(t_small_parse_table_array *v)
{
	v->a[66420] = actions(1871);
	v->a[66421] = 1;
	v->a[66422] = anon_sym_BANG;
	v->a[66423] = actions(1879);
	v->a[66424] = 1;
	v->a[66425] = anon_sym_TILDE;
	v->a[66426] = actions(1881);
	v->a[66427] = 1;
	v->a[66428] = anon_sym_DOLLAR;
	v->a[66429] = actions(1883);
	v->a[66430] = 1;
	v->a[66431] = anon_sym_DQUOTE;
	v->a[66432] = actions(1887);
	v->a[66433] = 1;
	v->a[66434] = anon_sym_DOLLAR_LBRACE;
	v->a[66435] = actions(1889);
	v->a[66436] = 1;
	v->a[66437] = anon_sym_DOLLAR_LPAREN;
	v->a[66438] = actions(1891);
	v->a[66439] = 1;
	small_parse_table_3322(v);
}

void	small_parse_table_3322(t_small_parse_table_array *v)
{
	v->a[66440] = anon_sym_BQUOTE;
	v->a[66441] = actions(1893);
	v->a[66442] = 1;
	v->a[66443] = sym_variable_name;
	v->a[66444] = actions(1875);
	v->a[66445] = 2;
	v->a[66446] = anon_sym_PLUS_PLUS;
	v->a[66447] = anon_sym_DASH_DASH;
	v->a[66448] = actions(1877);
	v->a[66449] = 2;
	v->a[66450] = anon_sym_DASH2;
	v->a[66451] = anon_sym_PLUS2;
	v->a[66452] = actions(1885);
	v->a[66453] = 2;
	v->a[66454] = sym_number;
	v->a[66455] = aux_sym__simple_variable_name_token1;
	v->a[66456] = state(365);
	v->a[66457] = 3;
	v->a[66458] = sym_string;
	v->a[66459] = sym_simple_expansion;
	small_parse_table_3323(v);
}

void	small_parse_table_3323(t_small_parse_table_array *v)
{
	v->a[66460] = sym_expansion;
	v->a[66461] = state(465);
	v->a[66462] = 8;
	v->a[66463] = sym__arithmetic_expression;
	v->a[66464] = sym_arithmetic_literal;
	v->a[66465] = sym_arithmetic_binary_expression;
	v->a[66466] = sym_arithmetic_ternary_expression;
	v->a[66467] = sym_arithmetic_unary_expression;
	v->a[66468] = sym_arithmetic_postfix_expression;
	v->a[66469] = sym_arithmetic_parenthesized_expression;
	v->a[66470] = sym_command_substitution;
	v->a[66471] = 15;
	v->a[66472] = actions(1094);
	v->a[66473] = 1;
	v->a[66474] = sym_comment;
	v->a[66475] = actions(1869);
	v->a[66476] = 1;
	v->a[66477] = anon_sym_LPAREN;
	v->a[66478] = actions(1871);
	v->a[66479] = 1;
	small_parse_table_3324(v);
}

void	small_parse_table_3324(t_small_parse_table_array *v)
{
	v->a[66480] = anon_sym_BANG;
	v->a[66481] = actions(1879);
	v->a[66482] = 1;
	v->a[66483] = anon_sym_TILDE;
	v->a[66484] = actions(1881);
	v->a[66485] = 1;
	v->a[66486] = anon_sym_DOLLAR;
	v->a[66487] = actions(1883);
	v->a[66488] = 1;
	v->a[66489] = anon_sym_DQUOTE;
	v->a[66490] = actions(1887);
	v->a[66491] = 1;
	v->a[66492] = anon_sym_DOLLAR_LBRACE;
	v->a[66493] = actions(1889);
	v->a[66494] = 1;
	v->a[66495] = anon_sym_DOLLAR_LPAREN;
	v->a[66496] = actions(1891);
	v->a[66497] = 1;
	v->a[66498] = anon_sym_BQUOTE;
	v->a[66499] = actions(1893);
	small_parse_table_3325(v);
}

/* EOF small_parse_table_664.c */
