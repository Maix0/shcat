/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2231.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11155(t_small_parse_table_array *v)
{
	v->a[223100] = anon_sym_DOLLAR_LPAREN;
	v->a[223101] = actions(9300);
	v->a[223102] = 1;
	v->a[223103] = anon_sym_BQUOTE;
	v->a[223104] = actions(9302);
	v->a[223105] = 1;
	v->a[223106] = anon_sym_DOLLAR_BQUOTE;
	v->a[223107] = actions(10646);
	v->a[223108] = 1;
	v->a[223109] = aux_sym__simple_variable_name_token1;
	v->a[223110] = state(2801);
	v->a[223111] = 1;
	v->a[223112] = sym__arithmetic_binary_expression;
	v->a[223113] = state(2803);
	v->a[223114] = 1;
	v->a[223115] = sym__arithmetic_ternary_expression;
	v->a[223116] = state(2809);
	v->a[223117] = 1;
	v->a[223118] = sym__arithmetic_unary_expression;
	v->a[223119] = state(2825);
	small_parse_table_11156(v);
}

void	small_parse_table_11156(t_small_parse_table_array *v)
{
	v->a[223120] = 1;
	v->a[223121] = sym__arithmetic_postfix_expression;
	v->a[223122] = actions(9282);
	v->a[223123] = 2;
	v->a[223124] = anon_sym_PLUS_PLUS2;
	v->a[223125] = anon_sym_DASH_DASH2;
	v->a[223126] = actions(9284);
	v->a[223127] = 2;
	v->a[223128] = anon_sym_DASH2;
	v->a[223129] = anon_sym_PLUS2;
	v->a[223130] = state(3401);
	v->a[223131] = 9;
	v->a[223132] = sym_subscript;
	v->a[223133] = sym__arithmetic_expression;
	v->a[223134] = sym__arithmetic_literal;
	v->a[223135] = sym__arithmetic_parenthesized_expression;
	v->a[223136] = sym_string;
	v->a[223137] = sym_number;
	v->a[223138] = sym_simple_expansion;
	v->a[223139] = sym_expansion;
	small_parse_table_11157(v);
}

void	small_parse_table_11157(t_small_parse_table_array *v)
{
	v->a[223140] = sym_command_substitution;
	v->a[223141] = 18;
	v->a[223142] = actions(3);
	v->a[223143] = 1;
	v->a[223144] = sym_comment;
	v->a[223145] = actions(707);
	v->a[223146] = 1;
	v->a[223147] = anon_sym_DOLLAR_LBRACK;
	v->a[223148] = actions(713);
	v->a[223149] = 1;
	v->a[223150] = anon_sym_DQUOTE;
	v->a[223151] = actions(717);
	v->a[223152] = 1;
	v->a[223153] = aux_sym_number_token1;
	v->a[223154] = actions(719);
	v->a[223155] = 1;
	v->a[223156] = aux_sym_number_token2;
	v->a[223157] = actions(721);
	v->a[223158] = 1;
	v->a[223159] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_11158(v);
}

void	small_parse_table_11158(t_small_parse_table_array *v)
{
	v->a[223160] = actions(723);
	v->a[223161] = 1;
	v->a[223162] = anon_sym_DOLLAR_LPAREN;
	v->a[223163] = actions(725);
	v->a[223164] = 1;
	v->a[223165] = anon_sym_BQUOTE;
	v->a[223166] = actions(727);
	v->a[223167] = 1;
	v->a[223168] = anon_sym_DOLLAR_BQUOTE;
	v->a[223169] = actions(737);
	v->a[223170] = 1;
	v->a[223171] = sym__brace_start;
	v->a[223172] = actions(10464);
	v->a[223173] = 1;
	v->a[223174] = sym_word;
	v->a[223175] = actions(10470);
	v->a[223176] = 1;
	v->a[223177] = sym__comment_word;
	v->a[223178] = actions(10648);
	v->a[223179] = 1;
	small_parse_table_11159(v);
}

void	small_parse_table_11159(t_small_parse_table_array *v)
{
	v->a[223180] = anon_sym_DOLLAR;
	v->a[223181] = actions(705);
	v->a[223182] = 2;
	v->a[223183] = anon_sym_LPAREN_LPAREN;
	v->a[223184] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[223185] = actions(729);
	v->a[223186] = 2;
	v->a[223187] = anon_sym_LT_LPAREN;
	v->a[223188] = anon_sym_GT_LPAREN;
	v->a[223189] = actions(10466);
	v->a[223190] = 2;
	v->a[223191] = sym_test_operator;
	v->a[223192] = sym__special_character;
	v->a[223193] = actions(10468);
	v->a[223194] = 3;
	v->a[223195] = sym__bare_dollar;
	v->a[223196] = sym_raw_string;
	v->a[223197] = sym_ansi_c_string;
	v->a[223198] = state(999);
	v->a[223199] = 9;
	small_parse_table_11160(v);
}

/* EOF small_parse_table_2231.c */
