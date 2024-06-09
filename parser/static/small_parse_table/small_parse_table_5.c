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
	v->a[500] = 1;
	v->a[501] = sym_concatenation;
	v->a[502] = state(587);
	v->a[503] = 1;
	v->a[504] = aux_sym_command_repeat1;
	v->a[505] = state(718);
	v->a[506] = 1;
	v->a[507] = sym_file_redirect;
	v->a[508] = state(1212);
	v->a[509] = 1;
	v->a[510] = sym_pipeline;
	v->a[511] = state(1213);
	v->a[512] = 1;
	v->a[513] = aux_sym_redirected_statement_repeat2;
	v->a[514] = state(2035);
	v->a[515] = 1;
	v->a[516] = sym__statement_not_pipeline;
	v->a[517] = state(2075);
	v->a[518] = 1;
	v->a[519] = sym_else_clause;
	small_parse_table_26(v);
}

void	small_parse_table_26(t_small_parse_table_array *v)
{
	v->a[520] = actions(11);
	v->a[521] = 2;
	v->a[522] = anon_sym_while;
	v->a[523] = anon_sym_until;
	v->a[524] = actions(61);
	v->a[525] = 2;
	v->a[526] = anon_sym_LT_AMP_DASH;
	v->a[527] = anon_sym_GT_AMP_DASH;
	v->a[528] = state(1888);
	v->a[529] = 2;
	v->a[530] = sym_elif_clause;
	v->a[531] = aux_sym_if_statement_repeat1;
	v->a[532] = state(397);
	v->a[533] = 6;
	v->a[534] = sym_arithmetic_expansion;
	v->a[535] = sym_string;
	v->a[536] = sym_number;
	v->a[537] = sym_simple_expansion;
	v->a[538] = sym_expansion;
	v->a[539] = sym_command_substitution;
	small_parse_table_27(v);
}

void	small_parse_table_27(t_small_parse_table_array *v)
{
	v->a[540] = actions(59);
	v->a[541] = 8;
	v->a[542] = anon_sym_LT;
	v->a[543] = anon_sym_GT;
	v->a[544] = anon_sym_GT_GT;
	v->a[545] = anon_sym_AMP_GT;
	v->a[546] = anon_sym_AMP_GT_GT;
	v->a[547] = anon_sym_LT_AMP;
	v->a[548] = anon_sym_GT_AMP;
	v->a[549] = anon_sym_GT_PIPE;
	v->a[550] = state(1183);
	v->a[551] = 12;
	v->a[552] = sym_redirected_statement;
	v->a[553] = sym_for_statement;
	v->a[554] = sym_while_statement;
	v->a[555] = sym_if_statement;
	v->a[556] = sym_case_statement;
	v->a[557] = sym_function_definition;
	v->a[558] = sym_compound_statement;
	v->a[559] = sym_subshell;
	small_parse_table_28(v);
}

void	small_parse_table_28(t_small_parse_table_array *v)
{
	v->a[560] = sym_list;
	v->a[561] = sym_negated_command;
	v->a[562] = sym_command;
	v->a[563] = sym_variable_assignments;
	v->a[564] = 38;
	v->a[565] = actions(3);
	v->a[566] = 1;
	v->a[567] = sym_comment;
	v->a[568] = actions(9);
	v->a[569] = 1;
	v->a[570] = anon_sym_for;
	v->a[571] = actions(13);
	v->a[572] = 1;
	v->a[573] = anon_sym_if;
	v->a[574] = actions(15);
	v->a[575] = 1;
	v->a[576] = anon_sym_case;
	v->a[577] = actions(17);
	v->a[578] = 1;
	v->a[579] = anon_sym_LPAREN;
	small_parse_table_29(v);
}

void	small_parse_table_29(t_small_parse_table_array *v)
{
	v->a[580] = actions(19);
	v->a[581] = 1;
	v->a[582] = anon_sym_LBRACE;
	v->a[583] = actions(49);
	v->a[584] = 1;
	v->a[585] = sym_word;
	v->a[586] = actions(53);
	v->a[587] = 1;
	v->a[588] = anon_sym_elif;
	v->a[589] = actions(55);
	v->a[590] = 1;
	v->a[591] = anon_sym_else;
	v->a[592] = actions(57);
	v->a[593] = 1;
	v->a[594] = anon_sym_BANG;
	v->a[595] = actions(63);
	v->a[596] = 1;
	v->a[597] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[598] = actions(65);
	v->a[599] = 1;
	small_parse_table_30(v);
}

/* EOF small_parse_table_5.c */
