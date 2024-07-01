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
	v->a[500] = 2;
	v->a[501] = sym_elif_clause;
	v->a[502] = aux_sym_if_statement_repeat1;
	v->a[503] = state(443);
	v->a[504] = 5;
	v->a[505] = sym_arithmetic_expansion;
	v->a[506] = sym_string;
	v->a[507] = sym_simple_expansion;
	v->a[508] = sym_expansion;
	v->a[509] = sym_command_substitution;
	v->a[510] = actions(55);
	v->a[511] = 6;
	v->a[512] = anon_sym_LT;
	v->a[513] = anon_sym_GT;
	v->a[514] = anon_sym_GT_GT;
	v->a[515] = anon_sym_LT_AMP;
	v->a[516] = anon_sym_GT_AMP;
	v->a[517] = anon_sym_GT_PIPE;
	v->a[518] = state(1187);
	v->a[519] = 12;
	small_parse_table_26(v);
}

void	small_parse_table_26(t_small_parse_table_array *v)
{
	v->a[520] = sym_redirected_statement;
	v->a[521] = sym_for_statement;
	v->a[522] = sym_while_statement;
	v->a[523] = sym_if_statement;
	v->a[524] = sym_case_statement;
	v->a[525] = sym_function_definition;
	v->a[526] = sym_compound_statement;
	v->a[527] = sym_subshell;
	v->a[528] = sym_list;
	v->a[529] = sym_negated_command;
	v->a[530] = sym_command;
	v->a[531] = sym__variable_assignments;
	v->a[532] = 36;
	v->a[533] = actions(3);
	v->a[534] = 1;
	v->a[535] = sym_comment;
	v->a[536] = actions(9);
	v->a[537] = 1;
	v->a[538] = anon_sym_for;
	v->a[539] = actions(13);
	small_parse_table_27(v);
}

void	small_parse_table_27(t_small_parse_table_array *v)
{
	v->a[540] = 1;
	v->a[541] = anon_sym_if;
	v->a[542] = actions(15);
	v->a[543] = 1;
	v->a[544] = anon_sym_case;
	v->a[545] = actions(17);
	v->a[546] = 1;
	v->a[547] = anon_sym_LPAREN;
	v->a[548] = actions(19);
	v->a[549] = 1;
	v->a[550] = anon_sym_LBRACE;
	v->a[551] = actions(45);
	v->a[552] = 1;
	v->a[553] = sym_word;
	v->a[554] = actions(49);
	v->a[555] = 1;
	v->a[556] = anon_sym_elif;
	v->a[557] = actions(51);
	v->a[558] = 1;
	v->a[559] = anon_sym_else;
	small_parse_table_28(v);
}

void	small_parse_table_28(t_small_parse_table_array *v)
{
	v->a[560] = actions(53);
	v->a[561] = 1;
	v->a[562] = anon_sym_BANG;
	v->a[563] = actions(59);
	v->a[564] = 1;
	v->a[565] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[566] = actions(61);
	v->a[567] = 1;
	v->a[568] = anon_sym_DOLLAR;
	v->a[569] = actions(63);
	v->a[570] = 1;
	v->a[571] = anon_sym_DQUOTE;
	v->a[572] = actions(67);
	v->a[573] = 1;
	v->a[574] = anon_sym_DOLLAR_LBRACE;
	v->a[575] = actions(69);
	v->a[576] = 1;
	v->a[577] = anon_sym_DOLLAR_LPAREN;
	v->a[578] = actions(71);
	v->a[579] = 1;
	small_parse_table_29(v);
}

void	small_parse_table_29(t_small_parse_table_array *v)
{
	v->a[580] = anon_sym_BQUOTE;
	v->a[581] = actions(73);
	v->a[582] = 1;
	v->a[583] = sym_file_descriptor;
	v->a[584] = actions(75);
	v->a[585] = 1;
	v->a[586] = sym_variable_name;
	v->a[587] = actions(83);
	v->a[588] = 1;
	v->a[589] = anon_sym_fi;
	v->a[590] = state(5);
	v->a[591] = 1;
	v->a[592] = aux_sym__terminated_statement;
	v->a[593] = state(189);
	v->a[594] = 1;
	v->a[595] = sym_command_name;
	v->a[596] = state(273);
	v->a[597] = 1;
	v->a[598] = sym_variable_assignment;
	v->a[599] = state(650);
	small_parse_table_30(v);
}

/* EOF small_parse_table_5.c */
