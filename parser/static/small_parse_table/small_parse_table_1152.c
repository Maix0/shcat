/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1152.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5760(t_small_parse_table_array *v)
{
	v->a[115200] = aux_sym_number_token2;
	v->a[115201] = actions(1157);
	v->a[115202] = 1;
	v->a[115203] = anon_sym_DOLLAR_LBRACE;
	v->a[115204] = actions(1159);
	v->a[115205] = 1;
	v->a[115206] = anon_sym_DOLLAR_LPAREN;
	v->a[115207] = actions(1163);
	v->a[115208] = 1;
	v->a[115209] = anon_sym_DOLLAR_BQUOTE;
	v->a[115210] = actions(1169);
	v->a[115211] = 1;
	v->a[115212] = sym__brace_start;
	v->a[115213] = actions(1187);
	v->a[115214] = 1;
	v->a[115215] = sym_word;
	v->a[115216] = actions(1189);
	v->a[115217] = 1;
	v->a[115218] = anon_sym_BANG;
	v->a[115219] = actions(1195);
	small_parse_table_5761(v);
}

void	small_parse_table_5761(t_small_parse_table_array *v)
{
	v->a[115220] = 1;
	v->a[115221] = anon_sym_TILDE;
	v->a[115222] = actions(1201);
	v->a[115223] = 1;
	v->a[115224] = sym_test_operator;
	v->a[115225] = actions(3060);
	v->a[115226] = 1;
	v->a[115227] = anon_sym_BQUOTE;
	v->a[115228] = actions(5779);
	v->a[115229] = 1;
	v->a[115230] = sym__special_character;
	v->a[115231] = state(2717);
	v->a[115232] = 1;
	v->a[115233] = aux_sym__literal_repeat1;
	v->a[115234] = state(3013);
	v->a[115235] = 1;
	v->a[115236] = sym__expression;
	v->a[115237] = actions(1129);
	v->a[115238] = 2;
	v->a[115239] = anon_sym_LPAREN_LPAREN;
	small_parse_table_5762(v);
}

void	small_parse_table_5762(t_small_parse_table_array *v)
{
	v->a[115240] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115241] = actions(1165);
	v->a[115242] = 2;
	v->a[115243] = anon_sym_LT_LPAREN;
	v->a[115244] = anon_sym_GT_LPAREN;
	v->a[115245] = actions(1191);
	v->a[115246] = 2;
	v->a[115247] = anon_sym_PLUS_PLUS2;
	v->a[115248] = anon_sym_DASH_DASH2;
	v->a[115249] = actions(1193);
	v->a[115250] = 2;
	v->a[115251] = anon_sym_DASH2;
	v->a[115252] = anon_sym_PLUS2;
	v->a[115253] = actions(1199);
	v->a[115254] = 2;
	v->a[115255] = sym_raw_string;
	v->a[115256] = sym_ansi_c_string;
	v->a[115257] = state(2594);
	v->a[115258] = 6;
	v->a[115259] = sym_binary_expression;
	small_parse_table_5763(v);
}

void	small_parse_table_5763(t_small_parse_table_array *v)
{
	v->a[115260] = sym_ternary_expression;
	v->a[115261] = sym_unary_expression;
	v->a[115262] = sym_postfix_expression;
	v->a[115263] = sym_parenthesized_expression;
	v->a[115264] = sym_concatenation;
	v->a[115265] = state(2503);
	v->a[115266] = 9;
	v->a[115267] = sym_arithmetic_expansion;
	v->a[115268] = sym_brace_expression;
	v->a[115269] = sym_string;
	v->a[115270] = sym_translated_string;
	v->a[115271] = sym_number;
	v->a[115272] = sym_simple_expansion;
	v->a[115273] = sym_expansion;
	v->a[115274] = sym_command_substitution;
	v->a[115275] = sym_process_substitution;
	v->a[115276] = 3;
	v->a[115277] = actions(3);
	v->a[115278] = 1;
	v->a[115279] = sym_comment;
	small_parse_table_5764(v);
}

void	small_parse_table_5764(t_small_parse_table_array *v)
{
	v->a[115280] = actions(4372);
	v->a[115281] = 6;
	v->a[115282] = sym_file_descriptor;
	v->a[115283] = sym_variable_name;
	v->a[115284] = sym_test_operator;
	v->a[115285] = sym__brace_start;
	v->a[115286] = ts_builtin_sym_end;
	v->a[115287] = aux_sym_heredoc_redirect_token1;
	v->a[115288] = actions(4370);
	v->a[115289] = 37;
	v->a[115290] = anon_sym_LPAREN_LPAREN;
	v->a[115291] = anon_sym_SEMI;
	v->a[115292] = anon_sym_PIPE_PIPE;
	v->a[115293] = anon_sym_AMP_AMP;
	v->a[115294] = anon_sym_PIPE;
	v->a[115295] = anon_sym_AMP;
	v->a[115296] = anon_sym_LT;
	v->a[115297] = anon_sym_GT;
	v->a[115298] = anon_sym_LT_LT;
	v->a[115299] = anon_sym_GT_GT;
	small_parse_table_5765(v);
}

/* EOF small_parse_table_1152.c */
