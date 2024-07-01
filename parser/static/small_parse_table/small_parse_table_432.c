/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_432.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2160(t_small_parse_table_array *v)
{
	v->a[43200] = actions(1035);
	v->a[43201] = 27;
	v->a[43202] = anon_sym_PIPE;
	v->a[43203] = anon_sym_SEMI_SEMI;
	v->a[43204] = anon_sym_AMP_AMP;
	v->a[43205] = anon_sym_PIPE_PIPE;
	v->a[43206] = anon_sym_LT;
	v->a[43207] = anon_sym_GT;
	v->a[43208] = anon_sym_GT_GT;
	v->a[43209] = anon_sym_LT_AMP;
	v->a[43210] = anon_sym_GT_AMP;
	v->a[43211] = anon_sym_GT_PIPE;
	v->a[43212] = anon_sym_LT_AMP_DASH;
	v->a[43213] = anon_sym_GT_AMP_DASH;
	v->a[43214] = anon_sym_LT_LT;
	v->a[43215] = anon_sym_LT_LT_DASH;
	v->a[43216] = aux_sym_heredoc_redirect_token1;
	v->a[43217] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43218] = anon_sym_AMP;
	v->a[43219] = aux_sym_concatenation_token1;
	small_parse_table_2161(v);
}

void	small_parse_table_2161(t_small_parse_table_array *v)
{
	v->a[43220] = anon_sym_DOLLAR;
	v->a[43221] = anon_sym_DQUOTE;
	v->a[43222] = sym_raw_string;
	v->a[43223] = sym_number;
	v->a[43224] = anon_sym_DOLLAR_LBRACE;
	v->a[43225] = anon_sym_DOLLAR_LPAREN;
	v->a[43226] = anon_sym_BQUOTE;
	v->a[43227] = sym_word;
	v->a[43228] = anon_sym_SEMI;
	v->a[43229] = 3;
	v->a[43230] = actions(3);
	v->a[43231] = 1;
	v->a[43232] = sym_comment;
	v->a[43233] = actions(1041);
	v->a[43234] = 3;
	v->a[43235] = sym_file_descriptor;
	v->a[43236] = sym__concat;
	v->a[43237] = ts_builtin_sym_end;
	v->a[43238] = actions(1039);
	v->a[43239] = 27;
	small_parse_table_2162(v);
}

void	small_parse_table_2162(t_small_parse_table_array *v)
{
	v->a[43240] = anon_sym_PIPE;
	v->a[43241] = anon_sym_SEMI_SEMI;
	v->a[43242] = anon_sym_AMP_AMP;
	v->a[43243] = anon_sym_PIPE_PIPE;
	v->a[43244] = anon_sym_LT;
	v->a[43245] = anon_sym_GT;
	v->a[43246] = anon_sym_GT_GT;
	v->a[43247] = anon_sym_LT_AMP;
	v->a[43248] = anon_sym_GT_AMP;
	v->a[43249] = anon_sym_GT_PIPE;
	v->a[43250] = anon_sym_LT_AMP_DASH;
	v->a[43251] = anon_sym_GT_AMP_DASH;
	v->a[43252] = anon_sym_LT_LT;
	v->a[43253] = anon_sym_LT_LT_DASH;
	v->a[43254] = aux_sym_heredoc_redirect_token1;
	v->a[43255] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43256] = anon_sym_AMP;
	v->a[43257] = aux_sym_concatenation_token1;
	v->a[43258] = anon_sym_DOLLAR;
	v->a[43259] = anon_sym_DQUOTE;
	small_parse_table_2163(v);
}

void	small_parse_table_2163(t_small_parse_table_array *v)
{
	v->a[43260] = sym_raw_string;
	v->a[43261] = sym_number;
	v->a[43262] = anon_sym_DOLLAR_LBRACE;
	v->a[43263] = anon_sym_DOLLAR_LPAREN;
	v->a[43264] = anon_sym_BQUOTE;
	v->a[43265] = sym_word;
	v->a[43266] = anon_sym_SEMI;
	v->a[43267] = 10;
	v->a[43268] = actions(3);
	v->a[43269] = 1;
	v->a[43270] = sym_comment;
	v->a[43271] = actions(682);
	v->a[43272] = 1;
	v->a[43273] = anon_sym_PIPE;
	v->a[43274] = actions(690);
	v->a[43275] = 1;
	v->a[43276] = sym_file_descriptor;
	v->a[43277] = actions(1466);
	v->a[43278] = 1;
	v->a[43279] = sym_variable_name;
	small_parse_table_2164(v);
}

void	small_parse_table_2164(t_small_parse_table_array *v)
{
	v->a[43280] = actions(1498);
	v->a[43281] = 1;
	v->a[43282] = aux_sym_heredoc_redirect_token1;
	v->a[43283] = actions(754);
	v->a[43284] = 2;
	v->a[43285] = anon_sym_LT_LT;
	v->a[43286] = anon_sym_LT_LT_DASH;
	v->a[43287] = actions(1496);
	v->a[43288] = 2;
	v->a[43289] = anon_sym_AMP_AMP;
	v->a[43290] = anon_sym_PIPE_PIPE;
	v->a[43291] = state(1407);
	v->a[43292] = 2;
	v->a[43293] = sym_variable_assignment;
	v->a[43294] = aux_sym__variable_assignments_repeat1;
	v->a[43295] = state(1408);
	v->a[43296] = 3;
	v->a[43297] = sym_file_redirect;
	v->a[43298] = sym_heredoc_redirect;
	v->a[43299] = aux_sym_redirected_statement_repeat1;
	small_parse_table_2165(v);
}

/* EOF small_parse_table_432.c */
