/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_811.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4055(t_small_parse_table_array *v)
{
	v->a[81100] = sym__special_character;
	v->a[81101] = actions(4554);
	v->a[81102] = 1;
	v->a[81103] = anon_sym_DQUOTE;
	v->a[81104] = actions(4556);
	v->a[81105] = 1;
	v->a[81106] = anon_sym_DOLLAR_LBRACE;
	v->a[81107] = actions(4558);
	v->a[81108] = 1;
	v->a[81109] = anon_sym_BQUOTE;
	v->a[81110] = actions(4560);
	v->a[81111] = 1;
	v->a[81112] = anon_sym_DOLLAR_BQUOTE;
	v->a[81113] = actions(4570);
	v->a[81114] = 1;
	v->a[81115] = anon_sym_esac;
	v->a[81116] = state(3393);
	v->a[81117] = 1;
	v->a[81118] = aux_sym__literal_repeat1;
	v->a[81119] = state(3946);
	small_parse_table_4056(v);
}

void	small_parse_table_4056(t_small_parse_table_array *v)
{
	v->a[81120] = 1;
	v->a[81121] = sym_last_case_item;
	v->a[81122] = actions(4358);
	v->a[81123] = 2;
	v->a[81124] = sym_test_operator;
	v->a[81125] = sym_raw_string;
	v->a[81126] = state(1779);
	v->a[81127] = 2;
	v->a[81128] = sym_case_item;
	v->a[81129] = aux_sym_case_statement_repeat1;
	v->a[81130] = state(3472);
	v->a[81131] = 2;
	v->a[81132] = sym_concatenation;
	v->a[81133] = sym__extglob_blob;
	v->a[81134] = state(3295);
	v->a[81135] = 7;
	v->a[81136] = sym_arithmetic_expansion;
	v->a[81137] = sym_brace_expression;
	v->a[81138] = sym_string;
	v->a[81139] = sym_number;
	small_parse_table_4057(v);
}

void	small_parse_table_4057(t_small_parse_table_array *v)
{
	v->a[81140] = sym_simple_expansion;
	v->a[81141] = sym_expansion;
	v->a[81142] = sym_command_substitution;
	v->a[81143] = 22;
	v->a[81144] = actions(57);
	v->a[81145] = 1;
	v->a[81146] = sym_comment;
	v->a[81147] = actions(4328);
	v->a[81148] = 1;
	v->a[81149] = sym_word;
	v->a[81150] = actions(4340);
	v->a[81151] = 1;
	v->a[81152] = anon_sym_DOLLAR;
	v->a[81153] = actions(4346);
	v->a[81154] = 1;
	v->a[81155] = aux_sym_number_token1;
	v->a[81156] = actions(4348);
	v->a[81157] = 1;
	v->a[81158] = aux_sym_number_token2;
	v->a[81159] = actions(4352);
	small_parse_table_4058(v);
}

void	small_parse_table_4058(t_small_parse_table_array *v)
{
	v->a[81160] = 1;
	v->a[81161] = anon_sym_DOLLAR_LPAREN;
	v->a[81162] = actions(4360);
	v->a[81163] = 1;
	v->a[81164] = sym_extglob_pattern;
	v->a[81165] = actions(4362);
	v->a[81166] = 1;
	v->a[81167] = sym__brace_start;
	v->a[81168] = actions(4443);
	v->a[81169] = 1;
	v->a[81170] = anon_sym_esac;
	v->a[81171] = actions(4548);
	v->a[81172] = 1;
	v->a[81173] = anon_sym_LPAREN;
	v->a[81174] = actions(4550);
	v->a[81175] = 1;
	v->a[81176] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81177] = actions(4552);
	v->a[81178] = 1;
	v->a[81179] = sym__special_character;
	small_parse_table_4059(v);
}

void	small_parse_table_4059(t_small_parse_table_array *v)
{
	v->a[81180] = actions(4554);
	v->a[81181] = 1;
	v->a[81182] = anon_sym_DQUOTE;
	v->a[81183] = actions(4556);
	v->a[81184] = 1;
	v->a[81185] = anon_sym_DOLLAR_LBRACE;
	v->a[81186] = actions(4558);
	v->a[81187] = 1;
	v->a[81188] = anon_sym_BQUOTE;
	v->a[81189] = actions(4560);
	v->a[81190] = 1;
	v->a[81191] = anon_sym_DOLLAR_BQUOTE;
	v->a[81192] = state(3393);
	v->a[81193] = 1;
	v->a[81194] = aux_sym__literal_repeat1;
	v->a[81195] = state(3827);
	v->a[81196] = 1;
	v->a[81197] = sym_last_case_item;
	v->a[81198] = actions(4358);
	v->a[81199] = 2;
	small_parse_table_4060(v);
}

/* EOF small_parse_table_811.c */
