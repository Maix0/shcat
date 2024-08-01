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
	v->a[27200] = anon_sym_DQUOTE;
	v->a[27201] = sym_raw_string;
	v->a[27202] = sym_number;
	v->a[27203] = anon_sym_DOLLAR_LBRACE;
	v->a[27204] = anon_sym_DOLLAR_LPAREN;
	v->a[27205] = anon_sym_BQUOTE;
	v->a[27206] = sym_word;
	v->a[27207] = anon_sym_SEMI;
	v->a[27208] = 3;
	v->a[27209] = actions(3);
	v->a[27210] = 1;
	v->a[27211] = sym_comment;
	v->a[27212] = actions(1060);
	v->a[27213] = 2;
	v->a[27214] = sym__concat;
	v->a[27215] = sym_variable_name;
	v->a[27216] = actions(1058);
	v->a[27217] = 21;
	v->a[27218] = anon_sym_PIPE;
	v->a[27219] = anon_sym_RPAREN;
	small_parse_table_1361(v);
}

void	small_parse_table_1361(t_small_parse_table_array *v)
{
	v->a[27220] = anon_sym_SEMI_SEMI;
	v->a[27221] = anon_sym_AMP_AMP;
	v->a[27222] = anon_sym_PIPE_PIPE;
	v->a[27223] = anon_sym_LT;
	v->a[27224] = anon_sym_GT;
	v->a[27225] = anon_sym_GT_GT;
	v->a[27226] = anon_sym_LT_LT;
	v->a[27227] = aux_sym_heredoc_redirect_token1;
	v->a[27228] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27229] = aux_sym_concatenation_token1;
	v->a[27230] = anon_sym_DOLLAR;
	v->a[27231] = anon_sym_DQUOTE;
	v->a[27232] = sym_raw_string;
	v->a[27233] = sym_number;
	v->a[27234] = anon_sym_DOLLAR_LBRACE;
	v->a[27235] = anon_sym_DOLLAR_LPAREN;
	v->a[27236] = anon_sym_BQUOTE;
	v->a[27237] = sym_word;
	v->a[27238] = anon_sym_SEMI;
	v->a[27239] = 6;
	small_parse_table_1362(v);
}

void	small_parse_table_1362(t_small_parse_table_array *v)
{
	v->a[27240] = actions(3);
	v->a[27241] = 1;
	v->a[27242] = sym_comment;
	v->a[27243] = actions(921);
	v->a[27244] = 1;
	v->a[27245] = sym_variable_name;
	v->a[27246] = actions(927);
	v->a[27247] = 1;
	v->a[27248] = aux_sym_concatenation_token1;
	v->a[27249] = actions(1174);
	v->a[27250] = 1;
	v->a[27251] = sym__concat;
	v->a[27252] = state(279);
	v->a[27253] = 1;
	v->a[27254] = aux_sym_concatenation_repeat1;
	v->a[27255] = actions(923);
	v->a[27256] = 19;
	v->a[27257] = anon_sym_PIPE;
	v->a[27258] = anon_sym_SEMI_SEMI;
	v->a[27259] = anon_sym_AMP_AMP;
	small_parse_table_1363(v);
}

void	small_parse_table_1363(t_small_parse_table_array *v)
{
	v->a[27260] = anon_sym_PIPE_PIPE;
	v->a[27261] = anon_sym_LT;
	v->a[27262] = anon_sym_GT;
	v->a[27263] = anon_sym_GT_GT;
	v->a[27264] = anon_sym_LT_LT;
	v->a[27265] = aux_sym_heredoc_redirect_token1;
	v->a[27266] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27267] = anon_sym_DOLLAR;
	v->a[27268] = anon_sym_DQUOTE;
	v->a[27269] = sym_raw_string;
	v->a[27270] = sym_number;
	v->a[27271] = anon_sym_DOLLAR_LBRACE;
	v->a[27272] = anon_sym_DOLLAR_LPAREN;
	v->a[27273] = anon_sym_BQUOTE;
	v->a[27274] = sym_word;
	v->a[27275] = anon_sym_SEMI;
	v->a[27276] = 6;
	v->a[27277] = actions(3);
	v->a[27278] = 1;
	v->a[27279] = sym_comment;
	small_parse_table_1364(v);
}

void	small_parse_table_1364(t_small_parse_table_array *v)
{
	v->a[27280] = actions(1037);
	v->a[27281] = 1;
	v->a[27282] = sym_variable_name;
	v->a[27283] = state(1277);
	v->a[27284] = 2;
	v->a[27285] = sym_variable_assignment;
	v->a[27286] = aux_sym__variable_assignments_repeat1;
	v->a[27287] = state(1225);
	v->a[27288] = 3;
	v->a[27289] = sym_file_redirect;
	v->a[27290] = sym_heredoc_redirect;
	v->a[27291] = aux_sym_redirected_statement_repeat1;
	v->a[27292] = actions(580);
	v->a[27293] = 8;
	v->a[27294] = anon_sym_PIPE;
	v->a[27295] = anon_sym_AMP_AMP;
	v->a[27296] = anon_sym_PIPE_PIPE;
	v->a[27297] = anon_sym_LT;
	v->a[27298] = anon_sym_GT;
	v->a[27299] = anon_sym_GT_GT;
	small_parse_table_1365(v);
}

/* EOF small_parse_table_272.c */
