/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2196.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10980(t_small_parse_table_array *v)
{
	v->a[219600] = actions(10188);
	v->a[219601] = 1;
	v->a[219602] = sym_word;
	v->a[219603] = actions(10196);
	v->a[219604] = 1;
	v->a[219605] = sym__comment_word;
	v->a[219606] = actions(10458);
	v->a[219607] = 1;
	v->a[219608] = anon_sym_DOLLAR;
	v->a[219609] = actions(1129);
	v->a[219610] = 2;
	v->a[219611] = anon_sym_LPAREN_LPAREN;
	v->a[219612] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[219613] = actions(1165);
	v->a[219614] = 2;
	v->a[219615] = anon_sym_LT_LPAREN;
	v->a[219616] = anon_sym_GT_LPAREN;
	v->a[219617] = actions(10192);
	v->a[219618] = 2;
	v->a[219619] = sym_test_operator;
	small_parse_table_10981(v);
}

void	small_parse_table_10981(t_small_parse_table_array *v)
{
	v->a[219620] = sym__special_character;
	v->a[219621] = actions(10194);
	v->a[219622] = 3;
	v->a[219623] = sym__bare_dollar;
	v->a[219624] = sym_raw_string;
	v->a[219625] = sym_ansi_c_string;
	v->a[219626] = state(2392);
	v->a[219627] = 9;
	v->a[219628] = sym_arithmetic_expansion;
	v->a[219629] = sym_brace_expression;
	v->a[219630] = sym_string;
	v->a[219631] = sym_translated_string;
	v->a[219632] = sym_number;
	v->a[219633] = sym_simple_expansion;
	v->a[219634] = sym_expansion;
	v->a[219635] = sym_command_substitution;
	v->a[219636] = sym_process_substitution;
	v->a[219637] = 18;
	v->a[219638] = actions(3);
	v->a[219639] = 1;
	small_parse_table_10982(v);
}

void	small_parse_table_10982(t_small_parse_table_array *v)
{
	v->a[219640] = sym_comment;
	v->a[219641] = actions(1141);
	v->a[219642] = 1;
	v->a[219643] = anon_sym_DOLLAR_LBRACK;
	v->a[219644] = actions(1149);
	v->a[219645] = 1;
	v->a[219646] = anon_sym_DQUOTE;
	v->a[219647] = actions(1153);
	v->a[219648] = 1;
	v->a[219649] = aux_sym_number_token1;
	v->a[219650] = actions(1155);
	v->a[219651] = 1;
	v->a[219652] = aux_sym_number_token2;
	v->a[219653] = actions(1157);
	v->a[219654] = 1;
	v->a[219655] = anon_sym_DOLLAR_LBRACE;
	v->a[219656] = actions(1159);
	v->a[219657] = 1;
	v->a[219658] = anon_sym_DOLLAR_LPAREN;
	v->a[219659] = actions(1163);
	small_parse_table_10983(v);
}

void	small_parse_table_10983(t_small_parse_table_array *v)
{
	v->a[219660] = 1;
	v->a[219661] = anon_sym_DOLLAR_BQUOTE;
	v->a[219662] = actions(1169);
	v->a[219663] = 1;
	v->a[219664] = sym__brace_start;
	v->a[219665] = actions(3060);
	v->a[219666] = 1;
	v->a[219667] = anon_sym_BQUOTE;
	v->a[219668] = actions(10188);
	v->a[219669] = 1;
	v->a[219670] = sym_word;
	v->a[219671] = actions(10196);
	v->a[219672] = 1;
	v->a[219673] = sym__comment_word;
	v->a[219674] = actions(10460);
	v->a[219675] = 1;
	v->a[219676] = anon_sym_DOLLAR;
	v->a[219677] = actions(1129);
	v->a[219678] = 2;
	v->a[219679] = anon_sym_LPAREN_LPAREN;
	small_parse_table_10984(v);
}

void	small_parse_table_10984(t_small_parse_table_array *v)
{
	v->a[219680] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[219681] = actions(1165);
	v->a[219682] = 2;
	v->a[219683] = anon_sym_LT_LPAREN;
	v->a[219684] = anon_sym_GT_LPAREN;
	v->a[219685] = actions(10192);
	v->a[219686] = 2;
	v->a[219687] = sym_test_operator;
	v->a[219688] = sym__special_character;
	v->a[219689] = actions(10194);
	v->a[219690] = 3;
	v->a[219691] = sym__bare_dollar;
	v->a[219692] = sym_raw_string;
	v->a[219693] = sym_ansi_c_string;
	v->a[219694] = state(2392);
	v->a[219695] = 9;
	v->a[219696] = sym_arithmetic_expansion;
	v->a[219697] = sym_brace_expression;
	v->a[219698] = sym_string;
	v->a[219699] = sym_translated_string;
	small_parse_table_10985(v);
}

/* EOF small_parse_table_2196.c */
