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
	v->a[15600] = state(433);
	v->a[15601] = 5;
	v->a[15602] = sym_arithmetic_expansion;
	v->a[15603] = sym_string;
	v->a[15604] = sym_simple_expansion;
	v->a[15605] = sym_expansion;
	v->a[15606] = sym_command_substitution;
	v->a[15607] = actions(53);
	v->a[15608] = 7;
	v->a[15609] = anon_sym_LT;
	v->a[15610] = anon_sym_GT;
	v->a[15611] = anon_sym_GT_GT;
	v->a[15612] = anon_sym_LT_AMP;
	v->a[15613] = anon_sym_GT_AMP;
	v->a[15614] = anon_sym_GT_PIPE;
	v->a[15615] = anon_sym_LT_GT;
	v->a[15616] = state(1089);
	v->a[15617] = 12;
	v->a[15618] = sym_redirected_statement;
	v->a[15619] = sym_for_statement;
	small_parse_table_781(v);
}

void	small_parse_table_781(t_small_parse_table_array *v)
{
	v->a[15620] = sym_while_statement;
	v->a[15621] = sym_if_statement;
	v->a[15622] = sym_case_statement;
	v->a[15623] = sym_function_definition;
	v->a[15624] = sym_compound_statement;
	v->a[15625] = sym_subshell;
	v->a[15626] = sym_list;
	v->a[15627] = sym_negated_command;
	v->a[15628] = sym_command;
	v->a[15629] = sym__variable_assignments;
	v->a[15630] = 30;
	v->a[15631] = actions(3);
	v->a[15632] = 1;
	v->a[15633] = sym_comment;
	v->a[15634] = actions(9);
	v->a[15635] = 1;
	v->a[15636] = anon_sym_for;
	v->a[15637] = actions(13);
	v->a[15638] = 1;
	v->a[15639] = anon_sym_if;
	small_parse_table_782(v);
}

void	small_parse_table_782(t_small_parse_table_array *v)
{
	v->a[15640] = actions(15);
	v->a[15641] = 1;
	v->a[15642] = anon_sym_case;
	v->a[15643] = actions(17);
	v->a[15644] = 1;
	v->a[15645] = anon_sym_LPAREN;
	v->a[15646] = actions(19);
	v->a[15647] = 1;
	v->a[15648] = anon_sym_LBRACE;
	v->a[15649] = actions(43);
	v->a[15650] = 1;
	v->a[15651] = sym_word;
	v->a[15652] = actions(51);
	v->a[15653] = 1;
	v->a[15654] = anon_sym_BANG;
	v->a[15655] = actions(55);
	v->a[15656] = 1;
	v->a[15657] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15658] = actions(57);
	v->a[15659] = 1;
	small_parse_table_783(v);
}

void	small_parse_table_783(t_small_parse_table_array *v)
{
	v->a[15660] = anon_sym_DOLLAR;
	v->a[15661] = actions(59);
	v->a[15662] = 1;
	v->a[15663] = anon_sym_DQUOTE;
	v->a[15664] = actions(63);
	v->a[15665] = 1;
	v->a[15666] = anon_sym_DOLLAR_LBRACE;
	v->a[15667] = actions(65);
	v->a[15668] = 1;
	v->a[15669] = anon_sym_DOLLAR_LPAREN;
	v->a[15670] = actions(67);
	v->a[15671] = 1;
	v->a[15672] = anon_sym_BQUOTE;
	v->a[15673] = actions(69);
	v->a[15674] = 1;
	v->a[15675] = sym_file_descriptor;
	v->a[15676] = actions(71);
	v->a[15677] = 1;
	v->a[15678] = sym_variable_name;
	v->a[15679] = state(37);
	small_parse_table_784(v);
}

void	small_parse_table_784(t_small_parse_table_array *v)
{
	v->a[15680] = 1;
	v->a[15681] = aux_sym__terminated_statement;
	v->a[15682] = state(182);
	v->a[15683] = 1;
	v->a[15684] = sym_command_name;
	v->a[15685] = state(295);
	v->a[15686] = 1;
	v->a[15687] = sym_variable_assignment;
	v->a[15688] = state(584);
	v->a[15689] = 1;
	v->a[15690] = sym_concatenation;
	v->a[15691] = state(620);
	v->a[15692] = 1;
	v->a[15693] = sym_file_redirect;
	v->a[15694] = state(623);
	v->a[15695] = 1;
	v->a[15696] = aux_sym_command_repeat1;
	v->a[15697] = state(1107);
	v->a[15698] = 1;
	v->a[15699] = sym_pipeline;
	small_parse_table_785(v);
}

/* EOF small_parse_table_156.c */
