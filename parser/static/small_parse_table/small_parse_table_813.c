/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_813.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4065(t_small_parse_table_array *v)
{
	v->a[81300] = aux_sym__variable_assignments_repeat1;
	v->a[81301] = actions(2115);
	v->a[81302] = 15;
	v->a[81303] = anon_sym_PIPE;
	v->a[81304] = anon_sym_AMP_AMP;
	v->a[81305] = anon_sym_PIPE_PIPE;
	v->a[81306] = anon_sym_LT;
	v->a[81307] = anon_sym_GT;
	v->a[81308] = anon_sym_GT_GT;
	v->a[81309] = anon_sym_AMP_GT;
	v->a[81310] = anon_sym_AMP_GT_GT;
	v->a[81311] = anon_sym_LT_AMP;
	v->a[81312] = anon_sym_GT_AMP;
	v->a[81313] = anon_sym_GT_PIPE;
	v->a[81314] = anon_sym_LT_AMP_DASH;
	v->a[81315] = anon_sym_GT_AMP_DASH;
	v->a[81316] = anon_sym_LT_LT;
	v->a[81317] = anon_sym_LT_LT_DASH;
	v->a[81318] = 11;
	v->a[81319] = actions(3);
	small_parse_table_4066(v);
}

void	small_parse_table_4066(t_small_parse_table_array *v)
{
	v->a[81320] = 1;
	v->a[81321] = sym_comment;
	v->a[81322] = actions(884);
	v->a[81323] = 1;
	v->a[81324] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81325] = actions(886);
	v->a[81326] = 1;
	v->a[81327] = anon_sym_DOLLAR;
	v->a[81328] = actions(888);
	v->a[81329] = 1;
	v->a[81330] = anon_sym_DQUOTE;
	v->a[81331] = actions(890);
	v->a[81332] = 1;
	v->a[81333] = anon_sym_DOLLAR_LBRACE;
	v->a[81334] = actions(892);
	v->a[81335] = 1;
	v->a[81336] = anon_sym_DOLLAR_LPAREN;
	v->a[81337] = actions(894);
	v->a[81338] = 1;
	v->a[81339] = anon_sym_BQUOTE;
	small_parse_table_4067(v);
}

void	small_parse_table_4067(t_small_parse_table_array *v)
{
	v->a[81340] = state(1545);
	v->a[81341] = 2;
	v->a[81342] = sym_concatenation;
	v->a[81343] = aux_sym_for_statement_repeat1;
	v->a[81344] = actions(2924);
	v->a[81345] = 3;
	v->a[81346] = sym_raw_string;
	v->a[81347] = sym_number;
	v->a[81348] = sym_word;
	v->a[81349] = actions(2931);
	v->a[81350] = 4;
	v->a[81351] = anon_sym_SEMI_SEMI;
	v->a[81352] = aux_sym_heredoc_redirect_token1;
	v->a[81353] = anon_sym_AMP;
	v->a[81354] = anon_sym_SEMI;
	v->a[81355] = state(1745);
	v->a[81356] = 5;
	v->a[81357] = sym_arithmetic_expansion;
	v->a[81358] = sym_string;
	v->a[81359] = sym_simple_expansion;
	small_parse_table_4068(v);
}

void	small_parse_table_4068(t_small_parse_table_array *v)
{
	v->a[81360] = sym_expansion;
	v->a[81361] = sym_command_substitution;
	v->a[81362] = 6;
	v->a[81363] = actions(3);
	v->a[81364] = 1;
	v->a[81365] = sym_comment;
	v->a[81366] = actions(2085);
	v->a[81367] = 1;
	v->a[81368] = aux_sym_concatenation_token1;
	v->a[81369] = actions(2933);
	v->a[81370] = 1;
	v->a[81371] = sym__concat;
	v->a[81372] = state(1108);
	v->a[81373] = 1;
	v->a[81374] = aux_sym_concatenation_repeat1;
	v->a[81375] = actions(972);
	v->a[81376] = 2;
	v->a[81377] = sym_file_descriptor;
	v->a[81378] = aux_sym_heredoc_redirect_token1;
	v->a[81379] = actions(974);
	small_parse_table_4069(v);
}

void	small_parse_table_4069(t_small_parse_table_array *v)
{
	v->a[81380] = 15;
	v->a[81381] = anon_sym_PIPE;
	v->a[81382] = anon_sym_AMP_AMP;
	v->a[81383] = anon_sym_PIPE_PIPE;
	v->a[81384] = anon_sym_LT;
	v->a[81385] = anon_sym_GT;
	v->a[81386] = anon_sym_GT_GT;
	v->a[81387] = anon_sym_AMP_GT;
	v->a[81388] = anon_sym_AMP_GT_GT;
	v->a[81389] = anon_sym_LT_AMP;
	v->a[81390] = anon_sym_GT_AMP;
	v->a[81391] = anon_sym_GT_PIPE;
	v->a[81392] = anon_sym_LT_AMP_DASH;
	v->a[81393] = anon_sym_GT_AMP_DASH;
	v->a[81394] = anon_sym_LT_LT;
	v->a[81395] = anon_sym_LT_LT_DASH;
	v->a[81396] = 5;
	v->a[81397] = actions(1094);
	v->a[81398] = 1;
	v->a[81399] = sym_comment;
	small_parse_table_4070(v);
}

/* EOF small_parse_table_813.c */
