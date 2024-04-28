/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2662.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13310(t_small_parse_table_array *v)
{
	v->a[266200] = 21;
	v->a[266201] = anon_sym_LPAREN_LPAREN;
	v->a[266202] = anon_sym_SEMI;
	v->a[266203] = anon_sym_AMP;
	v->a[266204] = anon_sym_SEMI_SEMI;
	v->a[266205] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[266206] = anon_sym_DOLLAR_LBRACK;
	v->a[266207] = aux_sym_concatenation_token1;
	v->a[266208] = anon_sym_DOLLAR;
	v->a[266209] = sym__special_character;
	v->a[266210] = anon_sym_DQUOTE;
	v->a[266211] = sym_raw_string;
	v->a[266212] = sym_ansi_c_string;
	v->a[266213] = aux_sym_number_token1;
	v->a[266214] = aux_sym_number_token2;
	v->a[266215] = anon_sym_DOLLAR_LBRACE;
	v->a[266216] = anon_sym_DOLLAR_LPAREN;
	v->a[266217] = anon_sym_BQUOTE;
	v->a[266218] = anon_sym_DOLLAR_BQUOTE;
	v->a[266219] = anon_sym_LT_LPAREN;
	small_parse_table_13311(v);
}

void	small_parse_table_13311(t_small_parse_table_array *v)
{
	v->a[266220] = anon_sym_GT_LPAREN;
	v->a[266221] = sym_word;
	v->a[266222] = 16;
	v->a[266223] = actions(3);
	v->a[266224] = 1;
	v->a[266225] = sym_comment;
	v->a[266226] = actions(11760);
	v->a[266227] = 1;
	v->a[266228] = anon_sym_BANG2;
	v->a[266229] = actions(11764);
	v->a[266230] = 1;
	v->a[266231] = anon_sym_DOLLAR_LPAREN;
	v->a[266232] = actions(11766);
	v->a[266233] = 1;
	v->a[266234] = anon_sym_BQUOTE;
	v->a[266235] = actions(11768);
	v->a[266236] = 1;
	v->a[266237] = anon_sym_DOLLAR_BQUOTE;
	v->a[266238] = actions(11770);
	v->a[266239] = 1;
	small_parse_table_13312(v);
}

void	small_parse_table_13312(t_small_parse_table_array *v)
{
	v->a[266240] = aux_sym__simple_variable_name_token1;
	v->a[266241] = actions(11772);
	v->a[266242] = 1;
	v->a[266243] = sym_variable_name;
	v->a[266244] = actions(12099);
	v->a[266245] = 1;
	v->a[266246] = anon_sym_RBRACE3;
	v->a[266247] = state(3532);
	v->a[266248] = 1;
	v->a[266249] = sym_subscript;
	v->a[266250] = state(6428);
	v->a[266251] = 1;
	v->a[266252] = aux_sym__expansion_body_repeat1;
	v->a[266253] = state(6472);
	v->a[266254] = 1;
	v->a[266255] = sym_command_substitution;
	v->a[266256] = state(7051);
	v->a[266257] = 1;
	v->a[266258] = sym__expansion_body;
	v->a[266259] = actions(11762);
	small_parse_table_13313(v);
}

void	small_parse_table_13313(t_small_parse_table_array *v)
{
	v->a[266260] = 2;
	v->a[266261] = anon_sym_POUND2;
	v->a[266262] = anon_sym_EQ2;
	v->a[266263] = actions(8050);
	v->a[266264] = 3;
	v->a[266265] = sym__external_expansion_sym_hash;
	v->a[266266] = sym__external_expansion_sym_bang;
	v->a[266267] = sym__external_expansion_sym_equal;
	v->a[266268] = actions(11754);
	v->a[266269] = 4;
	v->a[266270] = anon_sym_DASH;
	v->a[266271] = anon_sym_STAR;
	v->a[266272] = anon_sym_QMARK;
	v->a[266273] = anon_sym_AT2;
	v->a[266274] = actions(11756);
	v->a[266275] = 5;
	v->a[266276] = anon_sym_BANG;
	v->a[266277] = anon_sym_DOLLAR;
	v->a[266278] = anon_sym_POUND;
	v->a[266279] = anon_sym_0;
	small_parse_table_13314(v);
}

void	small_parse_table_13314(t_small_parse_table_array *v)
{
	v->a[266280] = anon_sym__;
	v->a[266281] = 3;
	v->a[266282] = actions(3);
	v->a[266283] = 1;
	v->a[266284] = sym_comment;
	v->a[266285] = actions(11931);
	v->a[266286] = 2;
	v->a[266287] = sym_file_descriptor;
	v->a[266288] = aux_sym_heredoc_redirect_token1;
	v->a[266289] = actions(11929);
	v->a[266290] = 22;
	v->a[266291] = anon_sym_SEMI;
	v->a[266292] = anon_sym_PIPE_PIPE;
	v->a[266293] = anon_sym_AMP_AMP;
	v->a[266294] = anon_sym_PIPE;
	v->a[266295] = anon_sym_AMP;
	v->a[266296] = anon_sym_LT;
	v->a[266297] = anon_sym_GT;
	v->a[266298] = anon_sym_LT_LT;
	v->a[266299] = anon_sym_GT_GT;
	small_parse_table_13315(v);
}

/* EOF small_parse_table_2662.c */
