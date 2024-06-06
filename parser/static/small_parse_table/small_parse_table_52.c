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
	v->a[5201] = actions(1556);
	v->a[5202] = 1;
	v->a[5203] = anon_sym_DOLLAR_BQUOTE;
	v->a[5204] = actions(1558);
	v->a[5205] = 1;
	v->a[5206] = sym_test_operator;
	v->a[5207] = actions(1560);
	v->a[5208] = 1;
	v->a[5209] = sym__brace_start;
	v->a[5210] = state(1034);
	v->a[5211] = 1;
	v->a[5212] = aux_sym__literal_repeat1;
	v->a[5213] = actions(1182);
	v->a[5214] = 2;
	v->a[5215] = sym_file_descriptor;
	v->a[5216] = aux_sym_heredoc_redirect_token1;
	v->a[5217] = actions(1536);
	v->a[5218] = 2;
	v->a[5219] = sym_raw_string;
	small_parse_table_261(v);
}

void	small_parse_table_261(t_small_parse_table_array *v)
{
	v->a[5220] = sym_word;
	v->a[5221] = state(342);
	v->a[5222] = 2;
	v->a[5223] = sym_concatenation;
	v->a[5224] = aux_sym_for_statement_repeat1;
	v->a[5225] = state(634);
	v->a[5226] = 7;
	v->a[5227] = sym_arithmetic_expansion;
	v->a[5228] = sym_brace_expression;
	v->a[5229] = sym_string;
	v->a[5230] = sym_number;
	v->a[5231] = sym_simple_expansion;
	v->a[5232] = sym_expansion;
	v->a[5233] = sym_command_substitution;
	v->a[5234] = actions(1180);
	v->a[5235] = 22;
	v->a[5236] = anon_sym_esac;
	v->a[5237] = anon_sym_PIPE;
	v->a[5238] = anon_sym_SEMI_SEMI;
	v->a[5239] = anon_sym_SEMI_AMP;
	small_parse_table_262(v);
}

void	small_parse_table_262(t_small_parse_table_array *v)
{
	v->a[5240] = anon_sym_SEMI_SEMI_AMP;
	v->a[5241] = anon_sym_PIPE_AMP;
	v->a[5242] = anon_sym_AMP_AMP;
	v->a[5243] = anon_sym_PIPE_PIPE;
	v->a[5244] = anon_sym_LT;
	v->a[5245] = anon_sym_GT;
	v->a[5246] = anon_sym_GT_GT;
	v->a[5247] = anon_sym_AMP_GT;
	v->a[5248] = anon_sym_AMP_GT_GT;
	v->a[5249] = anon_sym_LT_AMP;
	v->a[5250] = anon_sym_GT_AMP;
	v->a[5251] = anon_sym_GT_PIPE;
	v->a[5252] = anon_sym_LT_AMP_DASH;
	v->a[5253] = anon_sym_GT_AMP_DASH;
	v->a[5254] = anon_sym_LT_LT;
	v->a[5255] = anon_sym_LT_LT_DASH;
	v->a[5256] = anon_sym_AMP;
	v->a[5257] = anon_sym_SEMI;
	v->a[5258] = 21;
	v->a[5259] = actions(3);
	small_parse_table_263(v);
}

void	small_parse_table_263(t_small_parse_table_array *v)
{
	v->a[5260] = 1;
	v->a[5261] = sym_comment;
	v->a[5262] = actions(1009);
	v->a[5263] = 1;
	v->a[5264] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5265] = actions(1011);
	v->a[5266] = 1;
	v->a[5267] = anon_sym_DOLLAR;
	v->a[5268] = actions(1015);
	v->a[5269] = 1;
	v->a[5270] = anon_sym_DQUOTE;
	v->a[5271] = actions(1017);
	v->a[5272] = 1;
	v->a[5273] = aux_sym_number_token1;
	v->a[5274] = actions(1019);
	v->a[5275] = 1;
	v->a[5276] = aux_sym_number_token2;
	v->a[5277] = actions(1021);
	v->a[5278] = 1;
	v->a[5279] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_264(v);
}

void	small_parse_table_264(t_small_parse_table_array *v)
{
	v->a[5280] = actions(1023);
	v->a[5281] = 1;
	v->a[5282] = anon_sym_DOLLAR_LPAREN;
	v->a[5283] = actions(1025);
	v->a[5284] = 1;
	v->a[5285] = anon_sym_BQUOTE;
	v->a[5286] = actions(1027);
	v->a[5287] = 1;
	v->a[5288] = anon_sym_DOLLAR_BQUOTE;
	v->a[5289] = actions(1035);
	v->a[5290] = 1;
	v->a[5291] = sym__brace_start;
	v->a[5292] = actions(1564);
	v->a[5293] = 1;
	v->a[5294] = sym__special_character;
	v->a[5295] = actions(1566);
	v->a[5296] = 1;
	v->a[5297] = aux_sym__simple_variable_name_token1;
	v->a[5298] = actions(1568);
	v->a[5299] = 1;
	small_parse_table_265(v);
}

/* EOF small_parse_table_52.c */
