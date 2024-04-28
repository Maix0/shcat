/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_642.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3210(t_small_parse_table_array *v)
{
	v->a[64200] = anon_sym_AMP_GT;
	v->a[64201] = anon_sym_AMP_GT_GT;
	v->a[64202] = anon_sym_LT_AMP;
	v->a[64203] = anon_sym_GT_AMP;
	v->a[64204] = anon_sym_GT_PIPE;
	v->a[64205] = anon_sym_LT_AMP_DASH;
	v->a[64206] = anon_sym_GT_AMP_DASH;
	v->a[64207] = anon_sym_LT_LT_DASH;
	v->a[64208] = anon_sym_LT_LT_LT;
	v->a[64209] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64210] = anon_sym_DOLLAR_LBRACK;
	v->a[64211] = aux_sym_concatenation_token1;
	v->a[64212] = anon_sym_DOLLAR;
	v->a[64213] = sym__special_character;
	v->a[64214] = anon_sym_DQUOTE;
	v->a[64215] = sym_raw_string;
	v->a[64216] = sym_ansi_c_string;
	v->a[64217] = aux_sym_number_token1;
	v->a[64218] = aux_sym_number_token2;
	v->a[64219] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3211(v);
}

void	small_parse_table_3211(t_small_parse_table_array *v)
{
	v->a[64220] = anon_sym_DOLLAR_LPAREN;
	v->a[64221] = anon_sym_BQUOTE;
	v->a[64222] = anon_sym_DOLLAR_BQUOTE;
	v->a[64223] = anon_sym_LT_LPAREN;
	v->a[64224] = anon_sym_GT_LPAREN;
	v->a[64225] = sym_word;
	v->a[64226] = 3;
	v->a[64227] = actions(3);
	v->a[64228] = 1;
	v->a[64229] = sym_comment;
	v->a[64230] = actions(1298);
	v->a[64231] = 6;
	v->a[64232] = sym_file_descriptor;
	v->a[64233] = sym__concat;
	v->a[64234] = sym_variable_name;
	v->a[64235] = sym_test_operator;
	v->a[64236] = sym__brace_start;
	v->a[64237] = aux_sym_heredoc_redirect_token1;
	v->a[64238] = actions(1296);
	v->a[64239] = 40;
	small_parse_table_3212(v);
}

void	small_parse_table_3212(t_small_parse_table_array *v)
{
	v->a[64240] = anon_sym_LPAREN_LPAREN;
	v->a[64241] = anon_sym_SEMI;
	v->a[64242] = anon_sym_PIPE_PIPE;
	v->a[64243] = anon_sym_AMP_AMP;
	v->a[64244] = anon_sym_PIPE;
	v->a[64245] = anon_sym_AMP;
	v->a[64246] = anon_sym_LT;
	v->a[64247] = anon_sym_GT;
	v->a[64248] = anon_sym_LT_LT;
	v->a[64249] = anon_sym_GT_GT;
	v->a[64250] = anon_sym_SEMI_SEMI;
	v->a[64251] = anon_sym_SEMI_AMP;
	v->a[64252] = anon_sym_SEMI_SEMI_AMP;
	v->a[64253] = anon_sym_PIPE_AMP;
	v->a[64254] = anon_sym_AMP_GT;
	v->a[64255] = anon_sym_AMP_GT_GT;
	v->a[64256] = anon_sym_LT_AMP;
	v->a[64257] = anon_sym_GT_AMP;
	v->a[64258] = anon_sym_GT_PIPE;
	v->a[64259] = anon_sym_LT_AMP_DASH;
	small_parse_table_3213(v);
}

void	small_parse_table_3213(t_small_parse_table_array *v)
{
	v->a[64260] = anon_sym_GT_AMP_DASH;
	v->a[64261] = anon_sym_LT_LT_DASH;
	v->a[64262] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64263] = anon_sym_DOLLAR_LBRACK;
	v->a[64264] = aux_sym_concatenation_token1;
	v->a[64265] = anon_sym_DOLLAR;
	v->a[64266] = sym__special_character;
	v->a[64267] = anon_sym_DQUOTE;
	v->a[64268] = sym_raw_string;
	v->a[64269] = sym_ansi_c_string;
	v->a[64270] = aux_sym_number_token1;
	v->a[64271] = aux_sym_number_token2;
	v->a[64272] = anon_sym_DOLLAR_LBRACE;
	v->a[64273] = anon_sym_DOLLAR_LPAREN;
	v->a[64274] = anon_sym_BQUOTE;
	v->a[64275] = anon_sym_DOLLAR_BQUOTE;
	v->a[64276] = anon_sym_LT_LPAREN;
	v->a[64277] = anon_sym_GT_LPAREN;
	v->a[64278] = aux_sym__simple_variable_name_token1;
	v->a[64279] = sym_word;
	small_parse_table_3214(v);
}

void	small_parse_table_3214(t_small_parse_table_array *v)
{
	v->a[64280] = 3;
	v->a[64281] = actions(3);
	v->a[64282] = 1;
	v->a[64283] = sym_comment;
	v->a[64284] = actions(1334);
	v->a[64285] = 6;
	v->a[64286] = sym_file_descriptor;
	v->a[64287] = sym__concat;
	v->a[64288] = sym_variable_name;
	v->a[64289] = sym_test_operator;
	v->a[64290] = sym__brace_start;
	v->a[64291] = aux_sym_heredoc_redirect_token1;
	v->a[64292] = actions(1332);
	v->a[64293] = 40;
	v->a[64294] = anon_sym_LPAREN_LPAREN;
	v->a[64295] = anon_sym_SEMI;
	v->a[64296] = anon_sym_PIPE_PIPE;
	v->a[64297] = anon_sym_AMP_AMP;
	v->a[64298] = anon_sym_PIPE;
	v->a[64299] = anon_sym_AMP;
	small_parse_table_3215(v);
}

/* EOF small_parse_table_642.c */
