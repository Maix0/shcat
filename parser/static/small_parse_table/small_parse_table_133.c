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
	v->a[13300] = anon_sym_DOLLAR_LBRACE;
	v->a[13301] = actions(63);
	v->a[13302] = 1;
	v->a[13303] = anon_sym_DOLLAR_LPAREN;
	v->a[13304] = actions(65);
	v->a[13305] = 1;
	v->a[13306] = anon_sym_BQUOTE;
	v->a[13307] = actions(67);
	v->a[13308] = 1;
	v->a[13309] = sym_variable_name;
	v->a[13310] = state(44);
	v->a[13311] = 1;
	v->a[13312] = aux_sym__terminated_statement;
	v->a[13313] = state(271);
	v->a[13314] = 1;
	v->a[13315] = sym_command_name;
	v->a[13316] = state(298);
	v->a[13317] = 1;
	v->a[13318] = sym_variable_assignment;
	v->a[13319] = state(482);
	small_parse_table_666(v);
}

void	small_parse_table_666(t_small_parse_table_array *v)
{
	v->a[13320] = 1;
	v->a[13321] = aux_sym_command_repeat1;
	v->a[13322] = state(600);
	v->a[13323] = 1;
	v->a[13324] = sym_file_redirect;
	v->a[13325] = state(602);
	v->a[13326] = 1;
	v->a[13327] = sym_concatenation;
	v->a[13328] = state(1012);
	v->a[13329] = 1;
	v->a[13330] = sym_pipeline;
	v->a[13331] = state(1068);
	v->a[13332] = 1;
	v->a[13333] = aux_sym_redirected_statement_repeat2;
	v->a[13334] = state(1609);
	v->a[13335] = 1;
	v->a[13336] = sym__statement_not_pipeline;
	v->a[13337] = actions(11);
	v->a[13338] = 2;
	v->a[13339] = anon_sym_while;
	small_parse_table_667(v);
}

void	small_parse_table_667(t_small_parse_table_array *v)
{
	v->a[13340] = anon_sym_until;
	v->a[13341] = actions(59);
	v->a[13342] = 2;
	v->a[13343] = sym_raw_string;
	v->a[13344] = sym_number;
	v->a[13345] = state(425);
	v->a[13346] = 5;
	v->a[13347] = sym_arithmetic_expansion;
	v->a[13348] = sym_string;
	v->a[13349] = sym_simple_expansion;
	v->a[13350] = sym_expansion;
	v->a[13351] = sym_command_substitution;
	v->a[13352] = actions(51);
	v->a[13353] = 7;
	v->a[13354] = anon_sym_LT;
	v->a[13355] = anon_sym_GT;
	v->a[13356] = anon_sym_GT_GT;
	v->a[13357] = anon_sym_LT_AMP;
	v->a[13358] = anon_sym_GT_AMP;
	v->a[13359] = anon_sym_GT_PIPE;
	small_parse_table_668(v);
}

void	small_parse_table_668(t_small_parse_table_array *v)
{
	v->a[13360] = anon_sym_LT_GT;
	v->a[13361] = state(933);
	v->a[13362] = 12;
	v->a[13363] = sym_redirected_statement;
	v->a[13364] = sym_for_statement;
	v->a[13365] = sym_while_statement;
	v->a[13366] = sym_if_statement;
	v->a[13367] = sym_case_statement;
	v->a[13368] = sym_function_definition;
	v->a[13369] = sym_compound_statement;
	v->a[13370] = sym_subshell;
	v->a[13371] = sym_list;
	v->a[13372] = sym_negated_command;
	v->a[13373] = sym_command;
	v->a[13374] = sym__variable_assignments;
	v->a[13375] = 40;
	v->a[13376] = actions(3);
	v->a[13377] = 1;
	v->a[13378] = sym_comment;
	v->a[13379] = actions(9);
	small_parse_table_669(v);
}

void	small_parse_table_669(t_small_parse_table_array *v)
{
	v->a[13380] = 1;
	v->a[13381] = anon_sym_for;
	v->a[13382] = actions(13);
	v->a[13383] = 1;
	v->a[13384] = anon_sym_if;
	v->a[13385] = actions(15);
	v->a[13386] = 1;
	v->a[13387] = anon_sym_case;
	v->a[13388] = actions(17);
	v->a[13389] = 1;
	v->a[13390] = anon_sym_LPAREN;
	v->a[13391] = actions(19);
	v->a[13392] = 1;
	v->a[13393] = anon_sym_LBRACE;
	v->a[13394] = actions(41);
	v->a[13395] = 1;
	v->a[13396] = sym_word;
	v->a[13397] = actions(49);
	v->a[13398] = 1;
	v->a[13399] = anon_sym_BANG;
	small_parse_table_670(v);
}

/* EOF small_parse_table_133.c */
