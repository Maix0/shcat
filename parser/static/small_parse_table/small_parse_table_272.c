/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_272.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1360(t_small_parse_table_array *v)
{
	v->a[27200] = actions(1097);
	v->a[27201] = 1;
	v->a[27202] = sym__concat;
	v->a[27203] = state(336);
	v->a[27204] = 1;
	v->a[27205] = aux_sym_concatenation_repeat1;
	v->a[27206] = actions(1001);
	v->a[27207] = 2;
	v->a[27208] = sym__bare_dollar;
	v->a[27209] = ts_builtin_sym_end;
	v->a[27210] = actions(997);
	v->a[27211] = 24;
	v->a[27212] = anon_sym_PIPE;
	v->a[27213] = anon_sym_SEMI_SEMI;
	v->a[27214] = anon_sym_AMP_AMP;
	v->a[27215] = anon_sym_PIPE_PIPE;
	v->a[27216] = anon_sym_LT;
	v->a[27217] = anon_sym_GT;
	v->a[27218] = anon_sym_GT_GT;
	v->a[27219] = anon_sym_LT_AMP;
	small_parse_table_1361(v);
}

void	small_parse_table_1361(t_small_parse_table_array *v)
{
	v->a[27220] = anon_sym_GT_AMP;
	v->a[27221] = anon_sym_GT_PIPE;
	v->a[27222] = anon_sym_LT_GT;
	v->a[27223] = anon_sym_LT_LT;
	v->a[27224] = anon_sym_LT_LT_DASH;
	v->a[27225] = aux_sym_heredoc_redirect_token1;
	v->a[27226] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27227] = anon_sym_DOLLAR;
	v->a[27228] = anon_sym_DQUOTE;
	v->a[27229] = sym_raw_string;
	v->a[27230] = sym_number;
	v->a[27231] = anon_sym_DOLLAR_LBRACE;
	v->a[27232] = anon_sym_DOLLAR_LPAREN;
	v->a[27233] = anon_sym_BQUOTE;
	v->a[27234] = sym_word;
	v->a[27235] = anon_sym_SEMI;
	v->a[27236] = 6;
	v->a[27237] = actions(3);
	v->a[27238] = 1;
	v->a[27239] = sym_comment;
	small_parse_table_1362(v);
}

void	small_parse_table_1362(t_small_parse_table_array *v)
{
	v->a[27240] = actions(1023);
	v->a[27241] = 1;
	v->a[27242] = sym_variable_name;
	v->a[27243] = actions(1093);
	v->a[27244] = 1;
	v->a[27245] = aux_sym_concatenation_token1;
	v->a[27246] = actions(1099);
	v->a[27247] = 1;
	v->a[27248] = sym__concat;
	v->a[27249] = state(347);
	v->a[27250] = 1;
	v->a[27251] = aux_sym_concatenation_repeat1;
	v->a[27252] = actions(1025);
	v->a[27253] = 25;
	v->a[27254] = anon_sym_PIPE;
	v->a[27255] = anon_sym_RPAREN;
	v->a[27256] = anon_sym_SEMI_SEMI;
	v->a[27257] = anon_sym_AMP_AMP;
	v->a[27258] = anon_sym_PIPE_PIPE;
	v->a[27259] = anon_sym_LT;
	small_parse_table_1363(v);
}

void	small_parse_table_1363(t_small_parse_table_array *v)
{
	v->a[27260] = anon_sym_GT;
	v->a[27261] = anon_sym_GT_GT;
	v->a[27262] = anon_sym_LT_AMP;
	v->a[27263] = anon_sym_GT_AMP;
	v->a[27264] = anon_sym_GT_PIPE;
	v->a[27265] = anon_sym_LT_GT;
	v->a[27266] = anon_sym_LT_LT;
	v->a[27267] = anon_sym_LT_LT_DASH;
	v->a[27268] = aux_sym_heredoc_redirect_token1;
	v->a[27269] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27270] = anon_sym_DOLLAR;
	v->a[27271] = anon_sym_DQUOTE;
	v->a[27272] = sym_raw_string;
	v->a[27273] = sym_number;
	v->a[27274] = anon_sym_DOLLAR_LBRACE;
	v->a[27275] = anon_sym_DOLLAR_LPAREN;
	v->a[27276] = anon_sym_BQUOTE;
	v->a[27277] = sym_word;
	v->a[27278] = anon_sym_SEMI;
	v->a[27279] = 13;
	small_parse_table_1364(v);
}

void	small_parse_table_1364(t_small_parse_table_array *v)
{
	v->a[27280] = actions(3);
	v->a[27281] = 1;
	v->a[27282] = sym_comment;
	v->a[27283] = actions(325);
	v->a[27284] = 1;
	v->a[27285] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27286] = actions(327);
	v->a[27287] = 1;
	v->a[27288] = anon_sym_DOLLAR;
	v->a[27289] = actions(329);
	v->a[27290] = 1;
	v->a[27291] = anon_sym_DQUOTE;
	v->a[27292] = actions(333);
	v->a[27293] = 1;
	v->a[27294] = anon_sym_DOLLAR_LBRACE;
	v->a[27295] = actions(335);
	v->a[27296] = 1;
	v->a[27297] = anon_sym_DOLLAR_LPAREN;
	v->a[27298] = actions(337);
	v->a[27299] = 1;
	small_parse_table_1365(v);
}

/* EOF small_parse_table_272.c */
