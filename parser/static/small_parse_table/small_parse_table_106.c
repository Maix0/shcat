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
	v->a[10600] = sym_redirected_statement;
	v->a[10601] = sym_for_statement;
	v->a[10602] = sym_while_statement;
	v->a[10603] = sym_if_statement;
	v->a[10604] = sym_case_statement;
	v->a[10605] = sym_function_definition;
	v->a[10606] = sym_compound_statement;
	v->a[10607] = sym_subshell;
	v->a[10608] = sym_list;
	v->a[10609] = sym_negated_command;
	v->a[10610] = sym_command;
	v->a[10611] = sym__variable_assignments;
	v->a[10612] = 30;
	v->a[10613] = actions(3);
	v->a[10614] = 1;
	v->a[10615] = sym_comment;
	v->a[10616] = actions(133);
	v->a[10617] = 1;
	v->a[10618] = sym_word;
	v->a[10619] = actions(136);
	small_parse_table_531(v);
}

void	small_parse_table_531(t_small_parse_table_array *v)
{
	v->a[10620] = 1;
	v->a[10621] = anon_sym_for;
	v->a[10622] = actions(142);
	v->a[10623] = 1;
	v->a[10624] = anon_sym_if;
	v->a[10625] = actions(145);
	v->a[10626] = 1;
	v->a[10627] = anon_sym_fi;
	v->a[10628] = actions(147);
	v->a[10629] = 1;
	v->a[10630] = anon_sym_case;
	v->a[10631] = actions(150);
	v->a[10632] = 1;
	v->a[10633] = anon_sym_LPAREN;
	v->a[10634] = actions(153);
	v->a[10635] = 1;
	v->a[10636] = anon_sym_LBRACE;
	v->a[10637] = actions(156);
	v->a[10638] = 1;
	v->a[10639] = anon_sym_BANG;
	small_parse_table_532(v);
}

void	small_parse_table_532(t_small_parse_table_array *v)
{
	v->a[10640] = actions(162);
	v->a[10641] = 1;
	v->a[10642] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10643] = actions(165);
	v->a[10644] = 1;
	v->a[10645] = anon_sym_DOLLAR;
	v->a[10646] = actions(168);
	v->a[10647] = 1;
	v->a[10648] = anon_sym_DQUOTE;
	v->a[10649] = actions(174);
	v->a[10650] = 1;
	v->a[10651] = anon_sym_DOLLAR_LBRACE;
	v->a[10652] = actions(177);
	v->a[10653] = 1;
	v->a[10654] = anon_sym_DOLLAR_LPAREN;
	v->a[10655] = actions(180);
	v->a[10656] = 1;
	v->a[10657] = anon_sym_BQUOTE;
	v->a[10658] = actions(183);
	v->a[10659] = 1;
	small_parse_table_533(v);
}

void	small_parse_table_533(t_small_parse_table_array *v)
{
	v->a[10660] = sym_variable_name;
	v->a[10661] = state(93);
	v->a[10662] = 1;
	v->a[10663] = aux_sym__terminated_statement;
	v->a[10664] = state(271);
	v->a[10665] = 1;
	v->a[10666] = sym_command_name;
	v->a[10667] = state(296);
	v->a[10668] = 1;
	v->a[10669] = sym_variable_assignment;
	v->a[10670] = state(482);
	v->a[10671] = 1;
	v->a[10672] = aux_sym_command_repeat1;
	v->a[10673] = state(600);
	v->a[10674] = 1;
	v->a[10675] = sym_file_redirect;
	v->a[10676] = state(602);
	v->a[10677] = 1;
	v->a[10678] = sym_concatenation;
	v->a[10679] = state(1013);
	small_parse_table_534(v);
}

void	small_parse_table_534(t_small_parse_table_array *v)
{
	v->a[10680] = 1;
	v->a[10681] = sym_pipeline;
	v->a[10682] = state(1068);
	v->a[10683] = 1;
	v->a[10684] = aux_sym_redirected_statement_repeat2;
	v->a[10685] = state(1609);
	v->a[10686] = 1;
	v->a[10687] = sym__statement_not_pipeline;
	v->a[10688] = actions(139);
	v->a[10689] = 2;
	v->a[10690] = anon_sym_while;
	v->a[10691] = anon_sym_until;
	v->a[10692] = actions(171);
	v->a[10693] = 2;
	v->a[10694] = sym_raw_string;
	v->a[10695] = sym_number;
	v->a[10696] = state(425);
	v->a[10697] = 5;
	v->a[10698] = sym_arithmetic_expansion;
	v->a[10699] = sym_string;
	small_parse_table_535(v);
}

/* EOF small_parse_table_106.c */
