/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1111.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5555(t_small_parse_table_array *v)
{
	v->a[111100] = actions(5905);
	v->a[111101] = 1;
	v->a[111102] = anon_sym_DOLLAR_LBRACE;
	v->a[111103] = actions(5907);
	v->a[111104] = 1;
	v->a[111105] = anon_sym_BQUOTE;
	v->a[111106] = actions(5909);
	v->a[111107] = 1;
	v->a[111108] = anon_sym_DOLLAR_BQUOTE;
	v->a[111109] = actions(6320);
	v->a[111110] = 1;
	v->a[111111] = sym_word;
	v->a[111112] = actions(6324);
	v->a[111113] = 1;
	v->a[111114] = sym__special_character;
	v->a[111115] = actions(6328);
	v->a[111116] = 1;
	v->a[111117] = sym__comment_word;
	v->a[111118] = actions(6358);
	v->a[111119] = 1;
	small_parse_table_5556(v);
}

void	small_parse_table_5556(t_small_parse_table_array *v)
{
	v->a[111120] = anon_sym_DOLLAR;
	v->a[111121] = actions(6326);
	v->a[111122] = 3;
	v->a[111123] = sym_test_operator;
	v->a[111124] = sym__bare_dollar;
	v->a[111125] = sym_raw_string;
	v->a[111126] = state(917);
	v->a[111127] = 7;
	v->a[111128] = sym_arithmetic_expansion;
	v->a[111129] = sym_brace_expression;
	v->a[111130] = sym_string;
	v->a[111131] = sym_number;
	v->a[111132] = sym_simple_expansion;
	v->a[111133] = sym_expansion;
	v->a[111134] = sym_command_substitution;
	v->a[111135] = 16;
	v->a[111136] = actions(3);
	v->a[111137] = 1;
	v->a[111138] = sym_comment;
	v->a[111139] = actions(1396);
	small_parse_table_5557(v);
}

void	small_parse_table_5557(t_small_parse_table_array *v)
{
	v->a[111140] = 1;
	v->a[111141] = anon_sym_DOLLAR;
	v->a[111142] = actions(1402);
	v->a[111143] = 1;
	v->a[111144] = aux_sym_number_token1;
	v->a[111145] = actions(1404);
	v->a[111146] = 1;
	v->a[111147] = aux_sym_number_token2;
	v->a[111148] = actions(1408);
	v->a[111149] = 1;
	v->a[111150] = anon_sym_DOLLAR_LPAREN;
	v->a[111151] = actions(1418);
	v->a[111152] = 1;
	v->a[111153] = sym__brace_start;
	v->a[111154] = actions(6360);
	v->a[111155] = 1;
	v->a[111156] = sym_word;
	v->a[111157] = actions(6362);
	v->a[111158] = 1;
	v->a[111159] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_5558(v);
}

void	small_parse_table_5558(t_small_parse_table_array *v)
{
	v->a[111160] = actions(6364);
	v->a[111161] = 1;
	v->a[111162] = sym__special_character;
	v->a[111163] = actions(6366);
	v->a[111164] = 1;
	v->a[111165] = anon_sym_DQUOTE;
	v->a[111166] = actions(6370);
	v->a[111167] = 1;
	v->a[111168] = anon_sym_DOLLAR_LBRACE;
	v->a[111169] = actions(6372);
	v->a[111170] = 1;
	v->a[111171] = anon_sym_BQUOTE;
	v->a[111172] = actions(6374);
	v->a[111173] = 1;
	v->a[111174] = anon_sym_DOLLAR_BQUOTE;
	v->a[111175] = actions(6376);
	v->a[111176] = 1;
	v->a[111177] = sym__comment_word;
	v->a[111178] = actions(6368);
	v->a[111179] = 3;
	small_parse_table_5559(v);
}

void	small_parse_table_5559(t_small_parse_table_array *v)
{
	v->a[111180] = sym_test_operator;
	v->a[111181] = sym__bare_dollar;
	v->a[111182] = sym_raw_string;
	v->a[111183] = state(813);
	v->a[111184] = 7;
	v->a[111185] = sym_arithmetic_expansion;
	v->a[111186] = sym_brace_expression;
	v->a[111187] = sym_string;
	v->a[111188] = sym_number;
	v->a[111189] = sym_simple_expansion;
	v->a[111190] = sym_expansion;
	v->a[111191] = sym_command_substitution;
	v->a[111192] = 16;
	v->a[111193] = actions(3);
	v->a[111194] = 1;
	v->a[111195] = sym_comment;
	v->a[111196] = actions(891);
	v->a[111197] = 1;
	v->a[111198] = anon_sym_DOLLAR;
	v->a[111199] = actions(897);
	small_parse_table_5560(v);
}

/* EOF small_parse_table_1111.c */
