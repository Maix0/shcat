/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2732.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13660(t_small_parse_table_array *v)
{
	v->a[273200] = 17;
	v->a[273201] = anon_sym_LPAREN_LPAREN;
	v->a[273202] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[273203] = anon_sym_DOLLAR_LBRACK;
	v->a[273204] = anon_sym_DOLLAR;
	v->a[273205] = sym__special_character;
	v->a[273206] = anon_sym_DQUOTE;
	v->a[273207] = sym_raw_string;
	v->a[273208] = sym_ansi_c_string;
	v->a[273209] = aux_sym_number_token1;
	v->a[273210] = aux_sym_number_token2;
	v->a[273211] = anon_sym_DOLLAR_LBRACE;
	v->a[273212] = anon_sym_DOLLAR_LPAREN;
	v->a[273213] = anon_sym_BQUOTE;
	v->a[273214] = anon_sym_DOLLAR_BQUOTE;
	v->a[273215] = anon_sym_LT_LPAREN;
	v->a[273216] = anon_sym_GT_LPAREN;
	v->a[273217] = sym_word;
	v->a[273218] = 3;
	v->a[273219] = actions(3);
	small_parse_table_13661(v);
}

void	small_parse_table_13661(t_small_parse_table_array *v)
{
	v->a[273220] = 1;
	v->a[273221] = sym_comment;
	v->a[273222] = actions(12215);
	v->a[273223] = 2;
	v->a[273224] = sym_file_descriptor;
	v->a[273225] = aux_sym_heredoc_redirect_token1;
	v->a[273226] = actions(12213);
	v->a[273227] = 21;
	v->a[273228] = anon_sym_SEMI;
	v->a[273229] = anon_sym_PIPE_PIPE;
	v->a[273230] = anon_sym_AMP_AMP;
	v->a[273231] = anon_sym_PIPE;
	v->a[273232] = anon_sym_AMP;
	v->a[273233] = anon_sym_LT;
	v->a[273234] = anon_sym_GT;
	v->a[273235] = anon_sym_LT_LT;
	v->a[273236] = anon_sym_GT_GT;
	v->a[273237] = anon_sym_SEMI_SEMI;
	v->a[273238] = anon_sym_SEMI_AMP;
	v->a[273239] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_13662(v);
}

void	small_parse_table_13662(t_small_parse_table_array *v)
{
	v->a[273240] = anon_sym_PIPE_AMP;
	v->a[273241] = anon_sym_AMP_GT;
	v->a[273242] = anon_sym_AMP_GT_GT;
	v->a[273243] = anon_sym_LT_AMP;
	v->a[273244] = anon_sym_GT_AMP;
	v->a[273245] = anon_sym_GT_PIPE;
	v->a[273246] = anon_sym_LT_AMP_DASH;
	v->a[273247] = anon_sym_GT_AMP_DASH;
	v->a[273248] = anon_sym_LT_LT_DASH;
	v->a[273249] = 5;
	v->a[273250] = actions(71);
	v->a[273251] = 1;
	v->a[273252] = sym_comment;
	v->a[273253] = state(5175);
	v->a[273254] = 1;
	v->a[273255] = aux_sym_concatenation_repeat1;
	v->a[273256] = actions(12327);
	v->a[273257] = 2;
	v->a[273258] = sym__concat;
	v->a[273259] = aux_sym_concatenation_token1;
	small_parse_table_13663(v);
}

void	small_parse_table_13663(t_small_parse_table_array *v)
{
	v->a[273260] = actions(1261);
	v->a[273261] = 8;
	v->a[273262] = anon_sym_PIPE;
	v->a[273263] = anon_sym_LT;
	v->a[273264] = anon_sym_GT;
	v->a[273265] = anon_sym_LT_LT;
	v->a[273266] = anon_sym_AMP_GT;
	v->a[273267] = anon_sym_LT_AMP;
	v->a[273268] = anon_sym_GT_AMP;
	v->a[273269] = sym__special_character;
	v->a[273270] = actions(1263);
	v->a[273271] = 12;
	v->a[273272] = sym_file_descriptor;
	v->a[273273] = anon_sym_PIPE_PIPE;
	v->a[273274] = anon_sym_AMP_AMP;
	v->a[273275] = anon_sym_GT_GT;
	v->a[273276] = anon_sym_PIPE_AMP;
	v->a[273277] = anon_sym_RBRACK;
	v->a[273278] = anon_sym_AMP_GT_GT;
	v->a[273279] = anon_sym_GT_PIPE;
	small_parse_table_13664(v);
}

void	small_parse_table_13664(t_small_parse_table_array *v)
{
	v->a[273280] = anon_sym_LT_AMP_DASH;
	v->a[273281] = anon_sym_GT_AMP_DASH;
	v->a[273282] = anon_sym_LT_LT_DASH;
	v->a[273283] = anon_sym_LT_LT_LT;
	v->a[273284] = 6;
	v->a[273285] = actions(71);
	v->a[273286] = 1;
	v->a[273287] = sym_comment;
	v->a[273288] = actions(12309);
	v->a[273289] = 1;
	v->a[273290] = aux_sym_concatenation_token1;
	v->a[273291] = actions(12329);
	v->a[273292] = 1;
	v->a[273293] = sym__concat;
	v->a[273294] = state(5038);
	v->a[273295] = 1;
	v->a[273296] = aux_sym_concatenation_repeat1;
	v->a[273297] = actions(1265);
	v->a[273298] = 6;
	v->a[273299] = anon_sym_DOLLAR;
	small_parse_table_13665(v);
}

/* EOF small_parse_table_2732.c */
