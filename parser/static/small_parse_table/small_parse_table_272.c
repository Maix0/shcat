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
	v->a[27200] = actions(973);
	v->a[27201] = 1;
	v->a[27202] = anon_sym_DQUOTE;
	v->a[27203] = actions(975);
	v->a[27204] = 1;
	v->a[27205] = anon_sym_DOLLAR_LBRACE;
	v->a[27206] = actions(977);
	v->a[27207] = 1;
	v->a[27208] = anon_sym_DOLLAR_LPAREN;
	v->a[27209] = actions(979);
	v->a[27210] = 1;
	v->a[27211] = anon_sym_BQUOTE;
	v->a[27212] = actions(981);
	v->a[27213] = 1;
	v->a[27214] = sym__bare_dollar;
	v->a[27215] = state(465);
	v->a[27216] = 1;
	v->a[27217] = aux_sym_command_repeat2;
	v->a[27218] = state(949);
	v->a[27219] = 1;
	small_parse_table_1361(v);
}

void	small_parse_table_1361(t_small_parse_table_array *v)
{
	v->a[27220] = sym_concatenation;
	v->a[27221] = state(1655);
	v->a[27222] = 1;
	v->a[27223] = sym_subshell;
	v->a[27224] = actions(967);
	v->a[27225] = 3;
	v->a[27226] = sym_raw_string;
	v->a[27227] = sym_number;
	v->a[27228] = sym_word;
	v->a[27229] = state(830);
	v->a[27230] = 5;
	v->a[27231] = sym_arithmetic_expansion;
	v->a[27232] = sym_string;
	v->a[27233] = sym_simple_expansion;
	v->a[27234] = sym_expansion;
	v->a[27235] = sym_command_substitution;
	v->a[27236] = actions(459);
	v->a[27237] = 15;
	v->a[27238] = anon_sym_PIPE;
	v->a[27239] = anon_sym_AMP_AMP;
	small_parse_table_1362(v);
}

void	small_parse_table_1362(t_small_parse_table_array *v)
{
	v->a[27240] = anon_sym_PIPE_PIPE;
	v->a[27241] = anon_sym_LT;
	v->a[27242] = anon_sym_GT;
	v->a[27243] = anon_sym_GT_GT;
	v->a[27244] = anon_sym_AMP_GT;
	v->a[27245] = anon_sym_AMP_GT_GT;
	v->a[27246] = anon_sym_LT_AMP;
	v->a[27247] = anon_sym_GT_AMP;
	v->a[27248] = anon_sym_GT_PIPE;
	v->a[27249] = anon_sym_LT_AMP_DASH;
	v->a[27250] = anon_sym_GT_AMP_DASH;
	v->a[27251] = anon_sym_LT_LT;
	v->a[27252] = anon_sym_LT_LT_DASH;
	v->a[27253] = 6;
	v->a[27254] = actions(3);
	v->a[27255] = 1;
	v->a[27256] = sym_comment;
	v->a[27257] = actions(985);
	v->a[27258] = 1;
	v->a[27259] = aux_sym_concatenation_token1;
	small_parse_table_1363(v);
}

void	small_parse_table_1363(t_small_parse_table_array *v)
{
	v->a[27260] = actions(990);
	v->a[27261] = 1;
	v->a[27262] = sym__concat;
	v->a[27263] = state(286);
	v->a[27264] = 1;
	v->a[27265] = aux_sym_concatenation_repeat1;
	v->a[27266] = actions(988);
	v->a[27267] = 2;
	v->a[27268] = sym_file_descriptor;
	v->a[27269] = sym__bare_dollar;
	v->a[27270] = actions(983);
	v->a[27271] = 30;
	v->a[27272] = anon_sym_esac;
	v->a[27273] = anon_sym_LPAREN;
	v->a[27274] = anon_sym_PIPE;
	v->a[27275] = anon_sym_SEMI_SEMI;
	v->a[27276] = anon_sym_AMP_AMP;
	v->a[27277] = anon_sym_PIPE_PIPE;
	v->a[27278] = anon_sym_LT;
	v->a[27279] = anon_sym_GT;
	small_parse_table_1364(v);
}

void	small_parse_table_1364(t_small_parse_table_array *v)
{
	v->a[27280] = anon_sym_GT_GT;
	v->a[27281] = anon_sym_AMP_GT;
	v->a[27282] = anon_sym_AMP_GT_GT;
	v->a[27283] = anon_sym_LT_AMP;
	v->a[27284] = anon_sym_GT_AMP;
	v->a[27285] = anon_sym_GT_PIPE;
	v->a[27286] = anon_sym_LT_AMP_DASH;
	v->a[27287] = anon_sym_GT_AMP_DASH;
	v->a[27288] = anon_sym_LT_LT;
	v->a[27289] = anon_sym_LT_LT_DASH;
	v->a[27290] = aux_sym_heredoc_redirect_token1;
	v->a[27291] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27292] = anon_sym_AMP;
	v->a[27293] = anon_sym_DOLLAR;
	v->a[27294] = anon_sym_DQUOTE;
	v->a[27295] = sym_raw_string;
	v->a[27296] = sym_number;
	v->a[27297] = anon_sym_DOLLAR_LBRACE;
	v->a[27298] = anon_sym_DOLLAR_LPAREN;
	v->a[27299] = anon_sym_BQUOTE;
	small_parse_table_1365(v);
}

/* EOF small_parse_table_272.c */
