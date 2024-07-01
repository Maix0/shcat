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
	v->a[6601] = sym_comment;
	v->a[6602] = actions(9);
	v->a[6603] = 1;
	v->a[6604] = anon_sym_for;
	v->a[6605] = actions(13);
	v->a[6606] = 1;
	v->a[6607] = anon_sym_if;
	v->a[6608] = actions(15);
	v->a[6609] = 1;
	v->a[6610] = anon_sym_case;
	v->a[6611] = actions(17);
	v->a[6612] = 1;
	v->a[6613] = anon_sym_LPAREN;
	v->a[6614] = actions(19);
	v->a[6615] = 1;
	v->a[6616] = anon_sym_LBRACE;
	v->a[6617] = actions(45);
	v->a[6618] = 1;
	v->a[6619] = sym_word;
	small_parse_table_331(v);
}

void	small_parse_table_331(t_small_parse_table_array *v)
{
	v->a[6620] = actions(53);
	v->a[6621] = 1;
	v->a[6622] = anon_sym_BANG;
	v->a[6623] = actions(59);
	v->a[6624] = 1;
	v->a[6625] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6626] = actions(61);
	v->a[6627] = 1;
	v->a[6628] = anon_sym_DOLLAR;
	v->a[6629] = actions(63);
	v->a[6630] = 1;
	v->a[6631] = anon_sym_DQUOTE;
	v->a[6632] = actions(67);
	v->a[6633] = 1;
	v->a[6634] = anon_sym_DOLLAR_LBRACE;
	v->a[6635] = actions(69);
	v->a[6636] = 1;
	v->a[6637] = anon_sym_DOLLAR_LPAREN;
	v->a[6638] = actions(71);
	v->a[6639] = 1;
	small_parse_table_332(v);
}

void	small_parse_table_332(t_small_parse_table_array *v)
{
	v->a[6640] = anon_sym_BQUOTE;
	v->a[6641] = actions(73);
	v->a[6642] = 1;
	v->a[6643] = sym_file_descriptor;
	v->a[6644] = actions(75);
	v->a[6645] = 1;
	v->a[6646] = sym_variable_name;
	v->a[6647] = actions(248);
	v->a[6648] = 1;
	v->a[6649] = anon_sym_then;
	v->a[6650] = state(35);
	v->a[6651] = 1;
	v->a[6652] = aux_sym__terminated_statement;
	v->a[6653] = state(189);
	v->a[6654] = 1;
	v->a[6655] = sym_command_name;
	v->a[6656] = state(291);
	v->a[6657] = 1;
	v->a[6658] = sym_variable_assignment;
	v->a[6659] = state(650);
	small_parse_table_333(v);
}

void	small_parse_table_333(t_small_parse_table_array *v)
{
	v->a[6660] = 1;
	v->a[6661] = sym_concatenation;
	v->a[6662] = state(712);
	v->a[6663] = 1;
	v->a[6664] = sym_file_redirect;
	v->a[6665] = state(713);
	v->a[6666] = 1;
	v->a[6667] = aux_sym_command_repeat1;
	v->a[6668] = state(1251);
	v->a[6669] = 1;
	v->a[6670] = sym_pipeline;
	v->a[6671] = state(1333);
	v->a[6672] = 1;
	v->a[6673] = aux_sym_redirected_statement_repeat2;
	v->a[6674] = state(2103);
	v->a[6675] = 1;
	v->a[6676] = sym__statement_not_pipeline;
	v->a[6677] = actions(11);
	v->a[6678] = 2;
	v->a[6679] = anon_sym_while;
	small_parse_table_334(v);
}

void	small_parse_table_334(t_small_parse_table_array *v)
{
	v->a[6680] = anon_sym_until;
	v->a[6681] = actions(57);
	v->a[6682] = 2;
	v->a[6683] = anon_sym_LT_AMP_DASH;
	v->a[6684] = anon_sym_GT_AMP_DASH;
	v->a[6685] = actions(65);
	v->a[6686] = 2;
	v->a[6687] = sym_raw_string;
	v->a[6688] = sym_number;
	v->a[6689] = state(443);
	v->a[6690] = 5;
	v->a[6691] = sym_arithmetic_expansion;
	v->a[6692] = sym_string;
	v->a[6693] = sym_simple_expansion;
	v->a[6694] = sym_expansion;
	v->a[6695] = sym_command_substitution;
	v->a[6696] = actions(55);
	v->a[6697] = 6;
	v->a[6698] = anon_sym_LT;
	v->a[6699] = anon_sym_GT;
	small_parse_table_335(v);
}

/* EOF small_parse_table_66.c */
