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
	v->a[7400] = anon_sym_GT;
	v->a[7401] = anon_sym_GT_GT;
	v->a[7402] = anon_sym_LT_AMP;
	v->a[7403] = anon_sym_GT_AMP;
	v->a[7404] = anon_sym_GT_PIPE;
	v->a[7405] = anon_sym_LT_GT;
	v->a[7406] = state(884);
	v->a[7407] = 12;
	v->a[7408] = sym_redirected_statement;
	v->a[7409] = sym_for_statement;
	v->a[7410] = sym_while_statement;
	v->a[7411] = sym_if_statement;
	v->a[7412] = sym_case_statement;
	v->a[7413] = sym_function_definition;
	v->a[7414] = sym_compound_statement;
	v->a[7415] = sym_subshell;
	v->a[7416] = sym_list;
	v->a[7417] = sym_negated_command;
	v->a[7418] = sym_command;
	v->a[7419] = sym__variable_assignments;
	small_parse_table_371(v);
}

void	small_parse_table_371(t_small_parse_table_array *v)
{
	v->a[7420] = 30;
	v->a[7421] = actions(3);
	v->a[7422] = 1;
	v->a[7423] = sym_comment;
	v->a[7424] = actions(9);
	v->a[7425] = 1;
	v->a[7426] = anon_sym_for;
	v->a[7427] = actions(13);
	v->a[7428] = 1;
	v->a[7429] = anon_sym_if;
	v->a[7430] = actions(15);
	v->a[7431] = 1;
	v->a[7432] = anon_sym_case;
	v->a[7433] = actions(17);
	v->a[7434] = 1;
	v->a[7435] = anon_sym_LPAREN;
	v->a[7436] = actions(19);
	v->a[7437] = 1;
	v->a[7438] = anon_sym_LBRACE;
	v->a[7439] = actions(53);
	small_parse_table_372(v);
}

void	small_parse_table_372(t_small_parse_table_array *v)
{
	v->a[7440] = 1;
	v->a[7441] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7442] = actions(55);
	v->a[7443] = 1;
	v->a[7444] = anon_sym_DOLLAR;
	v->a[7445] = actions(57);
	v->a[7446] = 1;
	v->a[7447] = anon_sym_DQUOTE;
	v->a[7448] = actions(61);
	v->a[7449] = 1;
	v->a[7450] = anon_sym_DOLLAR_LBRACE;
	v->a[7451] = actions(63);
	v->a[7452] = 1;
	v->a[7453] = anon_sym_DOLLAR_LPAREN;
	v->a[7454] = actions(65);
	v->a[7455] = 1;
	v->a[7456] = anon_sym_BQUOTE;
	v->a[7457] = actions(67);
	v->a[7458] = 1;
	v->a[7459] = sym_variable_name;
	small_parse_table_373(v);
}

void	small_parse_table_373(t_small_parse_table_array *v)
{
	v->a[7460] = actions(202);
	v->a[7461] = 1;
	v->a[7462] = sym_word;
	v->a[7463] = actions(204);
	v->a[7464] = 1;
	v->a[7465] = anon_sym_BANG;
	v->a[7466] = state(119);
	v->a[7467] = 1;
	v->a[7468] = aux_sym__statements_repeat1;
	v->a[7469] = state(272);
	v->a[7470] = 1;
	v->a[7471] = sym_command_name;
	v->a[7472] = state(283);
	v->a[7473] = 1;
	v->a[7474] = sym_variable_assignment;
	v->a[7475] = state(486);
	v->a[7476] = 1;
	v->a[7477] = aux_sym_command_repeat1;
	v->a[7478] = state(602);
	v->a[7479] = 1;
	small_parse_table_374(v);
}

void	small_parse_table_374(t_small_parse_table_array *v)
{
	v->a[7480] = sym_concatenation;
	v->a[7481] = state(636);
	v->a[7482] = 1;
	v->a[7483] = sym_file_redirect;
	v->a[7484] = state(951);
	v->a[7485] = 1;
	v->a[7486] = sym_pipeline;
	v->a[7487] = state(1006);
	v->a[7488] = 1;
	v->a[7489] = aux_sym_redirected_statement_repeat2;
	v->a[7490] = state(1605);
	v->a[7491] = 1;
	v->a[7492] = sym__statement_not_pipeline;
	v->a[7493] = state(1724);
	v->a[7494] = 1;
	v->a[7495] = sym__statements;
	v->a[7496] = actions(11);
	v->a[7497] = 2;
	v->a[7498] = anon_sym_while;
	v->a[7499] = anon_sym_until;
	small_parse_table_375(v);
}

/* EOF small_parse_table_74.c */
