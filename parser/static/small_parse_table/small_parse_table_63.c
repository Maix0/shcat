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
	v->a[6300] = 1;
	v->a[6301] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6302] = actions(55);
	v->a[6303] = 1;
	v->a[6304] = anon_sym_DOLLAR;
	v->a[6305] = actions(57);
	v->a[6306] = 1;
	v->a[6307] = anon_sym_DQUOTE;
	v->a[6308] = actions(61);
	v->a[6309] = 1;
	v->a[6310] = anon_sym_DOLLAR_LBRACE;
	v->a[6311] = actions(63);
	v->a[6312] = 1;
	v->a[6313] = anon_sym_DOLLAR_LPAREN;
	v->a[6314] = actions(65);
	v->a[6315] = 1;
	v->a[6316] = anon_sym_BQUOTE;
	v->a[6317] = actions(67);
	v->a[6318] = 1;
	v->a[6319] = sym_variable_name;
	small_parse_table_316(v);
}

void	small_parse_table_316(t_small_parse_table_array *v)
{
	v->a[6320] = actions(202);
	v->a[6321] = 1;
	v->a[6322] = sym_word;
	v->a[6323] = actions(204);
	v->a[6324] = 1;
	v->a[6325] = anon_sym_BANG;
	v->a[6326] = state(119);
	v->a[6327] = 1;
	v->a[6328] = aux_sym__statements_repeat1;
	v->a[6329] = state(272);
	v->a[6330] = 1;
	v->a[6331] = sym_command_name;
	v->a[6332] = state(283);
	v->a[6333] = 1;
	v->a[6334] = sym_variable_assignment;
	v->a[6335] = state(486);
	v->a[6336] = 1;
	v->a[6337] = aux_sym_command_repeat1;
	v->a[6338] = state(602);
	v->a[6339] = 1;
	small_parse_table_317(v);
}

void	small_parse_table_317(t_small_parse_table_array *v)
{
	v->a[6340] = sym_concatenation;
	v->a[6341] = state(636);
	v->a[6342] = 1;
	v->a[6343] = sym_file_redirect;
	v->a[6344] = state(951);
	v->a[6345] = 1;
	v->a[6346] = sym_pipeline;
	v->a[6347] = state(1006);
	v->a[6348] = 1;
	v->a[6349] = aux_sym_redirected_statement_repeat2;
	v->a[6350] = state(1605);
	v->a[6351] = 1;
	v->a[6352] = sym__statement_not_pipeline;
	v->a[6353] = state(1661);
	v->a[6354] = 1;
	v->a[6355] = sym__statements;
	v->a[6356] = actions(11);
	v->a[6357] = 2;
	v->a[6358] = anon_sym_while;
	v->a[6359] = anon_sym_until;
	small_parse_table_318(v);
}

void	small_parse_table_318(t_small_parse_table_array *v)
{
	v->a[6360] = actions(59);
	v->a[6361] = 2;
	v->a[6362] = sym_raw_string;
	v->a[6363] = sym_number;
	v->a[6364] = state(425);
	v->a[6365] = 5;
	v->a[6366] = sym_arithmetic_expansion;
	v->a[6367] = sym_string;
	v->a[6368] = sym_simple_expansion;
	v->a[6369] = sym_expansion;
	v->a[6370] = sym_command_substitution;
	v->a[6371] = actions(51);
	v->a[6372] = 7;
	v->a[6373] = anon_sym_LT;
	v->a[6374] = anon_sym_GT;
	v->a[6375] = anon_sym_GT_GT;
	v->a[6376] = anon_sym_LT_AMP;
	v->a[6377] = anon_sym_GT_AMP;
	v->a[6378] = anon_sym_GT_PIPE;
	v->a[6379] = anon_sym_LT_GT;
	small_parse_table_319(v);
}

void	small_parse_table_319(t_small_parse_table_array *v)
{
	v->a[6380] = state(849);
	v->a[6381] = 12;
	v->a[6382] = sym_redirected_statement;
	v->a[6383] = sym_for_statement;
	v->a[6384] = sym_while_statement;
	v->a[6385] = sym_if_statement;
	v->a[6386] = sym_case_statement;
	v->a[6387] = sym_function_definition;
	v->a[6388] = sym_compound_statement;
	v->a[6389] = sym_subshell;
	v->a[6390] = sym_list;
	v->a[6391] = sym_negated_command;
	v->a[6392] = sym_command;
	v->a[6393] = sym__variable_assignments;
	v->a[6394] = 30;
	v->a[6395] = actions(3);
	v->a[6396] = 1;
	v->a[6397] = sym_comment;
	v->a[6398] = actions(9);
	v->a[6399] = 1;
	small_parse_table_320(v);
}

/* EOF small_parse_table_63.c */
