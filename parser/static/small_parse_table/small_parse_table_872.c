/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_872.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4360(t_small_parse_table_array *v)
{
	v->a[87200] = 1;
	v->a[87201] = aux_sym_number_token2;
	v->a[87202] = actions(4602);
	v->a[87203] = 1;
	v->a[87204] = anon_sym_DOLLAR_LBRACE;
	v->a[87205] = actions(4604);
	v->a[87206] = 1;
	v->a[87207] = anon_sym_DOLLAR_LPAREN;
	v->a[87208] = actions(4606);
	v->a[87209] = 1;
	v->a[87210] = anon_sym_BQUOTE;
	v->a[87211] = actions(4608);
	v->a[87212] = 1;
	v->a[87213] = anon_sym_DOLLAR_BQUOTE;
	v->a[87214] = actions(4841);
	v->a[87215] = 1;
	v->a[87216] = aux_sym__simple_variable_name_token1;
	v->a[87217] = actions(4843);
	v->a[87218] = 1;
	v->a[87219] = sym_variable_name;
	small_parse_table_4361(v);
}

void	small_parse_table_4361(t_small_parse_table_array *v)
{
	v->a[87220] = state(1476);
	v->a[87221] = 1;
	v->a[87222] = sym__arithmetic_postfix_expression;
	v->a[87223] = state(1478);
	v->a[87224] = 1;
	v->a[87225] = sym__arithmetic_unary_expression;
	v->a[87226] = state(1490);
	v->a[87227] = 1;
	v->a[87228] = sym__arithmetic_ternary_expression;
	v->a[87229] = state(1511);
	v->a[87230] = 1;
	v->a[87231] = sym__arithmetic_binary_expression;
	v->a[87232] = actions(4588);
	v->a[87233] = 2;
	v->a[87234] = anon_sym_PLUS_PLUS;
	v->a[87235] = anon_sym_DASH_DASH;
	v->a[87236] = actions(4590);
	v->a[87237] = 2;
	v->a[87238] = anon_sym_DASH2;
	v->a[87239] = anon_sym_PLUS2;
	small_parse_table_4362(v);
}

void	small_parse_table_4362(t_small_parse_table_array *v)
{
	v->a[87240] = state(1435);
	v->a[87241] = 8;
	v->a[87242] = sym__arithmetic_expression;
	v->a[87243] = sym__arithmetic_literal;
	v->a[87244] = sym__arithmetic_parenthesized_expression;
	v->a[87245] = sym_string;
	v->a[87246] = sym_number;
	v->a[87247] = sym_simple_expansion;
	v->a[87248] = sym_expansion;
	v->a[87249] = sym_command_substitution;
	v->a[87250] = 21;
	v->a[87251] = actions(57);
	v->a[87252] = 1;
	v->a[87253] = sym_comment;
	v->a[87254] = actions(4584);
	v->a[87255] = 1;
	v->a[87256] = anon_sym_LPAREN;
	v->a[87257] = actions(4586);
	v->a[87258] = 1;
	v->a[87259] = anon_sym_BANG;
	small_parse_table_4363(v);
}

void	small_parse_table_4363(t_small_parse_table_array *v)
{
	v->a[87260] = actions(4592);
	v->a[87261] = 1;
	v->a[87262] = anon_sym_TILDE;
	v->a[87263] = actions(4594);
	v->a[87264] = 1;
	v->a[87265] = anon_sym_DOLLAR;
	v->a[87266] = actions(4596);
	v->a[87267] = 1;
	v->a[87268] = anon_sym_DQUOTE;
	v->a[87269] = actions(4598);
	v->a[87270] = 1;
	v->a[87271] = aux_sym_number_token1;
	v->a[87272] = actions(4600);
	v->a[87273] = 1;
	v->a[87274] = aux_sym_number_token2;
	v->a[87275] = actions(4602);
	v->a[87276] = 1;
	v->a[87277] = anon_sym_DOLLAR_LBRACE;
	v->a[87278] = actions(4604);
	v->a[87279] = 1;
	small_parse_table_4364(v);
}

void	small_parse_table_4364(t_small_parse_table_array *v)
{
	v->a[87280] = anon_sym_DOLLAR_LPAREN;
	v->a[87281] = actions(4606);
	v->a[87282] = 1;
	v->a[87283] = anon_sym_BQUOTE;
	v->a[87284] = actions(4608);
	v->a[87285] = 1;
	v->a[87286] = anon_sym_DOLLAR_BQUOTE;
	v->a[87287] = actions(4845);
	v->a[87288] = 1;
	v->a[87289] = aux_sym__simple_variable_name_token1;
	v->a[87290] = actions(4847);
	v->a[87291] = 1;
	v->a[87292] = sym_variable_name;
	v->a[87293] = state(1476);
	v->a[87294] = 1;
	v->a[87295] = sym__arithmetic_postfix_expression;
	v->a[87296] = state(1478);
	v->a[87297] = 1;
	v->a[87298] = sym__arithmetic_unary_expression;
	v->a[87299] = state(1490);
	small_parse_table_4365(v);
}

/* EOF small_parse_table_872.c */
