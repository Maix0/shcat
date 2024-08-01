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
	v->a[10600] = actions(55);
	v->a[10601] = 1;
	v->a[10602] = anon_sym_DOLLAR;
	v->a[10603] = actions(57);
	v->a[10604] = 1;
	v->a[10605] = anon_sym_DQUOTE;
	v->a[10606] = actions(61);
	v->a[10607] = 1;
	v->a[10608] = anon_sym_DOLLAR_LBRACE;
	v->a[10609] = actions(63);
	v->a[10610] = 1;
	v->a[10611] = anon_sym_DOLLAR_LPAREN;
	v->a[10612] = actions(65);
	v->a[10613] = 1;
	v->a[10614] = anon_sym_BQUOTE;
	v->a[10615] = actions(67);
	v->a[10616] = 1;
	v->a[10617] = sym_variable_name;
	v->a[10618] = actions(204);
	v->a[10619] = 1;
	small_parse_table_531(v);
}

void	small_parse_table_531(t_small_parse_table_array *v)
{
	v->a[10620] = sym_word;
	v->a[10621] = actions(206);
	v->a[10622] = 1;
	v->a[10623] = anon_sym_BANG;
	v->a[10624] = state(116);
	v->a[10625] = 1;
	v->a[10626] = aux_sym__statements_repeat1;
	v->a[10627] = state(179);
	v->a[10628] = 1;
	v->a[10629] = sym_command_name;
	v->a[10630] = state(208);
	v->a[10631] = 1;
	v->a[10632] = sym_variable_assignment;
	v->a[10633] = state(385);
	v->a[10634] = 1;
	v->a[10635] = aux_sym_command_repeat1;
	v->a[10636] = state(555);
	v->a[10637] = 1;
	v->a[10638] = sym_concatenation;
	v->a[10639] = state(599);
	small_parse_table_532(v);
}

void	small_parse_table_532(t_small_parse_table_array *v)
{
	v->a[10640] = 1;
	v->a[10641] = sym_file_redirect;
	v->a[10642] = state(969);
	v->a[10643] = 1;
	v->a[10644] = sym_pipeline;
	v->a[10645] = state(1006);
	v->a[10646] = 1;
	v->a[10647] = aux_sym_redirected_statement_repeat2;
	v->a[10648] = state(1560);
	v->a[10649] = 1;
	v->a[10650] = sym__statement_not_pipeline;
	v->a[10651] = state(1687);
	v->a[10652] = 1;
	v->a[10653] = sym__statements;
	v->a[10654] = actions(11);
	v->a[10655] = 2;
	v->a[10656] = anon_sym_while;
	v->a[10657] = anon_sym_until;
	v->a[10658] = actions(59);
	v->a[10659] = 2;
	small_parse_table_533(v);
}

void	small_parse_table_533(t_small_parse_table_array *v)
{
	v->a[10660] = sym_raw_string;
	v->a[10661] = sym_number;
	v->a[10662] = actions(51);
	v->a[10663] = 3;
	v->a[10664] = anon_sym_LT;
	v->a[10665] = anon_sym_GT;
	v->a[10666] = anon_sym_GT_GT;
	v->a[10667] = state(401);
	v->a[10668] = 5;
	v->a[10669] = sym_arithmetic_expansion;
	v->a[10670] = sym_string;
	v->a[10671] = sym_simple_expansion;
	v->a[10672] = sym_expansion;
	v->a[10673] = sym_command_substitution;
	v->a[10674] = state(820);
	v->a[10675] = 12;
	v->a[10676] = sym_redirected_statement;
	v->a[10677] = sym_for_statement;
	v->a[10678] = sym_while_statement;
	v->a[10679] = sym_if_statement;
	small_parse_table_534(v);
}

void	small_parse_table_534(t_small_parse_table_array *v)
{
	v->a[10680] = sym_case_statement;
	v->a[10681] = sym_function_definition;
	v->a[10682] = sym_compound_statement;
	v->a[10683] = sym_subshell;
	v->a[10684] = sym_list;
	v->a[10685] = sym_negated_command;
	v->a[10686] = sym_command;
	v->a[10687] = sym__variable_assignments;
	v->a[10688] = 30;
	v->a[10689] = actions(3);
	v->a[10690] = 1;
	v->a[10691] = sym_comment;
	v->a[10692] = actions(9);
	v->a[10693] = 1;
	v->a[10694] = anon_sym_for;
	v->a[10695] = actions(13);
	v->a[10696] = 1;
	v->a[10697] = anon_sym_if;
	v->a[10698] = actions(15);
	v->a[10699] = 1;
	small_parse_table_535(v);
}

/* EOF small_parse_table_106.c */
