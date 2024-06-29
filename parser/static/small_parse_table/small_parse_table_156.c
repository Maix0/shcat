/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_156.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_780(t_small_parse_table_array *v)
{
	v->a[15600] = sym_list;
	v->a[15601] = sym_negated_command;
	v->a[15602] = sym_command;
	v->a[15603] = sym__variable_assignments;
	v->a[15604] = 31;
	v->a[15605] = actions(3);
	v->a[15606] = 1;
	v->a[15607] = sym_comment;
	v->a[15608] = actions(9);
	v->a[15609] = 1;
	v->a[15610] = anon_sym_for;
	v->a[15611] = actions(13);
	v->a[15612] = 1;
	v->a[15613] = anon_sym_if;
	v->a[15614] = actions(15);
	v->a[15615] = 1;
	v->a[15616] = anon_sym_case;
	v->a[15617] = actions(17);
	v->a[15618] = 1;
	v->a[15619] = anon_sym_LPAREN;
	small_parse_table_781(v);
}

void	small_parse_table_781(t_small_parse_table_array *v)
{
	v->a[15620] = actions(19);
	v->a[15621] = 1;
	v->a[15622] = anon_sym_LBRACE;
	v->a[15623] = actions(45);
	v->a[15624] = 1;
	v->a[15625] = sym_word;
	v->a[15626] = actions(53);
	v->a[15627] = 1;
	v->a[15628] = anon_sym_BANG;
	v->a[15629] = actions(59);
	v->a[15630] = 1;
	v->a[15631] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15632] = actions(61);
	v->a[15633] = 1;
	v->a[15634] = anon_sym_DOLLAR;
	v->a[15635] = actions(63);
	v->a[15636] = 1;
	v->a[15637] = anon_sym_DQUOTE;
	v->a[15638] = actions(67);
	v->a[15639] = 1;
	small_parse_table_782(v);
}

void	small_parse_table_782(t_small_parse_table_array *v)
{
	v->a[15640] = anon_sym_DOLLAR_LBRACE;
	v->a[15641] = actions(69);
	v->a[15642] = 1;
	v->a[15643] = anon_sym_DOLLAR_LPAREN;
	v->a[15644] = actions(71);
	v->a[15645] = 1;
	v->a[15646] = anon_sym_BQUOTE;
	v->a[15647] = actions(73);
	v->a[15648] = 1;
	v->a[15649] = sym_file_descriptor;
	v->a[15650] = actions(75);
	v->a[15651] = 1;
	v->a[15652] = sym_variable_name;
	v->a[15653] = state(73);
	v->a[15654] = 1;
	v->a[15655] = aux_sym__terminated_statement;
	v->a[15656] = state(191);
	v->a[15657] = 1;
	v->a[15658] = sym_command_name;
	v->a[15659] = state(252);
	small_parse_table_783(v);
}

void	small_parse_table_783(t_small_parse_table_array *v)
{
	v->a[15660] = 1;
	v->a[15661] = sym_variable_assignment;
	v->a[15662] = state(624);
	v->a[15663] = 1;
	v->a[15664] = sym_concatenation;
	v->a[15665] = state(726);
	v->a[15666] = 1;
	v->a[15667] = sym_file_redirect;
	v->a[15668] = state(733);
	v->a[15669] = 1;
	v->a[15670] = aux_sym_command_repeat1;
	v->a[15671] = state(1246);
	v->a[15672] = 1;
	v->a[15673] = sym_pipeline;
	v->a[15674] = state(1307);
	v->a[15675] = 1;
	v->a[15676] = aux_sym_redirected_statement_repeat2;
	v->a[15677] = state(2117);
	v->a[15678] = 1;
	v->a[15679] = sym__statement_not_pipeline;
	small_parse_table_784(v);
}

void	small_parse_table_784(t_small_parse_table_array *v)
{
	v->a[15680] = actions(11);
	v->a[15681] = 2;
	v->a[15682] = anon_sym_while;
	v->a[15683] = anon_sym_until;
	v->a[15684] = actions(57);
	v->a[15685] = 2;
	v->a[15686] = anon_sym_LT_AMP_DASH;
	v->a[15687] = anon_sym_GT_AMP_DASH;
	v->a[15688] = actions(65);
	v->a[15689] = 2;
	v->a[15690] = sym_raw_string;
	v->a[15691] = sym_number;
	v->a[15692] = state(420);
	v->a[15693] = 5;
	v->a[15694] = sym_arithmetic_expansion;
	v->a[15695] = sym_string;
	v->a[15696] = sym_simple_expansion;
	v->a[15697] = sym_expansion;
	v->a[15698] = sym_command_substitution;
	v->a[15699] = actions(55);
	small_parse_table_785(v);
}

/* EOF small_parse_table_156.c */
