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
	v->a[6300] = 7;
	v->a[6301] = anon_sym_LT;
	v->a[6302] = anon_sym_GT;
	v->a[6303] = anon_sym_GT_GT;
	v->a[6304] = anon_sym_LT_AMP;
	v->a[6305] = anon_sym_GT_AMP;
	v->a[6306] = anon_sym_GT_PIPE;
	v->a[6307] = anon_sym_LT_GT;
	v->a[6308] = state(965);
	v->a[6309] = 12;
	v->a[6310] = sym_redirected_statement;
	v->a[6311] = sym_for_statement;
	v->a[6312] = sym_while_statement;
	v->a[6313] = sym_if_statement;
	v->a[6314] = sym_case_statement;
	v->a[6315] = sym_function_definition;
	v->a[6316] = sym_compound_statement;
	v->a[6317] = sym_subshell;
	v->a[6318] = sym_list;
	v->a[6319] = sym_negated_command;
	small_parse_table_316(v);
}

void	small_parse_table_316(t_small_parse_table_array *v)
{
	v->a[6320] = sym_command;
	v->a[6321] = sym__variable_assignments;
	v->a[6322] = 31;
	v->a[6323] = actions(3);
	v->a[6324] = 1;
	v->a[6325] = sym_comment;
	v->a[6326] = actions(9);
	v->a[6327] = 1;
	v->a[6328] = anon_sym_for;
	v->a[6329] = actions(13);
	v->a[6330] = 1;
	v->a[6331] = anon_sym_if;
	v->a[6332] = actions(15);
	v->a[6333] = 1;
	v->a[6334] = anon_sym_case;
	v->a[6335] = actions(17);
	v->a[6336] = 1;
	v->a[6337] = anon_sym_LPAREN;
	v->a[6338] = actions(19);
	v->a[6339] = 1;
	small_parse_table_317(v);
}

void	small_parse_table_317(t_small_parse_table_array *v)
{
	v->a[6340] = anon_sym_LBRACE;
	v->a[6341] = actions(43);
	v->a[6342] = 1;
	v->a[6343] = sym_word;
	v->a[6344] = actions(51);
	v->a[6345] = 1;
	v->a[6346] = anon_sym_BANG;
	v->a[6347] = actions(55);
	v->a[6348] = 1;
	v->a[6349] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6350] = actions(57);
	v->a[6351] = 1;
	v->a[6352] = anon_sym_DOLLAR;
	v->a[6353] = actions(59);
	v->a[6354] = 1;
	v->a[6355] = anon_sym_DQUOTE;
	v->a[6356] = actions(63);
	v->a[6357] = 1;
	v->a[6358] = anon_sym_DOLLAR_LBRACE;
	v->a[6359] = actions(65);
	small_parse_table_318(v);
}

void	small_parse_table_318(t_small_parse_table_array *v)
{
	v->a[6360] = 1;
	v->a[6361] = anon_sym_DOLLAR_LPAREN;
	v->a[6362] = actions(67);
	v->a[6363] = 1;
	v->a[6364] = anon_sym_BQUOTE;
	v->a[6365] = actions(69);
	v->a[6366] = 1;
	v->a[6367] = sym_file_descriptor;
	v->a[6368] = actions(71);
	v->a[6369] = 1;
	v->a[6370] = sym_variable_name;
	v->a[6371] = actions(231);
	v->a[6372] = 1;
	v->a[6373] = anon_sym_RBRACE;
	v->a[6374] = state(90);
	v->a[6375] = 1;
	v->a[6376] = aux_sym__terminated_statement;
	v->a[6377] = state(183);
	v->a[6378] = 1;
	v->a[6379] = sym_command_name;
	small_parse_table_319(v);
}

void	small_parse_table_319(t_small_parse_table_array *v)
{
	v->a[6380] = state(345);
	v->a[6381] = 1;
	v->a[6382] = sym_variable_assignment;
	v->a[6383] = state(655);
	v->a[6384] = 1;
	v->a[6385] = aux_sym_command_repeat1;
	v->a[6386] = state(661);
	v->a[6387] = 1;
	v->a[6388] = sym_concatenation;
	v->a[6389] = state(665);
	v->a[6390] = 1;
	v->a[6391] = sym_file_redirect;
	v->a[6392] = state(1170);
	v->a[6393] = 1;
	v->a[6394] = sym_pipeline;
	v->a[6395] = state(1198);
	v->a[6396] = 1;
	v->a[6397] = aux_sym_redirected_statement_repeat2;
	v->a[6398] = state(1901);
	v->a[6399] = 1;
	small_parse_table_320(v);
}

/* EOF small_parse_table_63.c */
