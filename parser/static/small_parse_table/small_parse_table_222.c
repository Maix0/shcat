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
	v->a[22200] = actions(759);
	v->a[22201] = 3;
	v->a[22202] = aux_sym_heredoc_redirect_token1;
	v->a[22203] = anon_sym_AMP;
	v->a[22204] = anon_sym_SEMI;
	v->a[22205] = state(1094);
	v->a[22206] = 3;
	v->a[22207] = sym_file_redirect;
	v->a[22208] = sym_heredoc_redirect;
	v->a[22209] = aux_sym_redirected_statement_repeat1;
	v->a[22210] = actions(734);
	v->a[22211] = 16;
	v->a[22212] = anon_sym_LT;
	v->a[22213] = anon_sym_GT;
	v->a[22214] = anon_sym_GT_GT;
	v->a[22215] = anon_sym_LT_AMP;
	v->a[22216] = anon_sym_GT_AMP;
	v->a[22217] = anon_sym_GT_PIPE;
	v->a[22218] = anon_sym_LT_GT;
	v->a[22219] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1111(v);
}

void	small_parse_table_1111(t_small_parse_table_array *v)
{
	v->a[22220] = anon_sym_DOLLAR;
	v->a[22221] = anon_sym_DQUOTE;
	v->a[22222] = sym_raw_string;
	v->a[22223] = sym_number;
	v->a[22224] = anon_sym_DOLLAR_LBRACE;
	v->a[22225] = anon_sym_DOLLAR_LPAREN;
	v->a[22226] = anon_sym_BQUOTE;
	v->a[22227] = sym_word;
	v->a[22228] = 12;
	v->a[22229] = actions(3);
	v->a[22230] = 1;
	v->a[22231] = sym_comment;
	v->a[22232] = actions(552);
	v->a[22233] = 1;
	v->a[22234] = sym_file_descriptor;
	v->a[22235] = actions(668);
	v->a[22236] = 1;
	v->a[22237] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22238] = actions(670);
	v->a[22239] = 1;
	small_parse_table_1112(v);
}

void	small_parse_table_1112(t_small_parse_table_array *v)
{
	v->a[22240] = anon_sym_DOLLAR;
	v->a[22241] = actions(672);
	v->a[22242] = 1;
	v->a[22243] = anon_sym_DQUOTE;
	v->a[22244] = actions(674);
	v->a[22245] = 1;
	v->a[22246] = anon_sym_DOLLAR_LBRACE;
	v->a[22247] = actions(676);
	v->a[22248] = 1;
	v->a[22249] = anon_sym_DOLLAR_LPAREN;
	v->a[22250] = actions(678);
	v->a[22251] = 1;
	v->a[22252] = anon_sym_BQUOTE;
	v->a[22253] = state(233);
	v->a[22254] = 2;
	v->a[22255] = sym_concatenation;
	v->a[22256] = aux_sym_for_statement_repeat1;
	v->a[22257] = actions(666);
	v->a[22258] = 3;
	v->a[22259] = sym_raw_string;
	small_parse_table_1113(v);
}

void	small_parse_table_1113(t_small_parse_table_array *v)
{
	v->a[22260] = sym_number;
	v->a[22261] = sym_word;
	v->a[22262] = state(463);
	v->a[22263] = 5;
	v->a[22264] = sym_arithmetic_expansion;
	v->a[22265] = sym_string;
	v->a[22266] = sym_simple_expansion;
	v->a[22267] = sym_expansion;
	v->a[22268] = sym_command_substitution;
	v->a[22269] = actions(554);
	v->a[22270] = 17;
	v->a[22271] = anon_sym_esac;
	v->a[22272] = anon_sym_PIPE;
	v->a[22273] = anon_sym_SEMI_SEMI;
	v->a[22274] = anon_sym_AMP_AMP;
	v->a[22275] = anon_sym_PIPE_PIPE;
	v->a[22276] = anon_sym_LT;
	v->a[22277] = anon_sym_GT;
	v->a[22278] = anon_sym_GT_GT;
	v->a[22279] = anon_sym_LT_AMP;
	small_parse_table_1114(v);
}

void	small_parse_table_1114(t_small_parse_table_array *v)
{
	v->a[22280] = anon_sym_GT_AMP;
	v->a[22281] = anon_sym_GT_PIPE;
	v->a[22282] = anon_sym_LT_GT;
	v->a[22283] = anon_sym_LT_LT;
	v->a[22284] = anon_sym_LT_LT_DASH;
	v->a[22285] = aux_sym_heredoc_redirect_token1;
	v->a[22286] = anon_sym_AMP;
	v->a[22287] = anon_sym_SEMI;
	v->a[22288] = 3;
	v->a[22289] = actions(664);
	v->a[22290] = 1;
	v->a[22291] = sym_comment;
	v->a[22292] = actions(764);
	v->a[22293] = 13;
	v->a[22294] = anon_sym_PIPE;
	v->a[22295] = anon_sym_EQ;
	v->a[22296] = anon_sym_LT;
	v->a[22297] = anon_sym_GT;
	v->a[22298] = anon_sym_GT_GT;
	v->a[22299] = anon_sym_LT_LT;
	small_parse_table_1115(v);
}

/* EOF small_parse_table_222.c */
