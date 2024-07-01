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
	v->a[26200] = actions(708);
	v->a[26201] = 2;
	v->a[26202] = anon_sym_LT_EQ;
	v->a[26203] = anon_sym_GT_EQ;
	v->a[26204] = actions(688);
	v->a[26205] = 3;
	v->a[26206] = anon_sym_STAR;
	v->a[26207] = anon_sym_SLASH;
	v->a[26208] = anon_sym_PERCENT;
	v->a[26209] = actions(953);
	v->a[26210] = 10;
	v->a[26211] = anon_sym_PLUS_EQ;
	v->a[26212] = anon_sym_DASH_EQ;
	v->a[26213] = anon_sym_STAR_EQ;
	v->a[26214] = anon_sym_SLASH_EQ;
	v->a[26215] = anon_sym_PERCENT_EQ;
	v->a[26216] = anon_sym_LT_LT_EQ;
	v->a[26217] = anon_sym_GT_GT_EQ;
	v->a[26218] = anon_sym_AMP_EQ;
	v->a[26219] = anon_sym_CARET_EQ;
	small_parse_table_1311(v);
}

void	small_parse_table_1311(t_small_parse_table_array *v)
{
	v->a[26220] = anon_sym_PIPE_EQ;
	v->a[26221] = 7;
	v->a[26222] = actions(3);
	v->a[26223] = 1;
	v->a[26224] = sym_comment;
	v->a[26225] = actions(810);
	v->a[26226] = 1;
	v->a[26227] = sym_variable_name;
	v->a[26228] = actions(949);
	v->a[26229] = 2;
	v->a[26230] = sym_file_descriptor;
	v->a[26231] = ts_builtin_sym_end;
	v->a[26232] = state(1065);
	v->a[26233] = 2;
	v->a[26234] = sym_variable_assignment;
	v->a[26235] = aux_sym__variable_assignments_repeat1;
	v->a[26236] = state(1073);
	v->a[26237] = 3;
	v->a[26238] = sym_file_redirect;
	v->a[26239] = sym_heredoc_redirect;
	small_parse_table_1312(v);
}

void	small_parse_table_1312(t_small_parse_table_array *v)
{
	v->a[26240] = aux_sym_redirected_statement_repeat1;
	v->a[26241] = actions(734);
	v->a[26242] = 9;
	v->a[26243] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26244] = anon_sym_DOLLAR;
	v->a[26245] = anon_sym_DQUOTE;
	v->a[26246] = sym_raw_string;
	v->a[26247] = sym_number;
	v->a[26248] = anon_sym_DOLLAR_LBRACE;
	v->a[26249] = anon_sym_DOLLAR_LPAREN;
	v->a[26250] = anon_sym_BQUOTE;
	v->a[26251] = sym_word;
	v->a[26252] = actions(736);
	v->a[26253] = 16;
	v->a[26254] = anon_sym_PIPE;
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
	v->a[26268] = anon_sym_AMP;
	v->a[26269] = anon_sym_SEMI;
	v->a[26270] = 12;
	v->a[26271] = actions(3);
	v->a[26272] = 1;
	v->a[26273] = sym_comment;
	v->a[26274] = actions(736);
	v->a[26275] = 1;
	v->a[26276] = anon_sym_PIPE;
	v->a[26277] = actions(738);
	v->a[26278] = 1;
	v->a[26279] = anon_sym_BQUOTE;
	small_parse_table_1314(v);
}

void	small_parse_table_1314(t_small_parse_table_array *v)
{
	v->a[26280] = actions(746);
	v->a[26281] = 1;
	v->a[26282] = sym_file_descriptor;
	v->a[26283] = actions(992);
	v->a[26284] = 1;
	v->a[26285] = sym_variable_name;
	v->a[26286] = state(781);
	v->a[26287] = 1;
	v->a[26288] = sym_terminator;
	v->a[26289] = actions(744);
	v->a[26290] = 2;
	v->a[26291] = anon_sym_LT_LT;
	v->a[26292] = anon_sym_LT_LT_DASH;
	v->a[26293] = actions(990);
	v->a[26294] = 2;
	v->a[26295] = anon_sym_AMP_AMP;
	v->a[26296] = anon_sym_PIPE_PIPE;
	v->a[26297] = state(1030);
	v->a[26298] = 2;
	v->a[26299] = sym_variable_assignment;
	small_parse_table_1315(v);
}

/* EOF small_parse_table_262.c */
