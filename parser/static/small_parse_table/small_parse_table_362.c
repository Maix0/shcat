/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_362.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1810(t_small_parse_table_array *v)
{
	v->a[36200] = actions(312);
	v->a[36201] = 2;
	v->a[36202] = anon_sym_LPAREN_LPAREN;
	v->a[36203] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36204] = actions(336);
	v->a[36205] = 2;
	v->a[36206] = anon_sym_LT_LPAREN;
	v->a[36207] = anon_sym_GT_LPAREN;
	v->a[36208] = actions(773);
	v->a[36209] = 2;
	v->a[36210] = sym_raw_string;
	v->a[36211] = sym_ansi_c_string;
	v->a[36212] = actions(1392);
	v->a[36213] = 2;
	v->a[36214] = anon_sym_LT_AMP_DASH;
	v->a[36215] = anon_sym_GT_AMP_DASH;
	v->a[36216] = state(3127);
	v->a[36217] = 2;
	v->a[36218] = sym_variable_assignment;
	v->a[36219] = aux_sym_command_repeat1;
	small_parse_table_1811(v);
}

void	small_parse_table_1811(t_small_parse_table_array *v)
{
	v->a[36220] = state(3581);
	v->a[36221] = 2;
	v->a[36222] = sym_file_redirect;
	v->a[36223] = sym_herestring_redirect;
	v->a[36224] = actions(1390);
	v->a[36225] = 3;
	v->a[36226] = anon_sym_GT_GT;
	v->a[36227] = anon_sym_AMP_GT_GT;
	v->a[36228] = anon_sym_GT_PIPE;
	v->a[36229] = actions(1388);
	v->a[36230] = 5;
	v->a[36231] = anon_sym_LT;
	v->a[36232] = anon_sym_GT;
	v->a[36233] = anon_sym_AMP_GT;
	v->a[36234] = anon_sym_LT_AMP;
	v->a[36235] = anon_sym_GT_AMP;
	v->a[36236] = state(938);
	v->a[36237] = 9;
	v->a[36238] = sym_arithmetic_expansion;
	v->a[36239] = sym_brace_expression;
	small_parse_table_1812(v);
}

void	small_parse_table_1812(t_small_parse_table_array *v)
{
	v->a[36240] = sym_string;
	v->a[36241] = sym_translated_string;
	v->a[36242] = sym_number;
	v->a[36243] = sym_simple_expansion;
	v->a[36244] = sym_expansion;
	v->a[36245] = sym_command_substitution;
	v->a[36246] = sym_process_substitution;
	v->a[36247] = 5;
	v->a[36248] = actions(3);
	v->a[36249] = 1;
	v->a[36250] = sym_comment;
	v->a[36251] = actions(4852);
	v->a[36252] = 1;
	v->a[36253] = sym__special_character;
	v->a[36254] = state(952);
	v->a[36255] = 1;
	v->a[36256] = aux_sym__literal_repeat1;
	v->a[36257] = actions(1364);
	v->a[36258] = 5;
	v->a[36259] = sym_file_descriptor;
	small_parse_table_1813(v);
}

void	small_parse_table_1813(t_small_parse_table_array *v)
{
	v->a[36260] = sym_test_operator;
	v->a[36261] = sym__bare_dollar;
	v->a[36262] = sym__brace_start;
	v->a[36263] = aux_sym_heredoc_redirect_token1;
	v->a[36264] = actions(1362);
	v->a[36265] = 42;
	v->a[36266] = anon_sym_LPAREN_LPAREN;
	v->a[36267] = anon_sym_SEMI;
	v->a[36268] = anon_sym_PIPE_PIPE;
	v->a[36269] = anon_sym_AMP_AMP;
	v->a[36270] = anon_sym_PIPE;
	v->a[36271] = anon_sym_AMP;
	v->a[36272] = anon_sym_EQ_EQ;
	v->a[36273] = anon_sym_LT;
	v->a[36274] = anon_sym_GT;
	v->a[36275] = anon_sym_LT_LT;
	v->a[36276] = anon_sym_GT_GT;
	v->a[36277] = anon_sym_LPAREN;
	v->a[36278] = anon_sym_esac;
	v->a[36279] = anon_sym_SEMI_SEMI;
	small_parse_table_1814(v);
}

void	small_parse_table_1814(t_small_parse_table_array *v)
{
	v->a[36280] = anon_sym_SEMI_AMP;
	v->a[36281] = anon_sym_SEMI_SEMI_AMP;
	v->a[36282] = anon_sym_PIPE_AMP;
	v->a[36283] = anon_sym_EQ_TILDE;
	v->a[36284] = anon_sym_AMP_GT;
	v->a[36285] = anon_sym_AMP_GT_GT;
	v->a[36286] = anon_sym_LT_AMP;
	v->a[36287] = anon_sym_GT_AMP;
	v->a[36288] = anon_sym_GT_PIPE;
	v->a[36289] = anon_sym_LT_AMP_DASH;
	v->a[36290] = anon_sym_GT_AMP_DASH;
	v->a[36291] = anon_sym_LT_LT_DASH;
	v->a[36292] = anon_sym_LT_LT_LT;
	v->a[36293] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36294] = anon_sym_DOLLAR_LBRACK;
	v->a[36295] = anon_sym_DOLLAR;
	v->a[36296] = anon_sym_DQUOTE;
	v->a[36297] = sym_raw_string;
	v->a[36298] = sym_ansi_c_string;
	v->a[36299] = aux_sym_number_token1;
	small_parse_table_1815(v);
}

/* EOF small_parse_table_362.c */
