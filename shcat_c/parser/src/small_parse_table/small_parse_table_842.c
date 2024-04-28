/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_842.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4210(t_small_parse_table_array *v)
{
	v->a[84200] = 5;
	v->a[84201] = sym_file_descriptor;
	v->a[84202] = sym__concat;
	v->a[84203] = sym_test_operator;
	v->a[84204] = sym__brace_start;
	v->a[84205] = aux_sym_heredoc_redirect_token1;
	v->a[84206] = actions(1308);
	v->a[84207] = 39;
	v->a[84208] = anon_sym_LPAREN_LPAREN;
	v->a[84209] = anon_sym_SEMI;
	v->a[84210] = anon_sym_PIPE_PIPE;
	v->a[84211] = anon_sym_AMP_AMP;
	v->a[84212] = anon_sym_PIPE;
	v->a[84213] = anon_sym_AMP;
	v->a[84214] = anon_sym_LT;
	v->a[84215] = anon_sym_GT;
	v->a[84216] = anon_sym_LT_LT;
	v->a[84217] = anon_sym_GT_GT;
	v->a[84218] = anon_sym_SEMI_SEMI;
	v->a[84219] = anon_sym_SEMI_AMP;
	small_parse_table_4211(v);
}

void	small_parse_table_4211(t_small_parse_table_array *v)
{
	v->a[84220] = anon_sym_SEMI_SEMI_AMP;
	v->a[84221] = anon_sym_PIPE_AMP;
	v->a[84222] = anon_sym_AMP_GT;
	v->a[84223] = anon_sym_AMP_GT_GT;
	v->a[84224] = anon_sym_LT_AMP;
	v->a[84225] = anon_sym_GT_AMP;
	v->a[84226] = anon_sym_GT_PIPE;
	v->a[84227] = anon_sym_LT_AMP_DASH;
	v->a[84228] = anon_sym_GT_AMP_DASH;
	v->a[84229] = anon_sym_LT_LT_DASH;
	v->a[84230] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84231] = anon_sym_DOLLAR_LBRACK;
	v->a[84232] = aux_sym_concatenation_token1;
	v->a[84233] = anon_sym_DOLLAR;
	v->a[84234] = sym__special_character;
	v->a[84235] = anon_sym_DQUOTE;
	v->a[84236] = sym_raw_string;
	v->a[84237] = sym_ansi_c_string;
	v->a[84238] = aux_sym_number_token1;
	v->a[84239] = aux_sym_number_token2;
	small_parse_table_4212(v);
}

void	small_parse_table_4212(t_small_parse_table_array *v)
{
	v->a[84240] = anon_sym_DOLLAR_LBRACE;
	v->a[84241] = anon_sym_DOLLAR_LPAREN;
	v->a[84242] = anon_sym_BQUOTE;
	v->a[84243] = anon_sym_DOLLAR_BQUOTE;
	v->a[84244] = anon_sym_LT_LPAREN;
	v->a[84245] = anon_sym_GT_LPAREN;
	v->a[84246] = sym_word;
	v->a[84247] = 3;
	v->a[84248] = actions(3);
	v->a[84249] = 1;
	v->a[84250] = sym_comment;
	v->a[84251] = actions(1354);
	v->a[84252] = 5;
	v->a[84253] = sym_file_descriptor;
	v->a[84254] = sym__concat;
	v->a[84255] = sym_test_operator;
	v->a[84256] = sym__brace_start;
	v->a[84257] = aux_sym_heredoc_redirect_token1;
	v->a[84258] = actions(1352);
	v->a[84259] = 39;
	small_parse_table_4213(v);
}

void	small_parse_table_4213(t_small_parse_table_array *v)
{
	v->a[84260] = anon_sym_LPAREN_LPAREN;
	v->a[84261] = anon_sym_SEMI;
	v->a[84262] = anon_sym_PIPE_PIPE;
	v->a[84263] = anon_sym_AMP_AMP;
	v->a[84264] = anon_sym_PIPE;
	v->a[84265] = anon_sym_AMP;
	v->a[84266] = anon_sym_LT;
	v->a[84267] = anon_sym_GT;
	v->a[84268] = anon_sym_LT_LT;
	v->a[84269] = anon_sym_GT_GT;
	v->a[84270] = anon_sym_SEMI_SEMI;
	v->a[84271] = anon_sym_SEMI_AMP;
	v->a[84272] = anon_sym_SEMI_SEMI_AMP;
	v->a[84273] = anon_sym_PIPE_AMP;
	v->a[84274] = anon_sym_AMP_GT;
	v->a[84275] = anon_sym_AMP_GT_GT;
	v->a[84276] = anon_sym_LT_AMP;
	v->a[84277] = anon_sym_GT_AMP;
	v->a[84278] = anon_sym_GT_PIPE;
	v->a[84279] = anon_sym_LT_AMP_DASH;
	small_parse_table_4214(v);
}

void	small_parse_table_4214(t_small_parse_table_array *v)
{
	v->a[84280] = anon_sym_GT_AMP_DASH;
	v->a[84281] = anon_sym_LT_LT_DASH;
	v->a[84282] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84283] = anon_sym_DOLLAR_LBRACK;
	v->a[84284] = aux_sym_concatenation_token1;
	v->a[84285] = anon_sym_DOLLAR;
	v->a[84286] = sym__special_character;
	v->a[84287] = anon_sym_DQUOTE;
	v->a[84288] = sym_raw_string;
	v->a[84289] = sym_ansi_c_string;
	v->a[84290] = aux_sym_number_token1;
	v->a[84291] = aux_sym_number_token2;
	v->a[84292] = anon_sym_DOLLAR_LBRACE;
	v->a[84293] = anon_sym_DOLLAR_LPAREN;
	v->a[84294] = anon_sym_BQUOTE;
	v->a[84295] = anon_sym_DOLLAR_BQUOTE;
	v->a[84296] = anon_sym_LT_LPAREN;
	v->a[84297] = anon_sym_GT_LPAREN;
	v->a[84298] = sym_word;
	v->a[84299] = 3;
	small_parse_table_4215(v);
}

/* EOF small_parse_table_842.c */
