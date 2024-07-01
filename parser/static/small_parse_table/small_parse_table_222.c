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
	v->a[22200] = actions(642);
	v->a[22201] = 1;
	v->a[22202] = anon_sym_DOLLAR_LPAREN;
	v->a[22203] = actions(645);
	v->a[22204] = 1;
	v->a[22205] = anon_sym_BQUOTE;
	v->a[22206] = actions(577);
	v->a[22207] = 2;
	v->a[22208] = sym_file_descriptor;
	v->a[22209] = sym_variable_name;
	v->a[22210] = state(209);
	v->a[22211] = 2;
	v->a[22212] = sym_concatenation;
	v->a[22213] = aux_sym_for_statement_repeat1;
	v->a[22214] = actions(627);
	v->a[22215] = 3;
	v->a[22216] = sym_raw_string;
	v->a[22217] = sym_number;
	v->a[22218] = sym_word;
	v->a[22219] = state(442);
	small_parse_table_1111(v);
}

void	small_parse_table_1111(t_small_parse_table_array *v)
{
	v->a[22220] = 5;
	v->a[22221] = sym_arithmetic_expansion;
	v->a[22222] = sym_string;
	v->a[22223] = sym_simple_expansion;
	v->a[22224] = sym_expansion;
	v->a[22225] = sym_command_substitution;
	v->a[22226] = actions(582);
	v->a[22227] = 18;
	v->a[22228] = anon_sym_PIPE;
	v->a[22229] = anon_sym_RPAREN;
	v->a[22230] = anon_sym_SEMI_SEMI;
	v->a[22231] = anon_sym_AMP_AMP;
	v->a[22232] = anon_sym_PIPE_PIPE;
	v->a[22233] = anon_sym_LT;
	v->a[22234] = anon_sym_GT;
	v->a[22235] = anon_sym_GT_GT;
	v->a[22236] = anon_sym_LT_AMP;
	v->a[22237] = anon_sym_GT_AMP;
	v->a[22238] = anon_sym_GT_PIPE;
	v->a[22239] = anon_sym_LT_AMP_DASH;
	small_parse_table_1112(v);
}

void	small_parse_table_1112(t_small_parse_table_array *v)
{
	v->a[22240] = anon_sym_GT_AMP_DASH;
	v->a[22241] = anon_sym_LT_LT;
	v->a[22242] = anon_sym_LT_LT_DASH;
	v->a[22243] = aux_sym_heredoc_redirect_token1;
	v->a[22244] = anon_sym_AMP;
	v->a[22245] = anon_sym_SEMI;
	v->a[22246] = 6;
	v->a[22247] = actions(3);
	v->a[22248] = 1;
	v->a[22249] = sym_comment;
	v->a[22250] = actions(652);
	v->a[22251] = 1;
	v->a[22252] = sym_variable_name;
	v->a[22253] = actions(379);
	v->a[22254] = 2;
	v->a[22255] = sym_file_descriptor;
	v->a[22256] = sym__bare_dollar;
	v->a[22257] = actions(650);
	v->a[22258] = 2;
	v->a[22259] = aux_sym__simple_variable_name_token1;
	small_parse_table_1113(v);
}

void	small_parse_table_1113(t_small_parse_table_array *v)
{
	v->a[22260] = aux_sym__multiline_variable_name_token1;
	v->a[22261] = actions(648);
	v->a[22262] = 9;
	v->a[22263] = anon_sym_BANG;
	v->a[22264] = anon_sym_DASH;
	v->a[22265] = anon_sym_STAR;
	v->a[22266] = anon_sym_QMARK;
	v->a[22267] = anon_sym_DOLLAR;
	v->a[22268] = anon_sym_POUND;
	v->a[22269] = anon_sym_AT;
	v->a[22270] = anon_sym_0;
	v->a[22271] = anon_sym__;
	v->a[22272] = actions(381);
	v->a[22273] = 22;
	v->a[22274] = anon_sym_LPAREN;
	v->a[22275] = anon_sym_PIPE;
	v->a[22276] = anon_sym_AMP_AMP;
	v->a[22277] = anon_sym_PIPE_PIPE;
	v->a[22278] = anon_sym_LT;
	v->a[22279] = anon_sym_GT;
	small_parse_table_1114(v);
}

void	small_parse_table_1114(t_small_parse_table_array *v)
{
	v->a[22280] = anon_sym_GT_GT;
	v->a[22281] = anon_sym_LT_AMP;
	v->a[22282] = anon_sym_GT_AMP;
	v->a[22283] = anon_sym_GT_PIPE;
	v->a[22284] = anon_sym_LT_AMP_DASH;
	v->a[22285] = anon_sym_GT_AMP_DASH;
	v->a[22286] = anon_sym_LT_LT;
	v->a[22287] = anon_sym_LT_LT_DASH;
	v->a[22288] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22289] = anon_sym_DQUOTE;
	v->a[22290] = sym_raw_string;
	v->a[22291] = sym_number;
	v->a[22292] = anon_sym_DOLLAR_LBRACE;
	v->a[22293] = anon_sym_DOLLAR_LPAREN;
	v->a[22294] = anon_sym_BQUOTE;
	v->a[22295] = sym_word;
	v->a[22296] = 14;
	v->a[22297] = actions(3);
	v->a[22298] = 1;
	v->a[22299] = sym_comment;
	small_parse_table_1115(v);
}

/* EOF small_parse_table_222.c */
