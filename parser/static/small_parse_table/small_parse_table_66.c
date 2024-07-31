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
	v->a[6600] = 7;
	v->a[6601] = anon_sym_LT;
	v->a[6602] = anon_sym_GT;
	v->a[6603] = anon_sym_GT_GT;
	v->a[6604] = anon_sym_LT_AMP;
	v->a[6605] = anon_sym_GT_AMP;
	v->a[6606] = anon_sym_GT_PIPE;
	v->a[6607] = anon_sym_LT_GT;
	v->a[6608] = state(939);
	v->a[6609] = 12;
	v->a[6610] = sym_redirected_statement;
	v->a[6611] = sym_for_statement;
	v->a[6612] = sym_while_statement;
	v->a[6613] = sym_if_statement;
	v->a[6614] = sym_case_statement;
	v->a[6615] = sym_function_definition;
	v->a[6616] = sym_compound_statement;
	v->a[6617] = sym_subshell;
	v->a[6618] = sym_list;
	v->a[6619] = sym_negated_command;
	small_parse_table_331(v);
}

void	small_parse_table_331(t_small_parse_table_array *v)
{
	v->a[6620] = sym_command;
	v->a[6621] = sym__variable_assignments;
	v->a[6622] = 30;
	v->a[6623] = actions(3);
	v->a[6624] = 1;
	v->a[6625] = sym_comment;
	v->a[6626] = actions(9);
	v->a[6627] = 1;
	v->a[6628] = anon_sym_for;
	v->a[6629] = actions(13);
	v->a[6630] = 1;
	v->a[6631] = anon_sym_if;
	v->a[6632] = actions(15);
	v->a[6633] = 1;
	v->a[6634] = anon_sym_case;
	v->a[6635] = actions(17);
	v->a[6636] = 1;
	v->a[6637] = anon_sym_LPAREN;
	v->a[6638] = actions(19);
	v->a[6639] = 1;
	small_parse_table_332(v);
}

void	small_parse_table_332(t_small_parse_table_array *v)
{
	v->a[6640] = anon_sym_LBRACE;
	v->a[6641] = actions(41);
	v->a[6642] = 1;
	v->a[6643] = sym_word;
	v->a[6644] = actions(49);
	v->a[6645] = 1;
	v->a[6646] = anon_sym_BANG;
	v->a[6647] = actions(53);
	v->a[6648] = 1;
	v->a[6649] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6650] = actions(55);
	v->a[6651] = 1;
	v->a[6652] = anon_sym_DOLLAR;
	v->a[6653] = actions(57);
	v->a[6654] = 1;
	v->a[6655] = anon_sym_DQUOTE;
	v->a[6656] = actions(61);
	v->a[6657] = 1;
	v->a[6658] = anon_sym_DOLLAR_LBRACE;
	v->a[6659] = actions(63);
	small_parse_table_333(v);
}

void	small_parse_table_333(t_small_parse_table_array *v)
{
	v->a[6660] = 1;
	v->a[6661] = anon_sym_DOLLAR_LPAREN;
	v->a[6662] = actions(65);
	v->a[6663] = 1;
	v->a[6664] = anon_sym_BQUOTE;
	v->a[6665] = actions(67);
	v->a[6666] = 1;
	v->a[6667] = sym_variable_name;
	v->a[6668] = actions(224);
	v->a[6669] = 1;
	v->a[6670] = anon_sym_then;
	v->a[6671] = state(36);
	v->a[6672] = 1;
	v->a[6673] = aux_sym__terminated_statement;
	v->a[6674] = state(271);
	v->a[6675] = 1;
	v->a[6676] = sym_command_name;
	v->a[6677] = state(298);
	v->a[6678] = 1;
	v->a[6679] = sym_variable_assignment;
	small_parse_table_334(v);
}

void	small_parse_table_334(t_small_parse_table_array *v)
{
	v->a[6680] = state(482);
	v->a[6681] = 1;
	v->a[6682] = aux_sym_command_repeat1;
	v->a[6683] = state(600);
	v->a[6684] = 1;
	v->a[6685] = sym_file_redirect;
	v->a[6686] = state(602);
	v->a[6687] = 1;
	v->a[6688] = sym_concatenation;
	v->a[6689] = state(1012);
	v->a[6690] = 1;
	v->a[6691] = sym_pipeline;
	v->a[6692] = state(1068);
	v->a[6693] = 1;
	v->a[6694] = aux_sym_redirected_statement_repeat2;
	v->a[6695] = state(1609);
	v->a[6696] = 1;
	v->a[6697] = sym__statement_not_pipeline;
	v->a[6698] = actions(11);
	v->a[6699] = 2;
	small_parse_table_335(v);
}

/* EOF small_parse_table_66.c */
