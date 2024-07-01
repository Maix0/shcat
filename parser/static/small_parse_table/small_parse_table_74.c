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
	v->a[7400] = actions(59);
	v->a[7401] = 1;
	v->a[7402] = anon_sym_DQUOTE;
	v->a[7403] = actions(63);
	v->a[7404] = 1;
	v->a[7405] = anon_sym_DOLLAR_LBRACE;
	v->a[7406] = actions(65);
	v->a[7407] = 1;
	v->a[7408] = anon_sym_DOLLAR_LPAREN;
	v->a[7409] = actions(67);
	v->a[7410] = 1;
	v->a[7411] = anon_sym_BQUOTE;
	v->a[7412] = actions(69);
	v->a[7413] = 1;
	v->a[7414] = sym_file_descriptor;
	v->a[7415] = actions(71);
	v->a[7416] = 1;
	v->a[7417] = sym_variable_name;
	v->a[7418] = actions(229);
	v->a[7419] = 1;
	small_parse_table_371(v);
}

void	small_parse_table_371(t_small_parse_table_array *v)
{
	v->a[7420] = sym_word;
	v->a[7421] = actions(231);
	v->a[7422] = 1;
	v->a[7423] = anon_sym_BANG;
	v->a[7424] = state(122);
	v->a[7425] = 1;
	v->a[7426] = aux_sym__statements_repeat1;
	v->a[7427] = state(179);
	v->a[7428] = 1;
	v->a[7429] = sym_command_name;
	v->a[7430] = state(302);
	v->a[7431] = 1;
	v->a[7432] = sym_variable_assignment;
	v->a[7433] = state(603);
	v->a[7434] = 1;
	v->a[7435] = sym_concatenation;
	v->a[7436] = state(658);
	v->a[7437] = 1;
	v->a[7438] = aux_sym_command_repeat1;
	v->a[7439] = state(764);
	small_parse_table_372(v);
}

void	small_parse_table_372(t_small_parse_table_array *v)
{
	v->a[7440] = 1;
	v->a[7441] = sym_file_redirect;
	v->a[7442] = state(1052);
	v->a[7443] = 1;
	v->a[7444] = sym_pipeline;
	v->a[7445] = state(1190);
	v->a[7446] = 1;
	v->a[7447] = aux_sym_redirected_statement_repeat2;
	v->a[7448] = state(1890);
	v->a[7449] = 1;
	v->a[7450] = sym__statement_not_pipeline;
	v->a[7451] = state(1992);
	v->a[7452] = 1;
	v->a[7453] = sym__statements;
	v->a[7454] = actions(11);
	v->a[7455] = 2;
	v->a[7456] = anon_sym_while;
	v->a[7457] = anon_sym_until;
	v->a[7458] = actions(61);
	v->a[7459] = 2;
	small_parse_table_373(v);
}

void	small_parse_table_373(t_small_parse_table_array *v)
{
	v->a[7460] = sym_raw_string;
	v->a[7461] = sym_number;
	v->a[7462] = state(436);
	v->a[7463] = 5;
	v->a[7464] = sym_arithmetic_expansion;
	v->a[7465] = sym_string;
	v->a[7466] = sym_simple_expansion;
	v->a[7467] = sym_expansion;
	v->a[7468] = sym_command_substitution;
	v->a[7469] = actions(53);
	v->a[7470] = 7;
	v->a[7471] = anon_sym_LT;
	v->a[7472] = anon_sym_GT;
	v->a[7473] = anon_sym_GT_GT;
	v->a[7474] = anon_sym_LT_AMP;
	v->a[7475] = anon_sym_GT_AMP;
	v->a[7476] = anon_sym_GT_PIPE;
	v->a[7477] = anon_sym_LT_GT;
	v->a[7478] = state(967);
	v->a[7479] = 12;
	small_parse_table_374(v);
}

void	small_parse_table_374(t_small_parse_table_array *v)
{
	v->a[7480] = sym_redirected_statement;
	v->a[7481] = sym_for_statement;
	v->a[7482] = sym_while_statement;
	v->a[7483] = sym_if_statement;
	v->a[7484] = sym_case_statement;
	v->a[7485] = sym_function_definition;
	v->a[7486] = sym_compound_statement;
	v->a[7487] = sym_subshell;
	v->a[7488] = sym_list;
	v->a[7489] = sym_negated_command;
	v->a[7490] = sym_command;
	v->a[7491] = sym__variable_assignments;
	v->a[7492] = 31;
	v->a[7493] = actions(3);
	v->a[7494] = 1;
	v->a[7495] = sym_comment;
	v->a[7496] = actions(9);
	v->a[7497] = 1;
	v->a[7498] = anon_sym_for;
	v->a[7499] = actions(13);
	small_parse_table_375(v);
}

/* EOF small_parse_table_74.c */
