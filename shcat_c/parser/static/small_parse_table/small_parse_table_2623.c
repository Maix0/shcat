/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2623.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13115(t_small_parse_table_array *v)
{
	v->a[262300] = anon_sym_AMP_GT;
	v->a[262301] = anon_sym_AMP_GT_GT;
	v->a[262302] = anon_sym_LT_AMP;
	v->a[262303] = anon_sym_GT_AMP;
	v->a[262304] = anon_sym_GT_PIPE;
	v->a[262305] = anon_sym_LT_AMP_DASH;
	v->a[262306] = anon_sym_GT_AMP_DASH;
	v->a[262307] = anon_sym_LT_LT_DASH;
	v->a[262308] = anon_sym_BQUOTE;
	v->a[262309] = 3;
	v->a[262310] = actions(3);
	v->a[262311] = 1;
	v->a[262312] = sym_comment;
	v->a[262313] = actions(1263);
	v->a[262314] = 2;
	v->a[262315] = sym_file_descriptor;
	v->a[262316] = aux_sym_heredoc_redirect_token1;
	v->a[262317] = actions(1261);
	v->a[262318] = 23;
	v->a[262319] = anon_sym_SEMI;
	small_parse_table_13116(v);
}

void	small_parse_table_13116(t_small_parse_table_array *v)
{
	v->a[262320] = anon_sym_PIPE_PIPE;
	v->a[262321] = anon_sym_AMP_AMP;
	v->a[262322] = anon_sym_PIPE;
	v->a[262323] = anon_sym_AMP;
	v->a[262324] = anon_sym_LT;
	v->a[262325] = anon_sym_GT;
	v->a[262326] = anon_sym_LT_LT;
	v->a[262327] = anon_sym_GT_GT;
	v->a[262328] = anon_sym_SEMI_SEMI;
	v->a[262329] = anon_sym_SEMI_AMP;
	v->a[262330] = anon_sym_SEMI_SEMI_AMP;
	v->a[262331] = anon_sym_PIPE_AMP;
	v->a[262332] = anon_sym_AMP_GT;
	v->a[262333] = anon_sym_AMP_GT_GT;
	v->a[262334] = anon_sym_LT_AMP;
	v->a[262335] = anon_sym_GT_AMP;
	v->a[262336] = anon_sym_GT_PIPE;
	v->a[262337] = anon_sym_LT_AMP_DASH;
	v->a[262338] = anon_sym_GT_AMP_DASH;
	v->a[262339] = anon_sym_LT_LT_DASH;
	small_parse_table_13117(v);
}

void	small_parse_table_13117(t_small_parse_table_array *v)
{
	v->a[262340] = anon_sym_LT_LT_LT;
	v->a[262341] = sym__special_character;
	v->a[262342] = 16;
	v->a[262343] = actions(3);
	v->a[262344] = 1;
	v->a[262345] = sym_comment;
	v->a[262346] = actions(11760);
	v->a[262347] = 1;
	v->a[262348] = anon_sym_BANG2;
	v->a[262349] = actions(11764);
	v->a[262350] = 1;
	v->a[262351] = anon_sym_DOLLAR_LPAREN;
	v->a[262352] = actions(11766);
	v->a[262353] = 1;
	v->a[262354] = anon_sym_BQUOTE;
	v->a[262355] = actions(11768);
	v->a[262356] = 1;
	v->a[262357] = anon_sym_DOLLAR_BQUOTE;
	v->a[262358] = actions(11770);
	v->a[262359] = 1;
	small_parse_table_13118(v);
}

void	small_parse_table_13118(t_small_parse_table_array *v)
{
	v->a[262360] = aux_sym__simple_variable_name_token1;
	v->a[262361] = actions(11772);
	v->a[262362] = 1;
	v->a[262363] = sym_variable_name;
	v->a[262364] = actions(12019);
	v->a[262365] = 1;
	v->a[262366] = anon_sym_RBRACE3;
	v->a[262367] = state(3532);
	v->a[262368] = 1;
	v->a[262369] = sym_subscript;
	v->a[262370] = state(6428);
	v->a[262371] = 1;
	v->a[262372] = aux_sym__expansion_body_repeat1;
	v->a[262373] = state(6472);
	v->a[262374] = 1;
	v->a[262375] = sym_command_substitution;
	v->a[262376] = state(7501);
	v->a[262377] = 1;
	v->a[262378] = sym__expansion_body;
	v->a[262379] = actions(11762);
	small_parse_table_13119(v);
}

void	small_parse_table_13119(t_small_parse_table_array *v)
{
	v->a[262380] = 2;
	v->a[262381] = anon_sym_POUND2;
	v->a[262382] = anon_sym_EQ2;
	v->a[262383] = actions(8050);
	v->a[262384] = 3;
	v->a[262385] = sym__external_expansion_sym_hash;
	v->a[262386] = sym__external_expansion_sym_bang;
	v->a[262387] = sym__external_expansion_sym_equal;
	v->a[262388] = actions(11754);
	v->a[262389] = 4;
	v->a[262390] = anon_sym_DASH;
	v->a[262391] = anon_sym_STAR;
	v->a[262392] = anon_sym_QMARK;
	v->a[262393] = anon_sym_AT2;
	v->a[262394] = actions(11756);
	v->a[262395] = 5;
	v->a[262396] = anon_sym_BANG;
	v->a[262397] = anon_sym_DOLLAR;
	v->a[262398] = anon_sym_POUND;
	v->a[262399] = anon_sym_0;
	small_parse_table_13120(v);
}

/* EOF small_parse_table_2623.c */
