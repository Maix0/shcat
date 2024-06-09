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
	v->a[5200] = sym_arithmetic_expansion;
	v->a[5201] = sym_string;
	v->a[5202] = sym_number;
	v->a[5203] = sym_simple_expansion;
	v->a[5204] = sym_expansion;
	v->a[5205] = sym_command_substitution;
	v->a[5206] = actions(59);
	v->a[5207] = 8;
	v->a[5208] = anon_sym_LT;
	v->a[5209] = anon_sym_GT;
	v->a[5210] = anon_sym_GT_GT;
	v->a[5211] = anon_sym_AMP_GT;
	v->a[5212] = anon_sym_AMP_GT_GT;
	v->a[5213] = anon_sym_LT_AMP;
	v->a[5214] = anon_sym_GT_AMP;
	v->a[5215] = anon_sym_GT_PIPE;
	v->a[5216] = state(1137);
	v->a[5217] = 12;
	v->a[5218] = sym_redirected_statement;
	v->a[5219] = sym_for_statement;
	small_parse_table_261(v);
}

void	small_parse_table_261(t_small_parse_table_array *v)
{
	v->a[5220] = sym_while_statement;
	v->a[5221] = sym_if_statement;
	v->a[5222] = sym_case_statement;
	v->a[5223] = sym_function_definition;
	v->a[5224] = sym_compound_statement;
	v->a[5225] = sym_subshell;
	v->a[5226] = sym_list;
	v->a[5227] = sym_negated_command;
	v->a[5228] = sym_command;
	v->a[5229] = sym_variable_assignments;
	v->a[5230] = 34;
	v->a[5231] = actions(3);
	v->a[5232] = 1;
	v->a[5233] = sym_comment;
	v->a[5234] = actions(9);
	v->a[5235] = 1;
	v->a[5236] = anon_sym_for;
	v->a[5237] = actions(13);
	v->a[5238] = 1;
	v->a[5239] = anon_sym_if;
	small_parse_table_262(v);
}

void	small_parse_table_262(t_small_parse_table_array *v)
{
	v->a[5240] = actions(15);
	v->a[5241] = 1;
	v->a[5242] = anon_sym_case;
	v->a[5243] = actions(17);
	v->a[5244] = 1;
	v->a[5245] = anon_sym_LPAREN;
	v->a[5246] = actions(19);
	v->a[5247] = 1;
	v->a[5248] = anon_sym_LBRACE;
	v->a[5249] = actions(49);
	v->a[5250] = 1;
	v->a[5251] = sym_word;
	v->a[5252] = actions(57);
	v->a[5253] = 1;
	v->a[5254] = anon_sym_BANG;
	v->a[5255] = actions(63);
	v->a[5256] = 1;
	v->a[5257] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5258] = actions(65);
	v->a[5259] = 1;
	small_parse_table_263(v);
}

void	small_parse_table_263(t_small_parse_table_array *v)
{
	v->a[5260] = anon_sym_DOLLAR;
	v->a[5261] = actions(67);
	v->a[5262] = 1;
	v->a[5263] = anon_sym_DQUOTE;
	v->a[5264] = actions(69);
	v->a[5265] = 1;
	v->a[5266] = sym_raw_string;
	v->a[5267] = actions(71);
	v->a[5268] = 1;
	v->a[5269] = aux_sym_number_token1;
	v->a[5270] = actions(73);
	v->a[5271] = 1;
	v->a[5272] = aux_sym_number_token2;
	v->a[5273] = actions(75);
	v->a[5274] = 1;
	v->a[5275] = anon_sym_DOLLAR_LBRACE;
	v->a[5276] = actions(77);
	v->a[5277] = 1;
	v->a[5278] = anon_sym_DOLLAR_LPAREN;
	v->a[5279] = actions(79);
	small_parse_table_264(v);
}

void	small_parse_table_264(t_small_parse_table_array *v)
{
	v->a[5280] = 1;
	v->a[5281] = anon_sym_BQUOTE;
	v->a[5282] = actions(81);
	v->a[5283] = 1;
	v->a[5284] = sym_file_descriptor;
	v->a[5285] = actions(83);
	v->a[5286] = 1;
	v->a[5287] = sym_variable_name;
	v->a[5288] = actions(244);
	v->a[5289] = 1;
	v->a[5290] = anon_sym_RBRACE;
	v->a[5291] = state(64);
	v->a[5292] = 1;
	v->a[5293] = aux_sym__terminated_statement;
	v->a[5294] = state(190);
	v->a[5295] = 1;
	v->a[5296] = sym_command_name;
	v->a[5297] = state(285);
	v->a[5298] = 1;
	v->a[5299] = sym_variable_assignment;
	small_parse_table_265(v);
}

/* EOF small_parse_table_52.c */
