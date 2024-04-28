/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2592.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12960(t_small_parse_table_array *v)
{
	v->a[259200] = anon_sym_GT_AMP;
	v->a[259201] = anon_sym_GT_PIPE;
	v->a[259202] = anon_sym_LT_AMP_DASH;
	v->a[259203] = anon_sym_GT_AMP_DASH;
	v->a[259204] = anon_sym_LT_LT_DASH;
	v->a[259205] = 3;
	v->a[259206] = actions(3);
	v->a[259207] = 1;
	v->a[259208] = sym_comment;
	v->a[259209] = actions(1318);
	v->a[259210] = 3;
	v->a[259211] = sym_file_descriptor;
	v->a[259212] = sym__concat;
	v->a[259213] = aux_sym_heredoc_redirect_token1;
	v->a[259214] = actions(1316);
	v->a[259215] = 22;
	v->a[259216] = anon_sym_SEMI;
	v->a[259217] = anon_sym_PIPE_PIPE;
	v->a[259218] = anon_sym_AMP_AMP;
	v->a[259219] = anon_sym_PIPE;
	small_parse_table_12961(v);
}

void	small_parse_table_12961(t_small_parse_table_array *v)
{
	v->a[259220] = anon_sym_AMP;
	v->a[259221] = anon_sym_LT;
	v->a[259222] = anon_sym_GT;
	v->a[259223] = anon_sym_LT_LT;
	v->a[259224] = anon_sym_GT_GT;
	v->a[259225] = anon_sym_SEMI_SEMI;
	v->a[259226] = anon_sym_SEMI_AMP;
	v->a[259227] = anon_sym_SEMI_SEMI_AMP;
	v->a[259228] = anon_sym_PIPE_AMP;
	v->a[259229] = anon_sym_AMP_GT;
	v->a[259230] = anon_sym_AMP_GT_GT;
	v->a[259231] = anon_sym_LT_AMP;
	v->a[259232] = anon_sym_GT_AMP;
	v->a[259233] = anon_sym_GT_PIPE;
	v->a[259234] = anon_sym_LT_AMP_DASH;
	v->a[259235] = anon_sym_GT_AMP_DASH;
	v->a[259236] = anon_sym_LT_LT_DASH;
	v->a[259237] = aux_sym_concatenation_token1;
	v->a[259238] = 16;
	v->a[259239] = actions(3);
	small_parse_table_12962(v);
}

void	small_parse_table_12962(t_small_parse_table_array *v)
{
	v->a[259240] = 1;
	v->a[259241] = sym_comment;
	v->a[259242] = actions(11760);
	v->a[259243] = 1;
	v->a[259244] = anon_sym_BANG2;
	v->a[259245] = actions(11764);
	v->a[259246] = 1;
	v->a[259247] = anon_sym_DOLLAR_LPAREN;
	v->a[259248] = actions(11766);
	v->a[259249] = 1;
	v->a[259250] = anon_sym_BQUOTE;
	v->a[259251] = actions(11768);
	v->a[259252] = 1;
	v->a[259253] = anon_sym_DOLLAR_BQUOTE;
	v->a[259254] = actions(11770);
	v->a[259255] = 1;
	v->a[259256] = aux_sym__simple_variable_name_token1;
	v->a[259257] = actions(11772);
	v->a[259258] = 1;
	v->a[259259] = sym_variable_name;
	small_parse_table_12963(v);
}

void	small_parse_table_12963(t_small_parse_table_array *v)
{
	v->a[259260] = actions(11915);
	v->a[259261] = 1;
	v->a[259262] = anon_sym_RBRACE3;
	v->a[259263] = state(3532);
	v->a[259264] = 1;
	v->a[259265] = sym_subscript;
	v->a[259266] = state(6428);
	v->a[259267] = 1;
	v->a[259268] = aux_sym__expansion_body_repeat1;
	v->a[259269] = state(6472);
	v->a[259270] = 1;
	v->a[259271] = sym_command_substitution;
	v->a[259272] = state(7317);
	v->a[259273] = 1;
	v->a[259274] = sym__expansion_body;
	v->a[259275] = actions(11762);
	v->a[259276] = 2;
	v->a[259277] = anon_sym_POUND2;
	v->a[259278] = anon_sym_EQ2;
	v->a[259279] = actions(8050);
	small_parse_table_12964(v);
}

void	small_parse_table_12964(t_small_parse_table_array *v)
{
	v->a[259280] = 3;
	v->a[259281] = sym__external_expansion_sym_hash;
	v->a[259282] = sym__external_expansion_sym_bang;
	v->a[259283] = sym__external_expansion_sym_equal;
	v->a[259284] = actions(11754);
	v->a[259285] = 4;
	v->a[259286] = anon_sym_DASH;
	v->a[259287] = anon_sym_STAR;
	v->a[259288] = anon_sym_QMARK;
	v->a[259289] = anon_sym_AT2;
	v->a[259290] = actions(11756);
	v->a[259291] = 5;
	v->a[259292] = anon_sym_BANG;
	v->a[259293] = anon_sym_DOLLAR;
	v->a[259294] = anon_sym_POUND;
	v->a[259295] = anon_sym_0;
	v->a[259296] = anon_sym__;
	v->a[259297] = 3;
	v->a[259298] = actions(3);
	v->a[259299] = 1;
	small_parse_table_12965(v);
}

/* EOF small_parse_table_2592.c */
