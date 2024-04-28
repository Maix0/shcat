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
	v->a[125200] = sym_comment;
	v->a[125201] = actions(1300);
	v->a[125202] = 14;
	v->a[125203] = anon_sym_PIPE;
	v->a[125204] = anon_sym_LT;
	v->a[125205] = anon_sym_GT;
	v->a[125206] = anon_sym_LT_LT;
	v->a[125207] = anon_sym_AMP_GT;
	v->a[125208] = anon_sym_LT_AMP;
	v->a[125209] = anon_sym_GT_AMP;
	v->a[125210] = anon_sym_DOLLAR;
	v->a[125211] = sym__special_character;
	v->a[125212] = aux_sym_number_token1;
	v->a[125213] = aux_sym_number_token2;
	v->a[125214] = anon_sym_DOLLAR_LPAREN;
	v->a[125215] = anon_sym_BQUOTE;
	v->a[125216] = sym_word;
	v->a[125217] = actions(1302);
	v->a[125218] = 27;
	v->a[125219] = sym_file_descriptor;
	small_parse_table_6261(v);
}

void	small_parse_table_6261(t_small_parse_table_array *v)
{
	v->a[125220] = sym__concat;
	v->a[125221] = sym_variable_name;
	v->a[125222] = sym_test_operator;
	v->a[125223] = sym__brace_start;
	v->a[125224] = anon_sym_LPAREN_LPAREN;
	v->a[125225] = anon_sym_PIPE_PIPE;
	v->a[125226] = anon_sym_AMP_AMP;
	v->a[125227] = anon_sym_GT_GT;
	v->a[125228] = anon_sym_PIPE_AMP;
	v->a[125229] = anon_sym_RBRACK;
	v->a[125230] = anon_sym_AMP_GT_GT;
	v->a[125231] = anon_sym_GT_PIPE;
	v->a[125232] = anon_sym_LT_AMP_DASH;
	v->a[125233] = anon_sym_GT_AMP_DASH;
	v->a[125234] = anon_sym_LT_LT_DASH;
	v->a[125235] = anon_sym_LT_LT_LT;
	v->a[125236] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[125237] = anon_sym_DOLLAR_LBRACK;
	v->a[125238] = aux_sym_concatenation_token1;
	v->a[125239] = anon_sym_DQUOTE;
	small_parse_table_6262(v);
}

void	small_parse_table_6262(t_small_parse_table_array *v)
{
	v->a[125240] = sym_raw_string;
	v->a[125241] = sym_ansi_c_string;
	v->a[125242] = anon_sym_DOLLAR_LBRACE;
	v->a[125243] = anon_sym_DOLLAR_BQUOTE;
	v->a[125244] = anon_sym_LT_LPAREN;
	v->a[125245] = anon_sym_GT_LPAREN;
	v->a[125246] = 6;
	v->a[125247] = actions(3);
	v->a[125248] = 1;
	v->a[125249] = sym_comment;
	v->a[125250] = actions(5844);
	v->a[125251] = 1;
	v->a[125252] = aux_sym_concatenation_token1;
	v->a[125253] = actions(6590);
	v->a[125254] = 1;
	v->a[125255] = sym__concat;
	v->a[125256] = state(1722);
	v->a[125257] = 1;
	v->a[125258] = aux_sym_concatenation_repeat1;
	v->a[125259] = actions(1267);
	small_parse_table_6263(v);
}

void	small_parse_table_6263(t_small_parse_table_array *v)
{
	v->a[125260] = 4;
	v->a[125261] = sym_file_descriptor;
	v->a[125262] = sym_test_operator;
	v->a[125263] = sym__brace_start;
	v->a[125264] = aux_sym_heredoc_redirect_token1;
	v->a[125265] = actions(1265);
	v->a[125266] = 34;
	v->a[125267] = anon_sym_LPAREN_LPAREN;
	v->a[125268] = anon_sym_PIPE_PIPE;
	v->a[125269] = anon_sym_AMP_AMP;
	v->a[125270] = anon_sym_PIPE;
	v->a[125271] = anon_sym_LT;
	v->a[125272] = anon_sym_GT;
	v->a[125273] = anon_sym_LT_LT;
	v->a[125274] = anon_sym_GT_GT;
	v->a[125275] = anon_sym_PIPE_AMP;
	v->a[125276] = anon_sym_AMP_GT;
	v->a[125277] = anon_sym_AMP_GT_GT;
	v->a[125278] = anon_sym_LT_AMP;
	v->a[125279] = anon_sym_GT_AMP;
	small_parse_table_6264(v);
}

void	small_parse_table_6264(t_small_parse_table_array *v)
{
	v->a[125280] = anon_sym_GT_PIPE;
	v->a[125281] = anon_sym_LT_AMP_DASH;
	v->a[125282] = anon_sym_GT_AMP_DASH;
	v->a[125283] = anon_sym_LT_LT_DASH;
	v->a[125284] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[125285] = anon_sym_DOLLAR_LBRACK;
	v->a[125286] = anon_sym_DOLLAR;
	v->a[125287] = sym__special_character;
	v->a[125288] = anon_sym_DQUOTE;
	v->a[125289] = sym_raw_string;
	v->a[125290] = sym_ansi_c_string;
	v->a[125291] = aux_sym_number_token1;
	v->a[125292] = aux_sym_number_token2;
	v->a[125293] = anon_sym_DOLLAR_LBRACE;
	v->a[125294] = anon_sym_DOLLAR_LPAREN;
	v->a[125295] = anon_sym_BQUOTE;
	v->a[125296] = anon_sym_DOLLAR_BQUOTE;
	v->a[125297] = anon_sym_LT_LPAREN;
	v->a[125298] = anon_sym_GT_LPAREN;
	v->a[125299] = aux_sym__simple_variable_name_token1;
	small_parse_table_6265(v);
}

/* EOF small_parse_table_1252.c */
