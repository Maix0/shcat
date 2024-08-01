/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_74.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_370(t_small_parse_table_array *v)
{
	v->a[7400] = anon_sym_case;
	v->a[7401] = actions(17);
	v->a[7402] = 1;
	v->a[7403] = anon_sym_LPAREN;
	v->a[7404] = actions(19);
	v->a[7405] = 1;
	v->a[7406] = anon_sym_LBRACE;
	v->a[7407] = actions(53);
	v->a[7408] = 1;
	v->a[7409] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7410] = actions(55);
	v->a[7411] = 1;
	v->a[7412] = anon_sym_DOLLAR;
	v->a[7413] = actions(57);
	v->a[7414] = 1;
	v->a[7415] = anon_sym_DQUOTE;
	v->a[7416] = actions(61);
	v->a[7417] = 1;
	v->a[7418] = anon_sym_DOLLAR_LBRACE;
	v->a[7419] = actions(63);
	small_parse_table_371(v);
}

void	small_parse_table_371(t_small_parse_table_array *v)
{
	v->a[7420] = 1;
	v->a[7421] = anon_sym_DOLLAR_LPAREN;
	v->a[7422] = actions(65);
	v->a[7423] = 1;
	v->a[7424] = anon_sym_BQUOTE;
	v->a[7425] = actions(208);
	v->a[7426] = 1;
	v->a[7427] = sym_word;
	v->a[7428] = actions(210);
	v->a[7429] = 1;
	v->a[7430] = anon_sym_BANG;
	v->a[7431] = actions(216);
	v->a[7432] = 1;
	v->a[7433] = sym_variable_name;
	v->a[7434] = state(112);
	v->a[7435] = 1;
	v->a[7436] = aux_sym__statements_repeat1;
	v->a[7437] = state(158);
	v->a[7438] = 1;
	v->a[7439] = sym_command_name;
	small_parse_table_372(v);
}

void	small_parse_table_372(t_small_parse_table_array *v)
{
	v->a[7440] = state(186);
	v->a[7441] = 1;
	v->a[7442] = sym_variable_assignment;
	v->a[7443] = state(298);
	v->a[7444] = 1;
	v->a[7445] = aux_sym_command_repeat1;
	v->a[7446] = state(555);
	v->a[7447] = 1;
	v->a[7448] = sym_concatenation;
	v->a[7449] = state(561);
	v->a[7450] = 1;
	v->a[7451] = sym_file_redirect;
	v->a[7452] = state(937);
	v->a[7453] = 1;
	v->a[7454] = sym_pipeline;
	v->a[7455] = state(1019);
	v->a[7456] = 1;
	v->a[7457] = aux_sym_redirected_statement_repeat2;
	v->a[7458] = state(1557);
	v->a[7459] = 1;
	small_parse_table_373(v);
}

void	small_parse_table_373(t_small_parse_table_array *v)
{
	v->a[7460] = sym__statement_not_pipeline;
	v->a[7461] = state(1735);
	v->a[7462] = 1;
	v->a[7463] = sym__statements;
	v->a[7464] = actions(11);
	v->a[7465] = 2;
	v->a[7466] = anon_sym_while;
	v->a[7467] = anon_sym_until;
	v->a[7468] = actions(214);
	v->a[7469] = 2;
	v->a[7470] = sym_raw_string;
	v->a[7471] = sym_number;
	v->a[7472] = actions(212);
	v->a[7473] = 3;
	v->a[7474] = anon_sym_LT;
	v->a[7475] = anon_sym_GT;
	v->a[7476] = anon_sym_GT_GT;
	v->a[7477] = state(277);
	v->a[7478] = 5;
	v->a[7479] = sym_arithmetic_expansion;
	small_parse_table_374(v);
}

void	small_parse_table_374(t_small_parse_table_array *v)
{
	v->a[7480] = sym_string;
	v->a[7481] = sym_simple_expansion;
	v->a[7482] = sym_expansion;
	v->a[7483] = sym_command_substitution;
	v->a[7484] = state(877);
	v->a[7485] = 12;
	v->a[7486] = sym_redirected_statement;
	v->a[7487] = sym_for_statement;
	v->a[7488] = sym_while_statement;
	v->a[7489] = sym_if_statement;
	v->a[7490] = sym_case_statement;
	v->a[7491] = sym_function_definition;
	v->a[7492] = sym_compound_statement;
	v->a[7493] = sym_subshell;
	v->a[7494] = sym_list;
	v->a[7495] = sym_negated_command;
	v->a[7496] = sym_command;
	v->a[7497] = sym__variable_assignments;
	v->a[7498] = 30;
	v->a[7499] = actions(3);
	small_parse_table_375(v);
}

/* EOF small_parse_table_74.c */
