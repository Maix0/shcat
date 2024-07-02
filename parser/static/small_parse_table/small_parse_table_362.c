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
	v->a[36200] = sym_concatenation;
	v->a[36201] = actions(1112);
	v->a[36202] = 3;
	v->a[36203] = sym_raw_string;
	v->a[36204] = sym_number;
	v->a[36205] = sym_word;
	v->a[36206] = state(826);
	v->a[36207] = 5;
	v->a[36208] = sym_arithmetic_expansion;
	v->a[36209] = sym_string;
	v->a[36210] = sym_simple_expansion;
	v->a[36211] = sym_expansion;
	v->a[36212] = sym_command_substitution;
	v->a[36213] = actions(505);
	v->a[36214] = 12;
	v->a[36215] = anon_sym_PIPE;
	v->a[36216] = anon_sym_AMP_AMP;
	v->a[36217] = anon_sym_PIPE_PIPE;
	v->a[36218] = anon_sym_LT;
	v->a[36219] = anon_sym_GT;
	small_parse_table_1811(v);
}

void	small_parse_table_1811(t_small_parse_table_array *v)
{
	v->a[36220] = anon_sym_GT_GT;
	v->a[36221] = anon_sym_LT_AMP;
	v->a[36222] = anon_sym_GT_AMP;
	v->a[36223] = anon_sym_GT_PIPE;
	v->a[36224] = anon_sym_LT_GT;
	v->a[36225] = anon_sym_LT_LT;
	v->a[36226] = anon_sym_LT_LT_DASH;
	v->a[36227] = 6;
	v->a[36228] = actions(3);
	v->a[36229] = 1;
	v->a[36230] = sym_comment;
	v->a[36231] = actions(1170);
	v->a[36232] = 1;
	v->a[36233] = aux_sym_concatenation_token1;
	v->a[36234] = actions(1207);
	v->a[36235] = 1;
	v->a[36236] = sym__concat;
	v->a[36237] = state(489);
	v->a[36238] = 1;
	v->a[36239] = aux_sym_concatenation_repeat1;
	small_parse_table_1812(v);
}

void	small_parse_table_1812(t_small_parse_table_array *v)
{
	v->a[36240] = actions(1158);
	v->a[36241] = 2;
	v->a[36242] = sym_file_descriptor;
	v->a[36243] = sym_variable_name;
	v->a[36244] = actions(1154);
	v->a[36245] = 25;
	v->a[36246] = anon_sym_PIPE;
	v->a[36247] = anon_sym_SEMI_SEMI;
	v->a[36248] = anon_sym_AMP_AMP;
	v->a[36249] = anon_sym_PIPE_PIPE;
	v->a[36250] = anon_sym_LT;
	v->a[36251] = anon_sym_GT;
	v->a[36252] = anon_sym_GT_GT;
	v->a[36253] = anon_sym_LT_AMP;
	v->a[36254] = anon_sym_GT_AMP;
	v->a[36255] = anon_sym_GT_PIPE;
	v->a[36256] = anon_sym_LT_GT;
	v->a[36257] = anon_sym_LT_LT;
	v->a[36258] = anon_sym_LT_LT_DASH;
	v->a[36259] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1813(v);
}

void	small_parse_table_1813(t_small_parse_table_array *v)
{
	v->a[36260] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36261] = anon_sym_AMP;
	v->a[36262] = anon_sym_DOLLAR;
	v->a[36263] = anon_sym_DQUOTE;
	v->a[36264] = sym_raw_string;
	v->a[36265] = sym_number;
	v->a[36266] = anon_sym_DOLLAR_LBRACE;
	v->a[36267] = anon_sym_DOLLAR_LPAREN;
	v->a[36268] = anon_sym_BQUOTE;
	v->a[36269] = sym_word;
	v->a[36270] = anon_sym_SEMI;
	v->a[36271] = 3;
	v->a[36272] = actions(3);
	v->a[36273] = 1;
	v->a[36274] = sym_comment;
	v->a[36275] = actions(713);
	v->a[36276] = 3;
	v->a[36277] = sym_file_descriptor;
	v->a[36278] = sym__concat;
	v->a[36279] = sym__bare_dollar;
	small_parse_table_1814(v);
}

void	small_parse_table_1814(t_small_parse_table_array *v)
{
	v->a[36280] = actions(711);
	v->a[36281] = 27;
	v->a[36282] = anon_sym_PIPE;
	v->a[36283] = anon_sym_RPAREN;
	v->a[36284] = anon_sym_SEMI_SEMI;
	v->a[36285] = anon_sym_AMP_AMP;
	v->a[36286] = anon_sym_PIPE_PIPE;
	v->a[36287] = anon_sym_LT;
	v->a[36288] = anon_sym_GT;
	v->a[36289] = anon_sym_GT_GT;
	v->a[36290] = anon_sym_LT_AMP;
	v->a[36291] = anon_sym_GT_AMP;
	v->a[36292] = anon_sym_GT_PIPE;
	v->a[36293] = anon_sym_LT_GT;
	v->a[36294] = anon_sym_LT_LT;
	v->a[36295] = anon_sym_LT_LT_DASH;
	v->a[36296] = aux_sym_heredoc_redirect_token1;
	v->a[36297] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36298] = anon_sym_AMP;
	v->a[36299] = aux_sym_concatenation_token1;
	small_parse_table_1815(v);
}

/* EOF small_parse_table_362.c */
