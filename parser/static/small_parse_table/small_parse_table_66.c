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
	v->a[6600] = 1;
	v->a[6601] = sym_word;
	v->a[6602] = actions(225);
	v->a[6603] = 1;
	v->a[6604] = anon_sym_BANG;
	v->a[6605] = state(131);
	v->a[6606] = 1;
	v->a[6607] = aux_sym__statements_repeat1;
	v->a[6608] = state(183);
	v->a[6609] = 1;
	v->a[6610] = sym_command_name;
	v->a[6611] = state(290);
	v->a[6612] = 1;
	v->a[6613] = sym_variable_assignment;
	v->a[6614] = state(584);
	v->a[6615] = 1;
	v->a[6616] = sym_concatenation;
	v->a[6617] = state(674);
	v->a[6618] = 1;
	v->a[6619] = aux_sym_command_repeat1;
	small_parse_table_331(v);
}

void	small_parse_table_331(t_small_parse_table_array *v)
{
	v->a[6620] = state(723);
	v->a[6621] = 1;
	v->a[6622] = sym_file_redirect;
	v->a[6623] = state(1087);
	v->a[6624] = 1;
	v->a[6625] = sym_pipeline;
	v->a[6626] = state(1099);
	v->a[6627] = 1;
	v->a[6628] = aux_sym_redirected_statement_repeat2;
	v->a[6629] = state(1914);
	v->a[6630] = 1;
	v->a[6631] = sym__statement_not_pipeline;
	v->a[6632] = state(1942);
	v->a[6633] = 1;
	v->a[6634] = sym__statements;
	v->a[6635] = actions(11);
	v->a[6636] = 2;
	v->a[6637] = anon_sym_while;
	v->a[6638] = anon_sym_until;
	v->a[6639] = actions(61);
	small_parse_table_332(v);
}

void	small_parse_table_332(t_small_parse_table_array *v)
{
	v->a[6640] = 2;
	v->a[6641] = sym_raw_string;
	v->a[6642] = sym_number;
	v->a[6643] = state(433);
	v->a[6644] = 5;
	v->a[6645] = sym_arithmetic_expansion;
	v->a[6646] = sym_string;
	v->a[6647] = sym_simple_expansion;
	v->a[6648] = sym_expansion;
	v->a[6649] = sym_command_substitution;
	v->a[6650] = actions(53);
	v->a[6651] = 7;
	v->a[6652] = anon_sym_LT;
	v->a[6653] = anon_sym_GT;
	v->a[6654] = anon_sym_GT_GT;
	v->a[6655] = anon_sym_LT_AMP;
	v->a[6656] = anon_sym_GT_AMP;
	v->a[6657] = anon_sym_GT_PIPE;
	v->a[6658] = anon_sym_LT_GT;
	v->a[6659] = state(935);
	small_parse_table_333(v);
}

void	small_parse_table_333(t_small_parse_table_array *v)
{
	v->a[6660] = 12;
	v->a[6661] = sym_redirected_statement;
	v->a[6662] = sym_for_statement;
	v->a[6663] = sym_while_statement;
	v->a[6664] = sym_if_statement;
	v->a[6665] = sym_case_statement;
	v->a[6666] = sym_function_definition;
	v->a[6667] = sym_compound_statement;
	v->a[6668] = sym_subshell;
	v->a[6669] = sym_list;
	v->a[6670] = sym_negated_command;
	v->a[6671] = sym_command;
	v->a[6672] = sym__variable_assignments;
	v->a[6673] = 31;
	v->a[6674] = actions(3);
	v->a[6675] = 1;
	v->a[6676] = sym_comment;
	v->a[6677] = actions(141);
	v->a[6678] = 1;
	v->a[6679] = sym_word;
	small_parse_table_334(v);
}

void	small_parse_table_334(t_small_parse_table_array *v)
{
	v->a[6680] = actions(144);
	v->a[6681] = 1;
	v->a[6682] = anon_sym_for;
	v->a[6683] = actions(150);
	v->a[6684] = 1;
	v->a[6685] = anon_sym_if;
	v->a[6686] = actions(153);
	v->a[6687] = 1;
	v->a[6688] = anon_sym_fi;
	v->a[6689] = actions(155);
	v->a[6690] = 1;
	v->a[6691] = anon_sym_case;
	v->a[6692] = actions(158);
	v->a[6693] = 1;
	v->a[6694] = anon_sym_LPAREN;
	v->a[6695] = actions(161);
	v->a[6696] = 1;
	v->a[6697] = anon_sym_LBRACE;
	v->a[6698] = actions(164);
	v->a[6699] = 1;
	small_parse_table_335(v);
}

/* EOF small_parse_table_66.c */
