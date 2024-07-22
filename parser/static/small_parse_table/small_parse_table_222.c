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
	v->a[22200] = sym_comment;
	v->a[22201] = actions(678);
	v->a[22202] = 2;
	v->a[22203] = sym_file_descriptor;
	v->a[22204] = sym_variable_name;
	v->a[22205] = state(233);
	v->a[22206] = 2;
	v->a[22207] = sym_concatenation;
	v->a[22208] = aux_sym_for_statement_repeat1;
	v->a[22209] = state(429);
	v->a[22210] = 5;
	v->a[22211] = sym_arithmetic_expansion;
	v->a[22212] = sym_string;
	v->a[22213] = sym_simple_expansion;
	v->a[22214] = sym_expansion;
	v->a[22215] = sym_command_substitution;
	v->a[22216] = actions(676);
	v->a[22217] = 25;
	v->a[22218] = anon_sym_esac;
	v->a[22219] = anon_sym_PIPE;
	small_parse_table_1111(v);
}

void	small_parse_table_1111(t_small_parse_table_array *v)
{
	v->a[22220] = anon_sym_SEMI_SEMI;
	v->a[22221] = anon_sym_AMP_AMP;
	v->a[22222] = anon_sym_PIPE_PIPE;
	v->a[22223] = anon_sym_LT;
	v->a[22224] = anon_sym_GT;
	v->a[22225] = anon_sym_GT_GT;
	v->a[22226] = anon_sym_LT_AMP;
	v->a[22227] = anon_sym_GT_AMP;
	v->a[22228] = anon_sym_GT_PIPE;
	v->a[22229] = anon_sym_LT_GT;
	v->a[22230] = anon_sym_LT_LT;
	v->a[22231] = anon_sym_LT_LT_DASH;
	v->a[22232] = aux_sym_heredoc_redirect_token1;
	v->a[22233] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22234] = anon_sym_DOLLAR;
	v->a[22235] = anon_sym_DQUOTE;
	v->a[22236] = sym_raw_string;
	v->a[22237] = sym_number;
	v->a[22238] = anon_sym_DOLLAR_LBRACE;
	v->a[22239] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1112(v);
}

void	small_parse_table_1112(t_small_parse_table_array *v)
{
	v->a[22240] = anon_sym_BQUOTE;
	v->a[22241] = sym_word;
	v->a[22242] = anon_sym_SEMI;
	v->a[22243] = 12;
	v->a[22244] = actions(3);
	v->a[22245] = 1;
	v->a[22246] = sym_comment;
	v->a[22247] = actions(736);
	v->a[22248] = 1;
	v->a[22249] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22250] = actions(739);
	v->a[22251] = 1;
	v->a[22252] = anon_sym_DOLLAR;
	v->a[22253] = actions(742);
	v->a[22254] = 1;
	v->a[22255] = anon_sym_DQUOTE;
	v->a[22256] = actions(745);
	v->a[22257] = 1;
	v->a[22258] = anon_sym_DOLLAR_LBRACE;
	v->a[22259] = actions(748);
	small_parse_table_1113(v);
}

void	small_parse_table_1113(t_small_parse_table_array *v)
{
	v->a[22260] = 1;
	v->a[22261] = anon_sym_DOLLAR_LPAREN;
	v->a[22262] = actions(751);
	v->a[22263] = 1;
	v->a[22264] = anon_sym_BQUOTE;
	v->a[22265] = actions(648);
	v->a[22266] = 2;
	v->a[22267] = sym_file_descriptor;
	v->a[22268] = sym_variable_name;
	v->a[22269] = state(233);
	v->a[22270] = 2;
	v->a[22271] = sym_concatenation;
	v->a[22272] = aux_sym_for_statement_repeat1;
	v->a[22273] = actions(733);
	v->a[22274] = 3;
	v->a[22275] = sym_raw_string;
	v->a[22276] = sym_number;
	v->a[22277] = sym_word;
	v->a[22278] = state(429);
	v->a[22279] = 5;
	small_parse_table_1114(v);
}

void	small_parse_table_1114(t_small_parse_table_array *v)
{
	v->a[22280] = sym_arithmetic_expansion;
	v->a[22281] = sym_string;
	v->a[22282] = sym_simple_expansion;
	v->a[22283] = sym_expansion;
	v->a[22284] = sym_command_substitution;
	v->a[22285] = actions(628);
	v->a[22286] = 16;
	v->a[22287] = anon_sym_esac;
	v->a[22288] = anon_sym_PIPE;
	v->a[22289] = anon_sym_SEMI_SEMI;
	v->a[22290] = anon_sym_AMP_AMP;
	v->a[22291] = anon_sym_PIPE_PIPE;
	v->a[22292] = anon_sym_LT;
	v->a[22293] = anon_sym_GT;
	v->a[22294] = anon_sym_GT_GT;
	v->a[22295] = anon_sym_LT_AMP;
	v->a[22296] = anon_sym_GT_AMP;
	v->a[22297] = anon_sym_GT_PIPE;
	v->a[22298] = anon_sym_LT_GT;
	v->a[22299] = anon_sym_LT_LT;
	small_parse_table_1115(v);
}

/* EOF small_parse_table_222.c */
