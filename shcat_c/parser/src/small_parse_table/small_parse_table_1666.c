/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1666.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8330(t_small_parse_table_array *v)
{
	v->a[166600] = anon_sym_DASH_DASH;
	v->a[166601] = actions(7418);
	v->a[166602] = 2;
	v->a[166603] = anon_sym_EQ_EQ;
	v->a[166604] = anon_sym_BANG_EQ;
	v->a[166605] = actions(7420);
	v->a[166606] = 2;
	v->a[166607] = anon_sym_LT;
	v->a[166608] = anon_sym_GT;
	v->a[166609] = actions(7422);
	v->a[166610] = 2;
	v->a[166611] = anon_sym_LT_EQ;
	v->a[166612] = anon_sym_GT_EQ;
	v->a[166613] = actions(7424);
	v->a[166614] = 2;
	v->a[166615] = anon_sym_LT_LT;
	v->a[166616] = anon_sym_GT_GT;
	v->a[166617] = actions(7426);
	v->a[166618] = 2;
	v->a[166619] = anon_sym_PLUS;
	small_parse_table_8331(v);
}

void	small_parse_table_8331(t_small_parse_table_array *v)
{
	v->a[166620] = anon_sym_DASH;
	v->a[166621] = actions(7428);
	v->a[166622] = 3;
	v->a[166623] = anon_sym_STAR;
	v->a[166624] = anon_sym_SLASH;
	v->a[166625] = anon_sym_PERCENT;
	v->a[166626] = actions(7406);
	v->a[166627] = 11;
	v->a[166628] = anon_sym_PLUS_EQ;
	v->a[166629] = anon_sym_DASH_EQ;
	v->a[166630] = anon_sym_STAR_EQ;
	v->a[166631] = anon_sym_SLASH_EQ;
	v->a[166632] = anon_sym_PERCENT_EQ;
	v->a[166633] = anon_sym_STAR_STAR_EQ;
	v->a[166634] = anon_sym_LT_LT_EQ;
	v->a[166635] = anon_sym_GT_GT_EQ;
	v->a[166636] = anon_sym_AMP_EQ;
	v->a[166637] = anon_sym_CARET_EQ;
	v->a[166638] = anon_sym_PIPE_EQ;
	v->a[166639] = 12;
	small_parse_table_8332(v);
}

void	small_parse_table_8332(t_small_parse_table_array *v)
{
	v->a[166640] = actions(71);
	v->a[166641] = 1;
	v->a[166642] = sym_comment;
	v->a[166643] = actions(7534);
	v->a[166644] = 1;
	v->a[166645] = anon_sym_LT_LT_LT;
	v->a[166646] = actions(7537);
	v->a[166647] = 1;
	v->a[166648] = sym_file_descriptor;
	v->a[166649] = actions(7540);
	v->a[166650] = 1;
	v->a[166651] = sym_variable_name;
	v->a[166652] = state(6771);
	v->a[166653] = 1;
	v->a[166654] = sym_subscript;
	v->a[166655] = actions(7531);
	v->a[166656] = 2;
	v->a[166657] = anon_sym_LT_AMP_DASH;
	v->a[166658] = anon_sym_GT_AMP_DASH;
	v->a[166659] = state(3127);
	small_parse_table_8333(v);
}

void	small_parse_table_8333(t_small_parse_table_array *v)
{
	v->a[166660] = 2;
	v->a[166661] = sym_variable_assignment;
	v->a[166662] = aux_sym_command_repeat1;
	v->a[166663] = state(3581);
	v->a[166664] = 2;
	v->a[166665] = sym_file_redirect;
	v->a[166666] = sym_herestring_redirect;
	v->a[166667] = actions(7528);
	v->a[166668] = 3;
	v->a[166669] = anon_sym_GT_GT;
	v->a[166670] = anon_sym_AMP_GT_GT;
	v->a[166671] = anon_sym_GT_PIPE;
	v->a[166672] = actions(7521);
	v->a[166673] = 5;
	v->a[166674] = anon_sym_DOLLAR;
	v->a[166675] = aux_sym_number_token1;
	v->a[166676] = aux_sym_number_token2;
	v->a[166677] = anon_sym_DOLLAR_LPAREN;
	v->a[166678] = sym_word;
	v->a[166679] = actions(7525);
	small_parse_table_8334(v);
}

void	small_parse_table_8334(t_small_parse_table_array *v)
{
	v->a[166680] = 5;
	v->a[166681] = anon_sym_LT;
	v->a[166682] = anon_sym_GT;
	v->a[166683] = anon_sym_AMP_GT;
	v->a[166684] = anon_sym_LT_AMP;
	v->a[166685] = anon_sym_GT_AMP;
	v->a[166686] = actions(7523);
	v->a[166687] = 14;
	v->a[166688] = sym_test_operator;
	v->a[166689] = sym__brace_start;
	v->a[166690] = anon_sym_LPAREN_LPAREN;
	v->a[166691] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[166692] = anon_sym_DOLLAR_LBRACK;
	v->a[166693] = sym__special_character;
	v->a[166694] = anon_sym_DQUOTE;
	v->a[166695] = sym_raw_string;
	v->a[166696] = sym_ansi_c_string;
	v->a[166697] = anon_sym_DOLLAR_LBRACE;
	v->a[166698] = anon_sym_BQUOTE;
	v->a[166699] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_8335(v);
}

/* EOF small_parse_table_1666.c */
