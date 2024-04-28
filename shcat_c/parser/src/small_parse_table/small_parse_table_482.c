/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_482.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2410(t_small_parse_table_array *v)
{
	v->a[48200] = anon_sym_POUND;
	v->a[48201] = anon_sym_AT2;
	v->a[48202] = anon_sym_0;
	v->a[48203] = anon_sym__;
	v->a[48204] = actions(1239);
	v->a[48205] = 31;
	v->a[48206] = anon_sym_LPAREN_LPAREN;
	v->a[48207] = anon_sym_PIPE_PIPE;
	v->a[48208] = anon_sym_AMP_AMP;
	v->a[48209] = anon_sym_PIPE;
	v->a[48210] = anon_sym_LT;
	v->a[48211] = anon_sym_GT;
	v->a[48212] = anon_sym_LT_LT;
	v->a[48213] = anon_sym_GT_GT;
	v->a[48214] = anon_sym_PIPE_AMP;
	v->a[48215] = anon_sym_AMP_GT;
	v->a[48216] = anon_sym_AMP_GT_GT;
	v->a[48217] = anon_sym_LT_AMP;
	v->a[48218] = anon_sym_GT_AMP;
	v->a[48219] = anon_sym_GT_PIPE;
	small_parse_table_2411(v);
}

void	small_parse_table_2411(t_small_parse_table_array *v)
{
	v->a[48220] = anon_sym_LT_AMP_DASH;
	v->a[48221] = anon_sym_GT_AMP_DASH;
	v->a[48222] = anon_sym_LT_LT_DASH;
	v->a[48223] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48224] = anon_sym_DOLLAR_LBRACK;
	v->a[48225] = sym__special_character;
	v->a[48226] = sym_raw_string;
	v->a[48227] = sym_ansi_c_string;
	v->a[48228] = aux_sym_number_token1;
	v->a[48229] = aux_sym_number_token2;
	v->a[48230] = anon_sym_DOLLAR_LBRACE;
	v->a[48231] = anon_sym_DOLLAR_LPAREN;
	v->a[48232] = anon_sym_BQUOTE;
	v->a[48233] = anon_sym_DOLLAR_BQUOTE;
	v->a[48234] = anon_sym_LT_LPAREN;
	v->a[48235] = anon_sym_GT_LPAREN;
	v->a[48236] = sym_word;
	v->a[48237] = 3;
	v->a[48238] = actions(3);
	v->a[48239] = 1;
	small_parse_table_2412(v);
}

void	small_parse_table_2412(t_small_parse_table_array *v)
{
	v->a[48240] = sym_comment;
	v->a[48241] = actions(1314);
	v->a[48242] = 6;
	v->a[48243] = sym_file_descriptor;
	v->a[48244] = sym__concat;
	v->a[48245] = sym_test_operator;
	v->a[48246] = sym__bare_dollar;
	v->a[48247] = sym__brace_start;
	v->a[48248] = aux_sym_heredoc_redirect_token1;
	v->a[48249] = actions(1312);
	v->a[48250] = 42;
	v->a[48251] = anon_sym_LPAREN_LPAREN;
	v->a[48252] = anon_sym_SEMI;
	v->a[48253] = anon_sym_PIPE_PIPE;
	v->a[48254] = anon_sym_AMP_AMP;
	v->a[48255] = anon_sym_PIPE;
	v->a[48256] = anon_sym_AMP;
	v->a[48257] = anon_sym_EQ_EQ;
	v->a[48258] = anon_sym_LT;
	v->a[48259] = anon_sym_GT;
	small_parse_table_2413(v);
}

void	small_parse_table_2413(t_small_parse_table_array *v)
{
	v->a[48260] = anon_sym_LT_LT;
	v->a[48261] = anon_sym_GT_GT;
	v->a[48262] = anon_sym_SEMI_SEMI;
	v->a[48263] = anon_sym_SEMI_AMP;
	v->a[48264] = anon_sym_SEMI_SEMI_AMP;
	v->a[48265] = anon_sym_PIPE_AMP;
	v->a[48266] = anon_sym_EQ_TILDE;
	v->a[48267] = anon_sym_AMP_GT;
	v->a[48268] = anon_sym_AMP_GT_GT;
	v->a[48269] = anon_sym_LT_AMP;
	v->a[48270] = anon_sym_GT_AMP;
	v->a[48271] = anon_sym_GT_PIPE;
	v->a[48272] = anon_sym_LT_AMP_DASH;
	v->a[48273] = anon_sym_GT_AMP_DASH;
	v->a[48274] = anon_sym_LT_LT_DASH;
	v->a[48275] = anon_sym_LT_LT_LT;
	v->a[48276] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48277] = anon_sym_DOLLAR_LBRACK;
	v->a[48278] = aux_sym_concatenation_token1;
	v->a[48279] = anon_sym_DOLLAR;
	small_parse_table_2414(v);
}

void	small_parse_table_2414(t_small_parse_table_array *v)
{
	v->a[48280] = sym__special_character;
	v->a[48281] = anon_sym_DQUOTE;
	v->a[48282] = sym_raw_string;
	v->a[48283] = sym_ansi_c_string;
	v->a[48284] = aux_sym_number_token1;
	v->a[48285] = aux_sym_number_token2;
	v->a[48286] = anon_sym_DOLLAR_LBRACE;
	v->a[48287] = anon_sym_DOLLAR_LPAREN;
	v->a[48288] = anon_sym_BQUOTE;
	v->a[48289] = anon_sym_DOLLAR_BQUOTE;
	v->a[48290] = anon_sym_LT_LPAREN;
	v->a[48291] = anon_sym_GT_LPAREN;
	v->a[48292] = sym_word;
	v->a[48293] = 3;
	v->a[48294] = actions(3);
	v->a[48295] = 1;
	v->a[48296] = sym_comment;
	v->a[48297] = actions(1342);
	v->a[48298] = 6;
	v->a[48299] = sym_file_descriptor;
	small_parse_table_2415(v);
}

/* EOF small_parse_table_482.c */
