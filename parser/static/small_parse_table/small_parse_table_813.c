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
	v->a[81300] = actions(4558);
	v->a[81301] = 1;
	v->a[81302] = anon_sym_BQUOTE;
	v->a[81303] = actions(4560);
	v->a[81304] = 1;
	v->a[81305] = anon_sym_DOLLAR_BQUOTE;
	v->a[81306] = state(3393);
	v->a[81307] = 1;
	v->a[81308] = aux_sym__literal_repeat1;
	v->a[81309] = state(3953);
	v->a[81310] = 1;
	v->a[81311] = sym_last_case_item;
	v->a[81312] = actions(4358);
	v->a[81313] = 2;
	v->a[81314] = sym_test_operator;
	v->a[81315] = sym_raw_string;
	v->a[81316] = state(1792);
	v->a[81317] = 2;
	v->a[81318] = sym_case_item;
	v->a[81319] = aux_sym_case_statement_repeat1;
	small_parse_table_4066(v);
}

void	small_parse_table_4066(t_small_parse_table_array *v)
{
	v->a[81320] = state(3472);
	v->a[81321] = 2;
	v->a[81322] = sym_concatenation;
	v->a[81323] = sym__extglob_blob;
	v->a[81324] = state(3295);
	v->a[81325] = 7;
	v->a[81326] = sym_arithmetic_expansion;
	v->a[81327] = sym_brace_expression;
	v->a[81328] = sym_string;
	v->a[81329] = sym_number;
	v->a[81330] = sym_simple_expansion;
	v->a[81331] = sym_expansion;
	v->a[81332] = sym_command_substitution;
	v->a[81333] = 3;
	v->a[81334] = actions(3);
	v->a[81335] = 1;
	v->a[81336] = sym_comment;
	v->a[81337] = actions(2888);
	v->a[81338] = 5;
	v->a[81339] = sym_file_descriptor;
	small_parse_table_4067(v);
}

void	small_parse_table_4067(t_small_parse_table_array *v)
{
	v->a[81340] = sym__concat;
	v->a[81341] = sym_test_operator;
	v->a[81342] = sym__brace_start;
	v->a[81343] = aux_sym_heredoc_redirect_token1;
	v->a[81344] = actions(2886);
	v->a[81345] = 25;
	v->a[81346] = anon_sym_AMP_AMP;
	v->a[81347] = anon_sym_PIPE_PIPE;
	v->a[81348] = anon_sym_LT;
	v->a[81349] = anon_sym_GT;
	v->a[81350] = anon_sym_GT_GT;
	v->a[81351] = anon_sym_AMP_GT;
	v->a[81352] = anon_sym_AMP_GT_GT;
	v->a[81353] = anon_sym_LT_AMP;
	v->a[81354] = anon_sym_GT_AMP;
	v->a[81355] = anon_sym_GT_PIPE;
	v->a[81356] = anon_sym_LT_AMP_DASH;
	v->a[81357] = anon_sym_GT_AMP_DASH;
	v->a[81358] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81359] = aux_sym_concatenation_token1;
	small_parse_table_4068(v);
}

void	small_parse_table_4068(t_small_parse_table_array *v)
{
	v->a[81360] = anon_sym_DOLLAR;
	v->a[81361] = sym__special_character;
	v->a[81362] = anon_sym_DQUOTE;
	v->a[81363] = sym_raw_string;
	v->a[81364] = aux_sym_number_token1;
	v->a[81365] = aux_sym_number_token2;
	v->a[81366] = anon_sym_DOLLAR_LBRACE;
	v->a[81367] = anon_sym_DOLLAR_LPAREN;
	v->a[81368] = anon_sym_BQUOTE;
	v->a[81369] = anon_sym_DOLLAR_BQUOTE;
	v->a[81370] = sym_word;
	v->a[81371] = 22;
	v->a[81372] = actions(57);
	v->a[81373] = 1;
	v->a[81374] = sym_comment;
	v->a[81375] = actions(4328);
	v->a[81376] = 1;
	v->a[81377] = sym_word;
	v->a[81378] = actions(4340);
	v->a[81379] = 1;
	small_parse_table_4069(v);
}

void	small_parse_table_4069(t_small_parse_table_array *v)
{
	v->a[81380] = anon_sym_DOLLAR;
	v->a[81381] = actions(4346);
	v->a[81382] = 1;
	v->a[81383] = aux_sym_number_token1;
	v->a[81384] = actions(4348);
	v->a[81385] = 1;
	v->a[81386] = aux_sym_number_token2;
	v->a[81387] = actions(4352);
	v->a[81388] = 1;
	v->a[81389] = anon_sym_DOLLAR_LPAREN;
	v->a[81390] = actions(4360);
	v->a[81391] = 1;
	v->a[81392] = sym_extglob_pattern;
	v->a[81393] = actions(4362);
	v->a[81394] = 1;
	v->a[81395] = sym__brace_start;
	v->a[81396] = actions(4548);
	v->a[81397] = 1;
	v->a[81398] = anon_sym_LPAREN;
	v->a[81399] = actions(4550);
	small_parse_table_4070(v);
}

/* EOF small_parse_table_813.c */
