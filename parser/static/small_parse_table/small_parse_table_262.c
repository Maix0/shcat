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
	v->a[26200] = anon_sym_PLUS_EQ;
	v->a[26201] = anon_sym_DASH_EQ;
	v->a[26202] = anon_sym_STAR_EQ;
	v->a[26203] = anon_sym_SLASH_EQ;
	v->a[26204] = anon_sym_PERCENT_EQ;
	v->a[26205] = anon_sym_LT_LT_EQ;
	v->a[26206] = anon_sym_GT_GT_EQ;
	v->a[26207] = anon_sym_AMP_EQ;
	v->a[26208] = anon_sym_CARET_EQ;
	v->a[26209] = anon_sym_PIPE_EQ;
	v->a[26210] = 12;
	v->a[26211] = actions(3);
	v->a[26212] = 1;
	v->a[26213] = sym_comment;
	v->a[26214] = actions(529);
	v->a[26215] = 1;
	v->a[26216] = sym_file_descriptor;
	v->a[26217] = actions(962);
	v->a[26218] = 1;
	v->a[26219] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1311(v);
}

void	small_parse_table_1311(t_small_parse_table_array *v)
{
	v->a[26220] = actions(964);
	v->a[26221] = 1;
	v->a[26222] = anon_sym_DOLLAR;
	v->a[26223] = actions(966);
	v->a[26224] = 1;
	v->a[26225] = anon_sym_DQUOTE;
	v->a[26226] = actions(968);
	v->a[26227] = 1;
	v->a[26228] = anon_sym_DOLLAR_LBRACE;
	v->a[26229] = actions(970);
	v->a[26230] = 1;
	v->a[26231] = anon_sym_DOLLAR_LPAREN;
	v->a[26232] = actions(972);
	v->a[26233] = 1;
	v->a[26234] = anon_sym_BQUOTE;
	v->a[26235] = state(256);
	v->a[26236] = 2;
	v->a[26237] = sym_concatenation;
	v->a[26238] = aux_sym_for_statement_repeat1;
	v->a[26239] = actions(960);
	small_parse_table_1312(v);
}

void	small_parse_table_1312(t_small_parse_table_array *v)
{
	v->a[26240] = 3;
	v->a[26241] = sym_raw_string;
	v->a[26242] = sym_number;
	v->a[26243] = sym_word;
	v->a[26244] = state(519);
	v->a[26245] = 5;
	v->a[26246] = sym_arithmetic_expansion;
	v->a[26247] = sym_string;
	v->a[26248] = sym_simple_expansion;
	v->a[26249] = sym_expansion;
	v->a[26250] = sym_command_substitution;
	v->a[26251] = actions(531);
	v->a[26252] = 16;
	v->a[26253] = anon_sym_PIPE;
	v->a[26254] = anon_sym_RPAREN;
	v->a[26255] = anon_sym_SEMI_SEMI;
	v->a[26256] = anon_sym_AMP_AMP;
	v->a[26257] = anon_sym_PIPE_PIPE;
	v->a[26258] = anon_sym_LT;
	v->a[26259] = anon_sym_GT;
	small_parse_table_1313(v);
}

void	small_parse_table_1313(t_small_parse_table_array *v)
{
	v->a[26260] = anon_sym_GT_GT;
	v->a[26261] = anon_sym_LT_AMP;
	v->a[26262] = anon_sym_GT_AMP;
	v->a[26263] = anon_sym_GT_PIPE;
	v->a[26264] = anon_sym_LT_GT;
	v->a[26265] = anon_sym_LT_LT;
	v->a[26266] = anon_sym_LT_LT_DASH;
	v->a[26267] = aux_sym_heredoc_redirect_token1;
	v->a[26268] = anon_sym_SEMI;
	v->a[26269] = 17;
	v->a[26270] = actions(501);
	v->a[26271] = 1;
	v->a[26272] = sym_comment;
	v->a[26273] = actions(650);
	v->a[26274] = 1;
	v->a[26275] = anon_sym_PIPE;
	v->a[26276] = actions(652);
	v->a[26277] = 1;
	v->a[26278] = anon_sym_AMP_AMP;
	v->a[26279] = actions(654);
	small_parse_table_1314(v);
}

void	small_parse_table_1314(t_small_parse_table_array *v)
{
	v->a[26280] = 1;
	v->a[26281] = anon_sym_PIPE_PIPE;
	v->a[26282] = actions(664);
	v->a[26283] = 1;
	v->a[26284] = anon_sym_CARET;
	v->a[26285] = actions(666);
	v->a[26286] = 1;
	v->a[26287] = anon_sym_AMP;
	v->a[26288] = actions(721);
	v->a[26289] = 1;
	v->a[26290] = anon_sym_QMARK;
	v->a[26291] = actions(723);
	v->a[26292] = 1;
	v->a[26293] = anon_sym_EQ;
	v->a[26294] = actions(978);
	v->a[26295] = 1;
	v->a[26296] = anon_sym_RPAREN_RPAREN;
	v->a[26297] = actions(499);
	v->a[26298] = 2;
	v->a[26299] = anon_sym_PLUS_PLUS2;
	small_parse_table_1315(v);
}

/* EOF small_parse_table_262.c */
