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
	v->a[6300] = actions(77);
	v->a[6301] = 1;
	v->a[6302] = anon_sym_DOLLAR_LPAREN;
	v->a[6303] = actions(79);
	v->a[6304] = 1;
	v->a[6305] = anon_sym_BQUOTE;
	v->a[6306] = actions(81);
	v->a[6307] = 1;
	v->a[6308] = sym_file_descriptor;
	v->a[6309] = actions(83);
	v->a[6310] = 1;
	v->a[6311] = sym_variable_name;
	v->a[6312] = actions(262);
	v->a[6313] = 1;
	v->a[6314] = anon_sym_then;
	v->a[6315] = state(37);
	v->a[6316] = 1;
	v->a[6317] = aux_sym__terminated_statement;
	v->a[6318] = state(190);
	v->a[6319] = 1;
	small_parse_table_316(v);
}

void	small_parse_table_316(t_small_parse_table_array *v)
{
	v->a[6320] = sym_command_name;
	v->a[6321] = state(303);
	v->a[6322] = 1;
	v->a[6323] = sym_variable_assignment;
	v->a[6324] = state(582);
	v->a[6325] = 1;
	v->a[6326] = sym_concatenation;
	v->a[6327] = state(587);
	v->a[6328] = 1;
	v->a[6329] = aux_sym_command_repeat1;
	v->a[6330] = state(718);
	v->a[6331] = 1;
	v->a[6332] = sym_file_redirect;
	v->a[6333] = state(1213);
	v->a[6334] = 1;
	v->a[6335] = aux_sym_redirected_statement_repeat2;
	v->a[6336] = state(1225);
	v->a[6337] = 1;
	v->a[6338] = sym_pipeline;
	v->a[6339] = state(2035);
	small_parse_table_317(v);
}

void	small_parse_table_317(t_small_parse_table_array *v)
{
	v->a[6340] = 1;
	v->a[6341] = sym__statement_not_pipeline;
	v->a[6342] = actions(11);
	v->a[6343] = 2;
	v->a[6344] = anon_sym_while;
	v->a[6345] = anon_sym_until;
	v->a[6346] = actions(61);
	v->a[6347] = 2;
	v->a[6348] = anon_sym_LT_AMP_DASH;
	v->a[6349] = anon_sym_GT_AMP_DASH;
	v->a[6350] = state(397);
	v->a[6351] = 6;
	v->a[6352] = sym_arithmetic_expansion;
	v->a[6353] = sym_string;
	v->a[6354] = sym_number;
	v->a[6355] = sym_simple_expansion;
	v->a[6356] = sym_expansion;
	v->a[6357] = sym_command_substitution;
	v->a[6358] = actions(59);
	v->a[6359] = 8;
	small_parse_table_318(v);
}

void	small_parse_table_318(t_small_parse_table_array *v)
{
	v->a[6360] = anon_sym_LT;
	v->a[6361] = anon_sym_GT;
	v->a[6362] = anon_sym_GT_GT;
	v->a[6363] = anon_sym_AMP_GT;
	v->a[6364] = anon_sym_AMP_GT_GT;
	v->a[6365] = anon_sym_LT_AMP;
	v->a[6366] = anon_sym_GT_AMP;
	v->a[6367] = anon_sym_GT_PIPE;
	v->a[6368] = state(1137);
	v->a[6369] = 12;
	v->a[6370] = sym_redirected_statement;
	v->a[6371] = sym_for_statement;
	v->a[6372] = sym_while_statement;
	v->a[6373] = sym_if_statement;
	v->a[6374] = sym_case_statement;
	v->a[6375] = sym_function_definition;
	v->a[6376] = sym_compound_statement;
	v->a[6377] = sym_subshell;
	v->a[6378] = sym_list;
	v->a[6379] = sym_negated_command;
	small_parse_table_319(v);
}

void	small_parse_table_319(t_small_parse_table_array *v)
{
	v->a[6380] = sym_command;
	v->a[6381] = sym_variable_assignments;
	v->a[6382] = 34;
	v->a[6383] = actions(3);
	v->a[6384] = 1;
	v->a[6385] = sym_comment;
	v->a[6386] = actions(9);
	v->a[6387] = 1;
	v->a[6388] = anon_sym_for;
	v->a[6389] = actions(13);
	v->a[6390] = 1;
	v->a[6391] = anon_sym_if;
	v->a[6392] = actions(15);
	v->a[6393] = 1;
	v->a[6394] = anon_sym_case;
	v->a[6395] = actions(17);
	v->a[6396] = 1;
	v->a[6397] = anon_sym_LPAREN;
	v->a[6398] = actions(19);
	v->a[6399] = 1;
	small_parse_table_320(v);
}

/* EOF small_parse_table_63.c */
