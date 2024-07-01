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
	v->a[5200] = anon_sym_BQUOTE;
	v->a[5201] = actions(73);
	v->a[5202] = 1;
	v->a[5203] = sym_file_descriptor;
	v->a[5204] = actions(75);
	v->a[5205] = 1;
	v->a[5206] = sym_variable_name;
	v->a[5207] = actions(238);
	v->a[5208] = 1;
	v->a[5209] = anon_sym_then;
	v->a[5210] = state(35);
	v->a[5211] = 1;
	v->a[5212] = aux_sym__terminated_statement;
	v->a[5213] = state(189);
	v->a[5214] = 1;
	v->a[5215] = sym_command_name;
	v->a[5216] = state(291);
	v->a[5217] = 1;
	v->a[5218] = sym_variable_assignment;
	v->a[5219] = state(650);
	small_parse_table_261(v);
}

void	small_parse_table_261(t_small_parse_table_array *v)
{
	v->a[5220] = 1;
	v->a[5221] = sym_concatenation;
	v->a[5222] = state(712);
	v->a[5223] = 1;
	v->a[5224] = sym_file_redirect;
	v->a[5225] = state(713);
	v->a[5226] = 1;
	v->a[5227] = aux_sym_command_repeat1;
	v->a[5228] = state(1251);
	v->a[5229] = 1;
	v->a[5230] = sym_pipeline;
	v->a[5231] = state(1333);
	v->a[5232] = 1;
	v->a[5233] = aux_sym_redirected_statement_repeat2;
	v->a[5234] = state(2103);
	v->a[5235] = 1;
	v->a[5236] = sym__statement_not_pipeline;
	v->a[5237] = actions(11);
	v->a[5238] = 2;
	v->a[5239] = anon_sym_while;
	small_parse_table_262(v);
}

void	small_parse_table_262(t_small_parse_table_array *v)
{
	v->a[5240] = anon_sym_until;
	v->a[5241] = actions(57);
	v->a[5242] = 2;
	v->a[5243] = anon_sym_LT_AMP_DASH;
	v->a[5244] = anon_sym_GT_AMP_DASH;
	v->a[5245] = actions(65);
	v->a[5246] = 2;
	v->a[5247] = sym_raw_string;
	v->a[5248] = sym_number;
	v->a[5249] = state(443);
	v->a[5250] = 5;
	v->a[5251] = sym_arithmetic_expansion;
	v->a[5252] = sym_string;
	v->a[5253] = sym_simple_expansion;
	v->a[5254] = sym_expansion;
	v->a[5255] = sym_command_substitution;
	v->a[5256] = actions(55);
	v->a[5257] = 6;
	v->a[5258] = anon_sym_LT;
	v->a[5259] = anon_sym_GT;
	small_parse_table_263(v);
}

void	small_parse_table_263(t_small_parse_table_array *v)
{
	v->a[5260] = anon_sym_GT_GT;
	v->a[5261] = anon_sym_LT_AMP;
	v->a[5262] = anon_sym_GT_AMP;
	v->a[5263] = anon_sym_GT_PIPE;
	v->a[5264] = state(1094);
	v->a[5265] = 12;
	v->a[5266] = sym_redirected_statement;
	v->a[5267] = sym_for_statement;
	v->a[5268] = sym_while_statement;
	v->a[5269] = sym_if_statement;
	v->a[5270] = sym_case_statement;
	v->a[5271] = sym_function_definition;
	v->a[5272] = sym_compound_statement;
	v->a[5273] = sym_subshell;
	v->a[5274] = sym_list;
	v->a[5275] = sym_negated_command;
	v->a[5276] = sym_command;
	v->a[5277] = sym__variable_assignments;
	v->a[5278] = 32;
	v->a[5279] = actions(3);
	small_parse_table_264(v);
}

void	small_parse_table_264(t_small_parse_table_array *v)
{
	v->a[5280] = 1;
	v->a[5281] = sym_comment;
	v->a[5282] = actions(9);
	v->a[5283] = 1;
	v->a[5284] = anon_sym_for;
	v->a[5285] = actions(13);
	v->a[5286] = 1;
	v->a[5287] = anon_sym_if;
	v->a[5288] = actions(15);
	v->a[5289] = 1;
	v->a[5290] = anon_sym_case;
	v->a[5291] = actions(17);
	v->a[5292] = 1;
	v->a[5293] = anon_sym_LPAREN;
	v->a[5294] = actions(19);
	v->a[5295] = 1;
	v->a[5296] = anon_sym_LBRACE;
	v->a[5297] = actions(59);
	v->a[5298] = 1;
	v->a[5299] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_265(v);
}

/* EOF small_parse_table_52.c */
