/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_451.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2255(t_small_parse_table_array *v)
{
	v->a[45100] = sym_number;
	v->a[45101] = aux_sym__simple_variable_name_token1;
	v->a[45102] = state(255);
	v->a[45103] = 3;
	v->a[45104] = sym_string;
	v->a[45105] = sym_simple_expansion;
	v->a[45106] = sym_expansion;
	v->a[45107] = state(323);
	v->a[45108] = 8;
	v->a[45109] = sym__arithmetic_expression;
	v->a[45110] = sym_arithmetic_literal;
	v->a[45111] = sym_arithmetic_binary_expression;
	v->a[45112] = sym_arithmetic_ternary_expression;
	v->a[45113] = sym_arithmetic_unary_expression;
	v->a[45114] = sym_arithmetic_postfix_expression;
	v->a[45115] = sym_arithmetic_parenthesized_expression;
	v->a[45116] = sym_command_substitution;
	v->a[45117] = 18;
	v->a[45118] = actions(3);
	v->a[45119] = 1;
	small_parse_table_2256(v);
}

void	small_parse_table_2256(t_small_parse_table_array *v)
{
	v->a[45120] = sym_comment;
	v->a[45121] = actions(1632);
	v->a[45122] = 1;
	v->a[45123] = anon_sym_esac;
	v->a[45124] = actions(1634);
	v->a[45125] = 1;
	v->a[45126] = anon_sym_LPAREN;
	v->a[45127] = actions(1638);
	v->a[45128] = 1;
	v->a[45129] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45130] = actions(1640);
	v->a[45131] = 1;
	v->a[45132] = anon_sym_DOLLAR;
	v->a[45133] = actions(1642);
	v->a[45134] = 1;
	v->a[45135] = anon_sym_DQUOTE;
	v->a[45136] = actions(1644);
	v->a[45137] = 1;
	v->a[45138] = anon_sym_DOLLAR_LBRACE;
	v->a[45139] = actions(1646);
	small_parse_table_2257(v);
}

void	small_parse_table_2257(t_small_parse_table_array *v)
{
	v->a[45140] = 1;
	v->a[45141] = anon_sym_DOLLAR_LPAREN;
	v->a[45142] = actions(1648);
	v->a[45143] = 1;
	v->a[45144] = anon_sym_BQUOTE;
	v->a[45145] = actions(1650);
	v->a[45146] = 1;
	v->a[45147] = sym_extglob_pattern;
	v->a[45148] = state(953);
	v->a[45149] = 1;
	v->a[45150] = sym_terminator;
	v->a[45151] = state(1063);
	v->a[45152] = 1;
	v->a[45153] = aux_sym_case_statement_repeat1;
	v->a[45154] = state(1713);
	v->a[45155] = 1;
	v->a[45156] = sym_case_item;
	v->a[45157] = state(1929);
	v->a[45158] = 1;
	v->a[45159] = sym__case_item_last;
	small_parse_table_2258(v);
}

void	small_parse_table_2258(t_small_parse_table_array *v)
{
	v->a[45160] = state(1871);
	v->a[45161] = 2;
	v->a[45162] = sym_concatenation;
	v->a[45163] = sym__extglob_blob;
	v->a[45164] = actions(1630);
	v->a[45165] = 3;
	v->a[45166] = sym_raw_string;
	v->a[45167] = sym_number;
	v->a[45168] = sym_word;
	v->a[45169] = actions(1636);
	v->a[45170] = 4;
	v->a[45171] = anon_sym_SEMI_SEMI;
	v->a[45172] = aux_sym_heredoc_redirect_token1;
	v->a[45173] = anon_sym_AMP;
	v->a[45174] = anon_sym_SEMI;
	v->a[45175] = state(1804);
	v->a[45176] = 5;
	v->a[45177] = sym_arithmetic_expansion;
	v->a[45178] = sym_string;
	v->a[45179] = sym_simple_expansion;
	small_parse_table_2259(v);
}

void	small_parse_table_2259(t_small_parse_table_array *v)
{
	v->a[45180] = sym_expansion;
	v->a[45181] = sym_command_substitution;
	v->a[45182] = 18;
	v->a[45183] = actions(3);
	v->a[45184] = 1;
	v->a[45185] = sym_comment;
	v->a[45186] = actions(1634);
	v->a[45187] = 1;
	v->a[45188] = anon_sym_LPAREN;
	v->a[45189] = actions(1638);
	v->a[45190] = 1;
	v->a[45191] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45192] = actions(1640);
	v->a[45193] = 1;
	v->a[45194] = anon_sym_DOLLAR;
	v->a[45195] = actions(1642);
	v->a[45196] = 1;
	v->a[45197] = anon_sym_DQUOTE;
	v->a[45198] = actions(1644);
	v->a[45199] = 1;
	small_parse_table_2260(v);
}

/* EOF small_parse_table_451.c */
