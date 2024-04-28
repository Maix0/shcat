/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2612.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13060(t_small_parse_table_array *v)
{
	v->a[261200] = anon_sym_PIPE;
	v->a[261201] = anon_sym_AMP;
	v->a[261202] = anon_sym_LT_LT;
	v->a[261203] = anon_sym_SEMI_SEMI;
	v->a[261204] = anon_sym_PIPE_AMP;
	v->a[261205] = anon_sym_LT_LT_DASH;
	v->a[261206] = anon_sym_BQUOTE;
	v->a[261207] = 6;
	v->a[261208] = actions(3);
	v->a[261209] = 1;
	v->a[261210] = sym_comment;
	v->a[261211] = actions(11651);
	v->a[261212] = 1;
	v->a[261213] = aux_sym_concatenation_token1;
	v->a[261214] = actions(11653);
	v->a[261215] = 1;
	v->a[261216] = sym__concat;
	v->a[261217] = state(4630);
	v->a[261218] = 1;
	v->a[261219] = aux_sym_concatenation_repeat1;
	small_parse_table_13061(v);
}

void	small_parse_table_13061(t_small_parse_table_array *v)
{
	v->a[261220] = actions(4469);
	v->a[261221] = 3;
	v->a[261222] = sym_file_descriptor;
	v->a[261223] = ts_builtin_sym_end;
	v->a[261224] = aux_sym_heredoc_redirect_token1;
	v->a[261225] = actions(4467);
	v->a[261226] = 19;
	v->a[261227] = anon_sym_SEMI;
	v->a[261228] = anon_sym_PIPE_PIPE;
	v->a[261229] = anon_sym_AMP_AMP;
	v->a[261230] = anon_sym_PIPE;
	v->a[261231] = anon_sym_AMP;
	v->a[261232] = anon_sym_LT;
	v->a[261233] = anon_sym_GT;
	v->a[261234] = anon_sym_LT_LT;
	v->a[261235] = anon_sym_GT_GT;
	v->a[261236] = anon_sym_SEMI_SEMI;
	v->a[261237] = anon_sym_PIPE_AMP;
	v->a[261238] = anon_sym_AMP_GT;
	v->a[261239] = anon_sym_AMP_GT_GT;
	small_parse_table_13062(v);
}

void	small_parse_table_13062(t_small_parse_table_array *v)
{
	v->a[261240] = anon_sym_LT_AMP;
	v->a[261241] = anon_sym_GT_AMP;
	v->a[261242] = anon_sym_GT_PIPE;
	v->a[261243] = anon_sym_LT_AMP_DASH;
	v->a[261244] = anon_sym_GT_AMP_DASH;
	v->a[261245] = anon_sym_LT_LT_DASH;
	v->a[261246] = 16;
	v->a[261247] = actions(3);
	v->a[261248] = 1;
	v->a[261249] = sym_comment;
	v->a[261250] = actions(11760);
	v->a[261251] = 1;
	v->a[261252] = anon_sym_BANG2;
	v->a[261253] = actions(11764);
	v->a[261254] = 1;
	v->a[261255] = anon_sym_DOLLAR_LPAREN;
	v->a[261256] = actions(11766);
	v->a[261257] = 1;
	v->a[261258] = anon_sym_BQUOTE;
	v->a[261259] = actions(11768);
	small_parse_table_13063(v);
}

void	small_parse_table_13063(t_small_parse_table_array *v)
{
	v->a[261260] = 1;
	v->a[261261] = anon_sym_DOLLAR_BQUOTE;
	v->a[261262] = actions(11770);
	v->a[261263] = 1;
	v->a[261264] = aux_sym__simple_variable_name_token1;
	v->a[261265] = actions(11772);
	v->a[261266] = 1;
	v->a[261267] = sym_variable_name;
	v->a[261268] = actions(11995);
	v->a[261269] = 1;
	v->a[261270] = anon_sym_RBRACE3;
	v->a[261271] = state(3532);
	v->a[261272] = 1;
	v->a[261273] = sym_subscript;
	v->a[261274] = state(6428);
	v->a[261275] = 1;
	v->a[261276] = aux_sym__expansion_body_repeat1;
	v->a[261277] = state(6472);
	v->a[261278] = 1;
	v->a[261279] = sym_command_substitution;
	small_parse_table_13064(v);
}

void	small_parse_table_13064(t_small_parse_table_array *v)
{
	v->a[261280] = state(7422);
	v->a[261281] = 1;
	v->a[261282] = sym__expansion_body;
	v->a[261283] = actions(11762);
	v->a[261284] = 2;
	v->a[261285] = anon_sym_POUND2;
	v->a[261286] = anon_sym_EQ2;
	v->a[261287] = actions(8050);
	v->a[261288] = 3;
	v->a[261289] = sym__external_expansion_sym_hash;
	v->a[261290] = sym__external_expansion_sym_bang;
	v->a[261291] = sym__external_expansion_sym_equal;
	v->a[261292] = actions(11754);
	v->a[261293] = 4;
	v->a[261294] = anon_sym_DASH;
	v->a[261295] = anon_sym_STAR;
	v->a[261296] = anon_sym_QMARK;
	v->a[261297] = anon_sym_AT2;
	v->a[261298] = actions(11756);
	v->a[261299] = 5;
	small_parse_table_13065(v);
}

/* EOF small_parse_table_2612.c */
