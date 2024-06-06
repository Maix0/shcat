/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1211.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6055(t_small_parse_table_array *v)
{
	v->a[121100] = actions(6825);
	v->a[121101] = 1;
	v->a[121102] = anon_sym_DOLLAR_BQUOTE;
	v->a[121103] = actions(6827);
	v->a[121104] = 1;
	v->a[121105] = sym__comment_word;
	v->a[121106] = actions(7031);
	v->a[121107] = 1;
	v->a[121108] = anon_sym_DOLLAR;
	v->a[121109] = actions(6819);
	v->a[121110] = 3;
	v->a[121111] = sym_test_operator;
	v->a[121112] = sym__bare_dollar;
	v->a[121113] = sym_raw_string;
	v->a[121114] = state(2035);
	v->a[121115] = 7;
	v->a[121116] = sym_arithmetic_expansion;
	v->a[121117] = sym_brace_expression;
	v->a[121118] = sym_string;
	v->a[121119] = sym_number;
	small_parse_table_6056(v);
}

void	small_parse_table_6056(t_small_parse_table_array *v)
{
	v->a[121120] = sym_simple_expansion;
	v->a[121121] = sym_expansion;
	v->a[121122] = sym_command_substitution;
	v->a[121123] = 16;
	v->a[121124] = actions(3);
	v->a[121125] = 1;
	v->a[121126] = sym_comment;
	v->a[121127] = actions(897);
	v->a[121128] = 1;
	v->a[121129] = aux_sym_number_token1;
	v->a[121130] = actions(899);
	v->a[121131] = 1;
	v->a[121132] = aux_sym_number_token2;
	v->a[121133] = actions(903);
	v->a[121134] = 1;
	v->a[121135] = anon_sym_DOLLAR_LPAREN;
	v->a[121136] = actions(915);
	v->a[121137] = 1;
	v->a[121138] = sym__brace_start;
	v->a[121139] = actions(5621);
	small_parse_table_6057(v);
}

void	small_parse_table_6057(t_small_parse_table_array *v)
{
	v->a[121140] = 1;
	v->a[121141] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[121142] = actions(5625);
	v->a[121143] = 1;
	v->a[121144] = anon_sym_DQUOTE;
	v->a[121145] = actions(5629);
	v->a[121146] = 1;
	v->a[121147] = anon_sym_DOLLAR_LBRACE;
	v->a[121148] = actions(5631);
	v->a[121149] = 1;
	v->a[121150] = anon_sym_BQUOTE;
	v->a[121151] = actions(5633);
	v->a[121152] = 1;
	v->a[121153] = anon_sym_DOLLAR_BQUOTE;
	v->a[121154] = actions(6378);
	v->a[121155] = 1;
	v->a[121156] = sym_word;
	v->a[121157] = actions(6380);
	v->a[121158] = 1;
	v->a[121159] = sym__special_character;
	small_parse_table_6058(v);
}

void	small_parse_table_6058(t_small_parse_table_array *v)
{
	v->a[121160] = actions(6384);
	v->a[121161] = 1;
	v->a[121162] = sym__comment_word;
	v->a[121163] = actions(7033);
	v->a[121164] = 1;
	v->a[121165] = anon_sym_DOLLAR;
	v->a[121166] = actions(6382);
	v->a[121167] = 3;
	v->a[121168] = sym_test_operator;
	v->a[121169] = sym__bare_dollar;
	v->a[121170] = sym_raw_string;
	v->a[121171] = state(710);
	v->a[121172] = 7;
	v->a[121173] = sym_arithmetic_expansion;
	v->a[121174] = sym_brace_expression;
	v->a[121175] = sym_string;
	v->a[121176] = sym_number;
	v->a[121177] = sym_simple_expansion;
	v->a[121178] = sym_expansion;
	v->a[121179] = sym_command_substitution;
	small_parse_table_6059(v);
}

void	small_parse_table_6059(t_small_parse_table_array *v)
{
	v->a[121180] = 16;
	v->a[121181] = actions(3);
	v->a[121182] = 1;
	v->a[121183] = sym_comment;
	v->a[121184] = actions(2362);
	v->a[121185] = 1;
	v->a[121186] = aux_sym_number_token1;
	v->a[121187] = actions(2364);
	v->a[121188] = 1;
	v->a[121189] = aux_sym_number_token2;
	v->a[121190] = actions(2368);
	v->a[121191] = 1;
	v->a[121192] = anon_sym_DOLLAR_LPAREN;
	v->a[121193] = actions(2376);
	v->a[121194] = 1;
	v->a[121195] = sym__brace_start;
	v->a[121196] = actions(6811);
	v->a[121197] = 1;
	v->a[121198] = sym_word;
	v->a[121199] = actions(6813);
	small_parse_table_6060(v);
}

/* EOF small_parse_table_1211.c */
