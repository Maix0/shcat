/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_52.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_260(t_small_parse_table_array *v)
{
	v->a[5200] = anon_sym_case;
	v->a[5201] = actions(17);
	v->a[5202] = 1;
	v->a[5203] = anon_sym_LPAREN;
	v->a[5204] = actions(19);
	v->a[5205] = 1;
	v->a[5206] = anon_sym_LBRACE;
	v->a[5207] = actions(53);
	v->a[5208] = 1;
	v->a[5209] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5210] = actions(55);
	v->a[5211] = 1;
	v->a[5212] = anon_sym_DOLLAR;
	v->a[5213] = actions(57);
	v->a[5214] = 1;
	v->a[5215] = anon_sym_DQUOTE;
	v->a[5216] = actions(61);
	v->a[5217] = 1;
	v->a[5218] = anon_sym_DOLLAR_LBRACE;
	v->a[5219] = actions(63);
	small_parse_table_261(v);
}

void	small_parse_table_261(t_small_parse_table_array *v)
{
	v->a[5220] = 1;
	v->a[5221] = anon_sym_DOLLAR_LPAREN;
	v->a[5222] = actions(65);
	v->a[5223] = 1;
	v->a[5224] = anon_sym_BQUOTE;
	v->a[5225] = actions(67);
	v->a[5226] = 1;
	v->a[5227] = sym_variable_name;
	v->a[5228] = actions(204);
	v->a[5229] = 1;
	v->a[5230] = sym_word;
	v->a[5231] = actions(206);
	v->a[5232] = 1;
	v->a[5233] = anon_sym_BANG;
	v->a[5234] = state(116);
	v->a[5235] = 1;
	v->a[5236] = aux_sym__statements_repeat1;
	v->a[5237] = state(179);
	v->a[5238] = 1;
	v->a[5239] = sym_command_name;
	small_parse_table_262(v);
}

void	small_parse_table_262(t_small_parse_table_array *v)
{
	v->a[5240] = state(208);
	v->a[5241] = 1;
	v->a[5242] = sym_variable_assignment;
	v->a[5243] = state(385);
	v->a[5244] = 1;
	v->a[5245] = aux_sym_command_repeat1;
	v->a[5246] = state(555);
	v->a[5247] = 1;
	v->a[5248] = sym_concatenation;
	v->a[5249] = state(599);
	v->a[5250] = 1;
	v->a[5251] = sym_file_redirect;
	v->a[5252] = state(969);
	v->a[5253] = 1;
	v->a[5254] = sym_pipeline;
	v->a[5255] = state(1006);
	v->a[5256] = 1;
	v->a[5257] = aux_sym_redirected_statement_repeat2;
	v->a[5258] = state(1560);
	v->a[5259] = 1;
	small_parse_table_263(v);
}

void	small_parse_table_263(t_small_parse_table_array *v)
{
	v->a[5260] = sym__statement_not_pipeline;
	v->a[5261] = state(1613);
	v->a[5262] = 1;
	v->a[5263] = sym__statements;
	v->a[5264] = actions(11);
	v->a[5265] = 2;
	v->a[5266] = anon_sym_while;
	v->a[5267] = anon_sym_until;
	v->a[5268] = actions(59);
	v->a[5269] = 2;
	v->a[5270] = sym_raw_string;
	v->a[5271] = sym_number;
	v->a[5272] = actions(51);
	v->a[5273] = 3;
	v->a[5274] = anon_sym_LT;
	v->a[5275] = anon_sym_GT;
	v->a[5276] = anon_sym_GT_GT;
	v->a[5277] = state(401);
	v->a[5278] = 5;
	v->a[5279] = sym_arithmetic_expansion;
	small_parse_table_264(v);
}

void	small_parse_table_264(t_small_parse_table_array *v)
{
	v->a[5280] = sym_string;
	v->a[5281] = sym_simple_expansion;
	v->a[5282] = sym_expansion;
	v->a[5283] = sym_command_substitution;
	v->a[5284] = state(820);
	v->a[5285] = 12;
	v->a[5286] = sym_redirected_statement;
	v->a[5287] = sym_for_statement;
	v->a[5288] = sym_while_statement;
	v->a[5289] = sym_if_statement;
	v->a[5290] = sym_case_statement;
	v->a[5291] = sym_function_definition;
	v->a[5292] = sym_compound_statement;
	v->a[5293] = sym_subshell;
	v->a[5294] = sym_list;
	v->a[5295] = sym_negated_command;
	v->a[5296] = sym_command;
	v->a[5297] = sym__variable_assignments;
	v->a[5298] = 30;
	v->a[5299] = actions(3);
	small_parse_table_265(v);
}

/* EOF small_parse_table_52.c */
