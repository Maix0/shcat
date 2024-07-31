/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_432.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2160(t_small_parse_table_array *v)
{
	v->a[43200] = sym_comment;
	v->a[43201] = actions(1540);
	v->a[43202] = 1;
	v->a[43203] = anon_sym_LPAREN;
	v->a[43204] = actions(1542);
	v->a[43205] = 1;
	v->a[43206] = anon_sym_BANG;
	v->a[43207] = actions(1548);
	v->a[43208] = 1;
	v->a[43209] = anon_sym_DOLLAR;
	v->a[43210] = actions(1550);
	v->a[43211] = 1;
	v->a[43212] = anon_sym_DQUOTE;
	v->a[43213] = actions(1554);
	v->a[43214] = 1;
	v->a[43215] = anon_sym_DOLLAR_LBRACE;
	v->a[43216] = actions(1556);
	v->a[43217] = 1;
	v->a[43218] = sym_variable_name;
	v->a[43219] = actions(1544);
	small_parse_table_2161(v);
}

void	small_parse_table_2161(t_small_parse_table_array *v)
{
	v->a[43220] = 2;
	v->a[43221] = anon_sym_PLUS_PLUS;
	v->a[43222] = anon_sym_DASH_DASH;
	v->a[43223] = actions(1546);
	v->a[43224] = 2;
	v->a[43225] = anon_sym_DASH2;
	v->a[43226] = anon_sym_PLUS2;
	v->a[43227] = actions(1552);
	v->a[43228] = 2;
	v->a[43229] = sym_number;
	v->a[43230] = aux_sym__simple_variable_name_token1;
	v->a[43231] = state(157);
	v->a[43232] = 3;
	v->a[43233] = sym_string;
	v->a[43234] = sym_simple_expansion;
	v->a[43235] = sym_expansion;
	v->a[43236] = state(187);
	v->a[43237] = 7;
	v->a[43238] = sym__arithmetic_expression;
	v->a[43239] = sym_arithmetic_literal;
	small_parse_table_2162(v);
}

void	small_parse_table_2162(t_small_parse_table_array *v)
{
	v->a[43240] = sym_arithmetic_binary_expression;
	v->a[43241] = sym_arithmetic_ternary_expression;
	v->a[43242] = sym_arithmetic_unary_expression;
	v->a[43243] = sym_arithmetic_postfix_expression;
	v->a[43244] = sym_arithmetic_parenthesized_expression;
	v->a[43245] = 16;
	v->a[43246] = actions(3);
	v->a[43247] = 1;
	v->a[43248] = sym_comment;
	v->a[43249] = actions(1337);
	v->a[43250] = 1;
	v->a[43251] = anon_sym_LPAREN;
	v->a[43252] = actions(1341);
	v->a[43253] = 1;
	v->a[43254] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43255] = actions(1343);
	v->a[43256] = 1;
	v->a[43257] = anon_sym_DOLLAR;
	v->a[43258] = actions(1345);
	v->a[43259] = 1;
	small_parse_table_2163(v);
}

void	small_parse_table_2163(t_small_parse_table_array *v)
{
	v->a[43260] = anon_sym_DQUOTE;
	v->a[43261] = actions(1347);
	v->a[43262] = 1;
	v->a[43263] = anon_sym_DOLLAR_LBRACE;
	v->a[43264] = actions(1349);
	v->a[43265] = 1;
	v->a[43266] = anon_sym_DOLLAR_LPAREN;
	v->a[43267] = actions(1351);
	v->a[43268] = 1;
	v->a[43269] = anon_sym_BQUOTE;
	v->a[43270] = actions(1353);
	v->a[43271] = 1;
	v->a[43272] = sym_extglob_pattern;
	v->a[43273] = actions(1420);
	v->a[43274] = 1;
	v->a[43275] = anon_sym_esac;
	v->a[43276] = state(807);
	v->a[43277] = 1;
	v->a[43278] = aux_sym_case_statement_repeat1;
	v->a[43279] = state(1432);
	small_parse_table_2164(v);
}

void	small_parse_table_2164(t_small_parse_table_array *v)
{
	v->a[43280] = 1;
	v->a[43281] = sym_case_item;
	v->a[43282] = state(1786);
	v->a[43283] = 1;
	v->a[43284] = sym__case_item_last;
	v->a[43285] = state(1594);
	v->a[43286] = 2;
	v->a[43287] = sym_concatenation;
	v->a[43288] = sym__extglob_blob;
	v->a[43289] = actions(1333);
	v->a[43290] = 3;
	v->a[43291] = sym_raw_string;
	v->a[43292] = sym_number;
	v->a[43293] = sym_word;
	v->a[43294] = state(1520);
	v->a[43295] = 5;
	v->a[43296] = sym_arithmetic_expansion;
	v->a[43297] = sym_string;
	v->a[43298] = sym_simple_expansion;
	v->a[43299] = sym_expansion;
	small_parse_table_2165(v);
}

/* EOF small_parse_table_432.c */
