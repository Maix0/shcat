/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_176.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_880(t_small_parse_table_array *v)
{
	v->a[17600] = sym_while_statement;
	v->a[17601] = sym_if_statement;
	v->a[17602] = sym_case_statement;
	v->a[17603] = sym_function_definition;
	v->a[17604] = sym_compound_statement;
	v->a[17605] = sym_subshell;
	v->a[17606] = sym_list;
	v->a[17607] = sym_negated_command;
	v->a[17608] = sym_command;
	v->a[17609] = sym_variable_assignments;
	v->a[17610] = 33;
	v->a[17611] = actions(3);
	v->a[17612] = 1;
	v->a[17613] = sym_comment;
	v->a[17614] = actions(9);
	v->a[17615] = 1;
	v->a[17616] = anon_sym_for;
	v->a[17617] = actions(13);
	v->a[17618] = 1;
	v->a[17619] = anon_sym_if;
	small_parse_table_881(v);
}

void	small_parse_table_881(t_small_parse_table_array *v)
{
	v->a[17620] = actions(15);
	v->a[17621] = 1;
	v->a[17622] = anon_sym_case;
	v->a[17623] = actions(17);
	v->a[17624] = 1;
	v->a[17625] = anon_sym_LPAREN;
	v->a[17626] = actions(19);
	v->a[17627] = 1;
	v->a[17628] = anon_sym_LBRACE;
	v->a[17629] = actions(49);
	v->a[17630] = 1;
	v->a[17631] = sym_word;
	v->a[17632] = actions(57);
	v->a[17633] = 1;
	v->a[17634] = anon_sym_BANG;
	v->a[17635] = actions(63);
	v->a[17636] = 1;
	v->a[17637] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17638] = actions(65);
	v->a[17639] = 1;
	small_parse_table_882(v);
}

void	small_parse_table_882(t_small_parse_table_array *v)
{
	v->a[17640] = anon_sym_DOLLAR;
	v->a[17641] = actions(67);
	v->a[17642] = 1;
	v->a[17643] = anon_sym_DQUOTE;
	v->a[17644] = actions(69);
	v->a[17645] = 1;
	v->a[17646] = sym_raw_string;
	v->a[17647] = actions(71);
	v->a[17648] = 1;
	v->a[17649] = aux_sym_number_token1;
	v->a[17650] = actions(73);
	v->a[17651] = 1;
	v->a[17652] = aux_sym_number_token2;
	v->a[17653] = actions(75);
	v->a[17654] = 1;
	v->a[17655] = anon_sym_DOLLAR_LBRACE;
	v->a[17656] = actions(77);
	v->a[17657] = 1;
	v->a[17658] = anon_sym_DOLLAR_LPAREN;
	v->a[17659] = actions(79);
	small_parse_table_883(v);
}

void	small_parse_table_883(t_small_parse_table_array *v)
{
	v->a[17660] = 1;
	v->a[17661] = anon_sym_BQUOTE;
	v->a[17662] = actions(81);
	v->a[17663] = 1;
	v->a[17664] = sym_file_descriptor;
	v->a[17665] = actions(83);
	v->a[17666] = 1;
	v->a[17667] = sym_variable_name;
	v->a[17668] = state(41);
	v->a[17669] = 1;
	v->a[17670] = aux_sym__terminated_statement;
	v->a[17671] = state(190);
	v->a[17672] = 1;
	v->a[17673] = sym_command_name;
	v->a[17674] = state(285);
	v->a[17675] = 1;
	v->a[17676] = sym_variable_assignment;
	v->a[17677] = state(582);
	v->a[17678] = 1;
	v->a[17679] = sym_concatenation;
	small_parse_table_884(v);
}

void	small_parse_table_884(t_small_parse_table_array *v)
{
	v->a[17680] = state(587);
	v->a[17681] = 1;
	v->a[17682] = aux_sym_command_repeat1;
	v->a[17683] = state(718);
	v->a[17684] = 1;
	v->a[17685] = sym_file_redirect;
	v->a[17686] = state(1213);
	v->a[17687] = 1;
	v->a[17688] = aux_sym_redirected_statement_repeat2;
	v->a[17689] = state(1217);
	v->a[17690] = 1;
	v->a[17691] = sym_pipeline;
	v->a[17692] = state(2035);
	v->a[17693] = 1;
	v->a[17694] = sym__statement_not_pipeline;
	v->a[17695] = actions(11);
	v->a[17696] = 2;
	v->a[17697] = anon_sym_while;
	v->a[17698] = anon_sym_until;
	v->a[17699] = actions(61);
	small_parse_table_885(v);
}

/* EOF small_parse_table_176.c */
