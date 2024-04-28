/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2642.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13210(t_small_parse_table_array *v)
{
	v->a[264200] = sym_file_descriptor;
	v->a[264201] = aux_sym_heredoc_redirect_token1;
	v->a[264202] = actions(5721);
	v->a[264203] = 20;
	v->a[264204] = anon_sym_SEMI;
	v->a[264205] = anon_sym_PIPE_PIPE;
	v->a[264206] = anon_sym_AMP_AMP;
	v->a[264207] = anon_sym_PIPE;
	v->a[264208] = anon_sym_AMP;
	v->a[264209] = anon_sym_LT;
	v->a[264210] = anon_sym_GT;
	v->a[264211] = anon_sym_LT_LT;
	v->a[264212] = anon_sym_GT_GT;
	v->a[264213] = anon_sym_SEMI_SEMI;
	v->a[264214] = anon_sym_PIPE_AMP;
	v->a[264215] = anon_sym_AMP_GT;
	v->a[264216] = anon_sym_AMP_GT_GT;
	v->a[264217] = anon_sym_LT_AMP;
	v->a[264218] = anon_sym_GT_AMP;
	v->a[264219] = anon_sym_GT_PIPE;
	small_parse_table_13211(v);
}

void	small_parse_table_13211(t_small_parse_table_array *v)
{
	v->a[264220] = anon_sym_LT_AMP_DASH;
	v->a[264221] = anon_sym_GT_AMP_DASH;
	v->a[264222] = anon_sym_LT_LT_DASH;
	v->a[264223] = anon_sym_LT_LT_LT;
	v->a[264224] = 16;
	v->a[264225] = actions(3);
	v->a[264226] = 1;
	v->a[264227] = sym_comment;
	v->a[264228] = actions(11760);
	v->a[264229] = 1;
	v->a[264230] = anon_sym_BANG2;
	v->a[264231] = actions(11764);
	v->a[264232] = 1;
	v->a[264233] = anon_sym_DOLLAR_LPAREN;
	v->a[264234] = actions(11766);
	v->a[264235] = 1;
	v->a[264236] = anon_sym_BQUOTE;
	v->a[264237] = actions(11768);
	v->a[264238] = 1;
	v->a[264239] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_13212(v);
}

void	small_parse_table_13212(t_small_parse_table_array *v)
{
	v->a[264240] = actions(11770);
	v->a[264241] = 1;
	v->a[264242] = aux_sym__simple_variable_name_token1;
	v->a[264243] = actions(11772);
	v->a[264244] = 1;
	v->a[264245] = sym_variable_name;
	v->a[264246] = actions(12058);
	v->a[264247] = 1;
	v->a[264248] = anon_sym_RBRACE3;
	v->a[264249] = state(3532);
	v->a[264250] = 1;
	v->a[264251] = sym_subscript;
	v->a[264252] = state(6428);
	v->a[264253] = 1;
	v->a[264254] = aux_sym__expansion_body_repeat1;
	v->a[264255] = state(6472);
	v->a[264256] = 1;
	v->a[264257] = sym_command_substitution;
	v->a[264258] = state(7313);
	v->a[264259] = 1;
	small_parse_table_13213(v);
}

void	small_parse_table_13213(t_small_parse_table_array *v)
{
	v->a[264260] = sym__expansion_body;
	v->a[264261] = actions(11762);
	v->a[264262] = 2;
	v->a[264263] = anon_sym_POUND2;
	v->a[264264] = anon_sym_EQ2;
	v->a[264265] = actions(8050);
	v->a[264266] = 3;
	v->a[264267] = sym__external_expansion_sym_hash;
	v->a[264268] = sym__external_expansion_sym_bang;
	v->a[264269] = sym__external_expansion_sym_equal;
	v->a[264270] = actions(11754);
	v->a[264271] = 4;
	v->a[264272] = anon_sym_DASH;
	v->a[264273] = anon_sym_STAR;
	v->a[264274] = anon_sym_QMARK;
	v->a[264275] = anon_sym_AT2;
	v->a[264276] = actions(11756);
	v->a[264277] = 5;
	v->a[264278] = anon_sym_BANG;
	v->a[264279] = anon_sym_DOLLAR;
	small_parse_table_13214(v);
}

void	small_parse_table_13214(t_small_parse_table_array *v)
{
	v->a[264280] = anon_sym_POUND;
	v->a[264281] = anon_sym_0;
	v->a[264282] = anon_sym__;
	v->a[264283] = 3;
	v->a[264284] = actions(3);
	v->a[264285] = 1;
	v->a[264286] = sym_comment;
	v->a[264287] = actions(11750);
	v->a[264288] = 2;
	v->a[264289] = sym_file_descriptor;
	v->a[264290] = aux_sym_heredoc_redirect_token1;
	v->a[264291] = actions(11752);
	v->a[264292] = 23;
	v->a[264293] = anon_sym_SEMI;
	v->a[264294] = anon_sym_PIPE_PIPE;
	v->a[264295] = anon_sym_AMP_AMP;
	v->a[264296] = anon_sym_PIPE;
	v->a[264297] = anon_sym_AMP;
	v->a[264298] = anon_sym_LT;
	v->a[264299] = anon_sym_GT;
	small_parse_table_13215(v);
}

/* EOF small_parse_table_2642.c */
