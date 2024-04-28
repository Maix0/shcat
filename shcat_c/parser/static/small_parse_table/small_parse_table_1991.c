/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1991.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9955(t_small_parse_table_array *v)
{
	v->a[199100] = anon_sym_DOLLAR_LPAREN;
	v->a[199101] = actions(3630);
	v->a[199102] = 1;
	v->a[199103] = sym_test_operator;
	v->a[199104] = actions(3632);
	v->a[199105] = 1;
	v->a[199106] = sym__brace_start;
	v->a[199107] = actions(8850);
	v->a[199108] = 1;
	v->a[199109] = anon_sym_DOLLAR_LBRACK;
	v->a[199110] = actions(8854);
	v->a[199111] = 1;
	v->a[199112] = anon_sym_DQUOTE;
	v->a[199113] = actions(8858);
	v->a[199114] = 1;
	v->a[199115] = anon_sym_DOLLAR_LBRACE;
	v->a[199116] = actions(8860);
	v->a[199117] = 1;
	v->a[199118] = anon_sym_BQUOTE;
	v->a[199119] = actions(8862);
	small_parse_table_9956(v);
}

void	small_parse_table_9956(t_small_parse_table_array *v)
{
	v->a[199120] = 1;
	v->a[199121] = anon_sym_DOLLAR_BQUOTE;
	v->a[199122] = actions(9030);
	v->a[199123] = 1;
	v->a[199124] = sym__special_character;
	v->a[199125] = state(2270);
	v->a[199126] = 1;
	v->a[199127] = aux_sym__literal_repeat1;
	v->a[199128] = actions(8848);
	v->a[199129] = 2;
	v->a[199130] = anon_sym_LPAREN_LPAREN;
	v->a[199131] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[199132] = actions(8864);
	v->a[199133] = 2;
	v->a[199134] = anon_sym_LT_LPAREN;
	v->a[199135] = anon_sym_GT_LPAREN;
	v->a[199136] = actions(9032);
	v->a[199137] = 2;
	v->a[199138] = sym_raw_string;
	v->a[199139] = sym_ansi_c_string;
	small_parse_table_9957(v);
}

void	small_parse_table_9957(t_small_parse_table_array *v)
{
	v->a[199140] = state(773);
	v->a[199141] = 2;
	v->a[199142] = sym_concatenation;
	v->a[199143] = aux_sym_for_statement_repeat1;
	v->a[199144] = state(1839);
	v->a[199145] = 9;
	v->a[199146] = sym_arithmetic_expansion;
	v->a[199147] = sym_brace_expression;
	v->a[199148] = sym_string;
	v->a[199149] = sym_translated_string;
	v->a[199150] = sym_number;
	v->a[199151] = sym_simple_expansion;
	v->a[199152] = sym_expansion;
	v->a[199153] = sym_command_substitution;
	v->a[199154] = sym_process_substitution;
	v->a[199155] = 20;
	v->a[199156] = actions(71);
	v->a[199157] = 1;
	v->a[199158] = sym_comment;
	v->a[199159] = actions(3397);
	small_parse_table_9958(v);
}

void	small_parse_table_9958(t_small_parse_table_array *v)
{
	v->a[199160] = 1;
	v->a[199161] = anon_sym_DOLLAR;
	v->a[199162] = actions(3401);
	v->a[199163] = 1;
	v->a[199164] = aux_sym_number_token1;
	v->a[199165] = actions(3403);
	v->a[199166] = 1;
	v->a[199167] = aux_sym_number_token2;
	v->a[199168] = actions(3407);
	v->a[199169] = 1;
	v->a[199170] = anon_sym_DOLLAR_LPAREN;
	v->a[199171] = actions(3417);
	v->a[199172] = 1;
	v->a[199173] = sym__brace_start;
	v->a[199174] = actions(3663);
	v->a[199175] = 1;
	v->a[199176] = sym_word;
	v->a[199177] = actions(3667);
	v->a[199178] = 1;
	v->a[199179] = sym_test_operator;
	small_parse_table_9959(v);
}

void	small_parse_table_9959(t_small_parse_table_array *v)
{
	v->a[199180] = actions(8926);
	v->a[199181] = 1;
	v->a[199182] = anon_sym_DOLLAR_LBRACK;
	v->a[199183] = actions(8930);
	v->a[199184] = 1;
	v->a[199185] = anon_sym_DQUOTE;
	v->a[199186] = actions(8934);
	v->a[199187] = 1;
	v->a[199188] = anon_sym_DOLLAR_LBRACE;
	v->a[199189] = actions(8936);
	v->a[199190] = 1;
	v->a[199191] = anon_sym_BQUOTE;
	v->a[199192] = actions(8938);
	v->a[199193] = 1;
	v->a[199194] = anon_sym_DOLLAR_BQUOTE;
	v->a[199195] = actions(9034);
	v->a[199196] = 1;
	v->a[199197] = sym__special_character;
	v->a[199198] = state(2161);
	v->a[199199] = 1;
	small_parse_table_9960(v);
}

/* EOF small_parse_table_1991.c */
