/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_861.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4305(t_small_parse_table_array *v)
{
	v->a[86100] = anon_sym_GT_AMP;
	v->a[86101] = anon_sym_LT_LT;
	v->a[86102] = actions(2316);
	v->a[86103] = 9;
	v->a[86104] = sym_file_descriptor;
	v->a[86105] = anon_sym_AMP_AMP;
	v->a[86106] = anon_sym_PIPE_PIPE;
	v->a[86107] = anon_sym_GT_GT;
	v->a[86108] = anon_sym_AMP_GT_GT;
	v->a[86109] = anon_sym_GT_PIPE;
	v->a[86110] = anon_sym_LT_AMP_DASH;
	v->a[86111] = anon_sym_GT_AMP_DASH;
	v->a[86112] = anon_sym_LT_LT_DASH;
	v->a[86113] = 10;
	v->a[86114] = actions(3);
	v->a[86115] = 1;
	v->a[86116] = sym_comment;
	v->a[86117] = actions(3290);
	v->a[86118] = 1;
	v->a[86119] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4306(v);
}

void	small_parse_table_4306(t_small_parse_table_array *v)
{
	v->a[86120] = actions(3294);
	v->a[86121] = 1;
	v->a[86122] = anon_sym_DQUOTE;
	v->a[86123] = actions(3296);
	v->a[86124] = 1;
	v->a[86125] = anon_sym_DOLLAR_LBRACE;
	v->a[86126] = actions(3298);
	v->a[86127] = 1;
	v->a[86128] = anon_sym_DOLLAR_LPAREN;
	v->a[86129] = actions(3300);
	v->a[86130] = 1;
	v->a[86131] = anon_sym_BQUOTE;
	v->a[86132] = actions(3302);
	v->a[86133] = 1;
	v->a[86134] = sym__bare_dollar;
	v->a[86135] = actions(3475);
	v->a[86136] = 1;
	v->a[86137] = anon_sym_DOLLAR;
	v->a[86138] = actions(3288);
	v->a[86139] = 5;
	small_parse_table_4307(v);
}

void	small_parse_table_4307(t_small_parse_table_array *v)
{
	v->a[86140] = aux_sym_concatenation_token1;
	v->a[86141] = sym_raw_string;
	v->a[86142] = sym_number;
	v->a[86143] = sym__comment_word;
	v->a[86144] = sym_word;
	v->a[86145] = state(1580);
	v->a[86146] = 5;
	v->a[86147] = sym_arithmetic_expansion;
	v->a[86148] = sym_string;
	v->a[86149] = sym_simple_expansion;
	v->a[86150] = sym_expansion;
	v->a[86151] = sym_command_substitution;
	v->a[86152] = 12;
	v->a[86153] = actions(3);
	v->a[86154] = 1;
	v->a[86155] = sym_comment;
	v->a[86156] = actions(884);
	v->a[86157] = 1;
	v->a[86158] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86159] = actions(886);
	small_parse_table_4308(v);
}

void	small_parse_table_4308(t_small_parse_table_array *v)
{
	v->a[86160] = 1;
	v->a[86161] = anon_sym_DOLLAR;
	v->a[86162] = actions(888);
	v->a[86163] = 1;
	v->a[86164] = anon_sym_DQUOTE;
	v->a[86165] = actions(890);
	v->a[86166] = 1;
	v->a[86167] = anon_sym_DOLLAR_LBRACE;
	v->a[86168] = actions(892);
	v->a[86169] = 1;
	v->a[86170] = anon_sym_DOLLAR_LPAREN;
	v->a[86171] = actions(894);
	v->a[86172] = 1;
	v->a[86173] = anon_sym_BQUOTE;
	v->a[86174] = actions(3477);
	v->a[86175] = 1;
	v->a[86176] = aux_sym_heredoc_redirect_token1;
	v->a[86177] = state(1613);
	v->a[86178] = 1;
	v->a[86179] = aux_sym__heredoc_command;
	small_parse_table_4309(v);
}

void	small_parse_table_4309(t_small_parse_table_array *v)
{
	v->a[86180] = state(2098);
	v->a[86181] = 1;
	v->a[86182] = sym_concatenation;
	v->a[86183] = actions(872);
	v->a[86184] = 3;
	v->a[86185] = sym_raw_string;
	v->a[86186] = sym_number;
	v->a[86187] = sym_word;
	v->a[86188] = state(1944);
	v->a[86189] = 5;
	v->a[86190] = sym_arithmetic_expansion;
	v->a[86191] = sym_string;
	v->a[86192] = sym_simple_expansion;
	v->a[86193] = sym_expansion;
	v->a[86194] = sym_command_substitution;
	v->a[86195] = 10;
	v->a[86196] = actions(3);
	v->a[86197] = 1;
	v->a[86198] = sym_comment;
	v->a[86199] = actions(1963);
	small_parse_table_4310(v);
}

/* EOF small_parse_table_861.c */
