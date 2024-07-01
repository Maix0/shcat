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
	v->a[19301] = anon_sym_BQUOTE;
	v->a[19302] = actions(491);
	v->a[19303] = 1;
	v->a[19304] = sym__bare_dollar;
	v->a[19305] = state(203);
	v->a[19306] = 1;
	v->a[19307] = aux_sym_command_repeat2;
	v->a[19308] = state(640);
	v->a[19309] = 1;
	v->a[19310] = sym_concatenation;
	v->a[19311] = state(1216);
	v->a[19312] = 1;
	v->a[19313] = sym_subshell;
	v->a[19314] = actions(477);
	v->a[19315] = 3;
	v->a[19316] = sym_raw_string;
	v->a[19317] = sym_number;
	v->a[19318] = sym_word;
	v->a[19319] = state(442);
	small_parse_table_966(v);
}

void	small_parse_table_966(t_small_parse_table_array *v)
{
	v->a[19320] = 5;
	v->a[19321] = sym_arithmetic_expansion;
	v->a[19322] = sym_string;
	v->a[19323] = sym_simple_expansion;
	v->a[19324] = sym_expansion;
	v->a[19325] = sym_command_substitution;
	v->a[19326] = actions(475);
	v->a[19327] = 17;
	v->a[19328] = anon_sym_esac;
	v->a[19329] = anon_sym_PIPE;
	v->a[19330] = anon_sym_SEMI_SEMI;
	v->a[19331] = anon_sym_AMP_AMP;
	v->a[19332] = anon_sym_PIPE_PIPE;
	v->a[19333] = anon_sym_LT;
	v->a[19334] = anon_sym_GT;
	v->a[19335] = anon_sym_GT_GT;
	v->a[19336] = anon_sym_LT_AMP;
	v->a[19337] = anon_sym_GT_AMP;
	v->a[19338] = anon_sym_GT_PIPE;
	v->a[19339] = anon_sym_LT_GT;
	small_parse_table_967(v);
}

void	small_parse_table_967(t_small_parse_table_array *v)
{
	v->a[19340] = anon_sym_LT_LT;
	v->a[19341] = anon_sym_LT_LT_DASH;
	v->a[19342] = aux_sym_heredoc_redirect_token1;
	v->a[19343] = anon_sym_AMP;
	v->a[19344] = anon_sym_SEMI;
	v->a[19345] = 16;
	v->a[19346] = actions(3);
	v->a[19347] = 1;
	v->a[19348] = sym_comment;
	v->a[19349] = actions(97);
	v->a[19350] = 1;
	v->a[19351] = anon_sym_LPAREN;
	v->a[19352] = actions(437);
	v->a[19353] = 1;
	v->a[19354] = sym_file_descriptor;
	v->a[19355] = actions(479);
	v->a[19356] = 1;
	v->a[19357] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19358] = actions(481);
	v->a[19359] = 1;
	small_parse_table_968(v);
}

void	small_parse_table_968(t_small_parse_table_array *v)
{
	v->a[19360] = anon_sym_DOLLAR;
	v->a[19361] = actions(483);
	v->a[19362] = 1;
	v->a[19363] = anon_sym_DQUOTE;
	v->a[19364] = actions(485);
	v->a[19365] = 1;
	v->a[19366] = anon_sym_DOLLAR_LBRACE;
	v->a[19367] = actions(487);
	v->a[19368] = 1;
	v->a[19369] = anon_sym_DOLLAR_LPAREN;
	v->a[19370] = actions(489);
	v->a[19371] = 1;
	v->a[19372] = anon_sym_BQUOTE;
	v->a[19373] = actions(491);
	v->a[19374] = 1;
	v->a[19375] = sym__bare_dollar;
	v->a[19376] = state(188);
	v->a[19377] = 1;
	v->a[19378] = aux_sym_command_repeat2;
	v->a[19379] = state(640);
	small_parse_table_969(v);
}

void	small_parse_table_969(t_small_parse_table_array *v)
{
	v->a[19380] = 1;
	v->a[19381] = sym_concatenation;
	v->a[19382] = state(1218);
	v->a[19383] = 1;
	v->a[19384] = sym_subshell;
	v->a[19385] = actions(477);
	v->a[19386] = 3;
	v->a[19387] = sym_raw_string;
	v->a[19388] = sym_number;
	v->a[19389] = sym_word;
	v->a[19390] = state(442);
	v->a[19391] = 5;
	v->a[19392] = sym_arithmetic_expansion;
	v->a[19393] = sym_string;
	v->a[19394] = sym_simple_expansion;
	v->a[19395] = sym_expansion;
	v->a[19396] = sym_command_substitution;
	v->a[19397] = actions(441);
	v->a[19398] = 17;
	v->a[19399] = anon_sym_esac;
	small_parse_table_970(v);
}

/* EOF small_parse_table_193.c */
