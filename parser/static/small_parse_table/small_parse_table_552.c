/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_552.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2760(t_small_parse_table_array *v)
{
	v->a[55200] = anon_sym_LT_LT;
	v->a[55201] = anon_sym_LT_LT_DASH;
	v->a[55202] = actions(808);
	v->a[55203] = 2;
	v->a[55204] = anon_sym_SEMI_SEMI;
	v->a[55205] = anon_sym_SEMI;
	v->a[55206] = actions(810);
	v->a[55207] = 2;
	v->a[55208] = anon_sym_AMP_AMP;
	v->a[55209] = anon_sym_PIPE_PIPE;
	v->a[55210] = state(1046);
	v->a[55211] = 3;
	v->a[55212] = sym_file_redirect;
	v->a[55213] = sym_heredoc_redirect;
	v->a[55214] = aux_sym_redirected_statement_repeat1;
	v->a[55215] = actions(1880);
	v->a[55216] = 7;
	v->a[55217] = anon_sym_LT;
	v->a[55218] = anon_sym_GT;
	v->a[55219] = anon_sym_GT_GT;
	small_parse_table_2761(v);
}

void	small_parse_table_2761(t_small_parse_table_array *v)
{
	v->a[55220] = anon_sym_LT_AMP;
	v->a[55221] = anon_sym_GT_AMP;
	v->a[55222] = anon_sym_GT_PIPE;
	v->a[55223] = anon_sym_LT_GT;
	v->a[55224] = 11;
	v->a[55225] = actions(3);
	v->a[55226] = 1;
	v->a[55227] = sym_comment;
	v->a[55228] = actions(782);
	v->a[55229] = 1;
	v->a[55230] = anon_sym_PIPE;
	v->a[55231] = actions(886);
	v->a[55232] = 1;
	v->a[55233] = anon_sym_SEMI;
	v->a[55234] = actions(1876);
	v->a[55235] = 1;
	v->a[55236] = aux_sym_heredoc_redirect_token1;
	v->a[55237] = actions(1878);
	v->a[55238] = 1;
	v->a[55239] = sym_file_descriptor;
	small_parse_table_2762(v);
}

void	small_parse_table_2762(t_small_parse_table_array *v)
{
	v->a[55240] = state(607);
	v->a[55241] = 1;
	v->a[55242] = sym_terminator;
	v->a[55243] = actions(784);
	v->a[55244] = 2;
	v->a[55245] = anon_sym_esac;
	v->a[55246] = anon_sym_SEMI_SEMI;
	v->a[55247] = actions(882);
	v->a[55248] = 2;
	v->a[55249] = anon_sym_AMP_AMP;
	v->a[55250] = anon_sym_PIPE_PIPE;
	v->a[55251] = actions(884);
	v->a[55252] = 2;
	v->a[55253] = anon_sym_LT_LT;
	v->a[55254] = anon_sym_LT_LT_DASH;
	v->a[55255] = state(1099);
	v->a[55256] = 3;
	v->a[55257] = sym_file_redirect;
	v->a[55258] = sym_heredoc_redirect;
	v->a[55259] = aux_sym_redirected_statement_repeat1;
	small_parse_table_2763(v);
}

void	small_parse_table_2763(t_small_parse_table_array *v)
{
	v->a[55260] = actions(1874);
	v->a[55261] = 7;
	v->a[55262] = anon_sym_LT;
	v->a[55263] = anon_sym_GT;
	v->a[55264] = anon_sym_GT_GT;
	v->a[55265] = anon_sym_LT_AMP;
	v->a[55266] = anon_sym_GT_AMP;
	v->a[55267] = anon_sym_GT_PIPE;
	v->a[55268] = anon_sym_LT_GT;
	v->a[55269] = 15;
	v->a[55270] = actions(3);
	v->a[55271] = 1;
	v->a[55272] = sym_comment;
	v->a[55273] = actions(1720);
	v->a[55274] = 1;
	v->a[55275] = anon_sym_LPAREN;
	v->a[55276] = actions(1724);
	v->a[55277] = 1;
	v->a[55278] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55279] = actions(1726);
	small_parse_table_2764(v);
}

void	small_parse_table_2764(t_small_parse_table_array *v)
{
	v->a[55280] = 1;
	v->a[55281] = anon_sym_DOLLAR;
	v->a[55282] = actions(1728);
	v->a[55283] = 1;
	v->a[55284] = anon_sym_DQUOTE;
	v->a[55285] = actions(1730);
	v->a[55286] = 1;
	v->a[55287] = anon_sym_DOLLAR_LBRACE;
	v->a[55288] = actions(1732);
	v->a[55289] = 1;
	v->a[55290] = anon_sym_DOLLAR_LPAREN;
	v->a[55291] = actions(1734);
	v->a[55292] = 1;
	v->a[55293] = anon_sym_BQUOTE;
	v->a[55294] = actions(1736);
	v->a[55295] = 1;
	v->a[55296] = sym_extglob_pattern;
	v->a[55297] = state(1050);
	v->a[55298] = 1;
	v->a[55299] = aux_sym_case_statement_repeat1;
	small_parse_table_2765(v);
}

/* EOF small_parse_table_552.c */
