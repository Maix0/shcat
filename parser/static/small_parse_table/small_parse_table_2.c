/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10(t_small_parse_table_array *v)
{
	v->a[200] = anon_sym_LPAREN;
	v->a[201] = actions(697);
	v->a[202] = 1;
	v->a[203] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[204] = actions(699);
	v->a[205] = 1;
	v->a[206] = anon_sym_DOLLAR;
	v->a[207] = actions(701);
	v->a[208] = 1;
	v->a[209] = sym__special_character;
	v->a[210] = actions(703);
	v->a[211] = 1;
	v->a[212] = anon_sym_DQUOTE;
	v->a[213] = actions(705);
	v->a[214] = 1;
	v->a[215] = aux_sym_number_token1;
	v->a[216] = actions(707);
	v->a[217] = 1;
	v->a[218] = aux_sym_number_token2;
	v->a[219] = actions(709);
	small_parse_table_11(v);
}

void	small_parse_table_11(t_small_parse_table_array *v)
{
	v->a[220] = 1;
	v->a[221] = anon_sym_DOLLAR_LBRACE;
	v->a[222] = actions(711);
	v->a[223] = 1;
	v->a[224] = anon_sym_DOLLAR_LPAREN;
	v->a[225] = actions(713);
	v->a[226] = 1;
	v->a[227] = anon_sym_BQUOTE;
	v->a[228] = actions(715);
	v->a[229] = 1;
	v->a[230] = anon_sym_DOLLAR_BQUOTE;
	v->a[231] = actions(717);
	v->a[232] = 1;
	v->a[233] = sym_test_operator;
	v->a[234] = actions(719);
	v->a[235] = 1;
	v->a[236] = sym__bare_dollar;
	v->a[237] = actions(721);
	v->a[238] = 1;
	v->a[239] = sym__brace_start;
	small_parse_table_12(v);
}

void	small_parse_table_12(t_small_parse_table_array *v)
{
	v->a[240] = state(301);
	v->a[241] = 1;
	v->a[242] = aux_sym_command_repeat2;
	v->a[243] = state(901);
	v->a[244] = 1;
	v->a[245] = aux_sym__literal_repeat1;
	v->a[246] = state(1121);
	v->a[247] = 1;
	v->a[248] = sym_concatenation;
	v->a[249] = state(2216);
	v->a[250] = 1;
	v->a[251] = sym_subshell;
	v->a[252] = actions(689);
	v->a[253] = 2;
	v->a[254] = sym_raw_string;
	v->a[255] = sym_word;
	v->a[256] = actions(759);
	v->a[257] = 2;
	v->a[258] = sym_file_descriptor;
	v->a[259] = aux_sym_heredoc_redirect_token1;
	small_parse_table_13(v);
}

void	small_parse_table_13(t_small_parse_table_array *v)
{
	v->a[260] = state(555);
	v->a[261] = 7;
	v->a[262] = sym_arithmetic_expansion;
	v->a[263] = sym_brace_expression;
	v->a[264] = sym_string;
	v->a[265] = sym_number;
	v->a[266] = sym_simple_expansion;
	v->a[267] = sym_expansion;
	v->a[268] = sym_command_substitution;
	v->a[269] = actions(757);
	v->a[270] = 22;
	v->a[271] = anon_sym_esac;
	v->a[272] = anon_sym_PIPE;
	v->a[273] = anon_sym_SEMI_SEMI;
	v->a[274] = anon_sym_SEMI_AMP;
	v->a[275] = anon_sym_SEMI_SEMI_AMP;
	v->a[276] = anon_sym_PIPE_AMP;
	v->a[277] = anon_sym_AMP_AMP;
	v->a[278] = anon_sym_PIPE_PIPE;
	v->a[279] = anon_sym_LT;
	small_parse_table_14(v);
}

void	small_parse_table_14(t_small_parse_table_array *v)
{
	v->a[280] = anon_sym_GT;
	v->a[281] = anon_sym_GT_GT;
	v->a[282] = anon_sym_AMP_GT;
	v->a[283] = anon_sym_AMP_GT_GT;
	v->a[284] = anon_sym_LT_AMP;
	v->a[285] = anon_sym_GT_AMP;
	v->a[286] = anon_sym_GT_PIPE;
	v->a[287] = anon_sym_LT_AMP_DASH;
	v->a[288] = anon_sym_GT_AMP_DASH;
	v->a[289] = anon_sym_LT_LT;
	v->a[290] = anon_sym_LT_LT_DASH;
	v->a[291] = anon_sym_AMP;
	v->a[292] = anon_sym_SEMI;
	v->a[293] = 21;
	v->a[294] = actions(3);
	v->a[295] = 1;
	v->a[296] = sym_comment;
	v->a[297] = actions(768);
	v->a[298] = 1;
	v->a[299] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_15(v);
}

/* EOF small_parse_table_2.c */
