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
	v->a[26200] = anon_sym_LT_AMP;
	v->a[26201] = anon_sym_GT_AMP;
	v->a[26202] = anon_sym_GT_PIPE;
	v->a[26203] = anon_sym_LT_AMP_DASH;
	v->a[26204] = anon_sym_GT_AMP_DASH;
	v->a[26205] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26206] = anon_sym_DOLLAR;
	v->a[26207] = anon_sym_DQUOTE;
	v->a[26208] = sym_raw_string;
	v->a[26209] = sym_number;
	v->a[26210] = anon_sym_DOLLAR_LBRACE;
	v->a[26211] = anon_sym_DOLLAR_LPAREN;
	v->a[26212] = anon_sym_BQUOTE;
	v->a[26213] = sym_word;
	v->a[26214] = 20;
	v->a[26215] = actions(3);
	v->a[26216] = 1;
	v->a[26217] = sym_comment;
	v->a[26218] = actions(884);
	v->a[26219] = 1;
	small_parse_table_1311(v);
}

void	small_parse_table_1311(t_small_parse_table_array *v)
{
	v->a[26220] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26221] = actions(886);
	v->a[26222] = 1;
	v->a[26223] = anon_sym_DOLLAR;
	v->a[26224] = actions(888);
	v->a[26225] = 1;
	v->a[26226] = anon_sym_DQUOTE;
	v->a[26227] = actions(890);
	v->a[26228] = 1;
	v->a[26229] = anon_sym_DOLLAR_LBRACE;
	v->a[26230] = actions(892);
	v->a[26231] = 1;
	v->a[26232] = anon_sym_DOLLAR_LPAREN;
	v->a[26233] = actions(894);
	v->a[26234] = 1;
	v->a[26235] = anon_sym_BQUOTE;
	v->a[26236] = actions(896);
	v->a[26237] = 1;
	v->a[26238] = sym_file_descriptor;
	v->a[26239] = actions(947);
	small_parse_table_1312(v);
}

void	small_parse_table_1312(t_small_parse_table_array *v)
{
	v->a[26240] = 1;
	v->a[26241] = aux_sym_heredoc_redirect_token1;
	v->a[26242] = state(1674);
	v->a[26243] = 1;
	v->a[26244] = aux_sym__heredoc_command;
	v->a[26245] = state(2098);
	v->a[26246] = 1;
	v->a[26247] = sym_concatenation;
	v->a[26248] = state(2342);
	v->a[26249] = 1;
	v->a[26250] = sym__heredoc_pipeline;
	v->a[26251] = state(2343);
	v->a[26252] = 1;
	v->a[26253] = sym__heredoc_expression;
	v->a[26254] = actions(874);
	v->a[26255] = 2;
	v->a[26256] = anon_sym_PIPE;
	v->a[26257] = anon_sym_PIPE_AMP;
	v->a[26258] = actions(876);
	v->a[26259] = 2;
	small_parse_table_1313(v);
}

void	small_parse_table_1313(t_small_parse_table_array *v)
{
	v->a[26260] = anon_sym_AMP_AMP;
	v->a[26261] = anon_sym_PIPE_PIPE;
	v->a[26262] = actions(880);
	v->a[26263] = 2;
	v->a[26264] = anon_sym_LT_AMP_DASH;
	v->a[26265] = anon_sym_GT_AMP_DASH;
	v->a[26266] = state(1672);
	v->a[26267] = 2;
	v->a[26268] = sym_file_redirect;
	v->a[26269] = aux_sym_redirected_statement_repeat2;
	v->a[26270] = actions(872);
	v->a[26271] = 3;
	v->a[26272] = sym_raw_string;
	v->a[26273] = sym_number;
	v->a[26274] = sym_word;
	v->a[26275] = state(1944);
	v->a[26276] = 5;
	v->a[26277] = sym_arithmetic_expansion;
	v->a[26278] = sym_string;
	v->a[26279] = sym_simple_expansion;
	small_parse_table_1314(v);
}

void	small_parse_table_1314(t_small_parse_table_array *v)
{
	v->a[26280] = sym_expansion;
	v->a[26281] = sym_command_substitution;
	v->a[26282] = actions(878);
	v->a[26283] = 8;
	v->a[26284] = anon_sym_LT;
	v->a[26285] = anon_sym_GT;
	v->a[26286] = anon_sym_GT_GT;
	v->a[26287] = anon_sym_AMP_GT;
	v->a[26288] = anon_sym_AMP_GT_GT;
	v->a[26289] = anon_sym_LT_AMP;
	v->a[26290] = anon_sym_GT_AMP;
	v->a[26291] = anon_sym_GT_PIPE;
	v->a[26292] = 5;
	v->a[26293] = actions(3);
	v->a[26294] = 1;
	v->a[26295] = sym_comment;
	v->a[26296] = state(697);
	v->a[26297] = 1;
	v->a[26298] = sym_concatenation;
	v->a[26299] = actions(713);
	small_parse_table_1315(v);
}

/* EOF small_parse_table_262.c */
