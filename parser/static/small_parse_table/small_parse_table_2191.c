/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2191.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10955(t_small_parse_table_array *v)
{
	v->a[219100] = actions(9020);
	v->a[219101] = 1;
	v->a[219102] = anon_sym_BQUOTE;
	v->a[219103] = actions(9022);
	v->a[219104] = 1;
	v->a[219105] = anon_sym_DOLLAR_BQUOTE;
	v->a[219106] = actions(10358);
	v->a[219107] = 1;
	v->a[219108] = sym_word;
	v->a[219109] = actions(10364);
	v->a[219110] = 1;
	v->a[219111] = sym__comment_word;
	v->a[219112] = actions(10436);
	v->a[219113] = 1;
	v->a[219114] = anon_sym_DOLLAR;
	v->a[219115] = actions(9008);
	v->a[219116] = 2;
	v->a[219117] = anon_sym_LPAREN_LPAREN;
	v->a[219118] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[219119] = actions(9024);
	small_parse_table_10956(v);
}

void	small_parse_table_10956(t_small_parse_table_array *v)
{
	v->a[219120] = 2;
	v->a[219121] = anon_sym_LT_LPAREN;
	v->a[219122] = anon_sym_GT_LPAREN;
	v->a[219123] = actions(10360);
	v->a[219124] = 2;
	v->a[219125] = sym_test_operator;
	v->a[219126] = sym__special_character;
	v->a[219127] = actions(10362);
	v->a[219128] = 3;
	v->a[219129] = sym__bare_dollar;
	v->a[219130] = sym_raw_string;
	v->a[219131] = sym_ansi_c_string;
	v->a[219132] = state(1462);
	v->a[219133] = 9;
	v->a[219134] = sym_arithmetic_expansion;
	v->a[219135] = sym_brace_expression;
	v->a[219136] = sym_string;
	v->a[219137] = sym_translated_string;
	v->a[219138] = sym_number;
	v->a[219139] = sym_simple_expansion;
	small_parse_table_10957(v);
}

void	small_parse_table_10957(t_small_parse_table_array *v)
{
	v->a[219140] = sym_expansion;
	v->a[219141] = sym_command_substitution;
	v->a[219142] = sym_process_substitution;
	v->a[219143] = 18;
	v->a[219144] = actions(3);
	v->a[219145] = 1;
	v->a[219146] = sym_comment;
	v->a[219147] = actions(314);
	v->a[219148] = 1;
	v->a[219149] = anon_sym_DOLLAR_LBRACK;
	v->a[219150] = actions(320);
	v->a[219151] = 1;
	v->a[219152] = anon_sym_DQUOTE;
	v->a[219153] = actions(324);
	v->a[219154] = 1;
	v->a[219155] = aux_sym_number_token1;
	v->a[219156] = actions(326);
	v->a[219157] = 1;
	v->a[219158] = aux_sym_number_token2;
	v->a[219159] = actions(328);
	small_parse_table_10958(v);
}

void	small_parse_table_10958(t_small_parse_table_array *v)
{
	v->a[219160] = 1;
	v->a[219161] = anon_sym_DOLLAR_LBRACE;
	v->a[219162] = actions(330);
	v->a[219163] = 1;
	v->a[219164] = anon_sym_DOLLAR_LPAREN;
	v->a[219165] = actions(332);
	v->a[219166] = 1;
	v->a[219167] = anon_sym_BQUOTE;
	v->a[219168] = actions(334);
	v->a[219169] = 1;
	v->a[219170] = anon_sym_DOLLAR_BQUOTE;
	v->a[219171] = actions(344);
	v->a[219172] = 1;
	v->a[219173] = sym__brace_start;
	v->a[219174] = actions(9400);
	v->a[219175] = 1;
	v->a[219176] = sym_word;
	v->a[219177] = actions(9406);
	v->a[219178] = 1;
	v->a[219179] = sym__comment_word;
	small_parse_table_10959(v);
}

void	small_parse_table_10959(t_small_parse_table_array *v)
{
	v->a[219180] = actions(10438);
	v->a[219181] = 1;
	v->a[219182] = anon_sym_DOLLAR;
	v->a[219183] = actions(312);
	v->a[219184] = 2;
	v->a[219185] = anon_sym_LPAREN_LPAREN;
	v->a[219186] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[219187] = actions(336);
	v->a[219188] = 2;
	v->a[219189] = anon_sym_LT_LPAREN;
	v->a[219190] = anon_sym_GT_LPAREN;
	v->a[219191] = actions(9402);
	v->a[219192] = 2;
	v->a[219193] = sym_test_operator;
	v->a[219194] = sym__special_character;
	v->a[219195] = actions(9404);
	v->a[219196] = 3;
	v->a[219197] = sym__bare_dollar;
	v->a[219198] = sym_raw_string;
	v->a[219199] = sym_ansi_c_string;
	small_parse_table_10960(v);
}

/* EOF small_parse_table_2191.c */
