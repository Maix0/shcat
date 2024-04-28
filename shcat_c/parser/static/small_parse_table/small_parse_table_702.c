/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_702.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3510(t_small_parse_table_array *v)
{
	v->a[70200] = anon_sym_LPAREN_LPAREN;
	v->a[70201] = anon_sym_SEMI;
	v->a[70202] = anon_sym_PIPE_PIPE;
	v->a[70203] = anon_sym_AMP_AMP;
	v->a[70204] = anon_sym_PIPE;
	v->a[70205] = anon_sym_AMP;
	v->a[70206] = anon_sym_LT;
	v->a[70207] = anon_sym_GT;
	v->a[70208] = anon_sym_LT_LT;
	v->a[70209] = anon_sym_GT_GT;
	v->a[70210] = anon_sym_SEMI_SEMI;
	v->a[70211] = anon_sym_SEMI_AMP;
	v->a[70212] = anon_sym_SEMI_SEMI_AMP;
	v->a[70213] = anon_sym_PIPE_AMP;
	v->a[70214] = anon_sym_AMP_GT;
	v->a[70215] = anon_sym_AMP_GT_GT;
	v->a[70216] = anon_sym_LT_AMP;
	v->a[70217] = anon_sym_GT_AMP;
	v->a[70218] = anon_sym_GT_PIPE;
	v->a[70219] = anon_sym_LT_AMP_DASH;
	small_parse_table_3511(v);
}

void	small_parse_table_3511(t_small_parse_table_array *v)
{
	v->a[70220] = anon_sym_GT_AMP_DASH;
	v->a[70221] = anon_sym_LT_LT_DASH;
	v->a[70222] = anon_sym_LT_LT_LT;
	v->a[70223] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70224] = anon_sym_DOLLAR_LBRACK;
	v->a[70225] = aux_sym_concatenation_token1;
	v->a[70226] = anon_sym_DOLLAR;
	v->a[70227] = sym__special_character;
	v->a[70228] = anon_sym_DQUOTE;
	v->a[70229] = sym_raw_string;
	v->a[70230] = sym_ansi_c_string;
	v->a[70231] = aux_sym_number_token1;
	v->a[70232] = aux_sym_number_token2;
	v->a[70233] = anon_sym_DOLLAR_LBRACE;
	v->a[70234] = anon_sym_DOLLAR_LPAREN;
	v->a[70235] = anon_sym_BQUOTE;
	v->a[70236] = anon_sym_DOLLAR_BQUOTE;
	v->a[70237] = anon_sym_LT_LPAREN;
	v->a[70238] = anon_sym_GT_LPAREN;
	v->a[70239] = sym_word;
	small_parse_table_3512(v);
}

void	small_parse_table_3512(t_small_parse_table_array *v)
{
	v->a[70240] = 3;
	v->a[70241] = actions(3);
	v->a[70242] = 1;
	v->a[70243] = sym_comment;
	v->a[70244] = actions(1302);
	v->a[70245] = 7;
	v->a[70246] = sym_file_descriptor;
	v->a[70247] = sym__concat;
	v->a[70248] = sym_variable_name;
	v->a[70249] = sym_test_operator;
	v->a[70250] = sym__brace_start;
	v->a[70251] = ts_builtin_sym_end;
	v->a[70252] = aux_sym_heredoc_redirect_token1;
	v->a[70253] = actions(1300);
	v->a[70254] = 38;
	v->a[70255] = anon_sym_LPAREN_LPAREN;
	v->a[70256] = anon_sym_SEMI;
	v->a[70257] = anon_sym_PIPE_PIPE;
	v->a[70258] = anon_sym_AMP_AMP;
	v->a[70259] = anon_sym_PIPE;
	small_parse_table_3513(v);
}

void	small_parse_table_3513(t_small_parse_table_array *v)
{
	v->a[70260] = anon_sym_AMP;
	v->a[70261] = anon_sym_LT;
	v->a[70262] = anon_sym_GT;
	v->a[70263] = anon_sym_LT_LT;
	v->a[70264] = anon_sym_GT_GT;
	v->a[70265] = anon_sym_SEMI_SEMI;
	v->a[70266] = anon_sym_PIPE_AMP;
	v->a[70267] = anon_sym_AMP_GT;
	v->a[70268] = anon_sym_AMP_GT_GT;
	v->a[70269] = anon_sym_LT_AMP;
	v->a[70270] = anon_sym_GT_AMP;
	v->a[70271] = anon_sym_GT_PIPE;
	v->a[70272] = anon_sym_LT_AMP_DASH;
	v->a[70273] = anon_sym_GT_AMP_DASH;
	v->a[70274] = anon_sym_LT_LT_DASH;
	v->a[70275] = anon_sym_LT_LT_LT;
	v->a[70276] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70277] = anon_sym_DOLLAR_LBRACK;
	v->a[70278] = aux_sym_concatenation_token1;
	v->a[70279] = anon_sym_DOLLAR;
	small_parse_table_3514(v);
}

void	small_parse_table_3514(t_small_parse_table_array *v)
{
	v->a[70280] = sym__special_character;
	v->a[70281] = anon_sym_DQUOTE;
	v->a[70282] = sym_raw_string;
	v->a[70283] = sym_ansi_c_string;
	v->a[70284] = aux_sym_number_token1;
	v->a[70285] = aux_sym_number_token2;
	v->a[70286] = anon_sym_DOLLAR_LBRACE;
	v->a[70287] = anon_sym_DOLLAR_LPAREN;
	v->a[70288] = anon_sym_BQUOTE;
	v->a[70289] = anon_sym_DOLLAR_BQUOTE;
	v->a[70290] = anon_sym_LT_LPAREN;
	v->a[70291] = anon_sym_GT_LPAREN;
	v->a[70292] = sym_word;
	v->a[70293] = 3;
	v->a[70294] = actions(3);
	v->a[70295] = 1;
	v->a[70296] = sym_comment;
	v->a[70297] = actions(1298);
	v->a[70298] = 5;
	v->a[70299] = sym_file_descriptor;
	small_parse_table_3515(v);
}

/* EOF small_parse_table_702.c */
