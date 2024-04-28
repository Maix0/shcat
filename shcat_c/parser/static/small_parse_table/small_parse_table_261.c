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
	v->a[26100] = anon_sym_LT_LT_DASH;
	v->a[26101] = anon_sym_LT_LT_LT;
	v->a[26102] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26103] = anon_sym_DOLLAR_LBRACK;
	v->a[26104] = anon_sym_DOLLAR;
	v->a[26105] = sym__special_character;
	v->a[26106] = anon_sym_DQUOTE;
	v->a[26107] = sym_raw_string;
	v->a[26108] = sym_ansi_c_string;
	v->a[26109] = aux_sym_number_token1;
	v->a[26110] = aux_sym_number_token2;
	v->a[26111] = anon_sym_DOLLAR_LBRACE;
	v->a[26112] = anon_sym_DOLLAR_LPAREN;
	v->a[26113] = anon_sym_BQUOTE;
	v->a[26114] = anon_sym_DOLLAR_BQUOTE;
	v->a[26115] = anon_sym_LT_LPAREN;
	v->a[26116] = anon_sym_GT_LPAREN;
	v->a[26117] = sym_word;
	v->a[26118] = 13;
	v->a[26119] = actions(3);
	small_parse_table_1306(v);
}

void	small_parse_table_1306(t_small_parse_table_array *v)
{
	v->a[26120] = 1;
	v->a[26121] = sym_comment;
	v->a[26122] = actions(4259);
	v->a[26123] = 1;
	v->a[26124] = aux_sym_heredoc_redirect_token1;
	v->a[26125] = actions(4263);
	v->a[26126] = 1;
	v->a[26127] = sym_variable_name;
	v->a[26128] = state(6726);
	v->a[26129] = 1;
	v->a[26130] = sym_subscript;
	v->a[26131] = actions(4249);
	v->a[26132] = 2;
	v->a[26133] = anon_sym_SEMI;
	v->a[26134] = anon_sym_AMP;
	v->a[26135] = actions(4251);
	v->a[26136] = 2;
	v->a[26137] = anon_sym_PIPE_PIPE;
	v->a[26138] = anon_sym_AMP_AMP;
	v->a[26139] = actions(4253);
	small_parse_table_1307(v);
}

void	small_parse_table_1307(t_small_parse_table_array *v)
{
	v->a[26140] = 2;
	v->a[26141] = anon_sym_PIPE;
	v->a[26142] = anon_sym_PIPE_AMP;
	v->a[26143] = actions(4255);
	v->a[26144] = 2;
	v->a[26145] = anon_sym_LT_LT;
	v->a[26146] = anon_sym_LT_LT_DASH;
	v->a[26147] = state(4237);
	v->a[26148] = 2;
	v->a[26149] = sym_variable_assignment;
	v->a[26150] = aux_sym_variable_assignments_repeat1;
	v->a[26151] = actions(4261);
	v->a[26152] = 3;
	v->a[26153] = sym_file_descriptor;
	v->a[26154] = sym_test_operator;
	v->a[26155] = sym__brace_start;
	v->a[26156] = state(4283);
	v->a[26157] = 3;
	v->a[26158] = sym_file_redirect;
	v->a[26159] = sym_heredoc_redirect;
	small_parse_table_1308(v);
}

void	small_parse_table_1308(t_small_parse_table_array *v)
{
	v->a[26160] = aux_sym_redirected_statement_repeat1;
	v->a[26161] = actions(4257);
	v->a[26162] = 4;
	v->a[26163] = anon_sym_esac;
	v->a[26164] = anon_sym_SEMI_SEMI;
	v->a[26165] = anon_sym_SEMI_AMP;
	v->a[26166] = anon_sym_SEMI_SEMI_AMP;
	v->a[26167] = actions(4247);
	v->a[26168] = 28;
	v->a[26169] = anon_sym_LPAREN_LPAREN;
	v->a[26170] = anon_sym_LT;
	v->a[26171] = anon_sym_GT;
	v->a[26172] = anon_sym_GT_GT;
	v->a[26173] = anon_sym_AMP_GT;
	v->a[26174] = anon_sym_AMP_GT_GT;
	v->a[26175] = anon_sym_LT_AMP;
	v->a[26176] = anon_sym_GT_AMP;
	v->a[26177] = anon_sym_GT_PIPE;
	v->a[26178] = anon_sym_LT_AMP_DASH;
	v->a[26179] = anon_sym_GT_AMP_DASH;
	small_parse_table_1309(v);
}

void	small_parse_table_1309(t_small_parse_table_array *v)
{
	v->a[26180] = anon_sym_LT_LT_LT;
	v->a[26181] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26182] = anon_sym_DOLLAR_LBRACK;
	v->a[26183] = anon_sym_DOLLAR;
	v->a[26184] = sym__special_character;
	v->a[26185] = anon_sym_DQUOTE;
	v->a[26186] = sym_raw_string;
	v->a[26187] = sym_ansi_c_string;
	v->a[26188] = aux_sym_number_token1;
	v->a[26189] = aux_sym_number_token2;
	v->a[26190] = anon_sym_DOLLAR_LBRACE;
	v->a[26191] = anon_sym_DOLLAR_LPAREN;
	v->a[26192] = anon_sym_BQUOTE;
	v->a[26193] = anon_sym_DOLLAR_BQUOTE;
	v->a[26194] = anon_sym_LT_LPAREN;
	v->a[26195] = anon_sym_GT_LPAREN;
	v->a[26196] = sym_word;
	v->a[26197] = 6;
	v->a[26198] = actions(3);
	v->a[26199] = 1;
	small_parse_table_1310(v);
}

/* EOF small_parse_table_261.c */
