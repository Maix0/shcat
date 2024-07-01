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
	v->a[7300] = anon_sym_GT_GT;
	v->a[7301] = anon_sym_LT_AMP;
	v->a[7302] = anon_sym_GT_AMP;
	v->a[7303] = anon_sym_GT_PIPE;
	v->a[7304] = state(1087);
	v->a[7305] = 12;
	v->a[7306] = sym_redirected_statement;
	v->a[7307] = sym_for_statement;
	v->a[7308] = sym_while_statement;
	v->a[7309] = sym_if_statement;
	v->a[7310] = sym_case_statement;
	v->a[7311] = sym_function_definition;
	v->a[7312] = sym_compound_statement;
	v->a[7313] = sym_subshell;
	v->a[7314] = sym_list;
	v->a[7315] = sym_negated_command;
	v->a[7316] = sym_command;
	v->a[7317] = sym__variable_assignments;
	v->a[7318] = 32;
	v->a[7319] = actions(3);
	small_parse_table_366(v);
}

void	small_parse_table_366(t_small_parse_table_array *v)
{
	v->a[7320] = 1;
	v->a[7321] = sym_comment;
	v->a[7322] = actions(9);
	v->a[7323] = 1;
	v->a[7324] = anon_sym_for;
	v->a[7325] = actions(13);
	v->a[7326] = 1;
	v->a[7327] = anon_sym_if;
	v->a[7328] = actions(15);
	v->a[7329] = 1;
	v->a[7330] = anon_sym_case;
	v->a[7331] = actions(17);
	v->a[7332] = 1;
	v->a[7333] = anon_sym_LPAREN;
	v->a[7334] = actions(19);
	v->a[7335] = 1;
	v->a[7336] = anon_sym_LBRACE;
	v->a[7337] = actions(45);
	v->a[7338] = 1;
	v->a[7339] = sym_word;
	small_parse_table_367(v);
}

void	small_parse_table_367(t_small_parse_table_array *v)
{
	v->a[7340] = actions(53);
	v->a[7341] = 1;
	v->a[7342] = anon_sym_BANG;
	v->a[7343] = actions(59);
	v->a[7344] = 1;
	v->a[7345] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7346] = actions(61);
	v->a[7347] = 1;
	v->a[7348] = anon_sym_DOLLAR;
	v->a[7349] = actions(63);
	v->a[7350] = 1;
	v->a[7351] = anon_sym_DQUOTE;
	v->a[7352] = actions(67);
	v->a[7353] = 1;
	v->a[7354] = anon_sym_DOLLAR_LBRACE;
	v->a[7355] = actions(69);
	v->a[7356] = 1;
	v->a[7357] = anon_sym_DOLLAR_LPAREN;
	v->a[7358] = actions(71);
	v->a[7359] = 1;
	small_parse_table_368(v);
}

void	small_parse_table_368(t_small_parse_table_array *v)
{
	v->a[7360] = anon_sym_BQUOTE;
	v->a[7361] = actions(73);
	v->a[7362] = 1;
	v->a[7363] = sym_file_descriptor;
	v->a[7364] = actions(75);
	v->a[7365] = 1;
	v->a[7366] = sym_variable_name;
	v->a[7367] = actions(252);
	v->a[7368] = 1;
	v->a[7369] = anon_sym_done;
	v->a[7370] = state(53);
	v->a[7371] = 1;
	v->a[7372] = aux_sym__terminated_statement;
	v->a[7373] = state(189);
	v->a[7374] = 1;
	v->a[7375] = sym_command_name;
	v->a[7376] = state(291);
	v->a[7377] = 1;
	v->a[7378] = sym_variable_assignment;
	v->a[7379] = state(650);
	small_parse_table_369(v);
}

void	small_parse_table_369(t_small_parse_table_array *v)
{
	v->a[7380] = 1;
	v->a[7381] = sym_concatenation;
	v->a[7382] = state(712);
	v->a[7383] = 1;
	v->a[7384] = sym_file_redirect;
	v->a[7385] = state(713);
	v->a[7386] = 1;
	v->a[7387] = aux_sym_command_repeat1;
	v->a[7388] = state(1251);
	v->a[7389] = 1;
	v->a[7390] = sym_pipeline;
	v->a[7391] = state(1333);
	v->a[7392] = 1;
	v->a[7393] = aux_sym_redirected_statement_repeat2;
	v->a[7394] = state(2103);
	v->a[7395] = 1;
	v->a[7396] = sym__statement_not_pipeline;
	v->a[7397] = actions(11);
	v->a[7398] = 2;
	v->a[7399] = anon_sym_while;
	small_parse_table_370(v);
}

/* EOF small_parse_table_73.c */
