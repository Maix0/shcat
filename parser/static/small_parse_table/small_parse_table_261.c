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
	v->a[26100] = actions(746);
	v->a[26101] = 1;
	v->a[26102] = sym_file_descriptor;
	v->a[26103] = actions(842);
	v->a[26104] = 1;
	v->a[26105] = anon_sym_BQUOTE;
	v->a[26106] = actions(992);
	v->a[26107] = 1;
	v->a[26108] = sym_variable_name;
	v->a[26109] = state(800);
	v->a[26110] = 1;
	v->a[26111] = sym_terminator;
	v->a[26112] = actions(744);
	v->a[26113] = 2;
	v->a[26114] = anon_sym_LT_LT;
	v->a[26115] = anon_sym_LT_LT_DASH;
	v->a[26116] = actions(990);
	v->a[26117] = 2;
	v->a[26118] = anon_sym_AMP_AMP;
	v->a[26119] = anon_sym_PIPE_PIPE;
	small_parse_table_1306(v);
}

void	small_parse_table_1306(t_small_parse_table_array *v)
{
	v->a[26120] = state(1030);
	v->a[26121] = 2;
	v->a[26122] = sym_variable_assignment;
	v->a[26123] = aux_sym__variable_assignments_repeat1;
	v->a[26124] = state(1059);
	v->a[26125] = 3;
	v->a[26126] = sym_file_redirect;
	v->a[26127] = sym_heredoc_redirect;
	v->a[26128] = aux_sym_redirected_statement_repeat1;
	v->a[26129] = actions(740);
	v->a[26130] = 4;
	v->a[26131] = anon_sym_SEMI_SEMI;
	v->a[26132] = aux_sym_heredoc_redirect_token1;
	v->a[26133] = anon_sym_AMP;
	v->a[26134] = anon_sym_SEMI;
	v->a[26135] = actions(734);
	v->a[26136] = 15;
	v->a[26137] = anon_sym_LT;
	v->a[26138] = anon_sym_GT;
	v->a[26139] = anon_sym_GT_GT;
	small_parse_table_1307(v);
}

void	small_parse_table_1307(t_small_parse_table_array *v)
{
	v->a[26140] = anon_sym_LT_AMP;
	v->a[26141] = anon_sym_GT_AMP;
	v->a[26142] = anon_sym_GT_PIPE;
	v->a[26143] = anon_sym_LT_GT;
	v->a[26144] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26145] = anon_sym_DOLLAR;
	v->a[26146] = anon_sym_DQUOTE;
	v->a[26147] = sym_raw_string;
	v->a[26148] = sym_number;
	v->a[26149] = anon_sym_DOLLAR_LBRACE;
	v->a[26150] = anon_sym_DOLLAR_LPAREN;
	v->a[26151] = sym_word;
	v->a[26152] = 17;
	v->a[26153] = actions(664);
	v->a[26154] = 1;
	v->a[26155] = sym_comment;
	v->a[26156] = actions(702);
	v->a[26157] = 1;
	v->a[26158] = anon_sym_CARET;
	v->a[26159] = actions(704);
	small_parse_table_1308(v);
}

void	small_parse_table_1308(t_small_parse_table_array *v)
{
	v->a[26160] = 1;
	v->a[26161] = anon_sym_AMP;
	v->a[26162] = actions(710);
	v->a[26163] = 1;
	v->a[26164] = anon_sym_PIPE;
	v->a[26165] = actions(712);
	v->a[26166] = 1;
	v->a[26167] = anon_sym_AMP_AMP;
	v->a[26168] = actions(714);
	v->a[26169] = 1;
	v->a[26170] = anon_sym_PIPE_PIPE;
	v->a[26171] = actions(716);
	v->a[26172] = 1;
	v->a[26173] = anon_sym_QMARK;
	v->a[26174] = actions(718);
	v->a[26175] = 1;
	v->a[26176] = anon_sym_EQ;
	v->a[26177] = actions(995);
	v->a[26178] = 1;
	v->a[26179] = anon_sym_RPAREN_RPAREN;
	small_parse_table_1309(v);
}

void	small_parse_table_1309(t_small_parse_table_array *v)
{
	v->a[26180] = actions(684);
	v->a[26181] = 2;
	v->a[26182] = anon_sym_GT_GT;
	v->a[26183] = anon_sym_LT_LT;
	v->a[26184] = actions(686);
	v->a[26185] = 2;
	v->a[26186] = anon_sym_PLUS;
	v->a[26187] = anon_sym_DASH;
	v->a[26188] = actions(690);
	v->a[26189] = 2;
	v->a[26190] = anon_sym_PLUS_PLUS2;
	v->a[26191] = anon_sym_DASH_DASH2;
	v->a[26192] = actions(700);
	v->a[26193] = 2;
	v->a[26194] = anon_sym_LT;
	v->a[26195] = anon_sym_GT;
	v->a[26196] = actions(706);
	v->a[26197] = 2;
	v->a[26198] = anon_sym_EQ_EQ;
	v->a[26199] = anon_sym_BANG_EQ;
	small_parse_table_1310(v);
}

/* EOF small_parse_table_261.c */
