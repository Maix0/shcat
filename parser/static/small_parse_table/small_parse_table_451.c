/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_451.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2255(t_small_parse_table_array *v)
{
	v->a[45100] = sym_concatenation;
	v->a[45101] = sym__extglob_blob;
	v->a[45102] = actions(1333);
	v->a[45103] = 3;
	v->a[45104] = sym_raw_string;
	v->a[45105] = sym_number;
	v->a[45106] = sym_word;
	v->a[45107] = state(1520);
	v->a[45108] = 5;
	v->a[45109] = sym_arithmetic_expansion;
	v->a[45110] = sym_string;
	v->a[45111] = sym_simple_expansion;
	v->a[45112] = sym_expansion;
	v->a[45113] = sym_command_substitution;
	v->a[45114] = 15;
	v->a[45115] = actions(3);
	v->a[45116] = 1;
	v->a[45117] = sym_comment;
	v->a[45118] = actions(1337);
	v->a[45119] = 1;
	small_parse_table_2256(v);
}

void	small_parse_table_2256(t_small_parse_table_array *v)
{
	v->a[45120] = anon_sym_LPAREN;
	v->a[45121] = actions(1341);
	v->a[45122] = 1;
	v->a[45123] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45124] = actions(1343);
	v->a[45125] = 1;
	v->a[45126] = anon_sym_DOLLAR;
	v->a[45127] = actions(1345);
	v->a[45128] = 1;
	v->a[45129] = anon_sym_DQUOTE;
	v->a[45130] = actions(1347);
	v->a[45131] = 1;
	v->a[45132] = anon_sym_DOLLAR_LBRACE;
	v->a[45133] = actions(1349);
	v->a[45134] = 1;
	v->a[45135] = anon_sym_DOLLAR_LPAREN;
	v->a[45136] = actions(1351);
	v->a[45137] = 1;
	v->a[45138] = anon_sym_BQUOTE;
	v->a[45139] = actions(1353);
	small_parse_table_2257(v);
}

void	small_parse_table_2257(t_small_parse_table_array *v)
{
	v->a[45140] = 1;
	v->a[45141] = sym_extglob_pattern;
	v->a[45142] = state(839);
	v->a[45143] = 1;
	v->a[45144] = aux_sym_case_statement_repeat1;
	v->a[45145] = state(1432);
	v->a[45146] = 1;
	v->a[45147] = sym_case_item;
	v->a[45148] = state(1767);
	v->a[45149] = 1;
	v->a[45150] = sym__case_item_last;
	v->a[45151] = state(1594);
	v->a[45152] = 2;
	v->a[45153] = sym_concatenation;
	v->a[45154] = sym__extglob_blob;
	v->a[45155] = actions(1333);
	v->a[45156] = 3;
	v->a[45157] = sym_raw_string;
	v->a[45158] = sym_number;
	v->a[45159] = sym_word;
	small_parse_table_2258(v);
}

void	small_parse_table_2258(t_small_parse_table_array *v)
{
	v->a[45160] = state(1520);
	v->a[45161] = 5;
	v->a[45162] = sym_arithmetic_expansion;
	v->a[45163] = sym_string;
	v->a[45164] = sym_simple_expansion;
	v->a[45165] = sym_expansion;
	v->a[45166] = sym_command_substitution;
	v->a[45167] = 15;
	v->a[45168] = actions(3);
	v->a[45169] = 1;
	v->a[45170] = sym_comment;
	v->a[45171] = actions(1337);
	v->a[45172] = 1;
	v->a[45173] = anon_sym_LPAREN;
	v->a[45174] = actions(1341);
	v->a[45175] = 1;
	v->a[45176] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45177] = actions(1343);
	v->a[45178] = 1;
	v->a[45179] = anon_sym_DOLLAR;
	small_parse_table_2259(v);
}

void	small_parse_table_2259(t_small_parse_table_array *v)
{
	v->a[45180] = actions(1345);
	v->a[45181] = 1;
	v->a[45182] = anon_sym_DQUOTE;
	v->a[45183] = actions(1347);
	v->a[45184] = 1;
	v->a[45185] = anon_sym_DOLLAR_LBRACE;
	v->a[45186] = actions(1349);
	v->a[45187] = 1;
	v->a[45188] = anon_sym_DOLLAR_LPAREN;
	v->a[45189] = actions(1351);
	v->a[45190] = 1;
	v->a[45191] = anon_sym_BQUOTE;
	v->a[45192] = actions(1353);
	v->a[45193] = 1;
	v->a[45194] = sym_extglob_pattern;
	v->a[45195] = state(839);
	v->a[45196] = 1;
	v->a[45197] = aux_sym_case_statement_repeat1;
	v->a[45198] = state(1432);
	v->a[45199] = 1;
	small_parse_table_2260(v);
}

/* EOF small_parse_table_451.c */
