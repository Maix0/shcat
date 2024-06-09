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
	v->a[7400] = sym_compound_statement;
	v->a[7401] = sym_subshell;
	v->a[7402] = sym_list;
	v->a[7403] = sym_negated_command;
	v->a[7404] = sym_command;
	v->a[7405] = sym_variable_assignments;
	v->a[7406] = 34;
	v->a[7407] = actions(3);
	v->a[7408] = 1;
	v->a[7409] = sym_comment;
	v->a[7410] = actions(9);
	v->a[7411] = 1;
	v->a[7412] = anon_sym_for;
	v->a[7413] = actions(13);
	v->a[7414] = 1;
	v->a[7415] = anon_sym_if;
	v->a[7416] = actions(15);
	v->a[7417] = 1;
	v->a[7418] = anon_sym_case;
	v->a[7419] = actions(17);
	small_parse_table_371(v);
}

void	small_parse_table_371(t_small_parse_table_array *v)
{
	v->a[7420] = 1;
	v->a[7421] = anon_sym_LPAREN;
	v->a[7422] = actions(19);
	v->a[7423] = 1;
	v->a[7424] = anon_sym_LBRACE;
	v->a[7425] = actions(63);
	v->a[7426] = 1;
	v->a[7427] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7428] = actions(65);
	v->a[7429] = 1;
	v->a[7430] = anon_sym_DOLLAR;
	v->a[7431] = actions(67);
	v->a[7432] = 1;
	v->a[7433] = anon_sym_DQUOTE;
	v->a[7434] = actions(71);
	v->a[7435] = 1;
	v->a[7436] = aux_sym_number_token1;
	v->a[7437] = actions(73);
	v->a[7438] = 1;
	v->a[7439] = aux_sym_number_token2;
	small_parse_table_372(v);
}

void	small_parse_table_372(t_small_parse_table_array *v)
{
	v->a[7440] = actions(75);
	v->a[7441] = 1;
	v->a[7442] = anon_sym_DOLLAR_LBRACE;
	v->a[7443] = actions(77);
	v->a[7444] = 1;
	v->a[7445] = anon_sym_DOLLAR_LPAREN;
	v->a[7446] = actions(79);
	v->a[7447] = 1;
	v->a[7448] = anon_sym_BQUOTE;
	v->a[7449] = actions(248);
	v->a[7450] = 1;
	v->a[7451] = sym_word;
	v->a[7452] = actions(250);
	v->a[7453] = 1;
	v->a[7454] = anon_sym_BANG;
	v->a[7455] = actions(256);
	v->a[7456] = 1;
	v->a[7457] = sym_raw_string;
	v->a[7458] = actions(258);
	v->a[7459] = 1;
	small_parse_table_373(v);
}

void	small_parse_table_373(t_small_parse_table_array *v)
{
	v->a[7460] = sym_file_descriptor;
	v->a[7461] = actions(260);
	v->a[7462] = 1;
	v->a[7463] = sym_variable_name;
	v->a[7464] = state(141);
	v->a[7465] = 1;
	v->a[7466] = aux_sym__statements_repeat1;
	v->a[7467] = state(175);
	v->a[7468] = 1;
	v->a[7469] = sym_command_name;
	v->a[7470] = state(278);
	v->a[7471] = 1;
	v->a[7472] = sym_variable_assignment;
	v->a[7473] = state(567);
	v->a[7474] = 1;
	v->a[7475] = aux_sym_command_repeat1;
	v->a[7476] = state(582);
	v->a[7477] = 1;
	v->a[7478] = sym_concatenation;
	v->a[7479] = state(706);
	small_parse_table_374(v);
}

void	small_parse_table_374(t_small_parse_table_array *v)
{
	v->a[7480] = 1;
	v->a[7481] = sym_file_redirect;
	v->a[7482] = state(1100);
	v->a[7483] = 1;
	v->a[7484] = sym_pipeline;
	v->a[7485] = state(1196);
	v->a[7486] = 1;
	v->a[7487] = aux_sym_redirected_statement_repeat2;
	v->a[7488] = state(2037);
	v->a[7489] = 1;
	v->a[7490] = sym__statement_not_pipeline;
	v->a[7491] = state(2202);
	v->a[7492] = 1;
	v->a[7493] = sym__statements;
	v->a[7494] = actions(11);
	v->a[7495] = 2;
	v->a[7496] = anon_sym_while;
	v->a[7497] = anon_sym_until;
	v->a[7498] = actions(254);
	v->a[7499] = 2;
	small_parse_table_375(v);
}

/* EOF small_parse_table_74.c */
