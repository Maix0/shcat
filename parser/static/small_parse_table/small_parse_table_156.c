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
	v->a[15600] = 1;
	v->a[15601] = sym_comment;
	v->a[15602] = actions(9);
	v->a[15603] = 1;
	v->a[15604] = anon_sym_for;
	v->a[15605] = actions(13);
	v->a[15606] = 1;
	v->a[15607] = anon_sym_if;
	v->a[15608] = actions(15);
	v->a[15609] = 1;
	v->a[15610] = anon_sym_case;
	v->a[15611] = actions(17);
	v->a[15612] = 1;
	v->a[15613] = anon_sym_LPAREN;
	v->a[15614] = actions(19);
	v->a[15615] = 1;
	v->a[15616] = anon_sym_LBRACE;
	v->a[15617] = actions(63);
	v->a[15618] = 1;
	v->a[15619] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_781(v);
}

void	small_parse_table_781(t_small_parse_table_array *v)
{
	v->a[15620] = actions(65);
	v->a[15621] = 1;
	v->a[15622] = anon_sym_DOLLAR;
	v->a[15623] = actions(67);
	v->a[15624] = 1;
	v->a[15625] = anon_sym_DQUOTE;
	v->a[15626] = actions(71);
	v->a[15627] = 1;
	v->a[15628] = aux_sym_number_token1;
	v->a[15629] = actions(73);
	v->a[15630] = 1;
	v->a[15631] = aux_sym_number_token2;
	v->a[15632] = actions(75);
	v->a[15633] = 1;
	v->a[15634] = anon_sym_DOLLAR_LBRACE;
	v->a[15635] = actions(77);
	v->a[15636] = 1;
	v->a[15637] = anon_sym_DOLLAR_LPAREN;
	v->a[15638] = actions(79);
	v->a[15639] = 1;
	small_parse_table_782(v);
}

void	small_parse_table_782(t_small_parse_table_array *v)
{
	v->a[15640] = anon_sym_BQUOTE;
	v->a[15641] = actions(248);
	v->a[15642] = 1;
	v->a[15643] = sym_word;
	v->a[15644] = actions(250);
	v->a[15645] = 1;
	v->a[15646] = anon_sym_BANG;
	v->a[15647] = actions(256);
	v->a[15648] = 1;
	v->a[15649] = sym_raw_string;
	v->a[15650] = actions(258);
	v->a[15651] = 1;
	v->a[15652] = sym_file_descriptor;
	v->a[15653] = actions(260);
	v->a[15654] = 1;
	v->a[15655] = sym_variable_name;
	v->a[15656] = state(141);
	v->a[15657] = 1;
	v->a[15658] = aux_sym__statements_repeat1;
	v->a[15659] = state(175);
	small_parse_table_783(v);
}

void	small_parse_table_783(t_small_parse_table_array *v)
{
	v->a[15660] = 1;
	v->a[15661] = sym_command_name;
	v->a[15662] = state(278);
	v->a[15663] = 1;
	v->a[15664] = sym_variable_assignment;
	v->a[15665] = state(567);
	v->a[15666] = 1;
	v->a[15667] = aux_sym_command_repeat1;
	v->a[15668] = state(582);
	v->a[15669] = 1;
	v->a[15670] = sym_concatenation;
	v->a[15671] = state(729);
	v->a[15672] = 1;
	v->a[15673] = sym_file_redirect;
	v->a[15674] = state(1100);
	v->a[15675] = 1;
	v->a[15676] = sym_pipeline;
	v->a[15677] = state(1196);
	v->a[15678] = 1;
	v->a[15679] = aux_sym_redirected_statement_repeat2;
	small_parse_table_784(v);
}

void	small_parse_table_784(t_small_parse_table_array *v)
{
	v->a[15680] = state(2037);
	v->a[15681] = 1;
	v->a[15682] = sym__statement_not_pipeline;
	v->a[15683] = state(2161);
	v->a[15684] = 1;
	v->a[15685] = sym__statements;
	v->a[15686] = actions(11);
	v->a[15687] = 2;
	v->a[15688] = anon_sym_while;
	v->a[15689] = anon_sym_until;
	v->a[15690] = actions(254);
	v->a[15691] = 2;
	v->a[15692] = anon_sym_LT_AMP_DASH;
	v->a[15693] = anon_sym_GT_AMP_DASH;
	v->a[15694] = state(295);
	v->a[15695] = 6;
	v->a[15696] = sym_arithmetic_expansion;
	v->a[15697] = sym_string;
	v->a[15698] = sym_number;
	v->a[15699] = sym_simple_expansion;
	small_parse_table_785(v);
}

/* EOF small_parse_table_156.c */
