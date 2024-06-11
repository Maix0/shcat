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
	v->a[500] = anon_sym_GT_AMP_DASH;
	v->a[501] = actions(65);
	v->a[502] = 2;
	v->a[503] = sym_raw_string;
	v->a[504] = sym_number;
	v->a[505] = state(2155);
	v->a[506] = 2;
	v->a[507] = sym_elif_clause;
	v->a[508] = aux_sym_if_statement_repeat1;
	v->a[509] = state(394);
	v->a[510] = 5;
	v->a[511] = sym_arithmetic_expansion;
	v->a[512] = sym_string;
	v->a[513] = sym_simple_expansion;
	v->a[514] = sym_expansion;
	v->a[515] = sym_command_substitution;
	v->a[516] = actions(55);
	v->a[517] = 8;
	v->a[518] = anon_sym_LT;
	v->a[519] = anon_sym_GT;
	small_parse_table_26(v);
}

void	small_parse_table_26(t_small_parse_table_array *v)
{
	v->a[520] = anon_sym_GT_GT;
	v->a[521] = anon_sym_AMP_GT;
	v->a[522] = anon_sym_AMP_GT_GT;
	v->a[523] = anon_sym_LT_AMP;
	v->a[524] = anon_sym_GT_AMP;
	v->a[525] = anon_sym_GT_PIPE;
	v->a[526] = state(1413);
	v->a[527] = 12;
	v->a[528] = sym_redirected_statement;
	v->a[529] = sym_for_statement;
	v->a[530] = sym_while_statement;
	v->a[531] = sym_if_statement;
	v->a[532] = sym_case_statement;
	v->a[533] = sym_function_definition;
	v->a[534] = sym_compound_statement;
	v->a[535] = sym_subshell;
	v->a[536] = sym_list;
	v->a[537] = sym_negated_command;
	v->a[538] = sym_command;
	v->a[539] = sym_variable_assignments;
	small_parse_table_27(v);
}

void	small_parse_table_27(t_small_parse_table_array *v)
{
	v->a[540] = 36;
	v->a[541] = actions(3);
	v->a[542] = 1;
	v->a[543] = sym_comment;
	v->a[544] = actions(9);
	v->a[545] = 1;
	v->a[546] = anon_sym_for;
	v->a[547] = actions(13);
	v->a[548] = 1;
	v->a[549] = anon_sym_if;
	v->a[550] = actions(15);
	v->a[551] = 1;
	v->a[552] = anon_sym_case;
	v->a[553] = actions(17);
	v->a[554] = 1;
	v->a[555] = anon_sym_LPAREN;
	v->a[556] = actions(19);
	v->a[557] = 1;
	v->a[558] = anon_sym_LBRACE;
	v->a[559] = actions(45);
	small_parse_table_28(v);
}

void	small_parse_table_28(t_small_parse_table_array *v)
{
	v->a[560] = 1;
	v->a[561] = sym_word;
	v->a[562] = actions(49);
	v->a[563] = 1;
	v->a[564] = anon_sym_elif;
	v->a[565] = actions(51);
	v->a[566] = 1;
	v->a[567] = anon_sym_else;
	v->a[568] = actions(53);
	v->a[569] = 1;
	v->a[570] = anon_sym_BANG;
	v->a[571] = actions(59);
	v->a[572] = 1;
	v->a[573] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[574] = actions(61);
	v->a[575] = 1;
	v->a[576] = anon_sym_DOLLAR;
	v->a[577] = actions(63);
	v->a[578] = 1;
	v->a[579] = anon_sym_DQUOTE;
	small_parse_table_29(v);
}

void	small_parse_table_29(t_small_parse_table_array *v)
{
	v->a[580] = actions(67);
	v->a[581] = 1;
	v->a[582] = anon_sym_DOLLAR_LBRACE;
	v->a[583] = actions(69);
	v->a[584] = 1;
	v->a[585] = anon_sym_DOLLAR_LPAREN;
	v->a[586] = actions(71);
	v->a[587] = 1;
	v->a[588] = anon_sym_BQUOTE;
	v->a[589] = actions(73);
	v->a[590] = 1;
	v->a[591] = sym_file_descriptor;
	v->a[592] = actions(75);
	v->a[593] = 1;
	v->a[594] = sym_variable_name;
	v->a[595] = actions(83);
	v->a[596] = 1;
	v->a[597] = anon_sym_fi;
	v->a[598] = state(23);
	v->a[599] = 1;
	small_parse_table_30(v);
}

/* EOF small_parse_table_5.c */
