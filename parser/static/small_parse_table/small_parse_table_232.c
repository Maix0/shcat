/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_232.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1160(t_small_parse_table_array *v)
{
	v->a[23200] = anon_sym_DQUOTE;
	v->a[23201] = sym_raw_string;
	v->a[23202] = sym_number;
	v->a[23203] = anon_sym_DOLLAR_LBRACE;
	v->a[23204] = anon_sym_DOLLAR_LPAREN;
	v->a[23205] = anon_sym_BQUOTE;
	v->a[23206] = sym_word;
	v->a[23207] = 4;
	v->a[23208] = actions(3);
	v->a[23209] = 1;
	v->a[23210] = sym_comment;
	v->a[23211] = actions(1044);
	v->a[23212] = 1;
	v->a[23213] = sym_variable_name;
	v->a[23214] = actions(1042);
	v->a[23215] = 2;
	v->a[23216] = anon_sym_esac;
	v->a[23217] = anon_sym_SEMI_SEMI;
	v->a[23218] = actions(1040);
	v->a[23219] = 20;
	small_parse_table_1161(v);
}

void	small_parse_table_1161(t_small_parse_table_array *v)
{
	v->a[23220] = anon_sym_for;
	v->a[23221] = anon_sym_while;
	v->a[23222] = anon_sym_until;
	v->a[23223] = anon_sym_if;
	v->a[23224] = anon_sym_case;
	v->a[23225] = anon_sym_LPAREN;
	v->a[23226] = anon_sym_LBRACE;
	v->a[23227] = anon_sym_BANG;
	v->a[23228] = anon_sym_LT;
	v->a[23229] = anon_sym_GT;
	v->a[23230] = anon_sym_GT_GT;
	v->a[23231] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23232] = anon_sym_DOLLAR;
	v->a[23233] = anon_sym_DQUOTE;
	v->a[23234] = sym_raw_string;
	v->a[23235] = sym_number;
	v->a[23236] = anon_sym_DOLLAR_LBRACE;
	v->a[23237] = anon_sym_DOLLAR_LPAREN;
	v->a[23238] = anon_sym_BQUOTE;
	v->a[23239] = sym_word;
	small_parse_table_1162(v);
}

void	small_parse_table_1162(t_small_parse_table_array *v)
{
	v->a[23240] = 3;
	v->a[23241] = actions(3);
	v->a[23242] = 1;
	v->a[23243] = sym_comment;
	v->a[23244] = actions(1050);
	v->a[23245] = 3;
	v->a[23246] = sym__concat;
	v->a[23247] = sym__bare_dollar;
	v->a[23248] = ts_builtin_sym_end;
	v->a[23249] = actions(1052);
	v->a[23250] = 20;
	v->a[23251] = anon_sym_PIPE;
	v->a[23252] = anon_sym_SEMI_SEMI;
	v->a[23253] = anon_sym_AMP_AMP;
	v->a[23254] = anon_sym_PIPE_PIPE;
	v->a[23255] = anon_sym_LT;
	v->a[23256] = anon_sym_GT;
	v->a[23257] = anon_sym_GT_GT;
	v->a[23258] = anon_sym_LT_LT;
	v->a[23259] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1163(v);
}

void	small_parse_table_1163(t_small_parse_table_array *v)
{
	v->a[23260] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23261] = aux_sym_concatenation_token1;
	v->a[23262] = anon_sym_DOLLAR;
	v->a[23263] = anon_sym_DQUOTE;
	v->a[23264] = sym_raw_string;
	v->a[23265] = sym_number;
	v->a[23266] = anon_sym_DOLLAR_LBRACE;
	v->a[23267] = anon_sym_DOLLAR_LPAREN;
	v->a[23268] = anon_sym_BQUOTE;
	v->a[23269] = sym_word;
	v->a[23270] = anon_sym_SEMI;
	v->a[23271] = 3;
	v->a[23272] = actions(3);
	v->a[23273] = 1;
	v->a[23274] = sym_comment;
	v->a[23275] = actions(1060);
	v->a[23276] = 2;
	v->a[23277] = sym__concat;
	v->a[23278] = sym__bare_dollar;
	v->a[23279] = actions(1058);
	small_parse_table_1164(v);
}

void	small_parse_table_1164(t_small_parse_table_array *v)
{
	v->a[23280] = 21;
	v->a[23281] = anon_sym_esac;
	v->a[23282] = anon_sym_PIPE;
	v->a[23283] = anon_sym_SEMI_SEMI;
	v->a[23284] = anon_sym_AMP_AMP;
	v->a[23285] = anon_sym_PIPE_PIPE;
	v->a[23286] = anon_sym_LT;
	v->a[23287] = anon_sym_GT;
	v->a[23288] = anon_sym_GT_GT;
	v->a[23289] = anon_sym_LT_LT;
	v->a[23290] = aux_sym_heredoc_redirect_token1;
	v->a[23291] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23292] = aux_sym_concatenation_token1;
	v->a[23293] = anon_sym_DOLLAR;
	v->a[23294] = anon_sym_DQUOTE;
	v->a[23295] = sym_raw_string;
	v->a[23296] = sym_number;
	v->a[23297] = anon_sym_DOLLAR_LBRACE;
	v->a[23298] = anon_sym_DOLLAR_LPAREN;
	v->a[23299] = anon_sym_BQUOTE;
	small_parse_table_1165(v);
}

/* EOF small_parse_table_232.c */
