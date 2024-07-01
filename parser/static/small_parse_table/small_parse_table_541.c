/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_541.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2705(t_small_parse_table_array *v)
{
	v->a[54100] = actions(1746);
	v->a[54101] = 1;
	v->a[54102] = anon_sym_BANG;
	v->a[54103] = actions(1754);
	v->a[54104] = 1;
	v->a[54105] = anon_sym_TILDE;
	v->a[54106] = actions(1756);
	v->a[54107] = 1;
	v->a[54108] = anon_sym_DOLLAR;
	v->a[54109] = actions(1758);
	v->a[54110] = 1;
	v->a[54111] = anon_sym_DQUOTE;
	v->a[54112] = actions(1762);
	v->a[54113] = 1;
	v->a[54114] = anon_sym_DOLLAR_LBRACE;
	v->a[54115] = actions(1764);
	v->a[54116] = 1;
	v->a[54117] = anon_sym_DOLLAR_LPAREN;
	v->a[54118] = actions(1766);
	v->a[54119] = 1;
	small_parse_table_2706(v);
}

void	small_parse_table_2706(t_small_parse_table_array *v)
{
	v->a[54120] = anon_sym_BQUOTE;
	v->a[54121] = actions(1768);
	v->a[54122] = 1;
	v->a[54123] = sym_variable_name;
	v->a[54124] = actions(1898);
	v->a[54125] = 1;
	v->a[54126] = anon_sym_RPAREN_RPAREN;
	v->a[54127] = actions(1750);
	v->a[54128] = 2;
	v->a[54129] = anon_sym_PLUS_PLUS;
	v->a[54130] = anon_sym_DASH_DASH;
	v->a[54131] = actions(1752);
	v->a[54132] = 2;
	v->a[54133] = anon_sym_DASH2;
	v->a[54134] = anon_sym_PLUS2;
	v->a[54135] = actions(1760);
	v->a[54136] = 2;
	v->a[54137] = sym_number;
	v->a[54138] = aux_sym__simple_variable_name_token1;
	v->a[54139] = state(271);
	small_parse_table_2707(v);
}

void	small_parse_table_2707(t_small_parse_table_array *v)
{
	v->a[54140] = 3;
	v->a[54141] = sym_string;
	v->a[54142] = sym_simple_expansion;
	v->a[54143] = sym_expansion;
	v->a[54144] = state(339);
	v->a[54145] = 8;
	v->a[54146] = sym__arithmetic_expression;
	v->a[54147] = sym_arithmetic_literal;
	v->a[54148] = sym_arithmetic_binary_expression;
	v->a[54149] = sym_arithmetic_ternary_expression;
	v->a[54150] = sym_arithmetic_unary_expression;
	v->a[54151] = sym_arithmetic_postfix_expression;
	v->a[54152] = sym_arithmetic_parenthesized_expression;
	v->a[54153] = sym_command_substitution;
	v->a[54154] = 3;
	v->a[54155] = actions(3);
	v->a[54156] = 1;
	v->a[54157] = sym_comment;
	v->a[54158] = actions(1577);
	v->a[54159] = 2;
	small_parse_table_2708(v);
}

void	small_parse_table_2708(t_small_parse_table_array *v)
{
	v->a[54160] = sym_file_descriptor;
	v->a[54161] = sym_variable_name;
	v->a[54162] = actions(1573);
	v->a[54163] = 25;
	v->a[54164] = anon_sym_for;
	v->a[54165] = anon_sym_while;
	v->a[54166] = anon_sym_until;
	v->a[54167] = anon_sym_if;
	v->a[54168] = anon_sym_case;
	v->a[54169] = anon_sym_LPAREN;
	v->a[54170] = anon_sym_LBRACE;
	v->a[54171] = anon_sym_BANG;
	v->a[54172] = anon_sym_LT;
	v->a[54173] = anon_sym_GT;
	v->a[54174] = anon_sym_GT_GT;
	v->a[54175] = anon_sym_LT_AMP;
	v->a[54176] = anon_sym_GT_AMP;
	v->a[54177] = anon_sym_GT_PIPE;
	v->a[54178] = anon_sym_LT_AMP_DASH;
	v->a[54179] = anon_sym_GT_AMP_DASH;
	small_parse_table_2709(v);
}

void	small_parse_table_2709(t_small_parse_table_array *v)
{
	v->a[54180] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54181] = anon_sym_DOLLAR;
	v->a[54182] = anon_sym_DQUOTE;
	v->a[54183] = sym_raw_string;
	v->a[54184] = sym_number;
	v->a[54185] = anon_sym_DOLLAR_LBRACE;
	v->a[54186] = anon_sym_DOLLAR_LPAREN;
	v->a[54187] = anon_sym_BQUOTE;
	v->a[54188] = sym_word;
	v->a[54189] = 3;
	v->a[54190] = actions(3);
	v->a[54191] = 1;
	v->a[54192] = sym_comment;
	v->a[54193] = actions(1015);
	v->a[54194] = 3;
	v->a[54195] = sym_file_descriptor;
	v->a[54196] = sym__concat;
	v->a[54197] = sym_variable_name;
	v->a[54198] = actions(1013);
	v->a[54199] = 23;
	small_parse_table_2710(v);
}

/* EOF small_parse_table_541.c */
