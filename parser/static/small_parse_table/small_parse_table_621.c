/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_621.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3105(t_small_parse_table_array *v)
{
	v->a[62100] = actions(2558);
	v->a[62101] = 1;
	v->a[62102] = anon_sym_DOLLAR_LPAREN;
	v->a[62103] = actions(2560);
	v->a[62104] = 1;
	v->a[62105] = anon_sym_BQUOTE;
	v->a[62106] = actions(2647);
	v->a[62107] = 1;
	v->a[62108] = anon_sym_DOLLAR;
	v->a[62109] = actions(2649);
	v->a[62110] = 1;
	v->a[62111] = anon_sym_DQUOTE;
	v->a[62112] = state(1330);
	v->a[62113] = 1;
	v->a[62114] = aux_sym_string_repeat1;
	v->a[62115] = state(1477);
	v->a[62116] = 4;
	v->a[62117] = sym_arithmetic_expansion;
	v->a[62118] = sym_simple_expansion;
	v->a[62119] = sym_expansion;
	small_parse_table_3106(v);
}

void	small_parse_table_3106(t_small_parse_table_array *v)
{
	v->a[62120] = sym_command_substitution;
	v->a[62121] = 4;
	v->a[62122] = actions(3);
	v->a[62123] = 1;
	v->a[62124] = sym_comment;
	v->a[62125] = actions(2637);
	v->a[62126] = 1;
	v->a[62127] = anon_sym_esac;
	v->a[62128] = actions(2639);
	v->a[62129] = 1;
	v->a[62130] = sym_extglob_pattern;
	v->a[62131] = actions(2635);
	v->a[62132] = 10;
	v->a[62133] = anon_sym_LPAREN;
	v->a[62134] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62135] = anon_sym_DOLLAR;
	v->a[62136] = anon_sym_DQUOTE;
	v->a[62137] = sym_raw_string;
	v->a[62138] = sym_number;
	v->a[62139] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3107(v);
}

void	small_parse_table_3107(t_small_parse_table_array *v)
{
	v->a[62140] = anon_sym_DOLLAR_LPAREN;
	v->a[62141] = anon_sym_BQUOTE;
	v->a[62142] = sym_word;
	v->a[62143] = 10;
	v->a[62144] = actions(3);
	v->a[62145] = 1;
	v->a[62146] = sym_comment;
	v->a[62147] = actions(2548);
	v->a[62148] = 1;
	v->a[62149] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62150] = actions(2554);
	v->a[62151] = 1;
	v->a[62152] = sym_string_content;
	v->a[62153] = actions(2556);
	v->a[62154] = 1;
	v->a[62155] = anon_sym_DOLLAR_LBRACE;
	v->a[62156] = actions(2558);
	v->a[62157] = 1;
	v->a[62158] = anon_sym_DOLLAR_LPAREN;
	v->a[62159] = actions(2560);
	small_parse_table_3108(v);
}

void	small_parse_table_3108(t_small_parse_table_array *v)
{
	v->a[62160] = 1;
	v->a[62161] = anon_sym_BQUOTE;
	v->a[62162] = actions(2651);
	v->a[62163] = 1;
	v->a[62164] = anon_sym_DOLLAR;
	v->a[62165] = actions(2653);
	v->a[62166] = 1;
	v->a[62167] = anon_sym_DQUOTE;
	v->a[62168] = state(1370);
	v->a[62169] = 1;
	v->a[62170] = aux_sym_string_repeat1;
	v->a[62171] = state(1477);
	v->a[62172] = 4;
	v->a[62173] = sym_arithmetic_expansion;
	v->a[62174] = sym_simple_expansion;
	v->a[62175] = sym_expansion;
	v->a[62176] = sym_command_substitution;
	v->a[62177] = 10;
	v->a[62178] = actions(3);
	v->a[62179] = 1;
	small_parse_table_3109(v);
}

void	small_parse_table_3109(t_small_parse_table_array *v)
{
	v->a[62180] = sym_comment;
	v->a[62181] = actions(2548);
	v->a[62182] = 1;
	v->a[62183] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62184] = actions(2554);
	v->a[62185] = 1;
	v->a[62186] = sym_string_content;
	v->a[62187] = actions(2556);
	v->a[62188] = 1;
	v->a[62189] = anon_sym_DOLLAR_LBRACE;
	v->a[62190] = actions(2558);
	v->a[62191] = 1;
	v->a[62192] = anon_sym_DOLLAR_LPAREN;
	v->a[62193] = actions(2560);
	v->a[62194] = 1;
	v->a[62195] = anon_sym_BQUOTE;
	v->a[62196] = actions(2655);
	v->a[62197] = 1;
	v->a[62198] = anon_sym_DOLLAR;
	v->a[62199] = actions(2657);
	small_parse_table_3110(v);
}

/* EOF small_parse_table_621.c */
