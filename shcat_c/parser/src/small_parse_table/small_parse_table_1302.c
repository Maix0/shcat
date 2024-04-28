/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1302.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6510(t_small_parse_table_array *v)
{
	v->a[130200] = aux_sym_number_token1;
	v->a[130201] = aux_sym_number_token2;
	v->a[130202] = anon_sym_DOLLAR_LPAREN;
	v->a[130203] = sym_word;
	v->a[130204] = actions(5723);
	v->a[130205] = 26;
	v->a[130206] = sym_file_descriptor;
	v->a[130207] = sym_variable_name;
	v->a[130208] = sym_test_operator;
	v->a[130209] = sym__brace_start;
	v->a[130210] = anon_sym_LPAREN_LPAREN;
	v->a[130211] = anon_sym_PIPE_PIPE;
	v->a[130212] = anon_sym_AMP_AMP;
	v->a[130213] = anon_sym_GT_GT;
	v->a[130214] = anon_sym_PIPE_AMP;
	v->a[130215] = anon_sym_RBRACK;
	v->a[130216] = anon_sym_AMP_GT_GT;
	v->a[130217] = anon_sym_GT_PIPE;
	v->a[130218] = anon_sym_LT_AMP_DASH;
	v->a[130219] = anon_sym_GT_AMP_DASH;
	small_parse_table_6511(v);
}

void	small_parse_table_6511(t_small_parse_table_array *v)
{
	v->a[130220] = anon_sym_LT_LT_DASH;
	v->a[130221] = anon_sym_LT_LT_LT;
	v->a[130222] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[130223] = anon_sym_DOLLAR_LBRACK;
	v->a[130224] = anon_sym_DQUOTE;
	v->a[130225] = sym_raw_string;
	v->a[130226] = sym_ansi_c_string;
	v->a[130227] = anon_sym_DOLLAR_LBRACE;
	v->a[130228] = anon_sym_BQUOTE;
	v->a[130229] = anon_sym_DOLLAR_BQUOTE;
	v->a[130230] = anon_sym_LT_LPAREN;
	v->a[130231] = anon_sym_GT_LPAREN;
	v->a[130232] = 3;
	v->a[130233] = actions(71);
	v->a[130234] = 1;
	v->a[130235] = sym_comment;
	v->a[130236] = actions(1336);
	v->a[130237] = 14;
	v->a[130238] = anon_sym_PIPE;
	v->a[130239] = anon_sym_LT;
	small_parse_table_6512(v);
}

void	small_parse_table_6512(t_small_parse_table_array *v)
{
	v->a[130240] = anon_sym_GT;
	v->a[130241] = anon_sym_LT_LT;
	v->a[130242] = anon_sym_AMP_GT;
	v->a[130243] = anon_sym_LT_AMP;
	v->a[130244] = anon_sym_GT_AMP;
	v->a[130245] = anon_sym_DOLLAR;
	v->a[130246] = aux_sym_number_token1;
	v->a[130247] = aux_sym_number_token2;
	v->a[130248] = anon_sym_DOLLAR_LPAREN;
	v->a[130249] = anon_sym_BQUOTE;
	v->a[130250] = aux_sym__simple_variable_name_token1;
	v->a[130251] = sym_word;
	v->a[130252] = actions(1338);
	v->a[130253] = 26;
	v->a[130254] = sym_file_descriptor;
	v->a[130255] = sym__concat;
	v->a[130256] = sym_variable_name;
	v->a[130257] = sym_test_operator;
	v->a[130258] = sym__brace_start;
	v->a[130259] = anon_sym_LPAREN_LPAREN;
	small_parse_table_6513(v);
}

void	small_parse_table_6513(t_small_parse_table_array *v)
{
	v->a[130260] = anon_sym_PIPE_PIPE;
	v->a[130261] = anon_sym_AMP_AMP;
	v->a[130262] = anon_sym_GT_GT;
	v->a[130263] = anon_sym_PIPE_AMP;
	v->a[130264] = anon_sym_AMP_GT_GT;
	v->a[130265] = anon_sym_GT_PIPE;
	v->a[130266] = anon_sym_LT_AMP_DASH;
	v->a[130267] = anon_sym_GT_AMP_DASH;
	v->a[130268] = anon_sym_LT_LT_DASH;
	v->a[130269] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[130270] = anon_sym_DOLLAR_LBRACK;
	v->a[130271] = aux_sym_concatenation_token1;
	v->a[130272] = sym__special_character;
	v->a[130273] = anon_sym_DQUOTE;
	v->a[130274] = sym_raw_string;
	v->a[130275] = sym_ansi_c_string;
	v->a[130276] = anon_sym_DOLLAR_LBRACE;
	v->a[130277] = anon_sym_DOLLAR_BQUOTE;
	v->a[130278] = anon_sym_LT_LPAREN;
	v->a[130279] = anon_sym_GT_LPAREN;
	small_parse_table_6514(v);
}

void	small_parse_table_6514(t_small_parse_table_array *v)
{
	v->a[130280] = 3;
	v->a[130281] = actions(71);
	v->a[130282] = 1;
	v->a[130283] = sym_comment;
	v->a[130284] = actions(1300);
	v->a[130285] = 14;
	v->a[130286] = anon_sym_PIPE;
	v->a[130287] = anon_sym_LT;
	v->a[130288] = anon_sym_GT;
	v->a[130289] = anon_sym_LT_LT;
	v->a[130290] = anon_sym_AMP_GT;
	v->a[130291] = anon_sym_LT_AMP;
	v->a[130292] = anon_sym_GT_AMP;
	v->a[130293] = anon_sym_DOLLAR;
	v->a[130294] = sym__special_character;
	v->a[130295] = aux_sym_number_token1;
	v->a[130296] = aux_sym_number_token2;
	v->a[130297] = anon_sym_DOLLAR_LPAREN;
	v->a[130298] = anon_sym_BQUOTE;
	v->a[130299] = sym_word;
	small_parse_table_6515(v);
}

/* EOF small_parse_table_1302.c */
