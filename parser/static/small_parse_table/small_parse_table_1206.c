/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1206.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6030(t_small_parse_table_array *v)
{
	v->a[120600] = 1;
	v->a[120601] = anon_sym_DOLLAR_BQUOTE;
	v->a[120602] = actions(6378);
	v->a[120603] = 1;
	v->a[120604] = sym_word;
	v->a[120605] = actions(6380);
	v->a[120606] = 1;
	v->a[120607] = sym__special_character;
	v->a[120608] = actions(6384);
	v->a[120609] = 1;
	v->a[120610] = sym__comment_word;
	v->a[120611] = actions(7015);
	v->a[120612] = 1;
	v->a[120613] = anon_sym_DOLLAR;
	v->a[120614] = actions(6382);
	v->a[120615] = 3;
	v->a[120616] = sym_test_operator;
	v->a[120617] = sym__bare_dollar;
	v->a[120618] = sym_raw_string;
	v->a[120619] = state(710);
	small_parse_table_6031(v);
}

void	small_parse_table_6031(t_small_parse_table_array *v)
{
	v->a[120620] = 7;
	v->a[120621] = sym_arithmetic_expansion;
	v->a[120622] = sym_brace_expression;
	v->a[120623] = sym_string;
	v->a[120624] = sym_number;
	v->a[120625] = sym_simple_expansion;
	v->a[120626] = sym_expansion;
	v->a[120627] = sym_command_substitution;
	v->a[120628] = 16;
	v->a[120629] = actions(3);
	v->a[120630] = 1;
	v->a[120631] = sym_comment;
	v->a[120632] = actions(5371);
	v->a[120633] = 1;
	v->a[120634] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120635] = actions(5377);
	v->a[120636] = 1;
	v->a[120637] = anon_sym_DQUOTE;
	v->a[120638] = actions(5381);
	v->a[120639] = 1;
	small_parse_table_6032(v);
}

void	small_parse_table_6032(t_small_parse_table_array *v)
{
	v->a[120640] = aux_sym_number_token1;
	v->a[120641] = actions(5383);
	v->a[120642] = 1;
	v->a[120643] = aux_sym_number_token2;
	v->a[120644] = actions(5385);
	v->a[120645] = 1;
	v->a[120646] = anon_sym_DOLLAR_LBRACE;
	v->a[120647] = actions(5387);
	v->a[120648] = 1;
	v->a[120649] = anon_sym_DOLLAR_LPAREN;
	v->a[120650] = actions(5389);
	v->a[120651] = 1;
	v->a[120652] = anon_sym_BQUOTE;
	v->a[120653] = actions(5391);
	v->a[120654] = 1;
	v->a[120655] = anon_sym_DOLLAR_BQUOTE;
	v->a[120656] = actions(5397);
	v->a[120657] = 1;
	v->a[120658] = sym__brace_start;
	v->a[120659] = actions(6414);
	small_parse_table_6033(v);
}

void	small_parse_table_6033(t_small_parse_table_array *v)
{
	v->a[120660] = 1;
	v->a[120661] = sym_word;
	v->a[120662] = actions(6416);
	v->a[120663] = 1;
	v->a[120664] = sym__special_character;
	v->a[120665] = actions(6420);
	v->a[120666] = 1;
	v->a[120667] = sym__comment_word;
	v->a[120668] = actions(7017);
	v->a[120669] = 1;
	v->a[120670] = anon_sym_DOLLAR;
	v->a[120671] = actions(6418);
	v->a[120672] = 3;
	v->a[120673] = sym_test_operator;
	v->a[120674] = sym__bare_dollar;
	v->a[120675] = sym_raw_string;
	v->a[120676] = state(1907);
	v->a[120677] = 7;
	v->a[120678] = sym_arithmetic_expansion;
	v->a[120679] = sym_brace_expression;
	small_parse_table_6034(v);
}

void	small_parse_table_6034(t_small_parse_table_array *v)
{
	v->a[120680] = sym_string;
	v->a[120681] = sym_number;
	v->a[120682] = sym_simple_expansion;
	v->a[120683] = sym_expansion;
	v->a[120684] = sym_command_substitution;
	v->a[120685] = 16;
	v->a[120686] = actions(3);
	v->a[120687] = 1;
	v->a[120688] = sym_comment;
	v->a[120689] = actions(3726);
	v->a[120690] = 1;
	v->a[120691] = aux_sym_number_token1;
	v->a[120692] = actions(3728);
	v->a[120693] = 1;
	v->a[120694] = aux_sym_number_token2;
	v->a[120695] = actions(3732);
	v->a[120696] = 1;
	v->a[120697] = anon_sym_DOLLAR_LPAREN;
	v->a[120698] = actions(3740);
	v->a[120699] = 1;
	small_parse_table_6035(v);
}

/* EOF small_parse_table_1206.c */
