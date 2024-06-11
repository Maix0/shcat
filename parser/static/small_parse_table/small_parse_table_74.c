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
	v->a[7400] = anon_sym_GT_AMP_DASH;
	v->a[7401] = actions(228);
	v->a[7402] = 2;
	v->a[7403] = sym_raw_string;
	v->a[7404] = sym_number;
	v->a[7405] = state(294);
	v->a[7406] = 5;
	v->a[7407] = sym_arithmetic_expansion;
	v->a[7408] = sym_string;
	v->a[7409] = sym_simple_expansion;
	v->a[7410] = sym_expansion;
	v->a[7411] = sym_command_substitution;
	v->a[7412] = actions(224);
	v->a[7413] = 8;
	v->a[7414] = anon_sym_LT;
	v->a[7415] = anon_sym_GT;
	v->a[7416] = anon_sym_GT_GT;
	v->a[7417] = anon_sym_AMP_GT;
	v->a[7418] = anon_sym_AMP_GT_GT;
	v->a[7419] = anon_sym_LT_AMP;
	small_parse_table_371(v);
}

void	small_parse_table_371(t_small_parse_table_array *v)
{
	v->a[7420] = anon_sym_GT_AMP;
	v->a[7421] = anon_sym_GT_PIPE;
	v->a[7422] = state(1188);
	v->a[7423] = 12;
	v->a[7424] = sym_redirected_statement;
	v->a[7425] = sym_for_statement;
	v->a[7426] = sym_while_statement;
	v->a[7427] = sym_if_statement;
	v->a[7428] = sym_case_statement;
	v->a[7429] = sym_function_definition;
	v->a[7430] = sym_compound_statement;
	v->a[7431] = sym_subshell;
	v->a[7432] = sym_list;
	v->a[7433] = sym_negated_command;
	v->a[7434] = sym_command;
	v->a[7435] = sym_variable_assignments;
	v->a[7436] = 32;
	v->a[7437] = actions(3);
	v->a[7438] = 1;
	v->a[7439] = sym_comment;
	small_parse_table_372(v);
}

void	small_parse_table_372(t_small_parse_table_array *v)
{
	v->a[7440] = actions(9);
	v->a[7441] = 1;
	v->a[7442] = anon_sym_for;
	v->a[7443] = actions(13);
	v->a[7444] = 1;
	v->a[7445] = anon_sym_if;
	v->a[7446] = actions(15);
	v->a[7447] = 1;
	v->a[7448] = anon_sym_case;
	v->a[7449] = actions(17);
	v->a[7450] = 1;
	v->a[7451] = anon_sym_LPAREN;
	v->a[7452] = actions(19);
	v->a[7453] = 1;
	v->a[7454] = anon_sym_LBRACE;
	v->a[7455] = actions(59);
	v->a[7456] = 1;
	v->a[7457] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7458] = actions(61);
	v->a[7459] = 1;
	small_parse_table_373(v);
}

void	small_parse_table_373(t_small_parse_table_array *v)
{
	v->a[7460] = anon_sym_DOLLAR;
	v->a[7461] = actions(63);
	v->a[7462] = 1;
	v->a[7463] = anon_sym_DQUOTE;
	v->a[7464] = actions(67);
	v->a[7465] = 1;
	v->a[7466] = anon_sym_DOLLAR_LBRACE;
	v->a[7467] = actions(69);
	v->a[7468] = 1;
	v->a[7469] = anon_sym_DOLLAR_LPAREN;
	v->a[7470] = actions(71);
	v->a[7471] = 1;
	v->a[7472] = anon_sym_BQUOTE;
	v->a[7473] = actions(73);
	v->a[7474] = 1;
	v->a[7475] = sym_file_descriptor;
	v->a[7476] = actions(75);
	v->a[7477] = 1;
	v->a[7478] = sym_variable_name;
	v->a[7479] = actions(236);
	small_parse_table_374(v);
}

void	small_parse_table_374(t_small_parse_table_array *v)
{
	v->a[7480] = 1;
	v->a[7481] = sym_word;
	v->a[7482] = actions(238);
	v->a[7483] = 1;
	v->a[7484] = anon_sym_BANG;
	v->a[7485] = state(140);
	v->a[7486] = 1;
	v->a[7487] = aux_sym__statements_repeat1;
	v->a[7488] = state(189);
	v->a[7489] = 1;
	v->a[7490] = sym_command_name;
	v->a[7491] = state(286);
	v->a[7492] = 1;
	v->a[7493] = sym_variable_assignment;
	v->a[7494] = state(647);
	v->a[7495] = 1;
	v->a[7496] = sym_concatenation;
	v->a[7497] = state(746);
	v->a[7498] = 1;
	v->a[7499] = aux_sym_command_repeat1;
	small_parse_table_375(v);
}

/* EOF small_parse_table_74.c */
