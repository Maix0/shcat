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
	v->a[7300] = state(1072);
	v->a[7301] = 12;
	v->a[7302] = sym_redirected_statement;
	v->a[7303] = sym_for_statement;
	v->a[7304] = sym_while_statement;
	v->a[7305] = sym_if_statement;
	v->a[7306] = sym_case_statement;
	v->a[7307] = sym_function_definition;
	v->a[7308] = sym_compound_statement;
	v->a[7309] = sym_subshell;
	v->a[7310] = sym_list;
	v->a[7311] = sym_negated_command;
	v->a[7312] = sym_command;
	v->a[7313] = sym__variable_assignments;
	v->a[7314] = 32;
	v->a[7315] = actions(3);
	v->a[7316] = 1;
	v->a[7317] = sym_comment;
	v->a[7318] = actions(9);
	v->a[7319] = 1;
	small_parse_table_366(v);
}

void	small_parse_table_366(t_small_parse_table_array *v)
{
	v->a[7320] = anon_sym_for;
	v->a[7321] = actions(13);
	v->a[7322] = 1;
	v->a[7323] = anon_sym_if;
	v->a[7324] = actions(15);
	v->a[7325] = 1;
	v->a[7326] = anon_sym_case;
	v->a[7327] = actions(17);
	v->a[7328] = 1;
	v->a[7329] = anon_sym_LPAREN;
	v->a[7330] = actions(19);
	v->a[7331] = 1;
	v->a[7332] = anon_sym_LBRACE;
	v->a[7333] = actions(59);
	v->a[7334] = 1;
	v->a[7335] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7336] = actions(61);
	v->a[7337] = 1;
	v->a[7338] = anon_sym_DOLLAR;
	v->a[7339] = actions(63);
	small_parse_table_367(v);
}

void	small_parse_table_367(t_small_parse_table_array *v)
{
	v->a[7340] = 1;
	v->a[7341] = anon_sym_DQUOTE;
	v->a[7342] = actions(67);
	v->a[7343] = 1;
	v->a[7344] = anon_sym_DOLLAR_LBRACE;
	v->a[7345] = actions(69);
	v->a[7346] = 1;
	v->a[7347] = anon_sym_DOLLAR_LPAREN;
	v->a[7348] = actions(71);
	v->a[7349] = 1;
	v->a[7350] = anon_sym_BQUOTE;
	v->a[7351] = actions(73);
	v->a[7352] = 1;
	v->a[7353] = sym_file_descriptor;
	v->a[7354] = actions(75);
	v->a[7355] = 1;
	v->a[7356] = sym_variable_name;
	v->a[7357] = actions(234);
	v->a[7358] = 1;
	v->a[7359] = sym_word;
	small_parse_table_368(v);
}

void	small_parse_table_368(t_small_parse_table_array *v)
{
	v->a[7360] = actions(236);
	v->a[7361] = 1;
	v->a[7362] = anon_sym_BANG;
	v->a[7363] = state(129);
	v->a[7364] = 1;
	v->a[7365] = aux_sym__statements_repeat1;
	v->a[7366] = state(189);
	v->a[7367] = 1;
	v->a[7368] = sym_command_name;
	v->a[7369] = state(244);
	v->a[7370] = 1;
	v->a[7371] = sym_variable_assignment;
	v->a[7372] = state(624);
	v->a[7373] = 1;
	v->a[7374] = sym_concatenation;
	v->a[7375] = state(672);
	v->a[7376] = 1;
	v->a[7377] = aux_sym_command_repeat1;
	v->a[7378] = state(787);
	v->a[7379] = 1;
	small_parse_table_369(v);
}

void	small_parse_table_369(t_small_parse_table_array *v)
{
	v->a[7380] = sym_file_redirect;
	v->a[7381] = state(1176);
	v->a[7382] = 1;
	v->a[7383] = sym_pipeline;
	v->a[7384] = state(1207);
	v->a[7385] = 1;
	v->a[7386] = aux_sym_redirected_statement_repeat2;
	v->a[7387] = state(2116);
	v->a[7388] = 1;
	v->a[7389] = sym__statement_not_pipeline;
	v->a[7390] = state(2262);
	v->a[7391] = 1;
	v->a[7392] = sym__statements;
	v->a[7393] = actions(11);
	v->a[7394] = 2;
	v->a[7395] = anon_sym_while;
	v->a[7396] = anon_sym_until;
	v->a[7397] = actions(57);
	v->a[7398] = 2;
	v->a[7399] = anon_sym_LT_AMP_DASH;
	small_parse_table_370(v);
}

/* EOF small_parse_table_73.c */
