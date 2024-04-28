/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_922.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4610(t_small_parse_table_array *v)
{
	v->a[92200] = sym_variable_name;
	v->a[92201] = sym_test_operator;
	v->a[92202] = sym__brace_start;
	v->a[92203] = ts_builtin_sym_end;
	v->a[92204] = aux_sym_heredoc_redirect_token1;
	v->a[92205] = actions(5067);
	v->a[92206] = 36;
	v->a[92207] = anon_sym_LPAREN_LPAREN;
	v->a[92208] = anon_sym_SEMI;
	v->a[92209] = anon_sym_PIPE_PIPE;
	v->a[92210] = anon_sym_AMP_AMP;
	v->a[92211] = anon_sym_PIPE;
	v->a[92212] = anon_sym_AMP;
	v->a[92213] = anon_sym_LT;
	v->a[92214] = anon_sym_GT;
	v->a[92215] = anon_sym_LT_LT;
	v->a[92216] = anon_sym_GT_GT;
	v->a[92217] = anon_sym_SEMI_SEMI;
	v->a[92218] = anon_sym_PIPE_AMP;
	v->a[92219] = anon_sym_AMP_GT;
	small_parse_table_4611(v);
}

void	small_parse_table_4611(t_small_parse_table_array *v)
{
	v->a[92220] = anon_sym_AMP_GT_GT;
	v->a[92221] = anon_sym_LT_AMP;
	v->a[92222] = anon_sym_GT_AMP;
	v->a[92223] = anon_sym_GT_PIPE;
	v->a[92224] = anon_sym_LT_AMP_DASH;
	v->a[92225] = anon_sym_GT_AMP_DASH;
	v->a[92226] = anon_sym_LT_LT_DASH;
	v->a[92227] = anon_sym_LT_LT_LT;
	v->a[92228] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[92229] = anon_sym_DOLLAR_LBRACK;
	v->a[92230] = anon_sym_DOLLAR;
	v->a[92231] = anon_sym_DQUOTE;
	v->a[92232] = sym_raw_string;
	v->a[92233] = sym_ansi_c_string;
	v->a[92234] = aux_sym_number_token1;
	v->a[92235] = aux_sym_number_token2;
	v->a[92236] = anon_sym_DOLLAR_LBRACE;
	v->a[92237] = anon_sym_DOLLAR_LPAREN;
	v->a[92238] = anon_sym_BQUOTE;
	v->a[92239] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_4612(v);
}

void	small_parse_table_4612(t_small_parse_table_array *v)
{
	v->a[92240] = anon_sym_LT_LPAREN;
	v->a[92241] = anon_sym_GT_LPAREN;
	v->a[92242] = sym_word;
	v->a[92243] = 6;
	v->a[92244] = actions(71);
	v->a[92245] = 1;
	v->a[92246] = sym_comment;
	v->a[92247] = actions(5986);
	v->a[92248] = 1;
	v->a[92249] = aux_sym_concatenation_token1;
	v->a[92250] = actions(6095);
	v->a[92251] = 1;
	v->a[92252] = sym__concat;
	v->a[92253] = state(1904);
	v->a[92254] = 1;
	v->a[92255] = aux_sym_concatenation_repeat1;
	v->a[92256] = actions(1286);
	v->a[92257] = 16;
	v->a[92258] = anon_sym_PIPE;
	v->a[92259] = anon_sym_EQ_EQ;
	small_parse_table_4613(v);
}

void	small_parse_table_4613(t_small_parse_table_array *v)
{
	v->a[92260] = anon_sym_LT;
	v->a[92261] = anon_sym_GT;
	v->a[92262] = anon_sym_LT_LT;
	v->a[92263] = anon_sym_LPAREN;
	v->a[92264] = anon_sym_EQ_TILDE;
	v->a[92265] = anon_sym_AMP_GT;
	v->a[92266] = anon_sym_LT_AMP;
	v->a[92267] = anon_sym_GT_AMP;
	v->a[92268] = anon_sym_DOLLAR;
	v->a[92269] = aux_sym_number_token1;
	v->a[92270] = aux_sym_number_token2;
	v->a[92271] = anon_sym_DOLLAR_LPAREN;
	v->a[92272] = anon_sym_BQUOTE;
	v->a[92273] = sym_word;
	v->a[92274] = actions(1288);
	v->a[92275] = 25;
	v->a[92276] = sym_file_descriptor;
	v->a[92277] = sym_test_operator;
	v->a[92278] = sym__bare_dollar;
	v->a[92279] = sym__brace_start;
	small_parse_table_4614(v);
}

void	small_parse_table_4614(t_small_parse_table_array *v)
{
	v->a[92280] = anon_sym_LPAREN_LPAREN;
	v->a[92281] = anon_sym_PIPE_PIPE;
	v->a[92282] = anon_sym_AMP_AMP;
	v->a[92283] = anon_sym_GT_GT;
	v->a[92284] = anon_sym_PIPE_AMP;
	v->a[92285] = anon_sym_AMP_GT_GT;
	v->a[92286] = anon_sym_GT_PIPE;
	v->a[92287] = anon_sym_LT_AMP_DASH;
	v->a[92288] = anon_sym_GT_AMP_DASH;
	v->a[92289] = anon_sym_LT_LT_DASH;
	v->a[92290] = anon_sym_LT_LT_LT;
	v->a[92291] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[92292] = anon_sym_DOLLAR_LBRACK;
	v->a[92293] = sym__special_character;
	v->a[92294] = anon_sym_DQUOTE;
	v->a[92295] = sym_raw_string;
	v->a[92296] = sym_ansi_c_string;
	v->a[92297] = anon_sym_DOLLAR_LBRACE;
	v->a[92298] = anon_sym_DOLLAR_BQUOTE;
	v->a[92299] = anon_sym_LT_LPAREN;
	small_parse_table_4615(v);
}

/* EOF small_parse_table_922.c */
