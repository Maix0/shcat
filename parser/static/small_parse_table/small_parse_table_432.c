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
	v->a[43200] = state(302);
	v->a[43201] = 1;
	v->a[43202] = sym_terminator;
	v->a[43203] = actions(582);
	v->a[43204] = 2;
	v->a[43205] = anon_sym_AMP_AMP;
	v->a[43206] = anon_sym_PIPE_PIPE;
	v->a[43207] = actions(591);
	v->a[43208] = 2;
	v->a[43209] = anon_sym_esac;
	v->a[43210] = anon_sym_SEMI_SEMI;
	v->a[43211] = actions(1876);
	v->a[43212] = 3;
	v->a[43213] = anon_sym_LT;
	v->a[43214] = anon_sym_GT;
	v->a[43215] = anon_sym_GT_GT;
	v->a[43216] = state(971);
	v->a[43217] = 3;
	v->a[43218] = sym_file_redirect;
	v->a[43219] = sym_heredoc_redirect;
	small_parse_table_2161(v);
}

void	small_parse_table_2161(t_small_parse_table_array *v)
{
	v->a[43220] = aux_sym_redirected_statement_repeat1;
	v->a[43221] = 10;
	v->a[43222] = actions(3);
	v->a[43223] = 1;
	v->a[43224] = sym_comment;
	v->a[43225] = actions(580);
	v->a[43226] = 1;
	v->a[43227] = anon_sym_PIPE;
	v->a[43228] = actions(591);
	v->a[43229] = 1;
	v->a[43230] = anon_sym_RPAREN;
	v->a[43231] = actions(597);
	v->a[43232] = 1;
	v->a[43233] = anon_sym_LT_LT;
	v->a[43234] = actions(1870);
	v->a[43235] = 1;
	v->a[43236] = aux_sym_heredoc_redirect_token1;
	v->a[43237] = state(384);
	v->a[43238] = 1;
	v->a[43239] = sym_terminator;
	small_parse_table_2162(v);
}

void	small_parse_table_2162(t_small_parse_table_array *v)
{
	v->a[43240] = actions(593);
	v->a[43241] = 2;
	v->a[43242] = anon_sym_SEMI_SEMI;
	v->a[43243] = anon_sym_SEMI;
	v->a[43244] = actions(595);
	v->a[43245] = 2;
	v->a[43246] = anon_sym_AMP_AMP;
	v->a[43247] = anon_sym_PIPE_PIPE;
	v->a[43248] = actions(1868);
	v->a[43249] = 3;
	v->a[43250] = anon_sym_LT;
	v->a[43251] = anon_sym_GT;
	v->a[43252] = anon_sym_GT_GT;
	v->a[43253] = state(916);
	v->a[43254] = 3;
	v->a[43255] = sym_file_redirect;
	v->a[43256] = sym_heredoc_redirect;
	v->a[43257] = aux_sym_redirected_statement_repeat1;
	v->a[43258] = 6;
	v->a[43259] = actions(3);
	small_parse_table_2163(v);
}

void	small_parse_table_2163(t_small_parse_table_array *v)
{
	v->a[43260] = 1;
	v->a[43261] = sym_comment;
	v->a[43262] = actions(1884);
	v->a[43263] = 1;
	v->a[43264] = aux_sym_concatenation_token1;
	v->a[43265] = actions(1912);
	v->a[43266] = 1;
	v->a[43267] = sym__concat;
	v->a[43268] = state(892);
	v->a[43269] = 1;
	v->a[43270] = aux_sym_concatenation_repeat1;
	v->a[43271] = actions(921);
	v->a[43272] = 2;
	v->a[43273] = sym_variable_name;
	v->a[43274] = aux_sym_heredoc_redirect_token1;
	v->a[43275] = actions(923);
	v->a[43276] = 10;
	v->a[43277] = anon_sym_esac;
	v->a[43278] = anon_sym_PIPE;
	v->a[43279] = anon_sym_SEMI_SEMI;
	small_parse_table_2164(v);
}

void	small_parse_table_2164(t_small_parse_table_array *v)
{
	v->a[43280] = anon_sym_AMP_AMP;
	v->a[43281] = anon_sym_PIPE_PIPE;
	v->a[43282] = anon_sym_LT;
	v->a[43283] = anon_sym_GT;
	v->a[43284] = anon_sym_GT_GT;
	v->a[43285] = anon_sym_LT_LT;
	v->a[43286] = anon_sym_SEMI;
	v->a[43287] = 6;
	v->a[43288] = actions(3);
	v->a[43289] = 1;
	v->a[43290] = sym_comment;
	v->a[43291] = actions(1914);
	v->a[43292] = 1;
	v->a[43293] = aux_sym_concatenation_token1;
	v->a[43294] = actions(1917);
	v->a[43295] = 1;
	v->a[43296] = sym__concat;
	v->a[43297] = state(892);
	v->a[43298] = 1;
	v->a[43299] = aux_sym_concatenation_repeat1;
	small_parse_table_2165(v);
}

/* EOF small_parse_table_432.c */
