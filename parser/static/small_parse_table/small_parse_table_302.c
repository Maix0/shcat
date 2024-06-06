/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_302.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1510(t_small_parse_table_array *v)
{
	v->a[30200] = aux_sym_heredoc_redirect_token1;
	v->a[30201] = actions(3060);
	v->a[30202] = 35;
	v->a[30203] = anon_sym_PIPE;
	v->a[30204] = anon_sym_SEMI_SEMI;
	v->a[30205] = anon_sym_SEMI_AMP;
	v->a[30206] = anon_sym_SEMI_SEMI_AMP;
	v->a[30207] = anon_sym_PIPE_AMP;
	v->a[30208] = anon_sym_AMP_AMP;
	v->a[30209] = anon_sym_PIPE_PIPE;
	v->a[30210] = anon_sym_LT;
	v->a[30211] = anon_sym_GT;
	v->a[30212] = anon_sym_GT_GT;
	v->a[30213] = anon_sym_AMP_GT;
	v->a[30214] = anon_sym_AMP_GT_GT;
	v->a[30215] = anon_sym_LT_AMP;
	v->a[30216] = anon_sym_GT_AMP;
	v->a[30217] = anon_sym_GT_PIPE;
	v->a[30218] = anon_sym_LT_AMP_DASH;
	v->a[30219] = anon_sym_GT_AMP_DASH;
	small_parse_table_1511(v);
}

void	small_parse_table_1511(t_small_parse_table_array *v)
{
	v->a[30220] = anon_sym_LT_LT;
	v->a[30221] = anon_sym_LT_LT_DASH;
	v->a[30222] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30223] = anon_sym_AMP;
	v->a[30224] = aux_sym_concatenation_token1;
	v->a[30225] = anon_sym_DOLLAR;
	v->a[30226] = sym__special_character;
	v->a[30227] = anon_sym_DQUOTE;
	v->a[30228] = sym_raw_string;
	v->a[30229] = aux_sym_number_token1;
	v->a[30230] = aux_sym_number_token2;
	v->a[30231] = anon_sym_DOLLAR_LBRACE;
	v->a[30232] = anon_sym_DOLLAR_LPAREN;
	v->a[30233] = anon_sym_BQUOTE;
	v->a[30234] = anon_sym_DOLLAR_BQUOTE;
	v->a[30235] = aux_sym__simple_variable_name_token1;
	v->a[30236] = sym_word;
	v->a[30237] = anon_sym_SEMI;
	v->a[30238] = 11;
	v->a[30239] = actions(3);
	small_parse_table_1512(v);
}

void	small_parse_table_1512(t_small_parse_table_array *v)
{
	v->a[30240] = 1;
	v->a[30241] = sym_comment;
	v->a[30242] = actions(3241);
	v->a[30243] = 1;
	v->a[30244] = sym_variable_name;
	v->a[30245] = actions(3373);
	v->a[30246] = 1;
	v->a[30247] = aux_sym_heredoc_redirect_token1;
	v->a[30248] = actions(2516);
	v->a[30249] = 2;
	v->a[30250] = anon_sym_PIPE;
	v->a[30251] = anon_sym_PIPE_AMP;
	v->a[30252] = actions(2945);
	v->a[30253] = 2;
	v->a[30254] = anon_sym_LT_LT;
	v->a[30255] = anon_sym_LT_LT_DASH;
	v->a[30256] = actions(3300);
	v->a[30257] = 2;
	v->a[30258] = anon_sym_AMP_AMP;
	v->a[30259] = anon_sym_PIPE_PIPE;
	small_parse_table_1513(v);
}

void	small_parse_table_1513(t_small_parse_table_array *v)
{
	v->a[30260] = state(2166);
	v->a[30261] = 2;
	v->a[30262] = sym_variable_assignment;
	v->a[30263] = aux_sym_variable_assignments_repeat1;
	v->a[30264] = actions(2526);
	v->a[30265] = 3;
	v->a[30266] = sym_file_descriptor;
	v->a[30267] = sym_test_operator;
	v->a[30268] = sym__brace_start;
	v->a[30269] = actions(3371);
	v->a[30270] = 3;
	v->a[30271] = anon_sym_SEMI_SEMI;
	v->a[30272] = anon_sym_AMP;
	v->a[30273] = anon_sym_SEMI;
	v->a[30274] = state(2295);
	v->a[30275] = 3;
	v->a[30276] = sym_file_redirect;
	v->a[30277] = sym_heredoc_redirect;
	v->a[30278] = aux_sym_redirected_statement_repeat1;
	v->a[30279] = actions(2512);
	small_parse_table_1514(v);
}

void	small_parse_table_1514(t_small_parse_table_array *v)
{
	v->a[30280] = 22;
	v->a[30281] = anon_sym_LT;
	v->a[30282] = anon_sym_GT;
	v->a[30283] = anon_sym_GT_GT;
	v->a[30284] = anon_sym_AMP_GT;
	v->a[30285] = anon_sym_AMP_GT_GT;
	v->a[30286] = anon_sym_LT_AMP;
	v->a[30287] = anon_sym_GT_AMP;
	v->a[30288] = anon_sym_GT_PIPE;
	v->a[30289] = anon_sym_LT_AMP_DASH;
	v->a[30290] = anon_sym_GT_AMP_DASH;
	v->a[30291] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30292] = anon_sym_DOLLAR;
	v->a[30293] = sym__special_character;
	v->a[30294] = anon_sym_DQUOTE;
	v->a[30295] = sym_raw_string;
	v->a[30296] = aux_sym_number_token1;
	v->a[30297] = aux_sym_number_token2;
	v->a[30298] = anon_sym_DOLLAR_LBRACE;
	v->a[30299] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1515(v);
}

/* EOF small_parse_table_302.c */
