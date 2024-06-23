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
	v->a[27200] = sym_file_descriptor;
	v->a[27201] = actions(943);
	v->a[27202] = 1;
	v->a[27203] = anon_sym_BQUOTE;
	v->a[27204] = actions(1034);
	v->a[27205] = 1;
	v->a[27206] = sym_variable_name;
	v->a[27207] = actions(861);
	v->a[27208] = 2;
	v->a[27209] = anon_sym_LT_LT;
	v->a[27210] = anon_sym_LT_LT_DASH;
	v->a[27211] = actions(1032);
	v->a[27212] = 2;
	v->a[27213] = anon_sym_AMP_AMP;
	v->a[27214] = anon_sym_PIPE_PIPE;
	v->a[27215] = state(1199);
	v->a[27216] = 2;
	v->a[27217] = sym_variable_assignment;
	v->a[27218] = aux_sym__variable_assignments_repeat1;
	v->a[27219] = state(1297);
	small_parse_table_1361(v);
}

void	small_parse_table_1361(t_small_parse_table_array *v)
{
	v->a[27220] = 3;
	v->a[27221] = sym_file_redirect;
	v->a[27222] = sym_heredoc_redirect;
	v->a[27223] = aux_sym_redirected_statement_repeat1;
	v->a[27224] = actions(1030);
	v->a[27225] = 4;
	v->a[27226] = anon_sym_SEMI_SEMI;
	v->a[27227] = aux_sym_heredoc_redirect_token1;
	v->a[27228] = anon_sym_AMP;
	v->a[27229] = anon_sym_SEMI;
	v->a[27230] = actions(805);
	v->a[27231] = 18;
	v->a[27232] = anon_sym_LT;
	v->a[27233] = anon_sym_GT;
	v->a[27234] = anon_sym_GT_GT;
	v->a[27235] = anon_sym_AMP_GT;
	v->a[27236] = anon_sym_AMP_GT_GT;
	v->a[27237] = anon_sym_LT_AMP;
	v->a[27238] = anon_sym_GT_AMP;
	v->a[27239] = anon_sym_GT_PIPE;
	small_parse_table_1362(v);
}

void	small_parse_table_1362(t_small_parse_table_array *v)
{
	v->a[27240] = anon_sym_LT_AMP_DASH;
	v->a[27241] = anon_sym_GT_AMP_DASH;
	v->a[27242] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27243] = anon_sym_DOLLAR;
	v->a[27244] = anon_sym_DQUOTE;
	v->a[27245] = sym_raw_string;
	v->a[27246] = sym_number;
	v->a[27247] = anon_sym_DOLLAR_LBRACE;
	v->a[27248] = anon_sym_DOLLAR_LPAREN;
	v->a[27249] = sym_word;
	v->a[27250] = 11;
	v->a[27251] = actions(3);
	v->a[27252] = 1;
	v->a[27253] = sym_comment;
	v->a[27254] = actions(717);
	v->a[27255] = 1;
	v->a[27256] = sym_file_descriptor;
	v->a[27257] = actions(824);
	v->a[27258] = 1;
	v->a[27259] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1363(v);
}

void	small_parse_table_1363(t_small_parse_table_array *v)
{
	v->a[27260] = actions(826);
	v->a[27261] = 1;
	v->a[27262] = anon_sym_DOLLAR;
	v->a[27263] = actions(828);
	v->a[27264] = 1;
	v->a[27265] = anon_sym_DQUOTE;
	v->a[27266] = actions(830);
	v->a[27267] = 1;
	v->a[27268] = anon_sym_DOLLAR_LBRACE;
	v->a[27269] = actions(832);
	v->a[27270] = 1;
	v->a[27271] = anon_sym_DOLLAR_LPAREN;
	v->a[27272] = state(1376);
	v->a[27273] = 1;
	v->a[27274] = sym_concatenation;
	v->a[27275] = actions(1037);
	v->a[27276] = 3;
	v->a[27277] = sym_raw_string;
	v->a[27278] = sym_number;
	v->a[27279] = sym_word;
	small_parse_table_1364(v);
}

void	small_parse_table_1364(t_small_parse_table_array *v)
{
	v->a[27280] = state(1250);
	v->a[27281] = 5;
	v->a[27282] = sym_arithmetic_expansion;
	v->a[27283] = sym_string;
	v->a[27284] = sym_simple_expansion;
	v->a[27285] = sym_expansion;
	v->a[27286] = sym_command_substitution;
	v->a[27287] = actions(719);
	v->a[27288] = 20;
	v->a[27289] = anon_sym_PIPE;
	v->a[27290] = anon_sym_SEMI_SEMI;
	v->a[27291] = anon_sym_AMP_AMP;
	v->a[27292] = anon_sym_PIPE_PIPE;
	v->a[27293] = anon_sym_LT;
	v->a[27294] = anon_sym_GT;
	v->a[27295] = anon_sym_GT_GT;
	v->a[27296] = anon_sym_AMP_GT;
	v->a[27297] = anon_sym_AMP_GT_GT;
	v->a[27298] = anon_sym_LT_AMP;
	v->a[27299] = anon_sym_GT_AMP;
	small_parse_table_1365(v);
}

/* EOF small_parse_table_272.c */
