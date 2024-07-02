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
	v->a[22200] = anon_sym_PLUS_EQ;
	v->a[22201] = anon_sym_DASH_EQ;
	v->a[22202] = anon_sym_STAR_EQ;
	v->a[22203] = anon_sym_SLASH_EQ;
	v->a[22204] = anon_sym_PERCENT_EQ;
	v->a[22205] = anon_sym_LT_LT_EQ;
	v->a[22206] = anon_sym_GT_GT_EQ;
	v->a[22207] = anon_sym_AMP_EQ;
	v->a[22208] = anon_sym_CARET_EQ;
	v->a[22209] = anon_sym_PIPE_EQ;
	v->a[22210] = anon_sym_EQ_EQ;
	v->a[22211] = anon_sym_BANG_EQ;
	v->a[22212] = anon_sym_LT_EQ;
	v->a[22213] = anon_sym_GT_EQ;
	v->a[22214] = anon_sym_QMARK;
	v->a[22215] = anon_sym_COLON;
	v->a[22216] = 5;
	v->a[22217] = actions(3);
	v->a[22218] = 1;
	v->a[22219] = sym_comment;
	small_parse_table_1111(v);
}

void	small_parse_table_1111(t_small_parse_table_array *v)
{
	v->a[22220] = actions(515);
	v->a[22221] = 2;
	v->a[22222] = sym_file_descriptor;
	v->a[22223] = sym_variable_name;
	v->a[22224] = state(230);
	v->a[22225] = 2;
	v->a[22226] = sym_concatenation;
	v->a[22227] = aux_sym_for_statement_repeat1;
	v->a[22228] = state(481);
	v->a[22229] = 5;
	v->a[22230] = sym_arithmetic_expansion;
	v->a[22231] = sym_string;
	v->a[22232] = sym_simple_expansion;
	v->a[22233] = sym_expansion;
	v->a[22234] = sym_command_substitution;
	v->a[22235] = actions(513);
	v->a[22236] = 25;
	v->a[22237] = anon_sym_PIPE;
	v->a[22238] = anon_sym_SEMI_SEMI;
	v->a[22239] = anon_sym_AMP_AMP;
	small_parse_table_1112(v);
}

void	small_parse_table_1112(t_small_parse_table_array *v)
{
	v->a[22240] = anon_sym_PIPE_PIPE;
	v->a[22241] = anon_sym_LT;
	v->a[22242] = anon_sym_GT;
	v->a[22243] = anon_sym_GT_GT;
	v->a[22244] = anon_sym_LT_AMP;
	v->a[22245] = anon_sym_GT_AMP;
	v->a[22246] = anon_sym_GT_PIPE;
	v->a[22247] = anon_sym_LT_GT;
	v->a[22248] = anon_sym_LT_LT;
	v->a[22249] = anon_sym_LT_LT_DASH;
	v->a[22250] = aux_sym_heredoc_redirect_token1;
	v->a[22251] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22252] = anon_sym_AMP;
	v->a[22253] = anon_sym_DOLLAR;
	v->a[22254] = anon_sym_DQUOTE;
	v->a[22255] = sym_raw_string;
	v->a[22256] = sym_number;
	v->a[22257] = anon_sym_DOLLAR_LBRACE;
	v->a[22258] = anon_sym_DOLLAR_LPAREN;
	v->a[22259] = anon_sym_BQUOTE;
	small_parse_table_1113(v);
}

void	small_parse_table_1113(t_small_parse_table_array *v)
{
	v->a[22260] = sym_word;
	v->a[22261] = anon_sym_SEMI;
	v->a[22262] = 12;
	v->a[22263] = actions(3);
	v->a[22264] = 1;
	v->a[22265] = sym_comment;
	v->a[22266] = actions(597);
	v->a[22267] = 1;
	v->a[22268] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22269] = actions(600);
	v->a[22270] = 1;
	v->a[22271] = anon_sym_DOLLAR;
	v->a[22272] = actions(603);
	v->a[22273] = 1;
	v->a[22274] = anon_sym_DQUOTE;
	v->a[22275] = actions(606);
	v->a[22276] = 1;
	v->a[22277] = anon_sym_DOLLAR_LBRACE;
	v->a[22278] = actions(609);
	v->a[22279] = 1;
	small_parse_table_1114(v);
}

void	small_parse_table_1114(t_small_parse_table_array *v)
{
	v->a[22280] = anon_sym_DOLLAR_LPAREN;
	v->a[22281] = actions(612);
	v->a[22282] = 1;
	v->a[22283] = anon_sym_BQUOTE;
	v->a[22284] = actions(540);
	v->a[22285] = 2;
	v->a[22286] = sym_file_descriptor;
	v->a[22287] = sym_variable_name;
	v->a[22288] = state(230);
	v->a[22289] = 2;
	v->a[22290] = sym_concatenation;
	v->a[22291] = aux_sym_for_statement_repeat1;
	v->a[22292] = actions(746);
	v->a[22293] = 3;
	v->a[22294] = sym_raw_string;
	v->a[22295] = sym_number;
	v->a[22296] = sym_word;
	v->a[22297] = state(481);
	v->a[22298] = 5;
	v->a[22299] = sym_arithmetic_expansion;
	small_parse_table_1115(v);
}

/* EOF small_parse_table_222.c */
