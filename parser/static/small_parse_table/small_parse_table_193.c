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
	v->a[19300] = actions(17);
	v->a[19301] = 1;
	v->a[19302] = anon_sym_LPAREN;
	v->a[19303] = actions(19);
	v->a[19304] = 1;
	v->a[19305] = anon_sym_LBRACE;
	v->a[19306] = actions(59);
	v->a[19307] = 1;
	v->a[19308] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19309] = actions(61);
	v->a[19310] = 1;
	v->a[19311] = anon_sym_DOLLAR;
	v->a[19312] = actions(63);
	v->a[19313] = 1;
	v->a[19314] = anon_sym_DQUOTE;
	v->a[19315] = actions(67);
	v->a[19316] = 1;
	v->a[19317] = anon_sym_DOLLAR_LBRACE;
	v->a[19318] = actions(69);
	v->a[19319] = 1;
	small_parse_table_966(v);
}

void	small_parse_table_966(t_small_parse_table_array *v)
{
	v->a[19320] = anon_sym_DOLLAR_LPAREN;
	v->a[19321] = actions(71);
	v->a[19322] = 1;
	v->a[19323] = anon_sym_BQUOTE;
	v->a[19324] = actions(73);
	v->a[19325] = 1;
	v->a[19326] = sym_file_descriptor;
	v->a[19327] = actions(377);
	v->a[19328] = 1;
	v->a[19329] = sym_variable_name;
	v->a[19330] = state(189);
	v->a[19331] = 1;
	v->a[19332] = sym_command_name;
	v->a[19333] = state(650);
	v->a[19334] = 1;
	v->a[19335] = sym_concatenation;
	v->a[19336] = state(712);
	v->a[19337] = 1;
	v->a[19338] = sym_file_redirect;
	v->a[19339] = state(713);
	small_parse_table_967(v);
}

void	small_parse_table_967(t_small_parse_table_array *v)
{
	v->a[19340] = 1;
	v->a[19341] = aux_sym_command_repeat1;
	v->a[19342] = state(1281);
	v->a[19343] = 1;
	v->a[19344] = sym_variable_assignment;
	v->a[19345] = state(1321);
	v->a[19346] = 1;
	v->a[19347] = aux_sym_redirected_statement_repeat2;
	v->a[19348] = actions(11);
	v->a[19349] = 2;
	v->a[19350] = anon_sym_while;
	v->a[19351] = anon_sym_until;
	v->a[19352] = actions(57);
	v->a[19353] = 2;
	v->a[19354] = anon_sym_LT_AMP_DASH;
	v->a[19355] = anon_sym_GT_AMP_DASH;
	v->a[19356] = actions(65);
	v->a[19357] = 3;
	v->a[19358] = sym_raw_string;
	v->a[19359] = sym_number;
	small_parse_table_968(v);
}

void	small_parse_table_968(t_small_parse_table_array *v)
{
	v->a[19360] = sym_word;
	v->a[19361] = state(443);
	v->a[19362] = 5;
	v->a[19363] = sym_arithmetic_expansion;
	v->a[19364] = sym_string;
	v->a[19365] = sym_simple_expansion;
	v->a[19366] = sym_expansion;
	v->a[19367] = sym_command_substitution;
	v->a[19368] = actions(55);
	v->a[19369] = 6;
	v->a[19370] = anon_sym_LT;
	v->a[19371] = anon_sym_GT;
	v->a[19372] = anon_sym_GT_GT;
	v->a[19373] = anon_sym_LT_AMP;
	v->a[19374] = anon_sym_GT_AMP;
	v->a[19375] = anon_sym_GT_PIPE;
	v->a[19376] = state(1191);
	v->a[19377] = 7;
	v->a[19378] = sym_for_statement;
	v->a[19379] = sym_while_statement;
	small_parse_table_969(v);
}

void	small_parse_table_969(t_small_parse_table_array *v)
{
	v->a[19380] = sym_if_statement;
	v->a[19381] = sym_compound_statement;
	v->a[19382] = sym_subshell;
	v->a[19383] = sym_command;
	v->a[19384] = sym__variable_assignments;
	v->a[19385] = 25;
	v->a[19386] = actions(3);
	v->a[19387] = 1;
	v->a[19388] = sym_comment;
	v->a[19389] = actions(158);
	v->a[19390] = 1;
	v->a[19391] = anon_sym_for;
	v->a[19392] = actions(162);
	v->a[19393] = 1;
	v->a[19394] = anon_sym_if;
	v->a[19395] = actions(166);
	v->a[19396] = 1;
	v->a[19397] = anon_sym_LPAREN;
	v->a[19398] = actions(168);
	v->a[19399] = 1;
	small_parse_table_970(v);
}

/* EOF small_parse_table_193.c */
