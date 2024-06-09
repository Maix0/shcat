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
	v->a[10600] = sym_compound_statement;
	v->a[10601] = sym_subshell;
	v->a[10602] = sym_list;
	v->a[10603] = sym_negated_command;
	v->a[10604] = sym_command;
	v->a[10605] = sym_variable_assignments;
	v->a[10606] = 34;
	v->a[10607] = actions(3);
	v->a[10608] = 1;
	v->a[10609] = sym_comment;
	v->a[10610] = actions(9);
	v->a[10611] = 1;
	v->a[10612] = anon_sym_for;
	v->a[10613] = actions(13);
	v->a[10614] = 1;
	v->a[10615] = anon_sym_if;
	v->a[10616] = actions(15);
	v->a[10617] = 1;
	v->a[10618] = anon_sym_case;
	v->a[10619] = actions(17);
	small_parse_table_531(v);
}

void	small_parse_table_531(t_small_parse_table_array *v)
{
	v->a[10620] = 1;
	v->a[10621] = anon_sym_LPAREN;
	v->a[10622] = actions(19);
	v->a[10623] = 1;
	v->a[10624] = anon_sym_LBRACE;
	v->a[10625] = actions(63);
	v->a[10626] = 1;
	v->a[10627] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10628] = actions(65);
	v->a[10629] = 1;
	v->a[10630] = anon_sym_DOLLAR;
	v->a[10631] = actions(67);
	v->a[10632] = 1;
	v->a[10633] = anon_sym_DQUOTE;
	v->a[10634] = actions(69);
	v->a[10635] = 1;
	v->a[10636] = sym_raw_string;
	v->a[10637] = actions(71);
	v->a[10638] = 1;
	v->a[10639] = aux_sym_number_token1;
	small_parse_table_532(v);
}

void	small_parse_table_532(t_small_parse_table_array *v)
{
	v->a[10640] = actions(73);
	v->a[10641] = 1;
	v->a[10642] = aux_sym_number_token2;
	v->a[10643] = actions(75);
	v->a[10644] = 1;
	v->a[10645] = anon_sym_DOLLAR_LBRACE;
	v->a[10646] = actions(77);
	v->a[10647] = 1;
	v->a[10648] = anon_sym_DOLLAR_LPAREN;
	v->a[10649] = actions(79);
	v->a[10650] = 1;
	v->a[10651] = anon_sym_BQUOTE;
	v->a[10652] = actions(81);
	v->a[10653] = 1;
	v->a[10654] = sym_file_descriptor;
	v->a[10655] = actions(83);
	v->a[10656] = 1;
	v->a[10657] = sym_variable_name;
	v->a[10658] = actions(238);
	v->a[10659] = 1;
	small_parse_table_533(v);
}

void	small_parse_table_533(t_small_parse_table_array *v)
{
	v->a[10660] = sym_word;
	v->a[10661] = actions(240);
	v->a[10662] = 1;
	v->a[10663] = anon_sym_BANG;
	v->a[10664] = state(132);
	v->a[10665] = 1;
	v->a[10666] = aux_sym__statements_repeat1;
	v->a[10667] = state(185);
	v->a[10668] = 1;
	v->a[10669] = sym_command_name;
	v->a[10670] = state(297);
	v->a[10671] = 1;
	v->a[10672] = sym_variable_assignment;
	v->a[10673] = state(582);
	v->a[10674] = 1;
	v->a[10675] = sym_concatenation;
	v->a[10676] = state(614);
	v->a[10677] = 1;
	v->a[10678] = aux_sym_command_repeat1;
	v->a[10679] = state(769);
	small_parse_table_534(v);
}

void	small_parse_table_534(t_small_parse_table_array *v)
{
	v->a[10680] = 1;
	v->a[10681] = sym_file_redirect;
	v->a[10682] = state(1133);
	v->a[10683] = 1;
	v->a[10684] = aux_sym_redirected_statement_repeat2;
	v->a[10685] = state(1142);
	v->a[10686] = 1;
	v->a[10687] = sym_pipeline;
	v->a[10688] = state(2041);
	v->a[10689] = 1;
	v->a[10690] = sym__statement_not_pipeline;
	v->a[10691] = state(2186);
	v->a[10692] = 1;
	v->a[10693] = sym__statements;
	v->a[10694] = actions(11);
	v->a[10695] = 2;
	v->a[10696] = anon_sym_while;
	v->a[10697] = anon_sym_until;
	v->a[10698] = actions(61);
	v->a[10699] = 2;
	small_parse_table_535(v);
}

/* EOF small_parse_table_106.c */
