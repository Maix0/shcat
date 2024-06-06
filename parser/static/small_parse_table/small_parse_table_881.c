/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_881.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4405(t_small_parse_table_array *v)
{
	v->a[88100] = 1;
	v->a[88101] = aux_sym__simple_variable_name_token1;
	v->a[88102] = actions(4879);
	v->a[88103] = 1;
	v->a[88104] = sym_variable_name;
	v->a[88105] = state(1476);
	v->a[88106] = 1;
	v->a[88107] = sym__arithmetic_postfix_expression;
	v->a[88108] = state(1478);
	v->a[88109] = 1;
	v->a[88110] = sym__arithmetic_unary_expression;
	v->a[88111] = state(1490);
	v->a[88112] = 1;
	v->a[88113] = sym__arithmetic_ternary_expression;
	v->a[88114] = state(1511);
	v->a[88115] = 1;
	v->a[88116] = sym__arithmetic_binary_expression;
	v->a[88117] = actions(4588);
	v->a[88118] = 2;
	v->a[88119] = anon_sym_PLUS_PLUS;
	small_parse_table_4406(v);
}

void	small_parse_table_4406(t_small_parse_table_array *v)
{
	v->a[88120] = anon_sym_DASH_DASH;
	v->a[88121] = actions(4590);
	v->a[88122] = 2;
	v->a[88123] = anon_sym_DASH2;
	v->a[88124] = anon_sym_PLUS2;
	v->a[88125] = state(1376);
	v->a[88126] = 8;
	v->a[88127] = sym__arithmetic_expression;
	v->a[88128] = sym__arithmetic_literal;
	v->a[88129] = sym__arithmetic_parenthesized_expression;
	v->a[88130] = sym_string;
	v->a[88131] = sym_number;
	v->a[88132] = sym_simple_expansion;
	v->a[88133] = sym_expansion;
	v->a[88134] = sym_command_substitution;
	v->a[88135] = 21;
	v->a[88136] = actions(57);
	v->a[88137] = 1;
	v->a[88138] = sym_comment;
	v->a[88139] = actions(4328);
	small_parse_table_4407(v);
}

void	small_parse_table_4407(t_small_parse_table_array *v)
{
	v->a[88140] = 1;
	v->a[88141] = sym_word;
	v->a[88142] = actions(4340);
	v->a[88143] = 1;
	v->a[88144] = anon_sym_DOLLAR;
	v->a[88145] = actions(4346);
	v->a[88146] = 1;
	v->a[88147] = aux_sym_number_token1;
	v->a[88148] = actions(4348);
	v->a[88149] = 1;
	v->a[88150] = aux_sym_number_token2;
	v->a[88151] = actions(4352);
	v->a[88152] = 1;
	v->a[88153] = anon_sym_DOLLAR_LPAREN;
	v->a[88154] = actions(4360);
	v->a[88155] = 1;
	v->a[88156] = sym_extglob_pattern;
	v->a[88157] = actions(4362);
	v->a[88158] = 1;
	v->a[88159] = sym__brace_start;
	small_parse_table_4408(v);
}

void	small_parse_table_4408(t_small_parse_table_array *v)
{
	v->a[88160] = actions(4548);
	v->a[88161] = 1;
	v->a[88162] = anon_sym_LPAREN;
	v->a[88163] = actions(4550);
	v->a[88164] = 1;
	v->a[88165] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88166] = actions(4552);
	v->a[88167] = 1;
	v->a[88168] = sym__special_character;
	v->a[88169] = actions(4554);
	v->a[88170] = 1;
	v->a[88171] = anon_sym_DQUOTE;
	v->a[88172] = actions(4556);
	v->a[88173] = 1;
	v->a[88174] = anon_sym_DOLLAR_LBRACE;
	v->a[88175] = actions(4558);
	v->a[88176] = 1;
	v->a[88177] = anon_sym_BQUOTE;
	v->a[88178] = actions(4560);
	v->a[88179] = 1;
	small_parse_table_4409(v);
}

void	small_parse_table_4409(t_small_parse_table_array *v)
{
	v->a[88180] = anon_sym_DOLLAR_BQUOTE;
	v->a[88181] = state(3393);
	v->a[88182] = 1;
	v->a[88183] = aux_sym__literal_repeat1;
	v->a[88184] = state(4030);
	v->a[88185] = 1;
	v->a[88186] = sym_last_case_item;
	v->a[88187] = actions(4358);
	v->a[88188] = 2;
	v->a[88189] = sym_test_operator;
	v->a[88190] = sym_raw_string;
	v->a[88191] = state(1881);
	v->a[88192] = 2;
	v->a[88193] = sym_case_item;
	v->a[88194] = aux_sym_case_statement_repeat1;
	v->a[88195] = state(3472);
	v->a[88196] = 2;
	v->a[88197] = sym_concatenation;
	v->a[88198] = sym__extglob_blob;
	v->a[88199] = state(3295);
	small_parse_table_4410(v);
}

/* EOF small_parse_table_881.c */
