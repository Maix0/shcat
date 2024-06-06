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
	v->a[26101] = sym__brace_start;
	v->a[26102] = state(1679);
	v->a[26103] = 1;
	v->a[26104] = aux_sym__literal_repeat1;
	v->a[26105] = actions(3217);
	v->a[26106] = 2;
	v->a[26107] = sym_test_operator;
	v->a[26108] = sym_raw_string;
	v->a[26109] = state(630);
	v->a[26110] = 2;
	v->a[26111] = sym_concatenation;
	v->a[26112] = aux_sym_for_statement_repeat1;
	v->a[26113] = actions(1285);
	v->a[26114] = 7;
	v->a[26115] = anon_sym_PIPE;
	v->a[26116] = anon_sym_LT;
	v->a[26117] = anon_sym_GT;
	v->a[26118] = anon_sym_AMP_GT;
	v->a[26119] = anon_sym_LT_AMP;
	small_parse_table_1306(v);
}

void	small_parse_table_1306(t_small_parse_table_array *v)
{
	v->a[26120] = anon_sym_GT_AMP;
	v->a[26121] = anon_sym_LT_LT;
	v->a[26122] = state(1566);
	v->a[26123] = 7;
	v->a[26124] = sym_arithmetic_expansion;
	v->a[26125] = sym_brace_expression;
	v->a[26126] = sym_string;
	v->a[26127] = sym_number;
	v->a[26128] = sym_simple_expansion;
	v->a[26129] = sym_expansion;
	v->a[26130] = sym_command_substitution;
	v->a[26131] = actions(1287);
	v->a[26132] = 10;
	v->a[26133] = sym_file_descriptor;
	v->a[26134] = anon_sym_PIPE_AMP;
	v->a[26135] = anon_sym_AMP_AMP;
	v->a[26136] = anon_sym_PIPE_PIPE;
	v->a[26137] = anon_sym_GT_GT;
	v->a[26138] = anon_sym_AMP_GT_GT;
	v->a[26139] = anon_sym_GT_PIPE;
	small_parse_table_1307(v);
}

void	small_parse_table_1307(t_small_parse_table_array *v)
{
	v->a[26140] = anon_sym_LT_AMP_DASH;
	v->a[26141] = anon_sym_GT_AMP_DASH;
	v->a[26142] = anon_sym_LT_LT_DASH;
	v->a[26143] = 3;
	v->a[26144] = actions(3);
	v->a[26145] = 1;
	v->a[26146] = sym_comment;
	v->a[26147] = actions(3024);
	v->a[26148] = 6;
	v->a[26149] = sym_file_descriptor;
	v->a[26150] = sym__concat;
	v->a[26151] = sym_variable_name;
	v->a[26152] = sym_test_operator;
	v->a[26153] = sym__brace_start;
	v->a[26154] = aux_sym_heredoc_redirect_token1;
	v->a[26155] = actions(3022);
	v->a[26156] = 35;
	v->a[26157] = anon_sym_esac;
	v->a[26158] = anon_sym_PIPE;
	v->a[26159] = anon_sym_SEMI_SEMI;
	small_parse_table_1308(v);
}

void	small_parse_table_1308(t_small_parse_table_array *v)
{
	v->a[26160] = anon_sym_SEMI_AMP;
	v->a[26161] = anon_sym_SEMI_SEMI_AMP;
	v->a[26162] = anon_sym_PIPE_AMP;
	v->a[26163] = anon_sym_AMP_AMP;
	v->a[26164] = anon_sym_PIPE_PIPE;
	v->a[26165] = anon_sym_LT;
	v->a[26166] = anon_sym_GT;
	v->a[26167] = anon_sym_GT_GT;
	v->a[26168] = anon_sym_AMP_GT;
	v->a[26169] = anon_sym_AMP_GT_GT;
	v->a[26170] = anon_sym_LT_AMP;
	v->a[26171] = anon_sym_GT_AMP;
	v->a[26172] = anon_sym_GT_PIPE;
	v->a[26173] = anon_sym_LT_AMP_DASH;
	v->a[26174] = anon_sym_GT_AMP_DASH;
	v->a[26175] = anon_sym_LT_LT;
	v->a[26176] = anon_sym_LT_LT_DASH;
	v->a[26177] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26178] = anon_sym_AMP;
	v->a[26179] = aux_sym_concatenation_token1;
	small_parse_table_1309(v);
}

void	small_parse_table_1309(t_small_parse_table_array *v)
{
	v->a[26180] = anon_sym_DOLLAR;
	v->a[26181] = sym__special_character;
	v->a[26182] = anon_sym_DQUOTE;
	v->a[26183] = sym_raw_string;
	v->a[26184] = aux_sym_number_token1;
	v->a[26185] = aux_sym_number_token2;
	v->a[26186] = anon_sym_DOLLAR_LBRACE;
	v->a[26187] = anon_sym_DOLLAR_LPAREN;
	v->a[26188] = anon_sym_BQUOTE;
	v->a[26189] = anon_sym_DOLLAR_BQUOTE;
	v->a[26190] = sym_word;
	v->a[26191] = anon_sym_SEMI;
	v->a[26192] = 8;
	v->a[26193] = actions(3);
	v->a[26194] = 1;
	v->a[26195] = sym_comment;
	v->a[26196] = actions(3241);
	v->a[26197] = 1;
	v->a[26198] = sym_variable_name;
	v->a[26199] = actions(2526);
	small_parse_table_1310(v);
}

/* EOF small_parse_table_261.c */
