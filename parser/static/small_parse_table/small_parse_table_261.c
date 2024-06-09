/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_261.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1305(t_small_parse_table_array *v)
{
	v->a[26100] = anon_sym_PIPE_PIPE;
	v->a[26101] = anon_sym_LT;
	v->a[26102] = anon_sym_GT;
	v->a[26103] = anon_sym_GT_GT;
	v->a[26104] = anon_sym_AMP_GT;
	v->a[26105] = anon_sym_AMP_GT_GT;
	v->a[26106] = anon_sym_LT_AMP;
	v->a[26107] = anon_sym_GT_AMP;
	v->a[26108] = anon_sym_GT_PIPE;
	v->a[26109] = anon_sym_LT_AMP_DASH;
	v->a[26110] = anon_sym_GT_AMP_DASH;
	v->a[26111] = anon_sym_LT_LT;
	v->a[26112] = anon_sym_LT_LT_DASH;
	v->a[26113] = aux_sym_heredoc_redirect_token1;
	v->a[26114] = anon_sym_AMP;
	v->a[26115] = anon_sym_SEMI;
	v->a[26116] = 18;
	v->a[26117] = actions(3);
	v->a[26118] = 1;
	v->a[26119] = sym_comment;
	small_parse_table_1306(v);
}

void	small_parse_table_1306(t_small_parse_table_array *v)
{
	v->a[26120] = actions(17);
	v->a[26121] = 1;
	v->a[26122] = anon_sym_LPAREN;
	v->a[26123] = actions(473);
	v->a[26124] = 1;
	v->a[26125] = sym_file_descriptor;
	v->a[26126] = actions(485);
	v->a[26127] = 1;
	v->a[26128] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26129] = actions(487);
	v->a[26130] = 1;
	v->a[26131] = anon_sym_DOLLAR;
	v->a[26132] = actions(489);
	v->a[26133] = 1;
	v->a[26134] = anon_sym_DQUOTE;
	v->a[26135] = actions(491);
	v->a[26136] = 1;
	v->a[26137] = aux_sym_number_token1;
	v->a[26138] = actions(493);
	v->a[26139] = 1;
	small_parse_table_1307(v);
}

void	small_parse_table_1307(t_small_parse_table_array *v)
{
	v->a[26140] = aux_sym_number_token2;
	v->a[26141] = actions(495);
	v->a[26142] = 1;
	v->a[26143] = anon_sym_DOLLAR_LBRACE;
	v->a[26144] = actions(497);
	v->a[26145] = 1;
	v->a[26146] = anon_sym_DOLLAR_LPAREN;
	v->a[26147] = actions(499);
	v->a[26148] = 1;
	v->a[26149] = anon_sym_BQUOTE;
	v->a[26150] = actions(501);
	v->a[26151] = 1;
	v->a[26152] = sym__bare_dollar;
	v->a[26153] = state(312);
	v->a[26154] = 1;
	v->a[26155] = aux_sym_command_repeat2;
	v->a[26156] = state(753);
	v->a[26157] = 1;
	v->a[26158] = sym_concatenation;
	v->a[26159] = state(1206);
	small_parse_table_1308(v);
}

void	small_parse_table_1308(t_small_parse_table_array *v)
{
	v->a[26160] = 1;
	v->a[26161] = sym_subshell;
	v->a[26162] = actions(966);
	v->a[26163] = 2;
	v->a[26164] = sym_raw_string;
	v->a[26165] = sym_word;
	v->a[26166] = state(759);
	v->a[26167] = 6;
	v->a[26168] = sym_arithmetic_expansion;
	v->a[26169] = sym_string;
	v->a[26170] = sym_number;
	v->a[26171] = sym_simple_expansion;
	v->a[26172] = sym_expansion;
	v->a[26173] = sym_command_substitution;
	v->a[26174] = actions(455);
	v->a[26175] = 16;
	v->a[26176] = anon_sym_PIPE;
	v->a[26177] = anon_sym_AMP_AMP;
	v->a[26178] = anon_sym_PIPE_PIPE;
	v->a[26179] = anon_sym_LT;
	small_parse_table_1309(v);
}

void	small_parse_table_1309(t_small_parse_table_array *v)
{
	v->a[26180] = anon_sym_GT;
	v->a[26181] = anon_sym_GT_GT;
	v->a[26182] = anon_sym_AMP_GT;
	v->a[26183] = anon_sym_AMP_GT_GT;
	v->a[26184] = anon_sym_LT_AMP;
	v->a[26185] = anon_sym_GT_AMP;
	v->a[26186] = anon_sym_GT_PIPE;
	v->a[26187] = anon_sym_LT_AMP_DASH;
	v->a[26188] = anon_sym_GT_AMP_DASH;
	v->a[26189] = anon_sym_LT_LT;
	v->a[26190] = anon_sym_LT_LT_DASH;
	v->a[26191] = aux_sym_heredoc_redirect_token1;
	v->a[26192] = 13;
	v->a[26193] = actions(3);
	v->a[26194] = 1;
	v->a[26195] = sym_comment;
	v->a[26196] = actions(565);
	v->a[26197] = 1;
	v->a[26198] = sym_file_descriptor;
	v->a[26199] = actions(761);
	small_parse_table_1310(v);
}

/* EOF small_parse_table_261.c */
