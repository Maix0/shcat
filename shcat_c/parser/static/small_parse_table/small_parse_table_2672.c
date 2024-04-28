/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2672.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13360(t_small_parse_table_array *v)
{
	v->a[267200] = sym__c_expression_not_assignment;
	v->a[267201] = sym__c_parenthesized_expression;
	v->a[267202] = sym_string;
	v->a[267203] = sym_number;
	v->a[267204] = sym_simple_expansion;
	v->a[267205] = sym_expansion;
	v->a[267206] = sym_command_substitution;
	v->a[267207] = 3;
	v->a[267208] = actions(3);
	v->a[267209] = 1;
	v->a[267210] = sym_comment;
	v->a[267211] = actions(12187);
	v->a[267212] = 3;
	v->a[267213] = sym_file_descriptor;
	v->a[267214] = ts_builtin_sym_end;
	v->a[267215] = aux_sym_heredoc_redirect_token1;
	v->a[267216] = actions(12189);
	v->a[267217] = 21;
	v->a[267218] = anon_sym_SEMI;
	v->a[267219] = anon_sym_PIPE_PIPE;
	small_parse_table_13361(v);
}

void	small_parse_table_13361(t_small_parse_table_array *v)
{
	v->a[267220] = anon_sym_AMP_AMP;
	v->a[267221] = anon_sym_PIPE;
	v->a[267222] = anon_sym_AMP;
	v->a[267223] = anon_sym_LT;
	v->a[267224] = anon_sym_GT;
	v->a[267225] = anon_sym_LT_LT;
	v->a[267226] = anon_sym_GT_GT;
	v->a[267227] = anon_sym_RPAREN;
	v->a[267228] = anon_sym_SEMI_SEMI;
	v->a[267229] = anon_sym_PIPE_AMP;
	v->a[267230] = anon_sym_AMP_GT;
	v->a[267231] = anon_sym_AMP_GT_GT;
	v->a[267232] = anon_sym_LT_AMP;
	v->a[267233] = anon_sym_GT_AMP;
	v->a[267234] = anon_sym_GT_PIPE;
	v->a[267235] = anon_sym_LT_AMP_DASH;
	v->a[267236] = anon_sym_GT_AMP_DASH;
	v->a[267237] = anon_sym_LT_LT_DASH;
	v->a[267238] = anon_sym_BQUOTE;
	v->a[267239] = 3;
	small_parse_table_13362(v);
}

void	small_parse_table_13362(t_small_parse_table_array *v)
{
	v->a[267240] = actions(3);
	v->a[267241] = 1;
	v->a[267242] = sym_comment;
	v->a[267243] = actions(4372);
	v->a[267244] = 2;
	v->a[267245] = sym_file_descriptor;
	v->a[267246] = aux_sym_heredoc_redirect_token1;
	v->a[267247] = actions(4370);
	v->a[267248] = 22;
	v->a[267249] = anon_sym_SEMI;
	v->a[267250] = anon_sym_PIPE_PIPE;
	v->a[267251] = anon_sym_AMP_AMP;
	v->a[267252] = anon_sym_PIPE;
	v->a[267253] = anon_sym_AMP;
	v->a[267254] = anon_sym_LT;
	v->a[267255] = anon_sym_GT;
	v->a[267256] = anon_sym_LT_LT;
	v->a[267257] = anon_sym_GT_GT;
	v->a[267258] = anon_sym_SEMI_SEMI;
	v->a[267259] = anon_sym_SEMI_AMP;
	small_parse_table_13363(v);
}

void	small_parse_table_13363(t_small_parse_table_array *v)
{
	v->a[267260] = anon_sym_SEMI_SEMI_AMP;
	v->a[267261] = anon_sym_PIPE_AMP;
	v->a[267262] = anon_sym_AMP_GT;
	v->a[267263] = anon_sym_AMP_GT_GT;
	v->a[267264] = anon_sym_LT_AMP;
	v->a[267265] = anon_sym_GT_AMP;
	v->a[267266] = anon_sym_GT_PIPE;
	v->a[267267] = anon_sym_LT_AMP_DASH;
	v->a[267268] = anon_sym_GT_AMP_DASH;
	v->a[267269] = anon_sym_LT_LT_DASH;
	v->a[267270] = anon_sym_LT_LT_LT;
	v->a[267271] = 3;
	v->a[267272] = actions(3);
	v->a[267273] = 1;
	v->a[267274] = sym_comment;
	v->a[267275] = actions(12121);
	v->a[267276] = 2;
	v->a[267277] = sym_file_descriptor;
	v->a[267278] = aux_sym_heredoc_redirect_token1;
	v->a[267279] = actions(12123);
	small_parse_table_13364(v);
}

void	small_parse_table_13364(t_small_parse_table_array *v)
{
	v->a[267280] = 22;
	v->a[267281] = anon_sym_SEMI;
	v->a[267282] = anon_sym_PIPE_PIPE;
	v->a[267283] = anon_sym_AMP_AMP;
	v->a[267284] = anon_sym_PIPE;
	v->a[267285] = anon_sym_AMP;
	v->a[267286] = anon_sym_LT;
	v->a[267287] = anon_sym_GT;
	v->a[267288] = anon_sym_LT_LT;
	v->a[267289] = anon_sym_GT_GT;
	v->a[267290] = anon_sym_esac;
	v->a[267291] = anon_sym_SEMI_SEMI;
	v->a[267292] = anon_sym_SEMI_AMP;
	v->a[267293] = anon_sym_SEMI_SEMI_AMP;
	v->a[267294] = anon_sym_PIPE_AMP;
	v->a[267295] = anon_sym_AMP_GT;
	v->a[267296] = anon_sym_AMP_GT_GT;
	v->a[267297] = anon_sym_LT_AMP;
	v->a[267298] = anon_sym_GT_AMP;
	v->a[267299] = anon_sym_GT_PIPE;
	small_parse_table_13365(v);
}

/* EOF small_parse_table_2672.c */
