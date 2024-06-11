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
	v->a[10600] = sym_case_statement;
	v->a[10601] = sym_function_definition;
	v->a[10602] = sym_compound_statement;
	v->a[10603] = sym_subshell;
	v->a[10604] = sym_list;
	v->a[10605] = sym_negated_command;
	v->a[10606] = sym_command;
	v->a[10607] = sym_variable_assignments;
	v->a[10608] = 32;
	v->a[10609] = actions(3);
	v->a[10610] = 1;
	v->a[10611] = sym_comment;
	v->a[10612] = actions(9);
	v->a[10613] = 1;
	v->a[10614] = anon_sym_for;
	v->a[10615] = actions(13);
	v->a[10616] = 1;
	v->a[10617] = anon_sym_if;
	v->a[10618] = actions(15);
	v->a[10619] = 1;
	small_parse_table_531(v);
}

void	small_parse_table_531(t_small_parse_table_array *v)
{
	v->a[10620] = anon_sym_case;
	v->a[10621] = actions(17);
	v->a[10622] = 1;
	v->a[10623] = anon_sym_LPAREN;
	v->a[10624] = actions(19);
	v->a[10625] = 1;
	v->a[10626] = anon_sym_LBRACE;
	v->a[10627] = actions(45);
	v->a[10628] = 1;
	v->a[10629] = sym_word;
	v->a[10630] = actions(53);
	v->a[10631] = 1;
	v->a[10632] = anon_sym_BANG;
	v->a[10633] = actions(59);
	v->a[10634] = 1;
	v->a[10635] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10636] = actions(61);
	v->a[10637] = 1;
	v->a[10638] = anon_sym_DOLLAR;
	v->a[10639] = actions(63);
	small_parse_table_532(v);
}

void	small_parse_table_532(t_small_parse_table_array *v)
{
	v->a[10640] = 1;
	v->a[10641] = anon_sym_DQUOTE;
	v->a[10642] = actions(67);
	v->a[10643] = 1;
	v->a[10644] = anon_sym_DOLLAR_LBRACE;
	v->a[10645] = actions(69);
	v->a[10646] = 1;
	v->a[10647] = anon_sym_DOLLAR_LPAREN;
	v->a[10648] = actions(71);
	v->a[10649] = 1;
	v->a[10650] = anon_sym_BQUOTE;
	v->a[10651] = actions(73);
	v->a[10652] = 1;
	v->a[10653] = sym_file_descriptor;
	v->a[10654] = actions(75);
	v->a[10655] = 1;
	v->a[10656] = sym_variable_name;
	v->a[10657] = actions(252);
	v->a[10658] = 1;
	v->a[10659] = anon_sym_fi;
	small_parse_table_533(v);
}

void	small_parse_table_533(t_small_parse_table_array *v)
{
	v->a[10660] = state(54);
	v->a[10661] = 1;
	v->a[10662] = aux_sym__terminated_statement;
	v->a[10663] = state(187);
	v->a[10664] = 1;
	v->a[10665] = sym_command_name;
	v->a[10666] = state(289);
	v->a[10667] = 1;
	v->a[10668] = sym_variable_assignment;
	v->a[10669] = state(647);
	v->a[10670] = 1;
	v->a[10671] = sym_concatenation;
	v->a[10672] = state(736);
	v->a[10673] = 1;
	v->a[10674] = aux_sym_command_repeat1;
	v->a[10675] = state(738);
	v->a[10676] = 1;
	v->a[10677] = sym_file_redirect;
	v->a[10678] = state(1460);
	v->a[10679] = 1;
	small_parse_table_534(v);
}

void	small_parse_table_534(t_small_parse_table_array *v)
{
	v->a[10680] = aux_sym_redirected_statement_repeat2;
	v->a[10681] = state(1462);
	v->a[10682] = 1;
	v->a[10683] = sym_pipeline;
	v->a[10684] = state(2269);
	v->a[10685] = 1;
	v->a[10686] = sym__statement_not_pipeline;
	v->a[10687] = actions(11);
	v->a[10688] = 2;
	v->a[10689] = anon_sym_while;
	v->a[10690] = anon_sym_until;
	v->a[10691] = actions(57);
	v->a[10692] = 2;
	v->a[10693] = anon_sym_LT_AMP_DASH;
	v->a[10694] = anon_sym_GT_AMP_DASH;
	v->a[10695] = actions(65);
	v->a[10696] = 2;
	v->a[10697] = sym_raw_string;
	v->a[10698] = sym_number;
	v->a[10699] = state(394);
	small_parse_table_535(v);
}

/* EOF small_parse_table_106.c */
