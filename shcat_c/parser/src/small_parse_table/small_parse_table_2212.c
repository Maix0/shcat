/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2212.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11060(t_small_parse_table_array *v)
{
	v->a[221200] = actions(9902);
	v->a[221201] = 2;
	v->a[221202] = anon_sym_PLUS_PLUS2;
	v->a[221203] = anon_sym_DASH_DASH2;
	v->a[221204] = actions(9904);
	v->a[221205] = 2;
	v->a[221206] = anon_sym_DASH2;
	v->a[221207] = anon_sym_PLUS2;
	v->a[221208] = state(3262);
	v->a[221209] = 9;
	v->a[221210] = sym_subscript;
	v->a[221211] = sym__arithmetic_expression;
	v->a[221212] = sym__arithmetic_literal;
	v->a[221213] = sym__arithmetic_parenthesized_expression;
	v->a[221214] = sym_string;
	v->a[221215] = sym_number;
	v->a[221216] = sym_simple_expansion;
	v->a[221217] = sym_expansion;
	v->a[221218] = sym_command_substitution;
	v->a[221219] = 18;
	small_parse_table_11061(v);
}

void	small_parse_table_11061(t_small_parse_table_array *v)
{
	v->a[221220] = actions(3);
	v->a[221221] = 1;
	v->a[221222] = sym_comment;
	v->a[221223] = actions(4151);
	v->a[221224] = 1;
	v->a[221225] = anon_sym_DOLLAR_LBRACK;
	v->a[221226] = actions(4157);
	v->a[221227] = 1;
	v->a[221228] = anon_sym_DQUOTE;
	v->a[221229] = actions(4161);
	v->a[221230] = 1;
	v->a[221231] = aux_sym_number_token1;
	v->a[221232] = actions(4163);
	v->a[221233] = 1;
	v->a[221234] = aux_sym_number_token2;
	v->a[221235] = actions(4165);
	v->a[221236] = 1;
	v->a[221237] = anon_sym_DOLLAR_LBRACE;
	v->a[221238] = actions(4167);
	v->a[221239] = 1;
	small_parse_table_11062(v);
}

void	small_parse_table_11062(t_small_parse_table_array *v)
{
	v->a[221240] = anon_sym_DOLLAR_LPAREN;
	v->a[221241] = actions(4169);
	v->a[221242] = 1;
	v->a[221243] = anon_sym_BQUOTE;
	v->a[221244] = actions(4171);
	v->a[221245] = 1;
	v->a[221246] = anon_sym_DOLLAR_BQUOTE;
	v->a[221247] = actions(4181);
	v->a[221248] = 1;
	v->a[221249] = sym__brace_start;
	v->a[221250] = actions(9502);
	v->a[221251] = 1;
	v->a[221252] = sym_word;
	v->a[221253] = actions(9508);
	v->a[221254] = 1;
	v->a[221255] = sym__comment_word;
	v->a[221256] = actions(10586);
	v->a[221257] = 1;
	v->a[221258] = anon_sym_DOLLAR;
	v->a[221259] = actions(4149);
	small_parse_table_11063(v);
}

void	small_parse_table_11063(t_small_parse_table_array *v)
{
	v->a[221260] = 2;
	v->a[221261] = anon_sym_LPAREN_LPAREN;
	v->a[221262] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[221263] = actions(4173);
	v->a[221264] = 2;
	v->a[221265] = anon_sym_LT_LPAREN;
	v->a[221266] = anon_sym_GT_LPAREN;
	v->a[221267] = actions(9504);
	v->a[221268] = 2;
	v->a[221269] = sym_test_operator;
	v->a[221270] = sym__special_character;
	v->a[221271] = actions(9506);
	v->a[221272] = 3;
	v->a[221273] = sym__bare_dollar;
	v->a[221274] = sym_raw_string;
	v->a[221275] = sym_ansi_c_string;
	v->a[221276] = state(2580);
	v->a[221277] = 9;
	v->a[221278] = sym_arithmetic_expansion;
	v->a[221279] = sym_brace_expression;
	small_parse_table_11064(v);
}

void	small_parse_table_11064(t_small_parse_table_array *v)
{
	v->a[221280] = sym_string;
	v->a[221281] = sym_translated_string;
	v->a[221282] = sym_number;
	v->a[221283] = sym_simple_expansion;
	v->a[221284] = sym_expansion;
	v->a[221285] = sym_command_substitution;
	v->a[221286] = sym_process_substitution;
	v->a[221287] = 18;
	v->a[221288] = actions(3);
	v->a[221289] = 1;
	v->a[221290] = sym_comment;
	v->a[221291] = actions(4947);
	v->a[221292] = 1;
	v->a[221293] = anon_sym_DOLLAR_LBRACK;
	v->a[221294] = actions(4953);
	v->a[221295] = 1;
	v->a[221296] = anon_sym_DQUOTE;
	v->a[221297] = actions(4957);
	v->a[221298] = 1;
	v->a[221299] = aux_sym_number_token1;
	small_parse_table_11065(v);
}

/* EOF small_parse_table_2212.c */
