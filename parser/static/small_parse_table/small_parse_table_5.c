/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_5.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_25(t_small_parse_table_array *v)
{
	v->a[500] = sym_case_statement;
	v->a[501] = sym_function_definition;
	v->a[502] = sym_compound_statement;
	v->a[503] = sym_subshell;
	v->a[504] = sym_list;
	v->a[505] = sym_negated_command;
	v->a[506] = sym_command;
	v->a[507] = sym__variable_assignments;
	v->a[508] = 34;
	v->a[509] = actions(3);
	v->a[510] = 1;
	v->a[511] = sym_comment;
	v->a[512] = actions(9);
	v->a[513] = 1;
	v->a[514] = anon_sym_for;
	v->a[515] = actions(13);
	v->a[516] = 1;
	v->a[517] = anon_sym_if;
	v->a[518] = actions(15);
	v->a[519] = 1;
	small_parse_table_26(v);
}

void	small_parse_table_26(t_small_parse_table_array *v)
{
	v->a[520] = anon_sym_case;
	v->a[521] = actions(17);
	v->a[522] = 1;
	v->a[523] = anon_sym_LPAREN;
	v->a[524] = actions(19);
	v->a[525] = 1;
	v->a[526] = anon_sym_LBRACE;
	v->a[527] = actions(41);
	v->a[528] = 1;
	v->a[529] = sym_word;
	v->a[530] = actions(45);
	v->a[531] = 1;
	v->a[532] = anon_sym_elif;
	v->a[533] = actions(47);
	v->a[534] = 1;
	v->a[535] = anon_sym_else;
	v->a[536] = actions(49);
	v->a[537] = 1;
	v->a[538] = anon_sym_BANG;
	v->a[539] = actions(53);
	small_parse_table_27(v);
}

void	small_parse_table_27(t_small_parse_table_array *v)
{
	v->a[540] = 1;
	v->a[541] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[542] = actions(55);
	v->a[543] = 1;
	v->a[544] = anon_sym_DOLLAR;
	v->a[545] = actions(57);
	v->a[546] = 1;
	v->a[547] = anon_sym_DQUOTE;
	v->a[548] = actions(61);
	v->a[549] = 1;
	v->a[550] = anon_sym_DOLLAR_LBRACE;
	v->a[551] = actions(63);
	v->a[552] = 1;
	v->a[553] = anon_sym_DOLLAR_LPAREN;
	v->a[554] = actions(65);
	v->a[555] = 1;
	v->a[556] = anon_sym_BQUOTE;
	v->a[557] = actions(67);
	v->a[558] = 1;
	v->a[559] = sym_variable_name;
	small_parse_table_28(v);
}

void	small_parse_table_28(t_small_parse_table_array *v)
{
	v->a[560] = actions(75);
	v->a[561] = 1;
	v->a[562] = anon_sym_fi;
	v->a[563] = state(3);
	v->a[564] = 1;
	v->a[565] = aux_sym__terminated_statement;
	v->a[566] = state(271);
	v->a[567] = 1;
	v->a[568] = sym_command_name;
	v->a[569] = state(291);
	v->a[570] = 1;
	v->a[571] = sym_variable_assignment;
	v->a[572] = state(482);
	v->a[573] = 1;
	v->a[574] = aux_sym_command_repeat1;
	v->a[575] = state(600);
	v->a[576] = 1;
	v->a[577] = sym_file_redirect;
	v->a[578] = state(602);
	v->a[579] = 1;
	small_parse_table_29(v);
}

void	small_parse_table_29(t_small_parse_table_array *v)
{
	v->a[580] = sym_concatenation;
	v->a[581] = state(992);
	v->a[582] = 1;
	v->a[583] = sym_pipeline;
	v->a[584] = state(1068);
	v->a[585] = 1;
	v->a[586] = aux_sym_redirected_statement_repeat2;
	v->a[587] = state(1609);
	v->a[588] = 1;
	v->a[589] = sym__statement_not_pipeline;
	v->a[590] = state(1742);
	v->a[591] = 1;
	v->a[592] = sym_else_clause;
	v->a[593] = actions(11);
	v->a[594] = 2;
	v->a[595] = anon_sym_while;
	v->a[596] = anon_sym_until;
	v->a[597] = actions(59);
	v->a[598] = 2;
	v->a[599] = sym_raw_string;
	small_parse_table_30(v);
}

/* EOF small_parse_table_5.c */
