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
	v->a[5200] = anon_sym_BANG;
	v->a[5201] = state(129);
	v->a[5202] = 1;
	v->a[5203] = aux_sym__statements_repeat1;
	v->a[5204] = state(178);
	v->a[5205] = 1;
	v->a[5206] = sym_command_name;
	v->a[5207] = state(339);
	v->a[5208] = 1;
	v->a[5209] = sym_variable_assignment;
	v->a[5210] = state(585);
	v->a[5211] = 1;
	v->a[5212] = aux_sym_command_repeat1;
	v->a[5213] = state(661);
	v->a[5214] = 1;
	v->a[5215] = sym_concatenation;
	v->a[5216] = state(774);
	v->a[5217] = 1;
	v->a[5218] = sym_file_redirect;
	v->a[5219] = state(1089);
	small_parse_table_261(v);
}

void	small_parse_table_261(t_small_parse_table_array *v)
{
	v->a[5220] = 1;
	v->a[5221] = sym_pipeline;
	v->a[5222] = state(1149);
	v->a[5223] = 1;
	v->a[5224] = aux_sym_redirected_statement_repeat2;
	v->a[5225] = state(1922);
	v->a[5226] = 1;
	v->a[5227] = sym__statement_not_pipeline;
	v->a[5228] = state(1993);
	v->a[5229] = 1;
	v->a[5230] = sym__statements;
	v->a[5231] = actions(11);
	v->a[5232] = 2;
	v->a[5233] = anon_sym_while;
	v->a[5234] = anon_sym_until;
	v->a[5235] = actions(61);
	v->a[5236] = 2;
	v->a[5237] = sym_raw_string;
	v->a[5238] = sym_number;
	v->a[5239] = state(455);
	small_parse_table_262(v);
}

void	small_parse_table_262(t_small_parse_table_array *v)
{
	v->a[5240] = 5;
	v->a[5241] = sym_arithmetic_expansion;
	v->a[5242] = sym_string;
	v->a[5243] = sym_simple_expansion;
	v->a[5244] = sym_expansion;
	v->a[5245] = sym_command_substitution;
	v->a[5246] = actions(53);
	v->a[5247] = 7;
	v->a[5248] = anon_sym_LT;
	v->a[5249] = anon_sym_GT;
	v->a[5250] = anon_sym_GT_GT;
	v->a[5251] = anon_sym_LT_AMP;
	v->a[5252] = anon_sym_GT_AMP;
	v->a[5253] = anon_sym_GT_PIPE;
	v->a[5254] = anon_sym_LT_GT;
	v->a[5255] = state(965);
	v->a[5256] = 12;
	v->a[5257] = sym_redirected_statement;
	v->a[5258] = sym_for_statement;
	v->a[5259] = sym_while_statement;
	small_parse_table_263(v);
}

void	small_parse_table_263(t_small_parse_table_array *v)
{
	v->a[5260] = sym_if_statement;
	v->a[5261] = sym_case_statement;
	v->a[5262] = sym_function_definition;
	v->a[5263] = sym_compound_statement;
	v->a[5264] = sym_subshell;
	v->a[5265] = sym_list;
	v->a[5266] = sym_negated_command;
	v->a[5267] = sym_command;
	v->a[5268] = sym__variable_assignments;
	v->a[5269] = 31;
	v->a[5270] = actions(3);
	v->a[5271] = 1;
	v->a[5272] = sym_comment;
	v->a[5273] = actions(9);
	v->a[5274] = 1;
	v->a[5275] = anon_sym_for;
	v->a[5276] = actions(13);
	v->a[5277] = 1;
	v->a[5278] = anon_sym_if;
	v->a[5279] = actions(15);
	small_parse_table_264(v);
}

void	small_parse_table_264(t_small_parse_table_array *v)
{
	v->a[5280] = 1;
	v->a[5281] = anon_sym_case;
	v->a[5282] = actions(17);
	v->a[5283] = 1;
	v->a[5284] = anon_sym_LPAREN;
	v->a[5285] = actions(19);
	v->a[5286] = 1;
	v->a[5287] = anon_sym_LBRACE;
	v->a[5288] = actions(55);
	v->a[5289] = 1;
	v->a[5290] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5291] = actions(57);
	v->a[5292] = 1;
	v->a[5293] = anon_sym_DOLLAR;
	v->a[5294] = actions(59);
	v->a[5295] = 1;
	v->a[5296] = anon_sym_DQUOTE;
	v->a[5297] = actions(63);
	v->a[5298] = 1;
	v->a[5299] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_265(v);
}

/* EOF small_parse_table_52.c */
