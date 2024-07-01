/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_681.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3405(t_small_parse_table_array *v)
{
	v->a[68100] = actions(1074);
	v->a[68101] = 1;
	v->a[68102] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68103] = actions(1078);
	v->a[68104] = 1;
	v->a[68105] = anon_sym_DQUOTE;
	v->a[68106] = actions(1080);
	v->a[68107] = 1;
	v->a[68108] = anon_sym_DOLLAR_LBRACE;
	v->a[68109] = actions(1082);
	v->a[68110] = 1;
	v->a[68111] = anon_sym_DOLLAR_LPAREN;
	v->a[68112] = actions(1084);
	v->a[68113] = 1;
	v->a[68114] = anon_sym_BQUOTE;
	v->a[68115] = actions(2638);
	v->a[68116] = 1;
	v->a[68117] = anon_sym_DOLLAR;
	v->a[68118] = actions(2640);
	v->a[68119] = 1;
	small_parse_table_3406(v);
}

void	small_parse_table_3406(t_small_parse_table_array *v)
{
	v->a[68120] = sym__bare_dollar;
	v->a[68121] = actions(2636);
	v->a[68122] = 5;
	v->a[68123] = aux_sym_concatenation_token1;
	v->a[68124] = sym_raw_string;
	v->a[68125] = sym_number;
	v->a[68126] = sym__comment_word;
	v->a[68127] = sym_word;
	v->a[68128] = state(1450);
	v->a[68129] = 5;
	v->a[68130] = sym_arithmetic_expansion;
	v->a[68131] = sym_string;
	v->a[68132] = sym_simple_expansion;
	v->a[68133] = sym_expansion;
	v->a[68134] = sym_command_substitution;
	v->a[68135] = 12;
	v->a[68136] = actions(3);
	v->a[68137] = 1;
	v->a[68138] = sym_comment;
	v->a[68139] = actions(2446);
	small_parse_table_3407(v);
}

void	small_parse_table_3407(t_small_parse_table_array *v)
{
	v->a[68140] = 1;
	v->a[68141] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68142] = actions(2448);
	v->a[68143] = 1;
	v->a[68144] = anon_sym_DOLLAR;
	v->a[68145] = actions(2450);
	v->a[68146] = 1;
	v->a[68147] = anon_sym_DQUOTE;
	v->a[68148] = actions(2452);
	v->a[68149] = 1;
	v->a[68150] = anon_sym_DOLLAR_LBRACE;
	v->a[68151] = actions(2454);
	v->a[68152] = 1;
	v->a[68153] = anon_sym_DOLLAR_LPAREN;
	v->a[68154] = actions(2456);
	v->a[68155] = 1;
	v->a[68156] = anon_sym_BQUOTE;
	v->a[68157] = actions(2644);
	v->a[68158] = 1;
	v->a[68159] = sym__comment_word;
	small_parse_table_3408(v);
}

void	small_parse_table_3408(t_small_parse_table_array *v)
{
	v->a[68160] = actions(2646);
	v->a[68161] = 1;
	v->a[68162] = sym__empty_value;
	v->a[68163] = state(699);
	v->a[68164] = 1;
	v->a[68165] = sym_concatenation;
	v->a[68166] = actions(2642);
	v->a[68167] = 3;
	v->a[68168] = sym_raw_string;
	v->a[68169] = sym_number;
	v->a[68170] = sym_word;
	v->a[68171] = state(422);
	v->a[68172] = 5;
	v->a[68173] = sym_arithmetic_expansion;
	v->a[68174] = sym_string;
	v->a[68175] = sym_simple_expansion;
	v->a[68176] = sym_expansion;
	v->a[68177] = sym_command_substitution;
	v->a[68178] = 12;
	v->a[68179] = actions(3);
	small_parse_table_3409(v);
}

void	small_parse_table_3409(t_small_parse_table_array *v)
{
	v->a[68180] = 1;
	v->a[68181] = sym_comment;
	v->a[68182] = actions(2400);
	v->a[68183] = 1;
	v->a[68184] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68185] = actions(2404);
	v->a[68186] = 1;
	v->a[68187] = anon_sym_DQUOTE;
	v->a[68188] = actions(2406);
	v->a[68189] = 1;
	v->a[68190] = anon_sym_DOLLAR_LBRACE;
	v->a[68191] = actions(2408);
	v->a[68192] = 1;
	v->a[68193] = anon_sym_DOLLAR_LPAREN;
	v->a[68194] = actions(2410);
	v->a[68195] = 1;
	v->a[68196] = anon_sym_BQUOTE;
	v->a[68197] = actions(2532);
	v->a[68198] = 1;
	v->a[68199] = anon_sym_DOLLAR;
	small_parse_table_3410(v);
}

/* EOF small_parse_table_681.c */
