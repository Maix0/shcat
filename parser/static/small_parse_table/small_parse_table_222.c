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
	v->a[22200] = 2;
	v->a[22201] = sym_concatenation;
	v->a[22202] = aux_sym_unset_command_repeat1;
	v->a[22203] = actions(3655);
	v->a[22204] = 3;
	v->a[22205] = sym_raw_string;
	v->a[22206] = sym_ansi_c_string;
	v->a[22207] = sym_word;
	v->a[22208] = state(1902);
	v->a[22209] = 9;
	v->a[22210] = sym_arithmetic_expansion;
	v->a[22211] = sym_brace_expression;
	v->a[22212] = sym_string;
	v->a[22213] = sym_translated_string;
	v->a[22214] = sym_number;
	v->a[22215] = sym_simple_expansion;
	v->a[22216] = sym_expansion;
	v->a[22217] = sym_command_substitution;
	v->a[22218] = sym_process_substitution;
	v->a[22219] = actions(2297);
	small_parse_table_1111(v);
}

void	small_parse_table_1111(t_small_parse_table_array *v)
{
	v->a[22220] = 20;
	v->a[22221] = anon_sym_SEMI;
	v->a[22222] = anon_sym_PIPE_PIPE;
	v->a[22223] = anon_sym_AMP_AMP;
	v->a[22224] = anon_sym_PIPE;
	v->a[22225] = anon_sym_AMP;
	v->a[22226] = anon_sym_LT;
	v->a[22227] = anon_sym_GT;
	v->a[22228] = anon_sym_LT_LT;
	v->a[22229] = anon_sym_GT_GT;
	v->a[22230] = anon_sym_SEMI_SEMI;
	v->a[22231] = anon_sym_PIPE_AMP;
	v->a[22232] = anon_sym_AMP_GT;
	v->a[22233] = anon_sym_AMP_GT_GT;
	v->a[22234] = anon_sym_LT_AMP;
	v->a[22235] = anon_sym_GT_AMP;
	v->a[22236] = anon_sym_GT_PIPE;
	v->a[22237] = anon_sym_LT_AMP_DASH;
	v->a[22238] = anon_sym_GT_AMP_DASH;
	v->a[22239] = anon_sym_LT_LT_DASH;
	small_parse_table_1112(v);
}

void	small_parse_table_1112(t_small_parse_table_array *v)
{
	v->a[22240] = anon_sym_BQUOTE;
	v->a[22241] = 35;
	v->a[22242] = actions(71);
	v->a[22243] = 1;
	v->a[22244] = sym_comment;
	v->a[22245] = actions(1141);
	v->a[22246] = 1;
	v->a[22247] = anon_sym_DOLLAR_LBRACK;
	v->a[22248] = actions(1145);
	v->a[22249] = 1;
	v->a[22250] = anon_sym_DOLLAR;
	v->a[22251] = actions(1149);
	v->a[22252] = 1;
	v->a[22253] = anon_sym_DQUOTE;
	v->a[22254] = actions(1153);
	v->a[22255] = 1;
	v->a[22256] = aux_sym_number_token1;
	v->a[22257] = actions(1155);
	v->a[22258] = 1;
	v->a[22259] = aux_sym_number_token2;
	small_parse_table_1113(v);
}

void	small_parse_table_1113(t_small_parse_table_array *v)
{
	v->a[22260] = actions(1157);
	v->a[22261] = 1;
	v->a[22262] = anon_sym_DOLLAR_LBRACE;
	v->a[22263] = actions(1159);
	v->a[22264] = 1;
	v->a[22265] = anon_sym_DOLLAR_LPAREN;
	v->a[22266] = actions(1163);
	v->a[22267] = 1;
	v->a[22268] = anon_sym_DOLLAR_BQUOTE;
	v->a[22269] = actions(1169);
	v->a[22270] = 1;
	v->a[22271] = sym__brace_start;
	v->a[22272] = actions(1171);
	v->a[22273] = 1;
	v->a[22274] = sym_word;
	v->a[22275] = actions(1181);
	v->a[22276] = 1;
	v->a[22277] = sym__special_character;
	v->a[22278] = actions(1185);
	v->a[22279] = 1;
	small_parse_table_1114(v);
}

void	small_parse_table_1114(t_small_parse_table_array *v)
{
	v->a[22280] = sym_test_operator;
	v->a[22281] = actions(3050);
	v->a[22282] = 1;
	v->a[22283] = anon_sym_LPAREN;
	v->a[22284] = actions(3052);
	v->a[22285] = 1;
	v->a[22286] = anon_sym_BANG;
	v->a[22287] = actions(3058);
	v->a[22288] = 1;
	v->a[22289] = anon_sym_TILDE;
	v->a[22290] = actions(3060);
	v->a[22291] = 1;
	v->a[22292] = anon_sym_BQUOTE;
	v->a[22293] = actions(3064);
	v->a[22294] = 1;
	v->a[22295] = sym_variable_name;
	v->a[22296] = actions(4046);
	v->a[22297] = 1;
	v->a[22298] = aux_sym__simple_variable_name_token1;
	v->a[22299] = state(2387);
	small_parse_table_1115(v);
}

/* EOF small_parse_table_222.c */