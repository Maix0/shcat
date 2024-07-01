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
	v->a[78100] = sym_word;
	v->a[78101] = state(891);
	v->a[78102] = 5;
	v->a[78103] = sym_arithmetic_expansion;
	v->a[78104] = sym_string;
	v->a[78105] = sym_simple_expansion;
	v->a[78106] = sym_expansion;
	v->a[78107] = sym_command_substitution;
	v->a[78108] = 10;
	v->a[78109] = actions(3);
	v->a[78110] = 1;
	v->a[78111] = sym_comment;
	v->a[78112] = actions(2850);
	v->a[78113] = 1;
	v->a[78114] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78115] = actions(2854);
	v->a[78116] = 1;
	v->a[78117] = anon_sym_DQUOTE;
	v->a[78118] = actions(2856);
	v->a[78119] = 1;
	small_parse_table_3906(v);
}

void	small_parse_table_3906(t_small_parse_table_array *v)
{
	v->a[78120] = anon_sym_DOLLAR_LBRACE;
	v->a[78121] = actions(2858);
	v->a[78122] = 1;
	v->a[78123] = anon_sym_DOLLAR_LPAREN;
	v->a[78124] = actions(2860);
	v->a[78125] = 1;
	v->a[78126] = anon_sym_BQUOTE;
	v->a[78127] = actions(2862);
	v->a[78128] = 1;
	v->a[78129] = sym__bare_dollar;
	v->a[78130] = actions(3012);
	v->a[78131] = 1;
	v->a[78132] = anon_sym_DOLLAR;
	v->a[78133] = actions(2848);
	v->a[78134] = 5;
	v->a[78135] = aux_sym_concatenation_token1;
	v->a[78136] = sym_raw_string;
	v->a[78137] = sym_number;
	v->a[78138] = sym__comment_word;
	v->a[78139] = sym_word;
	small_parse_table_3907(v);
}

void	small_parse_table_3907(t_small_parse_table_array *v)
{
	v->a[78140] = state(598);
	v->a[78141] = 5;
	v->a[78142] = sym_arithmetic_expansion;
	v->a[78143] = sym_string;
	v->a[78144] = sym_simple_expansion;
	v->a[78145] = sym_expansion;
	v->a[78146] = sym_command_substitution;
	v->a[78147] = 10;
	v->a[78148] = actions(3);
	v->a[78149] = 1;
	v->a[78150] = sym_comment;
	v->a[78151] = actions(59);
	v->a[78152] = 1;
	v->a[78153] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78154] = actions(63);
	v->a[78155] = 1;
	v->a[78156] = anon_sym_DQUOTE;
	v->a[78157] = actions(67);
	v->a[78158] = 1;
	v->a[78159] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3908(v);
}

void	small_parse_table_3908(t_small_parse_table_array *v)
{
	v->a[78160] = actions(69);
	v->a[78161] = 1;
	v->a[78162] = anon_sym_DOLLAR_LPAREN;
	v->a[78163] = actions(71);
	v->a[78164] = 1;
	v->a[78165] = anon_sym_BQUOTE;
	v->a[78166] = actions(2613);
	v->a[78167] = 1;
	v->a[78168] = sym__bare_dollar;
	v->a[78169] = actions(3014);
	v->a[78170] = 1;
	v->a[78171] = anon_sym_DOLLAR;
	v->a[78172] = actions(2609);
	v->a[78173] = 5;
	v->a[78174] = aux_sym_concatenation_token1;
	v->a[78175] = sym_raw_string;
	v->a[78176] = sym_number;
	v->a[78177] = sym__comment_word;
	v->a[78178] = sym_word;
	v->a[78179] = state(424);
	small_parse_table_3909(v);
}

void	small_parse_table_3909(t_small_parse_table_array *v)
{
	v->a[78180] = 5;
	v->a[78181] = sym_arithmetic_expansion;
	v->a[78182] = sym_string;
	v->a[78183] = sym_simple_expansion;
	v->a[78184] = sym_expansion;
	v->a[78185] = sym_command_substitution;
	v->a[78186] = 10;
	v->a[78187] = actions(3);
	v->a[78188] = 1;
	v->a[78189] = sym_comment;
	v->a[78190] = actions(2798);
	v->a[78191] = 1;
	v->a[78192] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78193] = actions(2802);
	v->a[78194] = 1;
	v->a[78195] = anon_sym_DQUOTE;
	v->a[78196] = actions(2804);
	v->a[78197] = 1;
	v->a[78198] = anon_sym_DOLLAR_LBRACE;
	v->a[78199] = actions(2806);
	small_parse_table_3910(v);
}

/* EOF small_parse_table_781.c */
