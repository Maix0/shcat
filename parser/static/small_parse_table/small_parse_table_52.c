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
	v->a[5200] = sym_file_redirect;
	v->a[5201] = state(602);
	v->a[5202] = 1;
	v->a[5203] = sym_concatenation;
	v->a[5204] = state(911);
	v->a[5205] = 1;
	v->a[5206] = sym_pipeline;
	v->a[5207] = state(1001);
	v->a[5208] = 1;
	v->a[5209] = aux_sym_redirected_statement_repeat2;
	v->a[5210] = state(1606);
	v->a[5211] = 1;
	v->a[5212] = sym__statement_not_pipeline;
	v->a[5213] = state(1673);
	v->a[5214] = 1;
	v->a[5215] = sym__statements;
	v->a[5216] = actions(11);
	v->a[5217] = 2;
	v->a[5218] = anon_sym_while;
	v->a[5219] = anon_sym_until;
	small_parse_table_261(v);
}

void	small_parse_table_261(t_small_parse_table_array *v)
{
	v->a[5220] = actions(212);
	v->a[5221] = 2;
	v->a[5222] = sym_raw_string;
	v->a[5223] = sym_number;
	v->a[5224] = state(327);
	v->a[5225] = 5;
	v->a[5226] = sym_arithmetic_expansion;
	v->a[5227] = sym_string;
	v->a[5228] = sym_simple_expansion;
	v->a[5229] = sym_expansion;
	v->a[5230] = sym_command_substitution;
	v->a[5231] = actions(210);
	v->a[5232] = 7;
	v->a[5233] = anon_sym_LT;
	v->a[5234] = anon_sym_GT;
	v->a[5235] = anon_sym_GT_GT;
	v->a[5236] = anon_sym_LT_AMP;
	v->a[5237] = anon_sym_GT_AMP;
	v->a[5238] = anon_sym_GT_PIPE;
	v->a[5239] = anon_sym_LT_GT;
	small_parse_table_262(v);
}

void	small_parse_table_262(t_small_parse_table_array *v)
{
	v->a[5240] = state(884);
	v->a[5241] = 12;
	v->a[5242] = sym_redirected_statement;
	v->a[5243] = sym_for_statement;
	v->a[5244] = sym_while_statement;
	v->a[5245] = sym_if_statement;
	v->a[5246] = sym_case_statement;
	v->a[5247] = sym_function_definition;
	v->a[5248] = sym_compound_statement;
	v->a[5249] = sym_subshell;
	v->a[5250] = sym_list;
	v->a[5251] = sym_negated_command;
	v->a[5252] = sym_command;
	v->a[5253] = sym__variable_assignments;
	v->a[5254] = 30;
	v->a[5255] = actions(3);
	v->a[5256] = 1;
	v->a[5257] = sym_comment;
	v->a[5258] = actions(9);
	v->a[5259] = 1;
	small_parse_table_263(v);
}

void	small_parse_table_263(t_small_parse_table_array *v)
{
	v->a[5260] = anon_sym_for;
	v->a[5261] = actions(13);
	v->a[5262] = 1;
	v->a[5263] = anon_sym_if;
	v->a[5264] = actions(15);
	v->a[5265] = 1;
	v->a[5266] = anon_sym_case;
	v->a[5267] = actions(17);
	v->a[5268] = 1;
	v->a[5269] = anon_sym_LPAREN;
	v->a[5270] = actions(19);
	v->a[5271] = 1;
	v->a[5272] = anon_sym_LBRACE;
	v->a[5273] = actions(53);
	v->a[5274] = 1;
	v->a[5275] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5276] = actions(55);
	v->a[5277] = 1;
	v->a[5278] = anon_sym_DOLLAR;
	v->a[5279] = actions(57);
	small_parse_table_264(v);
}

void	small_parse_table_264(t_small_parse_table_array *v)
{
	v->a[5280] = 1;
	v->a[5281] = anon_sym_DQUOTE;
	v->a[5282] = actions(61);
	v->a[5283] = 1;
	v->a[5284] = anon_sym_DOLLAR_LBRACE;
	v->a[5285] = actions(63);
	v->a[5286] = 1;
	v->a[5287] = anon_sym_DOLLAR_LPAREN;
	v->a[5288] = actions(65);
	v->a[5289] = 1;
	v->a[5290] = anon_sym_BQUOTE;
	v->a[5291] = actions(67);
	v->a[5292] = 1;
	v->a[5293] = sym_variable_name;
	v->a[5294] = actions(202);
	v->a[5295] = 1;
	v->a[5296] = sym_word;
	v->a[5297] = actions(204);
	v->a[5298] = 1;
	v->a[5299] = anon_sym_BANG;
	small_parse_table_265(v);
}

/* EOF small_parse_table_52.c */
