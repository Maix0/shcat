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
	v->a[13300] = sym__statement_not_pipeline;
	v->a[13301] = state(2053);
	v->a[13302] = 1;
	v->a[13303] = sym__statements;
	v->a[13304] = actions(11);
	v->a[13305] = 2;
	v->a[13306] = anon_sym_while;
	v->a[13307] = anon_sym_until;
	v->a[13308] = actions(61);
	v->a[13309] = 2;
	v->a[13310] = sym_raw_string;
	v->a[13311] = sym_number;
	v->a[13312] = state(436);
	v->a[13313] = 5;
	v->a[13314] = sym_arithmetic_expansion;
	v->a[13315] = sym_string;
	v->a[13316] = sym_simple_expansion;
	v->a[13317] = sym_expansion;
	v->a[13318] = sym_command_substitution;
	v->a[13319] = actions(53);
	small_parse_table_666(v);
}

void	small_parse_table_666(t_small_parse_table_array *v)
{
	v->a[13320] = 7;
	v->a[13321] = anon_sym_LT;
	v->a[13322] = anon_sym_GT;
	v->a[13323] = anon_sym_GT_GT;
	v->a[13324] = anon_sym_LT_AMP;
	v->a[13325] = anon_sym_GT_AMP;
	v->a[13326] = anon_sym_GT_PIPE;
	v->a[13327] = anon_sym_LT_GT;
	v->a[13328] = state(967);
	v->a[13329] = 12;
	v->a[13330] = sym_redirected_statement;
	v->a[13331] = sym_for_statement;
	v->a[13332] = sym_while_statement;
	v->a[13333] = sym_if_statement;
	v->a[13334] = sym_case_statement;
	v->a[13335] = sym_function_definition;
	v->a[13336] = sym_compound_statement;
	v->a[13337] = sym_subshell;
	v->a[13338] = sym_list;
	v->a[13339] = sym_negated_command;
	small_parse_table_667(v);
}

void	small_parse_table_667(t_small_parse_table_array *v)
{
	v->a[13340] = sym_command;
	v->a[13341] = sym__variable_assignments;
	v->a[13342] = 31;
	v->a[13343] = actions(3);
	v->a[13344] = 1;
	v->a[13345] = sym_comment;
	v->a[13346] = actions(9);
	v->a[13347] = 1;
	v->a[13348] = anon_sym_for;
	v->a[13349] = actions(13);
	v->a[13350] = 1;
	v->a[13351] = anon_sym_if;
	v->a[13352] = actions(15);
	v->a[13353] = 1;
	v->a[13354] = anon_sym_case;
	v->a[13355] = actions(17);
	v->a[13356] = 1;
	v->a[13357] = anon_sym_LPAREN;
	v->a[13358] = actions(19);
	v->a[13359] = 1;
	small_parse_table_668(v);
}

void	small_parse_table_668(t_small_parse_table_array *v)
{
	v->a[13360] = anon_sym_LBRACE;
	v->a[13361] = actions(55);
	v->a[13362] = 1;
	v->a[13363] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13364] = actions(57);
	v->a[13365] = 1;
	v->a[13366] = anon_sym_DOLLAR;
	v->a[13367] = actions(59);
	v->a[13368] = 1;
	v->a[13369] = anon_sym_DQUOTE;
	v->a[13370] = actions(63);
	v->a[13371] = 1;
	v->a[13372] = anon_sym_DOLLAR_LBRACE;
	v->a[13373] = actions(65);
	v->a[13374] = 1;
	v->a[13375] = anon_sym_DOLLAR_LPAREN;
	v->a[13376] = actions(67);
	v->a[13377] = 1;
	v->a[13378] = anon_sym_BQUOTE;
	v->a[13379] = actions(211);
	small_parse_table_669(v);
}

void	small_parse_table_669(t_small_parse_table_array *v)
{
	v->a[13380] = 1;
	v->a[13381] = sym_word;
	v->a[13382] = actions(213);
	v->a[13383] = 1;
	v->a[13384] = anon_sym_BANG;
	v->a[13385] = actions(219);
	v->a[13386] = 1;
	v->a[13387] = sym_file_descriptor;
	v->a[13388] = actions(221);
	v->a[13389] = 1;
	v->a[13390] = sym_variable_name;
	v->a[13391] = state(125);
	v->a[13392] = 1;
	v->a[13393] = aux_sym__statements_repeat1;
	v->a[13394] = state(173);
	v->a[13395] = 1;
	v->a[13396] = sym_command_name;
	v->a[13397] = state(224);
	v->a[13398] = 1;
	v->a[13399] = sym_variable_assignment;
	small_parse_table_670(v);
}

/* EOF small_parse_table_133.c */
