/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_66.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_330(t_small_parse_table_array *v)
{
	v->a[6600] = sym_string;
	v->a[6601] = sym_simple_expansion;
	v->a[6602] = sym_expansion;
	v->a[6603] = sym_command_substitution;
	v->a[6604] = state(820);
	v->a[6605] = 12;
	v->a[6606] = sym_redirected_statement;
	v->a[6607] = sym_for_statement;
	v->a[6608] = sym_while_statement;
	v->a[6609] = sym_if_statement;
	v->a[6610] = sym_case_statement;
	v->a[6611] = sym_function_definition;
	v->a[6612] = sym_compound_statement;
	v->a[6613] = sym_subshell;
	v->a[6614] = sym_list;
	v->a[6615] = sym_negated_command;
	v->a[6616] = sym_command;
	v->a[6617] = sym__variable_assignments;
	v->a[6618] = 30;
	v->a[6619] = actions(3);
	small_parse_table_331(v);
}

void	small_parse_table_331(t_small_parse_table_array *v)
{
	v->a[6620] = 1;
	v->a[6621] = sym_comment;
	v->a[6622] = actions(9);
	v->a[6623] = 1;
	v->a[6624] = anon_sym_for;
	v->a[6625] = actions(13);
	v->a[6626] = 1;
	v->a[6627] = anon_sym_if;
	v->a[6628] = actions(15);
	v->a[6629] = 1;
	v->a[6630] = anon_sym_case;
	v->a[6631] = actions(17);
	v->a[6632] = 1;
	v->a[6633] = anon_sym_LPAREN;
	v->a[6634] = actions(19);
	v->a[6635] = 1;
	v->a[6636] = anon_sym_LBRACE;
	v->a[6637] = actions(53);
	v->a[6638] = 1;
	v->a[6639] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_332(v);
}

void	small_parse_table_332(t_small_parse_table_array *v)
{
	v->a[6640] = actions(55);
	v->a[6641] = 1;
	v->a[6642] = anon_sym_DOLLAR;
	v->a[6643] = actions(57);
	v->a[6644] = 1;
	v->a[6645] = anon_sym_DQUOTE;
	v->a[6646] = actions(61);
	v->a[6647] = 1;
	v->a[6648] = anon_sym_DOLLAR_LBRACE;
	v->a[6649] = actions(63);
	v->a[6650] = 1;
	v->a[6651] = anon_sym_DOLLAR_LPAREN;
	v->a[6652] = actions(65);
	v->a[6653] = 1;
	v->a[6654] = anon_sym_BQUOTE;
	v->a[6655] = actions(67);
	v->a[6656] = 1;
	v->a[6657] = sym_variable_name;
	v->a[6658] = actions(204);
	v->a[6659] = 1;
	small_parse_table_333(v);
}

void	small_parse_table_333(t_small_parse_table_array *v)
{
	v->a[6660] = sym_word;
	v->a[6661] = actions(206);
	v->a[6662] = 1;
	v->a[6663] = anon_sym_BANG;
	v->a[6664] = state(116);
	v->a[6665] = 1;
	v->a[6666] = aux_sym__statements_repeat1;
	v->a[6667] = state(179);
	v->a[6668] = 1;
	v->a[6669] = sym_command_name;
	v->a[6670] = state(208);
	v->a[6671] = 1;
	v->a[6672] = sym_variable_assignment;
	v->a[6673] = state(385);
	v->a[6674] = 1;
	v->a[6675] = aux_sym_command_repeat1;
	v->a[6676] = state(555);
	v->a[6677] = 1;
	v->a[6678] = sym_concatenation;
	v->a[6679] = state(599);
	small_parse_table_334(v);
}

void	small_parse_table_334(t_small_parse_table_array *v)
{
	v->a[6680] = 1;
	v->a[6681] = sym_file_redirect;
	v->a[6682] = state(969);
	v->a[6683] = 1;
	v->a[6684] = sym_pipeline;
	v->a[6685] = state(1006);
	v->a[6686] = 1;
	v->a[6687] = aux_sym_redirected_statement_repeat2;
	v->a[6688] = state(1560);
	v->a[6689] = 1;
	v->a[6690] = sym__statement_not_pipeline;
	v->a[6691] = state(1581);
	v->a[6692] = 1;
	v->a[6693] = sym__statements;
	v->a[6694] = actions(11);
	v->a[6695] = 2;
	v->a[6696] = anon_sym_while;
	v->a[6697] = anon_sym_until;
	v->a[6698] = actions(59);
	v->a[6699] = 2;
	small_parse_table_335(v);
}

/* EOF small_parse_table_66.c */
