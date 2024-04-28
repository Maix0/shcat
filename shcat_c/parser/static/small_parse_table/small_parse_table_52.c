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
	v->a[5200] = actions(1241);
	v->a[5201] = 4;
	v->a[5202] = sym_file_descriptor;
	v->a[5203] = sym_test_operator;
	v->a[5204] = sym__bare_dollar;
	v->a[5205] = sym__brace_start;
	v->a[5206] = actions(1809);
	v->a[5207] = 9;
	v->a[5208] = anon_sym_DASH;
	v->a[5209] = anon_sym_STAR;
	v->a[5210] = anon_sym_BANG;
	v->a[5211] = anon_sym_QMARK;
	v->a[5212] = anon_sym_DOLLAR;
	v->a[5213] = anon_sym_POUND;
	v->a[5214] = anon_sym_AT2;
	v->a[5215] = anon_sym_0;
	v->a[5216] = anon_sym__;
	v->a[5217] = actions(1239);
	v->a[5218] = 39;
	v->a[5219] = anon_sym_LPAREN_LPAREN;
	small_parse_table_261(v);
}

void	small_parse_table_261(t_small_parse_table_array *v)
{
	v->a[5220] = anon_sym_SEMI;
	v->a[5221] = anon_sym_PIPE_PIPE;
	v->a[5222] = anon_sym_AMP_AMP;
	v->a[5223] = anon_sym_PIPE;
	v->a[5224] = anon_sym_AMP;
	v->a[5225] = anon_sym_EQ_EQ;
	v->a[5226] = anon_sym_LT;
	v->a[5227] = anon_sym_GT;
	v->a[5228] = anon_sym_LT_LT;
	v->a[5229] = anon_sym_GT_GT;
	v->a[5230] = anon_sym_LPAREN;
	v->a[5231] = anon_sym_SEMI_SEMI;
	v->a[5232] = anon_sym_PIPE_AMP;
	v->a[5233] = anon_sym_EQ_TILDE;
	v->a[5234] = anon_sym_AMP_GT;
	v->a[5235] = anon_sym_AMP_GT_GT;
	v->a[5236] = anon_sym_LT_AMP;
	v->a[5237] = anon_sym_GT_AMP;
	v->a[5238] = anon_sym_GT_PIPE;
	v->a[5239] = anon_sym_LT_AMP_DASH;
	small_parse_table_262(v);
}

void	small_parse_table_262(t_small_parse_table_array *v)
{
	v->a[5240] = anon_sym_GT_AMP_DASH;
	v->a[5241] = anon_sym_LT_LT_DASH;
	v->a[5242] = aux_sym_heredoc_redirect_token1;
	v->a[5243] = anon_sym_LT_LT_LT;
	v->a[5244] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5245] = anon_sym_DOLLAR_LBRACK;
	v->a[5246] = sym__special_character;
	v->a[5247] = sym_raw_string;
	v->a[5248] = sym_ansi_c_string;
	v->a[5249] = aux_sym_number_token1;
	v->a[5250] = aux_sym_number_token2;
	v->a[5251] = anon_sym_DOLLAR_LBRACE;
	v->a[5252] = anon_sym_DOLLAR_LPAREN;
	v->a[5253] = anon_sym_BQUOTE;
	v->a[5254] = anon_sym_DOLLAR_BQUOTE;
	v->a[5255] = anon_sym_LT_LPAREN;
	v->a[5256] = anon_sym_GT_LPAREN;
	v->a[5257] = sym_word;
	v->a[5258] = 8;
	v->a[5259] = actions(3);
	small_parse_table_263(v);
}

void	small_parse_table_263(t_small_parse_table_array *v)
{
	v->a[5260] = 1;
	v->a[5261] = sym_comment;
	v->a[5262] = actions(1811);
	v->a[5263] = 1;
	v->a[5264] = anon_sym_DQUOTE;
	v->a[5265] = actions(1815);
	v->a[5266] = 1;
	v->a[5267] = sym_variable_name;
	v->a[5268] = state(1061);
	v->a[5269] = 1;
	v->a[5270] = sym_string;
	v->a[5271] = actions(1813);
	v->a[5272] = 2;
	v->a[5273] = aux_sym__simple_variable_name_token1;
	v->a[5274] = aux_sym__multiline_variable_name_token1;
	v->a[5275] = actions(1235);
	v->a[5276] = 4;
	v->a[5277] = sym_file_descriptor;
	v->a[5278] = sym_test_operator;
	v->a[5279] = sym__bare_dollar;
	small_parse_table_264(v);
}

void	small_parse_table_264(t_small_parse_table_array *v)
{
	v->a[5280] = sym__brace_start;
	v->a[5281] = actions(1809);
	v->a[5282] = 9;
	v->a[5283] = anon_sym_DASH;
	v->a[5284] = anon_sym_STAR;
	v->a[5285] = anon_sym_BANG;
	v->a[5286] = anon_sym_QMARK;
	v->a[5287] = anon_sym_DOLLAR;
	v->a[5288] = anon_sym_POUND;
	v->a[5289] = anon_sym_AT2;
	v->a[5290] = anon_sym_0;
	v->a[5291] = anon_sym__;
	v->a[5292] = actions(1227);
	v->a[5293] = 39;
	v->a[5294] = anon_sym_LPAREN_LPAREN;
	v->a[5295] = anon_sym_SEMI;
	v->a[5296] = anon_sym_PIPE_PIPE;
	v->a[5297] = anon_sym_AMP_AMP;
	v->a[5298] = anon_sym_PIPE;
	v->a[5299] = anon_sym_AMP;
	small_parse_table_265(v);
}

/* EOF small_parse_table_52.c */
