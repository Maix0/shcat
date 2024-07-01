/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_781.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3905(t_small_parse_table_array *v)
{
	v->a[78100] = anon_sym_BANG;
	v->a[78101] = anon_sym_DASH;
	v->a[78102] = anon_sym_STAR;
	v->a[78103] = anon_sym_QMARK;
	v->a[78104] = anon_sym_DOLLAR;
	v->a[78105] = anon_sym_POUND;
	v->a[78106] = anon_sym_AT;
	v->a[78107] = anon_sym_0;
	v->a[78108] = anon_sym__;
	v->a[78109] = 10;
	v->a[78110] = actions(3);
	v->a[78111] = 1;
	v->a[78112] = sym_comment;
	v->a[78113] = actions(3071);
	v->a[78114] = 1;
	v->a[78115] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78116] = actions(3077);
	v->a[78117] = 1;
	v->a[78118] = sym_string_content;
	v->a[78119] = actions(3079);
	small_parse_table_3906(v);
}

void	small_parse_table_3906(t_small_parse_table_array *v)
{
	v->a[78120] = 1;
	v->a[78121] = anon_sym_DOLLAR_LBRACE;
	v->a[78122] = actions(3081);
	v->a[78123] = 1;
	v->a[78124] = anon_sym_DOLLAR_LPAREN;
	v->a[78125] = actions(3083);
	v->a[78126] = 1;
	v->a[78127] = anon_sym_BQUOTE;
	v->a[78128] = actions(3287);
	v->a[78129] = 1;
	v->a[78130] = anon_sym_DOLLAR;
	v->a[78131] = actions(3289);
	v->a[78132] = 1;
	v->a[78133] = anon_sym_DQUOTE;
	v->a[78134] = state(1679);
	v->a[78135] = 1;
	v->a[78136] = aux_sym_string_repeat1;
	v->a[78137] = state(1739);
	v->a[78138] = 4;
	v->a[78139] = sym_arithmetic_expansion;
	small_parse_table_3907(v);
}

void	small_parse_table_3907(t_small_parse_table_array *v)
{
	v->a[78140] = sym_simple_expansion;
	v->a[78141] = sym_expansion;
	v->a[78142] = sym_command_substitution;
	v->a[78143] = 4;
	v->a[78144] = actions(3);
	v->a[78145] = 1;
	v->a[78146] = sym_comment;
	v->a[78147] = actions(3087);
	v->a[78148] = 1;
	v->a[78149] = anon_sym_esac;
	v->a[78150] = actions(3089);
	v->a[78151] = 1;
	v->a[78152] = sym_extglob_pattern;
	v->a[78153] = actions(3085);
	v->a[78154] = 10;
	v->a[78155] = anon_sym_LPAREN;
	v->a[78156] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78157] = anon_sym_DOLLAR;
	v->a[78158] = anon_sym_DQUOTE;
	v->a[78159] = sym_raw_string;
	small_parse_table_3908(v);
}

void	small_parse_table_3908(t_small_parse_table_array *v)
{
	v->a[78160] = sym_number;
	v->a[78161] = anon_sym_DOLLAR_LBRACE;
	v->a[78162] = anon_sym_DOLLAR_LPAREN;
	v->a[78163] = anon_sym_BQUOTE;
	v->a[78164] = sym_word;
	v->a[78165] = 10;
	v->a[78166] = actions(3);
	v->a[78167] = 1;
	v->a[78168] = sym_comment;
	v->a[78169] = actions(3071);
	v->a[78170] = 1;
	v->a[78171] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78172] = actions(3077);
	v->a[78173] = 1;
	v->a[78174] = sym_string_content;
	v->a[78175] = actions(3079);
	v->a[78176] = 1;
	v->a[78177] = anon_sym_DOLLAR_LBRACE;
	v->a[78178] = actions(3081);
	v->a[78179] = 1;
	small_parse_table_3909(v);
}

void	small_parse_table_3909(t_small_parse_table_array *v)
{
	v->a[78180] = anon_sym_DOLLAR_LPAREN;
	v->a[78181] = actions(3083);
	v->a[78182] = 1;
	v->a[78183] = anon_sym_BQUOTE;
	v->a[78184] = actions(3291);
	v->a[78185] = 1;
	v->a[78186] = anon_sym_DOLLAR;
	v->a[78187] = actions(3293);
	v->a[78188] = 1;
	v->a[78189] = anon_sym_DQUOTE;
	v->a[78190] = state(1672);
	v->a[78191] = 1;
	v->a[78192] = aux_sym_string_repeat1;
	v->a[78193] = state(1739);
	v->a[78194] = 4;
	v->a[78195] = sym_arithmetic_expansion;
	v->a[78196] = sym_simple_expansion;
	v->a[78197] = sym_expansion;
	v->a[78198] = sym_command_substitution;
	v->a[78199] = 4;
	small_parse_table_3910(v);
}

/* EOF small_parse_table_781.c */
