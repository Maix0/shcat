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
	v->a[26100] = 1;
	v->a[26101] = sym__bare_dollar;
	v->a[26102] = actions(505);
	v->a[26103] = 1;
	v->a[26104] = sym_file_descriptor;
	v->a[26105] = state(253);
	v->a[26106] = 1;
	v->a[26107] = aux_sym_command_repeat2;
	v->a[26108] = state(674);
	v->a[26109] = 1;
	v->a[26110] = sym_concatenation;
	v->a[26111] = actions(493);
	v->a[26112] = 3;
	v->a[26113] = sym_raw_string;
	v->a[26114] = sym_number;
	v->a[26115] = sym_word;
	v->a[26116] = state(495);
	v->a[26117] = 5;
	v->a[26118] = sym_arithmetic_expansion;
	v->a[26119] = sym_string;
	small_parse_table_1306(v);
}

void	small_parse_table_1306(t_small_parse_table_array *v)
{
	v->a[26120] = sym_simple_expansion;
	v->a[26121] = sym_expansion;
	v->a[26122] = sym_command_substitution;
	v->a[26123] = actions(503);
	v->a[26124] = 16;
	v->a[26125] = anon_sym_PIPE;
	v->a[26126] = anon_sym_SEMI_SEMI;
	v->a[26127] = anon_sym_AMP_AMP;
	v->a[26128] = anon_sym_PIPE_PIPE;
	v->a[26129] = anon_sym_LT;
	v->a[26130] = anon_sym_GT;
	v->a[26131] = anon_sym_GT_GT;
	v->a[26132] = anon_sym_LT_AMP;
	v->a[26133] = anon_sym_GT_AMP;
	v->a[26134] = anon_sym_GT_PIPE;
	v->a[26135] = anon_sym_LT_GT;
	v->a[26136] = anon_sym_LT_LT;
	v->a[26137] = anon_sym_LT_LT_DASH;
	v->a[26138] = aux_sym_heredoc_redirect_token1;
	v->a[26139] = anon_sym_BQUOTE;
	small_parse_table_1307(v);
}

void	small_parse_table_1307(t_small_parse_table_array *v)
{
	v->a[26140] = anon_sym_SEMI;
	v->a[26141] = 17;
	v->a[26142] = actions(501);
	v->a[26143] = 1;
	v->a[26144] = sym_comment;
	v->a[26145] = actions(650);
	v->a[26146] = 1;
	v->a[26147] = anon_sym_PIPE;
	v->a[26148] = actions(652);
	v->a[26149] = 1;
	v->a[26150] = anon_sym_AMP_AMP;
	v->a[26151] = actions(654);
	v->a[26152] = 1;
	v->a[26153] = anon_sym_PIPE_PIPE;
	v->a[26154] = actions(664);
	v->a[26155] = 1;
	v->a[26156] = anon_sym_CARET;
	v->a[26157] = actions(666);
	v->a[26158] = 1;
	v->a[26159] = anon_sym_AMP;
	small_parse_table_1308(v);
}

void	small_parse_table_1308(t_small_parse_table_array *v)
{
	v->a[26160] = actions(721);
	v->a[26161] = 1;
	v->a[26162] = anon_sym_QMARK;
	v->a[26163] = actions(723);
	v->a[26164] = 1;
	v->a[26165] = anon_sym_EQ;
	v->a[26166] = actions(976);
	v->a[26167] = 1;
	v->a[26168] = anon_sym_RPAREN_RPAREN;
	v->a[26169] = actions(499);
	v->a[26170] = 2;
	v->a[26171] = anon_sym_PLUS_PLUS2;
	v->a[26172] = anon_sym_DASH_DASH2;
	v->a[26173] = actions(658);
	v->a[26174] = 2;
	v->a[26175] = anon_sym_LT;
	v->a[26176] = anon_sym_GT;
	v->a[26177] = actions(660);
	v->a[26178] = 2;
	v->a[26179] = anon_sym_GT_GT;
	small_parse_table_1309(v);
}

void	small_parse_table_1309(t_small_parse_table_array *v)
{
	v->a[26180] = anon_sym_LT_LT;
	v->a[26181] = actions(668);
	v->a[26182] = 2;
	v->a[26183] = anon_sym_EQ_EQ;
	v->a[26184] = anon_sym_BANG_EQ;
	v->a[26185] = actions(670);
	v->a[26186] = 2;
	v->a[26187] = anon_sym_LT_EQ;
	v->a[26188] = anon_sym_GT_EQ;
	v->a[26189] = actions(672);
	v->a[26190] = 2;
	v->a[26191] = anon_sym_PLUS;
	v->a[26192] = anon_sym_DASH;
	v->a[26193] = actions(674);
	v->a[26194] = 3;
	v->a[26195] = anon_sym_STAR;
	v->a[26196] = anon_sym_SLASH;
	v->a[26197] = anon_sym_PERCENT;
	v->a[26198] = actions(802);
	v->a[26199] = 10;
	small_parse_table_1310(v);
}

/* EOF small_parse_table_261.c */
