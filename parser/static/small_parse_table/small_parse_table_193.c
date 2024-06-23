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
	v->a[19300] = state(1746);
	v->a[19301] = 7;
	v->a[19302] = sym_for_statement;
	v->a[19303] = sym_while_statement;
	v->a[19304] = sym_if_statement;
	v->a[19305] = sym_compound_statement;
	v->a[19306] = sym_subshell;
	v->a[19307] = sym_command;
	v->a[19308] = sym__variable_assignments;
	v->a[19309] = actions(341);
	v->a[19310] = 8;
	v->a[19311] = anon_sym_LT;
	v->a[19312] = anon_sym_GT;
	v->a[19313] = anon_sym_GT_GT;
	v->a[19314] = anon_sym_AMP_GT;
	v->a[19315] = anon_sym_AMP_GT_GT;
	v->a[19316] = anon_sym_LT_AMP;
	v->a[19317] = anon_sym_GT_AMP;
	v->a[19318] = anon_sym_GT_PIPE;
	v->a[19319] = 25;
	small_parse_table_966(v);
}

void	small_parse_table_966(t_small_parse_table_array *v)
{
	v->a[19320] = actions(3);
	v->a[19321] = 1;
	v->a[19322] = sym_comment;
	v->a[19323] = actions(9);
	v->a[19324] = 1;
	v->a[19325] = anon_sym_for;
	v->a[19326] = actions(13);
	v->a[19327] = 1;
	v->a[19328] = anon_sym_if;
	v->a[19329] = actions(17);
	v->a[19330] = 1;
	v->a[19331] = anon_sym_LPAREN;
	v->a[19332] = actions(19);
	v->a[19333] = 1;
	v->a[19334] = anon_sym_LBRACE;
	v->a[19335] = actions(59);
	v->a[19336] = 1;
	v->a[19337] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19338] = actions(61);
	v->a[19339] = 1;
	small_parse_table_967(v);
}

void	small_parse_table_967(t_small_parse_table_array *v)
{
	v->a[19340] = anon_sym_DOLLAR;
	v->a[19341] = actions(63);
	v->a[19342] = 1;
	v->a[19343] = anon_sym_DQUOTE;
	v->a[19344] = actions(67);
	v->a[19345] = 1;
	v->a[19346] = anon_sym_DOLLAR_LBRACE;
	v->a[19347] = actions(69);
	v->a[19348] = 1;
	v->a[19349] = anon_sym_DOLLAR_LPAREN;
	v->a[19350] = actions(71);
	v->a[19351] = 1;
	v->a[19352] = anon_sym_BQUOTE;
	v->a[19353] = actions(230);
	v->a[19354] = 1;
	v->a[19355] = sym_file_descriptor;
	v->a[19356] = actions(377);
	v->a[19357] = 1;
	v->a[19358] = sym_variable_name;
	v->a[19359] = state(184);
	small_parse_table_968(v);
}

void	small_parse_table_968(t_small_parse_table_array *v)
{
	v->a[19360] = 1;
	v->a[19361] = sym_command_name;
	v->a[19362] = state(647);
	v->a[19363] = 1;
	v->a[19364] = sym_concatenation;
	v->a[19365] = state(738);
	v->a[19366] = 1;
	v->a[19367] = sym_file_redirect;
	v->a[19368] = state(828);
	v->a[19369] = 1;
	v->a[19370] = aux_sym_command_repeat1;
	v->a[19371] = state(1310);
	v->a[19372] = 1;
	v->a[19373] = aux_sym_redirected_statement_repeat2;
	v->a[19374] = state(1428);
	v->a[19375] = 1;
	v->a[19376] = sym_variable_assignment;
	v->a[19377] = actions(11);
	v->a[19378] = 2;
	v->a[19379] = anon_sym_while;
	small_parse_table_969(v);
}

void	small_parse_table_969(t_small_parse_table_array *v)
{
	v->a[19380] = anon_sym_until;
	v->a[19381] = actions(226);
	v->a[19382] = 2;
	v->a[19383] = anon_sym_LT_AMP_DASH;
	v->a[19384] = anon_sym_GT_AMP_DASH;
	v->a[19385] = actions(228);
	v->a[19386] = 3;
	v->a[19387] = sym_raw_string;
	v->a[19388] = sym_number;
	v->a[19389] = sym_word;
	v->a[19390] = state(294);
	v->a[19391] = 5;
	v->a[19392] = sym_arithmetic_expansion;
	v->a[19393] = sym_string;
	v->a[19394] = sym_simple_expansion;
	v->a[19395] = sym_expansion;
	v->a[19396] = sym_command_substitution;
	v->a[19397] = state(1379);
	v->a[19398] = 7;
	v->a[19399] = sym_for_statement;
	small_parse_table_970(v);
}

/* EOF small_parse_table_193.c */
