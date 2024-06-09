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
	v->a[6600] = anon_sym_while;
	v->a[6601] = anon_sym_until;
	v->a[6602] = actions(61);
	v->a[6603] = 2;
	v->a[6604] = anon_sym_LT_AMP_DASH;
	v->a[6605] = anon_sym_GT_AMP_DASH;
	v->a[6606] = state(397);
	v->a[6607] = 6;
	v->a[6608] = sym_arithmetic_expansion;
	v->a[6609] = sym_string;
	v->a[6610] = sym_number;
	v->a[6611] = sym_simple_expansion;
	v->a[6612] = sym_expansion;
	v->a[6613] = sym_command_substitution;
	v->a[6614] = actions(59);
	v->a[6615] = 8;
	v->a[6616] = anon_sym_LT;
	v->a[6617] = anon_sym_GT;
	v->a[6618] = anon_sym_GT_GT;
	v->a[6619] = anon_sym_AMP_GT;
	small_parse_table_331(v);
}

void	small_parse_table_331(t_small_parse_table_array *v)
{
	v->a[6620] = anon_sym_AMP_GT_GT;
	v->a[6621] = anon_sym_LT_AMP;
	v->a[6622] = anon_sym_GT_AMP;
	v->a[6623] = anon_sym_GT_PIPE;
	v->a[6624] = state(1121);
	v->a[6625] = 12;
	v->a[6626] = sym_redirected_statement;
	v->a[6627] = sym_for_statement;
	v->a[6628] = sym_while_statement;
	v->a[6629] = sym_if_statement;
	v->a[6630] = sym_case_statement;
	v->a[6631] = sym_function_definition;
	v->a[6632] = sym_compound_statement;
	v->a[6633] = sym_subshell;
	v->a[6634] = sym_list;
	v->a[6635] = sym_negated_command;
	v->a[6636] = sym_command;
	v->a[6637] = sym_variable_assignments;
	v->a[6638] = 34;
	v->a[6639] = actions(3);
	small_parse_table_332(v);
}

void	small_parse_table_332(t_small_parse_table_array *v)
{
	v->a[6640] = 1;
	v->a[6641] = sym_comment;
	v->a[6642] = actions(9);
	v->a[6643] = 1;
	v->a[6644] = anon_sym_for;
	v->a[6645] = actions(13);
	v->a[6646] = 1;
	v->a[6647] = anon_sym_if;
	v->a[6648] = actions(15);
	v->a[6649] = 1;
	v->a[6650] = anon_sym_case;
	v->a[6651] = actions(17);
	v->a[6652] = 1;
	v->a[6653] = anon_sym_LPAREN;
	v->a[6654] = actions(19);
	v->a[6655] = 1;
	v->a[6656] = anon_sym_LBRACE;
	v->a[6657] = actions(63);
	v->a[6658] = 1;
	v->a[6659] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_333(v);
}

void	small_parse_table_333(t_small_parse_table_array *v)
{
	v->a[6660] = actions(65);
	v->a[6661] = 1;
	v->a[6662] = anon_sym_DOLLAR;
	v->a[6663] = actions(67);
	v->a[6664] = 1;
	v->a[6665] = anon_sym_DQUOTE;
	v->a[6666] = actions(69);
	v->a[6667] = 1;
	v->a[6668] = sym_raw_string;
	v->a[6669] = actions(71);
	v->a[6670] = 1;
	v->a[6671] = aux_sym_number_token1;
	v->a[6672] = actions(73);
	v->a[6673] = 1;
	v->a[6674] = aux_sym_number_token2;
	v->a[6675] = actions(75);
	v->a[6676] = 1;
	v->a[6677] = anon_sym_DOLLAR_LBRACE;
	v->a[6678] = actions(77);
	v->a[6679] = 1;
	small_parse_table_334(v);
}

void	small_parse_table_334(t_small_parse_table_array *v)
{
	v->a[6680] = anon_sym_DOLLAR_LPAREN;
	v->a[6681] = actions(79);
	v->a[6682] = 1;
	v->a[6683] = anon_sym_BQUOTE;
	v->a[6684] = actions(81);
	v->a[6685] = 1;
	v->a[6686] = sym_file_descriptor;
	v->a[6687] = actions(83);
	v->a[6688] = 1;
	v->a[6689] = sym_variable_name;
	v->a[6690] = actions(238);
	v->a[6691] = 1;
	v->a[6692] = sym_word;
	v->a[6693] = actions(240);
	v->a[6694] = 1;
	v->a[6695] = anon_sym_BANG;
	v->a[6696] = state(132);
	v->a[6697] = 1;
	v->a[6698] = aux_sym__statements_repeat1;
	v->a[6699] = state(185);
	small_parse_table_335(v);
}

/* EOF small_parse_table_66.c */
