/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_702.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3510(t_small_parse_table_array *v)
{
	v->a[70200] = anon_sym_GT_GT;
	v->a[70201] = anon_sym_AMP_GT;
	v->a[70202] = anon_sym_AMP_GT_GT;
	v->a[70203] = anon_sym_LT_AMP;
	v->a[70204] = anon_sym_GT_AMP;
	v->a[70205] = anon_sym_GT_PIPE;
	v->a[70206] = 8;
	v->a[70207] = actions(3);
	v->a[70208] = 1;
	v->a[70209] = sym_comment;
	v->a[70210] = actions(2339);
	v->a[70211] = 1;
	v->a[70212] = sym_file_descriptor;
	v->a[70213] = actions(2342);
	v->a[70214] = 1;
	v->a[70215] = sym_variable_name;
	v->a[70216] = state(1477);
	v->a[70217] = 1;
	v->a[70218] = sym_file_redirect;
	v->a[70219] = actions(2336);
	small_parse_table_3511(v);
}

void	small_parse_table_3511(t_small_parse_table_array *v)
{
	v->a[70220] = 2;
	v->a[70221] = anon_sym_LT_AMP_DASH;
	v->a[70222] = anon_sym_GT_AMP_DASH;
	v->a[70223] = state(1241);
	v->a[70224] = 2;
	v->a[70225] = sym_variable_assignment;
	v->a[70226] = aux_sym_command_repeat1;
	v->a[70227] = actions(2333);
	v->a[70228] = 8;
	v->a[70229] = anon_sym_LT;
	v->a[70230] = anon_sym_GT;
	v->a[70231] = anon_sym_GT_GT;
	v->a[70232] = anon_sym_AMP_GT;
	v->a[70233] = anon_sym_AMP_GT_GT;
	v->a[70234] = anon_sym_LT_AMP;
	v->a[70235] = anon_sym_GT_AMP;
	v->a[70236] = anon_sym_GT_PIPE;
	v->a[70237] = actions(2331);
	v->a[70238] = 9;
	v->a[70239] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3512(v);
}

void	small_parse_table_3512(t_small_parse_table_array *v)
{
	v->a[70240] = anon_sym_DOLLAR;
	v->a[70241] = anon_sym_DQUOTE;
	v->a[70242] = sym_raw_string;
	v->a[70243] = sym_number;
	v->a[70244] = anon_sym_DOLLAR_LBRACE;
	v->a[70245] = anon_sym_DOLLAR_LPAREN;
	v->a[70246] = anon_sym_BQUOTE;
	v->a[70247] = sym_word;
	v->a[70248] = 13;
	v->a[70249] = actions(3);
	v->a[70250] = 1;
	v->a[70251] = sym_comment;
	v->a[70252] = actions(807);
	v->a[70253] = 1;
	v->a[70254] = anon_sym_PIPE;
	v->a[70255] = actions(951);
	v->a[70256] = 1;
	v->a[70257] = ts_builtin_sym_end;
	v->a[70258] = actions(2075);
	v->a[70259] = 1;
	small_parse_table_3513(v);
}

void	small_parse_table_3513(t_small_parse_table_array *v)
{
	v->a[70260] = sym_file_descriptor;
	v->a[70261] = actions(2345);
	v->a[70262] = 1;
	v->a[70263] = anon_sym_SEMI_SEMI;
	v->a[70264] = actions(2347);
	v->a[70265] = 1;
	v->a[70266] = aux_sym_heredoc_redirect_token1;
	v->a[70267] = actions(2349);
	v->a[70268] = 1;
	v->a[70269] = anon_sym_AMP;
	v->a[70270] = actions(2351);
	v->a[70271] = 1;
	v->a[70272] = anon_sym_SEMI;
	v->a[70273] = actions(861);
	v->a[70274] = 2;
	v->a[70275] = anon_sym_LT_LT;
	v->a[70276] = anon_sym_LT_LT_DASH;
	v->a[70277] = actions(934);
	v->a[70278] = 2;
	v->a[70279] = anon_sym_AMP_AMP;
	small_parse_table_3514(v);
}

void	small_parse_table_3514(t_small_parse_table_array *v)
{
	v->a[70280] = anon_sym_PIPE_PIPE;
	v->a[70281] = actions(2067);
	v->a[70282] = 2;
	v->a[70283] = anon_sym_LT_AMP_DASH;
	v->a[70284] = anon_sym_GT_AMP_DASH;
	v->a[70285] = state(1289);
	v->a[70286] = 3;
	v->a[70287] = sym_file_redirect;
	v->a[70288] = sym_heredoc_redirect;
	v->a[70289] = aux_sym_redirected_statement_repeat1;
	v->a[70290] = actions(2065);
	v->a[70291] = 8;
	v->a[70292] = anon_sym_LT;
	v->a[70293] = anon_sym_GT;
	v->a[70294] = anon_sym_GT_GT;
	v->a[70295] = anon_sym_AMP_GT;
	v->a[70296] = anon_sym_AMP_GT_GT;
	v->a[70297] = anon_sym_LT_AMP;
	v->a[70298] = anon_sym_GT_AMP;
	v->a[70299] = anon_sym_GT_PIPE;
	small_parse_table_3515(v);
}

/* EOF small_parse_table_702.c */
