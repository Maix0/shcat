/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_962.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4810(t_small_parse_table_array *v)
{
	v->a[96200] = sym_word;
	v->a[96201] = actions(1346);
	v->a[96202] = 27;
	v->a[96203] = sym_file_descriptor;
	v->a[96204] = sym__concat;
	v->a[96205] = sym_test_operator;
	v->a[96206] = sym__bare_dollar;
	v->a[96207] = sym__brace_start;
	v->a[96208] = anon_sym_LPAREN_LPAREN;
	v->a[96209] = anon_sym_PIPE_PIPE;
	v->a[96210] = anon_sym_AMP_AMP;
	v->a[96211] = anon_sym_GT_GT;
	v->a[96212] = anon_sym_PIPE_AMP;
	v->a[96213] = anon_sym_AMP_GT_GT;
	v->a[96214] = anon_sym_GT_PIPE;
	v->a[96215] = anon_sym_LT_AMP_DASH;
	v->a[96216] = anon_sym_GT_AMP_DASH;
	v->a[96217] = anon_sym_LT_LT_DASH;
	v->a[96218] = anon_sym_LT_LT_LT;
	v->a[96219] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4811(v);
}

void	small_parse_table_4811(t_small_parse_table_array *v)
{
	v->a[96220] = anon_sym_DOLLAR_LBRACK;
	v->a[96221] = aux_sym_concatenation_token1;
	v->a[96222] = sym__special_character;
	v->a[96223] = anon_sym_DQUOTE;
	v->a[96224] = sym_raw_string;
	v->a[96225] = sym_ansi_c_string;
	v->a[96226] = anon_sym_DOLLAR_LBRACE;
	v->a[96227] = anon_sym_DOLLAR_BQUOTE;
	v->a[96228] = anon_sym_LT_LPAREN;
	v->a[96229] = anon_sym_GT_LPAREN;
	v->a[96230] = 3;
	v->a[96231] = actions(3);
	v->a[96232] = 1;
	v->a[96233] = sym_comment;
	v->a[96234] = actions(2074);
	v->a[96235] = 5;
	v->a[96236] = sym_file_descriptor;
	v->a[96237] = sym_variable_name;
	v->a[96238] = sym_test_operator;
	v->a[96239] = sym__brace_start;
	small_parse_table_4812(v);
}

void	small_parse_table_4812(t_small_parse_table_array *v)
{
	v->a[96240] = aux_sym_heredoc_redirect_token1;
	v->a[96241] = actions(2072);
	v->a[96242] = 38;
	v->a[96243] = anon_sym_LPAREN_LPAREN;
	v->a[96244] = anon_sym_SEMI;
	v->a[96245] = anon_sym_PIPE_PIPE;
	v->a[96246] = anon_sym_AMP_AMP;
	v->a[96247] = anon_sym_PIPE;
	v->a[96248] = anon_sym_AMP;
	v->a[96249] = anon_sym_LT;
	v->a[96250] = anon_sym_GT;
	v->a[96251] = anon_sym_LT_LT;
	v->a[96252] = anon_sym_GT_GT;
	v->a[96253] = anon_sym_RPAREN;
	v->a[96254] = anon_sym_SEMI_SEMI;
	v->a[96255] = anon_sym_PIPE_AMP;
	v->a[96256] = anon_sym_AMP_GT;
	v->a[96257] = anon_sym_AMP_GT_GT;
	v->a[96258] = anon_sym_LT_AMP;
	v->a[96259] = anon_sym_GT_AMP;
	small_parse_table_4813(v);
}

void	small_parse_table_4813(t_small_parse_table_array *v)
{
	v->a[96260] = anon_sym_GT_PIPE;
	v->a[96261] = anon_sym_LT_AMP_DASH;
	v->a[96262] = anon_sym_GT_AMP_DASH;
	v->a[96263] = anon_sym_LT_LT_DASH;
	v->a[96264] = anon_sym_LT_LT_LT;
	v->a[96265] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[96266] = anon_sym_DOLLAR_LBRACK;
	v->a[96267] = anon_sym_DOLLAR;
	v->a[96268] = sym__special_character;
	v->a[96269] = anon_sym_DQUOTE;
	v->a[96270] = sym_raw_string;
	v->a[96271] = sym_ansi_c_string;
	v->a[96272] = aux_sym_number_token1;
	v->a[96273] = aux_sym_number_token2;
	v->a[96274] = anon_sym_DOLLAR_LBRACE;
	v->a[96275] = anon_sym_DOLLAR_LPAREN;
	v->a[96276] = anon_sym_BQUOTE;
	v->a[96277] = anon_sym_DOLLAR_BQUOTE;
	v->a[96278] = anon_sym_LT_LPAREN;
	v->a[96279] = anon_sym_GT_LPAREN;
	small_parse_table_4814(v);
}

void	small_parse_table_4814(t_small_parse_table_array *v)
{
	v->a[96280] = sym_word;
	v->a[96281] = 3;
	v->a[96282] = actions(3);
	v->a[96283] = 1;
	v->a[96284] = sym_comment;
	v->a[96285] = actions(4554);
	v->a[96286] = 5;
	v->a[96287] = sym_file_descriptor;
	v->a[96288] = sym_variable_name;
	v->a[96289] = sym_test_operator;
	v->a[96290] = sym__brace_start;
	v->a[96291] = aux_sym_heredoc_redirect_token1;
	v->a[96292] = actions(4552);
	v->a[96293] = 38;
	v->a[96294] = anon_sym_LPAREN_LPAREN;
	v->a[96295] = anon_sym_SEMI;
	v->a[96296] = anon_sym_PIPE_PIPE;
	v->a[96297] = anon_sym_AMP_AMP;
	v->a[96298] = anon_sym_PIPE;
	v->a[96299] = anon_sym_AMP;
	small_parse_table_4815(v);
}

/* EOF small_parse_table_962.c */
