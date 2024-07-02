/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_352.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1760(t_small_parse_table_array *v)
{
	v->a[35200] = 1;
	v->a[35201] = aux_sym_command_repeat2;
	v->a[35202] = state(924);
	v->a[35203] = 1;
	v->a[35204] = sym_concatenation;
	v->a[35205] = actions(1297);
	v->a[35206] = 3;
	v->a[35207] = sym_raw_string;
	v->a[35208] = sym_number;
	v->a[35209] = sym_word;
	v->a[35210] = state(826);
	v->a[35211] = 5;
	v->a[35212] = sym_arithmetic_expansion;
	v->a[35213] = sym_string;
	v->a[35214] = sym_simple_expansion;
	v->a[35215] = sym_expansion;
	v->a[35216] = sym_command_substitution;
	v->a[35217] = actions(545);
	v->a[35218] = 12;
	v->a[35219] = anon_sym_PIPE;
	small_parse_table_1761(v);
}

void	small_parse_table_1761(t_small_parse_table_array *v)
{
	v->a[35220] = anon_sym_AMP_AMP;
	v->a[35221] = anon_sym_PIPE_PIPE;
	v->a[35222] = anon_sym_LT;
	v->a[35223] = anon_sym_GT;
	v->a[35224] = anon_sym_GT_GT;
	v->a[35225] = anon_sym_LT_AMP;
	v->a[35226] = anon_sym_GT_AMP;
	v->a[35227] = anon_sym_GT_PIPE;
	v->a[35228] = anon_sym_LT_GT;
	v->a[35229] = anon_sym_LT_LT;
	v->a[35230] = anon_sym_LT_LT_DASH;
	v->a[35231] = 3;
	v->a[35232] = actions(3);
	v->a[35233] = 1;
	v->a[35234] = sym_comment;
	v->a[35235] = actions(713);
	v->a[35236] = 4;
	v->a[35237] = sym_file_descriptor;
	v->a[35238] = sym__concat;
	v->a[35239] = sym_variable_name;
	small_parse_table_1762(v);
}

void	small_parse_table_1762(t_small_parse_table_array *v)
{
	v->a[35240] = ts_builtin_sym_end;
	v->a[35241] = actions(711);
	v->a[35242] = 26;
	v->a[35243] = anon_sym_PIPE;
	v->a[35244] = anon_sym_SEMI_SEMI;
	v->a[35245] = anon_sym_AMP_AMP;
	v->a[35246] = anon_sym_PIPE_PIPE;
	v->a[35247] = anon_sym_LT;
	v->a[35248] = anon_sym_GT;
	v->a[35249] = anon_sym_GT_GT;
	v->a[35250] = anon_sym_LT_AMP;
	v->a[35251] = anon_sym_GT_AMP;
	v->a[35252] = anon_sym_GT_PIPE;
	v->a[35253] = anon_sym_LT_GT;
	v->a[35254] = anon_sym_LT_LT;
	v->a[35255] = anon_sym_LT_LT_DASH;
	v->a[35256] = aux_sym_heredoc_redirect_token1;
	v->a[35257] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35258] = anon_sym_AMP;
	v->a[35259] = aux_sym_concatenation_token1;
	small_parse_table_1763(v);
}

void	small_parse_table_1763(t_small_parse_table_array *v)
{
	v->a[35260] = anon_sym_DOLLAR;
	v->a[35261] = anon_sym_DQUOTE;
	v->a[35262] = sym_raw_string;
	v->a[35263] = sym_number;
	v->a[35264] = anon_sym_DOLLAR_LBRACE;
	v->a[35265] = anon_sym_DOLLAR_LPAREN;
	v->a[35266] = anon_sym_BQUOTE;
	v->a[35267] = sym_word;
	v->a[35268] = anon_sym_SEMI;
	v->a[35269] = 3;
	v->a[35270] = actions(3);
	v->a[35271] = 1;
	v->a[35272] = sym_comment;
	v->a[35273] = actions(709);
	v->a[35274] = 4;
	v->a[35275] = sym_file_descriptor;
	v->a[35276] = sym__concat;
	v->a[35277] = sym_variable_name;
	v->a[35278] = ts_builtin_sym_end;
	v->a[35279] = actions(707);
	small_parse_table_1764(v);
}

void	small_parse_table_1764(t_small_parse_table_array *v)
{
	v->a[35280] = 26;
	v->a[35281] = anon_sym_PIPE;
	v->a[35282] = anon_sym_SEMI_SEMI;
	v->a[35283] = anon_sym_AMP_AMP;
	v->a[35284] = anon_sym_PIPE_PIPE;
	v->a[35285] = anon_sym_LT;
	v->a[35286] = anon_sym_GT;
	v->a[35287] = anon_sym_GT_GT;
	v->a[35288] = anon_sym_LT_AMP;
	v->a[35289] = anon_sym_GT_AMP;
	v->a[35290] = anon_sym_GT_PIPE;
	v->a[35291] = anon_sym_LT_GT;
	v->a[35292] = anon_sym_LT_LT;
	v->a[35293] = anon_sym_LT_LT_DASH;
	v->a[35294] = aux_sym_heredoc_redirect_token1;
	v->a[35295] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35296] = anon_sym_AMP;
	v->a[35297] = aux_sym_concatenation_token1;
	v->a[35298] = anon_sym_DOLLAR;
	v->a[35299] = anon_sym_DQUOTE;
	small_parse_table_1765(v);
}

/* EOF small_parse_table_352.c */
