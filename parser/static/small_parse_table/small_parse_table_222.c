/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_222.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1110(t_small_parse_table_array *v)
{
	v->a[22200] = actions(461);
	v->a[22201] = 1;
	v->a[22202] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22203] = actions(463);
	v->a[22204] = 1;
	v->a[22205] = anon_sym_DOLLAR;
	v->a[22206] = actions(465);
	v->a[22207] = 1;
	v->a[22208] = anon_sym_DQUOTE;
	v->a[22209] = actions(467);
	v->a[22210] = 1;
	v->a[22211] = anon_sym_DOLLAR_LBRACE;
	v->a[22212] = actions(469);
	v->a[22213] = 1;
	v->a[22214] = anon_sym_DOLLAR_LPAREN;
	v->a[22215] = actions(471);
	v->a[22216] = 1;
	v->a[22217] = anon_sym_BQUOTE;
	v->a[22218] = actions(473);
	v->a[22219] = 1;
	small_parse_table_1111(v);
}

void	small_parse_table_1111(t_small_parse_table_array *v)
{
	v->a[22220] = sym__bare_dollar;
	v->a[22221] = state(210);
	v->a[22222] = 1;
	v->a[22223] = aux_sym_command_repeat2;
	v->a[22224] = state(706);
	v->a[22225] = 1;
	v->a[22226] = sym_concatenation;
	v->a[22227] = actions(552);
	v->a[22228] = 2;
	v->a[22229] = sym_file_descriptor;
	v->a[22230] = ts_builtin_sym_end;
	v->a[22231] = actions(457);
	v->a[22232] = 3;
	v->a[22233] = sym_raw_string;
	v->a[22234] = sym_number;
	v->a[22235] = sym_word;
	v->a[22236] = state(333);
	v->a[22237] = 5;
	v->a[22238] = sym_arithmetic_expansion;
	v->a[22239] = sym_string;
	small_parse_table_1112(v);
}

void	small_parse_table_1112(t_small_parse_table_array *v)
{
	v->a[22240] = sym_simple_expansion;
	v->a[22241] = sym_expansion;
	v->a[22242] = sym_command_substitution;
	v->a[22243] = actions(550);
	v->a[22244] = 19;
	v->a[22245] = anon_sym_PIPE;
	v->a[22246] = anon_sym_SEMI_SEMI;
	v->a[22247] = anon_sym_AMP_AMP;
	v->a[22248] = anon_sym_PIPE_PIPE;
	v->a[22249] = anon_sym_LT;
	v->a[22250] = anon_sym_GT;
	v->a[22251] = anon_sym_GT_GT;
	v->a[22252] = anon_sym_AMP_GT;
	v->a[22253] = anon_sym_AMP_GT_GT;
	v->a[22254] = anon_sym_LT_AMP;
	v->a[22255] = anon_sym_GT_AMP;
	v->a[22256] = anon_sym_GT_PIPE;
	v->a[22257] = anon_sym_LT_AMP_DASH;
	v->a[22258] = anon_sym_GT_AMP_DASH;
	v->a[22259] = anon_sym_LT_LT;
	small_parse_table_1113(v);
}

void	small_parse_table_1113(t_small_parse_table_array *v)
{
	v->a[22260] = anon_sym_LT_LT_DASH;
	v->a[22261] = aux_sym_heredoc_redirect_token1;
	v->a[22262] = anon_sym_AMP;
	v->a[22263] = anon_sym_SEMI;
	v->a[22264] = 5;
	v->a[22265] = actions(3);
	v->a[22266] = 1;
	v->a[22267] = sym_comment;
	v->a[22268] = state(208);
	v->a[22269] = 2;
	v->a[22270] = sym_concatenation;
	v->a[22271] = aux_sym_for_statement_repeat1;
	v->a[22272] = actions(548);
	v->a[22273] = 3;
	v->a[22274] = sym_file_descriptor;
	v->a[22275] = sym_variable_name;
	v->a[22276] = ts_builtin_sym_end;
	v->a[22277] = state(377);
	v->a[22278] = 5;
	v->a[22279] = sym_arithmetic_expansion;
	small_parse_table_1114(v);
}

void	small_parse_table_1114(t_small_parse_table_array *v)
{
	v->a[22280] = sym_string;
	v->a[22281] = sym_simple_expansion;
	v->a[22282] = sym_expansion;
	v->a[22283] = sym_command_substitution;
	v->a[22284] = actions(546);
	v->a[22285] = 28;
	v->a[22286] = anon_sym_PIPE;
	v->a[22287] = anon_sym_SEMI_SEMI;
	v->a[22288] = anon_sym_AMP_AMP;
	v->a[22289] = anon_sym_PIPE_PIPE;
	v->a[22290] = anon_sym_LT;
	v->a[22291] = anon_sym_GT;
	v->a[22292] = anon_sym_GT_GT;
	v->a[22293] = anon_sym_AMP_GT;
	v->a[22294] = anon_sym_AMP_GT_GT;
	v->a[22295] = anon_sym_LT_AMP;
	v->a[22296] = anon_sym_GT_AMP;
	v->a[22297] = anon_sym_GT_PIPE;
	v->a[22298] = anon_sym_LT_AMP_DASH;
	v->a[22299] = anon_sym_GT_AMP_DASH;
	small_parse_table_1115(v);
}

/* EOF small_parse_table_222.c */
