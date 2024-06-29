/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_262.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1310(t_small_parse_table_array *v)
{
	v->a[26200] = state(1473);
	v->a[26201] = 1;
	v->a[26202] = aux_sym__heredoc_command;
	v->a[26203] = state(1953);
	v->a[26204] = 1;
	v->a[26205] = sym_concatenation;
	v->a[26206] = state(2128);
	v->a[26207] = 1;
	v->a[26208] = sym__heredoc_expression;
	v->a[26209] = state(2184);
	v->a[26210] = 1;
	v->a[26211] = sym__heredoc_pipeline;
	v->a[26212] = actions(849);
	v->a[26213] = 2;
	v->a[26214] = anon_sym_PIPE;
	v->a[26215] = anon_sym_PIPE_AMP;
	v->a[26216] = actions(851);
	v->a[26217] = 2;
	v->a[26218] = anon_sym_AMP_AMP;
	v->a[26219] = anon_sym_PIPE_PIPE;
	small_parse_table_1311(v);
}

void	small_parse_table_1311(t_small_parse_table_array *v)
{
	v->a[26220] = actions(855);
	v->a[26221] = 2;
	v->a[26222] = anon_sym_LT_AMP_DASH;
	v->a[26223] = anon_sym_GT_AMP_DASH;
	v->a[26224] = state(1474);
	v->a[26225] = 2;
	v->a[26226] = sym_file_redirect;
	v->a[26227] = aux_sym_redirected_statement_repeat2;
	v->a[26228] = actions(847);
	v->a[26229] = 3;
	v->a[26230] = sym_raw_string;
	v->a[26231] = sym_number;
	v->a[26232] = sym_word;
	v->a[26233] = state(1788);
	v->a[26234] = 5;
	v->a[26235] = sym_arithmetic_expansion;
	v->a[26236] = sym_string;
	v->a[26237] = sym_simple_expansion;
	v->a[26238] = sym_expansion;
	v->a[26239] = sym_command_substitution;
	small_parse_table_1312(v);
}

void	small_parse_table_1312(t_small_parse_table_array *v)
{
	v->a[26240] = actions(853);
	v->a[26241] = 8;
	v->a[26242] = anon_sym_LT;
	v->a[26243] = anon_sym_GT;
	v->a[26244] = anon_sym_GT_GT;
	v->a[26245] = anon_sym_AMP_GT;
	v->a[26246] = anon_sym_AMP_GT_GT;
	v->a[26247] = anon_sym_LT_AMP;
	v->a[26248] = anon_sym_GT_AMP;
	v->a[26249] = anon_sym_GT_PIPE;
	v->a[26250] = 6;
	v->a[26251] = actions(3);
	v->a[26252] = 1;
	v->a[26253] = sym_comment;
	v->a[26254] = actions(385);
	v->a[26255] = 1;
	v->a[26256] = sym_file_descriptor;
	v->a[26257] = actions(937);
	v->a[26258] = 1;
	v->a[26259] = sym_variable_name;
	small_parse_table_1313(v);
}

void	small_parse_table_1313(t_small_parse_table_array *v)
{
	v->a[26260] = actions(935);
	v->a[26261] = 2;
	v->a[26262] = aux_sym__simple_variable_name_token1;
	v->a[26263] = aux_sym__multiline_variable_name_token1;
	v->a[26264] = actions(933);
	v->a[26265] = 9;
	v->a[26266] = anon_sym_BANG;
	v->a[26267] = anon_sym_DASH;
	v->a[26268] = anon_sym_STAR;
	v->a[26269] = anon_sym_QMARK;
	v->a[26270] = anon_sym_DOLLAR;
	v->a[26271] = anon_sym_POUND;
	v->a[26272] = anon_sym_AT;
	v->a[26273] = anon_sym_0;
	v->a[26274] = anon_sym__;
	v->a[26275] = actions(379);
	v->a[26276] = 23;
	v->a[26277] = anon_sym_PIPE;
	v->a[26278] = anon_sym_AMP_AMP;
	v->a[26279] = anon_sym_PIPE_PIPE;
	small_parse_table_1314(v);
}

void	small_parse_table_1314(t_small_parse_table_array *v)
{
	v->a[26280] = anon_sym_LT;
	v->a[26281] = anon_sym_GT;
	v->a[26282] = anon_sym_GT_GT;
	v->a[26283] = anon_sym_AMP_GT;
	v->a[26284] = anon_sym_AMP_GT_GT;
	v->a[26285] = anon_sym_LT_AMP;
	v->a[26286] = anon_sym_GT_AMP;
	v->a[26287] = anon_sym_GT_PIPE;
	v->a[26288] = anon_sym_LT_AMP_DASH;
	v->a[26289] = anon_sym_GT_AMP_DASH;
	v->a[26290] = anon_sym_LT_LT;
	v->a[26291] = anon_sym_LT_LT_DASH;
	v->a[26292] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26293] = anon_sym_DQUOTE;
	v->a[26294] = sym_raw_string;
	v->a[26295] = sym_number;
	v->a[26296] = anon_sym_DOLLAR_LBRACE;
	v->a[26297] = anon_sym_DOLLAR_LPAREN;
	v->a[26298] = anon_sym_BQUOTE;
	v->a[26299] = sym_word;
	small_parse_table_1315(v);
}

/* EOF small_parse_table_262.c */
