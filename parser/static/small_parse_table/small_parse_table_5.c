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
	v->a[500] = anon_sym_GT;
	v->a[501] = anon_sym_GT_GT;
	v->a[502] = anon_sym_LT_AMP;
	v->a[503] = anon_sym_GT_AMP;
	v->a[504] = anon_sym_GT_PIPE;
	v->a[505] = anon_sym_LT_GT;
	v->a[506] = state(1079);
	v->a[507] = 12;
	v->a[508] = sym_redirected_statement;
	v->a[509] = sym_for_statement;
	v->a[510] = sym_while_statement;
	v->a[511] = sym_if_statement;
	v->a[512] = sym_case_statement;
	v->a[513] = sym_function_definition;
	v->a[514] = sym_compound_statement;
	v->a[515] = sym_subshell;
	v->a[516] = sym_list;
	v->a[517] = sym_negated_command;
	v->a[518] = sym_command;
	v->a[519] = sym__variable_assignments;
	small_parse_table_26(v);
}

void	small_parse_table_26(t_small_parse_table_array *v)
{
	v->a[520] = 35;
	v->a[521] = actions(3);
	v->a[522] = 1;
	v->a[523] = sym_comment;
	v->a[524] = actions(9);
	v->a[525] = 1;
	v->a[526] = anon_sym_for;
	v->a[527] = actions(13);
	v->a[528] = 1;
	v->a[529] = anon_sym_if;
	v->a[530] = actions(15);
	v->a[531] = 1;
	v->a[532] = anon_sym_case;
	v->a[533] = actions(17);
	v->a[534] = 1;
	v->a[535] = anon_sym_LPAREN;
	v->a[536] = actions(19);
	v->a[537] = 1;
	v->a[538] = anon_sym_LBRACE;
	v->a[539] = actions(43);
	small_parse_table_27(v);
}

void	small_parse_table_27(t_small_parse_table_array *v)
{
	v->a[540] = 1;
	v->a[541] = sym_word;
	v->a[542] = actions(47);
	v->a[543] = 1;
	v->a[544] = anon_sym_elif;
	v->a[545] = actions(49);
	v->a[546] = 1;
	v->a[547] = anon_sym_else;
	v->a[548] = actions(51);
	v->a[549] = 1;
	v->a[550] = anon_sym_BANG;
	v->a[551] = actions(55);
	v->a[552] = 1;
	v->a[553] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[554] = actions(57);
	v->a[555] = 1;
	v->a[556] = anon_sym_DOLLAR;
	v->a[557] = actions(59);
	v->a[558] = 1;
	v->a[559] = anon_sym_DQUOTE;
	small_parse_table_28(v);
}

void	small_parse_table_28(t_small_parse_table_array *v)
{
	v->a[560] = actions(63);
	v->a[561] = 1;
	v->a[562] = anon_sym_DOLLAR_LBRACE;
	v->a[563] = actions(65);
	v->a[564] = 1;
	v->a[565] = anon_sym_DOLLAR_LPAREN;
	v->a[566] = actions(67);
	v->a[567] = 1;
	v->a[568] = anon_sym_BQUOTE;
	v->a[569] = actions(69);
	v->a[570] = 1;
	v->a[571] = sym_file_descriptor;
	v->a[572] = actions(71);
	v->a[573] = 1;
	v->a[574] = sym_variable_name;
	v->a[575] = actions(79);
	v->a[576] = 1;
	v->a[577] = anon_sym_fi;
	v->a[578] = state(27);
	v->a[579] = 1;
	small_parse_table_29(v);
}

void	small_parse_table_29(t_small_parse_table_array *v)
{
	v->a[580] = aux_sym__terminated_statement;
	v->a[581] = state(183);
	v->a[582] = 1;
	v->a[583] = sym_command_name;
	v->a[584] = state(274);
	v->a[585] = 1;
	v->a[586] = sym_variable_assignment;
	v->a[587] = state(603);
	v->a[588] = 1;
	v->a[589] = sym_concatenation;
	v->a[590] = state(639);
	v->a[591] = 1;
	v->a[592] = aux_sym_command_repeat1;
	v->a[593] = state(644);
	v->a[594] = 1;
	v->a[595] = sym_file_redirect;
	v->a[596] = state(1170);
	v->a[597] = 1;
	v->a[598] = sym_pipeline;
	v->a[599] = state(1196);
	small_parse_table_30(v);
}

/* EOF small_parse_table_5.c */
