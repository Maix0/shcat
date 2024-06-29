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
	v->a[26100] = anon_sym_GT_AMP_DASH;
	v->a[26101] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26102] = anon_sym_DOLLAR;
	v->a[26103] = anon_sym_DQUOTE;
	v->a[26104] = sym_raw_string;
	v->a[26105] = sym_number;
	v->a[26106] = anon_sym_DOLLAR_LBRACE;
	v->a[26107] = anon_sym_DOLLAR_LPAREN;
	v->a[26108] = anon_sym_BQUOTE;
	v->a[26109] = sym_word;
	v->a[26110] = 12;
	v->a[26111] = actions(3);
	v->a[26112] = 1;
	v->a[26113] = sym_comment;
	v->a[26114] = actions(904);
	v->a[26115] = 1;
	v->a[26116] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26117] = actions(906);
	v->a[26118] = 1;
	v->a[26119] = anon_sym_DOLLAR;
	small_parse_table_1306(v);
}

void	small_parse_table_1306(t_small_parse_table_array *v)
{
	v->a[26120] = actions(908);
	v->a[26121] = 1;
	v->a[26122] = anon_sym_DQUOTE;
	v->a[26123] = actions(910);
	v->a[26124] = 1;
	v->a[26125] = anon_sym_DOLLAR_LBRACE;
	v->a[26126] = actions(912);
	v->a[26127] = 1;
	v->a[26128] = anon_sym_DOLLAR_LPAREN;
	v->a[26129] = actions(914);
	v->a[26130] = 1;
	v->a[26131] = anon_sym_BQUOTE;
	v->a[26132] = state(1205);
	v->a[26133] = 1;
	v->a[26134] = sym_concatenation;
	v->a[26135] = actions(754);
	v->a[26136] = 2;
	v->a[26137] = sym_file_descriptor;
	v->a[26138] = ts_builtin_sym_end;
	v->a[26139] = actions(929);
	small_parse_table_1307(v);
}

void	small_parse_table_1307(t_small_parse_table_array *v)
{
	v->a[26140] = 3;
	v->a[26141] = sym_raw_string;
	v->a[26142] = sym_number;
	v->a[26143] = sym_word;
	v->a[26144] = state(1134);
	v->a[26145] = 5;
	v->a[26146] = sym_arithmetic_expansion;
	v->a[26147] = sym_string;
	v->a[26148] = sym_simple_expansion;
	v->a[26149] = sym_expansion;
	v->a[26150] = sym_command_substitution;
	v->a[26151] = actions(756);
	v->a[26152] = 19;
	v->a[26153] = anon_sym_PIPE;
	v->a[26154] = anon_sym_SEMI_SEMI;
	v->a[26155] = anon_sym_AMP_AMP;
	v->a[26156] = anon_sym_PIPE_PIPE;
	v->a[26157] = anon_sym_LT;
	v->a[26158] = anon_sym_GT;
	v->a[26159] = anon_sym_GT_GT;
	small_parse_table_1308(v);
}

void	small_parse_table_1308(t_small_parse_table_array *v)
{
	v->a[26160] = anon_sym_AMP_GT;
	v->a[26161] = anon_sym_AMP_GT_GT;
	v->a[26162] = anon_sym_LT_AMP;
	v->a[26163] = anon_sym_GT_AMP;
	v->a[26164] = anon_sym_GT_PIPE;
	v->a[26165] = anon_sym_LT_AMP_DASH;
	v->a[26166] = anon_sym_GT_AMP_DASH;
	v->a[26167] = anon_sym_LT_LT;
	v->a[26168] = anon_sym_LT_LT_DASH;
	v->a[26169] = aux_sym_heredoc_redirect_token1;
	v->a[26170] = anon_sym_AMP;
	v->a[26171] = anon_sym_SEMI;
	v->a[26172] = 20;
	v->a[26173] = actions(3);
	v->a[26174] = 1;
	v->a[26175] = sym_comment;
	v->a[26176] = actions(859);
	v->a[26177] = 1;
	v->a[26178] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26179] = actions(861);
	small_parse_table_1309(v);
}

void	small_parse_table_1309(t_small_parse_table_array *v)
{
	v->a[26180] = 1;
	v->a[26181] = anon_sym_DOLLAR;
	v->a[26182] = actions(863);
	v->a[26183] = 1;
	v->a[26184] = anon_sym_DQUOTE;
	v->a[26185] = actions(865);
	v->a[26186] = 1;
	v->a[26187] = anon_sym_DOLLAR_LBRACE;
	v->a[26188] = actions(867);
	v->a[26189] = 1;
	v->a[26190] = anon_sym_DOLLAR_LPAREN;
	v->a[26191] = actions(869);
	v->a[26192] = 1;
	v->a[26193] = anon_sym_BQUOTE;
	v->a[26194] = actions(871);
	v->a[26195] = 1;
	v->a[26196] = sym_file_descriptor;
	v->a[26197] = actions(931);
	v->a[26198] = 1;
	v->a[26199] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1310(v);
}

/* EOF small_parse_table_261.c */
