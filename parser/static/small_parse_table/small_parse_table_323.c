/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_323.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1615(t_small_parse_table_array *v)
{
	v->a[32300] = anon_sym_PLUS_EQ;
	v->a[32301] = anon_sym_DASH_EQ;
	v->a[32302] = anon_sym_STAR_EQ;
	v->a[32303] = anon_sym_SLASH_EQ;
	v->a[32304] = anon_sym_PERCENT_EQ;
	v->a[32305] = anon_sym_LT_LT_EQ;
	v->a[32306] = anon_sym_GT_GT_EQ;
	v->a[32307] = anon_sym_AMP_EQ;
	v->a[32308] = anon_sym_CARET_EQ;
	v->a[32309] = anon_sym_PIPE_EQ;
	v->a[32310] = 7;
	v->a[32311] = actions(3);
	v->a[32312] = 1;
	v->a[32313] = sym_comment;
	v->a[32314] = actions(926);
	v->a[32315] = 1;
	v->a[32316] = sym_variable_name;
	v->a[32317] = actions(976);
	v->a[32318] = 1;
	v->a[32319] = sym_file_descriptor;
	small_parse_table_1616(v);
}

void	small_parse_table_1616(t_small_parse_table_array *v)
{
	v->a[32320] = state(1298);
	v->a[32321] = 2;
	v->a[32322] = sym_variable_assignment;
	v->a[32323] = aux_sym__variable_assignments_repeat1;
	v->a[32324] = state(1268);
	v->a[32325] = 3;
	v->a[32326] = sym_file_redirect;
	v->a[32327] = sym_heredoc_redirect;
	v->a[32328] = aux_sym_redirected_statement_repeat1;
	v->a[32329] = actions(678);
	v->a[32330] = 9;
	v->a[32331] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32332] = anon_sym_DOLLAR;
	v->a[32333] = anon_sym_DQUOTE;
	v->a[32334] = sym_raw_string;
	v->a[32335] = sym_number;
	v->a[32336] = anon_sym_DOLLAR_LBRACE;
	v->a[32337] = anon_sym_DOLLAR_LPAREN;
	v->a[32338] = anon_sym_BQUOTE;
	v->a[32339] = sym_word;
	small_parse_table_1617(v);
}

void	small_parse_table_1617(t_small_parse_table_array *v)
{
	v->a[32340] = actions(682);
	v->a[32341] = 17;
	v->a[32342] = anon_sym_PIPE;
	v->a[32343] = anon_sym_SEMI_SEMI;
	v->a[32344] = anon_sym_AMP_AMP;
	v->a[32345] = anon_sym_PIPE_PIPE;
	v->a[32346] = anon_sym_LT;
	v->a[32347] = anon_sym_GT;
	v->a[32348] = anon_sym_GT_GT;
	v->a[32349] = anon_sym_LT_AMP;
	v->a[32350] = anon_sym_GT_AMP;
	v->a[32351] = anon_sym_GT_PIPE;
	v->a[32352] = anon_sym_LT_AMP_DASH;
	v->a[32353] = anon_sym_GT_AMP_DASH;
	v->a[32354] = anon_sym_LT_LT;
	v->a[32355] = anon_sym_LT_LT_DASH;
	v->a[32356] = aux_sym_heredoc_redirect_token1;
	v->a[32357] = anon_sym_AMP;
	v->a[32358] = anon_sym_SEMI;
	v->a[32359] = 17;
	small_parse_table_1618(v);
}

void	small_parse_table_1618(t_small_parse_table_array *v)
{
	v->a[32360] = actions(842);
	v->a[32361] = 1;
	v->a[32362] = anon_sym_PIPE;
	v->a[32363] = actions(844);
	v->a[32364] = 1;
	v->a[32365] = anon_sym_AMP_AMP;
	v->a[32366] = actions(846);
	v->a[32367] = 1;
	v->a[32368] = anon_sym_PIPE_PIPE;
	v->a[32369] = actions(856);
	v->a[32370] = 1;
	v->a[32371] = anon_sym_CARET;
	v->a[32372] = actions(858);
	v->a[32373] = 1;
	v->a[32374] = anon_sym_AMP;
	v->a[32375] = actions(870);
	v->a[32376] = 1;
	v->a[32377] = sym_comment;
	v->a[32378] = actions(1021);
	v->a[32379] = 1;
	small_parse_table_1619(v);
}

void	small_parse_table_1619(t_small_parse_table_array *v)
{
	v->a[32380] = anon_sym_EQ;
	v->a[32381] = actions(1023);
	v->a[32382] = 1;
	v->a[32383] = anon_sym_QMARK;
	v->a[32384] = actions(1208);
	v->a[32385] = 1;
	v->a[32386] = anon_sym_RPAREN_RPAREN;
	v->a[32387] = actions(850);
	v->a[32388] = 2;
	v->a[32389] = anon_sym_LT;
	v->a[32390] = anon_sym_GT;
	v->a[32391] = actions(852);
	v->a[32392] = 2;
	v->a[32393] = anon_sym_GT_GT;
	v->a[32394] = anon_sym_LT_LT;
	v->a[32395] = actions(860);
	v->a[32396] = 2;
	v->a[32397] = anon_sym_EQ_EQ;
	v->a[32398] = anon_sym_BANG_EQ;
	v->a[32399] = actions(862);
	small_parse_table_1620(v);
}

/* EOF small_parse_table_323.c */
