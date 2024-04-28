/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1352.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6760(t_small_parse_table_array *v)
{
	v->a[135200] = anon_sym_AMP;
	v->a[135201] = anon_sym_LT;
	v->a[135202] = anon_sym_GT;
	v->a[135203] = anon_sym_LT_LT;
	v->a[135204] = anon_sym_GT_GT;
	v->a[135205] = anon_sym_PLUS;
	v->a[135206] = anon_sym_DASH;
	v->a[135207] = anon_sym_STAR;
	v->a[135208] = anon_sym_SLASH;
	v->a[135209] = anon_sym_PERCENT;
	v->a[135210] = anon_sym_STAR_STAR;
	v->a[135211] = actions(1288);
	v->a[135212] = 23;
	v->a[135213] = sym_test_operator;
	v->a[135214] = anon_sym_RPAREN_RPAREN;
	v->a[135215] = anon_sym_PLUS_PLUS;
	v->a[135216] = anon_sym_DASH_DASH;
	v->a[135217] = anon_sym_PLUS_EQ;
	v->a[135218] = anon_sym_DASH_EQ;
	v->a[135219] = anon_sym_STAR_EQ;
	small_parse_table_6761(v);
}

void	small_parse_table_6761(t_small_parse_table_array *v)
{
	v->a[135220] = anon_sym_SLASH_EQ;
	v->a[135221] = anon_sym_PERCENT_EQ;
	v->a[135222] = anon_sym_STAR_STAR_EQ;
	v->a[135223] = anon_sym_LT_LT_EQ;
	v->a[135224] = anon_sym_GT_GT_EQ;
	v->a[135225] = anon_sym_AMP_EQ;
	v->a[135226] = anon_sym_CARET_EQ;
	v->a[135227] = anon_sym_PIPE_EQ;
	v->a[135228] = anon_sym_PIPE_PIPE;
	v->a[135229] = anon_sym_AMP_AMP;
	v->a[135230] = anon_sym_EQ_EQ;
	v->a[135231] = anon_sym_BANG_EQ;
	v->a[135232] = anon_sym_LT_EQ;
	v->a[135233] = anon_sym_GT_EQ;
	v->a[135234] = anon_sym_EQ_TILDE;
	v->a[135235] = anon_sym_QMARK;
	v->a[135236] = 3;
	v->a[135237] = actions(71);
	v->a[135238] = 1;
	v->a[135239] = sym_comment;
	small_parse_table_6762(v);
}

void	small_parse_table_6762(t_small_parse_table_array *v)
{
	v->a[135240] = actions(1328);
	v->a[135241] = 14;
	v->a[135242] = anon_sym_PIPE;
	v->a[135243] = anon_sym_LT;
	v->a[135244] = anon_sym_GT;
	v->a[135245] = anon_sym_LT_LT;
	v->a[135246] = anon_sym_AMP_GT;
	v->a[135247] = anon_sym_LT_AMP;
	v->a[135248] = anon_sym_GT_AMP;
	v->a[135249] = anon_sym_DOLLAR;
	v->a[135250] = sym__special_character;
	v->a[135251] = aux_sym_number_token1;
	v->a[135252] = aux_sym_number_token2;
	v->a[135253] = anon_sym_DOLLAR_LPAREN;
	v->a[135254] = anon_sym_BQUOTE;
	v->a[135255] = sym_word;
	v->a[135256] = actions(1330);
	v->a[135257] = 26;
	v->a[135258] = sym_file_descriptor;
	v->a[135259] = sym__concat;
	small_parse_table_6763(v);
}

void	small_parse_table_6763(t_small_parse_table_array *v)
{
	v->a[135260] = sym_test_operator;
	v->a[135261] = sym__brace_start;
	v->a[135262] = anon_sym_LPAREN_LPAREN;
	v->a[135263] = anon_sym_PIPE_PIPE;
	v->a[135264] = anon_sym_AMP_AMP;
	v->a[135265] = anon_sym_GT_GT;
	v->a[135266] = anon_sym_PIPE_AMP;
	v->a[135267] = anon_sym_RBRACK;
	v->a[135268] = anon_sym_AMP_GT_GT;
	v->a[135269] = anon_sym_GT_PIPE;
	v->a[135270] = anon_sym_LT_AMP_DASH;
	v->a[135271] = anon_sym_GT_AMP_DASH;
	v->a[135272] = anon_sym_LT_LT_DASH;
	v->a[135273] = anon_sym_LT_LT_LT;
	v->a[135274] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135275] = anon_sym_DOLLAR_LBRACK;
	v->a[135276] = aux_sym_concatenation_token1;
	v->a[135277] = anon_sym_DQUOTE;
	v->a[135278] = sym_raw_string;
	v->a[135279] = sym_ansi_c_string;
	small_parse_table_6764(v);
}

void	small_parse_table_6764(t_small_parse_table_array *v)
{
	v->a[135280] = anon_sym_DOLLAR_LBRACE;
	v->a[135281] = anon_sym_DOLLAR_BQUOTE;
	v->a[135282] = anon_sym_LT_LPAREN;
	v->a[135283] = anon_sym_GT_LPAREN;
	v->a[135284] = 3;
	v->a[135285] = actions(71);
	v->a[135286] = 1;
	v->a[135287] = sym_comment;
	v->a[135288] = actions(1340);
	v->a[135289] = 14;
	v->a[135290] = anon_sym_PIPE;
	v->a[135291] = anon_sym_LT;
	v->a[135292] = anon_sym_GT;
	v->a[135293] = anon_sym_LT_LT;
	v->a[135294] = anon_sym_AMP_GT;
	v->a[135295] = anon_sym_LT_AMP;
	v->a[135296] = anon_sym_GT_AMP;
	v->a[135297] = anon_sym_DOLLAR;
	v->a[135298] = sym__special_character;
	v->a[135299] = aux_sym_number_token1;
	small_parse_table_6765(v);
}

/* EOF small_parse_table_1352.c */
