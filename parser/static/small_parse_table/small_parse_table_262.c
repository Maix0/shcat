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
	v->a[26200] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26201] = anon_sym_DQUOTE;
	v->a[26202] = sym_raw_string;
	v->a[26203] = sym_number;
	v->a[26204] = anon_sym_DOLLAR_LBRACE;
	v->a[26205] = anon_sym_DOLLAR_LPAREN;
	v->a[26206] = anon_sym_BQUOTE;
	v->a[26207] = sym_word;
	v->a[26208] = 9;
	v->a[26209] = actions(3);
	v->a[26210] = 1;
	v->a[26211] = sym_comment;
	v->a[26212] = actions(692);
	v->a[26213] = 1;
	v->a[26214] = anon_sym_PIPE;
	v->a[26215] = actions(702);
	v->a[26216] = 1;
	v->a[26217] = sym_file_descriptor;
	v->a[26218] = actions(721);
	v->a[26219] = 1;
	small_parse_table_1311(v);
}

void	small_parse_table_1311(t_small_parse_table_array *v)
{
	v->a[26220] = sym_variable_name;
	v->a[26221] = actions(995);
	v->a[26222] = 1;
	v->a[26223] = ts_builtin_sym_end;
	v->a[26224] = state(1047);
	v->a[26225] = 2;
	v->a[26226] = sym_variable_assignment;
	v->a[26227] = aux_sym__variable_assignments_repeat1;
	v->a[26228] = state(1086);
	v->a[26229] = 3;
	v->a[26230] = sym_file_redirect;
	v->a[26231] = sym_heredoc_redirect;
	v->a[26232] = aux_sym_redirected_statement_repeat1;
	v->a[26233] = actions(997);
	v->a[26234] = 8;
	v->a[26235] = anon_sym_SEMI_SEMI;
	v->a[26236] = anon_sym_AMP_AMP;
	v->a[26237] = anon_sym_PIPE_PIPE;
	v->a[26238] = anon_sym_LT_LT;
	v->a[26239] = anon_sym_LT_LT_DASH;
	small_parse_table_1312(v);
}

void	small_parse_table_1312(t_small_parse_table_array *v)
{
	v->a[26240] = aux_sym_heredoc_redirect_token1;
	v->a[26241] = anon_sym_AMP;
	v->a[26242] = anon_sym_SEMI;
	v->a[26243] = actions(690);
	v->a[26244] = 16;
	v->a[26245] = anon_sym_LT;
	v->a[26246] = anon_sym_GT;
	v->a[26247] = anon_sym_GT_GT;
	v->a[26248] = anon_sym_LT_AMP;
	v->a[26249] = anon_sym_GT_AMP;
	v->a[26250] = anon_sym_GT_PIPE;
	v->a[26251] = anon_sym_LT_GT;
	v->a[26252] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26253] = anon_sym_DOLLAR;
	v->a[26254] = anon_sym_DQUOTE;
	v->a[26255] = sym_raw_string;
	v->a[26256] = sym_number;
	v->a[26257] = anon_sym_DOLLAR_LBRACE;
	v->a[26258] = anon_sym_DOLLAR_LPAREN;
	v->a[26259] = anon_sym_BQUOTE;
	small_parse_table_1313(v);
}

void	small_parse_table_1313(t_small_parse_table_array *v)
{
	v->a[26260] = sym_word;
	v->a[26261] = 7;
	v->a[26262] = actions(3);
	v->a[26263] = 1;
	v->a[26264] = sym_comment;
	v->a[26265] = actions(721);
	v->a[26266] = 1;
	v->a[26267] = sym_variable_name;
	v->a[26268] = actions(921);
	v->a[26269] = 2;
	v->a[26270] = sym_file_descriptor;
	v->a[26271] = ts_builtin_sym_end;
	v->a[26272] = state(1047);
	v->a[26273] = 2;
	v->a[26274] = sym_variable_assignment;
	v->a[26275] = aux_sym__variable_assignments_repeat1;
	v->a[26276] = state(1086);
	v->a[26277] = 3;
	v->a[26278] = sym_file_redirect;
	v->a[26279] = sym_heredoc_redirect;
	small_parse_table_1314(v);
}

void	small_parse_table_1314(t_small_parse_table_array *v)
{
	v->a[26280] = aux_sym_redirected_statement_repeat1;
	v->a[26281] = actions(690);
	v->a[26282] = 9;
	v->a[26283] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26284] = anon_sym_DOLLAR;
	v->a[26285] = anon_sym_DQUOTE;
	v->a[26286] = sym_raw_string;
	v->a[26287] = sym_number;
	v->a[26288] = anon_sym_DOLLAR_LBRACE;
	v->a[26289] = anon_sym_DOLLAR_LPAREN;
	v->a[26290] = anon_sym_BQUOTE;
	v->a[26291] = sym_word;
	v->a[26292] = actions(692);
	v->a[26293] = 16;
	v->a[26294] = anon_sym_PIPE;
	v->a[26295] = anon_sym_SEMI_SEMI;
	v->a[26296] = anon_sym_AMP_AMP;
	v->a[26297] = anon_sym_PIPE_PIPE;
	v->a[26298] = anon_sym_LT;
	v->a[26299] = anon_sym_GT;
	small_parse_table_1315(v);
}

/* EOF small_parse_table_262.c */
