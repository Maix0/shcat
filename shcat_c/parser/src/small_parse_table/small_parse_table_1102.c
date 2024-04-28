/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1102.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5510(t_small_parse_table_array *v)
{
	v->a[110200] = actions(5826);
	v->a[110201] = 1;
	v->a[110202] = aux_sym_heredoc_redirect_token1;
	v->a[110203] = actions(5828);
	v->a[110204] = 1;
	v->a[110205] = sym_file_descriptor;
	v->a[110206] = actions(6262);
	v->a[110207] = 1;
	v->a[110208] = anon_sym_RPAREN;
	v->a[110209] = actions(5831);
	v->a[110210] = 3;
	v->a[110211] = sym_variable_name;
	v->a[110212] = sym_test_operator;
	v->a[110213] = sym__brace_start;
	v->a[110214] = actions(5821);
	v->a[110215] = 9;
	v->a[110216] = anon_sym_SEMI;
	v->a[110217] = anon_sym_PIPE_PIPE;
	v->a[110218] = anon_sym_AMP_AMP;
	v->a[110219] = anon_sym_PIPE;
	small_parse_table_5511(v);
}

void	small_parse_table_5511(t_small_parse_table_array *v)
{
	v->a[110220] = anon_sym_AMP;
	v->a[110221] = anon_sym_LT_LT;
	v->a[110222] = anon_sym_SEMI_SEMI;
	v->a[110223] = anon_sym_PIPE_AMP;
	v->a[110224] = anon_sym_LT_LT_DASH;
	v->a[110225] = actions(5823);
	v->a[110226] = 11;
	v->a[110227] = anon_sym_LT;
	v->a[110228] = anon_sym_GT;
	v->a[110229] = anon_sym_GT_GT;
	v->a[110230] = anon_sym_AMP_GT;
	v->a[110231] = anon_sym_AMP_GT_GT;
	v->a[110232] = anon_sym_LT_AMP;
	v->a[110233] = anon_sym_GT_AMP;
	v->a[110234] = anon_sym_GT_PIPE;
	v->a[110235] = anon_sym_LT_AMP_DASH;
	v->a[110236] = anon_sym_GT_AMP_DASH;
	v->a[110237] = anon_sym_LT_LT_LT;
	v->a[110238] = actions(5819);
	v->a[110239] = 17;
	small_parse_table_5512(v);
}

void	small_parse_table_5512(t_small_parse_table_array *v)
{
	v->a[110240] = anon_sym_LPAREN_LPAREN;
	v->a[110241] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[110242] = anon_sym_DOLLAR_LBRACK;
	v->a[110243] = anon_sym_DOLLAR;
	v->a[110244] = sym__special_character;
	v->a[110245] = anon_sym_DQUOTE;
	v->a[110246] = sym_raw_string;
	v->a[110247] = sym_ansi_c_string;
	v->a[110248] = aux_sym_number_token1;
	v->a[110249] = aux_sym_number_token2;
	v->a[110250] = anon_sym_DOLLAR_LBRACE;
	v->a[110251] = anon_sym_DOLLAR_LPAREN;
	v->a[110252] = anon_sym_BQUOTE;
	v->a[110253] = anon_sym_DOLLAR_BQUOTE;
	v->a[110254] = anon_sym_LT_LPAREN;
	v->a[110255] = anon_sym_GT_LPAREN;
	v->a[110256] = sym_word;
	v->a[110257] = 8;
	v->a[110258] = actions(3);
	v->a[110259] = 1;
	small_parse_table_5513(v);
}

void	small_parse_table_5513(t_small_parse_table_array *v)
{
	v->a[110260] = sym_comment;
	v->a[110261] = actions(5826);
	v->a[110262] = 1;
	v->a[110263] = aux_sym_heredoc_redirect_token1;
	v->a[110264] = actions(5828);
	v->a[110265] = 1;
	v->a[110266] = sym_file_descriptor;
	v->a[110267] = actions(6265);
	v->a[110268] = 1;
	v->a[110269] = anon_sym_RPAREN;
	v->a[110270] = actions(5831);
	v->a[110271] = 3;
	v->a[110272] = sym_variable_name;
	v->a[110273] = sym_test_operator;
	v->a[110274] = sym__brace_start;
	v->a[110275] = actions(5821);
	v->a[110276] = 9;
	v->a[110277] = anon_sym_SEMI;
	v->a[110278] = anon_sym_PIPE_PIPE;
	v->a[110279] = anon_sym_AMP_AMP;
	small_parse_table_5514(v);
}

void	small_parse_table_5514(t_small_parse_table_array *v)
{
	v->a[110280] = anon_sym_PIPE;
	v->a[110281] = anon_sym_AMP;
	v->a[110282] = anon_sym_LT_LT;
	v->a[110283] = anon_sym_SEMI_SEMI;
	v->a[110284] = anon_sym_PIPE_AMP;
	v->a[110285] = anon_sym_LT_LT_DASH;
	v->a[110286] = actions(5823);
	v->a[110287] = 11;
	v->a[110288] = anon_sym_LT;
	v->a[110289] = anon_sym_GT;
	v->a[110290] = anon_sym_GT_GT;
	v->a[110291] = anon_sym_AMP_GT;
	v->a[110292] = anon_sym_AMP_GT_GT;
	v->a[110293] = anon_sym_LT_AMP;
	v->a[110294] = anon_sym_GT_AMP;
	v->a[110295] = anon_sym_GT_PIPE;
	v->a[110296] = anon_sym_LT_AMP_DASH;
	v->a[110297] = anon_sym_GT_AMP_DASH;
	v->a[110298] = anon_sym_LT_LT_LT;
	v->a[110299] = actions(5819);
	small_parse_table_5515(v);
}

/* EOF small_parse_table_1102.c */
