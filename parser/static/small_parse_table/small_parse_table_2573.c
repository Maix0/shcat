/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2573.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12865(t_small_parse_table_array *v)
{
	v->a[257300] = anon_sym_GT_GT;
	v->a[257301] = anon_sym_RPAREN;
	v->a[257302] = anon_sym_SEMI_SEMI;
	v->a[257303] = anon_sym_PIPE_AMP;
	v->a[257304] = anon_sym_AMP_GT;
	v->a[257305] = anon_sym_AMP_GT_GT;
	v->a[257306] = anon_sym_LT_AMP;
	v->a[257307] = anon_sym_GT_AMP;
	v->a[257308] = anon_sym_GT_PIPE;
	v->a[257309] = anon_sym_LT_AMP_DASH;
	v->a[257310] = anon_sym_GT_AMP_DASH;
	v->a[257311] = anon_sym_LT_LT_DASH;
	v->a[257312] = anon_sym_LT_LT_LT;
	v->a[257313] = anon_sym_BQUOTE;
	v->a[257314] = 8;
	v->a[257315] = actions(3);
	v->a[257316] = 1;
	v->a[257317] = sym_comment;
	v->a[257318] = actions(11448);
	v->a[257319] = 1;
	small_parse_table_12866(v);
}

void	small_parse_table_12866(t_small_parse_table_array *v)
{
	v->a[257320] = anon_sym_LT_LT_LT;
	v->a[257321] = actions(11774);
	v->a[257322] = 1;
	v->a[257323] = sym_file_descriptor;
	v->a[257324] = actions(11481);
	v->a[257325] = 2;
	v->a[257326] = anon_sym_LT_AMP_DASH;
	v->a[257327] = anon_sym_GT_AMP_DASH;
	v->a[257328] = actions(11535);
	v->a[257329] = 2;
	v->a[257330] = ts_builtin_sym_end;
	v->a[257331] = aux_sym_heredoc_redirect_token1;
	v->a[257332] = state(4877);
	v->a[257333] = 2;
	v->a[257334] = sym_file_redirect;
	v->a[257335] = sym_herestring_redirect;
	v->a[257336] = actions(11479);
	v->a[257337] = 8;
	v->a[257338] = anon_sym_LT;
	v->a[257339] = anon_sym_GT;
	small_parse_table_12867(v);
}

void	small_parse_table_12867(t_small_parse_table_array *v)
{
	v->a[257340] = anon_sym_GT_GT;
	v->a[257341] = anon_sym_AMP_GT;
	v->a[257342] = anon_sym_AMP_GT_GT;
	v->a[257343] = anon_sym_LT_AMP;
	v->a[257344] = anon_sym_GT_AMP;
	v->a[257345] = anon_sym_GT_PIPE;
	v->a[257346] = actions(11533);
	v->a[257347] = 9;
	v->a[257348] = anon_sym_SEMI;
	v->a[257349] = anon_sym_PIPE_PIPE;
	v->a[257350] = anon_sym_AMP_AMP;
	v->a[257351] = anon_sym_PIPE;
	v->a[257352] = anon_sym_AMP;
	v->a[257353] = anon_sym_LT_LT;
	v->a[257354] = anon_sym_SEMI_SEMI;
	v->a[257355] = anon_sym_PIPE_AMP;
	v->a[257356] = anon_sym_LT_LT_DASH;
	v->a[257357] = 16;
	v->a[257358] = actions(3);
	v->a[257359] = 1;
	small_parse_table_12868(v);
}

void	small_parse_table_12868(t_small_parse_table_array *v)
{
	v->a[257360] = sym_comment;
	v->a[257361] = actions(11760);
	v->a[257362] = 1;
	v->a[257363] = anon_sym_BANG2;
	v->a[257364] = actions(11764);
	v->a[257365] = 1;
	v->a[257366] = anon_sym_DOLLAR_LPAREN;
	v->a[257367] = actions(11766);
	v->a[257368] = 1;
	v->a[257369] = anon_sym_BQUOTE;
	v->a[257370] = actions(11768);
	v->a[257371] = 1;
	v->a[257372] = anon_sym_DOLLAR_BQUOTE;
	v->a[257373] = actions(11770);
	v->a[257374] = 1;
	v->a[257375] = aux_sym__simple_variable_name_token1;
	v->a[257376] = actions(11772);
	v->a[257377] = 1;
	v->a[257378] = sym_variable_name;
	v->a[257379] = actions(11873);
	small_parse_table_12869(v);
}

void	small_parse_table_12869(t_small_parse_table_array *v)
{
	v->a[257380] = 1;
	v->a[257381] = anon_sym_RBRACE3;
	v->a[257382] = state(3532);
	v->a[257383] = 1;
	v->a[257384] = sym_subscript;
	v->a[257385] = state(6428);
	v->a[257386] = 1;
	v->a[257387] = aux_sym__expansion_body_repeat1;
	v->a[257388] = state(6472);
	v->a[257389] = 1;
	v->a[257390] = sym_command_substitution;
	v->a[257391] = state(6860);
	v->a[257392] = 1;
	v->a[257393] = sym__expansion_body;
	v->a[257394] = actions(11762);
	v->a[257395] = 2;
	v->a[257396] = anon_sym_POUND2;
	v->a[257397] = anon_sym_EQ2;
	v->a[257398] = actions(8050);
	v->a[257399] = 3;
	small_parse_table_12870(v);
}

/* EOF small_parse_table_2573.c */
