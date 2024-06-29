/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_564.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2820(t_small_parse_table_array *v)
{
	v->a[56400] = anon_sym_TILDE;
	v->a[56401] = actions(1843);
	v->a[56402] = 1;
	v->a[56403] = anon_sym_DOLLAR;
	v->a[56404] = actions(1845);
	v->a[56405] = 1;
	v->a[56406] = anon_sym_DQUOTE;
	v->a[56407] = actions(1849);
	v->a[56408] = 1;
	v->a[56409] = anon_sym_DOLLAR_LBRACE;
	v->a[56410] = actions(1851);
	v->a[56411] = 1;
	v->a[56412] = anon_sym_DOLLAR_LPAREN;
	v->a[56413] = actions(1853);
	v->a[56414] = 1;
	v->a[56415] = anon_sym_BQUOTE;
	v->a[56416] = actions(1855);
	v->a[56417] = 1;
	v->a[56418] = sym_variable_name;
	v->a[56419] = actions(1919);
	small_parse_table_2821(v);
}

void	small_parse_table_2821(t_small_parse_table_array *v)
{
	v->a[56420] = 1;
	v->a[56421] = anon_sym_RPAREN_RPAREN;
	v->a[56422] = actions(1837);
	v->a[56423] = 2;
	v->a[56424] = anon_sym_PLUS_PLUS;
	v->a[56425] = anon_sym_DASH_DASH;
	v->a[56426] = actions(1839);
	v->a[56427] = 2;
	v->a[56428] = anon_sym_DASH2;
	v->a[56429] = anon_sym_PLUS2;
	v->a[56430] = actions(1847);
	v->a[56431] = 2;
	v->a[56432] = sym_number;
	v->a[56433] = aux_sym__simple_variable_name_token1;
	v->a[56434] = state(370);
	v->a[56435] = 3;
	v->a[56436] = sym_string;
	v->a[56437] = sym_simple_expansion;
	v->a[56438] = sym_expansion;
	v->a[56439] = state(470);
	small_parse_table_2822(v);
}

void	small_parse_table_2822(t_small_parse_table_array *v)
{
	v->a[56440] = 8;
	v->a[56441] = sym__arithmetic_expression;
	v->a[56442] = sym_arithmetic_literal;
	v->a[56443] = sym_arithmetic_binary_expression;
	v->a[56444] = sym_arithmetic_ternary_expression;
	v->a[56445] = sym_arithmetic_unary_expression;
	v->a[56446] = sym_arithmetic_postfix_expression;
	v->a[56447] = sym_arithmetic_parenthesized_expression;
	v->a[56448] = sym_command_substitution;
	v->a[56449] = 3;
	v->a[56450] = actions(3);
	v->a[56451] = 1;
	v->a[56452] = sym_comment;
	v->a[56453] = actions(1118);
	v->a[56454] = 2;
	v->a[56455] = sym_file_descriptor;
	v->a[56456] = sym__concat;
	v->a[56457] = actions(1116);
	v->a[56458] = 25;
	v->a[56459] = anon_sym_PIPE;
	small_parse_table_2823(v);
}

void	small_parse_table_2823(t_small_parse_table_array *v)
{
	v->a[56460] = anon_sym_AMP_AMP;
	v->a[56461] = anon_sym_PIPE_PIPE;
	v->a[56462] = anon_sym_LT;
	v->a[56463] = anon_sym_GT;
	v->a[56464] = anon_sym_GT_GT;
	v->a[56465] = anon_sym_AMP_GT;
	v->a[56466] = anon_sym_AMP_GT_GT;
	v->a[56467] = anon_sym_LT_AMP;
	v->a[56468] = anon_sym_GT_AMP;
	v->a[56469] = anon_sym_GT_PIPE;
	v->a[56470] = anon_sym_LT_AMP_DASH;
	v->a[56471] = anon_sym_GT_AMP_DASH;
	v->a[56472] = anon_sym_LT_LT;
	v->a[56473] = anon_sym_LT_LT_DASH;
	v->a[56474] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56475] = aux_sym_concatenation_token1;
	v->a[56476] = anon_sym_DOLLAR;
	v->a[56477] = anon_sym_DQUOTE;
	v->a[56478] = sym_raw_string;
	v->a[56479] = sym_number;
	small_parse_table_2824(v);
}

void	small_parse_table_2824(t_small_parse_table_array *v)
{
	v->a[56480] = anon_sym_DOLLAR_LBRACE;
	v->a[56481] = anon_sym_DOLLAR_LPAREN;
	v->a[56482] = anon_sym_BQUOTE;
	v->a[56483] = sym_word;
	v->a[56484] = 16;
	v->a[56485] = actions(1074);
	v->a[56486] = 1;
	v->a[56487] = sym_comment;
	v->a[56488] = actions(1831);
	v->a[56489] = 1;
	v->a[56490] = anon_sym_LPAREN;
	v->a[56491] = actions(1833);
	v->a[56492] = 1;
	v->a[56493] = anon_sym_BANG;
	v->a[56494] = actions(1841);
	v->a[56495] = 1;
	v->a[56496] = anon_sym_TILDE;
	v->a[56497] = actions(1843);
	v->a[56498] = 1;
	v->a[56499] = anon_sym_DOLLAR;
	small_parse_table_2825(v);
}

/* EOF small_parse_table_564.c */
