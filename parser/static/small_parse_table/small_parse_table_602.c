/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_602.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3010(t_small_parse_table_array *v)
{
	v->a[60200] = anon_sym_GT;
	v->a[60201] = anon_sym_GT_GT;
	v->a[60202] = anon_sym_LT_AMP;
	v->a[60203] = anon_sym_GT_AMP;
	v->a[60204] = anon_sym_GT_PIPE;
	v->a[60205] = 12;
	v->a[60206] = actions(3);
	v->a[60207] = 1;
	v->a[60208] = sym_comment;
	v->a[60209] = actions(682);
	v->a[60210] = 1;
	v->a[60211] = anon_sym_PIPE;
	v->a[60212] = actions(779);
	v->a[60213] = 1;
	v->a[60214] = ts_builtin_sym_end;
	v->a[60215] = actions(2029);
	v->a[60216] = 1;
	v->a[60217] = aux_sym_heredoc_redirect_token1;
	v->a[60218] = actions(2031);
	v->a[60219] = 1;
	small_parse_table_3011(v);
}

void	small_parse_table_3011(t_small_parse_table_array *v)
{
	v->a[60220] = sym_file_descriptor;
	v->a[60221] = state(803);
	v->a[60222] = 1;
	v->a[60223] = sym_terminator;
	v->a[60224] = actions(754);
	v->a[60225] = 2;
	v->a[60226] = anon_sym_LT_LT;
	v->a[60227] = anon_sym_LT_LT_DASH;
	v->a[60228] = actions(783);
	v->a[60229] = 2;
	v->a[60230] = anon_sym_AMP_AMP;
	v->a[60231] = anon_sym_PIPE_PIPE;
	v->a[60232] = actions(2027);
	v->a[60233] = 2;
	v->a[60234] = anon_sym_LT_AMP_DASH;
	v->a[60235] = anon_sym_GT_AMP_DASH;
	v->a[60236] = actions(781);
	v->a[60237] = 3;
	v->a[60238] = anon_sym_SEMI_SEMI;
	v->a[60239] = anon_sym_AMP;
	small_parse_table_3012(v);
}

void	small_parse_table_3012(t_small_parse_table_array *v)
{
	v->a[60240] = anon_sym_SEMI;
	v->a[60241] = state(1160);
	v->a[60242] = 3;
	v->a[60243] = sym_file_redirect;
	v->a[60244] = sym_heredoc_redirect;
	v->a[60245] = aux_sym_redirected_statement_repeat1;
	v->a[60246] = actions(2025);
	v->a[60247] = 6;
	v->a[60248] = anon_sym_LT;
	v->a[60249] = anon_sym_GT;
	v->a[60250] = anon_sym_GT_GT;
	v->a[60251] = anon_sym_LT_AMP;
	v->a[60252] = anon_sym_GT_AMP;
	v->a[60253] = anon_sym_GT_PIPE;
	v->a[60254] = 3;
	v->a[60255] = actions(3);
	v->a[60256] = 1;
	v->a[60257] = sym_comment;
	v->a[60258] = actions(1005);
	v->a[60259] = 2;
	small_parse_table_3013(v);
}

void	small_parse_table_3013(t_small_parse_table_array *v)
{
	v->a[60260] = sym_file_descriptor;
	v->a[60261] = sym__concat;
	v->a[60262] = actions(1003);
	v->a[60263] = 21;
	v->a[60264] = anon_sym_AMP_AMP;
	v->a[60265] = anon_sym_PIPE_PIPE;
	v->a[60266] = anon_sym_LT;
	v->a[60267] = anon_sym_GT;
	v->a[60268] = anon_sym_GT_GT;
	v->a[60269] = anon_sym_LT_AMP;
	v->a[60270] = anon_sym_GT_AMP;
	v->a[60271] = anon_sym_GT_PIPE;
	v->a[60272] = anon_sym_LT_AMP_DASH;
	v->a[60273] = anon_sym_GT_AMP_DASH;
	v->a[60274] = aux_sym_heredoc_redirect_token1;
	v->a[60275] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60276] = aux_sym_concatenation_token1;
	v->a[60277] = anon_sym_DOLLAR;
	v->a[60278] = anon_sym_DQUOTE;
	v->a[60279] = sym_raw_string;
	small_parse_table_3014(v);
}

void	small_parse_table_3014(t_small_parse_table_array *v)
{
	v->a[60280] = sym_number;
	v->a[60281] = anon_sym_DOLLAR_LBRACE;
	v->a[60282] = anon_sym_DOLLAR_LPAREN;
	v->a[60283] = anon_sym_BQUOTE;
	v->a[60284] = sym_word;
	v->a[60285] = 12;
	v->a[60286] = actions(3);
	v->a[60287] = 1;
	v->a[60288] = sym_comment;
	v->a[60289] = actions(682);
	v->a[60290] = 1;
	v->a[60291] = anon_sym_PIPE;
	v->a[60292] = actions(779);
	v->a[60293] = 1;
	v->a[60294] = ts_builtin_sym_end;
	v->a[60295] = actions(2029);
	v->a[60296] = 1;
	v->a[60297] = aux_sym_heredoc_redirect_token1;
	v->a[60298] = actions(2031);
	v->a[60299] = 1;
	small_parse_table_3015(v);
}

/* EOF small_parse_table_602.c */
