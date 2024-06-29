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
	v->a[5200] = anon_sym_until;
	v->a[5201] = actions(57);
	v->a[5202] = 2;
	v->a[5203] = anon_sym_LT_AMP_DASH;
	v->a[5204] = anon_sym_GT_AMP_DASH;
	v->a[5205] = actions(65);
	v->a[5206] = 2;
	v->a[5207] = sym_raw_string;
	v->a[5208] = sym_number;
	v->a[5209] = state(420);
	v->a[5210] = 5;
	v->a[5211] = sym_arithmetic_expansion;
	v->a[5212] = sym_string;
	v->a[5213] = sym_simple_expansion;
	v->a[5214] = sym_expansion;
	v->a[5215] = sym_command_substitution;
	v->a[5216] = actions(55);
	v->a[5217] = 8;
	v->a[5218] = anon_sym_LT;
	v->a[5219] = anon_sym_GT;
	small_parse_table_261(v);
}

void	small_parse_table_261(t_small_parse_table_array *v)
{
	v->a[5220] = anon_sym_GT_GT;
	v->a[5221] = anon_sym_AMP_GT;
	v->a[5222] = anon_sym_AMP_GT_GT;
	v->a[5223] = anon_sym_LT_AMP;
	v->a[5224] = anon_sym_GT_AMP;
	v->a[5225] = anon_sym_GT_PIPE;
	v->a[5226] = state(1057);
	v->a[5227] = 12;
	v->a[5228] = sym_redirected_statement;
	v->a[5229] = sym_for_statement;
	v->a[5230] = sym_while_statement;
	v->a[5231] = sym_if_statement;
	v->a[5232] = sym_case_statement;
	v->a[5233] = sym_function_definition;
	v->a[5234] = sym_compound_statement;
	v->a[5235] = sym_subshell;
	v->a[5236] = sym_list;
	v->a[5237] = sym_negated_command;
	v->a[5238] = sym_command;
	v->a[5239] = sym__variable_assignments;
	small_parse_table_262(v);
}

void	small_parse_table_262(t_small_parse_table_array *v)
{
	v->a[5240] = 32;
	v->a[5241] = actions(3);
	v->a[5242] = 1;
	v->a[5243] = sym_comment;
	v->a[5244] = actions(9);
	v->a[5245] = 1;
	v->a[5246] = anon_sym_for;
	v->a[5247] = actions(13);
	v->a[5248] = 1;
	v->a[5249] = anon_sym_if;
	v->a[5250] = actions(15);
	v->a[5251] = 1;
	v->a[5252] = anon_sym_case;
	v->a[5253] = actions(17);
	v->a[5254] = 1;
	v->a[5255] = anon_sym_LPAREN;
	v->a[5256] = actions(19);
	v->a[5257] = 1;
	v->a[5258] = anon_sym_LBRACE;
	v->a[5259] = actions(59);
	small_parse_table_263(v);
}

void	small_parse_table_263(t_small_parse_table_array *v)
{
	v->a[5260] = 1;
	v->a[5261] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5262] = actions(61);
	v->a[5263] = 1;
	v->a[5264] = anon_sym_DOLLAR;
	v->a[5265] = actions(63);
	v->a[5266] = 1;
	v->a[5267] = anon_sym_DQUOTE;
	v->a[5268] = actions(67);
	v->a[5269] = 1;
	v->a[5270] = anon_sym_DOLLAR_LBRACE;
	v->a[5271] = actions(69);
	v->a[5272] = 1;
	v->a[5273] = anon_sym_DOLLAR_LPAREN;
	v->a[5274] = actions(71);
	v->a[5275] = 1;
	v->a[5276] = anon_sym_BQUOTE;
	v->a[5277] = actions(220);
	v->a[5278] = 1;
	v->a[5279] = sym_word;
	small_parse_table_264(v);
}

void	small_parse_table_264(t_small_parse_table_array *v)
{
	v->a[5280] = actions(222);
	v->a[5281] = 1;
	v->a[5282] = anon_sym_BANG;
	v->a[5283] = actions(230);
	v->a[5284] = 1;
	v->a[5285] = sym_file_descriptor;
	v->a[5286] = actions(232);
	v->a[5287] = 1;
	v->a[5288] = sym_variable_name;
	v->a[5289] = state(138);
	v->a[5290] = 1;
	v->a[5291] = aux_sym__statements_repeat1;
	v->a[5292] = state(185);
	v->a[5293] = 1;
	v->a[5294] = sym_command_name;
	v->a[5295] = state(235);
	v->a[5296] = 1;
	v->a[5297] = sym_variable_assignment;
	v->a[5298] = state(624);
	v->a[5299] = 1;
	small_parse_table_265(v);
}

/* EOF small_parse_table_52.c */
