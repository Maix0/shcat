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
	v->a[17609] = sym__variable_assignments;
	v->a[17610] = 29;
	v->a[17611] = actions(3);
	v->a[17612] = 1;
	v->a[17613] = sym_comment;
	v->a[17614] = actions(325);
	v->a[17615] = 1;
	v->a[17616] = sym_word;
	v->a[17617] = actions(327);
	v->a[17618] = 1;
	v->a[17619] = anon_sym_for;
	small_parse_table_881(v);
}

void	small_parse_table_881(t_small_parse_table_array *v)
{
	v->a[17620] = actions(331);
	v->a[17621] = 1;
	v->a[17622] = anon_sym_if;
	v->a[17623] = actions(333);
	v->a[17624] = 1;
	v->a[17625] = anon_sym_case;
	v->a[17626] = actions(335);
	v->a[17627] = 1;
	v->a[17628] = anon_sym_LPAREN;
	v->a[17629] = actions(337);
	v->a[17630] = 1;
	v->a[17631] = anon_sym_LBRACE;
	v->a[17632] = actions(339);
	v->a[17633] = 1;
	v->a[17634] = anon_sym_BANG;
	v->a[17635] = actions(345);
	v->a[17636] = 1;
	v->a[17637] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17638] = actions(347);
	v->a[17639] = 1;
	small_parse_table_882(v);
}

void	small_parse_table_882(t_small_parse_table_array *v)
{
	v->a[17640] = anon_sym_DOLLAR;
	v->a[17641] = actions(349);
	v->a[17642] = 1;
	v->a[17643] = anon_sym_DQUOTE;
	v->a[17644] = actions(353);
	v->a[17645] = 1;
	v->a[17646] = anon_sym_DOLLAR_LBRACE;
	v->a[17647] = actions(355);
	v->a[17648] = 1;
	v->a[17649] = anon_sym_DOLLAR_LPAREN;
	v->a[17650] = actions(357);
	v->a[17651] = 1;
	v->a[17652] = anon_sym_BQUOTE;
	v->a[17653] = actions(359);
	v->a[17654] = 1;
	v->a[17655] = sym_file_descriptor;
	v->a[17656] = actions(361);
	v->a[17657] = 1;
	v->a[17658] = sym_variable_name;
	v->a[17659] = state(298);
	small_parse_table_883(v);
}

void	small_parse_table_883(t_small_parse_table_array *v)
{
	v->a[17660] = 1;
	v->a[17661] = sym_command_name;
	v->a[17662] = state(665);
	v->a[17663] = 1;
	v->a[17664] = aux_sym_command_repeat1;
	v->a[17665] = state(725);
	v->a[17666] = 1;
	v->a[17667] = sym_variable_assignment;
	v->a[17668] = state(1070);
	v->a[17669] = 1;
	v->a[17670] = sym_concatenation;
	v->a[17671] = state(1093);
	v->a[17672] = 1;
	v->a[17673] = sym_file_redirect;
	v->a[17674] = state(1589);
	v->a[17675] = 1;
	v->a[17676] = aux_sym_redirected_statement_repeat2;
	v->a[17677] = state(1590);
	v->a[17678] = 1;
	v->a[17679] = sym_pipeline;
	small_parse_table_884(v);
}

void	small_parse_table_884(t_small_parse_table_array *v)
{
	v->a[17680] = actions(329);
	v->a[17681] = 2;
	v->a[17682] = anon_sym_while;
	v->a[17683] = anon_sym_until;
	v->a[17684] = actions(343);
	v->a[17685] = 2;
	v->a[17686] = anon_sym_LT_AMP_DASH;
	v->a[17687] = anon_sym_GT_AMP_DASH;
	v->a[17688] = actions(351);
	v->a[17689] = 2;
	v->a[17690] = sym_raw_string;
	v->a[17691] = sym_number;
	v->a[17692] = state(903);
	v->a[17693] = 5;
	v->a[17694] = sym_arithmetic_expansion;
	v->a[17695] = sym_string;
	v->a[17696] = sym_simple_expansion;
	v->a[17697] = sym_expansion;
	v->a[17698] = sym_command_substitution;
	v->a[17699] = actions(341);
	small_parse_table_885(v);
}

/* EOF small_parse_table_176.c */
