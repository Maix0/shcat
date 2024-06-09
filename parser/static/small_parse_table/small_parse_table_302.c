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
	v->a[30200] = sym__bare_dollar;
	v->a[30201] = actions(559);
	v->a[30202] = 1;
	v->a[30203] = sym_file_descriptor;
	v->a[30204] = state(306);
	v->a[30205] = 1;
	v->a[30206] = aux_sym_command_repeat2;
	v->a[30207] = state(753);
	v->a[30208] = 1;
	v->a[30209] = sym_concatenation;
	v->a[30210] = actions(966);
	v->a[30211] = 2;
	v->a[30212] = sym_raw_string;
	v->a[30213] = sym_word;
	v->a[30214] = state(759);
	v->a[30215] = 6;
	v->a[30216] = sym_arithmetic_expansion;
	v->a[30217] = sym_string;
	v->a[30218] = sym_number;
	v->a[30219] = sym_simple_expansion;
	small_parse_table_1511(v);
}

void	small_parse_table_1511(t_small_parse_table_array *v)
{
	v->a[30220] = sym_expansion;
	v->a[30221] = sym_command_substitution;
	v->a[30222] = actions(557);
	v->a[30223] = 16;
	v->a[30224] = anon_sym_PIPE;
	v->a[30225] = anon_sym_AMP_AMP;
	v->a[30226] = anon_sym_PIPE_PIPE;
	v->a[30227] = anon_sym_LT;
	v->a[30228] = anon_sym_GT;
	v->a[30229] = anon_sym_GT_GT;
	v->a[30230] = anon_sym_AMP_GT;
	v->a[30231] = anon_sym_AMP_GT_GT;
	v->a[30232] = anon_sym_LT_AMP;
	v->a[30233] = anon_sym_GT_AMP;
	v->a[30234] = anon_sym_GT_PIPE;
	v->a[30235] = anon_sym_LT_AMP_DASH;
	v->a[30236] = anon_sym_GT_AMP_DASH;
	v->a[30237] = anon_sym_LT_LT;
	v->a[30238] = anon_sym_LT_LT_DASH;
	v->a[30239] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1512(v);
}

void	small_parse_table_1512(t_small_parse_table_array *v)
{
	v->a[30240] = 11;
	v->a[30241] = actions(3);
	v->a[30242] = 1;
	v->a[30243] = sym_comment;
	v->a[30244] = actions(1002);
	v->a[30245] = 1;
	v->a[30246] = anon_sym_PIPE;
	v->a[30247] = actions(1006);
	v->a[30248] = 1;
	v->a[30249] = sym_file_descriptor;
	v->a[30250] = actions(1073);
	v->a[30251] = 1;
	v->a[30252] = anon_sym_SEMI_SEMI;
	v->a[30253] = actions(1095);
	v->a[30254] = 1;
	v->a[30255] = sym_variable_name;
	v->a[30256] = actions(1062);
	v->a[30257] = 2;
	v->a[30258] = anon_sym_LT_LT;
	v->a[30259] = anon_sym_LT_LT_DASH;
	small_parse_table_1513(v);
}

void	small_parse_table_1513(t_small_parse_table_array *v)
{
	v->a[30260] = actions(1093);
	v->a[30261] = 2;
	v->a[30262] = anon_sym_AMP_AMP;
	v->a[30263] = anon_sym_PIPE_PIPE;
	v->a[30264] = state(1151);
	v->a[30265] = 2;
	v->a[30266] = sym_variable_assignment;
	v->a[30267] = aux_sym_variable_assignments_repeat1;
	v->a[30268] = actions(1089);
	v->a[30269] = 3;
	v->a[30270] = aux_sym_heredoc_redirect_token1;
	v->a[30271] = anon_sym_AMP;
	v->a[30272] = anon_sym_SEMI;
	v->a[30273] = state(1160);
	v->a[30274] = 3;
	v->a[30275] = sym_file_redirect;
	v->a[30276] = sym_heredoc_redirect;
	v->a[30277] = aux_sym_redirected_statement_repeat1;
	v->a[30278] = actions(1000);
	v->a[30279] = 20;
	small_parse_table_1514(v);
}

void	small_parse_table_1514(t_small_parse_table_array *v)
{
	v->a[30280] = anon_sym_LT;
	v->a[30281] = anon_sym_GT;
	v->a[30282] = anon_sym_GT_GT;
	v->a[30283] = anon_sym_AMP_GT;
	v->a[30284] = anon_sym_AMP_GT_GT;
	v->a[30285] = anon_sym_LT_AMP;
	v->a[30286] = anon_sym_GT_AMP;
	v->a[30287] = anon_sym_GT_PIPE;
	v->a[30288] = anon_sym_LT_AMP_DASH;
	v->a[30289] = anon_sym_GT_AMP_DASH;
	v->a[30290] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30291] = anon_sym_DOLLAR;
	v->a[30292] = anon_sym_DQUOTE;
	v->a[30293] = sym_raw_string;
	v->a[30294] = aux_sym_number_token1;
	v->a[30295] = aux_sym_number_token2;
	v->a[30296] = anon_sym_DOLLAR_LBRACE;
	v->a[30297] = anon_sym_DOLLAR_LPAREN;
	v->a[30298] = anon_sym_BQUOTE;
	v->a[30299] = sym_word;
	small_parse_table_1515(v);
}

/* EOF small_parse_table_302.c */
