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
	v->a[10600] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10601] = actions(314);
	v->a[10602] = 1;
	v->a[10603] = anon_sym_DOLLAR_LBRACK;
	v->a[10604] = actions(316);
	v->a[10605] = 1;
	v->a[10606] = anon_sym_DOLLAR;
	v->a[10607] = actions(320);
	v->a[10608] = 1;
	v->a[10609] = anon_sym_DQUOTE;
	v->a[10610] = actions(324);
	v->a[10611] = 1;
	v->a[10612] = aux_sym_number_token1;
	v->a[10613] = actions(326);
	v->a[10614] = 1;
	v->a[10615] = aux_sym_number_token2;
	v->a[10616] = actions(328);
	v->a[10617] = 1;
	v->a[10618] = anon_sym_DOLLAR_LBRACE;
	v->a[10619] = actions(330);
	small_parse_table_531(v);
}

void	small_parse_table_531(t_small_parse_table_array *v)
{
	v->a[10620] = 1;
	v->a[10621] = anon_sym_DOLLAR_LPAREN;
	v->a[10622] = actions(332);
	v->a[10623] = 1;
	v->a[10624] = anon_sym_BQUOTE;
	v->a[10625] = actions(334);
	v->a[10626] = 1;
	v->a[10627] = anon_sym_DOLLAR_BQUOTE;
	v->a[10628] = actions(344);
	v->a[10629] = 1;
	v->a[10630] = sym__brace_start;
	v->a[10631] = actions(771);
	v->a[10632] = 1;
	v->a[10633] = sym__special_character;
	v->a[10634] = actions(775);
	v->a[10635] = 1;
	v->a[10636] = sym_test_operator;
	v->a[10637] = actions(1394);
	v->a[10638] = 1;
	v->a[10639] = anon_sym_LT_LT_LT;
	small_parse_table_532(v);
}

void	small_parse_table_532(t_small_parse_table_array *v)
{
	v->a[10640] = actions(1396);
	v->a[10641] = 1;
	v->a[10642] = sym_file_descriptor;
	v->a[10643] = actions(2941);
	v->a[10644] = 1;
	v->a[10645] = sym_word;
	v->a[10646] = state(533);
	v->a[10647] = 1;
	v->a[10648] = sym_command_name;
	v->a[10649] = state(951);
	v->a[10650] = 1;
	v->a[10651] = aux_sym_command_repeat1;
	v->a[10652] = state(1267);
	v->a[10653] = 1;
	v->a[10654] = aux_sym__literal_repeat1;
	v->a[10655] = state(1376);
	v->a[10656] = 1;
	v->a[10657] = sym_concatenation;
	v->a[10658] = state(1974);
	v->a[10659] = 1;
	small_parse_table_533(v);
}

void	small_parse_table_533(t_small_parse_table_array *v)
{
	v->a[10660] = sym_variable_assignment;
	v->a[10661] = state(5026);
	v->a[10662] = 1;
	v->a[10663] = sym_command;
	v->a[10664] = state(6754);
	v->a[10665] = 1;
	v->a[10666] = sym_subscript;
	v->a[10667] = actions(336);
	v->a[10668] = 2;
	v->a[10669] = anon_sym_LT_LPAREN;
	v->a[10670] = anon_sym_GT_LPAREN;
	v->a[10671] = actions(773);
	v->a[10672] = 2;
	v->a[10673] = sym_raw_string;
	v->a[10674] = sym_ansi_c_string;
	v->a[10675] = actions(1392);
	v->a[10676] = 2;
	v->a[10677] = anon_sym_LT_AMP_DASH;
	v->a[10678] = anon_sym_GT_AMP_DASH;
	v->a[10679] = state(3581);
	small_parse_table_534(v);
}

void	small_parse_table_534(t_small_parse_table_array *v)
{
	v->a[10680] = 2;
	v->a[10681] = sym_file_redirect;
	v->a[10682] = sym_herestring_redirect;
	v->a[10683] = state(5014);
	v->a[10684] = 2;
	v->a[10685] = sym_subshell;
	v->a[10686] = sym_test_command;
	v->a[10687] = actions(1390);
	v->a[10688] = 3;
	v->a[10689] = anon_sym_GT_GT;
	v->a[10690] = anon_sym_AMP_GT_GT;
	v->a[10691] = anon_sym_GT_PIPE;
	v->a[10692] = actions(1388);
	v->a[10693] = 5;
	v->a[10694] = anon_sym_LT;
	v->a[10695] = anon_sym_GT;
	v->a[10696] = anon_sym_AMP_GT;
	v->a[10697] = anon_sym_LT_AMP;
	v->a[10698] = anon_sym_GT_AMP;
	v->a[10699] = state(938);
	small_parse_table_535(v);
}

/* EOF small_parse_table_106.c */
