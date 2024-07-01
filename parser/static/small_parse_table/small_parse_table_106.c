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
	v->a[10600] = sym_file_redirect;
	v->a[10601] = state(1052);
	v->a[10602] = 1;
	v->a[10603] = sym_pipeline;
	v->a[10604] = state(1190);
	v->a[10605] = 1;
	v->a[10606] = aux_sym_redirected_statement_repeat2;
	v->a[10607] = state(1890);
	v->a[10608] = 1;
	v->a[10609] = sym__statement_not_pipeline;
	v->a[10610] = state(2039);
	v->a[10611] = 1;
	v->a[10612] = sym__statements;
	v->a[10613] = actions(11);
	v->a[10614] = 2;
	v->a[10615] = anon_sym_while;
	v->a[10616] = anon_sym_until;
	v->a[10617] = actions(61);
	v->a[10618] = 2;
	v->a[10619] = sym_raw_string;
	small_parse_table_531(v);
}

void	small_parse_table_531(t_small_parse_table_array *v)
{
	v->a[10620] = sym_number;
	v->a[10621] = state(436);
	v->a[10622] = 5;
	v->a[10623] = sym_arithmetic_expansion;
	v->a[10624] = sym_string;
	v->a[10625] = sym_simple_expansion;
	v->a[10626] = sym_expansion;
	v->a[10627] = sym_command_substitution;
	v->a[10628] = actions(53);
	v->a[10629] = 7;
	v->a[10630] = anon_sym_LT;
	v->a[10631] = anon_sym_GT;
	v->a[10632] = anon_sym_GT_GT;
	v->a[10633] = anon_sym_LT_AMP;
	v->a[10634] = anon_sym_GT_AMP;
	v->a[10635] = anon_sym_GT_PIPE;
	v->a[10636] = anon_sym_LT_GT;
	v->a[10637] = state(967);
	v->a[10638] = 12;
	v->a[10639] = sym_redirected_statement;
	small_parse_table_532(v);
}

void	small_parse_table_532(t_small_parse_table_array *v)
{
	v->a[10640] = sym_for_statement;
	v->a[10641] = sym_while_statement;
	v->a[10642] = sym_if_statement;
	v->a[10643] = sym_case_statement;
	v->a[10644] = sym_function_definition;
	v->a[10645] = sym_compound_statement;
	v->a[10646] = sym_subshell;
	v->a[10647] = sym_list;
	v->a[10648] = sym_negated_command;
	v->a[10649] = sym_command;
	v->a[10650] = sym__variable_assignments;
	v->a[10651] = 31;
	v->a[10652] = actions(3);
	v->a[10653] = 1;
	v->a[10654] = sym_comment;
	v->a[10655] = actions(9);
	v->a[10656] = 1;
	v->a[10657] = anon_sym_for;
	v->a[10658] = actions(13);
	v->a[10659] = 1;
	small_parse_table_533(v);
}

void	small_parse_table_533(t_small_parse_table_array *v)
{
	v->a[10660] = anon_sym_if;
	v->a[10661] = actions(15);
	v->a[10662] = 1;
	v->a[10663] = anon_sym_case;
	v->a[10664] = actions(17);
	v->a[10665] = 1;
	v->a[10666] = anon_sym_LPAREN;
	v->a[10667] = actions(19);
	v->a[10668] = 1;
	v->a[10669] = anon_sym_LBRACE;
	v->a[10670] = actions(55);
	v->a[10671] = 1;
	v->a[10672] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10673] = actions(57);
	v->a[10674] = 1;
	v->a[10675] = anon_sym_DOLLAR;
	v->a[10676] = actions(59);
	v->a[10677] = 1;
	v->a[10678] = anon_sym_DQUOTE;
	v->a[10679] = actions(63);
	small_parse_table_534(v);
}

void	small_parse_table_534(t_small_parse_table_array *v)
{
	v->a[10680] = 1;
	v->a[10681] = anon_sym_DOLLAR_LBRACE;
	v->a[10682] = actions(65);
	v->a[10683] = 1;
	v->a[10684] = anon_sym_DOLLAR_LPAREN;
	v->a[10685] = actions(67);
	v->a[10686] = 1;
	v->a[10687] = anon_sym_BQUOTE;
	v->a[10688] = actions(211);
	v->a[10689] = 1;
	v->a[10690] = sym_word;
	v->a[10691] = actions(213);
	v->a[10692] = 1;
	v->a[10693] = anon_sym_BANG;
	v->a[10694] = actions(219);
	v->a[10695] = 1;
	v->a[10696] = sym_file_descriptor;
	v->a[10697] = actions(221);
	v->a[10698] = 1;
	v->a[10699] = sym_variable_name;
	small_parse_table_535(v);
}

/* EOF small_parse_table_106.c */
