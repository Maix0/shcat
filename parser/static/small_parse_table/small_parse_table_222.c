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
	v->a[22200] = actions(3);
	v->a[22201] = 1;
	v->a[22202] = sym_comment;
	v->a[22203] = actions(17);
	v->a[22204] = 1;
	v->a[22205] = anon_sym_LPAREN;
	v->a[22206] = actions(485);
	v->a[22207] = 1;
	v->a[22208] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22209] = actions(487);
	v->a[22210] = 1;
	v->a[22211] = anon_sym_DOLLAR;
	v->a[22212] = actions(489);
	v->a[22213] = 1;
	v->a[22214] = anon_sym_DQUOTE;
	v->a[22215] = actions(491);
	v->a[22216] = 1;
	v->a[22217] = aux_sym_number_token1;
	v->a[22218] = actions(493);
	v->a[22219] = 1;
	small_parse_table_1111(v);
}

void	small_parse_table_1111(t_small_parse_table_array *v)
{
	v->a[22220] = aux_sym_number_token2;
	v->a[22221] = actions(495);
	v->a[22222] = 1;
	v->a[22223] = anon_sym_DOLLAR_LBRACE;
	v->a[22224] = actions(497);
	v->a[22225] = 1;
	v->a[22226] = anon_sym_DOLLAR_LPAREN;
	v->a[22227] = actions(501);
	v->a[22228] = 1;
	v->a[22229] = sym__bare_dollar;
	v->a[22230] = actions(517);
	v->a[22231] = 1;
	v->a[22232] = sym_file_descriptor;
	v->a[22233] = state(231);
	v->a[22234] = 1;
	v->a[22235] = aux_sym_command_repeat2;
	v->a[22236] = state(753);
	v->a[22237] = 1;
	v->a[22238] = sym_concatenation;
	v->a[22239] = state(1188);
	small_parse_table_1112(v);
}

void	small_parse_table_1112(t_small_parse_table_array *v)
{
	v->a[22240] = 1;
	v->a[22241] = sym_subshell;
	v->a[22242] = actions(551);
	v->a[22243] = 2;
	v->a[22244] = sym_raw_string;
	v->a[22245] = sym_word;
	v->a[22246] = state(452);
	v->a[22247] = 6;
	v->a[22248] = sym_arithmetic_expansion;
	v->a[22249] = sym_string;
	v->a[22250] = sym_number;
	v->a[22251] = sym_simple_expansion;
	v->a[22252] = sym_expansion;
	v->a[22253] = sym_command_substitution;
	v->a[22254] = actions(515);
	v->a[22255] = 20;
	v->a[22256] = anon_sym_PIPE;
	v->a[22257] = anon_sym_SEMI_SEMI;
	v->a[22258] = anon_sym_AMP_AMP;
	v->a[22259] = anon_sym_PIPE_PIPE;
	small_parse_table_1113(v);
}

void	small_parse_table_1113(t_small_parse_table_array *v)
{
	v->a[22260] = anon_sym_LT;
	v->a[22261] = anon_sym_GT;
	v->a[22262] = anon_sym_GT_GT;
	v->a[22263] = anon_sym_AMP_GT;
	v->a[22264] = anon_sym_AMP_GT_GT;
	v->a[22265] = anon_sym_LT_AMP;
	v->a[22266] = anon_sym_GT_AMP;
	v->a[22267] = anon_sym_GT_PIPE;
	v->a[22268] = anon_sym_LT_AMP_DASH;
	v->a[22269] = anon_sym_GT_AMP_DASH;
	v->a[22270] = anon_sym_LT_LT;
	v->a[22271] = anon_sym_LT_LT_DASH;
	v->a[22272] = aux_sym_heredoc_redirect_token1;
	v->a[22273] = anon_sym_AMP;
	v->a[22274] = anon_sym_BQUOTE;
	v->a[22275] = anon_sym_SEMI;
	v->a[22276] = 6;
	v->a[22277] = actions(3);
	v->a[22278] = 1;
	v->a[22279] = sym_comment;
	small_parse_table_1114(v);
}

void	small_parse_table_1114(t_small_parse_table_array *v)
{
	v->a[22280] = actions(413);
	v->a[22281] = 1;
	v->a[22282] = sym_file_descriptor;
	v->a[22283] = actions(549);
	v->a[22284] = 1;
	v->a[22285] = sym_variable_name;
	v->a[22286] = actions(547);
	v->a[22287] = 2;
	v->a[22288] = aux_sym__simple_variable_name_token1;
	v->a[22289] = aux_sym__multiline_variable_name_token1;
	v->a[22290] = actions(545);
	v->a[22291] = 9;
	v->a[22292] = anon_sym_BANG;
	v->a[22293] = anon_sym_DASH;
	v->a[22294] = anon_sym_STAR;
	v->a[22295] = anon_sym_QMARK;
	v->a[22296] = anon_sym_DOLLAR;
	v->a[22297] = anon_sym_POUND;
	v->a[22298] = anon_sym_AT;
	v->a[22299] = anon_sym_0;
	small_parse_table_1115(v);
}

/* EOF small_parse_table_222.c */
