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
	v->a[30200] = sym_comment;
	v->a[30201] = actions(17);
	v->a[30202] = 1;
	v->a[30203] = anon_sym_LPAREN;
	v->a[30204] = actions(55);
	v->a[30205] = 1;
	v->a[30206] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30207] = actions(57);
	v->a[30208] = 1;
	v->a[30209] = anon_sym_DOLLAR;
	v->a[30210] = actions(59);
	v->a[30211] = 1;
	v->a[30212] = anon_sym_DQUOTE;
	v->a[30213] = actions(63);
	v->a[30214] = 1;
	v->a[30215] = anon_sym_DOLLAR_LBRACE;
	v->a[30216] = actions(65);
	v->a[30217] = 1;
	v->a[30218] = anon_sym_DOLLAR_LPAREN;
	v->a[30219] = actions(67);
	small_parse_table_1511(v);
}

void	small_parse_table_1511(t_small_parse_table_array *v)
{
	v->a[30220] = 1;
	v->a[30221] = anon_sym_BQUOTE;
	v->a[30222] = actions(221);
	v->a[30223] = 1;
	v->a[30224] = sym_variable_name;
	v->a[30225] = actions(1152);
	v->a[30226] = 1;
	v->a[30227] = sym_file_descriptor;
	v->a[30228] = state(173);
	v->a[30229] = 1;
	v->a[30230] = sym_command_name;
	v->a[30231] = state(603);
	v->a[30232] = 1;
	v->a[30233] = sym_concatenation;
	v->a[30234] = state(635);
	v->a[30235] = 1;
	v->a[30236] = sym_variable_assignment;
	v->a[30237] = state(673);
	v->a[30238] = 1;
	v->a[30239] = aux_sym_command_repeat1;
	small_parse_table_1512(v);
}

void	small_parse_table_1512(t_small_parse_table_array *v)
{
	v->a[30240] = state(1096);
	v->a[30241] = 1;
	v->a[30242] = sym_subshell;
	v->a[30243] = state(1097);
	v->a[30244] = 1;
	v->a[30245] = sym_command;
	v->a[30246] = state(1225);
	v->a[30247] = 1;
	v->a[30248] = sym_file_redirect;
	v->a[30249] = actions(217);
	v->a[30250] = 3;
	v->a[30251] = sym_raw_string;
	v->a[30252] = sym_number;
	v->a[30253] = sym_word;
	v->a[30254] = state(362);
	v->a[30255] = 5;
	v->a[30256] = sym_arithmetic_expansion;
	v->a[30257] = sym_string;
	v->a[30258] = sym_simple_expansion;
	v->a[30259] = sym_expansion;
	small_parse_table_1513(v);
}

void	small_parse_table_1513(t_small_parse_table_array *v)
{
	v->a[30260] = sym_command_substitution;
	v->a[30261] = actions(1150);
	v->a[30262] = 7;
	v->a[30263] = anon_sym_LT;
	v->a[30264] = anon_sym_GT;
	v->a[30265] = anon_sym_GT_GT;
	v->a[30266] = anon_sym_LT_AMP;
	v->a[30267] = anon_sym_GT_AMP;
	v->a[30268] = anon_sym_GT_PIPE;
	v->a[30269] = anon_sym_LT_GT;
	v->a[30270] = 3;
	v->a[30271] = actions(3);
	v->a[30272] = 1;
	v->a[30273] = sym_comment;
	v->a[30274] = actions(753);
	v->a[30275] = 4;
	v->a[30276] = sym_file_descriptor;
	v->a[30277] = sym__concat;
	v->a[30278] = sym__bare_dollar;
	v->a[30279] = ts_builtin_sym_end;
	small_parse_table_1514(v);
}

void	small_parse_table_1514(t_small_parse_table_array *v)
{
	v->a[30280] = actions(751);
	v->a[30281] = 27;
	v->a[30282] = anon_sym_LPAREN;
	v->a[30283] = anon_sym_PIPE;
	v->a[30284] = anon_sym_SEMI_SEMI;
	v->a[30285] = anon_sym_AMP_AMP;
	v->a[30286] = anon_sym_PIPE_PIPE;
	v->a[30287] = anon_sym_LT;
	v->a[30288] = anon_sym_GT;
	v->a[30289] = anon_sym_GT_GT;
	v->a[30290] = anon_sym_LT_AMP;
	v->a[30291] = anon_sym_GT_AMP;
	v->a[30292] = anon_sym_GT_PIPE;
	v->a[30293] = anon_sym_LT_GT;
	v->a[30294] = anon_sym_LT_LT;
	v->a[30295] = anon_sym_LT_LT_DASH;
	v->a[30296] = aux_sym_heredoc_redirect_token1;
	v->a[30297] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30298] = anon_sym_AMP;
	v->a[30299] = aux_sym_concatenation_token1;
	small_parse_table_1515(v);
}

/* EOF small_parse_table_302.c */
