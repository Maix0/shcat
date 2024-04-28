/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2852.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14260(t_small_parse_table_array *v)
{
	v->a[285200] = sym_file_descriptor;
	v->a[285201] = actions(5992);
	v->a[285202] = 2;
	v->a[285203] = anon_sym_PIPE_PIPE;
	v->a[285204] = anon_sym_AMP_AMP;
	v->a[285205] = actions(12502);
	v->a[285206] = 2;
	v->a[285207] = anon_sym_LT_AMP_DASH;
	v->a[285208] = anon_sym_GT_AMP_DASH;
	v->a[285209] = actions(12500);
	v->a[285210] = 3;
	v->a[285211] = anon_sym_GT_GT;
	v->a[285212] = anon_sym_AMP_GT_GT;
	v->a[285213] = anon_sym_GT_PIPE;
	v->a[285214] = state(5350);
	v->a[285215] = 3;
	v->a[285216] = sym_file_redirect;
	v->a[285217] = sym_heredoc_redirect;
	v->a[285218] = aux_sym_redirected_statement_repeat1;
	v->a[285219] = actions(12498);
	small_parse_table_14261(v);
}

void	small_parse_table_14261(t_small_parse_table_array *v)
{
	v->a[285220] = 5;
	v->a[285221] = anon_sym_LT;
	v->a[285222] = anon_sym_GT;
	v->a[285223] = anon_sym_AMP_GT;
	v->a[285224] = anon_sym_LT_AMP;
	v->a[285225] = anon_sym_GT_AMP;
	v->a[285226] = 3;
	v->a[285227] = actions(71);
	v->a[285228] = 1;
	v->a[285229] = sym_comment;
	v->a[285230] = actions(12734);
	v->a[285231] = 6;
	v->a[285232] = anon_sym_LPAREN;
	v->a[285233] = anon_sym_DOLLAR;
	v->a[285234] = aux_sym_number_token1;
	v->a[285235] = aux_sym_number_token2;
	v->a[285236] = anon_sym_DOLLAR_LPAREN;
	v->a[285237] = sym_word;
	v->a[285238] = actions(12736);
	v->a[285239] = 15;
	small_parse_table_14262(v);
}

void	small_parse_table_14262(t_small_parse_table_array *v)
{
	v->a[285240] = sym_test_operator;
	v->a[285241] = sym_extglob_pattern;
	v->a[285242] = sym__brace_start;
	v->a[285243] = anon_sym_LPAREN_LPAREN;
	v->a[285244] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[285245] = anon_sym_DOLLAR_LBRACK;
	v->a[285246] = sym__special_character;
	v->a[285247] = anon_sym_DQUOTE;
	v->a[285248] = sym_raw_string;
	v->a[285249] = sym_ansi_c_string;
	v->a[285250] = anon_sym_DOLLAR_LBRACE;
	v->a[285251] = anon_sym_BQUOTE;
	v->a[285252] = anon_sym_DOLLAR_BQUOTE;
	v->a[285253] = anon_sym_LT_LPAREN;
	v->a[285254] = anon_sym_GT_LPAREN;
	v->a[285255] = 3;
	v->a[285256] = actions(71);
	v->a[285257] = 1;
	v->a[285258] = sym_comment;
	v->a[285259] = actions(12670);
	small_parse_table_14263(v);
}

void	small_parse_table_14263(t_small_parse_table_array *v)
{
	v->a[285260] = 6;
	v->a[285261] = anon_sym_LPAREN;
	v->a[285262] = anon_sym_DOLLAR;
	v->a[285263] = aux_sym_number_token1;
	v->a[285264] = aux_sym_number_token2;
	v->a[285265] = anon_sym_DOLLAR_LPAREN;
	v->a[285266] = sym_word;
	v->a[285267] = actions(12672);
	v->a[285268] = 15;
	v->a[285269] = sym_test_operator;
	v->a[285270] = sym_extglob_pattern;
	v->a[285271] = sym__brace_start;
	v->a[285272] = anon_sym_LPAREN_LPAREN;
	v->a[285273] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[285274] = anon_sym_DOLLAR_LBRACK;
	v->a[285275] = sym__special_character;
	v->a[285276] = anon_sym_DQUOTE;
	v->a[285277] = sym_raw_string;
	v->a[285278] = sym_ansi_c_string;
	v->a[285279] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_14264(v);
}

void	small_parse_table_14264(t_small_parse_table_array *v)
{
	v->a[285280] = anon_sym_BQUOTE;
	v->a[285281] = anon_sym_DOLLAR_BQUOTE;
	v->a[285282] = anon_sym_LT_LPAREN;
	v->a[285283] = anon_sym_GT_LPAREN;
	v->a[285284] = 3;
	v->a[285285] = actions(71);
	v->a[285286] = 1;
	v->a[285287] = sym_comment;
	v->a[285288] = actions(12828);
	v->a[285289] = 6;
	v->a[285290] = anon_sym_LPAREN;
	v->a[285291] = anon_sym_DOLLAR;
	v->a[285292] = aux_sym_number_token1;
	v->a[285293] = aux_sym_number_token2;
	v->a[285294] = anon_sym_DOLLAR_LPAREN;
	v->a[285295] = sym_word;
	v->a[285296] = actions(12830);
	v->a[285297] = 15;
	v->a[285298] = sym_test_operator;
	v->a[285299] = sym_extglob_pattern;
	small_parse_table_14265(v);
}

/* EOF small_parse_table_2852.c */
