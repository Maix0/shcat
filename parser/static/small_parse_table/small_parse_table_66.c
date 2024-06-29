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
	v->a[6600] = anon_sym_LBRACE;
	v->a[6601] = actions(59);
	v->a[6602] = 1;
	v->a[6603] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6604] = actions(61);
	v->a[6605] = 1;
	v->a[6606] = anon_sym_DOLLAR;
	v->a[6607] = actions(63);
	v->a[6608] = 1;
	v->a[6609] = anon_sym_DQUOTE;
	v->a[6610] = actions(67);
	v->a[6611] = 1;
	v->a[6612] = anon_sym_DOLLAR_LBRACE;
	v->a[6613] = actions(69);
	v->a[6614] = 1;
	v->a[6615] = anon_sym_DOLLAR_LPAREN;
	v->a[6616] = actions(71);
	v->a[6617] = 1;
	v->a[6618] = anon_sym_BQUOTE;
	v->a[6619] = actions(73);
	small_parse_table_331(v);
}

void	small_parse_table_331(t_small_parse_table_array *v)
{
	v->a[6620] = 1;
	v->a[6621] = sym_file_descriptor;
	v->a[6622] = actions(75);
	v->a[6623] = 1;
	v->a[6624] = sym_variable_name;
	v->a[6625] = actions(234);
	v->a[6626] = 1;
	v->a[6627] = sym_word;
	v->a[6628] = actions(236);
	v->a[6629] = 1;
	v->a[6630] = anon_sym_BANG;
	v->a[6631] = state(129);
	v->a[6632] = 1;
	v->a[6633] = aux_sym__statements_repeat1;
	v->a[6634] = state(189);
	v->a[6635] = 1;
	v->a[6636] = sym_command_name;
	v->a[6637] = state(244);
	v->a[6638] = 1;
	v->a[6639] = sym_variable_assignment;
	small_parse_table_332(v);
}

void	small_parse_table_332(t_small_parse_table_array *v)
{
	v->a[6640] = state(624);
	v->a[6641] = 1;
	v->a[6642] = sym_concatenation;
	v->a[6643] = state(672);
	v->a[6644] = 1;
	v->a[6645] = aux_sym_command_repeat1;
	v->a[6646] = state(787);
	v->a[6647] = 1;
	v->a[6648] = sym_file_redirect;
	v->a[6649] = state(1176);
	v->a[6650] = 1;
	v->a[6651] = sym_pipeline;
	v->a[6652] = state(1207);
	v->a[6653] = 1;
	v->a[6654] = aux_sym_redirected_statement_repeat2;
	v->a[6655] = state(2116);
	v->a[6656] = 1;
	v->a[6657] = sym__statement_not_pipeline;
	v->a[6658] = state(2303);
	v->a[6659] = 1;
	small_parse_table_333(v);
}

void	small_parse_table_333(t_small_parse_table_array *v)
{
	v->a[6660] = sym__statements;
	v->a[6661] = actions(11);
	v->a[6662] = 2;
	v->a[6663] = anon_sym_while;
	v->a[6664] = anon_sym_until;
	v->a[6665] = actions(57);
	v->a[6666] = 2;
	v->a[6667] = anon_sym_LT_AMP_DASH;
	v->a[6668] = anon_sym_GT_AMP_DASH;
	v->a[6669] = actions(65);
	v->a[6670] = 2;
	v->a[6671] = sym_raw_string;
	v->a[6672] = sym_number;
	v->a[6673] = state(420);
	v->a[6674] = 5;
	v->a[6675] = sym_arithmetic_expansion;
	v->a[6676] = sym_string;
	v->a[6677] = sym_simple_expansion;
	v->a[6678] = sym_expansion;
	v->a[6679] = sym_command_substitution;
	small_parse_table_334(v);
}

void	small_parse_table_334(t_small_parse_table_array *v)
{
	v->a[6680] = actions(55);
	v->a[6681] = 8;
	v->a[6682] = anon_sym_LT;
	v->a[6683] = anon_sym_GT;
	v->a[6684] = anon_sym_GT_GT;
	v->a[6685] = anon_sym_AMP_GT;
	v->a[6686] = anon_sym_AMP_GT_GT;
	v->a[6687] = anon_sym_LT_AMP;
	v->a[6688] = anon_sym_GT_AMP;
	v->a[6689] = anon_sym_GT_PIPE;
	v->a[6690] = state(1057);
	v->a[6691] = 12;
	v->a[6692] = sym_redirected_statement;
	v->a[6693] = sym_for_statement;
	v->a[6694] = sym_while_statement;
	v->a[6695] = sym_if_statement;
	v->a[6696] = sym_case_statement;
	v->a[6697] = sym_function_definition;
	v->a[6698] = sym_compound_statement;
	v->a[6699] = sym_subshell;
	small_parse_table_335(v);
}

/* EOF small_parse_table_66.c */
