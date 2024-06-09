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
	v->a[19300] = anon_sym_LT;
	v->a[19301] = anon_sym_GT;
	v->a[19302] = anon_sym_GT_GT;
	v->a[19303] = anon_sym_AMP_GT;
	v->a[19304] = anon_sym_AMP_GT_GT;
	v->a[19305] = anon_sym_LT_AMP;
	v->a[19306] = anon_sym_GT_AMP;
	v->a[19307] = anon_sym_GT_PIPE;
	v->a[19308] = state(1090);
	v->a[19309] = 12;
	v->a[19310] = sym_redirected_statement;
	v->a[19311] = sym_for_statement;
	v->a[19312] = sym_while_statement;
	v->a[19313] = sym_if_statement;
	v->a[19314] = sym_case_statement;
	v->a[19315] = sym_function_definition;
	v->a[19316] = sym_compound_statement;
	v->a[19317] = sym_subshell;
	v->a[19318] = sym_list;
	v->a[19319] = sym_negated_command;
	small_parse_table_966(v);
}

void	small_parse_table_966(t_small_parse_table_array *v)
{
	v->a[19320] = sym_command;
	v->a[19321] = sym_variable_assignments;
	v->a[19322] = 32;
	v->a[19323] = actions(3);
	v->a[19324] = 1;
	v->a[19325] = sym_comment;
	v->a[19326] = actions(9);
	v->a[19327] = 1;
	v->a[19328] = anon_sym_for;
	v->a[19329] = actions(13);
	v->a[19330] = 1;
	v->a[19331] = anon_sym_if;
	v->a[19332] = actions(15);
	v->a[19333] = 1;
	v->a[19334] = anon_sym_case;
	v->a[19335] = actions(17);
	v->a[19336] = 1;
	v->a[19337] = anon_sym_LPAREN;
	v->a[19338] = actions(19);
	v->a[19339] = 1;
	small_parse_table_967(v);
}

void	small_parse_table_967(t_small_parse_table_array *v)
{
	v->a[19340] = anon_sym_LBRACE;
	v->a[19341] = actions(63);
	v->a[19342] = 1;
	v->a[19343] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19344] = actions(65);
	v->a[19345] = 1;
	v->a[19346] = anon_sym_DOLLAR;
	v->a[19347] = actions(67);
	v->a[19348] = 1;
	v->a[19349] = anon_sym_DQUOTE;
	v->a[19350] = actions(71);
	v->a[19351] = 1;
	v->a[19352] = aux_sym_number_token1;
	v->a[19353] = actions(73);
	v->a[19354] = 1;
	v->a[19355] = aux_sym_number_token2;
	v->a[19356] = actions(75);
	v->a[19357] = 1;
	v->a[19358] = anon_sym_DOLLAR_LBRACE;
	v->a[19359] = actions(77);
	small_parse_table_968(v);
}

void	small_parse_table_968(t_small_parse_table_array *v)
{
	v->a[19360] = 1;
	v->a[19361] = anon_sym_DOLLAR_LPAREN;
	v->a[19362] = actions(79);
	v->a[19363] = 1;
	v->a[19364] = anon_sym_BQUOTE;
	v->a[19365] = actions(349);
	v->a[19366] = 1;
	v->a[19367] = sym_word;
	v->a[19368] = actions(351);
	v->a[19369] = 1;
	v->a[19370] = anon_sym_BANG;
	v->a[19371] = actions(357);
	v->a[19372] = 1;
	v->a[19373] = sym_raw_string;
	v->a[19374] = actions(359);
	v->a[19375] = 1;
	v->a[19376] = sym_file_descriptor;
	v->a[19377] = actions(361);
	v->a[19378] = 1;
	v->a[19379] = sym_variable_name;
	small_parse_table_969(v);
}

void	small_parse_table_969(t_small_parse_table_array *v)
{
	v->a[19380] = state(247);
	v->a[19381] = 1;
	v->a[19382] = sym_command_name;
	v->a[19383] = state(555);
	v->a[19384] = 1;
	v->a[19385] = sym_variable_assignment;
	v->a[19386] = state(582);
	v->a[19387] = 1;
	v->a[19388] = sym_concatenation;
	v->a[19389] = state(585);
	v->a[19390] = 1;
	v->a[19391] = aux_sym_command_repeat1;
	v->a[19392] = state(718);
	v->a[19393] = 1;
	v->a[19394] = sym_file_redirect;
	v->a[19395] = state(1306);
	v->a[19396] = 1;
	v->a[19397] = sym_pipeline;
	v->a[19398] = state(1356);
	v->a[19399] = 1;
	small_parse_table_970(v);
}

/* EOF small_parse_table_193.c */
