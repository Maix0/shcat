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
	v->a[78100] = actions(867);
	v->a[78101] = 1;
	v->a[78102] = anon_sym_DOLLAR_LPAREN;
	v->a[78103] = actions(869);
	v->a[78104] = 1;
	v->a[78105] = anon_sym_BQUOTE;
	v->a[78106] = actions(2757);
	v->a[78107] = 1;
	v->a[78108] = aux_sym_heredoc_redirect_token1;
	v->a[78109] = state(1577);
	v->a[78110] = 1;
	v->a[78111] = aux_sym__heredoc_command;
	v->a[78112] = state(1953);
	v->a[78113] = 1;
	v->a[78114] = sym_concatenation;
	v->a[78115] = actions(847);
	v->a[78116] = 3;
	v->a[78117] = sym_raw_string;
	v->a[78118] = sym_number;
	v->a[78119] = sym_word;
	small_parse_table_3906(v);
}

void	small_parse_table_3906(t_small_parse_table_array *v)
{
	v->a[78120] = state(1788);
	v->a[78121] = 5;
	v->a[78122] = sym_arithmetic_expansion;
	v->a[78123] = sym_string;
	v->a[78124] = sym_simple_expansion;
	v->a[78125] = sym_expansion;
	v->a[78126] = sym_command_substitution;
	v->a[78127] = 8;
	v->a[78128] = actions(3);
	v->a[78129] = 1;
	v->a[78130] = sym_comment;
	v->a[78131] = actions(871);
	v->a[78132] = 1;
	v->a[78133] = sym_file_descriptor;
	v->a[78134] = actions(2759);
	v->a[78135] = 1;
	v->a[78136] = aux_sym_heredoc_redirect_token1;
	v->a[78137] = state(2151);
	v->a[78138] = 1;
	v->a[78139] = sym__heredoc_expression;
	small_parse_table_3907(v);
}

void	small_parse_table_3907(t_small_parse_table_array *v)
{
	v->a[78140] = actions(851);
	v->a[78141] = 2;
	v->a[78142] = anon_sym_AMP_AMP;
	v->a[78143] = anon_sym_PIPE_PIPE;
	v->a[78144] = actions(855);
	v->a[78145] = 2;
	v->a[78146] = anon_sym_LT_AMP_DASH;
	v->a[78147] = anon_sym_GT_AMP_DASH;
	v->a[78148] = state(1609);
	v->a[78149] = 2;
	v->a[78150] = sym_file_redirect;
	v->a[78151] = aux_sym_redirected_statement_repeat2;
	v->a[78152] = actions(853);
	v->a[78153] = 8;
	v->a[78154] = anon_sym_LT;
	v->a[78155] = anon_sym_GT;
	v->a[78156] = anon_sym_GT_GT;
	v->a[78157] = anon_sym_AMP_GT;
	v->a[78158] = anon_sym_AMP_GT_GT;
	v->a[78159] = anon_sym_LT_AMP;
	small_parse_table_3908(v);
}

void	small_parse_table_3908(t_small_parse_table_array *v)
{
	v->a[78160] = anon_sym_GT_AMP;
	v->a[78161] = anon_sym_GT_PIPE;
	v->a[78162] = 12;
	v->a[78163] = actions(3);
	v->a[78164] = 1;
	v->a[78165] = sym_comment;
	v->a[78166] = actions(859);
	v->a[78167] = 1;
	v->a[78168] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78169] = actions(861);
	v->a[78170] = 1;
	v->a[78171] = anon_sym_DOLLAR;
	v->a[78172] = actions(863);
	v->a[78173] = 1;
	v->a[78174] = anon_sym_DQUOTE;
	v->a[78175] = actions(865);
	v->a[78176] = 1;
	v->a[78177] = anon_sym_DOLLAR_LBRACE;
	v->a[78178] = actions(867);
	v->a[78179] = 1;
	small_parse_table_3909(v);
}

void	small_parse_table_3909(t_small_parse_table_array *v)
{
	v->a[78180] = anon_sym_DOLLAR_LPAREN;
	v->a[78181] = actions(869);
	v->a[78182] = 1;
	v->a[78183] = anon_sym_BQUOTE;
	v->a[78184] = actions(2761);
	v->a[78185] = 1;
	v->a[78186] = aux_sym_heredoc_redirect_token1;
	v->a[78187] = state(1577);
	v->a[78188] = 1;
	v->a[78189] = aux_sym__heredoc_command;
	v->a[78190] = state(1953);
	v->a[78191] = 1;
	v->a[78192] = sym_concatenation;
	v->a[78193] = actions(847);
	v->a[78194] = 3;
	v->a[78195] = sym_raw_string;
	v->a[78196] = sym_number;
	v->a[78197] = sym_word;
	v->a[78198] = state(1788);
	v->a[78199] = 5;
	small_parse_table_3910(v);
}

/* EOF small_parse_table_781.c */
