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
	v->a[6301] = aux_sym_command_repeat1;
	v->a[6302] = state(795);
	v->a[6303] = 1;
	v->a[6304] = sym_file_redirect;
	v->a[6305] = state(1154);
	v->a[6306] = 1;
	v->a[6307] = sym_pipeline;
	v->a[6308] = state(1240);
	v->a[6309] = 1;
	v->a[6310] = aux_sym_redirected_statement_repeat2;
	v->a[6311] = state(2119);
	v->a[6312] = 1;
	v->a[6313] = sym__statement_not_pipeline;
	v->a[6314] = state(2188);
	v->a[6315] = 1;
	v->a[6316] = sym__statements;
	v->a[6317] = actions(11);
	v->a[6318] = 2;
	v->a[6319] = anon_sym_while;
	small_parse_table_316(v);
}

void	small_parse_table_316(t_small_parse_table_array *v)
{
	v->a[6320] = anon_sym_until;
	v->a[6321] = actions(57);
	v->a[6322] = 2;
	v->a[6323] = anon_sym_LT_AMP_DASH;
	v->a[6324] = anon_sym_GT_AMP_DASH;
	v->a[6325] = actions(65);
	v->a[6326] = 2;
	v->a[6327] = sym_raw_string;
	v->a[6328] = sym_number;
	v->a[6329] = state(443);
	v->a[6330] = 5;
	v->a[6331] = sym_arithmetic_expansion;
	v->a[6332] = sym_string;
	v->a[6333] = sym_simple_expansion;
	v->a[6334] = sym_expansion;
	v->a[6335] = sym_command_substitution;
	v->a[6336] = actions(55);
	v->a[6337] = 6;
	v->a[6338] = anon_sym_LT;
	v->a[6339] = anon_sym_GT;
	small_parse_table_317(v);
}

void	small_parse_table_317(t_small_parse_table_array *v)
{
	v->a[6340] = anon_sym_GT_GT;
	v->a[6341] = anon_sym_LT_AMP;
	v->a[6342] = anon_sym_GT_AMP;
	v->a[6343] = anon_sym_GT_PIPE;
	v->a[6344] = state(1030);
	v->a[6345] = 12;
	v->a[6346] = sym_redirected_statement;
	v->a[6347] = sym_for_statement;
	v->a[6348] = sym_while_statement;
	v->a[6349] = sym_if_statement;
	v->a[6350] = sym_case_statement;
	v->a[6351] = sym_function_definition;
	v->a[6352] = sym_compound_statement;
	v->a[6353] = sym_subshell;
	v->a[6354] = sym_list;
	v->a[6355] = sym_negated_command;
	v->a[6356] = sym_command;
	v->a[6357] = sym__variable_assignments;
	v->a[6358] = 32;
	v->a[6359] = actions(3);
	small_parse_table_318(v);
}

void	small_parse_table_318(t_small_parse_table_array *v)
{
	v->a[6360] = 1;
	v->a[6361] = sym_comment;
	v->a[6362] = actions(9);
	v->a[6363] = 1;
	v->a[6364] = anon_sym_for;
	v->a[6365] = actions(13);
	v->a[6366] = 1;
	v->a[6367] = anon_sym_if;
	v->a[6368] = actions(15);
	v->a[6369] = 1;
	v->a[6370] = anon_sym_case;
	v->a[6371] = actions(17);
	v->a[6372] = 1;
	v->a[6373] = anon_sym_LPAREN;
	v->a[6374] = actions(19);
	v->a[6375] = 1;
	v->a[6376] = anon_sym_LBRACE;
	v->a[6377] = actions(45);
	v->a[6378] = 1;
	v->a[6379] = sym_word;
	small_parse_table_319(v);
}

void	small_parse_table_319(t_small_parse_table_array *v)
{
	v->a[6380] = actions(53);
	v->a[6381] = 1;
	v->a[6382] = anon_sym_BANG;
	v->a[6383] = actions(59);
	v->a[6384] = 1;
	v->a[6385] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6386] = actions(61);
	v->a[6387] = 1;
	v->a[6388] = anon_sym_DOLLAR;
	v->a[6389] = actions(63);
	v->a[6390] = 1;
	v->a[6391] = anon_sym_DQUOTE;
	v->a[6392] = actions(67);
	v->a[6393] = 1;
	v->a[6394] = anon_sym_DOLLAR_LBRACE;
	v->a[6395] = actions(69);
	v->a[6396] = 1;
	v->a[6397] = anon_sym_DOLLAR_LPAREN;
	v->a[6398] = actions(71);
	v->a[6399] = 1;
	small_parse_table_320(v);
}

/* EOF small_parse_table_63.c */
