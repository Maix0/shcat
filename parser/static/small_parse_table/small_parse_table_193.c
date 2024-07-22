/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_193.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_965(t_small_parse_table_array *v)
{
	v->a[19300] = 1;
	v->a[19301] = anon_sym_DOLLAR_LPAREN;
	v->a[19302] = actions(417);
	v->a[19303] = 1;
	v->a[19304] = sym_file_descriptor;
	v->a[19305] = actions(419);
	v->a[19306] = 1;
	v->a[19307] = sym__bare_dollar;
	v->a[19308] = state(280);
	v->a[19309] = 1;
	v->a[19310] = aux_sym_command_repeat2;
	v->a[19311] = state(674);
	v->a[19312] = 1;
	v->a[19313] = sym_concatenation;
	v->a[19314] = state(1181);
	v->a[19315] = 1;
	v->a[19316] = sym_subshell;
	v->a[19317] = actions(493);
	v->a[19318] = 3;
	v->a[19319] = sym_raw_string;
	small_parse_table_966(v);
}

void	small_parse_table_966(t_small_parse_table_array *v)
{
	v->a[19320] = sym_number;
	v->a[19321] = sym_word;
	v->a[19322] = state(495);
	v->a[19323] = 5;
	v->a[19324] = sym_arithmetic_expansion;
	v->a[19325] = sym_string;
	v->a[19326] = sym_simple_expansion;
	v->a[19327] = sym_expansion;
	v->a[19328] = sym_command_substitution;
	v->a[19329] = actions(403);
	v->a[19330] = 16;
	v->a[19331] = anon_sym_PIPE;
	v->a[19332] = anon_sym_SEMI_SEMI;
	v->a[19333] = anon_sym_AMP_AMP;
	v->a[19334] = anon_sym_PIPE_PIPE;
	v->a[19335] = anon_sym_LT;
	v->a[19336] = anon_sym_GT;
	v->a[19337] = anon_sym_GT_GT;
	v->a[19338] = anon_sym_LT_AMP;
	v->a[19339] = anon_sym_GT_AMP;
	small_parse_table_967(v);
}

void	small_parse_table_967(t_small_parse_table_array *v)
{
	v->a[19340] = anon_sym_GT_PIPE;
	v->a[19341] = anon_sym_LT_GT;
	v->a[19342] = anon_sym_LT_LT;
	v->a[19343] = anon_sym_LT_LT_DASH;
	v->a[19344] = aux_sym_heredoc_redirect_token1;
	v->a[19345] = anon_sym_BQUOTE;
	v->a[19346] = anon_sym_SEMI;
	v->a[19347] = 15;
	v->a[19348] = actions(3);
	v->a[19349] = 1;
	v->a[19350] = sym_comment;
	v->a[19351] = actions(17);
	v->a[19352] = 1;
	v->a[19353] = anon_sym_LPAREN;
	v->a[19354] = actions(405);
	v->a[19355] = 1;
	v->a[19356] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19357] = actions(407);
	v->a[19358] = 1;
	v->a[19359] = anon_sym_DOLLAR;
	small_parse_table_968(v);
}

void	small_parse_table_968(t_small_parse_table_array *v)
{
	v->a[19360] = actions(409);
	v->a[19361] = 1;
	v->a[19362] = anon_sym_DQUOTE;
	v->a[19363] = actions(411);
	v->a[19364] = 1;
	v->a[19365] = anon_sym_DOLLAR_LBRACE;
	v->a[19366] = actions(413);
	v->a[19367] = 1;
	v->a[19368] = anon_sym_DOLLAR_LPAREN;
	v->a[19369] = actions(419);
	v->a[19370] = 1;
	v->a[19371] = sym__bare_dollar;
	v->a[19372] = actions(473);
	v->a[19373] = 1;
	v->a[19374] = sym_file_descriptor;
	v->a[19375] = state(301);
	v->a[19376] = 1;
	v->a[19377] = aux_sym_command_repeat2;
	v->a[19378] = state(674);
	v->a[19379] = 1;
	small_parse_table_969(v);
}

void	small_parse_table_969(t_small_parse_table_array *v)
{
	v->a[19380] = sym_concatenation;
	v->a[19381] = state(1157);
	v->a[19382] = 1;
	v->a[19383] = sym_subshell;
	v->a[19384] = actions(493);
	v->a[19385] = 3;
	v->a[19386] = sym_raw_string;
	v->a[19387] = sym_number;
	v->a[19388] = sym_word;
	v->a[19389] = state(495);
	v->a[19390] = 5;
	v->a[19391] = sym_arithmetic_expansion;
	v->a[19392] = sym_string;
	v->a[19393] = sym_simple_expansion;
	v->a[19394] = sym_expansion;
	v->a[19395] = sym_command_substitution;
	v->a[19396] = actions(471);
	v->a[19397] = 16;
	v->a[19398] = anon_sym_PIPE;
	v->a[19399] = anon_sym_SEMI_SEMI;
	small_parse_table_970(v);
}

/* EOF small_parse_table_193.c */
