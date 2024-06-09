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
	v->a[27200] = actions(1044);
	v->a[27201] = 9;
	v->a[27202] = anon_sym_BANG;
	v->a[27203] = anon_sym_DASH;
	v->a[27204] = anon_sym_STAR;
	v->a[27205] = anon_sym_QMARK;
	v->a[27206] = anon_sym_DOLLAR;
	v->a[27207] = anon_sym_POUND;
	v->a[27208] = anon_sym_AT;
	v->a[27209] = anon_sym_0;
	v->a[27210] = anon_sym__;
	v->a[27211] = actions(407);
	v->a[27212] = 24;
	v->a[27213] = anon_sym_PIPE;
	v->a[27214] = anon_sym_AMP_AMP;
	v->a[27215] = anon_sym_PIPE_PIPE;
	v->a[27216] = anon_sym_LT;
	v->a[27217] = anon_sym_GT;
	v->a[27218] = anon_sym_GT_GT;
	v->a[27219] = anon_sym_AMP_GT;
	small_parse_table_1361(v);
}

void	small_parse_table_1361(t_small_parse_table_array *v)
{
	v->a[27220] = anon_sym_AMP_GT_GT;
	v->a[27221] = anon_sym_LT_AMP;
	v->a[27222] = anon_sym_GT_AMP;
	v->a[27223] = anon_sym_GT_PIPE;
	v->a[27224] = anon_sym_LT_AMP_DASH;
	v->a[27225] = anon_sym_GT_AMP_DASH;
	v->a[27226] = anon_sym_LT_LT;
	v->a[27227] = anon_sym_LT_LT_DASH;
	v->a[27228] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27229] = anon_sym_DQUOTE;
	v->a[27230] = sym_raw_string;
	v->a[27231] = aux_sym_number_token1;
	v->a[27232] = aux_sym_number_token2;
	v->a[27233] = anon_sym_DOLLAR_LBRACE;
	v->a[27234] = anon_sym_DOLLAR_LPAREN;
	v->a[27235] = anon_sym_BQUOTE;
	v->a[27236] = sym_word;
	v->a[27237] = 6;
	v->a[27238] = actions(3);
	v->a[27239] = 1;
	small_parse_table_1362(v);
}

void	small_parse_table_1362(t_small_parse_table_array *v)
{
	v->a[27240] = sym_comment;
	v->a[27241] = actions(413);
	v->a[27242] = 1;
	v->a[27243] = sym_file_descriptor;
	v->a[27244] = actions(1054);
	v->a[27245] = 1;
	v->a[27246] = sym_variable_name;
	v->a[27247] = actions(1052);
	v->a[27248] = 2;
	v->a[27249] = aux_sym__simple_variable_name_token1;
	v->a[27250] = aux_sym__multiline_variable_name_token1;
	v->a[27251] = actions(1050);
	v->a[27252] = 9;
	v->a[27253] = anon_sym_BANG;
	v->a[27254] = anon_sym_DASH;
	v->a[27255] = anon_sym_STAR;
	v->a[27256] = anon_sym_QMARK;
	v->a[27257] = anon_sym_DOLLAR;
	v->a[27258] = anon_sym_POUND;
	v->a[27259] = anon_sym_AT;
	small_parse_table_1363(v);
}

void	small_parse_table_1363(t_small_parse_table_array *v)
{
	v->a[27260] = anon_sym_0;
	v->a[27261] = anon_sym__;
	v->a[27262] = actions(407);
	v->a[27263] = 24;
	v->a[27264] = anon_sym_PIPE;
	v->a[27265] = anon_sym_AMP_AMP;
	v->a[27266] = anon_sym_PIPE_PIPE;
	v->a[27267] = anon_sym_LT;
	v->a[27268] = anon_sym_GT;
	v->a[27269] = anon_sym_GT_GT;
	v->a[27270] = anon_sym_AMP_GT;
	v->a[27271] = anon_sym_AMP_GT_GT;
	v->a[27272] = anon_sym_LT_AMP;
	v->a[27273] = anon_sym_GT_AMP;
	v->a[27274] = anon_sym_GT_PIPE;
	v->a[27275] = anon_sym_LT_AMP_DASH;
	v->a[27276] = anon_sym_GT_AMP_DASH;
	v->a[27277] = anon_sym_LT_LT;
	v->a[27278] = anon_sym_LT_LT_DASH;
	v->a[27279] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1364(v);
}

void	small_parse_table_1364(t_small_parse_table_array *v)
{
	v->a[27280] = anon_sym_DQUOTE;
	v->a[27281] = sym_raw_string;
	v->a[27282] = aux_sym_number_token1;
	v->a[27283] = aux_sym_number_token2;
	v->a[27284] = anon_sym_DOLLAR_LBRACE;
	v->a[27285] = anon_sym_DOLLAR_LPAREN;
	v->a[27286] = anon_sym_BQUOTE;
	v->a[27287] = sym_word;
	v->a[27288] = 11;
	v->a[27289] = actions(3);
	v->a[27290] = 1;
	v->a[27291] = sym_comment;
	v->a[27292] = actions(1002);
	v->a[27293] = 1;
	v->a[27294] = anon_sym_PIPE;
	v->a[27295] = actions(1006);
	v->a[27296] = 1;
	v->a[27297] = sym_file_descriptor;
	v->a[27298] = actions(1056);
	v->a[27299] = 1;
	small_parse_table_1365(v);
}

/* EOF small_parse_table_272.c */
