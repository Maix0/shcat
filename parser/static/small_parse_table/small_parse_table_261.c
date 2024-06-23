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
	v->a[26100] = 8;
	v->a[26101] = actions(3);
	v->a[26102] = 1;
	v->a[26103] = sym_comment;
	v->a[26104] = actions(807);
	v->a[26105] = 1;
	v->a[26106] = anon_sym_PIPE;
	v->a[26107] = actions(811);
	v->a[26108] = 1;
	v->a[26109] = sym_file_descriptor;
	v->a[26110] = actions(852);
	v->a[26111] = 1;
	v->a[26112] = sym_variable_name;
	v->a[26113] = state(1216);
	v->a[26114] = 2;
	v->a[26115] = sym_variable_assignment;
	v->a[26116] = aux_sym__variable_assignments_repeat1;
	v->a[26117] = state(1214);
	v->a[26118] = 3;
	v->a[26119] = sym_file_redirect;
	small_parse_table_1306(v);
}

void	small_parse_table_1306(t_small_parse_table_array *v)
{
	v->a[26120] = sym_heredoc_redirect;
	v->a[26121] = aux_sym_redirected_statement_repeat1;
	v->a[26122] = actions(809);
	v->a[26123] = 9;
	v->a[26124] = anon_sym_esac;
	v->a[26125] = anon_sym_SEMI_SEMI;
	v->a[26126] = anon_sym_AMP_AMP;
	v->a[26127] = anon_sym_PIPE_PIPE;
	v->a[26128] = anon_sym_LT_LT;
	v->a[26129] = anon_sym_LT_LT_DASH;
	v->a[26130] = aux_sym_heredoc_redirect_token1;
	v->a[26131] = anon_sym_AMP;
	v->a[26132] = anon_sym_SEMI;
	v->a[26133] = actions(805);
	v->a[26134] = 19;
	v->a[26135] = anon_sym_LT;
	v->a[26136] = anon_sym_GT;
	v->a[26137] = anon_sym_GT_GT;
	v->a[26138] = anon_sym_AMP_GT;
	v->a[26139] = anon_sym_AMP_GT_GT;
	small_parse_table_1307(v);
}

void	small_parse_table_1307(t_small_parse_table_array *v)
{
	v->a[26140] = anon_sym_LT_AMP;
	v->a[26141] = anon_sym_GT_AMP;
	v->a[26142] = anon_sym_GT_PIPE;
	v->a[26143] = anon_sym_LT_AMP_DASH;
	v->a[26144] = anon_sym_GT_AMP_DASH;
	v->a[26145] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26146] = anon_sym_DOLLAR;
	v->a[26147] = anon_sym_DQUOTE;
	v->a[26148] = sym_raw_string;
	v->a[26149] = sym_number;
	v->a[26150] = anon_sym_DOLLAR_LBRACE;
	v->a[26151] = anon_sym_DOLLAR_LPAREN;
	v->a[26152] = anon_sym_BQUOTE;
	v->a[26153] = sym_word;
	v->a[26154] = 11;
	v->a[26155] = actions(3);
	v->a[26156] = 1;
	v->a[26157] = sym_comment;
	v->a[26158] = actions(807);
	v->a[26159] = 1;
	small_parse_table_1308(v);
}

void	small_parse_table_1308(t_small_parse_table_array *v)
{
	v->a[26160] = anon_sym_PIPE;
	v->a[26161] = actions(811);
	v->a[26162] = 1;
	v->a[26163] = sym_file_descriptor;
	v->a[26164] = actions(869);
	v->a[26165] = 1;
	v->a[26166] = sym_variable_name;
	v->a[26167] = actions(943);
	v->a[26168] = 1;
	v->a[26169] = anon_sym_RPAREN;
	v->a[26170] = actions(859);
	v->a[26171] = 2;
	v->a[26172] = anon_sym_AMP_AMP;
	v->a[26173] = anon_sym_PIPE_PIPE;
	v->a[26174] = actions(861);
	v->a[26175] = 2;
	v->a[26176] = anon_sym_LT_LT;
	v->a[26177] = anon_sym_LT_LT_DASH;
	v->a[26178] = state(1208);
	v->a[26179] = 2;
	small_parse_table_1309(v);
}

void	small_parse_table_1309(t_small_parse_table_array *v)
{
	v->a[26180] = sym_variable_assignment;
	v->a[26181] = aux_sym__variable_assignments_repeat1;
	v->a[26182] = state(1283);
	v->a[26183] = 3;
	v->a[26184] = sym_file_redirect;
	v->a[26185] = sym_heredoc_redirect;
	v->a[26186] = aux_sym_redirected_statement_repeat1;
	v->a[26187] = actions(945);
	v->a[26188] = 4;
	v->a[26189] = anon_sym_SEMI_SEMI;
	v->a[26190] = aux_sym_heredoc_redirect_token1;
	v->a[26191] = anon_sym_AMP;
	v->a[26192] = anon_sym_SEMI;
	v->a[26193] = actions(805);
	v->a[26194] = 19;
	v->a[26195] = anon_sym_LT;
	v->a[26196] = anon_sym_GT;
	v->a[26197] = anon_sym_GT_GT;
	v->a[26198] = anon_sym_AMP_GT;
	v->a[26199] = anon_sym_AMP_GT_GT;
	small_parse_table_1310(v);
}

/* EOF small_parse_table_261.c */
