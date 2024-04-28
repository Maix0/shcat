/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2006.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10030(t_small_parse_table_array *v)
{
	v->a[200600] = sym_test_operator;
	v->a[200601] = actions(9158);
	v->a[200602] = 1;
	v->a[200603] = anon_sym_RBRACK;
	v->a[200604] = actions(352);
	v->a[200605] = 2;
	v->a[200606] = anon_sym_LPAREN_LPAREN;
	v->a[200607] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[200608] = actions(387);
	v->a[200609] = 2;
	v->a[200610] = anon_sym_LT_LPAREN;
	v->a[200611] = anon_sym_GT_LPAREN;
	v->a[200612] = actions(8840);
	v->a[200613] = 2;
	v->a[200614] = sym__special_character;
	v->a[200615] = sym__comment_word;
	v->a[200616] = actions(8842);
	v->a[200617] = 3;
	v->a[200618] = sym__bare_dollar;
	v->a[200619] = sym_raw_string;
	small_parse_table_10031(v);
}

void	small_parse_table_10031(t_small_parse_table_array *v)
{
	v->a[200620] = sym_ansi_c_string;
	v->a[200621] = state(2730);
	v->a[200622] = 9;
	v->a[200623] = sym_arithmetic_expansion;
	v->a[200624] = sym_brace_expression;
	v->a[200625] = sym_string;
	v->a[200626] = sym_translated_string;
	v->a[200627] = sym_number;
	v->a[200628] = sym_simple_expansion;
	v->a[200629] = sym_expansion;
	v->a[200630] = sym_command_substitution;
	v->a[200631] = sym_process_substitution;
	v->a[200632] = 20;
	v->a[200633] = actions(71);
	v->a[200634] = 1;
	v->a[200635] = sym_comment;
	v->a[200636] = actions(4498);
	v->a[200637] = 1;
	v->a[200638] = sym_word;
	v->a[200639] = actions(4502);
	small_parse_table_10032(v);
}

void	small_parse_table_10032(t_small_parse_table_array *v)
{
	v->a[200640] = 1;
	v->a[200641] = anon_sym_DOLLAR_LBRACK;
	v->a[200642] = actions(4504);
	v->a[200643] = 1;
	v->a[200644] = anon_sym_DOLLAR;
	v->a[200645] = actions(4508);
	v->a[200646] = 1;
	v->a[200647] = anon_sym_DQUOTE;
	v->a[200648] = actions(4512);
	v->a[200649] = 1;
	v->a[200650] = aux_sym_number_token1;
	v->a[200651] = actions(4514);
	v->a[200652] = 1;
	v->a[200653] = aux_sym_number_token2;
	v->a[200654] = actions(4516);
	v->a[200655] = 1;
	v->a[200656] = anon_sym_DOLLAR_LBRACE;
	v->a[200657] = actions(4518);
	v->a[200658] = 1;
	v->a[200659] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_10033(v);
}

void	small_parse_table_10033(t_small_parse_table_array *v)
{
	v->a[200660] = actions(4520);
	v->a[200661] = 1;
	v->a[200662] = anon_sym_BQUOTE;
	v->a[200663] = actions(4522);
	v->a[200664] = 1;
	v->a[200665] = anon_sym_DOLLAR_BQUOTE;
	v->a[200666] = actions(4526);
	v->a[200667] = 1;
	v->a[200668] = sym_test_operator;
	v->a[200669] = actions(4528);
	v->a[200670] = 1;
	v->a[200671] = sym__brace_start;
	v->a[200672] = actions(9156);
	v->a[200673] = 1;
	v->a[200674] = sym__special_character;
	v->a[200675] = state(2715);
	v->a[200676] = 1;
	v->a[200677] = aux_sym__literal_repeat1;
	v->a[200678] = actions(4500);
	v->a[200679] = 2;
	small_parse_table_10034(v);
}

void	small_parse_table_10034(t_small_parse_table_array *v)
{
	v->a[200680] = anon_sym_LPAREN_LPAREN;
	v->a[200681] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[200682] = actions(4510);
	v->a[200683] = 2;
	v->a[200684] = sym_raw_string;
	v->a[200685] = sym_ansi_c_string;
	v->a[200686] = actions(4524);
	v->a[200687] = 2;
	v->a[200688] = anon_sym_LT_LPAREN;
	v->a[200689] = anon_sym_GT_LPAREN;
	v->a[200690] = state(879);
	v->a[200691] = 2;
	v->a[200692] = sym_concatenation;
	v->a[200693] = aux_sym_for_statement_repeat1;
	v->a[200694] = state(2438);
	v->a[200695] = 9;
	v->a[200696] = sym_arithmetic_expansion;
	v->a[200697] = sym_brace_expression;
	v->a[200698] = sym_string;
	v->a[200699] = sym_translated_string;
	small_parse_table_10035(v);
}

/* EOF small_parse_table_2006.c */
