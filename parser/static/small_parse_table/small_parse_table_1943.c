/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1943.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9715(t_small_parse_table_array *v)
{
	v->a[194300] = actions(8589);
	v->a[194301] = 1;
	v->a[194302] = anon_sym_BQUOTE;
	v->a[194303] = actions(8591);
	v->a[194304] = 1;
	v->a[194305] = anon_sym_DOLLAR_BQUOTE;
	v->a[194306] = actions(8595);
	v->a[194307] = 1;
	v->a[194308] = sym_test_operator;
	v->a[194309] = actions(8597);
	v->a[194310] = 1;
	v->a[194311] = sym__brace_start;
	v->a[194312] = actions(8710);
	v->a[194313] = 1;
	v->a[194314] = anon_sym_RPAREN;
	v->a[194315] = state(5365);
	v->a[194316] = 1;
	v->a[194317] = aux_sym__literal_repeat1;
	v->a[194318] = actions(8567);
	v->a[194319] = 2;
	small_parse_table_9716(v);
}

void	small_parse_table_9716(t_small_parse_table_array *v)
{
	v->a[194320] = anon_sym_LPAREN_LPAREN;
	v->a[194321] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[194322] = actions(8579);
	v->a[194323] = 2;
	v->a[194324] = sym_raw_string;
	v->a[194325] = sym_ansi_c_string;
	v->a[194326] = actions(8593);
	v->a[194327] = 2;
	v->a[194328] = anon_sym_LT_LPAREN;
	v->a[194329] = anon_sym_GT_LPAREN;
	v->a[194330] = state(3604);
	v->a[194331] = 2;
	v->a[194332] = sym_concatenation;
	v->a[194333] = aux_sym_for_statement_repeat1;
	v->a[194334] = state(5045);
	v->a[194335] = 9;
	v->a[194336] = sym_arithmetic_expansion;
	v->a[194337] = sym_brace_expression;
	v->a[194338] = sym_string;
	v->a[194339] = sym_translated_string;
	small_parse_table_9717(v);
}

void	small_parse_table_9717(t_small_parse_table_array *v)
{
	v->a[194340] = sym_number;
	v->a[194341] = sym_simple_expansion;
	v->a[194342] = sym_expansion;
	v->a[194343] = sym_command_substitution;
	v->a[194344] = sym_process_substitution;
	v->a[194345] = 3;
	v->a[194346] = actions(71);
	v->a[194347] = 1;
	v->a[194348] = sym_comment;
	v->a[194349] = actions(5766);
	v->a[194350] = 10;
	v->a[194351] = anon_sym_LT;
	v->a[194352] = anon_sym_GT;
	v->a[194353] = anon_sym_AMP_GT;
	v->a[194354] = anon_sym_LT_AMP;
	v->a[194355] = anon_sym_GT_AMP;
	v->a[194356] = anon_sym_DOLLAR;
	v->a[194357] = aux_sym_number_token1;
	v->a[194358] = aux_sym_number_token2;
	v->a[194359] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_9718(v);
}

void	small_parse_table_9718(t_small_parse_table_array *v)
{
	v->a[194360] = sym_word;
	v->a[194361] = actions(5768);
	v->a[194362] = 22;
	v->a[194363] = sym_file_descriptor;
	v->a[194364] = sym_variable_name;
	v->a[194365] = sym_test_operator;
	v->a[194366] = sym__brace_start;
	v->a[194367] = anon_sym_LPAREN_LPAREN;
	v->a[194368] = anon_sym_GT_GT;
	v->a[194369] = anon_sym_AMP_GT_GT;
	v->a[194370] = anon_sym_GT_PIPE;
	v->a[194371] = anon_sym_LT_AMP_DASH;
	v->a[194372] = anon_sym_GT_AMP_DASH;
	v->a[194373] = anon_sym_LT_LT_LT;
	v->a[194374] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[194375] = anon_sym_DOLLAR_LBRACK;
	v->a[194376] = sym__special_character;
	v->a[194377] = anon_sym_DQUOTE;
	v->a[194378] = sym_raw_string;
	v->a[194379] = sym_ansi_c_string;
	small_parse_table_9719(v);
}

void	small_parse_table_9719(t_small_parse_table_array *v)
{
	v->a[194380] = anon_sym_DOLLAR_LBRACE;
	v->a[194381] = anon_sym_BQUOTE;
	v->a[194382] = anon_sym_DOLLAR_BQUOTE;
	v->a[194383] = anon_sym_LT_LPAREN;
	v->a[194384] = anon_sym_GT_LPAREN;
	v->a[194385] = 8;
	v->a[194386] = actions(3);
	v->a[194387] = 1;
	v->a[194388] = sym_comment;
	v->a[194389] = actions(1235);
	v->a[194390] = 1;
	v->a[194391] = sym_file_descriptor;
	v->a[194392] = actions(7673);
	v->a[194393] = 1;
	v->a[194394] = anon_sym_DQUOTE;
	v->a[194395] = actions(7677);
	v->a[194396] = 1;
	v->a[194397] = sym_variable_name;
	v->a[194398] = state(4393);
	v->a[194399] = 1;
	small_parse_table_9720(v);
}

/* EOF small_parse_table_1943.c */
