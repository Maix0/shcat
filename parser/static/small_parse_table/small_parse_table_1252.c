/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1252.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6260(t_small_parse_table_array *v)
{
	v->a[125200] = 1;
	v->a[125201] = sym_comment;
	v->a[125202] = actions(2652);
	v->a[125203] = 7;
	v->a[125204] = anon_sym_PIPE;
	v->a[125205] = anon_sym_LT;
	v->a[125206] = anon_sym_GT;
	v->a[125207] = anon_sym_AMP_GT;
	v->a[125208] = anon_sym_LT_AMP;
	v->a[125209] = anon_sym_GT_AMP;
	v->a[125210] = anon_sym_LT_LT;
	v->a[125211] = actions(2654);
	v->a[125212] = 13;
	v->a[125213] = sym_file_descriptor;
	v->a[125214] = sym__concat;
	v->a[125215] = sym_variable_name;
	v->a[125216] = anon_sym_PIPE_AMP;
	v->a[125217] = anon_sym_AMP_AMP;
	v->a[125218] = anon_sym_PIPE_PIPE;
	v->a[125219] = anon_sym_GT_GT;
	small_parse_table_6261(v);
}

void	small_parse_table_6261(t_small_parse_table_array *v)
{
	v->a[125220] = anon_sym_AMP_GT_GT;
	v->a[125221] = anon_sym_GT_PIPE;
	v->a[125222] = anon_sym_LT_AMP_DASH;
	v->a[125223] = anon_sym_GT_AMP_DASH;
	v->a[125224] = anon_sym_LT_LT_DASH;
	v->a[125225] = aux_sym_concatenation_token1;
	v->a[125226] = 3;
	v->a[125227] = actions(57);
	v->a[125228] = 1;
	v->a[125229] = sym_comment;
	v->a[125230] = actions(3060);
	v->a[125231] = 7;
	v->a[125232] = anon_sym_PIPE;
	v->a[125233] = anon_sym_LT;
	v->a[125234] = anon_sym_GT;
	v->a[125235] = anon_sym_AMP_GT;
	v->a[125236] = anon_sym_LT_AMP;
	v->a[125237] = anon_sym_GT_AMP;
	v->a[125238] = anon_sym_LT_LT;
	v->a[125239] = actions(3062);
	small_parse_table_6262(v);
}

void	small_parse_table_6262(t_small_parse_table_array *v)
{
	v->a[125240] = 13;
	v->a[125241] = sym_file_descriptor;
	v->a[125242] = sym__concat;
	v->a[125243] = sym_variable_name;
	v->a[125244] = anon_sym_PIPE_AMP;
	v->a[125245] = anon_sym_AMP_AMP;
	v->a[125246] = anon_sym_PIPE_PIPE;
	v->a[125247] = anon_sym_GT_GT;
	v->a[125248] = anon_sym_AMP_GT_GT;
	v->a[125249] = anon_sym_GT_PIPE;
	v->a[125250] = anon_sym_LT_AMP_DASH;
	v->a[125251] = anon_sym_GT_AMP_DASH;
	v->a[125252] = anon_sym_LT_LT_DASH;
	v->a[125253] = aux_sym_concatenation_token1;
	v->a[125254] = 3;
	v->a[125255] = actions(3);
	v->a[125256] = 1;
	v->a[125257] = sym_comment;
	v->a[125258] = actions(2774);
	v->a[125259] = 4;
	small_parse_table_6263(v);
}

void	small_parse_table_6263(t_small_parse_table_array *v)
{
	v->a[125260] = sym__concat;
	v->a[125261] = sym_test_operator;
	v->a[125262] = sym__brace_start;
	v->a[125263] = aux_sym_heredoc_redirect_token1;
	v->a[125264] = actions(2772);
	v->a[125265] = 16;
	v->a[125266] = anon_sym_SEMI_SEMI;
	v->a[125267] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[125268] = anon_sym_AMP;
	v->a[125269] = aux_sym_concatenation_token1;
	v->a[125270] = anon_sym_DOLLAR;
	v->a[125271] = sym__special_character;
	v->a[125272] = anon_sym_DQUOTE;
	v->a[125273] = sym_raw_string;
	v->a[125274] = aux_sym_number_token1;
	v->a[125275] = aux_sym_number_token2;
	v->a[125276] = anon_sym_DOLLAR_LBRACE;
	v->a[125277] = anon_sym_DOLLAR_LPAREN;
	v->a[125278] = anon_sym_BQUOTE;
	v->a[125279] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_6264(v);
}

void	small_parse_table_6264(t_small_parse_table_array *v)
{
	v->a[125280] = sym_word;
	v->a[125281] = anon_sym_SEMI;
	v->a[125282] = 10;
	v->a[125283] = actions(57);
	v->a[125284] = 1;
	v->a[125285] = sym_comment;
	v->a[125286] = actions(5165);
	v->a[125287] = 1;
	v->a[125288] = anon_sym_PIPE;
	v->a[125289] = actions(7172);
	v->a[125290] = 1;
	v->a[125291] = anon_sym_LT_LT;
	v->a[125292] = actions(7175);
	v->a[125293] = 1;
	v->a[125294] = anon_sym_LT_LT_DASH;
	v->a[125295] = actions(7178);
	v->a[125296] = 1;
	v->a[125297] = sym_file_descriptor;
	v->a[125298] = actions(7169);
	v->a[125299] = 2;
	small_parse_table_6265(v);
}

/* EOF small_parse_table_1252.c */
