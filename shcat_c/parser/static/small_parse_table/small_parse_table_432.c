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
	v->a[43200] = sym_number;
	v->a[43201] = sym_simple_expansion;
	v->a[43202] = sym_expansion;
	v->a[43203] = sym_command_substitution;
	v->a[43204] = sym_process_substitution;
	v->a[43205] = actions(2074);
	v->a[43206] = 10;
	v->a[43207] = sym_file_descriptor;
	v->a[43208] = anon_sym_PIPE_PIPE;
	v->a[43209] = anon_sym_AMP_AMP;
	v->a[43210] = anon_sym_GT_GT;
	v->a[43211] = anon_sym_PIPE_AMP;
	v->a[43212] = anon_sym_AMP_GT_GT;
	v->a[43213] = anon_sym_GT_PIPE;
	v->a[43214] = anon_sym_LT_AMP_DASH;
	v->a[43215] = anon_sym_GT_AMP_DASH;
	v->a[43216] = anon_sym_LT_LT_DASH;
	v->a[43217] = 3;
	v->a[43218] = actions(3);
	v->a[43219] = 1;
	small_parse_table_2161(v);
}

void	small_parse_table_2161(t_small_parse_table_array *v)
{
	v->a[43220] = sym_comment;
	v->a[43221] = actions(1338);
	v->a[43222] = 6;
	v->a[43223] = sym_file_descriptor;
	v->a[43224] = sym__concat;
	v->a[43225] = sym_test_operator;
	v->a[43226] = sym__bare_dollar;
	v->a[43227] = sym__brace_start;
	v->a[43228] = aux_sym_heredoc_redirect_token1;
	v->a[43229] = actions(1336);
	v->a[43230] = 42;
	v->a[43231] = anon_sym_LPAREN_LPAREN;
	v->a[43232] = anon_sym_SEMI;
	v->a[43233] = anon_sym_PIPE_PIPE;
	v->a[43234] = anon_sym_AMP_AMP;
	v->a[43235] = anon_sym_PIPE;
	v->a[43236] = anon_sym_AMP;
	v->a[43237] = anon_sym_EQ_EQ;
	v->a[43238] = anon_sym_LT;
	v->a[43239] = anon_sym_GT;
	small_parse_table_2162(v);
}

void	small_parse_table_2162(t_small_parse_table_array *v)
{
	v->a[43240] = anon_sym_LT_LT;
	v->a[43241] = anon_sym_GT_GT;
	v->a[43242] = anon_sym_LPAREN;
	v->a[43243] = anon_sym_RPAREN;
	v->a[43244] = anon_sym_SEMI_SEMI;
	v->a[43245] = anon_sym_PIPE_AMP;
	v->a[43246] = anon_sym_EQ_TILDE;
	v->a[43247] = anon_sym_AMP_GT;
	v->a[43248] = anon_sym_AMP_GT_GT;
	v->a[43249] = anon_sym_LT_AMP;
	v->a[43250] = anon_sym_GT_AMP;
	v->a[43251] = anon_sym_GT_PIPE;
	v->a[43252] = anon_sym_LT_AMP_DASH;
	v->a[43253] = anon_sym_GT_AMP_DASH;
	v->a[43254] = anon_sym_LT_LT_DASH;
	v->a[43255] = anon_sym_LT_LT_LT;
	v->a[43256] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43257] = anon_sym_DOLLAR_LBRACK;
	v->a[43258] = aux_sym_concatenation_token1;
	v->a[43259] = anon_sym_DOLLAR;
	small_parse_table_2163(v);
}

void	small_parse_table_2163(t_small_parse_table_array *v)
{
	v->a[43260] = sym__special_character;
	v->a[43261] = anon_sym_DQUOTE;
	v->a[43262] = sym_raw_string;
	v->a[43263] = sym_ansi_c_string;
	v->a[43264] = aux_sym_number_token1;
	v->a[43265] = aux_sym_number_token2;
	v->a[43266] = anon_sym_DOLLAR_LBRACE;
	v->a[43267] = anon_sym_DOLLAR_LPAREN;
	v->a[43268] = anon_sym_BQUOTE;
	v->a[43269] = anon_sym_DOLLAR_BQUOTE;
	v->a[43270] = anon_sym_LT_LPAREN;
	v->a[43271] = anon_sym_GT_LPAREN;
	v->a[43272] = sym_word;
	v->a[43273] = 3;
	v->a[43274] = actions(3);
	v->a[43275] = 1;
	v->a[43276] = sym_comment;
	v->a[43277] = actions(1330);
	v->a[43278] = 6;
	v->a[43279] = sym_file_descriptor;
	small_parse_table_2164(v);
}

void	small_parse_table_2164(t_small_parse_table_array *v)
{
	v->a[43280] = sym__concat;
	v->a[43281] = sym_test_operator;
	v->a[43282] = sym__bare_dollar;
	v->a[43283] = sym__brace_start;
	v->a[43284] = aux_sym_heredoc_redirect_token1;
	v->a[43285] = actions(1328);
	v->a[43286] = 42;
	v->a[43287] = anon_sym_LPAREN_LPAREN;
	v->a[43288] = anon_sym_SEMI;
	v->a[43289] = anon_sym_PIPE_PIPE;
	v->a[43290] = anon_sym_AMP_AMP;
	v->a[43291] = anon_sym_PIPE;
	v->a[43292] = anon_sym_AMP;
	v->a[43293] = anon_sym_EQ_EQ;
	v->a[43294] = anon_sym_LT;
	v->a[43295] = anon_sym_GT;
	v->a[43296] = anon_sym_LT_LT;
	v->a[43297] = anon_sym_GT_GT;
	v->a[43298] = anon_sym_LPAREN;
	v->a[43299] = anon_sym_RPAREN;
	small_parse_table_2165(v);
}

/* EOF small_parse_table_432.c */
