/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_133.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_665(t_small_parse_table_array *v)
{
	v->a[13300] = anon_sym_GT_GT;
	v->a[13301] = anon_sym_LT_AMP;
	v->a[13302] = anon_sym_GT_AMP;
	v->a[13303] = anon_sym_GT_PIPE;
	v->a[13304] = state(1087);
	v->a[13305] = 12;
	v->a[13306] = sym_redirected_statement;
	v->a[13307] = sym_for_statement;
	v->a[13308] = sym_while_statement;
	v->a[13309] = sym_if_statement;
	v->a[13310] = sym_case_statement;
	v->a[13311] = sym_function_definition;
	v->a[13312] = sym_compound_statement;
	v->a[13313] = sym_subshell;
	v->a[13314] = sym_list;
	v->a[13315] = sym_negated_command;
	v->a[13316] = sym_command;
	v->a[13317] = sym__variable_assignments;
	v->a[13318] = 32;
	v->a[13319] = actions(3);
	small_parse_table_666(v);
}

void	small_parse_table_666(t_small_parse_table_array *v)
{
	v->a[13320] = 1;
	v->a[13321] = sym_comment;
	v->a[13322] = actions(9);
	v->a[13323] = 1;
	v->a[13324] = anon_sym_for;
	v->a[13325] = actions(13);
	v->a[13326] = 1;
	v->a[13327] = anon_sym_if;
	v->a[13328] = actions(15);
	v->a[13329] = 1;
	v->a[13330] = anon_sym_case;
	v->a[13331] = actions(17);
	v->a[13332] = 1;
	v->a[13333] = anon_sym_LPAREN;
	v->a[13334] = actions(19);
	v->a[13335] = 1;
	v->a[13336] = anon_sym_LBRACE;
	v->a[13337] = actions(59);
	v->a[13338] = 1;
	v->a[13339] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_667(v);
}

void	small_parse_table_667(t_small_parse_table_array *v)
{
	v->a[13340] = actions(61);
	v->a[13341] = 1;
	v->a[13342] = anon_sym_DOLLAR;
	v->a[13343] = actions(63);
	v->a[13344] = 1;
	v->a[13345] = anon_sym_DQUOTE;
	v->a[13346] = actions(67);
	v->a[13347] = 1;
	v->a[13348] = anon_sym_DOLLAR_LBRACE;
	v->a[13349] = actions(69);
	v->a[13350] = 1;
	v->a[13351] = anon_sym_DOLLAR_LPAREN;
	v->a[13352] = actions(71);
	v->a[13353] = 1;
	v->a[13354] = anon_sym_BQUOTE;
	v->a[13355] = actions(73);
	v->a[13356] = 1;
	v->a[13357] = sym_file_descriptor;
	v->a[13358] = actions(75);
	v->a[13359] = 1;
	small_parse_table_668(v);
}

void	small_parse_table_668(t_small_parse_table_array *v)
{
	v->a[13360] = sym_variable_name;
	v->a[13361] = actions(240);
	v->a[13362] = 1;
	v->a[13363] = sym_word;
	v->a[13364] = actions(242);
	v->a[13365] = 1;
	v->a[13366] = anon_sym_BANG;
	v->a[13367] = state(136);
	v->a[13368] = 1;
	v->a[13369] = aux_sym__statements_repeat1;
	v->a[13370] = state(188);
	v->a[13371] = 1;
	v->a[13372] = sym_command_name;
	v->a[13373] = state(297);
	v->a[13374] = 1;
	v->a[13375] = sym_variable_assignment;
	v->a[13376] = state(650);
	v->a[13377] = 1;
	v->a[13378] = sym_concatenation;
	v->a[13379] = state(749);
	small_parse_table_669(v);
}

void	small_parse_table_669(t_small_parse_table_array *v)
{
	v->a[13380] = 1;
	v->a[13381] = aux_sym_command_repeat1;
	v->a[13382] = state(795);
	v->a[13383] = 1;
	v->a[13384] = sym_file_redirect;
	v->a[13385] = state(1154);
	v->a[13386] = 1;
	v->a[13387] = sym_pipeline;
	v->a[13388] = state(1240);
	v->a[13389] = 1;
	v->a[13390] = aux_sym_redirected_statement_repeat2;
	v->a[13391] = state(2119);
	v->a[13392] = 1;
	v->a[13393] = sym__statement_not_pipeline;
	v->a[13394] = state(2273);
	v->a[13395] = 1;
	v->a[13396] = sym__statements;
	v->a[13397] = actions(11);
	v->a[13398] = 2;
	v->a[13399] = anon_sym_while;
	small_parse_table_670(v);
}

/* EOF small_parse_table_133.c */
