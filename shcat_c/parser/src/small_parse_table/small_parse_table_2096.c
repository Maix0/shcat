/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2096.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10480(t_small_parse_table_array *v)
{
	v->a[209600] = actions(9884);
	v->a[209601] = 1;
	v->a[209602] = anon_sym_DOLLAR;
	v->a[209603] = actions(9634);
	v->a[209604] = 2;
	v->a[209605] = anon_sym_LPAREN_LPAREN;
	v->a[209606] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[209607] = actions(9650);
	v->a[209608] = 2;
	v->a[209609] = anon_sym_LT_LPAREN;
	v->a[209610] = anon_sym_GT_LPAREN;
	v->a[209611] = actions(9876);
	v->a[209612] = 2;
	v->a[209613] = sym_test_operator;
	v->a[209614] = sym__special_character;
	v->a[209615] = actions(9878);
	v->a[209616] = 3;
	v->a[209617] = sym__bare_dollar;
	v->a[209618] = sym_raw_string;
	v->a[209619] = sym_ansi_c_string;
	small_parse_table_10481(v);
}

void	small_parse_table_10481(t_small_parse_table_array *v)
{
	v->a[209620] = state(4337);
	v->a[209621] = 9;
	v->a[209622] = sym_arithmetic_expansion;
	v->a[209623] = sym_brace_expression;
	v->a[209624] = sym_string;
	v->a[209625] = sym_translated_string;
	v->a[209626] = sym_number;
	v->a[209627] = sym_simple_expansion;
	v->a[209628] = sym_expansion;
	v->a[209629] = sym_command_substitution;
	v->a[209630] = sym_process_substitution;
	v->a[209631] = 18;
	v->a[209632] = actions(3);
	v->a[209633] = 1;
	v->a[209634] = sym_comment;
	v->a[209635] = actions(4086);
	v->a[209636] = 1;
	v->a[209637] = aux_sym_number_token1;
	v->a[209638] = actions(4088);
	v->a[209639] = 1;
	small_parse_table_10482(v);
}

void	small_parse_table_10482(t_small_parse_table_array *v)
{
	v->a[209640] = aux_sym_number_token2;
	v->a[209641] = actions(4092);
	v->a[209642] = 1;
	v->a[209643] = anon_sym_DOLLAR_LPAREN;
	v->a[209644] = actions(4102);
	v->a[209645] = 1;
	v->a[209646] = sym__brace_start;
	v->a[209647] = actions(9306);
	v->a[209648] = 1;
	v->a[209649] = sym_word;
	v->a[209650] = actions(9310);
	v->a[209651] = 1;
	v->a[209652] = anon_sym_DOLLAR_LBRACK;
	v->a[209653] = actions(9316);
	v->a[209654] = 1;
	v->a[209655] = anon_sym_DQUOTE;
	v->a[209656] = actions(9320);
	v->a[209657] = 1;
	v->a[209658] = anon_sym_DOLLAR_LBRACE;
	v->a[209659] = actions(9322);
	small_parse_table_10483(v);
}

void	small_parse_table_10483(t_small_parse_table_array *v)
{
	v->a[209660] = 1;
	v->a[209661] = anon_sym_BQUOTE;
	v->a[209662] = actions(9324);
	v->a[209663] = 1;
	v->a[209664] = anon_sym_DOLLAR_BQUOTE;
	v->a[209665] = actions(9328);
	v->a[209666] = 1;
	v->a[209667] = sym__comment_word;
	v->a[209668] = actions(9886);
	v->a[209669] = 1;
	v->a[209670] = anon_sym_DOLLAR;
	v->a[209671] = actions(9308);
	v->a[209672] = 2;
	v->a[209673] = anon_sym_LPAREN_LPAREN;
	v->a[209674] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[209675] = actions(9314);
	v->a[209676] = 2;
	v->a[209677] = sym_test_operator;
	v->a[209678] = sym__special_character;
	v->a[209679] = actions(9326);
	small_parse_table_10484(v);
}

void	small_parse_table_10484(t_small_parse_table_array *v)
{
	v->a[209680] = 2;
	v->a[209681] = anon_sym_LT_LPAREN;
	v->a[209682] = anon_sym_GT_LPAREN;
	v->a[209683] = actions(9318);
	v->a[209684] = 3;
	v->a[209685] = sym__bare_dollar;
	v->a[209686] = sym_raw_string;
	v->a[209687] = sym_ansi_c_string;
	v->a[209688] = state(4566);
	v->a[209689] = 9;
	v->a[209690] = sym_arithmetic_expansion;
	v->a[209691] = sym_brace_expression;
	v->a[209692] = sym_string;
	v->a[209693] = sym_translated_string;
	v->a[209694] = sym_number;
	v->a[209695] = sym_simple_expansion;
	v->a[209696] = sym_expansion;
	v->a[209697] = sym_command_substitution;
	v->a[209698] = sym_process_substitution;
	v->a[209699] = 18;
	small_parse_table_10485(v);
}

/* EOF small_parse_table_2096.c */
