/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_106.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_530(t_small_parse_table_array *v)
{
	v->a[10600] = anon_sym_BANG;
	v->a[10601] = actions(230);
	v->a[10602] = 1;
	v->a[10603] = sym_file_descriptor;
	v->a[10604] = actions(232);
	v->a[10605] = 1;
	v->a[10606] = sym_variable_name;
	v->a[10607] = state(133);
	v->a[10608] = 1;
	v->a[10609] = aux_sym__statements_repeat1;
	v->a[10610] = state(180);
	v->a[10611] = 1;
	v->a[10612] = sym_command_name;
	v->a[10613] = state(231);
	v->a[10614] = 1;
	v->a[10615] = sym_variable_assignment;
	v->a[10616] = state(650);
	v->a[10617] = 1;
	v->a[10618] = sym_concatenation;
	v->a[10619] = state(710);
	small_parse_table_531(v);
}

void	small_parse_table_531(t_small_parse_table_array *v)
{
	v->a[10620] = 1;
	v->a[10621] = aux_sym_command_repeat1;
	v->a[10622] = state(724);
	v->a[10623] = 1;
	v->a[10624] = sym_file_redirect;
	v->a[10625] = state(1095);
	v->a[10626] = 1;
	v->a[10627] = sym_pipeline;
	v->a[10628] = state(1282);
	v->a[10629] = 1;
	v->a[10630] = aux_sym_redirected_statement_repeat2;
	v->a[10631] = state(2127);
	v->a[10632] = 1;
	v->a[10633] = sym__statement_not_pipeline;
	v->a[10634] = state(2243);
	v->a[10635] = 1;
	v->a[10636] = sym__statements;
	v->a[10637] = actions(11);
	v->a[10638] = 2;
	v->a[10639] = anon_sym_while;
	small_parse_table_532(v);
}

void	small_parse_table_532(t_small_parse_table_array *v)
{
	v->a[10640] = anon_sym_until;
	v->a[10641] = actions(226);
	v->a[10642] = 2;
	v->a[10643] = anon_sym_LT_AMP_DASH;
	v->a[10644] = anon_sym_GT_AMP_DASH;
	v->a[10645] = actions(228);
	v->a[10646] = 2;
	v->a[10647] = sym_raw_string;
	v->a[10648] = sym_number;
	v->a[10649] = state(382);
	v->a[10650] = 5;
	v->a[10651] = sym_arithmetic_expansion;
	v->a[10652] = sym_string;
	v->a[10653] = sym_simple_expansion;
	v->a[10654] = sym_expansion;
	v->a[10655] = sym_command_substitution;
	v->a[10656] = actions(224);
	v->a[10657] = 6;
	v->a[10658] = anon_sym_LT;
	v->a[10659] = anon_sym_GT;
	small_parse_table_533(v);
}

void	small_parse_table_533(t_small_parse_table_array *v)
{
	v->a[10660] = anon_sym_GT_GT;
	v->a[10661] = anon_sym_LT_AMP;
	v->a[10662] = anon_sym_GT_AMP;
	v->a[10663] = anon_sym_GT_PIPE;
	v->a[10664] = state(1087);
	v->a[10665] = 12;
	v->a[10666] = sym_redirected_statement;
	v->a[10667] = sym_for_statement;
	v->a[10668] = sym_while_statement;
	v->a[10669] = sym_if_statement;
	v->a[10670] = sym_case_statement;
	v->a[10671] = sym_function_definition;
	v->a[10672] = sym_compound_statement;
	v->a[10673] = sym_subshell;
	v->a[10674] = sym_list;
	v->a[10675] = sym_negated_command;
	v->a[10676] = sym_command;
	v->a[10677] = sym__variable_assignments;
	v->a[10678] = 32;
	v->a[10679] = actions(3);
	small_parse_table_534(v);
}

void	small_parse_table_534(t_small_parse_table_array *v)
{
	v->a[10680] = 1;
	v->a[10681] = sym_comment;
	v->a[10682] = actions(9);
	v->a[10683] = 1;
	v->a[10684] = anon_sym_for;
	v->a[10685] = actions(13);
	v->a[10686] = 1;
	v->a[10687] = anon_sym_if;
	v->a[10688] = actions(15);
	v->a[10689] = 1;
	v->a[10690] = anon_sym_case;
	v->a[10691] = actions(17);
	v->a[10692] = 1;
	v->a[10693] = anon_sym_LPAREN;
	v->a[10694] = actions(19);
	v->a[10695] = 1;
	v->a[10696] = anon_sym_LBRACE;
	v->a[10697] = actions(59);
	v->a[10698] = 1;
	v->a[10699] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_535(v);
}

/* EOF small_parse_table_106.c */
