/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1826.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9130(t_small_parse_table_array *v)
{
	v->a[182600] = 1;
	v->a[182601] = sym__special_character;
	v->a[182602] = actions(7230);
	v->a[182603] = 1;
	v->a[182604] = anon_sym_DQUOTE;
	v->a[182605] = actions(7234);
	v->a[182606] = 1;
	v->a[182607] = anon_sym_DOLLAR_LBRACE;
	v->a[182608] = actions(7236);
	v->a[182609] = 1;
	v->a[182610] = anon_sym_BQUOTE;
	v->a[182611] = actions(7238);
	v->a[182612] = 1;
	v->a[182613] = anon_sym_DOLLAR_BQUOTE;
	v->a[182614] = state(6426);
	v->a[182615] = 1;
	v->a[182616] = aux_sym__literal_repeat1;
	v->a[182617] = state(7020);
	v->a[182618] = 1;
	v->a[182619] = sym_last_case_item;
	small_parse_table_9131(v);
}

void	small_parse_table_9131(t_small_parse_table_array *v)
{
	v->a[182620] = actions(7224);
	v->a[182621] = 2;
	v->a[182622] = anon_sym_LPAREN_LPAREN;
	v->a[182623] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[182624] = actions(7232);
	v->a[182625] = 2;
	v->a[182626] = sym_raw_string;
	v->a[182627] = sym_ansi_c_string;
	v->a[182628] = actions(7240);
	v->a[182629] = 2;
	v->a[182630] = anon_sym_LT_LPAREN;
	v->a[182631] = anon_sym_GT_LPAREN;
	v->a[182632] = state(3477);
	v->a[182633] = 2;
	v->a[182634] = sym_case_item;
	v->a[182635] = aux_sym_case_statement_repeat1;
	v->a[182636] = state(6695);
	v->a[182637] = 2;
	v->a[182638] = sym_concatenation;
	v->a[182639] = sym__extglob_blob;
	small_parse_table_9132(v);
}

void	small_parse_table_9132(t_small_parse_table_array *v)
{
	v->a[182640] = state(6303);
	v->a[182641] = 9;
	v->a[182642] = sym_arithmetic_expansion;
	v->a[182643] = sym_brace_expression;
	v->a[182644] = sym_string;
	v->a[182645] = sym_translated_string;
	v->a[182646] = sym_number;
	v->a[182647] = sym_simple_expansion;
	v->a[182648] = sym_expansion;
	v->a[182649] = sym_command_substitution;
	v->a[182650] = sym_process_substitution;
	v->a[182651] = 24;
	v->a[182652] = actions(71);
	v->a[182653] = 1;
	v->a[182654] = sym_comment;
	v->a[182655] = actions(6474);
	v->a[182656] = 1;
	v->a[182657] = sym_word;
	v->a[182658] = actions(6480);
	v->a[182659] = 1;
	small_parse_table_9133(v);
}

void	small_parse_table_9133(t_small_parse_table_array *v)
{
	v->a[182660] = anon_sym_LPAREN;
	v->a[182661] = actions(6488);
	v->a[182662] = 1;
	v->a[182663] = anon_sym_DOLLAR;
	v->a[182664] = actions(6494);
	v->a[182665] = 1;
	v->a[182666] = aux_sym_number_token1;
	v->a[182667] = actions(6496);
	v->a[182668] = 1;
	v->a[182669] = aux_sym_number_token2;
	v->a[182670] = actions(6500);
	v->a[182671] = 1;
	v->a[182672] = anon_sym_DOLLAR_LPAREN;
	v->a[182673] = actions(6508);
	v->a[182674] = 1;
	v->a[182675] = sym_test_operator;
	v->a[182676] = actions(6510);
	v->a[182677] = 1;
	v->a[182678] = sym_extglob_pattern;
	v->a[182679] = actions(6512);
	small_parse_table_9134(v);
}

void	small_parse_table_9134(t_small_parse_table_array *v)
{
	v->a[182680] = 1;
	v->a[182681] = sym__brace_start;
	v->a[182682] = actions(7226);
	v->a[182683] = 1;
	v->a[182684] = anon_sym_DOLLAR_LBRACK;
	v->a[182685] = actions(7228);
	v->a[182686] = 1;
	v->a[182687] = sym__special_character;
	v->a[182688] = actions(7230);
	v->a[182689] = 1;
	v->a[182690] = anon_sym_DQUOTE;
	v->a[182691] = actions(7234);
	v->a[182692] = 1;
	v->a[182693] = anon_sym_DOLLAR_LBRACE;
	v->a[182694] = actions(7236);
	v->a[182695] = 1;
	v->a[182696] = anon_sym_BQUOTE;
	v->a[182697] = actions(7238);
	v->a[182698] = 1;
	v->a[182699] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_9135(v);
}

/* EOF small_parse_table_1826.c */
