/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2583.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12915(t_small_parse_table_array *v)
{
	v->a[258300] = 1;
	v->a[258301] = anon_sym_RBRACE3;
	v->a[258302] = state(3532);
	v->a[258303] = 1;
	v->a[258304] = sym_subscript;
	v->a[258305] = state(6428);
	v->a[258306] = 1;
	v->a[258307] = aux_sym__expansion_body_repeat1;
	v->a[258308] = state(6472);
	v->a[258309] = 1;
	v->a[258310] = sym_command_substitution;
	v->a[258311] = state(7245);
	v->a[258312] = 1;
	v->a[258313] = sym__expansion_body;
	v->a[258314] = actions(11762);
	v->a[258315] = 2;
	v->a[258316] = anon_sym_POUND2;
	v->a[258317] = anon_sym_EQ2;
	v->a[258318] = actions(8050);
	v->a[258319] = 3;
	small_parse_table_12916(v);
}

void	small_parse_table_12916(t_small_parse_table_array *v)
{
	v->a[258320] = sym__external_expansion_sym_hash;
	v->a[258321] = sym__external_expansion_sym_bang;
	v->a[258322] = sym__external_expansion_sym_equal;
	v->a[258323] = actions(11754);
	v->a[258324] = 4;
	v->a[258325] = anon_sym_DASH;
	v->a[258326] = anon_sym_STAR;
	v->a[258327] = anon_sym_QMARK;
	v->a[258328] = anon_sym_AT2;
	v->a[258329] = actions(11756);
	v->a[258330] = 5;
	v->a[258331] = anon_sym_BANG;
	v->a[258332] = anon_sym_DOLLAR;
	v->a[258333] = anon_sym_POUND;
	v->a[258334] = anon_sym_0;
	v->a[258335] = anon_sym__;
	v->a[258336] = 6;
	v->a[258337] = actions(3);
	v->a[258338] = 1;
	v->a[258339] = sym_comment;
	small_parse_table_12917(v);
}

void	small_parse_table_12917(t_small_parse_table_array *v)
{
	v->a[258340] = actions(11651);
	v->a[258341] = 1;
	v->a[258342] = aux_sym_concatenation_token1;
	v->a[258343] = actions(11653);
	v->a[258344] = 1;
	v->a[258345] = sym__concat;
	v->a[258346] = state(4635);
	v->a[258347] = 1;
	v->a[258348] = aux_sym_concatenation_repeat1;
	v->a[258349] = actions(4372);
	v->a[258350] = 2;
	v->a[258351] = sym_file_descriptor;
	v->a[258352] = aux_sym_heredoc_redirect_token1;
	v->a[258353] = actions(4370);
	v->a[258354] = 20;
	v->a[258355] = anon_sym_SEMI;
	v->a[258356] = anon_sym_PIPE_PIPE;
	v->a[258357] = anon_sym_AMP_AMP;
	v->a[258358] = anon_sym_PIPE;
	v->a[258359] = anon_sym_AMP;
	small_parse_table_12918(v);
}

void	small_parse_table_12918(t_small_parse_table_array *v)
{
	v->a[258360] = anon_sym_LT;
	v->a[258361] = anon_sym_GT;
	v->a[258362] = anon_sym_LT_LT;
	v->a[258363] = anon_sym_GT_GT;
	v->a[258364] = anon_sym_RPAREN;
	v->a[258365] = anon_sym_SEMI_SEMI;
	v->a[258366] = anon_sym_PIPE_AMP;
	v->a[258367] = anon_sym_AMP_GT;
	v->a[258368] = anon_sym_AMP_GT_GT;
	v->a[258369] = anon_sym_LT_AMP;
	v->a[258370] = anon_sym_GT_AMP;
	v->a[258371] = anon_sym_GT_PIPE;
	v->a[258372] = anon_sym_LT_AMP_DASH;
	v->a[258373] = anon_sym_GT_AMP_DASH;
	v->a[258374] = anon_sym_LT_LT_DASH;
	v->a[258375] = 3;
	v->a[258376] = actions(3);
	v->a[258377] = 1;
	v->a[258378] = sym_comment;
	v->a[258379] = actions(5768);
	small_parse_table_12919(v);
}

void	small_parse_table_12919(t_small_parse_table_array *v)
{
	v->a[258380] = 4;
	v->a[258381] = sym_file_descriptor;
	v->a[258382] = sym_variable_name;
	v->a[258383] = ts_builtin_sym_end;
	v->a[258384] = aux_sym_heredoc_redirect_token1;
	v->a[258385] = actions(5766);
	v->a[258386] = 21;
	v->a[258387] = anon_sym_SEMI;
	v->a[258388] = anon_sym_PIPE_PIPE;
	v->a[258389] = anon_sym_AMP_AMP;
	v->a[258390] = anon_sym_PIPE;
	v->a[258391] = anon_sym_AMP;
	v->a[258392] = anon_sym_LT;
	v->a[258393] = anon_sym_GT;
	v->a[258394] = anon_sym_LT_LT;
	v->a[258395] = anon_sym_GT_GT;
	v->a[258396] = anon_sym_RPAREN;
	v->a[258397] = anon_sym_SEMI_SEMI;
	v->a[258398] = anon_sym_PIPE_AMP;
	v->a[258399] = anon_sym_AMP_GT;
	small_parse_table_12920(v);
}

/* EOF small_parse_table_2583.c */
