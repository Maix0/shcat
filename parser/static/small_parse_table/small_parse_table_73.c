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
	v->a[7300] = anon_sym_BANG;
	v->a[7301] = actions(219);
	v->a[7302] = 1;
	v->a[7303] = sym_file_descriptor;
	v->a[7304] = actions(221);
	v->a[7305] = 1;
	v->a[7306] = sym_variable_name;
	v->a[7307] = state(125);
	v->a[7308] = 1;
	v->a[7309] = aux_sym__statements_repeat1;
	v->a[7310] = state(173);
	v->a[7311] = 1;
	v->a[7312] = sym_command_name;
	v->a[7313] = state(224);
	v->a[7314] = 1;
	v->a[7315] = sym_variable_assignment;
	v->a[7316] = state(603);
	v->a[7317] = 1;
	v->a[7318] = sym_concatenation;
	v->a[7319] = state(652);
	small_parse_table_366(v);
}

void	small_parse_table_366(t_small_parse_table_array *v)
{
	v->a[7320] = 1;
	v->a[7321] = sym_file_redirect;
	v->a[7322] = state(673);
	v->a[7323] = 1;
	v->a[7324] = aux_sym_command_repeat1;
	v->a[7325] = state(1020);
	v->a[7326] = 1;
	v->a[7327] = sym_pipeline;
	v->a[7328] = state(1136);
	v->a[7329] = 1;
	v->a[7330] = aux_sym_redirected_statement_repeat2;
	v->a[7331] = state(1898);
	v->a[7332] = 1;
	v->a[7333] = sym__statement_not_pipeline;
	v->a[7334] = state(1991);
	v->a[7335] = 1;
	v->a[7336] = sym__statements;
	v->a[7337] = actions(11);
	v->a[7338] = 2;
	v->a[7339] = anon_sym_while;
	small_parse_table_367(v);
}

void	small_parse_table_367(t_small_parse_table_array *v)
{
	v->a[7340] = anon_sym_until;
	v->a[7341] = actions(217);
	v->a[7342] = 2;
	v->a[7343] = sym_raw_string;
	v->a[7344] = sym_number;
	v->a[7345] = state(362);
	v->a[7346] = 5;
	v->a[7347] = sym_arithmetic_expansion;
	v->a[7348] = sym_string;
	v->a[7349] = sym_simple_expansion;
	v->a[7350] = sym_expansion;
	v->a[7351] = sym_command_substitution;
	v->a[7352] = actions(215);
	v->a[7353] = 7;
	v->a[7354] = anon_sym_LT;
	v->a[7355] = anon_sym_GT;
	v->a[7356] = anon_sym_GT_GT;
	v->a[7357] = anon_sym_LT_AMP;
	v->a[7358] = anon_sym_GT_AMP;
	v->a[7359] = anon_sym_GT_PIPE;
	small_parse_table_368(v);
}

void	small_parse_table_368(t_small_parse_table_array *v)
{
	v->a[7360] = anon_sym_LT_GT;
	v->a[7361] = state(1003);
	v->a[7362] = 12;
	v->a[7363] = sym_redirected_statement;
	v->a[7364] = sym_for_statement;
	v->a[7365] = sym_while_statement;
	v->a[7366] = sym_if_statement;
	v->a[7367] = sym_case_statement;
	v->a[7368] = sym_function_definition;
	v->a[7369] = sym_compound_statement;
	v->a[7370] = sym_subshell;
	v->a[7371] = sym_list;
	v->a[7372] = sym_negated_command;
	v->a[7373] = sym_command;
	v->a[7374] = sym__variable_assignments;
	v->a[7375] = 31;
	v->a[7376] = actions(3);
	v->a[7377] = 1;
	v->a[7378] = sym_comment;
	v->a[7379] = actions(9);
	small_parse_table_369(v);
}

void	small_parse_table_369(t_small_parse_table_array *v)
{
	v->a[7380] = 1;
	v->a[7381] = anon_sym_for;
	v->a[7382] = actions(13);
	v->a[7383] = 1;
	v->a[7384] = anon_sym_if;
	v->a[7385] = actions(15);
	v->a[7386] = 1;
	v->a[7387] = anon_sym_case;
	v->a[7388] = actions(17);
	v->a[7389] = 1;
	v->a[7390] = anon_sym_LPAREN;
	v->a[7391] = actions(19);
	v->a[7392] = 1;
	v->a[7393] = anon_sym_LBRACE;
	v->a[7394] = actions(55);
	v->a[7395] = 1;
	v->a[7396] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7397] = actions(57);
	v->a[7398] = 1;
	v->a[7399] = anon_sym_DOLLAR;
	small_parse_table_370(v);
}

/* EOF small_parse_table_73.c */
