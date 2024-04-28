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
	v->a[86100] = anon_sym_BQUOTE;
	v->a[86101] = anon_sym_DOLLAR_BQUOTE;
	v->a[86102] = anon_sym_LT_LPAREN;
	v->a[86103] = anon_sym_GT_LPAREN;
	v->a[86104] = sym_word;
	v->a[86105] = 3;
	v->a[86106] = actions(3);
	v->a[86107] = 1;
	v->a[86108] = sym_comment;
	v->a[86109] = actions(1342);
	v->a[86110] = 5;
	v->a[86111] = sym_file_descriptor;
	v->a[86112] = sym__concat;
	v->a[86113] = sym_test_operator;
	v->a[86114] = sym__brace_start;
	v->a[86115] = aux_sym_heredoc_redirect_token1;
	v->a[86116] = actions(1340);
	v->a[86117] = 39;
	v->a[86118] = anon_sym_LPAREN_LPAREN;
	v->a[86119] = anon_sym_SEMI;
	small_parse_table_4306(v);
}

void	small_parse_table_4306(t_small_parse_table_array *v)
{
	v->a[86120] = anon_sym_PIPE_PIPE;
	v->a[86121] = anon_sym_AMP_AMP;
	v->a[86122] = anon_sym_PIPE;
	v->a[86123] = anon_sym_AMP;
	v->a[86124] = anon_sym_LT;
	v->a[86125] = anon_sym_GT;
	v->a[86126] = anon_sym_LT_LT;
	v->a[86127] = anon_sym_GT_GT;
	v->a[86128] = anon_sym_RPAREN;
	v->a[86129] = anon_sym_SEMI_SEMI;
	v->a[86130] = anon_sym_PIPE_AMP;
	v->a[86131] = anon_sym_AMP_GT;
	v->a[86132] = anon_sym_AMP_GT_GT;
	v->a[86133] = anon_sym_LT_AMP;
	v->a[86134] = anon_sym_GT_AMP;
	v->a[86135] = anon_sym_GT_PIPE;
	v->a[86136] = anon_sym_LT_AMP_DASH;
	v->a[86137] = anon_sym_GT_AMP_DASH;
	v->a[86138] = anon_sym_LT_LT_DASH;
	v->a[86139] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4307(v);
}

void	small_parse_table_4307(t_small_parse_table_array *v)
{
	v->a[86140] = anon_sym_DOLLAR_LBRACK;
	v->a[86141] = aux_sym_concatenation_token1;
	v->a[86142] = anon_sym_DOLLAR;
	v->a[86143] = sym__special_character;
	v->a[86144] = anon_sym_DQUOTE;
	v->a[86145] = sym_raw_string;
	v->a[86146] = sym_ansi_c_string;
	v->a[86147] = aux_sym_number_token1;
	v->a[86148] = aux_sym_number_token2;
	v->a[86149] = anon_sym_DOLLAR_LBRACE;
	v->a[86150] = anon_sym_DOLLAR_LPAREN;
	v->a[86151] = anon_sym_BQUOTE;
	v->a[86152] = anon_sym_DOLLAR_BQUOTE;
	v->a[86153] = anon_sym_LT_LPAREN;
	v->a[86154] = anon_sym_GT_LPAREN;
	v->a[86155] = aux_sym__simple_variable_name_token1;
	v->a[86156] = sym_word;
	v->a[86157] = 5;
	v->a[86158] = actions(71);
	v->a[86159] = 1;
	small_parse_table_4308(v);
}

void	small_parse_table_4308(t_small_parse_table_array *v)
{
	v->a[86160] = sym_comment;
	v->a[86161] = state(1897);
	v->a[86162] = 1;
	v->a[86163] = aux_sym_concatenation_repeat1;
	v->a[86164] = actions(5986);
	v->a[86165] = 2;
	v->a[86166] = sym__concat;
	v->a[86167] = aux_sym_concatenation_token1;
	v->a[86168] = actions(241);
	v->a[86169] = 16;
	v->a[86170] = anon_sym_PIPE;
	v->a[86171] = anon_sym_EQ_EQ;
	v->a[86172] = anon_sym_LT;
	v->a[86173] = anon_sym_GT;
	v->a[86174] = anon_sym_LT_LT;
	v->a[86175] = anon_sym_LPAREN;
	v->a[86176] = anon_sym_EQ_TILDE;
	v->a[86177] = anon_sym_AMP_GT;
	v->a[86178] = anon_sym_LT_AMP;
	v->a[86179] = anon_sym_GT_AMP;
	small_parse_table_4309(v);
}

void	small_parse_table_4309(t_small_parse_table_array *v)
{
	v->a[86180] = anon_sym_DOLLAR;
	v->a[86181] = aux_sym_number_token1;
	v->a[86182] = aux_sym_number_token2;
	v->a[86183] = anon_sym_DOLLAR_LPAREN;
	v->a[86184] = anon_sym_BQUOTE;
	v->a[86185] = sym_word;
	v->a[86186] = actions(278);
	v->a[86187] = 25;
	v->a[86188] = sym_file_descriptor;
	v->a[86189] = sym_test_operator;
	v->a[86190] = sym__bare_dollar;
	v->a[86191] = sym__brace_start;
	v->a[86192] = anon_sym_LPAREN_LPAREN;
	v->a[86193] = anon_sym_PIPE_PIPE;
	v->a[86194] = anon_sym_AMP_AMP;
	v->a[86195] = anon_sym_GT_GT;
	v->a[86196] = anon_sym_PIPE_AMP;
	v->a[86197] = anon_sym_AMP_GT_GT;
	v->a[86198] = anon_sym_GT_PIPE;
	v->a[86199] = anon_sym_LT_AMP_DASH;
	small_parse_table_4310(v);
}

/* EOF small_parse_table_861.c */
