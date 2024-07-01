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
	v->a[17600] = 1;
	v->a[17601] = sym_command_name;
	v->a[17602] = state(288);
	v->a[17603] = 1;
	v->a[17604] = sym_variable_assignment;
	v->a[17605] = state(636);
	v->a[17606] = 1;
	v->a[17607] = sym_concatenation;
	v->a[17608] = state(677);
	v->a[17609] = 1;
	v->a[17610] = sym_file_redirect;
	v->a[17611] = state(752);
	v->a[17612] = 1;
	v->a[17613] = aux_sym_command_repeat1;
	v->a[17614] = state(1226);
	v->a[17615] = 1;
	v->a[17616] = aux_sym_redirected_statement_repeat2;
	v->a[17617] = state(1583);
	v->a[17618] = 1;
	v->a[17619] = sym_pipeline;
	small_parse_table_881(v);
}

void	small_parse_table_881(t_small_parse_table_array *v)
{
	v->a[17620] = actions(160);
	v->a[17621] = 2;
	v->a[17622] = anon_sym_while;
	v->a[17623] = anon_sym_until;
	v->a[17624] = actions(174);
	v->a[17625] = 2;
	v->a[17626] = anon_sym_LT_AMP_DASH;
	v->a[17627] = anon_sym_GT_AMP_DASH;
	v->a[17628] = actions(182);
	v->a[17629] = 2;
	v->a[17630] = sym_raw_string;
	v->a[17631] = sym_number;
	v->a[17632] = state(385);
	v->a[17633] = 5;
	v->a[17634] = sym_arithmetic_expansion;
	v->a[17635] = sym_string;
	v->a[17636] = sym_simple_expansion;
	v->a[17637] = sym_expansion;
	v->a[17638] = sym_command_substitution;
	v->a[17639] = actions(172);
	small_parse_table_882(v);
}

void	small_parse_table_882(t_small_parse_table_array *v)
{
	v->a[17640] = 6;
	v->a[17641] = anon_sym_LT;
	v->a[17642] = anon_sym_GT;
	v->a[17643] = anon_sym_GT_GT;
	v->a[17644] = anon_sym_LT_AMP;
	v->a[17645] = anon_sym_GT_AMP;
	v->a[17646] = anon_sym_GT_PIPE;
	v->a[17647] = state(1323);
	v->a[17648] = 13;
	v->a[17649] = sym__statement_not_pipeline;
	v->a[17650] = sym_redirected_statement;
	v->a[17651] = sym_for_statement;
	v->a[17652] = sym_while_statement;
	v->a[17653] = sym_if_statement;
	v->a[17654] = sym_case_statement;
	v->a[17655] = sym_function_definition;
	v->a[17656] = sym_compound_statement;
	v->a[17657] = sym_subshell;
	v->a[17658] = sym_list;
	v->a[17659] = sym_negated_command;
	small_parse_table_883(v);
}

void	small_parse_table_883(t_small_parse_table_array *v)
{
	v->a[17660] = sym_command;
	v->a[17661] = sym__variable_assignments;
	v->a[17662] = 30;
	v->a[17663] = actions(3);
	v->a[17664] = 1;
	v->a[17665] = sym_comment;
	v->a[17666] = actions(9);
	v->a[17667] = 1;
	v->a[17668] = anon_sym_for;
	v->a[17669] = actions(13);
	v->a[17670] = 1;
	v->a[17671] = anon_sym_if;
	v->a[17672] = actions(15);
	v->a[17673] = 1;
	v->a[17674] = anon_sym_case;
	v->a[17675] = actions(17);
	v->a[17676] = 1;
	v->a[17677] = anon_sym_LPAREN;
	v->a[17678] = actions(19);
	v->a[17679] = 1;
	small_parse_table_884(v);
}

void	small_parse_table_884(t_small_parse_table_array *v)
{
	v->a[17680] = anon_sym_LBRACE;
	v->a[17681] = actions(59);
	v->a[17682] = 1;
	v->a[17683] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17684] = actions(61);
	v->a[17685] = 1;
	v->a[17686] = anon_sym_DOLLAR;
	v->a[17687] = actions(63);
	v->a[17688] = 1;
	v->a[17689] = anon_sym_DQUOTE;
	v->a[17690] = actions(67);
	v->a[17691] = 1;
	v->a[17692] = anon_sym_DOLLAR_LBRACE;
	v->a[17693] = actions(69);
	v->a[17694] = 1;
	v->a[17695] = anon_sym_DOLLAR_LPAREN;
	v->a[17696] = actions(71);
	v->a[17697] = 1;
	v->a[17698] = anon_sym_BQUOTE;
	v->a[17699] = actions(363);
	small_parse_table_885(v);
}

/* EOF small_parse_table_176.c */
