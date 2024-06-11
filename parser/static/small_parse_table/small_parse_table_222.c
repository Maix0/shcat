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
	v->a[22200] = 1;
	v->a[22201] = sym_comment;
	v->a[22202] = actions(411);
	v->a[22203] = 1;
	v->a[22204] = sym_variable_name;
	v->a[22205] = actions(379);
	v->a[22206] = 2;
	v->a[22207] = sym_file_descriptor;
	v->a[22208] = sym__bare_dollar;
	v->a[22209] = actions(409);
	v->a[22210] = 2;
	v->a[22211] = aux_sym__simple_variable_name_token1;
	v->a[22212] = aux_sym__multiline_variable_name_token1;
	v->a[22213] = actions(407);
	v->a[22214] = 9;
	v->a[22215] = anon_sym_BANG;
	v->a[22216] = anon_sym_DASH;
	v->a[22217] = anon_sym_STAR;
	v->a[22218] = anon_sym_QMARK;
	v->a[22219] = anon_sym_DOLLAR;
	small_parse_table_1111(v);
}

void	small_parse_table_1111(t_small_parse_table_array *v)
{
	v->a[22220] = anon_sym_POUND;
	v->a[22221] = anon_sym_AT;
	v->a[22222] = anon_sym_0;
	v->a[22223] = anon_sym__;
	v->a[22224] = actions(381);
	v->a[22225] = 24;
	v->a[22226] = anon_sym_PIPE;
	v->a[22227] = anon_sym_AMP_AMP;
	v->a[22228] = anon_sym_PIPE_PIPE;
	v->a[22229] = anon_sym_LT;
	v->a[22230] = anon_sym_GT;
	v->a[22231] = anon_sym_GT_GT;
	v->a[22232] = anon_sym_AMP_GT;
	v->a[22233] = anon_sym_AMP_GT_GT;
	v->a[22234] = anon_sym_LT_AMP;
	v->a[22235] = anon_sym_GT_AMP;
	v->a[22236] = anon_sym_GT_PIPE;
	v->a[22237] = anon_sym_LT_AMP_DASH;
	v->a[22238] = anon_sym_GT_AMP_DASH;
	v->a[22239] = anon_sym_LT_LT;
	small_parse_table_1112(v);
}

void	small_parse_table_1112(t_small_parse_table_array *v)
{
	v->a[22240] = anon_sym_LT_LT_DASH;
	v->a[22241] = aux_sym_heredoc_redirect_token1;
	v->a[22242] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22243] = anon_sym_DQUOTE;
	v->a[22244] = sym_raw_string;
	v->a[22245] = sym_number;
	v->a[22246] = anon_sym_DOLLAR_LBRACE;
	v->a[22247] = anon_sym_DOLLAR_LPAREN;
	v->a[22248] = anon_sym_BQUOTE;
	v->a[22249] = sym_word;
	v->a[22250] = 5;
	v->a[22251] = actions(3);
	v->a[22252] = 1;
	v->a[22253] = sym_comment;
	v->a[22254] = state(197);
	v->a[22255] = 2;
	v->a[22256] = sym_concatenation;
	v->a[22257] = aux_sym_for_statement_repeat1;
	v->a[22258] = actions(608);
	v->a[22259] = 3;
	small_parse_table_1113(v);
}

void	small_parse_table_1113(t_small_parse_table_array *v)
{
	v->a[22260] = sym_file_descriptor;
	v->a[22261] = sym_variable_name;
	v->a[22262] = ts_builtin_sym_end;
	v->a[22263] = state(368);
	v->a[22264] = 5;
	v->a[22265] = sym_arithmetic_expansion;
	v->a[22266] = sym_string;
	v->a[22267] = sym_simple_expansion;
	v->a[22268] = sym_expansion;
	v->a[22269] = sym_command_substitution;
	v->a[22270] = actions(610);
	v->a[22271] = 28;
	v->a[22272] = anon_sym_PIPE;
	v->a[22273] = anon_sym_SEMI_SEMI;
	v->a[22274] = anon_sym_AMP_AMP;
	v->a[22275] = anon_sym_PIPE_PIPE;
	v->a[22276] = anon_sym_LT;
	v->a[22277] = anon_sym_GT;
	v->a[22278] = anon_sym_GT_GT;
	v->a[22279] = anon_sym_AMP_GT;
	small_parse_table_1114(v);
}

void	small_parse_table_1114(t_small_parse_table_array *v)
{
	v->a[22280] = anon_sym_AMP_GT_GT;
	v->a[22281] = anon_sym_LT_AMP;
	v->a[22282] = anon_sym_GT_AMP;
	v->a[22283] = anon_sym_GT_PIPE;
	v->a[22284] = anon_sym_LT_AMP_DASH;
	v->a[22285] = anon_sym_GT_AMP_DASH;
	v->a[22286] = anon_sym_LT_LT;
	v->a[22287] = anon_sym_LT_LT_DASH;
	v->a[22288] = aux_sym_heredoc_redirect_token1;
	v->a[22289] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22290] = anon_sym_AMP;
	v->a[22291] = anon_sym_DOLLAR;
	v->a[22292] = anon_sym_DQUOTE;
	v->a[22293] = sym_raw_string;
	v->a[22294] = sym_number;
	v->a[22295] = anon_sym_DOLLAR_LBRACE;
	v->a[22296] = anon_sym_DOLLAR_LPAREN;
	v->a[22297] = anon_sym_BQUOTE;
	v->a[22298] = sym_word;
	v->a[22299] = anon_sym_SEMI;
	small_parse_table_1115(v);
}

/* EOF small_parse_table_222.c */
