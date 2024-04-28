/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1262.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6310(t_small_parse_table_array *v)
{
	v->a[126200] = anon_sym_PIPE;
	v->a[126201] = anon_sym_LT;
	v->a[126202] = anon_sym_GT;
	v->a[126203] = anon_sym_LT_LT;
	v->a[126204] = anon_sym_GT_GT;
	v->a[126205] = anon_sym_PIPE_AMP;
	v->a[126206] = anon_sym_AMP_GT;
	v->a[126207] = anon_sym_AMP_GT_GT;
	v->a[126208] = anon_sym_LT_AMP;
	v->a[126209] = anon_sym_GT_AMP;
	v->a[126210] = anon_sym_GT_PIPE;
	v->a[126211] = anon_sym_LT_AMP_DASH;
	v->a[126212] = anon_sym_GT_AMP_DASH;
	v->a[126213] = anon_sym_LT_LT_DASH;
	v->a[126214] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[126215] = anon_sym_DOLLAR_LBRACK;
	v->a[126216] = anon_sym_DOLLAR;
	v->a[126217] = sym__special_character;
	v->a[126218] = anon_sym_DQUOTE;
	v->a[126219] = sym_raw_string;
	small_parse_table_6311(v);
}

void	small_parse_table_6311(t_small_parse_table_array *v)
{
	v->a[126220] = sym_ansi_c_string;
	v->a[126221] = aux_sym_number_token1;
	v->a[126222] = aux_sym_number_token2;
	v->a[126223] = anon_sym_DOLLAR_LBRACE;
	v->a[126224] = anon_sym_DOLLAR_LPAREN;
	v->a[126225] = anon_sym_BQUOTE;
	v->a[126226] = anon_sym_DOLLAR_BQUOTE;
	v->a[126227] = anon_sym_LT_LPAREN;
	v->a[126228] = anon_sym_GT_LPAREN;
	v->a[126229] = aux_sym__simple_variable_name_token1;
	v->a[126230] = sym_word;
	v->a[126231] = 6;
	v->a[126232] = actions(3);
	v->a[126233] = 1;
	v->a[126234] = sym_comment;
	v->a[126235] = actions(5920);
	v->a[126236] = 1;
	v->a[126237] = aux_sym_concatenation_token1;
	v->a[126238] = actions(6604);
	v->a[126239] = 1;
	small_parse_table_6312(v);
}

void	small_parse_table_6312(t_small_parse_table_array *v)
{
	v->a[126240] = sym__concat;
	v->a[126241] = state(1704);
	v->a[126242] = 1;
	v->a[126243] = aux_sym_concatenation_repeat1;
	v->a[126244] = actions(1267);
	v->a[126245] = 4;
	v->a[126246] = sym_file_descriptor;
	v->a[126247] = sym_test_operator;
	v->a[126248] = sym__brace_start;
	v->a[126249] = aux_sym_heredoc_redirect_token1;
	v->a[126250] = actions(1265);
	v->a[126251] = 34;
	v->a[126252] = anon_sym_LPAREN_LPAREN;
	v->a[126253] = anon_sym_PIPE_PIPE;
	v->a[126254] = anon_sym_AMP_AMP;
	v->a[126255] = anon_sym_PIPE;
	v->a[126256] = anon_sym_LT;
	v->a[126257] = anon_sym_GT;
	v->a[126258] = anon_sym_LT_LT;
	v->a[126259] = anon_sym_GT_GT;
	small_parse_table_6313(v);
}

void	small_parse_table_6313(t_small_parse_table_array *v)
{
	v->a[126260] = anon_sym_PIPE_AMP;
	v->a[126261] = anon_sym_AMP_GT;
	v->a[126262] = anon_sym_AMP_GT_GT;
	v->a[126263] = anon_sym_LT_AMP;
	v->a[126264] = anon_sym_GT_AMP;
	v->a[126265] = anon_sym_GT_PIPE;
	v->a[126266] = anon_sym_LT_AMP_DASH;
	v->a[126267] = anon_sym_GT_AMP_DASH;
	v->a[126268] = anon_sym_LT_LT_DASH;
	v->a[126269] = anon_sym_LT_LT_LT;
	v->a[126270] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[126271] = anon_sym_DOLLAR_LBRACK;
	v->a[126272] = anon_sym_DOLLAR;
	v->a[126273] = sym__special_character;
	v->a[126274] = anon_sym_DQUOTE;
	v->a[126275] = sym_raw_string;
	v->a[126276] = sym_ansi_c_string;
	v->a[126277] = aux_sym_number_token1;
	v->a[126278] = aux_sym_number_token2;
	v->a[126279] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_6314(v);
}

void	small_parse_table_6314(t_small_parse_table_array *v)
{
	v->a[126280] = anon_sym_DOLLAR_LPAREN;
	v->a[126281] = anon_sym_BQUOTE;
	v->a[126282] = anon_sym_DOLLAR_BQUOTE;
	v->a[126283] = anon_sym_LT_LPAREN;
	v->a[126284] = anon_sym_GT_LPAREN;
	v->a[126285] = sym_word;
	v->a[126286] = 5;
	v->a[126287] = actions(71);
	v->a[126288] = 1;
	v->a[126289] = sym_comment;
	v->a[126290] = state(2407);
	v->a[126291] = 1;
	v->a[126292] = aux_sym_concatenation_repeat1;
	v->a[126293] = actions(6564);
	v->a[126294] = 2;
	v->a[126295] = sym__concat;
	v->a[126296] = aux_sym_concatenation_token1;
	v->a[126297] = actions(5067);
	v->a[126298] = 14;
	v->a[126299] = anon_sym_PIPE;
	small_parse_table_6315(v);
}

/* EOF small_parse_table_1262.c */
