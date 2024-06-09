/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_602.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3010(t_small_parse_table_array *v)
{
	v->a[60200] = 1;
	v->a[60201] = sym_comment;
	v->a[60202] = actions(2077);
	v->a[60203] = 1;
	v->a[60204] = anon_sym_LPAREN;
	v->a[60205] = actions(2079);
	v->a[60206] = 1;
	v->a[60207] = anon_sym_BANG;
	v->a[60208] = actions(2085);
	v->a[60209] = 1;
	v->a[60210] = anon_sym_TILDE;
	v->a[60211] = actions(2087);
	v->a[60212] = 1;
	v->a[60213] = anon_sym_DOLLAR;
	v->a[60214] = actions(2089);
	v->a[60215] = 1;
	v->a[60216] = anon_sym_DQUOTE;
	v->a[60217] = actions(2091);
	v->a[60218] = 1;
	v->a[60219] = aux_sym_number_token1;
	small_parse_table_3011(v);
}

void	small_parse_table_3011(t_small_parse_table_array *v)
{
	v->a[60220] = actions(2093);
	v->a[60221] = 1;
	v->a[60222] = aux_sym_number_token2;
	v->a[60223] = actions(2095);
	v->a[60224] = 1;
	v->a[60225] = anon_sym_DOLLAR_LBRACE;
	v->a[60226] = actions(2097);
	v->a[60227] = 1;
	v->a[60228] = anon_sym_DOLLAR_LPAREN;
	v->a[60229] = actions(2099);
	v->a[60230] = 1;
	v->a[60231] = anon_sym_BQUOTE;
	v->a[60232] = actions(2101);
	v->a[60233] = 1;
	v->a[60234] = aux_sym__simple_variable_name_token1;
	v->a[60235] = actions(2103);
	v->a[60236] = 1;
	v->a[60237] = sym_variable_name;
	v->a[60238] = actions(2081);
	v->a[60239] = 2;
	small_parse_table_3012(v);
}

void	small_parse_table_3012(t_small_parse_table_array *v)
{
	v->a[60240] = anon_sym_PLUS_PLUS;
	v->a[60241] = anon_sym_DASH_DASH;
	v->a[60242] = actions(2083);
	v->a[60243] = 2;
	v->a[60244] = anon_sym_DASH2;
	v->a[60245] = anon_sym_PLUS2;
	v->a[60246] = state(588);
	v->a[60247] = 4;
	v->a[60248] = sym_string;
	v->a[60249] = sym_number;
	v->a[60250] = sym_simple_expansion;
	v->a[60251] = sym_expansion;
	v->a[60252] = state(642);
	v->a[60253] = 8;
	v->a[60254] = sym__arithmetic_expression;
	v->a[60255] = sym_arithmetic_literal;
	v->a[60256] = sym_arithmetic_binary_expression;
	v->a[60257] = sym_arithmetic_ternary_expression;
	v->a[60258] = sym_arithmetic_unary_expression;
	v->a[60259] = sym_arithmetic_postfix_expression;
	small_parse_table_3013(v);
}

void	small_parse_table_3013(t_small_parse_table_array *v)
{
	v->a[60260] = sym_arithmetic_parenthesized_expression;
	v->a[60261] = sym_command_substitution;
	v->a[60262] = 17;
	v->a[60263] = actions(1404);
	v->a[60264] = 1;
	v->a[60265] = sym_comment;
	v->a[60266] = actions(2077);
	v->a[60267] = 1;
	v->a[60268] = anon_sym_LPAREN;
	v->a[60269] = actions(2079);
	v->a[60270] = 1;
	v->a[60271] = anon_sym_BANG;
	v->a[60272] = actions(2085);
	v->a[60273] = 1;
	v->a[60274] = anon_sym_TILDE;
	v->a[60275] = actions(2087);
	v->a[60276] = 1;
	v->a[60277] = anon_sym_DOLLAR;
	v->a[60278] = actions(2089);
	v->a[60279] = 1;
	small_parse_table_3014(v);
}

void	small_parse_table_3014(t_small_parse_table_array *v)
{
	v->a[60280] = anon_sym_DQUOTE;
	v->a[60281] = actions(2091);
	v->a[60282] = 1;
	v->a[60283] = aux_sym_number_token1;
	v->a[60284] = actions(2093);
	v->a[60285] = 1;
	v->a[60286] = aux_sym_number_token2;
	v->a[60287] = actions(2095);
	v->a[60288] = 1;
	v->a[60289] = anon_sym_DOLLAR_LBRACE;
	v->a[60290] = actions(2097);
	v->a[60291] = 1;
	v->a[60292] = anon_sym_DOLLAR_LPAREN;
	v->a[60293] = actions(2099);
	v->a[60294] = 1;
	v->a[60295] = anon_sym_BQUOTE;
	v->a[60296] = actions(2101);
	v->a[60297] = 1;
	v->a[60298] = aux_sym__simple_variable_name_token1;
	v->a[60299] = actions(2103);
	small_parse_table_3015(v);
}

/* EOF small_parse_table_602.c */
