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
	v->a[30200] = anon_sym_BQUOTE;
	v->a[30201] = actions(3201);
	v->a[30202] = 1;
	v->a[30203] = anon_sym_DOLLAR_BQUOTE;
	v->a[30204] = actions(3209);
	v->a[30205] = 1;
	v->a[30206] = sym__brace_start;
	v->a[30207] = actions(4492);
	v->a[30208] = 1;
	v->a[30209] = sym__special_character;
	v->a[30210] = actions(4494);
	v->a[30211] = 1;
	v->a[30212] = aux_sym__simple_variable_name_token1;
	v->a[30213] = actions(4496);
	v->a[30214] = 1;
	v->a[30215] = sym_test_operator;
	v->a[30216] = state(1966);
	v->a[30217] = 1;
	v->a[30218] = aux_sym__literal_repeat1;
	v->a[30219] = actions(2564);
	small_parse_table_1511(v);
}

void	small_parse_table_1511(t_small_parse_table_array *v)
{
	v->a[30220] = 2;
	v->a[30221] = sym_file_descriptor;
	v->a[30222] = aux_sym_heredoc_redirect_token1;
	v->a[30223] = actions(3181);
	v->a[30224] = 2;
	v->a[30225] = anon_sym_LPAREN_LPAREN;
	v->a[30226] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30227] = actions(3203);
	v->a[30228] = 2;
	v->a[30229] = anon_sym_LT_LPAREN;
	v->a[30230] = anon_sym_GT_LPAREN;
	v->a[30231] = state(875);
	v->a[30232] = 2;
	v->a[30233] = sym_concatenation;
	v->a[30234] = aux_sym_unset_command_repeat1;
	v->a[30235] = actions(4490);
	v->a[30236] = 3;
	v->a[30237] = sym_raw_string;
	v->a[30238] = sym_ansi_c_string;
	v->a[30239] = sym_word;
	small_parse_table_1512(v);
}

void	small_parse_table_1512(t_small_parse_table_array *v)
{
	v->a[30240] = state(2367);
	v->a[30241] = 9;
	v->a[30242] = sym_arithmetic_expansion;
	v->a[30243] = sym_brace_expression;
	v->a[30244] = sym_string;
	v->a[30245] = sym_translated_string;
	v->a[30246] = sym_number;
	v->a[30247] = sym_simple_expansion;
	v->a[30248] = sym_expansion;
	v->a[30249] = sym_command_substitution;
	v->a[30250] = sym_process_substitution;
	v->a[30251] = actions(2562);
	v->a[30252] = 16;
	v->a[30253] = anon_sym_PIPE_PIPE;
	v->a[30254] = anon_sym_AMP_AMP;
	v->a[30255] = anon_sym_PIPE;
	v->a[30256] = anon_sym_LT;
	v->a[30257] = anon_sym_GT;
	v->a[30258] = anon_sym_LT_LT;
	v->a[30259] = anon_sym_GT_GT;
	small_parse_table_1513(v);
}

void	small_parse_table_1513(t_small_parse_table_array *v)
{
	v->a[30260] = anon_sym_PIPE_AMP;
	v->a[30261] = anon_sym_AMP_GT;
	v->a[30262] = anon_sym_AMP_GT_GT;
	v->a[30263] = anon_sym_LT_AMP;
	v->a[30264] = anon_sym_GT_AMP;
	v->a[30265] = anon_sym_GT_PIPE;
	v->a[30266] = anon_sym_LT_AMP_DASH;
	v->a[30267] = anon_sym_GT_AMP_DASH;
	v->a[30268] = anon_sym_LT_LT_DASH;
	v->a[30269] = 3;
	v->a[30270] = actions(3);
	v->a[30271] = 1;
	v->a[30272] = sym_comment;
	v->a[30273] = actions(1253);
	v->a[30274] = 6;
	v->a[30275] = sym_file_descriptor;
	v->a[30276] = sym__concat;
	v->a[30277] = sym_test_operator;
	v->a[30278] = sym__bare_dollar;
	v->a[30279] = sym__brace_start;
	small_parse_table_1514(v);
}

void	small_parse_table_1514(t_small_parse_table_array *v)
{
	v->a[30280] = aux_sym_heredoc_redirect_token1;
	v->a[30281] = actions(1251);
	v->a[30282] = 44;
	v->a[30283] = anon_sym_LPAREN_LPAREN;
	v->a[30284] = anon_sym_SEMI;
	v->a[30285] = anon_sym_PIPE_PIPE;
	v->a[30286] = anon_sym_AMP_AMP;
	v->a[30287] = anon_sym_PIPE;
	v->a[30288] = anon_sym_AMP;
	v->a[30289] = anon_sym_EQ_EQ;
	v->a[30290] = anon_sym_LT;
	v->a[30291] = anon_sym_GT;
	v->a[30292] = anon_sym_LT_LT;
	v->a[30293] = anon_sym_GT_GT;
	v->a[30294] = anon_sym_LPAREN;
	v->a[30295] = anon_sym_esac;
	v->a[30296] = anon_sym_SEMI_SEMI;
	v->a[30297] = anon_sym_SEMI_AMP;
	v->a[30298] = anon_sym_SEMI_SEMI_AMP;
	v->a[30299] = anon_sym_PIPE_AMP;
	small_parse_table_1515(v);
}

/* EOF small_parse_table_302.c */
