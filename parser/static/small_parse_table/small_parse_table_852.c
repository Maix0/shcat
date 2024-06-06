/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_852.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4260(t_small_parse_table_array *v)
{
	v->a[85200] = 1;
	v->a[85201] = anon_sym_DOLLAR_LBRACE;
	v->a[85202] = actions(4604);
	v->a[85203] = 1;
	v->a[85204] = anon_sym_DOLLAR_LPAREN;
	v->a[85205] = actions(4606);
	v->a[85206] = 1;
	v->a[85207] = anon_sym_BQUOTE;
	v->a[85208] = actions(4608);
	v->a[85209] = 1;
	v->a[85210] = anon_sym_DOLLAR_BQUOTE;
	v->a[85211] = actions(4740);
	v->a[85212] = 1;
	v->a[85213] = aux_sym__simple_variable_name_token1;
	v->a[85214] = actions(4742);
	v->a[85215] = 1;
	v->a[85216] = sym_variable_name;
	v->a[85217] = state(1476);
	v->a[85218] = 1;
	v->a[85219] = sym__arithmetic_postfix_expression;
	small_parse_table_4261(v);
}

void	small_parse_table_4261(t_small_parse_table_array *v)
{
	v->a[85220] = state(1478);
	v->a[85221] = 1;
	v->a[85222] = sym__arithmetic_unary_expression;
	v->a[85223] = state(1490);
	v->a[85224] = 1;
	v->a[85225] = sym__arithmetic_ternary_expression;
	v->a[85226] = state(1511);
	v->a[85227] = 1;
	v->a[85228] = sym__arithmetic_binary_expression;
	v->a[85229] = actions(4588);
	v->a[85230] = 2;
	v->a[85231] = anon_sym_PLUS_PLUS;
	v->a[85232] = anon_sym_DASH_DASH;
	v->a[85233] = actions(4590);
	v->a[85234] = 2;
	v->a[85235] = anon_sym_DASH2;
	v->a[85236] = anon_sym_PLUS2;
	v->a[85237] = state(1393);
	v->a[85238] = 8;
	v->a[85239] = sym__arithmetic_expression;
	small_parse_table_4262(v);
}

void	small_parse_table_4262(t_small_parse_table_array *v)
{
	v->a[85240] = sym__arithmetic_literal;
	v->a[85241] = sym__arithmetic_parenthesized_expression;
	v->a[85242] = sym_string;
	v->a[85243] = sym_number;
	v->a[85244] = sym_simple_expansion;
	v->a[85245] = sym_expansion;
	v->a[85246] = sym_command_substitution;
	v->a[85247] = 21;
	v->a[85248] = actions(57);
	v->a[85249] = 1;
	v->a[85250] = sym_comment;
	v->a[85251] = actions(4584);
	v->a[85252] = 1;
	v->a[85253] = anon_sym_LPAREN;
	v->a[85254] = actions(4586);
	v->a[85255] = 1;
	v->a[85256] = anon_sym_BANG;
	v->a[85257] = actions(4592);
	v->a[85258] = 1;
	v->a[85259] = anon_sym_TILDE;
	small_parse_table_4263(v);
}

void	small_parse_table_4263(t_small_parse_table_array *v)
{
	v->a[85260] = actions(4594);
	v->a[85261] = 1;
	v->a[85262] = anon_sym_DOLLAR;
	v->a[85263] = actions(4596);
	v->a[85264] = 1;
	v->a[85265] = anon_sym_DQUOTE;
	v->a[85266] = actions(4598);
	v->a[85267] = 1;
	v->a[85268] = aux_sym_number_token1;
	v->a[85269] = actions(4600);
	v->a[85270] = 1;
	v->a[85271] = aux_sym_number_token2;
	v->a[85272] = actions(4602);
	v->a[85273] = 1;
	v->a[85274] = anon_sym_DOLLAR_LBRACE;
	v->a[85275] = actions(4604);
	v->a[85276] = 1;
	v->a[85277] = anon_sym_DOLLAR_LPAREN;
	v->a[85278] = actions(4606);
	v->a[85279] = 1;
	small_parse_table_4264(v);
}

void	small_parse_table_4264(t_small_parse_table_array *v)
{
	v->a[85280] = anon_sym_BQUOTE;
	v->a[85281] = actions(4608);
	v->a[85282] = 1;
	v->a[85283] = anon_sym_DOLLAR_BQUOTE;
	v->a[85284] = actions(4744);
	v->a[85285] = 1;
	v->a[85286] = aux_sym__simple_variable_name_token1;
	v->a[85287] = actions(4746);
	v->a[85288] = 1;
	v->a[85289] = sym_variable_name;
	v->a[85290] = state(1476);
	v->a[85291] = 1;
	v->a[85292] = sym__arithmetic_postfix_expression;
	v->a[85293] = state(1478);
	v->a[85294] = 1;
	v->a[85295] = sym__arithmetic_unary_expression;
	v->a[85296] = state(1490);
	v->a[85297] = 1;
	v->a[85298] = sym__arithmetic_ternary_expression;
	v->a[85299] = state(1511);
	small_parse_table_4265(v);
}

/* EOF small_parse_table_852.c */
