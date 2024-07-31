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
	v->a[26100] = aux_sym_command_repeat1;
	v->a[26101] = state(602);
	v->a[26102] = 1;
	v->a[26103] = sym_concatenation;
	v->a[26104] = state(637);
	v->a[26105] = 1;
	v->a[26106] = sym_variable_assignment;
	v->a[26107] = state(1007);
	v->a[26108] = 1;
	v->a[26109] = sym_subshell;
	v->a[26110] = state(1009);
	v->a[26111] = 1;
	v->a[26112] = sym_command;
	v->a[26113] = state(1073);
	v->a[26114] = 1;
	v->a[26115] = sym_file_redirect;
	v->a[26116] = actions(59);
	v->a[26117] = 3;
	v->a[26118] = sym_raw_string;
	v->a[26119] = sym_number;
	small_parse_table_1306(v);
}

void	small_parse_table_1306(t_small_parse_table_array *v)
{
	v->a[26120] = sym_word;
	v->a[26121] = state(425);
	v->a[26122] = 5;
	v->a[26123] = sym_arithmetic_expansion;
	v->a[26124] = sym_string;
	v->a[26125] = sym_simple_expansion;
	v->a[26126] = sym_expansion;
	v->a[26127] = sym_command_substitution;
	v->a[26128] = actions(965);
	v->a[26129] = 7;
	v->a[26130] = anon_sym_LT;
	v->a[26131] = anon_sym_GT;
	v->a[26132] = anon_sym_GT_GT;
	v->a[26133] = anon_sym_LT_AMP;
	v->a[26134] = anon_sym_GT_AMP;
	v->a[26135] = anon_sym_GT_PIPE;
	v->a[26136] = anon_sym_LT_GT;
	v->a[26137] = 12;
	v->a[26138] = actions(3);
	v->a[26139] = 1;
	small_parse_table_1307(v);
}

void	small_parse_table_1307(t_small_parse_table_array *v)
{
	v->a[26140] = sym_comment;
	v->a[26141] = actions(613);
	v->a[26142] = 1;
	v->a[26143] = sym_variable_name;
	v->a[26144] = actions(645);
	v->a[26145] = 1;
	v->a[26146] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26147] = actions(648);
	v->a[26148] = 1;
	v->a[26149] = anon_sym_DOLLAR;
	v->a[26150] = actions(651);
	v->a[26151] = 1;
	v->a[26152] = anon_sym_DQUOTE;
	v->a[26153] = actions(654);
	v->a[26154] = 1;
	v->a[26155] = anon_sym_DOLLAR_LBRACE;
	v->a[26156] = actions(657);
	v->a[26157] = 1;
	v->a[26158] = anon_sym_DOLLAR_LPAREN;
	v->a[26159] = actions(660);
	small_parse_table_1308(v);
}

void	small_parse_table_1308(t_small_parse_table_array *v)
{
	v->a[26160] = 1;
	v->a[26161] = anon_sym_BQUOTE;
	v->a[26162] = state(325);
	v->a[26163] = 2;
	v->a[26164] = sym_concatenation;
	v->a[26165] = aux_sym_for_statement_repeat1;
	v->a[26166] = actions(994);
	v->a[26167] = 3;
	v->a[26168] = sym_raw_string;
	v->a[26169] = sym_number;
	v->a[26170] = sym_word;
	v->a[26171] = state(604);
	v->a[26172] = 5;
	v->a[26173] = sym_arithmetic_expansion;
	v->a[26174] = sym_string;
	v->a[26175] = sym_simple_expansion;
	v->a[26176] = sym_expansion;
	v->a[26177] = sym_command_substitution;
	v->a[26178] = actions(618);
	v->a[26179] = 13;
	small_parse_table_1309(v);
}

void	small_parse_table_1309(t_small_parse_table_array *v)
{
	v->a[26180] = anon_sym_PIPE;
	v->a[26181] = anon_sym_AMP_AMP;
	v->a[26182] = anon_sym_PIPE_PIPE;
	v->a[26183] = anon_sym_LT;
	v->a[26184] = anon_sym_GT;
	v->a[26185] = anon_sym_GT_GT;
	v->a[26186] = anon_sym_LT_AMP;
	v->a[26187] = anon_sym_GT_AMP;
	v->a[26188] = anon_sym_GT_PIPE;
	v->a[26189] = anon_sym_LT_GT;
	v->a[26190] = anon_sym_LT_LT;
	v->a[26191] = anon_sym_LT_LT_DASH;
	v->a[26192] = aux_sym_heredoc_redirect_token1;
	v->a[26193] = 6;
	v->a[26194] = actions(3);
	v->a[26195] = 1;
	v->a[26196] = sym_comment;
	v->a[26197] = actions(987);
	v->a[26198] = 1;
	v->a[26199] = aux_sym_concatenation_token1;
	small_parse_table_1310(v);
}

/* EOF small_parse_table_261.c */
