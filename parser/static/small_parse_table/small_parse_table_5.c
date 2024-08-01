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
	v->a[501] = anon_sym_if;
	v->a[502] = actions(15);
	v->a[503] = 1;
	v->a[504] = anon_sym_case;
	v->a[505] = actions(17);
	v->a[506] = 1;
	v->a[507] = anon_sym_LPAREN;
	v->a[508] = actions(19);
	v->a[509] = 1;
	v->a[510] = anon_sym_LBRACE;
	v->a[511] = actions(41);
	v->a[512] = 1;
	v->a[513] = sym_word;
	v->a[514] = actions(45);
	v->a[515] = 1;
	v->a[516] = anon_sym_elif;
	v->a[517] = actions(47);
	v->a[518] = 1;
	v->a[519] = anon_sym_else;
	small_parse_table_26(v);
}

void	small_parse_table_26(t_small_parse_table_array *v)
{
	v->a[520] = actions(49);
	v->a[521] = 1;
	v->a[522] = anon_sym_BANG;
	v->a[523] = actions(53);
	v->a[524] = 1;
	v->a[525] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[526] = actions(55);
	v->a[527] = 1;
	v->a[528] = anon_sym_DOLLAR;
	v->a[529] = actions(57);
	v->a[530] = 1;
	v->a[531] = anon_sym_DQUOTE;
	v->a[532] = actions(61);
	v->a[533] = 1;
	v->a[534] = anon_sym_DOLLAR_LBRACE;
	v->a[535] = actions(63);
	v->a[536] = 1;
	v->a[537] = anon_sym_DOLLAR_LPAREN;
	v->a[538] = actions(65);
	v->a[539] = 1;
	small_parse_table_27(v);
}

void	small_parse_table_27(t_small_parse_table_array *v)
{
	v->a[540] = anon_sym_BQUOTE;
	v->a[541] = actions(67);
	v->a[542] = 1;
	v->a[543] = sym_variable_name;
	v->a[544] = actions(75);
	v->a[545] = 1;
	v->a[546] = anon_sym_fi;
	v->a[547] = state(5);
	v->a[548] = 1;
	v->a[549] = aux_sym__terminated_statement;
	v->a[550] = state(185);
	v->a[551] = 1;
	v->a[552] = sym_command_name;
	v->a[553] = state(231);
	v->a[554] = 1;
	v->a[555] = sym_variable_assignment;
	v->a[556] = state(411);
	v->a[557] = 1;
	v->a[558] = aux_sym_command_repeat1;
	v->a[559] = state(551);
	small_parse_table_28(v);
}

void	small_parse_table_28(t_small_parse_table_array *v)
{
	v->a[560] = 1;
	v->a[561] = sym_file_redirect;
	v->a[562] = state(555);
	v->a[563] = 1;
	v->a[564] = sym_concatenation;
	v->a[565] = state(1070);
	v->a[566] = 1;
	v->a[567] = sym_pipeline;
	v->a[568] = state(1126);
	v->a[569] = 1;
	v->a[570] = aux_sym_redirected_statement_repeat2;
	v->a[571] = state(1561);
	v->a[572] = 1;
	v->a[573] = sym__statement_not_pipeline;
	v->a[574] = state(1609);
	v->a[575] = 1;
	v->a[576] = sym_else_clause;
	v->a[577] = actions(11);
	v->a[578] = 2;
	v->a[579] = anon_sym_while;
	small_parse_table_29(v);
}

void	small_parse_table_29(t_small_parse_table_array *v)
{
	v->a[580] = anon_sym_until;
	v->a[581] = actions(59);
	v->a[582] = 2;
	v->a[583] = sym_raw_string;
	v->a[584] = sym_number;
	v->a[585] = state(1457);
	v->a[586] = 2;
	v->a[587] = sym_elif_clause;
	v->a[588] = aux_sym_if_statement_repeat1;
	v->a[589] = actions(51);
	v->a[590] = 3;
	v->a[591] = anon_sym_LT;
	v->a[592] = anon_sym_GT;
	v->a[593] = anon_sym_GT_GT;
	v->a[594] = state(401);
	v->a[595] = 5;
	v->a[596] = sym_arithmetic_expansion;
	v->a[597] = sym_string;
	v->a[598] = sym_simple_expansion;
	v->a[599] = sym_expansion;
	small_parse_table_30(v);
}

/* EOF small_parse_table_5.c */
