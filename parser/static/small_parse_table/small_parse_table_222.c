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
	v->a[22200] = aux_sym_command_repeat2;
	v->a[22201] = state(775);
	v->a[22202] = 1;
	v->a[22203] = sym_concatenation;
	v->a[22204] = actions(913);
	v->a[22205] = 3;
	v->a[22206] = sym_raw_string;
	v->a[22207] = sym_number;
	v->a[22208] = sym_word;
	v->a[22209] = state(600);
	v->a[22210] = 5;
	v->a[22211] = sym_arithmetic_expansion;
	v->a[22212] = sym_string;
	v->a[22213] = sym_simple_expansion;
	v->a[22214] = sym_expansion;
	v->a[22215] = sym_command_substitution;
	v->a[22216] = actions(450);
	v->a[22217] = 7;
	v->a[22218] = anon_sym_PIPE;
	v->a[22219] = anon_sym_AMP_AMP;
	small_parse_table_1111(v);
}

void	small_parse_table_1111(t_small_parse_table_array *v)
{
	v->a[22220] = anon_sym_PIPE_PIPE;
	v->a[22221] = anon_sym_LT;
	v->a[22222] = anon_sym_GT;
	v->a[22223] = anon_sym_GT_GT;
	v->a[22224] = anon_sym_LT_LT;
	v->a[22225] = 6;
	v->a[22226] = actions(3);
	v->a[22227] = 1;
	v->a[22228] = sym_comment;
	v->a[22229] = actions(981);
	v->a[22230] = 1;
	v->a[22231] = sym_variable_name;
	v->a[22232] = actions(995);
	v->a[22233] = 1;
	v->a[22234] = aux_sym_concatenation_token1;
	v->a[22235] = actions(998);
	v->a[22236] = 1;
	v->a[22237] = sym__concat;
	v->a[22238] = state(279);
	v->a[22239] = 1;
	small_parse_table_1112(v);
}

void	small_parse_table_1112(t_small_parse_table_array *v)
{
	v->a[22240] = aux_sym_concatenation_repeat1;
	v->a[22241] = actions(973);
	v->a[22242] = 20;
	v->a[22243] = anon_sym_PIPE;
	v->a[22244] = anon_sym_RPAREN;
	v->a[22245] = anon_sym_SEMI_SEMI;
	v->a[22246] = anon_sym_AMP_AMP;
	v->a[22247] = anon_sym_PIPE_PIPE;
	v->a[22248] = anon_sym_LT;
	v->a[22249] = anon_sym_GT;
	v->a[22250] = anon_sym_GT_GT;
	v->a[22251] = anon_sym_LT_LT;
	v->a[22252] = aux_sym_heredoc_redirect_token1;
	v->a[22253] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22254] = anon_sym_DOLLAR;
	v->a[22255] = anon_sym_DQUOTE;
	v->a[22256] = sym_raw_string;
	v->a[22257] = sym_number;
	v->a[22258] = anon_sym_DOLLAR_LBRACE;
	v->a[22259] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1113(v);
}

void	small_parse_table_1113(t_small_parse_table_array *v)
{
	v->a[22260] = anon_sym_BQUOTE;
	v->a[22261] = sym_word;
	v->a[22262] = anon_sym_SEMI;
	v->a[22263] = 6;
	v->a[22264] = actions(3);
	v->a[22265] = 1;
	v->a[22266] = sym_comment;
	v->a[22267] = actions(851);
	v->a[22268] = 1;
	v->a[22269] = aux_sym_concatenation_token1;
	v->a[22270] = actions(853);
	v->a[22271] = 1;
	v->a[22272] = sym__concat;
	v->a[22273] = state(266);
	v->a[22274] = 1;
	v->a[22275] = aux_sym_concatenation_repeat1;
	v->a[22276] = actions(841);
	v->a[22277] = 2;
	v->a[22278] = sym__bare_dollar;
	v->a[22279] = ts_builtin_sym_end;
	small_parse_table_1114(v);
}

void	small_parse_table_1114(t_small_parse_table_array *v)
{
	v->a[22280] = actions(833);
	v->a[22281] = 19;
	v->a[22282] = anon_sym_PIPE;
	v->a[22283] = anon_sym_SEMI_SEMI;
	v->a[22284] = anon_sym_AMP_AMP;
	v->a[22285] = anon_sym_PIPE_PIPE;
	v->a[22286] = anon_sym_LT;
	v->a[22287] = anon_sym_GT;
	v->a[22288] = anon_sym_GT_GT;
	v->a[22289] = anon_sym_LT_LT;
	v->a[22290] = aux_sym_heredoc_redirect_token1;
	v->a[22291] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22292] = anon_sym_DOLLAR;
	v->a[22293] = anon_sym_DQUOTE;
	v->a[22294] = sym_raw_string;
	v->a[22295] = sym_number;
	v->a[22296] = anon_sym_DOLLAR_LBRACE;
	v->a[22297] = anon_sym_DOLLAR_LPAREN;
	v->a[22298] = anon_sym_BQUOTE;
	v->a[22299] = sym_word;
	small_parse_table_1115(v);
}

/* EOF small_parse_table_222.c */
