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
	v->a[43200] = sym_raw_string;
	v->a[43201] = sym_number;
	v->a[43202] = sym_word;
	v->a[43203] = state(1552);
	v->a[43204] = 5;
	v->a[43205] = sym_arithmetic_expansion;
	v->a[43206] = sym_string;
	v->a[43207] = sym_simple_expansion;
	v->a[43208] = sym_expansion;
	v->a[43209] = sym_command_substitution;
	v->a[43210] = actions(719);
	v->a[43211] = 16;
	v->a[43212] = anon_sym_PIPE;
	v->a[43213] = anon_sym_AMP_AMP;
	v->a[43214] = anon_sym_PIPE_PIPE;
	v->a[43215] = anon_sym_LT;
	v->a[43216] = anon_sym_GT;
	v->a[43217] = anon_sym_GT_GT;
	v->a[43218] = anon_sym_AMP_GT;
	v->a[43219] = anon_sym_AMP_GT_GT;
	small_parse_table_2161(v);
}

void	small_parse_table_2161(t_small_parse_table_array *v)
{
	v->a[43220] = anon_sym_LT_AMP;
	v->a[43221] = anon_sym_GT_AMP;
	v->a[43222] = anon_sym_GT_PIPE;
	v->a[43223] = anon_sym_LT_AMP_DASH;
	v->a[43224] = anon_sym_GT_AMP_DASH;
	v->a[43225] = anon_sym_LT_LT;
	v->a[43226] = anon_sym_LT_LT_DASH;
	v->a[43227] = aux_sym_heredoc_redirect_token1;
	v->a[43228] = 10;
	v->a[43229] = actions(3);
	v->a[43230] = 1;
	v->a[43231] = sym_comment;
	v->a[43232] = actions(807);
	v->a[43233] = 1;
	v->a[43234] = anon_sym_PIPE;
	v->a[43235] = actions(811);
	v->a[43236] = 1;
	v->a[43237] = sym_file_descriptor;
	v->a[43238] = actions(1502);
	v->a[43239] = 1;
	small_parse_table_2162(v);
}

void	small_parse_table_2162(t_small_parse_table_array *v)
{
	v->a[43240] = aux_sym_heredoc_redirect_token1;
	v->a[43241] = actions(1504);
	v->a[43242] = 1;
	v->a[43243] = sym_variable_name;
	v->a[43244] = actions(861);
	v->a[43245] = 2;
	v->a[43246] = anon_sym_LT_LT;
	v->a[43247] = anon_sym_LT_LT_DASH;
	v->a[43248] = actions(1500);
	v->a[43249] = 2;
	v->a[43250] = anon_sym_AMP_AMP;
	v->a[43251] = anon_sym_PIPE_PIPE;
	v->a[43252] = state(1544);
	v->a[43253] = 2;
	v->a[43254] = sym_variable_assignment;
	v->a[43255] = aux_sym__variable_assignments_repeat1;
	v->a[43256] = state(1546);
	v->a[43257] = 3;
	v->a[43258] = sym_file_redirect;
	v->a[43259] = sym_heredoc_redirect;
	small_parse_table_2163(v);
}

void	small_parse_table_2163(t_small_parse_table_array *v)
{
	v->a[43260] = aux_sym_redirected_statement_repeat1;
	v->a[43261] = actions(805);
	v->a[43262] = 19;
	v->a[43263] = anon_sym_LT;
	v->a[43264] = anon_sym_GT;
	v->a[43265] = anon_sym_GT_GT;
	v->a[43266] = anon_sym_AMP_GT;
	v->a[43267] = anon_sym_AMP_GT_GT;
	v->a[43268] = anon_sym_LT_AMP;
	v->a[43269] = anon_sym_GT_AMP;
	v->a[43270] = anon_sym_GT_PIPE;
	v->a[43271] = anon_sym_LT_AMP_DASH;
	v->a[43272] = anon_sym_GT_AMP_DASH;
	v->a[43273] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43274] = anon_sym_DOLLAR;
	v->a[43275] = anon_sym_DQUOTE;
	v->a[43276] = sym_raw_string;
	v->a[43277] = sym_number;
	v->a[43278] = anon_sym_DOLLAR_LBRACE;
	v->a[43279] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2164(v);
}

void	small_parse_table_2164(t_small_parse_table_array *v)
{
	v->a[43280] = anon_sym_BQUOTE;
	v->a[43281] = sym_word;
	v->a[43282] = 3;
	v->a[43283] = actions(3);
	v->a[43284] = 1;
	v->a[43285] = sym_comment;
	v->a[43286] = actions(1124);
	v->a[43287] = 2;
	v->a[43288] = sym_file_descriptor;
	v->a[43289] = sym__concat;
	v->a[43290] = actions(1122);
	v->a[43291] = 30;
	v->a[43292] = anon_sym_PIPE;
	v->a[43293] = anon_sym_RPAREN;
	v->a[43294] = anon_sym_SEMI_SEMI;
	v->a[43295] = anon_sym_AMP_AMP;
	v->a[43296] = anon_sym_PIPE_PIPE;
	v->a[43297] = anon_sym_LT;
	v->a[43298] = anon_sym_GT;
	v->a[43299] = anon_sym_GT_GT;
	small_parse_table_2165(v);
}

/* EOF small_parse_table_432.c */
