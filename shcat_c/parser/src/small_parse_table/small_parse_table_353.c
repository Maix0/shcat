/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_353.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1765(t_small_parse_table_array *v)
{
	v->a[35300] = 2;
	v->a[35301] = anon_sym_LT_LPAREN;
	v->a[35302] = anon_sym_GT_LPAREN;
	v->a[35303] = actions(2498);
	v->a[35304] = 7;
	v->a[35305] = anon_sym_PIPE;
	v->a[35306] = anon_sym_LT;
	v->a[35307] = anon_sym_GT;
	v->a[35308] = anon_sym_LT_LT;
	v->a[35309] = anon_sym_AMP_GT;
	v->a[35310] = anon_sym_LT_AMP;
	v->a[35311] = anon_sym_GT_AMP;
	v->a[35312] = state(5178);
	v->a[35313] = 9;
	v->a[35314] = sym_arithmetic_expansion;
	v->a[35315] = sym_brace_expression;
	v->a[35316] = sym_string;
	v->a[35317] = sym_translated_string;
	v->a[35318] = sym_number;
	v->a[35319] = sym_simple_expansion;
	small_parse_table_1766(v);
}

void	small_parse_table_1766(t_small_parse_table_array *v)
{
	v->a[35320] = sym_expansion;
	v->a[35321] = sym_command_substitution;
	v->a[35322] = sym_process_substitution;
	v->a[35323] = actions(2500);
	v->a[35324] = 12;
	v->a[35325] = sym_file_descriptor;
	v->a[35326] = anon_sym_PIPE_PIPE;
	v->a[35327] = anon_sym_AMP_AMP;
	v->a[35328] = anon_sym_GT_GT;
	v->a[35329] = anon_sym_PIPE_AMP;
	v->a[35330] = anon_sym_RBRACK;
	v->a[35331] = anon_sym_AMP_GT_GT;
	v->a[35332] = anon_sym_GT_PIPE;
	v->a[35333] = anon_sym_LT_AMP_DASH;
	v->a[35334] = anon_sym_GT_AMP_DASH;
	v->a[35335] = anon_sym_LT_LT_DASH;
	v->a[35336] = anon_sym_LT_LT_LT;
	v->a[35337] = 7;
	v->a[35338] = actions(3);
	v->a[35339] = 1;
	small_parse_table_1767(v);
}

void	small_parse_table_1767(t_small_parse_table_array *v)
{
	v->a[35340] = sym_comment;
	v->a[35341] = actions(1278);
	v->a[35342] = 1;
	v->a[35343] = anon_sym_LPAREN;
	v->a[35344] = actions(4699);
	v->a[35345] = 1;
	v->a[35346] = aux_sym_concatenation_token1;
	v->a[35347] = actions(4701);
	v->a[35348] = 1;
	v->a[35349] = sym__concat;
	v->a[35350] = state(947);
	v->a[35351] = 1;
	v->a[35352] = aux_sym_concatenation_repeat1;
	v->a[35353] = actions(1281);
	v->a[35354] = 5;
	v->a[35355] = sym_file_descriptor;
	v->a[35356] = sym_test_operator;
	v->a[35357] = sym__bare_dollar;
	v->a[35358] = sym__brace_start;
	v->a[35359] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1768(v);
}

void	small_parse_table_1768(t_small_parse_table_array *v)
{
	v->a[35360] = actions(1271);
	v->a[35361] = 40;
	v->a[35362] = anon_sym_LPAREN_LPAREN;
	v->a[35363] = anon_sym_SEMI;
	v->a[35364] = anon_sym_PIPE_PIPE;
	v->a[35365] = anon_sym_AMP_AMP;
	v->a[35366] = anon_sym_PIPE;
	v->a[35367] = anon_sym_AMP;
	v->a[35368] = anon_sym_EQ_EQ;
	v->a[35369] = anon_sym_LT;
	v->a[35370] = anon_sym_GT;
	v->a[35371] = anon_sym_LT_LT;
	v->a[35372] = anon_sym_GT_GT;
	v->a[35373] = anon_sym_RPAREN;
	v->a[35374] = anon_sym_SEMI_SEMI;
	v->a[35375] = anon_sym_PIPE_AMP;
	v->a[35376] = anon_sym_EQ_TILDE;
	v->a[35377] = anon_sym_AMP_GT;
	v->a[35378] = anon_sym_AMP_GT_GT;
	v->a[35379] = anon_sym_LT_AMP;
	small_parse_table_1769(v);
}

void	small_parse_table_1769(t_small_parse_table_array *v)
{
	v->a[35380] = anon_sym_GT_AMP;
	v->a[35381] = anon_sym_GT_PIPE;
	v->a[35382] = anon_sym_LT_AMP_DASH;
	v->a[35383] = anon_sym_GT_AMP_DASH;
	v->a[35384] = anon_sym_LT_LT_DASH;
	v->a[35385] = anon_sym_LT_LT_LT;
	v->a[35386] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35387] = anon_sym_DOLLAR_LBRACK;
	v->a[35388] = anon_sym_DOLLAR;
	v->a[35389] = sym__special_character;
	v->a[35390] = anon_sym_DQUOTE;
	v->a[35391] = sym_raw_string;
	v->a[35392] = sym_ansi_c_string;
	v->a[35393] = aux_sym_number_token1;
	v->a[35394] = aux_sym_number_token2;
	v->a[35395] = anon_sym_DOLLAR_LBRACE;
	v->a[35396] = anon_sym_DOLLAR_LPAREN;
	v->a[35397] = anon_sym_BQUOTE;
	v->a[35398] = anon_sym_DOLLAR_BQUOTE;
	v->a[35399] = anon_sym_LT_LPAREN;
	small_parse_table_1770(v);
}

/* EOF small_parse_table_353.c */
