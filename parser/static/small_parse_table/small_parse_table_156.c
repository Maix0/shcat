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
	v->a[15600] = sym_expansion;
	v->a[15601] = sym_command_substitution;
	v->a[15602] = actions(55);
	v->a[15603] = 8;
	v->a[15604] = anon_sym_LT;
	v->a[15605] = anon_sym_GT;
	v->a[15606] = anon_sym_GT_GT;
	v->a[15607] = anon_sym_AMP_GT;
	v->a[15608] = anon_sym_AMP_GT_GT;
	v->a[15609] = anon_sym_LT_AMP;
	v->a[15610] = anon_sym_GT_AMP;
	v->a[15611] = anon_sym_GT_PIPE;
	v->a[15612] = state(1312);
	v->a[15613] = 12;
	v->a[15614] = sym_redirected_statement;
	v->a[15615] = sym_for_statement;
	v->a[15616] = sym_while_statement;
	v->a[15617] = sym_if_statement;
	v->a[15618] = sym_case_statement;
	v->a[15619] = sym_function_definition;
	small_parse_table_781(v);
}

void	small_parse_table_781(t_small_parse_table_array *v)
{
	v->a[15620] = sym_compound_statement;
	v->a[15621] = sym_subshell;
	v->a[15622] = sym_list;
	v->a[15623] = sym_negated_command;
	v->a[15624] = sym_command;
	v->a[15625] = sym__variable_assignments;
	v->a[15626] = 31;
	v->a[15627] = actions(3);
	v->a[15628] = 1;
	v->a[15629] = sym_comment;
	v->a[15630] = actions(9);
	v->a[15631] = 1;
	v->a[15632] = anon_sym_for;
	v->a[15633] = actions(13);
	v->a[15634] = 1;
	v->a[15635] = anon_sym_if;
	v->a[15636] = actions(15);
	v->a[15637] = 1;
	v->a[15638] = anon_sym_case;
	v->a[15639] = actions(17);
	small_parse_table_782(v);
}

void	small_parse_table_782(t_small_parse_table_array *v)
{
	v->a[15640] = 1;
	v->a[15641] = anon_sym_LPAREN;
	v->a[15642] = actions(19);
	v->a[15643] = 1;
	v->a[15644] = anon_sym_LBRACE;
	v->a[15645] = actions(45);
	v->a[15646] = 1;
	v->a[15647] = sym_word;
	v->a[15648] = actions(53);
	v->a[15649] = 1;
	v->a[15650] = anon_sym_BANG;
	v->a[15651] = actions(59);
	v->a[15652] = 1;
	v->a[15653] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15654] = actions(61);
	v->a[15655] = 1;
	v->a[15656] = anon_sym_DOLLAR;
	v->a[15657] = actions(63);
	v->a[15658] = 1;
	v->a[15659] = anon_sym_DQUOTE;
	small_parse_table_783(v);
}

void	small_parse_table_783(t_small_parse_table_array *v)
{
	v->a[15660] = actions(67);
	v->a[15661] = 1;
	v->a[15662] = anon_sym_DOLLAR_LBRACE;
	v->a[15663] = actions(69);
	v->a[15664] = 1;
	v->a[15665] = anon_sym_DOLLAR_LPAREN;
	v->a[15666] = actions(71);
	v->a[15667] = 1;
	v->a[15668] = anon_sym_BQUOTE;
	v->a[15669] = actions(73);
	v->a[15670] = 1;
	v->a[15671] = sym_file_descriptor;
	v->a[15672] = actions(75);
	v->a[15673] = 1;
	v->a[15674] = sym_variable_name;
	v->a[15675] = state(99);
	v->a[15676] = 1;
	v->a[15677] = aux_sym__terminated_statement;
	v->a[15678] = state(187);
	v->a[15679] = 1;
	small_parse_table_784(v);
}

void	small_parse_table_784(t_small_parse_table_array *v)
{
	v->a[15680] = sym_command_name;
	v->a[15681] = state(281);
	v->a[15682] = 1;
	v->a[15683] = sym_variable_assignment;
	v->a[15684] = state(647);
	v->a[15685] = 1;
	v->a[15686] = sym_concatenation;
	v->a[15687] = state(736);
	v->a[15688] = 1;
	v->a[15689] = aux_sym_command_repeat1;
	v->a[15690] = state(738);
	v->a[15691] = 1;
	v->a[15692] = sym_file_redirect;
	v->a[15693] = state(1460);
	v->a[15694] = 1;
	v->a[15695] = aux_sym_redirected_statement_repeat2;
	v->a[15696] = state(1464);
	v->a[15697] = 1;
	v->a[15698] = sym_pipeline;
	v->a[15699] = state(2269);
	small_parse_table_785(v);
}

/* EOF small_parse_table_156.c */
