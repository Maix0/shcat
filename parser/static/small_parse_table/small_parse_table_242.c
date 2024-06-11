/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_242.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1210(t_small_parse_table_array *v)
{
	v->a[24200] = sym_simple_expansion;
	v->a[24201] = sym_expansion;
	v->a[24202] = sym_command_substitution;
	v->a[24203] = actions(564);
	v->a[24204] = 20;
	v->a[24205] = anon_sym_PIPE;
	v->a[24206] = anon_sym_RPAREN;
	v->a[24207] = anon_sym_SEMI_SEMI;
	v->a[24208] = anon_sym_AMP_AMP;
	v->a[24209] = anon_sym_PIPE_PIPE;
	v->a[24210] = anon_sym_LT;
	v->a[24211] = anon_sym_GT;
	v->a[24212] = anon_sym_GT_GT;
	v->a[24213] = anon_sym_AMP_GT;
	v->a[24214] = anon_sym_AMP_GT_GT;
	v->a[24215] = anon_sym_LT_AMP;
	v->a[24216] = anon_sym_GT_AMP;
	v->a[24217] = anon_sym_GT_PIPE;
	v->a[24218] = anon_sym_LT_AMP_DASH;
	v->a[24219] = anon_sym_GT_AMP_DASH;
	small_parse_table_1211(v);
}

void	small_parse_table_1211(t_small_parse_table_array *v)
{
	v->a[24220] = anon_sym_LT_LT;
	v->a[24221] = anon_sym_LT_LT_DASH;
	v->a[24222] = aux_sym_heredoc_redirect_token1;
	v->a[24223] = anon_sym_AMP;
	v->a[24224] = anon_sym_SEMI;
	v->a[24225] = 12;
	v->a[24226] = actions(3);
	v->a[24227] = 1;
	v->a[24228] = sym_comment;
	v->a[24229] = actions(559);
	v->a[24230] = 1;
	v->a[24231] = sym_file_descriptor;
	v->a[24232] = actions(785);
	v->a[24233] = 1;
	v->a[24234] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24235] = actions(788);
	v->a[24236] = 1;
	v->a[24237] = anon_sym_DOLLAR;
	v->a[24238] = actions(791);
	v->a[24239] = 1;
	small_parse_table_1212(v);
}

void	small_parse_table_1212(t_small_parse_table_array *v)
{
	v->a[24240] = anon_sym_DQUOTE;
	v->a[24241] = actions(794);
	v->a[24242] = 1;
	v->a[24243] = anon_sym_DOLLAR_LBRACE;
	v->a[24244] = actions(797);
	v->a[24245] = 1;
	v->a[24246] = anon_sym_DOLLAR_LPAREN;
	v->a[24247] = actions(800);
	v->a[24248] = 1;
	v->a[24249] = anon_sym_BQUOTE;
	v->a[24250] = state(237);
	v->a[24251] = 2;
	v->a[24252] = sym_concatenation;
	v->a[24253] = aux_sym_for_statement_repeat1;
	v->a[24254] = actions(782);
	v->a[24255] = 3;
	v->a[24256] = sym_raw_string;
	v->a[24257] = sym_number;
	v->a[24258] = sym_word;
	v->a[24259] = state(517);
	small_parse_table_1213(v);
}

void	small_parse_table_1213(t_small_parse_table_array *v)
{
	v->a[24260] = 5;
	v->a[24261] = sym_arithmetic_expansion;
	v->a[24262] = sym_string;
	v->a[24263] = sym_simple_expansion;
	v->a[24264] = sym_expansion;
	v->a[24265] = sym_command_substitution;
	v->a[24266] = actions(564);
	v->a[24267] = 20;
	v->a[24268] = anon_sym_esac;
	v->a[24269] = anon_sym_PIPE;
	v->a[24270] = anon_sym_SEMI_SEMI;
	v->a[24271] = anon_sym_AMP_AMP;
	v->a[24272] = anon_sym_PIPE_PIPE;
	v->a[24273] = anon_sym_LT;
	v->a[24274] = anon_sym_GT;
	v->a[24275] = anon_sym_GT_GT;
	v->a[24276] = anon_sym_AMP_GT;
	v->a[24277] = anon_sym_AMP_GT_GT;
	v->a[24278] = anon_sym_LT_AMP;
	v->a[24279] = anon_sym_GT_AMP;
	small_parse_table_1214(v);
}

void	small_parse_table_1214(t_small_parse_table_array *v)
{
	v->a[24280] = anon_sym_GT_PIPE;
	v->a[24281] = anon_sym_LT_AMP_DASH;
	v->a[24282] = anon_sym_GT_AMP_DASH;
	v->a[24283] = anon_sym_LT_LT;
	v->a[24284] = anon_sym_LT_LT_DASH;
	v->a[24285] = aux_sym_heredoc_redirect_token1;
	v->a[24286] = anon_sym_AMP;
	v->a[24287] = anon_sym_SEMI;
	v->a[24288] = 9;
	v->a[24289] = actions(3);
	v->a[24290] = 1;
	v->a[24291] = sym_comment;
	v->a[24292] = actions(803);
	v->a[24293] = 1;
	v->a[24294] = ts_builtin_sym_end;
	v->a[24295] = actions(807);
	v->a[24296] = 1;
	v->a[24297] = anon_sym_PIPE;
	v->a[24298] = actions(811);
	v->a[24299] = 1;
	small_parse_table_1215(v);
}

/* EOF small_parse_table_242.c */
