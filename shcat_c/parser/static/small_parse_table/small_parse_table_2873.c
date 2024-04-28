/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2873.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14365(t_small_parse_table_array *v)
{
	v->a[287300] = sym_parenthesized_expression;
	v->a[287301] = state(7302);
	v->a[287302] = 1;
	v->a[287303] = sym_arithmetic_expansion;
	v->a[287304] = state(7477);
	v->a[287305] = 1;
	v->a[287306] = sym_command_substitution;
	v->a[287307] = actions(12541);
	v->a[287308] = 2;
	v->a[287309] = anon_sym_LPAREN_LPAREN;
	v->a[287310] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[287311] = 3;
	v->a[287312] = actions(71);
	v->a[287313] = 1;
	v->a[287314] = sym_comment;
	v->a[287315] = actions(1251);
	v->a[287316] = 7;
	v->a[287317] = anon_sym_PIPE;
	v->a[287318] = anon_sym_LT;
	v->a[287319] = anon_sym_GT;
	small_parse_table_14366(v);
}

void	small_parse_table_14366(t_small_parse_table_array *v)
{
	v->a[287320] = anon_sym_LT_LT;
	v->a[287321] = anon_sym_AMP_GT;
	v->a[287322] = anon_sym_LT_AMP;
	v->a[287323] = anon_sym_GT_AMP;
	v->a[287324] = actions(1253);
	v->a[287325] = 13;
	v->a[287326] = sym_file_descriptor;
	v->a[287327] = sym__concat;
	v->a[287328] = anon_sym_PIPE_PIPE;
	v->a[287329] = anon_sym_AMP_AMP;
	v->a[287330] = anon_sym_GT_GT;
	v->a[287331] = anon_sym_PIPE_AMP;
	v->a[287332] = anon_sym_RBRACK;
	v->a[287333] = anon_sym_AMP_GT_GT;
	v->a[287334] = anon_sym_GT_PIPE;
	v->a[287335] = anon_sym_LT_AMP_DASH;
	v->a[287336] = anon_sym_GT_AMP_DASH;
	v->a[287337] = anon_sym_LT_LT_DASH;
	v->a[287338] = aux_sym_concatenation_token1;
	v->a[287339] = 5;
	small_parse_table_14367(v);
}

void	small_parse_table_14367(t_small_parse_table_array *v)
{
	v->a[287340] = actions(71);
	v->a[287341] = 1;
	v->a[287342] = sym_comment;
	v->a[287343] = actions(12866);
	v->a[287344] = 1;
	v->a[287345] = sym__special_character;
	v->a[287346] = state(5469);
	v->a[287347] = 1;
	v->a[287348] = aux_sym__literal_repeat1;
	v->a[287349] = actions(4467);
	v->a[287350] = 7;
	v->a[287351] = anon_sym_PIPE;
	v->a[287352] = anon_sym_LT;
	v->a[287353] = anon_sym_GT;
	v->a[287354] = anon_sym_LT_LT;
	v->a[287355] = anon_sym_AMP_GT;
	v->a[287356] = anon_sym_LT_AMP;
	v->a[287357] = anon_sym_GT_AMP;
	v->a[287358] = actions(4469);
	v->a[287359] = 11;
	small_parse_table_14368(v);
}

void	small_parse_table_14368(t_small_parse_table_array *v)
{
	v->a[287360] = sym_file_descriptor;
	v->a[287361] = anon_sym_PIPE_PIPE;
	v->a[287362] = anon_sym_AMP_AMP;
	v->a[287363] = anon_sym_GT_GT;
	v->a[287364] = anon_sym_PIPE_AMP;
	v->a[287365] = anon_sym_AMP_GT_GT;
	v->a[287366] = anon_sym_GT_PIPE;
	v->a[287367] = anon_sym_LT_AMP_DASH;
	v->a[287368] = anon_sym_GT_AMP_DASH;
	v->a[287369] = anon_sym_LT_LT_DASH;
	v->a[287370] = anon_sym_LT_LT_LT;
	v->a[287371] = 3;
	v->a[287372] = actions(71);
	v->a[287373] = 1;
	v->a[287374] = sym_comment;
	v->a[287375] = actions(1316);
	v->a[287376] = 7;
	v->a[287377] = anon_sym_PIPE;
	v->a[287378] = anon_sym_LT;
	v->a[287379] = anon_sym_GT;
	small_parse_table_14369(v);
}

void	small_parse_table_14369(t_small_parse_table_array *v)
{
	v->a[287380] = anon_sym_LT_LT;
	v->a[287381] = anon_sym_AMP_GT;
	v->a[287382] = anon_sym_LT_AMP;
	v->a[287383] = anon_sym_GT_AMP;
	v->a[287384] = actions(1318);
	v->a[287385] = 13;
	v->a[287386] = sym_file_descriptor;
	v->a[287387] = sym__concat;
	v->a[287388] = anon_sym_PIPE_PIPE;
	v->a[287389] = anon_sym_AMP_AMP;
	v->a[287390] = anon_sym_GT_GT;
	v->a[287391] = anon_sym_PIPE_AMP;
	v->a[287392] = anon_sym_RBRACK;
	v->a[287393] = anon_sym_AMP_GT_GT;
	v->a[287394] = anon_sym_GT_PIPE;
	v->a[287395] = anon_sym_LT_AMP_DASH;
	v->a[287396] = anon_sym_GT_AMP_DASH;
	v->a[287397] = anon_sym_LT_LT_DASH;
	v->a[287398] = aux_sym_concatenation_token1;
	v->a[287399] = 3;
	small_parse_table_14370(v);
}

/* EOF small_parse_table_2873.c */
