/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_371.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1855(t_small_parse_table_array *v)
{
	v->a[37100] = 1;
	v->a[37101] = anon_sym_DQUOTE;
	v->a[37102] = actions(1541);
	v->a[37103] = 1;
	v->a[37104] = anon_sym_DOLLAR_LBRACE;
	v->a[37105] = actions(1543);
	v->a[37106] = 1;
	v->a[37107] = anon_sym_DOLLAR_LPAREN;
	v->a[37108] = actions(1545);
	v->a[37109] = 1;
	v->a[37110] = anon_sym_BQUOTE;
	v->a[37111] = actions(1585);
	v->a[37112] = 1;
	v->a[37113] = anon_sym_DOLLAR;
	v->a[37114] = actions(1587);
	v->a[37115] = 1;
	v->a[37116] = sym__comment_word;
	v->a[37117] = actions(1589);
	v->a[37118] = 1;
	v->a[37119] = sym__empty_value;
	small_parse_table_1856(v);
}

void	small_parse_table_1856(t_small_parse_table_array *v)
{
	v->a[37120] = state(950);
	v->a[37121] = 1;
	v->a[37122] = sym_concatenation;
	v->a[37123] = actions(1593);
	v->a[37124] = 3;
	v->a[37125] = sym_raw_string;
	v->a[37126] = sym_number;
	v->a[37127] = sym_word;
	v->a[37128] = state(852);
	v->a[37129] = 5;
	v->a[37130] = sym_arithmetic_expansion;
	v->a[37131] = sym_string;
	v->a[37132] = sym_simple_expansion;
	v->a[37133] = sym_expansion;
	v->a[37134] = sym_command_substitution;
	v->a[37135] = 12;
	v->a[37136] = actions(3);
	v->a[37137] = 1;
	v->a[37138] = sym_comment;
	v->a[37139] = actions(1597);
	small_parse_table_1857(v);
}

void	small_parse_table_1857(t_small_parse_table_array *v)
{
	v->a[37140] = 1;
	v->a[37141] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37142] = actions(1599);
	v->a[37143] = 1;
	v->a[37144] = anon_sym_DOLLAR;
	v->a[37145] = actions(1601);
	v->a[37146] = 1;
	v->a[37147] = anon_sym_DQUOTE;
	v->a[37148] = actions(1603);
	v->a[37149] = 1;
	v->a[37150] = anon_sym_DOLLAR_LBRACE;
	v->a[37151] = actions(1605);
	v->a[37152] = 1;
	v->a[37153] = anon_sym_DOLLAR_LPAREN;
	v->a[37154] = actions(1607);
	v->a[37155] = 1;
	v->a[37156] = anon_sym_BQUOTE;
	v->a[37157] = actions(1609);
	v->a[37158] = 1;
	v->a[37159] = sym__comment_word;
	small_parse_table_1858(v);
}

void	small_parse_table_1858(t_small_parse_table_array *v)
{
	v->a[37160] = actions(1611);
	v->a[37161] = 1;
	v->a[37162] = sym__empty_value;
	v->a[37163] = state(762);
	v->a[37164] = 1;
	v->a[37165] = sym_concatenation;
	v->a[37166] = actions(1595);
	v->a[37167] = 3;
	v->a[37168] = sym_raw_string;
	v->a[37169] = sym_number;
	v->a[37170] = sym_word;
	v->a[37171] = state(592);
	v->a[37172] = 5;
	v->a[37173] = sym_arithmetic_expansion;
	v->a[37174] = sym_string;
	v->a[37175] = sym_simple_expansion;
	v->a[37176] = sym_expansion;
	v->a[37177] = sym_command_substitution;
	v->a[37178] = 10;
	v->a[37179] = actions(3);
	small_parse_table_1859(v);
}

void	small_parse_table_1859(t_small_parse_table_array *v)
{
	v->a[37180] = 1;
	v->a[37181] = sym_comment;
	v->a[37182] = actions(1535);
	v->a[37183] = 1;
	v->a[37184] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37185] = actions(1539);
	v->a[37186] = 1;
	v->a[37187] = anon_sym_DQUOTE;
	v->a[37188] = actions(1541);
	v->a[37189] = 1;
	v->a[37190] = anon_sym_DOLLAR_LBRACE;
	v->a[37191] = actions(1543);
	v->a[37192] = 1;
	v->a[37193] = anon_sym_DOLLAR_LPAREN;
	v->a[37194] = actions(1545);
	v->a[37195] = 1;
	v->a[37196] = anon_sym_BQUOTE;
	v->a[37197] = actions(1547);
	v->a[37198] = 1;
	v->a[37199] = sym__bare_dollar;
	small_parse_table_1860(v);
}

/* EOF small_parse_table_371.c */
