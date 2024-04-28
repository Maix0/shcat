/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2066.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10330(t_small_parse_table_array *v)
{
	v->a[206600] = actions(3);
	v->a[206601] = 1;
	v->a[206602] = sym_comment;
	v->a[206603] = actions(8102);
	v->a[206604] = 1;
	v->a[206605] = anon_sym_DOLLAR_LBRACK;
	v->a[206606] = actions(8108);
	v->a[206607] = 1;
	v->a[206608] = anon_sym_DQUOTE;
	v->a[206609] = actions(8112);
	v->a[206610] = 1;
	v->a[206611] = aux_sym_number_token1;
	v->a[206612] = actions(8114);
	v->a[206613] = 1;
	v->a[206614] = aux_sym_number_token2;
	v->a[206615] = actions(8116);
	v->a[206616] = 1;
	v->a[206617] = anon_sym_DOLLAR_LBRACE;
	v->a[206618] = actions(8118);
	v->a[206619] = 1;
	small_parse_table_10331(v);
}

void	small_parse_table_10331(t_small_parse_table_array *v)
{
	v->a[206620] = anon_sym_DOLLAR_LPAREN;
	v->a[206621] = actions(8120);
	v->a[206622] = 1;
	v->a[206623] = anon_sym_BQUOTE;
	v->a[206624] = actions(8122);
	v->a[206625] = 1;
	v->a[206626] = anon_sym_DOLLAR_BQUOTE;
	v->a[206627] = actions(8132);
	v->a[206628] = 1;
	v->a[206629] = sym__brace_start;
	v->a[206630] = actions(9600);
	v->a[206631] = 1;
	v->a[206632] = sym_word;
	v->a[206633] = actions(9602);
	v->a[206634] = 1;
	v->a[206635] = anon_sym_DOLLAR;
	v->a[206636] = actions(9608);
	v->a[206637] = 1;
	v->a[206638] = sym__comment_word;
	v->a[206639] = actions(8098);
	small_parse_table_10332(v);
}

void	small_parse_table_10332(t_small_parse_table_array *v)
{
	v->a[206640] = 2;
	v->a[206641] = anon_sym_LPAREN_LPAREN;
	v->a[206642] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[206643] = actions(8124);
	v->a[206644] = 2;
	v->a[206645] = anon_sym_LT_LPAREN;
	v->a[206646] = anon_sym_GT_LPAREN;
	v->a[206647] = actions(9604);
	v->a[206648] = 2;
	v->a[206649] = sym_test_operator;
	v->a[206650] = sym__special_character;
	v->a[206651] = actions(9606);
	v->a[206652] = 3;
	v->a[206653] = sym__bare_dollar;
	v->a[206654] = sym_raw_string;
	v->a[206655] = sym_ansi_c_string;
	v->a[206656] = state(1199);
	v->a[206657] = 9;
	v->a[206658] = sym_arithmetic_expansion;
	v->a[206659] = sym_brace_expression;
	small_parse_table_10333(v);
}

void	small_parse_table_10333(t_small_parse_table_array *v)
{
	v->a[206660] = sym_string;
	v->a[206661] = sym_translated_string;
	v->a[206662] = sym_number;
	v->a[206663] = sym_simple_expansion;
	v->a[206664] = sym_expansion;
	v->a[206665] = sym_command_substitution;
	v->a[206666] = sym_process_substitution;
	v->a[206667] = 21;
	v->a[206668] = actions(71);
	v->a[206669] = 1;
	v->a[206670] = sym_comment;
	v->a[206671] = actions(3064);
	v->a[206672] = 1;
	v->a[206673] = sym_variable_name;
	v->a[206674] = actions(9278);
	v->a[206675] = 1;
	v->a[206676] = anon_sym_LPAREN;
	v->a[206677] = actions(9280);
	v->a[206678] = 1;
	v->a[206679] = anon_sym_BANG;
	small_parse_table_10334(v);
}

void	small_parse_table_10334(t_small_parse_table_array *v)
{
	v->a[206680] = actions(9286);
	v->a[206681] = 1;
	v->a[206682] = anon_sym_TILDE;
	v->a[206683] = actions(9288);
	v->a[206684] = 1;
	v->a[206685] = anon_sym_DOLLAR;
	v->a[206686] = actions(9290);
	v->a[206687] = 1;
	v->a[206688] = anon_sym_DQUOTE;
	v->a[206689] = actions(9292);
	v->a[206690] = 1;
	v->a[206691] = aux_sym_number_token1;
	v->a[206692] = actions(9294);
	v->a[206693] = 1;
	v->a[206694] = aux_sym_number_token2;
	v->a[206695] = actions(9296);
	v->a[206696] = 1;
	v->a[206697] = anon_sym_DOLLAR_LBRACE;
	v->a[206698] = actions(9298);
	v->a[206699] = 1;
	small_parse_table_10335(v);
}

/* EOF small_parse_table_2066.c */
