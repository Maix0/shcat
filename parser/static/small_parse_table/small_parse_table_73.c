/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_73.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_365(t_small_parse_table_array *v)
{
	v->a[7300] = sym_compound_statement;
	v->a[7301] = sym_subshell;
	v->a[7302] = sym_list;
	v->a[7303] = sym_negated_command;
	v->a[7304] = sym_command;
	v->a[7305] = sym__variable_assignments;
	v->a[7306] = 30;
	v->a[7307] = actions(3);
	v->a[7308] = 1;
	v->a[7309] = sym_comment;
	v->a[7310] = actions(9);
	v->a[7311] = 1;
	v->a[7312] = anon_sym_for;
	v->a[7313] = actions(13);
	v->a[7314] = 1;
	v->a[7315] = anon_sym_if;
	v->a[7316] = actions(15);
	v->a[7317] = 1;
	v->a[7318] = anon_sym_case;
	v->a[7319] = actions(17);
	small_parse_table_366(v);
}

void	small_parse_table_366(t_small_parse_table_array *v)
{
	v->a[7320] = 1;
	v->a[7321] = anon_sym_LPAREN;
	v->a[7322] = actions(19);
	v->a[7323] = 1;
	v->a[7324] = anon_sym_LBRACE;
	v->a[7325] = actions(53);
	v->a[7326] = 1;
	v->a[7327] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7328] = actions(55);
	v->a[7329] = 1;
	v->a[7330] = anon_sym_DOLLAR;
	v->a[7331] = actions(57);
	v->a[7332] = 1;
	v->a[7333] = anon_sym_DQUOTE;
	v->a[7334] = actions(61);
	v->a[7335] = 1;
	v->a[7336] = anon_sym_DOLLAR_LBRACE;
	v->a[7337] = actions(63);
	v->a[7338] = 1;
	v->a[7339] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_367(v);
}

void	small_parse_table_367(t_small_parse_table_array *v)
{
	v->a[7340] = actions(65);
	v->a[7341] = 1;
	v->a[7342] = anon_sym_BQUOTE;
	v->a[7343] = actions(206);
	v->a[7344] = 1;
	v->a[7345] = sym_word;
	v->a[7346] = actions(208);
	v->a[7347] = 1;
	v->a[7348] = anon_sym_BANG;
	v->a[7349] = actions(214);
	v->a[7350] = 1;
	v->a[7351] = sym_variable_name;
	v->a[7352] = state(106);
	v->a[7353] = 1;
	v->a[7354] = aux_sym__statements_repeat1;
	v->a[7355] = state(227);
	v->a[7356] = 1;
	v->a[7357] = sym_command_name;
	v->a[7358] = state(277);
	v->a[7359] = 1;
	small_parse_table_368(v);
}

void	small_parse_table_368(t_small_parse_table_array *v)
{
	v->a[7360] = sym_variable_assignment;
	v->a[7361] = state(506);
	v->a[7362] = 1;
	v->a[7363] = aux_sym_command_repeat1;
	v->a[7364] = state(564);
	v->a[7365] = 1;
	v->a[7366] = sym_file_redirect;
	v->a[7367] = state(602);
	v->a[7368] = 1;
	v->a[7369] = sym_concatenation;
	v->a[7370] = state(911);
	v->a[7371] = 1;
	v->a[7372] = sym_pipeline;
	v->a[7373] = state(1001);
	v->a[7374] = 1;
	v->a[7375] = aux_sym_redirected_statement_repeat2;
	v->a[7376] = state(1606);
	v->a[7377] = 1;
	v->a[7378] = sym__statement_not_pipeline;
	v->a[7379] = state(1649);
	small_parse_table_369(v);
}

void	small_parse_table_369(t_small_parse_table_array *v)
{
	v->a[7380] = 1;
	v->a[7381] = sym__statements;
	v->a[7382] = actions(11);
	v->a[7383] = 2;
	v->a[7384] = anon_sym_while;
	v->a[7385] = anon_sym_until;
	v->a[7386] = actions(212);
	v->a[7387] = 2;
	v->a[7388] = sym_raw_string;
	v->a[7389] = sym_number;
	v->a[7390] = state(327);
	v->a[7391] = 5;
	v->a[7392] = sym_arithmetic_expansion;
	v->a[7393] = sym_string;
	v->a[7394] = sym_simple_expansion;
	v->a[7395] = sym_expansion;
	v->a[7396] = sym_command_substitution;
	v->a[7397] = actions(210);
	v->a[7398] = 7;
	v->a[7399] = anon_sym_LT;
	small_parse_table_370(v);
}

/* EOF small_parse_table_73.c */
