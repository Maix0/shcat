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
	v->a[7300] = actions(55);
	v->a[7301] = 1;
	v->a[7302] = anon_sym_DOLLAR;
	v->a[7303] = actions(57);
	v->a[7304] = 1;
	v->a[7305] = anon_sym_DQUOTE;
	v->a[7306] = actions(61);
	v->a[7307] = 1;
	v->a[7308] = anon_sym_DOLLAR_LBRACE;
	v->a[7309] = actions(63);
	v->a[7310] = 1;
	v->a[7311] = anon_sym_DOLLAR_LPAREN;
	v->a[7312] = actions(65);
	v->a[7313] = 1;
	v->a[7314] = anon_sym_BQUOTE;
	v->a[7315] = actions(67);
	v->a[7316] = 1;
	v->a[7317] = sym_variable_name;
	v->a[7318] = actions(204);
	v->a[7319] = 1;
	small_parse_table_366(v);
}

void	small_parse_table_366(t_small_parse_table_array *v)
{
	v->a[7320] = sym_word;
	v->a[7321] = actions(206);
	v->a[7322] = 1;
	v->a[7323] = anon_sym_BANG;
	v->a[7324] = state(116);
	v->a[7325] = 1;
	v->a[7326] = aux_sym__statements_repeat1;
	v->a[7327] = state(179);
	v->a[7328] = 1;
	v->a[7329] = sym_command_name;
	v->a[7330] = state(208);
	v->a[7331] = 1;
	v->a[7332] = sym_variable_assignment;
	v->a[7333] = state(385);
	v->a[7334] = 1;
	v->a[7335] = aux_sym_command_repeat1;
	v->a[7336] = state(555);
	v->a[7337] = 1;
	v->a[7338] = sym_concatenation;
	v->a[7339] = state(599);
	small_parse_table_367(v);
}

void	small_parse_table_367(t_small_parse_table_array *v)
{
	v->a[7340] = 1;
	v->a[7341] = sym_file_redirect;
	v->a[7342] = state(969);
	v->a[7343] = 1;
	v->a[7344] = sym_pipeline;
	v->a[7345] = state(1006);
	v->a[7346] = 1;
	v->a[7347] = aux_sym_redirected_statement_repeat2;
	v->a[7348] = state(1560);
	v->a[7349] = 1;
	v->a[7350] = sym__statement_not_pipeline;
	v->a[7351] = state(1668);
	v->a[7352] = 1;
	v->a[7353] = sym__statements;
	v->a[7354] = actions(11);
	v->a[7355] = 2;
	v->a[7356] = anon_sym_while;
	v->a[7357] = anon_sym_until;
	v->a[7358] = actions(59);
	v->a[7359] = 2;
	small_parse_table_368(v);
}

void	small_parse_table_368(t_small_parse_table_array *v)
{
	v->a[7360] = sym_raw_string;
	v->a[7361] = sym_number;
	v->a[7362] = actions(51);
	v->a[7363] = 3;
	v->a[7364] = anon_sym_LT;
	v->a[7365] = anon_sym_GT;
	v->a[7366] = anon_sym_GT_GT;
	v->a[7367] = state(401);
	v->a[7368] = 5;
	v->a[7369] = sym_arithmetic_expansion;
	v->a[7370] = sym_string;
	v->a[7371] = sym_simple_expansion;
	v->a[7372] = sym_expansion;
	v->a[7373] = sym_command_substitution;
	v->a[7374] = state(820);
	v->a[7375] = 12;
	v->a[7376] = sym_redirected_statement;
	v->a[7377] = sym_for_statement;
	v->a[7378] = sym_while_statement;
	v->a[7379] = sym_if_statement;
	small_parse_table_369(v);
}

void	small_parse_table_369(t_small_parse_table_array *v)
{
	v->a[7380] = sym_case_statement;
	v->a[7381] = sym_function_definition;
	v->a[7382] = sym_compound_statement;
	v->a[7383] = sym_subshell;
	v->a[7384] = sym_list;
	v->a[7385] = sym_negated_command;
	v->a[7386] = sym_command;
	v->a[7387] = sym__variable_assignments;
	v->a[7388] = 30;
	v->a[7389] = actions(3);
	v->a[7390] = 1;
	v->a[7391] = sym_comment;
	v->a[7392] = actions(9);
	v->a[7393] = 1;
	v->a[7394] = anon_sym_for;
	v->a[7395] = actions(13);
	v->a[7396] = 1;
	v->a[7397] = anon_sym_if;
	v->a[7398] = actions(15);
	v->a[7399] = 1;
	small_parse_table_370(v);
}

/* EOF small_parse_table_73.c */
