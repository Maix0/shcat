/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_763.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3815(t_small_parse_table_array *v)
{
	v->a[76300] = sym_file_redirect;
	v->a[76301] = sym_heredoc_redirect;
	v->a[76302] = aux_sym_redirected_statement_repeat1;
	v->a[76303] = actions(4253);
	v->a[76304] = 16;
	v->a[76305] = anon_sym_PIPE_PIPE;
	v->a[76306] = anon_sym_AMP_AMP;
	v->a[76307] = anon_sym_PIPE;
	v->a[76308] = anon_sym_LT;
	v->a[76309] = anon_sym_GT;
	v->a[76310] = anon_sym_LT_LT;
	v->a[76311] = anon_sym_GT_GT;
	v->a[76312] = anon_sym_PIPE_AMP;
	v->a[76313] = anon_sym_AMP_GT;
	v->a[76314] = anon_sym_AMP_GT_GT;
	v->a[76315] = anon_sym_LT_AMP;
	v->a[76316] = anon_sym_GT_AMP;
	v->a[76317] = anon_sym_GT_PIPE;
	v->a[76318] = anon_sym_LT_AMP_DASH;
	v->a[76319] = anon_sym_GT_AMP_DASH;
	small_parse_table_3816(v);
}

void	small_parse_table_3816(t_small_parse_table_array *v)
{
	v->a[76320] = anon_sym_LT_LT_DASH;
	v->a[76321] = actions(4247);
	v->a[76322] = 18;
	v->a[76323] = anon_sym_LPAREN_LPAREN;
	v->a[76324] = anon_sym_LT_LT_LT;
	v->a[76325] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76326] = anon_sym_DOLLAR_LBRACK;
	v->a[76327] = anon_sym_DOLLAR;
	v->a[76328] = sym__special_character;
	v->a[76329] = anon_sym_DQUOTE;
	v->a[76330] = sym_raw_string;
	v->a[76331] = sym_ansi_c_string;
	v->a[76332] = aux_sym_number_token1;
	v->a[76333] = aux_sym_number_token2;
	v->a[76334] = anon_sym_DOLLAR_LBRACE;
	v->a[76335] = anon_sym_DOLLAR_LPAREN;
	v->a[76336] = anon_sym_BQUOTE;
	v->a[76337] = anon_sym_DOLLAR_BQUOTE;
	v->a[76338] = anon_sym_LT_LPAREN;
	v->a[76339] = anon_sym_GT_LPAREN;
	small_parse_table_3817(v);
}

void	small_parse_table_3817(t_small_parse_table_array *v)
{
	v->a[76340] = sym_word;
	v->a[76341] = 3;
	v->a[76342] = actions(3);
	v->a[76343] = 1;
	v->a[76344] = sym_comment;
	v->a[76345] = actions(1350);
	v->a[76346] = 6;
	v->a[76347] = sym_file_descriptor;
	v->a[76348] = sym__concat;
	v->a[76349] = sym_variable_name;
	v->a[76350] = sym_test_operator;
	v->a[76351] = sym__brace_start;
	v->a[76352] = aux_sym_heredoc_redirect_token1;
	v->a[76353] = actions(1348);
	v->a[76354] = 39;
	v->a[76355] = anon_sym_LPAREN_LPAREN;
	v->a[76356] = anon_sym_SEMI;
	v->a[76357] = anon_sym_PIPE_PIPE;
	v->a[76358] = anon_sym_AMP_AMP;
	v->a[76359] = anon_sym_PIPE;
	small_parse_table_3818(v);
}

void	small_parse_table_3818(t_small_parse_table_array *v)
{
	v->a[76360] = anon_sym_AMP;
	v->a[76361] = anon_sym_LT;
	v->a[76362] = anon_sym_GT;
	v->a[76363] = anon_sym_LT_LT;
	v->a[76364] = anon_sym_GT_GT;
	v->a[76365] = anon_sym_RPAREN;
	v->a[76366] = anon_sym_SEMI_SEMI;
	v->a[76367] = anon_sym_PIPE_AMP;
	v->a[76368] = anon_sym_AMP_GT;
	v->a[76369] = anon_sym_AMP_GT_GT;
	v->a[76370] = anon_sym_LT_AMP;
	v->a[76371] = anon_sym_GT_AMP;
	v->a[76372] = anon_sym_GT_PIPE;
	v->a[76373] = anon_sym_LT_AMP_DASH;
	v->a[76374] = anon_sym_GT_AMP_DASH;
	v->a[76375] = anon_sym_LT_LT_DASH;
	v->a[76376] = anon_sym_LT_LT_LT;
	v->a[76377] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76378] = anon_sym_DOLLAR_LBRACK;
	v->a[76379] = aux_sym_concatenation_token1;
	small_parse_table_3819(v);
}

void	small_parse_table_3819(t_small_parse_table_array *v)
{
	v->a[76380] = anon_sym_DOLLAR;
	v->a[76381] = sym__special_character;
	v->a[76382] = anon_sym_DQUOTE;
	v->a[76383] = sym_raw_string;
	v->a[76384] = sym_ansi_c_string;
	v->a[76385] = aux_sym_number_token1;
	v->a[76386] = aux_sym_number_token2;
	v->a[76387] = anon_sym_DOLLAR_LBRACE;
	v->a[76388] = anon_sym_DOLLAR_LPAREN;
	v->a[76389] = anon_sym_BQUOTE;
	v->a[76390] = anon_sym_DOLLAR_BQUOTE;
	v->a[76391] = anon_sym_LT_LPAREN;
	v->a[76392] = anon_sym_GT_LPAREN;
	v->a[76393] = sym_word;
	v->a[76394] = 3;
	v->a[76395] = actions(3);
	v->a[76396] = 1;
	v->a[76397] = sym_comment;
	v->a[76398] = actions(4554);
	v->a[76399] = 5;
	small_parse_table_3820(v);
}

/* EOF small_parse_table_763.c */
