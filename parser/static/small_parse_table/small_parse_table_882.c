/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_882.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4410(t_small_parse_table_array *v)
{
	v->a[88200] = 7;
	v->a[88201] = sym_arithmetic_expansion;
	v->a[88202] = sym_brace_expression;
	v->a[88203] = sym_string;
	v->a[88204] = sym_number;
	v->a[88205] = sym_simple_expansion;
	v->a[88206] = sym_expansion;
	v->a[88207] = sym_command_substitution;
	v->a[88208] = 21;
	v->a[88209] = actions(57);
	v->a[88210] = 1;
	v->a[88211] = sym_comment;
	v->a[88212] = actions(4328);
	v->a[88213] = 1;
	v->a[88214] = sym_word;
	v->a[88215] = actions(4340);
	v->a[88216] = 1;
	v->a[88217] = anon_sym_DOLLAR;
	v->a[88218] = actions(4346);
	v->a[88219] = 1;
	small_parse_table_4411(v);
}

void	small_parse_table_4411(t_small_parse_table_array *v)
{
	v->a[88220] = aux_sym_number_token1;
	v->a[88221] = actions(4348);
	v->a[88222] = 1;
	v->a[88223] = aux_sym_number_token2;
	v->a[88224] = actions(4352);
	v->a[88225] = 1;
	v->a[88226] = anon_sym_DOLLAR_LPAREN;
	v->a[88227] = actions(4360);
	v->a[88228] = 1;
	v->a[88229] = sym_extglob_pattern;
	v->a[88230] = actions(4362);
	v->a[88231] = 1;
	v->a[88232] = sym__brace_start;
	v->a[88233] = actions(4548);
	v->a[88234] = 1;
	v->a[88235] = anon_sym_LPAREN;
	v->a[88236] = actions(4550);
	v->a[88237] = 1;
	v->a[88238] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88239] = actions(4552);
	small_parse_table_4412(v);
}

void	small_parse_table_4412(t_small_parse_table_array *v)
{
	v->a[88240] = 1;
	v->a[88241] = sym__special_character;
	v->a[88242] = actions(4554);
	v->a[88243] = 1;
	v->a[88244] = anon_sym_DQUOTE;
	v->a[88245] = actions(4556);
	v->a[88246] = 1;
	v->a[88247] = anon_sym_DOLLAR_LBRACE;
	v->a[88248] = actions(4558);
	v->a[88249] = 1;
	v->a[88250] = anon_sym_BQUOTE;
	v->a[88251] = actions(4560);
	v->a[88252] = 1;
	v->a[88253] = anon_sym_DOLLAR_BQUOTE;
	v->a[88254] = state(3393);
	v->a[88255] = 1;
	v->a[88256] = aux_sym__literal_repeat1;
	v->a[88257] = state(4025);
	v->a[88258] = 1;
	v->a[88259] = sym_last_case_item;
	small_parse_table_4413(v);
}

void	small_parse_table_4413(t_small_parse_table_array *v)
{
	v->a[88260] = actions(4358);
	v->a[88261] = 2;
	v->a[88262] = sym_test_operator;
	v->a[88263] = sym_raw_string;
	v->a[88264] = state(1881);
	v->a[88265] = 2;
	v->a[88266] = sym_case_item;
	v->a[88267] = aux_sym_case_statement_repeat1;
	v->a[88268] = state(3472);
	v->a[88269] = 2;
	v->a[88270] = sym_concatenation;
	v->a[88271] = sym__extglob_blob;
	v->a[88272] = state(3295);
	v->a[88273] = 7;
	v->a[88274] = sym_arithmetic_expansion;
	v->a[88275] = sym_brace_expression;
	v->a[88276] = sym_string;
	v->a[88277] = sym_number;
	v->a[88278] = sym_simple_expansion;
	v->a[88279] = sym_expansion;
	small_parse_table_4414(v);
}

void	small_parse_table_4414(t_small_parse_table_array *v)
{
	v->a[88280] = sym_command_substitution;
	v->a[88281] = 6;
	v->a[88282] = actions(3);
	v->a[88283] = 1;
	v->a[88284] = sym_comment;
	v->a[88285] = actions(4885);
	v->a[88286] = 1;
	v->a[88287] = sym_variable_name;
	v->a[88288] = actions(828);
	v->a[88289] = 2;
	v->a[88290] = sym_test_operator;
	v->a[88291] = sym__brace_start;
	v->a[88292] = actions(4883);
	v->a[88293] = 2;
	v->a[88294] = aux_sym__simple_variable_name_token1;
	v->a[88295] = aux_sym__multiline_variable_name_token1;
	v->a[88296] = actions(4881);
	v->a[88297] = 9;
	v->a[88298] = anon_sym_BANG;
	v->a[88299] = anon_sym_DASH;
	small_parse_table_4415(v);
}

/* EOF small_parse_table_882.c */
