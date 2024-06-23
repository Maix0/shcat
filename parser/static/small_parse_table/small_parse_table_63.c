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
	v->a[6300] = 2;
	v->a[6301] = anon_sym_LT_AMP_DASH;
	v->a[6302] = anon_sym_GT_AMP_DASH;
	v->a[6303] = actions(184);
	v->a[6304] = 2;
	v->a[6305] = sym_raw_string;
	v->a[6306] = sym_number;
	v->a[6307] = state(394);
	v->a[6308] = 5;
	v->a[6309] = sym_arithmetic_expansion;
	v->a[6310] = sym_string;
	v->a[6311] = sym_simple_expansion;
	v->a[6312] = sym_expansion;
	v->a[6313] = sym_command_substitution;
	v->a[6314] = actions(169);
	v->a[6315] = 8;
	v->a[6316] = anon_sym_LT;
	v->a[6317] = anon_sym_GT;
	v->a[6318] = anon_sym_GT_GT;
	v->a[6319] = anon_sym_AMP_GT;
	small_parse_table_316(v);
}

void	small_parse_table_316(t_small_parse_table_array *v)
{
	v->a[6320] = anon_sym_AMP_GT_GT;
	v->a[6321] = anon_sym_LT_AMP;
	v->a[6322] = anon_sym_GT_AMP;
	v->a[6323] = anon_sym_GT_PIPE;
	v->a[6324] = state(1302);
	v->a[6325] = 12;
	v->a[6326] = sym_redirected_statement;
	v->a[6327] = sym_for_statement;
	v->a[6328] = sym_while_statement;
	v->a[6329] = sym_if_statement;
	v->a[6330] = sym_case_statement;
	v->a[6331] = sym_function_definition;
	v->a[6332] = sym_compound_statement;
	v->a[6333] = sym_subshell;
	v->a[6334] = sym_list;
	v->a[6335] = sym_negated_command;
	v->a[6336] = sym_command;
	v->a[6337] = sym__variable_assignments;
	v->a[6338] = 32;
	v->a[6339] = actions(3);
	small_parse_table_317(v);
}

void	small_parse_table_317(t_small_parse_table_array *v)
{
	v->a[6340] = 1;
	v->a[6341] = sym_comment;
	v->a[6342] = actions(9);
	v->a[6343] = 1;
	v->a[6344] = anon_sym_for;
	v->a[6345] = actions(13);
	v->a[6346] = 1;
	v->a[6347] = anon_sym_if;
	v->a[6348] = actions(15);
	v->a[6349] = 1;
	v->a[6350] = anon_sym_case;
	v->a[6351] = actions(17);
	v->a[6352] = 1;
	v->a[6353] = anon_sym_LPAREN;
	v->a[6354] = actions(19);
	v->a[6355] = 1;
	v->a[6356] = anon_sym_LBRACE;
	v->a[6357] = actions(59);
	v->a[6358] = 1;
	v->a[6359] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_318(v);
}

void	small_parse_table_318(t_small_parse_table_array *v)
{
	v->a[6360] = actions(61);
	v->a[6361] = 1;
	v->a[6362] = anon_sym_DOLLAR;
	v->a[6363] = actions(63);
	v->a[6364] = 1;
	v->a[6365] = anon_sym_DQUOTE;
	v->a[6366] = actions(67);
	v->a[6367] = 1;
	v->a[6368] = anon_sym_DOLLAR_LBRACE;
	v->a[6369] = actions(69);
	v->a[6370] = 1;
	v->a[6371] = anon_sym_DOLLAR_LPAREN;
	v->a[6372] = actions(71);
	v->a[6373] = 1;
	v->a[6374] = anon_sym_BQUOTE;
	v->a[6375] = actions(220);
	v->a[6376] = 1;
	v->a[6377] = sym_word;
	v->a[6378] = actions(222);
	v->a[6379] = 1;
	small_parse_table_319(v);
}

void	small_parse_table_319(t_small_parse_table_array *v)
{
	v->a[6380] = anon_sym_BANG;
	v->a[6381] = actions(230);
	v->a[6382] = 1;
	v->a[6383] = sym_file_descriptor;
	v->a[6384] = actions(232);
	v->a[6385] = 1;
	v->a[6386] = sym_variable_name;
	v->a[6387] = state(126);
	v->a[6388] = 1;
	v->a[6389] = aux_sym__statements_repeat1;
	v->a[6390] = state(184);
	v->a[6391] = 1;
	v->a[6392] = sym_command_name;
	v->a[6393] = state(268);
	v->a[6394] = 1;
	v->a[6395] = sym_variable_assignment;
	v->a[6396] = state(647);
	v->a[6397] = 1;
	v->a[6398] = sym_concatenation;
	v->a[6399] = state(756);
	small_parse_table_320(v);
}

/* EOF small_parse_table_63.c */
