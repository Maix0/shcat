/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_63.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_315(t_small_parse_table_array *v)
{
	v->a[6300] = anon_sym_case;
	v->a[6301] = actions(17);
	v->a[6302] = 1;
	v->a[6303] = anon_sym_LPAREN;
	v->a[6304] = actions(19);
	v->a[6305] = 1;
	v->a[6306] = anon_sym_LBRACE;
	v->a[6307] = actions(53);
	v->a[6308] = 1;
	v->a[6309] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6310] = actions(55);
	v->a[6311] = 1;
	v->a[6312] = anon_sym_DOLLAR;
	v->a[6313] = actions(57);
	v->a[6314] = 1;
	v->a[6315] = anon_sym_DQUOTE;
	v->a[6316] = actions(61);
	v->a[6317] = 1;
	v->a[6318] = anon_sym_DOLLAR_LBRACE;
	v->a[6319] = actions(63);
	small_parse_table_316(v);
}

void	small_parse_table_316(t_small_parse_table_array *v)
{
	v->a[6320] = 1;
	v->a[6321] = anon_sym_DOLLAR_LPAREN;
	v->a[6322] = actions(65);
	v->a[6323] = 1;
	v->a[6324] = anon_sym_BQUOTE;
	v->a[6325] = actions(67);
	v->a[6326] = 1;
	v->a[6327] = sym_variable_name;
	v->a[6328] = actions(204);
	v->a[6329] = 1;
	v->a[6330] = sym_word;
	v->a[6331] = actions(206);
	v->a[6332] = 1;
	v->a[6333] = anon_sym_BANG;
	v->a[6334] = state(116);
	v->a[6335] = 1;
	v->a[6336] = aux_sym__statements_repeat1;
	v->a[6337] = state(179);
	v->a[6338] = 1;
	v->a[6339] = sym_command_name;
	small_parse_table_317(v);
}

void	small_parse_table_317(t_small_parse_table_array *v)
{
	v->a[6340] = state(208);
	v->a[6341] = 1;
	v->a[6342] = sym_variable_assignment;
	v->a[6343] = state(385);
	v->a[6344] = 1;
	v->a[6345] = aux_sym_command_repeat1;
	v->a[6346] = state(555);
	v->a[6347] = 1;
	v->a[6348] = sym_concatenation;
	v->a[6349] = state(599);
	v->a[6350] = 1;
	v->a[6351] = sym_file_redirect;
	v->a[6352] = state(969);
	v->a[6353] = 1;
	v->a[6354] = sym_pipeline;
	v->a[6355] = state(1006);
	v->a[6356] = 1;
	v->a[6357] = aux_sym_redirected_statement_repeat2;
	v->a[6358] = state(1560);
	v->a[6359] = 1;
	small_parse_table_318(v);
}

void	small_parse_table_318(t_small_parse_table_array *v)
{
	v->a[6360] = sym__statement_not_pipeline;
	v->a[6361] = state(1671);
	v->a[6362] = 1;
	v->a[6363] = sym__statements;
	v->a[6364] = actions(11);
	v->a[6365] = 2;
	v->a[6366] = anon_sym_while;
	v->a[6367] = anon_sym_until;
	v->a[6368] = actions(59);
	v->a[6369] = 2;
	v->a[6370] = sym_raw_string;
	v->a[6371] = sym_number;
	v->a[6372] = actions(51);
	v->a[6373] = 3;
	v->a[6374] = anon_sym_LT;
	v->a[6375] = anon_sym_GT;
	v->a[6376] = anon_sym_GT_GT;
	v->a[6377] = state(401);
	v->a[6378] = 5;
	v->a[6379] = sym_arithmetic_expansion;
	small_parse_table_319(v);
}

void	small_parse_table_319(t_small_parse_table_array *v)
{
	v->a[6380] = sym_string;
	v->a[6381] = sym_simple_expansion;
	v->a[6382] = sym_expansion;
	v->a[6383] = sym_command_substitution;
	v->a[6384] = state(820);
	v->a[6385] = 12;
	v->a[6386] = sym_redirected_statement;
	v->a[6387] = sym_for_statement;
	v->a[6388] = sym_while_statement;
	v->a[6389] = sym_if_statement;
	v->a[6390] = sym_case_statement;
	v->a[6391] = sym_function_definition;
	v->a[6392] = sym_compound_statement;
	v->a[6393] = sym_subshell;
	v->a[6394] = sym_list;
	v->a[6395] = sym_negated_command;
	v->a[6396] = sym_command;
	v->a[6397] = sym__variable_assignments;
	v->a[6398] = 30;
	v->a[6399] = actions(3);
	small_parse_table_320(v);
}

/* EOF small_parse_table_63.c */
