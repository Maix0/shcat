/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_153.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_765(t_small_parse_table_array *v)
{
	v->a[15300] = sym__special_character;
	v->a[15301] = anon_sym_DQUOTE;
	v->a[15302] = sym_raw_string;
	v->a[15303] = sym_ansi_c_string;
	v->a[15304] = aux_sym_number_token1;
	v->a[15305] = aux_sym_number_token2;
	v->a[15306] = anon_sym_DOLLAR_LBRACE;
	v->a[15307] = anon_sym_DOLLAR_LPAREN;
	v->a[15308] = anon_sym_BQUOTE;
	v->a[15309] = anon_sym_DOLLAR_BQUOTE;
	v->a[15310] = anon_sym_LT_LPAREN;
	v->a[15311] = anon_sym_GT_LPAREN;
	v->a[15312] = sym_word;
	v->a[15313] = 22;
	v->a[15314] = actions(3);
	v->a[15315] = 1;
	v->a[15316] = sym_comment;
	v->a[15317] = actions(3433);
	v->a[15318] = 1;
	v->a[15319] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_766(v);
}

void	small_parse_table_766(t_small_parse_table_array *v)
{
	v->a[15320] = actions(3435);
	v->a[15321] = 1;
	v->a[15322] = anon_sym_DOLLAR;
	v->a[15323] = actions(3437);
	v->a[15324] = 1;
	v->a[15325] = sym__special_character;
	v->a[15326] = actions(3439);
	v->a[15327] = 1;
	v->a[15328] = anon_sym_DQUOTE;
	v->a[15329] = actions(3441);
	v->a[15330] = 1;
	v->a[15331] = aux_sym_number_token1;
	v->a[15332] = actions(3443);
	v->a[15333] = 1;
	v->a[15334] = aux_sym_number_token2;
	v->a[15335] = actions(3445);
	v->a[15336] = 1;
	v->a[15337] = anon_sym_DOLLAR_LBRACE;
	v->a[15338] = actions(3447);
	v->a[15339] = 1;
	small_parse_table_767(v);
}

void	small_parse_table_767(t_small_parse_table_array *v)
{
	v->a[15340] = anon_sym_DOLLAR_LPAREN;
	v->a[15341] = actions(3449);
	v->a[15342] = 1;
	v->a[15343] = anon_sym_BQUOTE;
	v->a[15344] = actions(3451);
	v->a[15345] = 1;
	v->a[15346] = anon_sym_DOLLAR_BQUOTE;
	v->a[15347] = actions(3455);
	v->a[15348] = 1;
	v->a[15349] = aux_sym__simple_variable_name_token1;
	v->a[15350] = actions(3457);
	v->a[15351] = 1;
	v->a[15352] = sym_test_operator;
	v->a[15353] = actions(3459);
	v->a[15354] = 1;
	v->a[15355] = sym__brace_start;
	v->a[15356] = state(2190);
	v->a[15357] = 1;
	v->a[15358] = aux_sym__literal_repeat1;
	v->a[15359] = actions(3431);
	small_parse_table_768(v);
}

void	small_parse_table_768(t_small_parse_table_array *v)
{
	v->a[15360] = 2;
	v->a[15361] = anon_sym_LPAREN_LPAREN;
	v->a[15362] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15363] = actions(3453);
	v->a[15364] = 2;
	v->a[15365] = anon_sym_LT_LPAREN;
	v->a[15366] = anon_sym_GT_LPAREN;
	v->a[15367] = state(695);
	v->a[15368] = 2;
	v->a[15369] = sym_concatenation;
	v->a[15370] = aux_sym_unset_command_repeat1;
	v->a[15371] = actions(2299);
	v->a[15372] = 3;
	v->a[15373] = sym_file_descriptor;
	v->a[15374] = ts_builtin_sym_end;
	v->a[15375] = aux_sym_heredoc_redirect_token1;
	v->a[15376] = actions(3429);
	v->a[15377] = 3;
	v->a[15378] = sym_raw_string;
	v->a[15379] = sym_ansi_c_string;
	small_parse_table_769(v);
}

void	small_parse_table_769(t_small_parse_table_array *v)
{
	v->a[15380] = sym_word;
	v->a[15381] = state(1681);
	v->a[15382] = 9;
	v->a[15383] = sym_arithmetic_expansion;
	v->a[15384] = sym_brace_expression;
	v->a[15385] = sym_string;
	v->a[15386] = sym_translated_string;
	v->a[15387] = sym_number;
	v->a[15388] = sym_simple_expansion;
	v->a[15389] = sym_expansion;
	v->a[15390] = sym_command_substitution;
	v->a[15391] = sym_process_substitution;
	v->a[15392] = actions(2297);
	v->a[15393] = 19;
	v->a[15394] = anon_sym_SEMI;
	v->a[15395] = anon_sym_PIPE_PIPE;
	v->a[15396] = anon_sym_AMP_AMP;
	v->a[15397] = anon_sym_PIPE;
	v->a[15398] = anon_sym_AMP;
	v->a[15399] = anon_sym_LT;
	small_parse_table_770(v);
}

/* EOF small_parse_table_153.c */
