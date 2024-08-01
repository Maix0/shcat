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
	v->a[13300] = 1;
	v->a[13301] = anon_sym_LBRACE;
	v->a[13302] = actions(21);
	v->a[13303] = 1;
	v->a[13304] = anon_sym_BANG;
	v->a[13305] = actions(25);
	v->a[13306] = 1;
	v->a[13307] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13308] = actions(27);
	v->a[13309] = 1;
	v->a[13310] = anon_sym_DOLLAR;
	v->a[13311] = actions(29);
	v->a[13312] = 1;
	v->a[13313] = anon_sym_DQUOTE;
	v->a[13314] = actions(33);
	v->a[13315] = 1;
	v->a[13316] = anon_sym_DOLLAR_LBRACE;
	v->a[13317] = actions(35);
	v->a[13318] = 1;
	v->a[13319] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_666(v);
}

void	small_parse_table_666(t_small_parse_table_array *v)
{
	v->a[13320] = actions(37);
	v->a[13321] = 1;
	v->a[13322] = anon_sym_BQUOTE;
	v->a[13323] = actions(39);
	v->a[13324] = 1;
	v->a[13325] = sym_variable_name;
	v->a[13326] = state(166);
	v->a[13327] = 1;
	v->a[13328] = sym_command_name;
	v->a[13329] = state(236);
	v->a[13330] = 1;
	v->a[13331] = sym_variable_assignment;
	v->a[13332] = state(398);
	v->a[13333] = 1;
	v->a[13334] = aux_sym_command_repeat1;
	v->a[13335] = state(549);
	v->a[13336] = 1;
	v->a[13337] = sym_concatenation;
	v->a[13338] = state(556);
	v->a[13339] = 1;
	small_parse_table_667(v);
}

void	small_parse_table_667(t_small_parse_table_array *v)
{
	v->a[13340] = sym_file_redirect;
	v->a[13341] = state(999);
	v->a[13342] = 1;
	v->a[13343] = aux_sym_redirected_statement_repeat2;
	v->a[13344] = state(1335);
	v->a[13345] = 1;
	v->a[13346] = sym_pipeline;
	v->a[13347] = actions(11);
	v->a[13348] = 2;
	v->a[13349] = anon_sym_while;
	v->a[13350] = anon_sym_until;
	v->a[13351] = actions(31);
	v->a[13352] = 2;
	v->a[13353] = sym_raw_string;
	v->a[13354] = sym_number;
	v->a[13355] = actions(23);
	v->a[13356] = 3;
	v->a[13357] = anon_sym_LT;
	v->a[13358] = anon_sym_GT;
	v->a[13359] = anon_sym_GT_GT;
	small_parse_table_668(v);
}

void	small_parse_table_668(t_small_parse_table_array *v)
{
	v->a[13360] = state(280);
	v->a[13361] = 5;
	v->a[13362] = sym_arithmetic_expansion;
	v->a[13363] = sym_string;
	v->a[13364] = sym_simple_expansion;
	v->a[13365] = sym_expansion;
	v->a[13366] = sym_command_substitution;
	v->a[13367] = state(953);
	v->a[13368] = 13;
	v->a[13369] = sym__statement_not_pipeline;
	v->a[13370] = sym_redirected_statement;
	v->a[13371] = sym_for_statement;
	v->a[13372] = sym_while_statement;
	v->a[13373] = sym_if_statement;
	v->a[13374] = sym_case_statement;
	v->a[13375] = sym_function_definition;
	v->a[13376] = sym_compound_statement;
	v->a[13377] = sym_subshell;
	v->a[13378] = sym_list;
	v->a[13379] = sym_negated_command;
	small_parse_table_669(v);
}

void	small_parse_table_669(t_small_parse_table_array *v)
{
	v->a[13380] = sym_command;
	v->a[13381] = sym__variable_assignments;
	v->a[13382] = 27;
	v->a[13383] = actions(3);
	v->a[13384] = 1;
	v->a[13385] = sym_comment;
	v->a[13386] = actions(9);
	v->a[13387] = 1;
	v->a[13388] = anon_sym_for;
	v->a[13389] = actions(13);
	v->a[13390] = 1;
	v->a[13391] = anon_sym_if;
	v->a[13392] = actions(15);
	v->a[13393] = 1;
	v->a[13394] = anon_sym_case;
	v->a[13395] = actions(17);
	v->a[13396] = 1;
	v->a[13397] = anon_sym_LPAREN;
	v->a[13398] = actions(19);
	v->a[13399] = 1;
	small_parse_table_670(v);
}

/* EOF small_parse_table_133.c */
